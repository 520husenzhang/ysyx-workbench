#include "Vrisc_v.h"
#include <verilated.h>
#include "verilated_vcd_c.h"

VerilatedContext* contextp = NULL;  //仿真环境 
VerilatedVcdC* tfp = NULL;  //  波形

static Vrisc_v* top;   //risc_v DUT  !!

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
  //对DUT的连接
    top->clk=0;
    top->rst_n=1;

    //loop 
  while (!contextp->gotFinish()) {

     step_and_dump_wave();
       //时钟翻转
       top->clk = !top->clk; 
        //复位
        if (!top->clk) {
            if (contextp->time() > 3 && contextp->time() < 10) {
                top->rst_n = 0;  // Assert reset
            } else {
                top->rst_n = 1;  // Deassert reset
            }
        }
 
      // Evaluate model
       top->eval();
 
  }
    //退出仿真
    sim_exit();


}