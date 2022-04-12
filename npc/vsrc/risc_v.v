//risc v处理器 设计工程
// ysyx_22040422 张虎森
//v1.0
//
`include "defines.v"

module RISC_V (
    input wire   clk,
    input wire   rst_n
 
  
	);


wire [`RegAddrBus]   reg1_rdata_addr;
wire [`RegAddrBus]  reg2_rdata_addr  ;

 wire [`RegBus]  reg1_rdata_wire  ;
 wire [`RegBus]  reg2_rdata_wire;

wire   re1; 
wire   re2 ;

 wire[`InstAddrBus]	    if_pc;
 wire[`InstBus]          if_inst;
 wire [`InstAddrBus]      id_pc;
 wire [`InstBus]          id_inst;
 
    //  id
 wire [`InstBus] inst_id;             // 指令内容
 wire [`InstAddrBus] inst_addr_id;    // 指令地址  ???需要一直传递下去吗
 wire [`RegBus] reg1_op_id;           // 操作数1
 wire [`RegBus] reg2_op_id;            // 操作数2
 wire  reg_we_id;                     // 写通用寄存器标志
 wire [`RegAddrBus] reg_waddr_id;     // 写通用寄存器地址

 //from  ex
 wire [`InstBus] inst_ex;             // 指令内容
 wire [`InstAddrBus] inst_addr_ex;    // 指令地址  ???需要一直传递下去吗
 wire [`RegBus] reg1_op_ex;           // 操作数1
 wire [`RegBus] reg2_op_ex;            // 操作数2
 wire  reg_we_ex;                   // 写通用寄存器标志
 wire [`RegAddrBus] reg_waddr_ex ;     // 写通用寄存器地址

 //ex_mem  流水线进
wire[`RegAddrBus]       wd_ex_mem_i;
wire                    wreg_ex_mem_i;
wire[`RegBus]					  wdata_ex_mem_i;

//_ex_mem 流水线出
wire[`RegAddrBus]       wd_ex_mem_o;
wire                    wreg_ex_mem_o;
wire[`RegBus]		    wdata_ex_mem_o;
//访存——回写 进 
wire   [`RegAddrBus]      wd_mem_wb_i   ;
wire                     wreg_mem_wb_i  ;
wire  [`RegBus]          wdata_mem_wb_i  ;
// 回写regfile 连线
wire  [`RegAddrBus]  wb_wd_i;
wire       wb_wreg_i;
wire    [`RegBus] wb_wdata_i;	
 
 

  //取指
IF inst_IF (.clk(clk),
            .rst_n(rst_n), 
            .inst_o(if_inst),
			.if_pc( if_pc  )
            );
//流水线
IF_ID inst_IF_ID(
	.clk     (clk     ),
	.rst_n   (rst_n   ),
     //from if
	.if_pc   (if_pc   ),
	.if_inst (if_inst ),
    // to id
	.id_pc   (id_pc   ),
	.id_inst (id_inst )
);

ID inst_ID (
			.rst_n        (rst_n),
			.inst_i       (id_inst),
			.inst_addr_i  (id_pc),
           // reg file
			.reg1_rdata_i (reg1_rdata_wire),
			.reg2_rdata_i (reg2_rdata_wire),
			.reg1_raddr_o (reg1_rdata_addr),
			.reg2_raddr_o (reg2_rdata_addr),
			.reg1_read_o  (re1),
			.reg2_read_o  (re2),

			//  to ex
			
			.inst_o       (inst_id),
			.inst_addr_o  (inst_addr_id),
			.reg1_o_op    (reg1_op_id),
			.reg2_o_op    (reg2_op_id),
			.reg_we_o     (reg_we_id),
			.reg_waddr_o  (reg_waddr_id)
		);




REG_files inst_REG_files(
			.clk    (clk),
			.rst_n  (rst_n),
			//from   wb
			.we     (wb_wreg_i),    //写使能
			.waddr  (wb_wd_i),
			.wdata  (wb_wdata_i),

			.re1    (re1),
			.raddr1 (reg1_rdata_addr),
			.rdata1 (reg1_rdata_wire),

			.re2    (re2),
			.raddr2 (reg2_rdata_addr),
			.rdata2 (reg2_rdata_wire)
		);




//流水线
ID_EX inst_ID_EX(
			.clk           (clk           ),
			.rst_n         (rst_n         ),

			.inst_id       (inst_id       ),
			.inst_addr_id  (inst_addr_id  ),
			.reg1_op_id    (reg1_op_id    ),
			.reg2_op_id    (reg2_op_id    ),
			.reg_we_id     (reg_we_id     ),
			.reg_waddr_id  (reg_waddr_id  ),

			.inst_ex      (inst_ex      ),
			.inst_addr_ex (inst_addr_ex ),
			.reg1_op_ex   (reg1_op_ex   ),
			.reg2_op_ex   (reg2_op_ex   ),
			.reg_we_ex    (reg_we_ex    ),
			.reg_waddr_ex (reg_waddr_ex )
		);
		
  //逻辑运算单元
EX inst_EX(
			.rst_n       (rst_n),
			.inst_i      (inst_ex),   //来自id
			.inst_addr_i (inst_addr_ex),
			.reg1_i_op   (reg1_op_ex),
			.reg2_i_op   (reg2_op_ex),
			.reg_we_i    (reg_we_ex),
			.reg_waddr_i (reg_waddr_ex),
			 //回写
			.wd_o        (wd_ex_mem_i),
			.wreg_o      (wreg_ex_mem_i),
			.wdata_o     (wdata_ex_mem_i)
		);






  //流水线

EX_MEM inst_EX_MEM(
    .clk       ( clk       ),
    .rst_n     ( rst_n     ),

    .ex_wd    ( wd_ex_mem_i    ),
    .ex_wreg  ( wreg_ex_mem_i  ),
    .ex_wdata ( wdata_ex_mem_i ),

    .mem_wd    ( wd_ex_mem_o    ),
    .mem_wreg  ( wreg_ex_mem_o  ),
    .mem_wdata  ( wdata_ex_mem_o  )
);



//访存阶段   
 MEM inst_MEM(
    .rst_n   ( rst_n   ),

    .wd_i    ( wd_ex_mem_o    ),
    .wreg_i  ( wreg_ex_mem_o  ),
    .wdata_i ( wdata_ex_mem_o ),

    .wd_o    (   wd_mem_wb_i    ),
    .wreg_o  (   wreg_mem_wb_i  ),
    .wdata_o  (   wdata_mem_wb_i  )
);


 

//访存回写
MEM_WB  inst_MEM_WB(
	.clk(clk),
	.rst_n(rst_n),

	.mem_wd( wd_mem_wb_i ),
	.mem_wreg(  wreg_mem_wb_i),
	.mem_wdata( wdata_mem_wb_i ),
	
	.wb_wd(wb_wd_i),
	.wb_wreg(wb_wreg_i),
	.wb_wdata(wb_wdata_i)
     );
 

//回写


endmodule

