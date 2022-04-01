// ysyx_22040422  张虎森
//  流水线
//

`include "defines.v"

module ID_ALU(
    input wire  clk,
    input wire  rst_n,

    //from  id
    input  wire [`InstBus] inst_id,             // 指令内容
    input  wire [`InstAddrBus] inst_addr_id,    // 指令地址  ???需要一直传递下去吗
    input  wire [`RegBus] reg1_op_id,           // 操作数1
    input  wire [`RegBus] reg2_op_id,            // 操作数2
    input  wire  reg_we_id,                     // 写通用寄存器标志
    input  wire [`RegAddrBus] reg_waddr_id,     // 写通用寄存器地址
    //to alu
    output reg[`InstBus] inst_alu,             // 指令内容
    output reg[`InstAddrBus] inst_addr_alu,    // 指令地址  ???需要一直传递下去吗
    output reg[`RegBus] reg1_op_alu,           // 操作数1
    output reg[`RegBus] reg2_op_alu,            // 操作数2
    output reg reg_we_alu,                     // 写通用寄存器标志
    output reg[`RegAddrBus] reg_waddr_alu     // 写通用寄存器地址


);
   //流水
   always @(posedge  clk) begin
      if(rst_n==`RstDisable)   begin
      //reset 
      inst_alu<=`NO_Inst  ;
      inst_addr_alu<=`NO_InstAddr  ;
      reg1_op_alu<= `ZeroWord  ;
      reg2_op_alu<=`ZeroWord  ;
      reg_we_alu<= `WriteDisable   ;
      reg_waddr_alu<= `NOPRegAddr   ;
      end
      else  begin
      inst_alu<=inst_id;
      inst_addr_alu<=inst_addr_id;
      reg1_op_alu<=reg1_op_id;
      reg2_op_alu<=reg2_op_id;
      reg_we_alu<=reg_we_id;
      reg_waddr_alu<=reg_waddr_id;
      end


   end


endmodule 

