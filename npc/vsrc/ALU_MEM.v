// ysyx_22040422  
// 张虎森   
//

`include "defines.v"

module ALU_MEM (
    input wire										clk,
	input wire										rst_n,
	
	
	//来自执行阶段的信息	
	input wire[`RegAddrBus]       alu_wd,
	input wire                    alu_wreg,
	input wire[`RegBus]			  alu_wdata, 	
	
	//送到访存阶段的信息
	output reg[`RegAddrBus]      mem_wd,
	output reg                   mem_wreg,
	output reg[`RegBus]					 mem_wdata


);



always @ (posedge clk) begin
    if(rst_n == `RstDisable) begin
        mem_wd <= `NOPRegAddr;
        mem_wreg <= `WriteDisable;
      mem_wdata <= `ZeroWord;	
    end else begin
        mem_wd <= alu_wd;
        mem_wreg <= alu_wreg;
        mem_wdata <= alu_wdata;			
    end    
end      
        


endmodule 


