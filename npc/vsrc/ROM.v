//ysyx_22040422  张虎森
//指令rom 模块
//


`include "defines.v"


module 	 ROM(
	input wire                    ce,
	input wire[5:0]			addr,
	output reg[31:0]					inst
	);
  //64 inst
	reg[`InstBus]  rom[`RomNum-1:0];

//内容初始化
	initial $readmemh ( "rom.hex", rom );

	
	always @ (*) begin
		if (ce == 1'b0) begin
			inst <= 32'h0;
	  end else begin
		  inst <= rom[addr];
		end
	end


endmodule