#include <isa.h>
#include "local-include/reg.h"
extern CPU_state cpu ;  //cpu  状态变量


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
// 打印cpu 寄存器和pc
void isa_reg_display() { 
  printf("$0 is %lx ",cpu.gpr[0]); printf(" ra is %lx ",cpu.gpr[1]); printf(" sp is %lx",cpu.gpr[2]);printf(" gp is %lx",cpu.gpr[3]);printf(" tp is %lx",cpu.gpr[4]);printf(" t0 is %lx",cpu.gpr[5]);printf(" t1 is %lx",cpu.gpr[6]); printf(" t2 is %lx \n",cpu.gpr[7]);    //    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  printf("s0 is %lx ",cpu.gpr[8]); printf(" s1 is %lx ",cpu.gpr[9]); printf(" a0 is %lx",cpu.gpr[10]);printf(" a1 is %lx",cpu.gpr[11]);printf(" a2 is %lx",cpu.gpr[12]);printf(" a3 is %lx",cpu.gpr[13]);printf(" a4 is %lx",cpu.gpr[14]); printf(" a5 is %lx \n",cpu.gpr[15]);   //     "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  printf("a6 is %lx ",cpu.gpr[16]); printf(" a7 is %lx ",cpu.gpr[17]); printf(" s2 is %lx",cpu.gpr[18]);printf(" s3 is %lx",cpu.gpr[19]);printf(" s4 is %lx",cpu.gpr[20]);printf(" s5 is %lx",cpu.gpr[21]);printf(" s6 is %lx",cpu.gpr[22]); printf(" s7 is %lx\n",cpu.gpr[23]);  //     "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  printf("s8 is %lx ",cpu.gpr[24]); printf(" s9 is %lx ",cpu.gpr[25]); printf(" s10 is %lx",cpu.gpr[26]);printf(" s11 is %lx",cpu.gpr[27]);printf(" t3 is %lx",cpu.gpr[28]);printf(" t4 is %lx",cpu.gpr[29]);printf(" t5 is %lx",cpu.gpr[30]); printf(" t6 is %lx\n\n",cpu.gpr[31]);    //       "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"

  printf("PC is %lx\n",cpu.pc);   //p

}
//寄存器转值  包括 pc
word_t isa_reg_str2val(const char *s, bool *success) {

   int REG ;

   //1 
   if(strcmp("$0",s)==0)        REG= 0  ;
   else if(strcmp("$ra",s)==0) REG=  1 ;
   else if(strcmp("$sp",s)==0) REG= 2  ;
   else if(strcmp("$gp",s)==0) REG=  3 ;
   else if(strcmp("$tp",s)==0) REG=  4 ;
   else if(strcmp("$t0",s)==0) REG=  5 ;
   else if(strcmp("$t1",s)==0) REG=  6 ;
   else if(strcmp("$t2",s)==0) REG=  7 ;
  //2$s
   else if(strcmp("$s0",s)==0) REG= 8  ;
   else if(strcmp("$s1",s)==0) REG=  9 ;
   else if(strcmp("$a0",s)==0) REG=  10 ;
   else if(strcmp("$a1",s)==0) REG=  11 ;
   else if(strcmp("$a1",s)==0) REG=  12 ;
   else if(strcmp("$a3",s)==0) REG=  13 ;
   else if(strcmp("$a4",s)==0) REG=   14;
   else if(strcmp("$a5",s)==0) REG=  15 ;
  //3$s
   else if(strcmp("$a6",s)==0) REG=  16 ;
   else if(strcmp("$a7",s)==0) REG= 17  ;
   else if(strcmp("$s2",s)==0) REG= 18  ;
   else if(strcmp("$s3",s)==0) REG= 19  ;
   else if(strcmp("$s4",s)==0) REG=  20 ;
   else if(strcmp("$s5",s)==0) REG=  21 ;
   else if(strcmp("$s6",s)==0) REG=  22 ;
   else if(strcmp("$s7",s)==0) REG=  23 ;
//4$s
   else if(strcmp("$s8",s)==0) REG= 24  ;
   else if(strcmp("$s9",s)==0) REG= 25  ;
   else if(strcmp("$s10",s)==0) REG= 26  ;
   else if(strcmp("$s11",s)==0) REG=  27 ;
   else if(strcmp("$t3",s)==0) REG=  28 ;
   else if(strcmp("$t4",s)==0) REG=  29 ;
   else if(strcmp("$t5",s)==0) REG=  30 ;
   else if(strcmp("$t6",s)==0) REG=  31 ;
//pc
   else if(strcmp("$pc",s)==0) REG=  32 ;
//not found 
   else   REG= 35 ; 

 
  *success=true;   
  
   
   if((REG>=0)&&(REG<=31))  //GPR
   {return  cpu.gpr[REG] ; }
   
   else if(REG==32)
   {
      return  cpu.pc;
   }
   else 
   {
     printf("not find  any reg!!");
    *success=false;   

   }
  
   return 0 ;

}


