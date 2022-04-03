#include "Vrisc_v.h"
#include <verilated.h>
#include "verilated_vcd_c.h"
#include "stdio.h"
#include "stdlib.h"

VerilatedContext* contextp = NULL;  //仿真环境 
VerilatedVcdC* tfp = NULL;  //  波形

static Vrisc_v*  top;   //risc_v DUT  !!
#define  inst_ebreak     0x00100073
//存储器  指令  rom
uint32_t  ROM[4096]={0x00000013,
0x00108113,
0x00208113,
0x00308113,
0x00408113,
0x00508113,
0x00608113,
0x00708113,
0x00808113,
inst_ebreak

};    
//获取指令  
uint32_t  pmem_read(uint64_t pc,bool  ce )
{
    uint32_t ins_temp =0 ;  
   if(ce== true)
   {
    ins_temp= ROM[pc-0x80000000]   ;
  

   }


 return  ins_temp;

}  


//布进和写波形
void step_and_dump_wave(){
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
//初始化
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vrisc_v;
  contextp->traceEverOn(true);  //打开 波形  
  top->trace(tfp, 99);
  tfp->open("dump.vcd");
}
//退出
void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

//主函数 
int main() {
  
   //仿真环境  初始化  
  
  sim_init();
   printf("1\n");
  //对DUT的连接
    top->clk=0;
    top->rst_n=1;
    top->inst=0;
  printf("2\n");
    //loop 
  while (!contextp->gotFinish()) {
    

     step_and_dump_wave();
    
     printf("now time is %ld \n", contextp->time());
       //时钟翻转
       top->clk = !top->clk; 
        //复位
        if (!top->clk) {
            if (contextp->time() > 4 && contextp->time() < 8) {
                top->rst_n = 0;  // Assert reset
                      printf("fuck\n");  
            } else {
                top->rst_n = 1;  // Deassert reset
                  printf("3.0\n");
            }
        }
       //获取指令
       if(pmem_read(top->pc,top->rom_ce)== inst_ebreak)
       {break;      printf("3.1\n");
       }
       else { 
          printf("pc is %ld \n",top->pc);
         top->inst = pmem_read(top->pc,top->rom_ce);
       }
      // Evaluate model
     
       top->eval();
 
  }
    //退出仿真
    sim_exit();



}