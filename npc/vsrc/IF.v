
// 取指阶段模块
//  张虎森
//

`include "defines.v"
module IF(
     input wire  clk,
     input wire  rst_n,
     //S
     output wire [`InstBus]         inst_o,
	 output wire [`InstAddrBus]    if_pc,
  
    //访问外部存储器
	 output wire   [`InstAddrBus] pc_rom,   
     input  wire   [`InstBus]inst_i  ,
	 output reg  rom_ce
	); 
reg [`InstAddrBus] PC;

reg  rom_ce;
assign if_pc=PC;
assign   pc_rom=PC ;
assign   inst_o= inst_i;

   always @(posedge clk ) begin
   	if (rst_n==`RstDisable) begin
   		// reset
   		PC<=64'h8000_0000;
   	end
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

// ROM inst_ROM (.ce(rom_ce), 
//               .addr(PC), 
//               .inst(inst_o)
//               );




endmodule

