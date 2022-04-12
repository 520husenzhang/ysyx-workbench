
//ysyx_22040422
//
//
//单周期 npc
`include "defines.v"


module   npc_onecycle(
    input   wire                         clk                        ,
    input   wire                         rst_n                       
 
);




wire                      jump_flag_EX_IF               ;  // 是否跳转标志
wire     [`InstAddrBus]   jump_addr_EX_IF             ;   // 跳转目的地址


 
 //S
wire        [  31:0]         inst_IF_ID                    ;//输出指令
wire        [`InstAddrBus]    pc_IF_ID                        ;// 对外PC指针

          //送到regfile的信息
wire                   [`RegAddrBus]    reg1_raddr_ID_GEN_REGS     ;// 读通用寄存器1地址
wire                   [`RegAddrBus]    reg2_raddr_ID_GEN_REGS     ;// 读通用寄存器2地址\
wire                                    reg1_read_ID_GEN_REGS      ;
wire                                    reg2_read_ID_GEN_REGS      ;
wire                   [`RegBus]        rdata1_ID_GEN_REGS         ;
wire                   [`RegBus]        rdata2_ID_GEN_REGS         ;

wire      [`RegAddrBus]    wd_EX_GEN_REGS                       ;// 写通用寄存器地址
wire                       wreg_EX_GEN_REGS                     ;// 是否要写通用寄存器
wire      [`RegBus]        wdata_EX_GEN_REGS                   ;// 写寄存器数据
wire                   [`RegAddrBus]    wd_MEM_GEN_REGS            ;
wire                                    wreg_MEM_GEN_REGS          ;
wire                   [`RegBus]        wdata_MEM_GEN_REGS         ;

//  id to csr reg
wire        [`RegBus]        csr_rdata_ID_CSR_REGS               ;// CSR寄存器输入数据
wire         [`CSR_Addr_bus]  csr_raddr_ID_CSR_REGS                ;// 读CSR寄存器地址
wire                          csr_read_ID_CSR_REGS                 ;// 读CSR寄存器标志

//  mem to csr reg
wire       [`RegBus]        csr_wdata_MEM_CSR_REGS               ;// 写CSR寄存器数据
wire                       csr_we_MEM_CSR_REGS                  ;// 是否要写CSR寄存器
wire      [`MemAddrBus]    csr_waddr_MEM_CSR_REGS               ;// 写CSR寄存器地址
      // to ex
wire         [`InstBus]       inst_ID_EX                     ;// 指令内容
wire          [`InstAddrBus]   inst_addr_ID_EX                ;// 指令地址  ???需要一直传递下去吗
wire        [`RegBus]        reg1_op_ID_EX                  ;// 操作数1
wire        [`RegBus]        reg2_op_ID_EX                  ;// 操作数2
wire                           reg_we_ID_EX                   ;// 写通用寄存器标志
wire         [`RegAddrBus]    reg_waddr_ID_EX                ;// 写通用寄存器地址

wire                          csr_we_ID_EX                   ;// 写CSR寄存器标志
wire         [`RegBus]        csr_rdata_ID_EX                ;//读到的CSR寄存器数据
wire      [`RegBus]        csr_waddr_ID_EX                ; // 写CSR寄存器地址


wire      [`MemBus]        mem_wdata_EX_MEM                ;// 写内存数据
wire      [`MemAddrBus]    mem_raddr_EX_MEM                ;// 读内存地址
wire      [`MemAddrBus]    mem_waddr_EX_MEM               ;// 写内存地址
wire                      mem_we_EX_MEM                  ;// 是否要写内存
wire                      mem_ce_EX_MEM                  ;// 是否要进行 mem 操作

wire       [`RegAddrBus]    wd_EX_MEM                      ; // 写通用寄存器地址
wire                        wreg_EX_MEM                    ; // 是否要写通用寄存器
wire       [`RegBus]        wdata_EX_MEM                   ; // 写寄存器数据

wire        [`RegBus]        csr_wdata_EX_MEM                ;
wire                        csr_we_EX_MEM                  ;
wire       [`MemAddrBus]    csr_waddr_EX_MEM              ;

wire  [`MemBus]        mem_rdata_RAM_MEM              ;// 内存输入数据

