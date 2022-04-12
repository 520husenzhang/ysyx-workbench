#include "Vnpc_onecycle.h"

#include <verilated.h>     
#include "verilated_vcd_c.h"  
#include "stdio.h"
#include "stdlib.h"

VerilatedContext* contextp = NULL;  //仿真环境 
VerilatedVcdC* tfp = NULL;  //  波形

static Vnpc_onecycle *top;   //单周期  DUT  !!
#define  inst_ebreak     0x00100073
//存储器  指令  rom
uint32_t  ROM[4096]={
0x00000000,   
0x00000000,
0x00000000,
0x00000000,
0x00000013,
0x00108113,
0x00208113,
0x00308113,
0x00408113,
0x00508113,
0x00608113,
0x00708113,
0x00808113,
0x00000000,   
0x00000000,   
0x00000000,   
0x00000000,   
0x00000000,   
0x00000000,   
0x00000000,   
0x00000000,   
0x00000000,   
0x00000000,   
0x00000000,   
0x00000000,   
inst_ebreak

};    
//获取指令  
uint32_t  pmem_read(uint64_t pc,bool  ce )
{
    uint32_t ins_temp =0 ;  
   if(ce== true)
   {
    ins_temp= ROM[(pc-0x80000000)/4]   ;
  

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
  top = new Vnpc_onecycle;
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



    //对DUT的连接
    top->clk=0;
    top->rst_n=1;
    top->inst=0;


    top->eval();
    //loop 
  while (!contextp->gotFinish()) {
    

     step_and_dump_wave();
    
       //时钟翻转
       top->clk = !top->clk; 
       printf("now time is  %ld |||clk is %d \n", contextp->time(), top->clk);
        //下降沿复位
        if (!top->clk) {
            if (contextp->time() > 4 && contextp->time() < 8) {
                top->rst_n = 0;  // Assert reset
                     
            } else {
                top->rst_n = 1;  // Deassert reset
                  
            }
        }

 
       //获取指令
       if(pmem_read(top->pc,top->rom_ce)== inst_ebreak)  {
           break;      
       }

       //Evaluate model
    
     
       
       top->eval();
        top->inst = pmem_read(top->pc,top->rom_ce);
 
  }
    //退出仿真
    sim_exit();



}