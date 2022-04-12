
// 取指阶段模块
//  张虎森
//

`include "defines.v"
module IF(
    input  wire                         clk                        ,
    input  wire                         rst_n                      ,
    
    input  wire        [`Hold_Flag_Bus] hold_flag_i                ,// 流水线暂停标志

    input  wire                         jump_flag_i                ,// 跳转标志
    input  wire        [`InstAddrBus]   jump_addr_i                ,// 跳转地址
     
     //S
    output wire        [  31:0]         inst_o                     ,//输出指令
    output wire        [`InstAddrBus]   if_pc                      ,// 对外PC指针
    output wire                         hold_flag_o  //请求暂停流水线
    );
reg [`InstAddrBus] PC;
reg  rom_ce;
assign if_pc=PC;

   always @(posedge clk ) begin
   	if (rst_n==`RstDisable) begin// 复位
   		// reset
   		PC<=32'h80000000;
   	end
   else if(jump_flag_i == `Jump_Enable)  // 跳转
	    PC <= jump_addr_i;  
   	else    begin
   	    PC<=PC+'d4;
   	end
   end

   always @ (posedge clk ) begin
		if (rst_n==`RstDisable) begin
			rom_ce <= 1'b0;
		end else begin
			rom_ce <= 1'b1;
		end
	end




ROM inst_ROM (.ce(rom_ce), 
              .addr(PC), 
              .inst(inst_o)
              );




endmodule

