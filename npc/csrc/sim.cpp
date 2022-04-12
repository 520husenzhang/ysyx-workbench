#include "Vnpc_onecycle.h"

#include <verilated.h>     
#include "verilated_vcd_c.h"  
#include "stdio.h"
#include "stdlib.h"


//  模块 连接
// npc_onecycle u_npc_onecycle(
//input 
//     .clk        ( clk        ),
//     .rst_n      ( rst_n      ),

//     .inst       ( inst       ),
//     .mem_rdata  ( mem_rdata  ),


// output  
//     .pc         ( pc         ),
//     .mem_wdata  ( mem_wdata  ),
//     .mem_waddr  ( mem_waddr  ),
//     .mem_raddr  ( mem_raddr  ),
//     .mem_we     ( mem_we     ),
//     .mem_ce     ( mem_ce     )

//     .rom_ce     ( rom_ce     ),
// );




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
//ram 数据存储
uint64_t  RAM[4096]={0,0,0};

//获取指令  
uint32_t  inst_read(uint64_t pc,bool  ce )
{
    uint32_t ins_temp =0 ;  
   if(ce== true)
   {
    ins_temp= ROM[(pc-0x80000000)/4]   ;
  

   }


 return  ins_temp;

}  


// 读写    ram    数据   
uint64_t  ram_read_write(uint64_t mem_wdata , uint64_t mem_waddr ,uint64_t mem_raddr, bool mem_we,bool mem_ce )
{

    if(mem_ce==1){
      if(mem_we==1)  //write
      {     
          RAM[mem_waddr]= mem_wdata;  
            return  0;

      }   
      else  //read
      {
        return     RAM[mem_raddr]   ;

      }
    }
    else 
           return 0  ;

}  


//对dut的连接   只连接 input
void  connect_dut()
{
   //对DUT的连接
    top->clk=0;
    top->rst_n=1;

    top->inst =0    ;
    top->mem_rdata =0 ;
     

    top->eval();
  
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
    connect_dut();


    //loop 
  while (!contextp->gotFinish()) {
    
         printf("now time is  %ld |||clk is %d \n", contextp->time(), top->clk);
     step_and_dump_wave();
    
       //时钟翻转
       top->clk = !top->clk; 

                printf(" jb \n");
        //下降沿复位
        if (!top->clk) {
            if (contextp->time() > 4 && contextp->time() < 8) {
                top->rst_n = 0;  // Assert reset
                  printf("1  \n");
                     
            } else {
                top->rst_n = 1;  // Deassert reset
                  printf("2  \n");
                  
            }
        }
        //上升沿写入数据
        if (top->clk){
          
              printf("fuck  \n");
            ram_read_write( top->mem_wdata ,  top->mem_waddr , top->mem_raddr,  top->mem_we,   top->mem_ce ) ; 



          
        }
      printf("before \n ");
       //Evaluate model
       top->eval();  //  上升沿  过后 都更新 一下  
      printf("after \n");
       //获取指令
       if(inst_read(top->pc,top->rom_ce)== inst_ebreak)  {
           break;      
       }
      top->inst = inst_read(top->pc,top->rom_ce);
      top->mem_rdata= ram_read_write( top->mem_wdata ,  top->mem_waddr , top->mem_raddr,  top->mem_we,   top->mem_ce ); 
  }






    //退出仿真
    sim_exit();



}