wire        [`InstBus]        inst_EX                     ;//解决 load相关
// to mem  cache
wire                   [`MemBus]        mem_wdata_MEM_RAM          ;// 写内存数据
wire                   [`MemAddrBus]    mem_raddr_MEM_RAM          ;// 读内存地址
wire                   [`MemAddrBus]    mem_waddr_MEM_RAM          ;// 写内存地址
wire                                    mem_we_MEM_RAM             ;// 是否要写内存
wire                                    mem_ce_MEM_RAM             ;// 请求访问内存标志


IF u_IF(
    .clk          ( clk          ),
    .rst_n        ( rst_n        ),
    .hold_flag_i  (         ),
    .jump_flag_i  ( jump_flag_EX_IF  ),
    .jump_addr_i  ( jump_addr_EX_IF  ),
    .inst_o       ( inst_IF_ID       ),
    .if_pc        ( pc_IF_ID        ),
    .hold_flag_o  (             )
);



ID u_ID(
    .rst_n            ( rst_n            ),

    .inst_i           ( inst_IF_ID           ),
    .inst_addr_i      ( pc_IF_ID      ),

    .reg1_rdata_i     ( rdata1_ID_GEN_REGS     ),
    .reg2_rdata_i     ( rdata2_ID_GEN_REGS     ),

    .csr_rdata_i      ( csr_rdata_ID_CSR_REGS      ),
     //解决相关问题的信号 现在不用
    .inst_ex_i        (               ),
    .ex_wdata_i       (             ),
    .ex_wd_i          (            ),
    .ex_wreg_i        (          ),
    .mem_wdata_reg_i  (   ),
    .mem_wd_reg_i     (      ),
    .mem_wreg_i       (        ),


    .reg1_raddr_o     ( reg1_raddr_ID_GEN_REGS     ),  // /loop
    .reg2_raddr_o     ( reg2_raddr_ID_GEN_REGS     ),   // /loop
    .reg1_read_o      ( reg1_read_ID_GEN_REGS      ),  //loop
    .reg2_read_o      ( reg2_read_ID_GEN_REGS      ),   //loop

    .csr_raddr_o      ( csr_raddr_ID_CSR_REGS      ),
    .csr_read_o       ( csr_read_ID_CSR_REGS       ),

    .inst_o           ( inst_ID_EX           ),
    .inst_addr_o      ( inst_addr_ID_EX      ),

    .reg1_o_op        ( reg1_op_ID_EX        ),     //loop
    .reg2_o_op        ( reg2_op_ID_EX        ),  //loop

    .reg_we_o         ( reg_we_ID_EX         ),  ///loop
    .reg_waddr_o      ( reg_waddr_ID_EX      ),  ///loop

    .csr_we_o         ( csr_we_ID_EX         ),
    .csr_rdata_o      ( csr_rdata_ID_EX      ),
    .csr_waddr_o      ( csr_waddr_ID_EX      ),

    .hold_flag_o      (       )
);


EX u_EX(
   .rst_n         ( rst_n         ),

   .inst_i        ( inst_ID_EX        ),
   .inst_addr_i   ( inst_addr_ID_EX   ),

   .reg1_i_op     ( reg1_op_ID_EX     ),
   .reg2_i_op     ( reg2_op_ID_EX     ),

   .reg_we_i      ( reg_we_ID_EX      ),
   .reg_waddr_i   ( reg_waddr_ID_EX   ),

   .csr_we_i      ( csr_we_ID_EX      ),
   .csr_waddr_i   ( csr_waddr_ID_EX   ),
   .csr_rdata_i   ( csr_rdata_ID_EX   ),

   .int_addr_i    (     ),
   .int_assert_i  (   ),

   .csr_wdata_o   ( csr_wdata_EX_MEM   ),
   .csr_we_o      ( csr_we_EX_MEM      ),
   .csr_waddr_o   ( csr_waddr_EX_MEM   ),

   .inst_o        (   inst_EX      ),
  
   .mem_wdata_o   ( mem_wdata_EX_MEM   ),
   .mem_raddr_o   ( mem_raddr_EX_MEM   ),
   .mem_waddr_o   ( mem_waddr_EX_MEM   ),
   .mem_we_o      ( mem_we_EX_MEM      ),
   .mem_ce_o      ( mem_ce_EX_MEM      ),

   .wd_o          ( wd_EX_MEM          ),
   .wreg_o        ( wreg_EX_MEM        ),
   .wdata_o       ( wdata_EX_MEM       ),  //loop

   .hold_flag_o   (    ),
   .jump_flag_o   ( jump_flag_EX_IF   ),
   .jump_addr_o   ( jump_addr_EX_IF   )

);

