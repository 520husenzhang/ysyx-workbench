// ysyx_22040422  张虎森
//  流水线
//

`include "defines.v"

module ID_EX(
    input wire  clk,
    input wire  rst_n,

    input  wire        [`Hold_Flag_Bus] hold_flag_i                ,// 流水线暂停标志
    input  wire               pip_flush,   // 流水线 杀掉



    //from  id
    input  wire [`InstBus] inst_id,             // 指令内容
    input  wire [`InstAddrBus] inst_addr_id,    // 指令地址     
         

    input  wire [`RegBus] reg1_op_id,           // 操作数1
    input  wire [`RegBus] reg2_op_id,            // 操作数2

    input  wire  reg_we_id,                     // 写通用寄存器标志
    input  wire [`RegAddrBus] reg_waddr_id,     // 写通用寄存器地址

    input wire           csr_we_id                   ,// 写CSR寄存器标志
    input wire    [`RegBus]      csr_rdata_id                ,//读到的CSR寄存器数据
    input wire    [`RegBus]    csr_waddr_id      ,          // 写CSR寄存器地址
    //to EX
    output reg[`InstBus] inst_ex,             // 指令内容
    output reg[`InstAddrBus] inst_addr_ex,    // 指令地址  

    output reg[`RegBus] reg1_op_ex,           // 操作数1
    output reg[`RegBus] reg2_op_ex,            // 操作数2

    output reg reg_we_ex,                     // 写通用寄存器标志
    output reg[`RegAddrBus] reg_waddr_ex     // 写通用寄存器地址

    output wire           csr_we_ex                   ,// 写CSR寄存器标志
    output wire    [`RegBus]      csr_rdata_ex                ,//读到的CSR寄存器数据
    output wire    [`RegBus]    csr_waddr_ex      ,          // 写CSR寄存器地址


);
   //流水
   always @(posedge  clk) begin
      if(rst_n==`RstDisable)   begin
      //reset 
      inst_ex<=`NO_Inst  ;
      inst_addr_ex<=`NO_InstAddr  ;
      reg1_op_ex<= `ZeroWord  ;
      reg2_op_ex<=`ZeroWord  ;
      reg_we_ex<= `WriteDisable   ;
      reg_waddr_ex<= `NOPRegAddr   ;
      end
      else  begin
      inst_ex<=inst_id;
      inst_addr_ex<=inst_addr_id;
      reg1_op_ex<=reg1_op_id;
      reg2_op_ex<=reg2_op_id;
      reg_we_ex<=reg_we_id;
      reg_waddr_ex<=reg_waddr_id;
      end


   end


endmodule 

