#include <nvboard.h>
#include <Vtop.h>

static TOP_NAME dut;  

void nvboard_bind_all_pins(Vtop* top);  // 接口连接



int main() {
  nvboard_bind_all_pins(&dut);  // 连接 nvboard
  nvboard_init();//初始化 nvboard



 /* while(1) {
    nvboard_update();  
    single_cycle();*/
//  }
 while (1)
 {
  dut.eval(); nvboard_update();
 
 }
 



}