GEN_REGS u_GEN_REGS(
    .clk    ( clk    ),
    .rst_n  ( rst_n  ),

    .we     ( wreg_MEM_GEN_REGS     ),
    .waddr  (   wd_MEM_GEN_REGS  ),
    .wdata  ( wdata_MEM_GEN_REGS  ),

    .re1    ( reg1_read_ID_GEN_REGS    ),
    .raddr1 ( reg1_raddr_ID_GEN_REGS ),
    .rdata1 ( rdata1_ID_GEN_REGS ),     //  

    .re2    ( reg2_read_ID_GEN_REGS    ),
    .raddr2 ( reg2_raddr_ID_GEN_REGS ),
    .rdata2  ( rdata2_ID_GEN_REGS  )      
);




CSR_REGS u_CSR_REGS(
    .clk               ( clk               ),
    .rst_n             ( rst_n             ),

    .we_i              ( csr_we_MEM_CSR_REGS              ),
    .waddr_i           ( csr_waddr_MEM_CSR_REGS        ),
    .wdata_i            ( csr_wdata_MEM_CSR_REGS         ),

    .raddr_i           ( csr_raddr_ID_CSR_REGS           ),
    .read_en_i         ( csr_read_ID_CSR_REGS         ),

    .clint_we_i        (         ),
    .clint_waddr_i     (      ),
    .clint_wdata_i      (       ),
    .clint_raddr_i     (      ), 
    .global_int_en_o   (    ),

    .clint_csr_mtvec   (    ),
    .clint_csr_mepc    (     ),
    .clint_csr_mstatus (  ),
    .clint_data_o()   ,
    .csr_data_o        ( csr_rdata_ID_CSR_REGS        )
);

    


MEM u_MEM(
    .rst_n        ( rst_n        ),

    .inst_i       ( inst_EX       ),

    .wd_i         ( wd_EX_MEM         ),
    .wreg_i       ( wreg_EX_MEM       ),
    .wdata_i      ( wdata_EX_MEM      ),

    .mem_wdata_i  ( mem_wdata_EX_MEM  ),
    .mem_raddr_i  ( mem_raddr_EX_MEM  ),
    .mem_waddr_i  ( mem_waddr_EX_MEM  ),
    .mem_we_i     ( mem_we_EX_MEM     ),
    .mem_ce_i     ( mem_ce_EX_MEM     ),

    .csr_we_i     ( csr_we_EX_MEM     ),
    .csr_waddr_i  ( csr_waddr_EX_MEM  ),
    .csr_wdata_i  ( csr_wdata_EX_MEM  ),


    .mem_rdata_i  ( mem_rdata_RAM_MEM  ),

    .wd_o         ( wd_MEM_GEN_REGS         ),
    .wreg_o       ( wreg_MEM_GEN_REGS       ),
    .wdata_o      ( wdata_MEM_GEN_REGS      ),  //loop

    .csr_wdata_o  ( csr_wdata_MEM_CSR_REGS  ),
    .csr_we_o     ( csr_we_MEM_CSR_REGS     ),
    .csr_waddr_o  ( csr_waddr_MEM_CSR_REGS  ),

    .hold_flag_o  (   ),
     //to mem
    .mem_wdata_o  ( mem_wdata_MEM_RAM  ),
    .mem_raddr_o  ( mem_raddr_MEM_RAM  ),
    .mem_waddr_o  ( mem_waddr_MEM_RAM  ),
    .mem_we_o     ( mem_we_MEM_RAM     ),
    .mem_ce_o     ( mem_ce_MEM_RAM     )
);






RAM u_RAM(
    .clk     ( clk     ),

    .ce      ( mem_ce_MEM_RAM      ),
    .we      ( mem_we_MEM_RAM      ),

    .waddr   ( mem_waddr_MEM_RAM   ),
    .raddr   ( mem_raddr_MEM_RAM   ),

    .data_i  ( mem_wdata_MEM_RAM  ),
    .data_o  ( mem_rdata_RAM_MEM  )
);


endmodule

