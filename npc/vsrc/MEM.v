//  ysyx_22040422 
//  张虎森
//


`include "defines.v"

module MEM(

	input wire										rst_n,
	
	//来自执行阶段的信息	
	input wire[`RegAddrBus]       wd_i,
	input wire                    wreg_i,
	input wire[`RegBus]					  wdata_i,
	
	//送到回写阶段的信息
	output reg[`RegAddrBus]      wd_o,
	output reg                   wreg_o,
	output reg[`RegBus]					 wdata_o
	
);

	
	always @ (*) begin
		if(rst_n == `RstDisable) begin
			wd_o = `NOPRegAddr;
			wreg_o = `WriteDisable;
		  wdata_o = `ZeroWord;
		end else begin
		  wd_o = wd_i;
			wreg_o = wreg_i;
			wdata_o = wdata_i;
		end    //if
	end      //always
			

endmodule

