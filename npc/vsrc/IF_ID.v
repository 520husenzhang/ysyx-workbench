//ysyx_22040422  张虎森
//
`include "defines.v"

module IF_ID(
    input wire clk,  
    input wire rst_n, 
    
    input  wire        [`Hold_Flag_Bus] hold_flag_i                ,// 流水线暂停标志
    input  wire               pip_flush,   // 流水线 杀掉
    

	input wire[`InstAddrBus]			if_pc,
	input wire[`InstBus]          if_inst,
    
	output reg[`InstAddrBus]      id_pc,
	output reg[`InstBus]          id_inst  


);

always @( posedge clk) begin
     if(rst_n==`RstDisable)     begin
        id_pc <= `ZeroWord;
        id_inst <= `NO_Inst;   //
     end else begin
      id_pc <= if_pc;
      id_inst <= if_inst;
      end
end











endmodule

