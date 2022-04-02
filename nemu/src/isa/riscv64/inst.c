#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_J, TYPE_R, TYPE_B,
  TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)


//完善不同type下取立即数的方式  SEXT  符号位扩展      BITS   位抽取    没有R
static word_t immI(uint32_t i) { return   SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return   SEXT(BITS(i, 31, 12), 20) << 12; }
//!!!!
static word_t immS(uint32_t i) { return   SEXT  ( (BITS(i, 31, 25) << 5) | BITS(i, 11, 7) , 12); }

   //uj  立即数  I 输入
static word_t immJ(uint32_t i) { return  SEXT( (BITS(i,31,31)<<20)|(BITS(i,30,21)<<1)|(BITS(i,20,20)<<11)|(BITS(i,19,12)<<12) ,20); }  //mm[20|10:1|11|19:12]  rd  opcode

   //sb  立即数
static word_t immB (uint32_t i) { return  SEXT  ( ( BITS(i,31,31)<<12)|(BITS(i,30,25)<<5)|(BITS(i,11,8)<<1)|(BITS(i,7,7)<<11),12); } //imm[12|10:5]  rs2  rs1  funct3  imm[4:1|11]  opcode


static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;   //i  是指令值
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_I: src1R(rs1);     src2I(immI(i)); break;
    case TYPE_U: src1I(immU(i)); break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;

    case TYPE_J: src1I(immJ(i)) ;break;  //mm[20|10:1|11|19:12]  rd  opcode 
    case TYPE_R: src1R(rs1); src2R(rs2);  break;
    case TYPE_B: src1R(rs1); src2R(rs2);  destI(immB(i));    printf("imm is %ld\n", (*dest)  );   break;                      //有条件跳转

  }
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}
  //指令集实现
  INSTPAT_START();    //SEXT(,,)
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);  //将 20 位立即数加到 PC 上
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));  //在RV64I中，LD指令将从存储器中把64位数值写入到寄存器rd中
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
  
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   ,I, R(dest) = src1 + src2);  ///与立即数相加  src2 是立即数
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw   ,I, R(dest) = (SEXT(BITS(src1 + src2, 31, 0),32) ) );  ///与立即数相加  src2 是立即数  64 位专享 addw
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   ,I, (SEXT(BITS((BITS(src1,31,0)+ BITS(src2,31,0)),31,0),32)) );  //addw  64 位专享 
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    ,R, R(dest) = src1-src2);  ///
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  ,I,  R(dest) = (src1< (uint64_t) src2 ) );  ///sltiu
    //有问题                                             R(dest) = ( src1< src2
  //INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq   ,  B, s->dnpc= (src1==src2)? (s->pc+((dest ))));  ///beq          !!!! 
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq   ,  B, if(src1==src2) s->dnpc = s->pc + dest);                  
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne   ,  B, if(src1!=src2) s->dnpc = s->pc + dest );  ///beq   !!                                                      
                              
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    ,J, R(dest)=s->pc +4,  s->dnpc=s->pc+src1);  ///有条件跳转    src2 是立即数 jal  ！！！！
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   ,I, R(dest)=s->pc +4;s->dnpc=((src2+src1)&(-1)) );       ///有条件跳转    src2 是立即数 jal  ！！！！     
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw   ,I, R(dest) = SEXT(Mr(src1 + src2, 4) ,32)); //lw  !!!!!!!1
                                                               
     
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is  
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
