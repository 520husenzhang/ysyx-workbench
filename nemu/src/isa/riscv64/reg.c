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

  printf("PC is %lx ",cpu.pc);   //p

}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
