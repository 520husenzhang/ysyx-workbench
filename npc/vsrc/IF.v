
// 取指阶段模块
//  张虎森
//

`include "defines.v"
module IF(
     input wire  clk,
     input wire  rst_n,
     //S
     output wire[31:0]           inst_o,
	 output wire [`InstAddrBus]    if_pc
	); 
reg [`InstAddrBus] PC;
reg  rom_ce;
assign if_pc=PC;

   always @(posedge clk ) begin
   	if (rst_n==`RstDisable) begin
   		// reset
   		PC<=0;
   	end
   	else    begin
   	    PC<=PC+1;
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

