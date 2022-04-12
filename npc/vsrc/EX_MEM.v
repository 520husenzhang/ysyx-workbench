// ysyx_22040422  
// 张虎森   

`include "defines.v"

module EX_MEM (
    input wire										clk,
	input wire										rst_n,

    input  wire        [`Hold_Flag_Bus] hold_flag_i                ,// 流水线暂停标志
    input  wire               pip_flush,         // 流水线 杀掉   

	input  wire        [`InstBus]     inst_ex  ,
    // t回写阶段是否要回写 csr——reg  
    input  wire        [`RegBus]        csr_wdata_ex               ,// 写CSR寄存器数据 ex 算出来的
    input  wire                         csr_we_ex                  ,// 是否要写CSR寄存器 
    input  wire        [`MemAddrBus]    csr_waddr_ex               ,// 写CSR寄存器地址   
   //MEM  
    input  wire        [`MemBus]        mem_wdata_ex               ,// 写内存数据
    input  wire        [`MemAddrBus]    mem_raddr_ex               ,// 读内存地址
    input  wire        [`MemAddrBus]    mem_waddr_ex               ,// 写内存地址
    input  wire                         mem_we_ex                  ,// 内存操作
    input  wire                         mem_ce_ex                  ,// 片选标志
    	//回写 to regs
   input  wire         [`RegAddrBus]    wd_ex                       ,// 写通用寄存器地址
   input  wire                          wreg_ex                     ,// 是否要写通用寄存器
   input  wire         [`RegBus]        wdata_ex                    ,// 写寄存器数据

      // t回写阶段是否要回写 csr——reg  
   output reg         [`RegBus]        csr_wdata_mem                ,// 写CSR寄存器数据
   output wire                         csr_we_mem                   ,// 是否要写CSR寄存器
   output wire        [`MemAddrBus]    csr_waddr_mem                ,// 写CSR寄存器地址   
   output  reg         [`InstBus]       inst_mem                    ,
	//送到访存阶段的信息
   output reg         [`MemBus]        mem_wdata_mem                ,// 写内存数据
   output reg         [`MemAddrBus]    mem_raddr_mem                ,// 读内存地址
   output reg         [`MemAddrBus]    mem_waddr_mem                ,// 写内存地址
   output wire                         mem_we_mem                   ,// 是否要写内存
   output wire                         mem_ce_mem                   ,// 片选标志

	//回写 to regs
   output reg         [`RegAddrBus]    wd_mem                       ,// 写通用寄存器地址
   output reg                          wreg_mem                     ,// 是否要写通用寄存器
   output reg         [`RegBus]        wdata_mem                    ,// 写寄存器数据



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


