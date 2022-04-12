//YSYX_2204022  张虎森 
//
//   本地中断管理   
//
module CLINT (
    input wire clk,
    input wire rst_n,

    // from core
    input wire[`INT_BUS] int_flag_i,         // 外部 中断输入信号

    // from id
    input wire[`InstBus] inst_i,             // 指令内容
    input wire[`InstAddrBus] inst_addr_i,    // 指令地址

    // from ex
    input wire jump_flag_i,
    input wire[`InstAddrBus] jump_addr_i,

    // from csr_reg
    input wire[`RegBus] csr_rdata_i,              // CSR寄存器输入数据
    input wire[`RegBus] csr_mtvec,           // mtvec寄存器
    input wire[`RegBus] csr_mepc,            // mepc寄存器
    input wire[`RegBus] csr_mstatus,         // mstatus寄存器   
    input wire global_int_en_i,              // 全局中断使能标志

    // to ctrl
    output wire hold_flag_o,                 // 流水线暂停标志

    // to csr_reg      
    output reg    csr_re_o,                         // 读CSR寄存器标志
    output reg    csr_we_o,                         // 写CSR寄存器标志
    output reg[`MemAddrBus] csr_waddr_o,         // 写CSR寄存器地址
    output reg[`MemAddrBus] csr_raddr_o,         // 读CSR寄存器地址
    output reg[`RegBus] csr_wdata_o,              // 写CSR寄存器数据

    // to ex
    output reg[`InstAddrBus] int_addr_o,     // 中断入口地址
    output reg int_flag_o                  // 中断标志
 
  
);
    


















endmodule

