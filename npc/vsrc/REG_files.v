//
//寄存器堆文件
//  张虎森
//



`include "defines.v"

module REG_files (
    input	wire				clk,
	input wire					rst_n,

	//write
    input wire				 	we,
	input wire[`RegAddrBus]	  waddr,
	input wire[`RegBus]		 wdata,
    	
 
	//读端口1
	input wire					re1,
	input wire[`RegAddrBus]	   raddr1,
	output reg[`RegBus]           rdata1,
	
	//读端口2 
	input wire					  re2,
	input wire[`RegAddrBus]	  raddr2,
	output reg[`RegBus]           rdata2
	);

   //寄存器堆
	reg[`RegBus]  regs[`RegNum-1 :0];


   //write   regs  
	always @ (posedge clk) begin
       if (rst_n == `RstDisable)begin
		regs[0] <= wdata; regs[1] <= wdata;regs[2] <= wdata;regs[3] <= wdata;regs[4] <= wdata;regs[5] <= wdata;regs[6] <= wdata;regs[7] <= wdata;
		regs[8] <= wdata; regs[9] <= wdata;regs[10] <= wdata;regs[11] <= wdata;regs[12] <= wdata;regs[13] <= wdata;regs[14] <= wdata;regs[15] <= wdata;
		regs[16] <= wdata; regs[17] <= wdata;regs[18] <= wdata;regs[19] <= wdata;regs[20] <= wdata;regs[21] <= wdata;regs[22] <= wdata;regs[23] <= wdata;
		regs[24] <= wdata; regs[25] <= wdata;regs[26] <= wdata;regs[27] <= wdata;regs[28] <= wdata;regs[29] <= wdata;regs[30] <= wdata;regs[31] <= wdata;
	
	  end
	   else begin
			if((we == `WriteEnable) && (waddr != `RegNumLog2'h0)) begin
				regs[waddr] <= wdata;
				regs[0] <= 'd0;
			end
		end
	end

  //读寄存器1
	always @ (*) begin
		if(rst_n == `RstDisable) begin
			  rdata1 <= `ZeroWord;
	  end else if(raddr1 == `RegNumLog2'h0) begin
	  		rdata1 <= `ZeroWord;
	  end else if((raddr1 == waddr) && (we == `WriteEnable) 
	  	            && (re1 == `ReadEnable)) begin
	  	  rdata1 <= wdata;
	  end else if(re1 == `ReadEnable) begin
	      rdata1 <= regs[raddr1];
	  end else begin
	      rdata1 <= `ZeroWord;
	  end
	end

  //读寄存器2
	always @ (*) begin
		if(rst_n == `RstDisable) begin
			  rdata2 <= `ZeroWord;
	  end else if(raddr2 == `RegNumLog2'h0) begin
	  		rdata2 <= `ZeroWord;
	  end else if((raddr2 == waddr) && (we == `WriteEnable) 
	  	            && (re2 == `ReadEnable)) begin
	  	  rdata2 <= wdata;
	  end else if(re2 == `ReadEnable) begin
	      rdata2 <= regs[raddr2];
	  end else begin
	      rdata2 <= `ZeroWord;
	  end
	end



endmodule

