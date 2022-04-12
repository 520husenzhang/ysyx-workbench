//流水线控制 和pc修改跳转 模块
//ysyx_22040422  张虎森
//   
//   risc——v  没有延迟槽技术

`include "defines.v"
module CTRL (
    input  wire                         rst_n                      ,

    // from ex
    input  wire                         jump_flag_i                ,//杀掉流水线
    input  wire        [`InstAddrBus]   jump_addr_i                ,

    input  wire                         stallreq_from_if           ,
    input  wire                         stallreq_from_id           ,

    input  wire                         stallreq_from_ex           ,
    input  wire                         stallreq_from_mem          ,
    input  wire                         stallreq_from_clint        ,

     //流水线暂停控制
    output reg         [`Hold_Flag_Bus] hold_flag_o                ,
    //流水线清理
    output reg                          pip_flush                  ,
    // to pc_reg
    output reg                          jump_flag_o                ,
    output reg         [`InstAddrBus]   jump_addr_o                 
    
);




always @ (*) begin
    jump_addr_o = jump_addr_i;
    jump_flag_o = jump_flag_i;
    // 默认不暂停
    hold_flag_o = `Hold_None;
    // 按优先级处理不同模块的请求
    if (jump_flag_i == `JumpEnable || hold_flag_ex_i == `HoldEnable || hold_flag_clint_i == `HoldEnable) begin
        // 暂停整条流水线
        hold_flag_o = `Hold_Id;
    end else if (hold_flag_rib_i == `HoldEnable) begin
        // 暂停PC，即取指地址不变
        hold_flag_o = `Hold_Pc;
    end else if (jtag_halt_flag_i == `HoldEnable) begin
        // 暂停整条流水线
        hold_flag_o = `Hold_Id;
    end else begin
        hold_flag_o = `Hold_None;
    end
end







endmodule //CTRL_PIP


