//risc_v最小soc系统搭建


`include "defines.v"



module   risc_v_soc(
    input  wire clk,
    input  wire rst_n

	);


risc_v  inst_risc_v
		(
			.clk        (clk),
			.rst_n      (rst_n),
			.rom_data_i (rom_data_i),
			.rom_addr_o (rom_addr_o),
			.rom_ce_o   (rom_ce_o)
		);



endmodule