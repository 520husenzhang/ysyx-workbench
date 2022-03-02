#include "Vtop.h"
#include <verilated.h>
#include "verilated_vcd_c.h"

VerilatedContext* contextp = NULL;  //仿真环境 
VerilatedVcdC* tfp = NULL;  //  波形

static Vtop* top;   //DUT  !!

//布进和写波形
void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
//初始化
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
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
  sim_init();
  //对DUT的连接和操作
   top->a= 0; top->b=0 ;    step_and_dump_wave();
   top->a= 0; top->b= 1;    step_and_dump_wave();
   top->a= 1; top->b=0 ;    step_and_dump_wave();
   top->a= 1; top->b= 1;    step_and_dump_wave();
    sim_exit();


}