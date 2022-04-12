// ysyx_22040422
//  算术逻辑单元
//  张虎森
//44555


`include "defines.v"

module   EX(
    input  wire                         rst_n                      ,

             // from id
    input  wire        [`InstBus]       inst_i                     ,// 指令内容
    input  wire        [`InstAddrBus]   inst_addr_i                ,// 指令地址  ???需要一直传递下去吗


    input  wire        [`RegBus]        reg1_i_op                  ,// 操作数1
    input  wire        [`RegBus]        reg2_i_op                  ,// 操作数2

    input  wire                         reg_we_i                   ,// 是否写通用寄存器
    input  wire        [`RegAddrBus]    reg_waddr_i                ,// 写通用寄存器地址

    input  wire                         csr_we_i                   ,// 是否回写CSR寄存器
    input  wire        [`CSR_Addr_bus]    csr_waddr_i                ,// 写CSR寄存器地址

    input  wire        [`RegBus]        csr_rdata_i                ,// CSR寄存器读到的输入数据

             // to ex
    input  wire        [`InstAddrBus]   int_addr_i                 ,// 中断入口地址
    input  wire                         int_assert_i               ,// 中断标志
             // t回写阶段是否要回写 csr——reg
    output reg         [`RegBus]        csr_wdata_o                ,// 写CSR寄存器数据
    output reg                          csr_we_o                   ,// 是否要写CSR寄存器
    output reg         [`CSR_Addr_bus]    csr_waddr_o                ,// 写CSR寄存器地址
             //送到id   解决load 相关
    output reg         [`InstBus]       inst_o                     ,//解决 load相关

             // to mem  cache
    output reg         [`MemBus]        mem_wdata_o                ,// 写内存数据
    output reg         [`MemBus]        mem_raddr_o                ,// 读内存地址
    output reg         [`MemBus]        mem_waddr_o                ,// 写内存地址
    output reg                          mem_we_o                   ,// 是否要写内存
    output reg                          mem_ce_o                   ,// 是否要进行 mem 操作

             //回写 to regs
    output reg         [`RegAddrBus]    wd_o                       ,// 写通用寄存器地址
    output reg                          wreg_o                     ,// 是否要写通用寄存器
    output reg         [`RegBus]        wdata_o                    ,// 写寄存器数据

             //  控制模块  ctrl   inst_hold~~
    output reg                          hold_flag_o                ,// 是否暂停标志
    output wire                         jump_flag_o                ,// 是否跳转标志
    output wire        [`InstAddrBus]   jump_addr_o                 // 跳转目的地址


         );


wire[6:0] opcode = inst_i[6:0];
wire[2:0] funct3 = inst_i[14:12];
// verilator lint_off UNSIGNED
wire[6:0] funct7 = inst_i[31:25];
// verilator lint_off UNSIGNED
wire[4:0] rd = inst_i[11:7];
wire[4:0] rs1 = inst_i[19:15];
// verilator lint_off UNSIGNED
wire[4:0] rs2 = inst_i[24:20];
//64rv 移位数量
wire [5:0]shamt  =inst_i[25:20];

//立即数
wire  [11:0] imm_type_i  =    inst_i[31:20]  ;  //imm [11:0]
wire  [11:0]  imm_type_s =  {inst_i[31:25] , inst_i[11:7]  }  ;  //imm [11:0]
wire  [11:0] imm_type_sb =   {inst_i[31] ,  inst_i[7],inst_i[30:25], inst_i[11:8] }  ; //imm [12:1]
wire  [19:0] imm_type_u =inst_i[31:12] ;  //imm [31:12]
wire  [19:0] imm_type_uj  = {inst_i[31] , inst_i[19:12] , inst_i[20],inst_i[30:21] }  ;
wire   [4:0]  zimm =inst_i[19:15];   //csr
//store 的 地址
wire  [`RegBus] mem_waddr_s=  {{52 {imm_type_s[11]}}, imm_type_s} + reg1_i_op ;

// 有条件分支跳转地址
wire [`RegBus]  B_jump_addr =   { {51{imm_type_sb[11]} }, imm_type_sb,1'b0}+  inst_addr_i   ;
//加减法器
wire[`RegBus] op1_add_op2_res;
wire[`RegBus] op1_sub_op2_res ;
assign op1_sub_op2_res = reg1_i_op- reg2_i_op ;
assign op1_add_op2_res = reg1_i_op + reg2_i_op;
//相等嘛？、
wire  op1_eq_op2 =(reg1_i_op == reg2_i_op);
// 有符号数比较
wire  op1_compare_op2_signed = { $signed(reg1_i_op) < $signed(reg2_i_op)} ;
//无符号比较
wire  op1_compare_op2_unsigned = (reg1_i_op < reg2_i_op)  & (1'b1)  ;
//移位
wire[`RegBus]sri_shift_mask=64'hffff_ffff_ffff_ffff  >>shamt   ;
wire[`RegBus]sr_shift_mask=64'hffff_ffff_ffff_ffff  >>reg2_i_op[5:0]   ;
wire[`RegBus]sri_shift =reg1_i_op >>shamt    ; //logic
wire[`RegBus]sr_shift =reg1_i_op >>reg2_i_op[5:0]    ; //logic
wire[`RegBus]sli_shift =reg1_i_op <<shamt    ;
//sriw

wire[31:0] op1_lower32bit_mask=  ~(32'hffff_ffff >>shamt ) ;
wire[31:0]  op1_lower32bit_rlshift=reg1_i_op[31:0] >> shamt     ;
wire [31:0] op1_lower32bit_rashift=  (reg1_i_op[31]==1)?   op1_lower32bit_mask|(op1_lower32bit_rlshift)  : (op1_lower32bit_rlshift)   ;

//sllw
wire [31:0]     sllw_temp  =  { reg1_i_op[31:0] }<< reg2_i_op[4:0]  ;
wire [`RegBus]   sllw_temp_sext =  { {32{sllw_temp[31] }} , sllw_temp }  ;
//SRW
wire[31:0] op1_lower32bit_srawmask=  ~(32'hffff_ffff >> reg2_i_op[4:0]  ) ;
wire [31:0]    op1_lower32bit_srlwshift=   reg1_i_op[31:0]    >>    reg2_i_op[4:0]   ;

wire [31:0] op1_lower32bit_srawshift=  (reg1_i_op[31]==1)?   op1_lower32bit_srawmask|(op1_lower32bit_srlwshift)  : (op1_lower32bit_srlwshift)   ;




//乘积
reg  [`RegBus]  op1_mul  ;
reg  [`RegBus]   op2_mul  ;
wire[`DoubleRegBus]op1_op2_mul       ;
wire [`DoubleRegBus] mul_temp = op1_mul * op2_mul;
wire [`DoubleRegBus] mul_temp_invert = ~mul_temp + 1;
//除法 余数 
reg  [`RegBus] op1_div_op2_res  ;
reg  [`RegBus] op1_rem_op2_res  ;
reg  [31:0] op1_div_op2_res_w  ;
reg  [31:0]  op1_rem_op2_res_w  ;

//2的补码
wire  [`RegBus]    reg1_i_op_inv = ~reg1_i_op + 1;
wire  [`RegBus]    reg2_i_op_inv = ~reg2_i_op + 1;
//
//
//
reg  hold_symbol ;
reg  jump_symbol ;
//指令上的暂停 还有 相关暂停 中断暂停
reg  inst_hold   ;
//来自指令的跳转 还有 中断


reg  inst_jump  ;
reg  [`InstAddrBus]inst_jump_addr ;
assign   jump_flag_o  = inst_jump ;
assign   jump_addr_o  = inst_jump_addr  ;  //etc


//处理乘法部分
// 32M 乘法操作数  处理  指令
always @ (*) begin
    if ((opcode == `INST_TYPE_R_M) && (funct7 == 7'b0000001)) begin
        case (funct3)
            `INST_MUL, `INST_MULHU: begin
                op1_mul = reg1_i_op;
                op2_mul = reg2_i_op;
            end
            `INST_MULHSU: begin
                op1_mul = (reg1_i_op[31] == 1'b1)? (reg1_i_op_inv): reg1_i_op;
                op2_mul = reg2_i_op;
            end
            `INST_MULH: begin
                op1_mul = (reg1_i_op[31] == 1'b1)? (reg1_i_op_inv): reg1_i_op;
                op2_mul = (reg2_i_op[31] == 1'b1)? (reg2_i_op_inv): reg2_i_op;
            end
            default: begin
                op1_mul = reg1_i_op;
                op2_mul = reg2_i_op;
            end
        endcase
    end
    else begin
        op1_mul = reg1_i_op;
        op2_mul = reg2_i_op;
    end
end


// 处理除法指令
always @ (*) begin
    begin
        op1_rem_op2_res = `ZeroWord;
        op1_div_op2_res = `ZeroWord;
        op1_rem_op2_res_w= `Zero32bit;
        op1_div_op2_res_w= `Zero32bit;
    end
    if ((opcode == `INST_TYPE_R_M) && (funct7 == 7'b0000001)) begin
        case (funct3)
            `INST_DIV:  begin
                op1_div_op2_res = $signed(reg1_i_op)/ $signed(reg2_i_op);
            end //
            `INST_DIVU: begin
                op1_div_op2_res =(reg1_i_op)/ (reg2_i_op)  ;
            end //无符号
            `INST_REM:  begin
                op1_rem_op2_res= $signed(reg1_i_op)% $signed(reg2_i_op) ;
            end
            `INST_REMU: begin
                op1_rem_op2_res= (reg1_i_op)% (reg2_i_op) ;
            end
            default: begin
                op1_rem_op2_res = `ZeroWord;
                op1_div_op2_res = `ZeroWord;
            end
        endcase
    end   //64 bit
    else if ((opcode == `INST_TYPE_64IW) && (funct7 == 7'b0000001)) begin
        case (funct3)
            `INST_DIVW:  begin
                op1_div_op2_res_w = $signed(reg1_i_op[31:0])/ $signed(reg2_i_op[31:0]);
            end //
            `INST_DIVUW: begin
                op1_div_op2_res_w =(reg1_i_op[31:0])/ (reg2_i_op[31:0])  ;
            end //无符号
            `INST_REMW:  begin
                op1_rem_op2_res_w= $signed(reg1_i_op[31:0])% $signed(reg2_i_op[31:0]) ;
            end
            `INST_REMUW: begin
                op1_rem_op2_res_w= (reg1_i_op[31:0])% (reg2_i_op[31:0]) ;
            end
            default: begin
                op1_rem_op2_res_w = `Zero32bit;
                op1_div_op2_res_w = `Zero32bit;
            end
        endcase
    end
    else begin
        op1_rem_op2_res = `ZeroWord;
        op1_div_op2_res = `ZeroWord;
        op1_rem_op2_res_w = `Zero32bit;
        op1_div_op2_res_w = `Zero32bit;
    end

end

//其他指令  操作
always @ ( * ) begin
    begin
        inst_hold=  `Hold_Disable ;

        inst_jump= `Jump_Disable   ;
        inst_jump_addr= `NO_InstAddr  ;

        mem_wdata_o=   `ZeroWord  ;
        mem_raddr_o=      `Mem_ZeroAddr  ;
        mem_waddr_o=  `Mem_ZeroAddr  ;
        mem_we_o=   `WriteDisable     ;
        mem_ce_o =  `ChipDisable  ;

        csr_wdata_o=  `ZeroWord  ;
        csr_we_o= `WriteDisable     ;
        csr_waddr_o=  `CSR_Zeroaddr   ;

        wdata_o= `ZeroWord  ;
        wd_o= reg_waddr_i;
        wreg_o=reg_we_i ;

        inst_o=inst_i ;
    end

    case (opcode)
        `INST_TYPE_I:  begin
            case(funct3)
                //立即数相加
                `INST_ADDI:  begin
                    wdata_o=op1_add_op2_res   ;
                end
                // 有符号数比较
                `INST_SLTI:  begin
                    wdata_o=op1_compare_op2_signed   ;
                end
                //无符号比较
                `INST_SLTIU:  begin
                    wdata_o=op1_compare_op2_unsigned  ;
                end
                //按位异或
                `INST_XORI:  begin
                    wdata_o=reg1_i_op ^ reg2_i_op  ;
                end
                //按位或
                `INST_ORI :  begin
                    wdata_o = reg1_i_op | reg2_i_op;
                end
                //按位与
                `INST_ANDI: begin
                    wdata_o = reg1_i_op & reg2_i_op;
                end
                //逻辑左移
                `INST_SLLI: begin
                    wdata_o = reg1_i_op << shamt  ;
                end
                //逻辑 算术右移
                `INST_SRI: begin
                    if (inst_i[30] == 1'b1) begin
                        wdata_o = (sri_shift & sri_shift_mask) | ({64{reg1_i_op[31]}} & (~sri_shift_mask));
                    end
                    else begin
                        wdata_o = reg1_i_op >> shamt  ;
                    end
                end
                default:   begin
                    wdata_o=`ZeroWord    ;
                end
            endcase
        end

        `INST_TYPE_R_M:  begin
            if ((funct7 == 7'b0000000) || (funct7 == 7'b0100000)) begin//非乘除
                case (funct3)
                    `INST_ADD_SUB:  begin
                        if (inst_i[30] == 1'b0) begin
                            wdata_o = op1_add_op2_res;
                        end
                        else begin
                            wdata_o = op1_sub_op2_res;
                        end
                    end
                    //对于RV64I，只有rs2的低6位被认为是移位次数
                    `INST_SLL: begin
                        wdata_o = reg1_i_op << reg2_i_op[5:0];
                    end
                    `INST_SLT: begin
                        wdata_o = op1_compare_op2_signed   ;
                    end
                    `INST_SLTU: begin
                        wdata_o = op1_compare_op2_unsigned   ;
                    end
                    `INST_XOR:  begin
                        wdata_o = reg1_i_op ^ reg2_i_op ;
                    end
                    `INST_SR:  begin
                        if (inst_i[30] == 1'b1) begin    //   逻辑
                            wdata_o = (sr_shift & sr_shift_mask) |  (~sr_shift_mask);
                        end
                        else begin
                            wdata_o = sr_shift;
                        end
                    end
                    `INST_OR: begin
                        wdata_o = reg1_i_op | reg2_i_op;
                    end
                    `INST_AND: begin
                        wdata_o = reg1_i_op & reg2_i_op;
                    end
                    default:  begin
                        wdata_o = `ZeroWord     ;
                    end
                endcase
            end
            else if (funct7 == 7'b0000001)    begin           //乘法相关
                case(funct3)
                    `INST_MUL: begin
                        wdata_o = mul_temp[`RegBus];
                    end
                    `INST_MULHU: begin
                        wdata_o = mul_temp[`DoubleRegBus_Hi];
                    end
                    `INST_MULHSU: begin
                        if (reg1_i_op[63] == 1'b1) begin
                            wdata_o = mul_temp_invert[`DoubleRegBus_Hi];
                        end
                        else begin
                            wdata_o = mul_temp[`DoubleRegBus_Hi];
                        end



                    end

                    `INST_MULH:  begin
                        case ({reg1_i_op[63], reg2_i_op[63]})
                            2'b00: begin
                                wdata_o = mul_temp[`DoubleRegBus_Hi];
                            end
                            2'b11: begin
                                wdata_o = mul_temp[`DoubleRegBus_Hi];
                            end
                            2'b10: begin
                                wdata_o = mul_temp_invert[`DoubleRegBus_Hi];
                            end
                            default: begin
                                wdata_o = mul_temp_invert[`DoubleRegBus_Hi];
                            end
                        endcase
                    end

                    `INST_DIV: begin
                        wdata_o=  op1_div_op2_res  ;
                    end
                    `INST_DIVU: begin
                        wdata_o=   op1_div_op2_res  ;
                    end
                    `INST_REM: begin
                        wdata_o=    op1_rem_op2_res  ;
                    end
                    `INST_REMU: begin
                        wdata_o=   op1_rem_op2_res  ;
                    end
                    default: begin
                        wdata_o = `ZeroWord;
                    end
                endcase
            end
            else   begin
                wdata_o = `ZeroWord;

            end
        end
        //存储器加载
        `INST_TYPE_L: begin
            begin
                wd_o=reg_waddr_i  ;
                wreg_o=reg_we_i  ;
            end

            case (funct3)
                `INST_LB:  begin
                    mem_wdata_o=   `ZeroWord  ;
                    mem_raddr_o=  op1_add_op2_res  ;
                    mem_waddr_o=  `Mem_ZeroAddr  ;
                    mem_we_o=   `WriteDisable     ;
                    mem_ce_o =  `ChipEnable  ;


                end
                //注意访存要对齐
                `INST_LH:  begin
                    mem_wdata_o=   `ZeroWord  ;
                    mem_raddr_o=  op1_add_op2_res  ;
                    mem_waddr_o=  `Mem_ZeroAddr  ;
                    mem_we_o=   `WriteDisable     ;
                    mem_ce_o =  `ChipEnable  ;


                end
                //  对于 RV64I，结果要进行符HAO位扩展。  mem 中扩展
                `INST_LW:     begin
                    mem_wdata_o=   `ZeroWord  ;
                    mem_raddr_o=  op1_add_op2_res  ;
                    mem_waddr_o=  `Mem_ZeroAddr  ;
                    mem_we_o=   `WriteDisable     ;
                    mem_ce_o =  `ChipEnable  ;
                end

                `INST_LBU : begin
                    mem_wdata_o=   `ZeroWord  ;
                    mem_raddr_o=  op1_add_op2_res  ;
                    mem_waddr_o=  `Mem_ZeroAddr  ;
                    mem_we_o=   `WriteDisable     ;
                    mem_ce_o =  `ChipEnable  ;

                end
                `INST_LHU: begin
                    mem_wdata_o=   `ZeroWord  ;
                    mem_raddr_o=  op1_add_op2_res  ;
                    mem_waddr_o=  `Mem_ZeroAddr  ;
                    mem_we_o=   `WriteDisable     ;
                    mem_ce_o =  `ChipEnable  ;

                end 
                //64 位   
                `INST_LWU : begin  
                   mem_wdata_o=   `ZeroWord  ;
                   mem_raddr_o=  op1_add_op2_res  ;
                   mem_waddr_o=  `Mem_ZeroAddr  ;
                   mem_we_o=   `WriteDisable     ;
                   mem_ce_o =  `ChipEnable  ;
                   end 
                `INST_LD  : begin 
                   mem_wdata_o=   `ZeroWord  ;
                   mem_raddr_o=  op1_add_op2_res  ;
                   mem_waddr_o=  `Mem_ZeroAddr  ;
                   mem_we_o=   `WriteDisable     ;
                   mem_ce_o =  `ChipEnable  ;


                   end   
                
        

                default: begin
                    mem_wdata_o=   `ZeroWord  ;
                    mem_raddr_o=  op1_add_op2_res  ;
                    mem_waddr_o=  `Mem_ZeroAddr  ;
                    mem_we_o=   `WriteDisable     ;
                    mem_ce_o =  `ChipEnable  ;
                    wdata_o =`ZeroWord     ;
                end
            endcase
        end



        //begin
        //存储器保存
        `INST_TYPE_S:   begin
            begin
                wdata_o= `ZeroWord  ;
                wd_o= `NOPRegAddr;
                wreg_o=`WriteDisable ;
            end

            case(funct3)
                `INST_SB: begin
                    mem_raddr_o=  mem_waddr_s ;
                    mem_waddr_o=  mem_waddr_s  ;
                    mem_we_o=   `WriteEnable     ;
                    mem_ce_o =  `ChipEnable  ;
                    mem_wdata_o=  { {56{1'b0}},reg2_i_op[7:0] };

                end


                `INST_SH: begin

                    mem_raddr_o=  mem_waddr_s ;
                    mem_waddr_o=  mem_waddr_s  ;
                    mem_we_o=   `WriteEnable     ;
                    mem_ce_o =  `ChipEnable  ;
                    mem_wdata_o=  { {48{1'b0}},reg2_i_op[15:0] };

                end
                `INST_SW: begin
                    mem_raddr_o=  mem_waddr_s ;
                    mem_waddr_o=  mem_waddr_s  ;
                    mem_we_o=   `WriteEnable     ;
                    mem_ce_o =  `ChipEnable  ;
                    mem_wdata_o=  { {32{1'b0}},reg2_i_op[31:0] };
                end
                `INST_SD: begin
                    mem_raddr_o=  mem_waddr_s ;
                    mem_waddr_o=  mem_waddr_s  ;
                    mem_we_o=   `WriteEnable     ;
                    mem_ce_o =  `ChipEnable  ;
                    mem_wdata_o=  reg2_i_op ;
                end

                default : begin
                    mem_wdata_o=   `ZeroWord  ;
                    mem_raddr_o=  `Mem_ZeroAddr ;
                    mem_waddr_o=  `Mem_ZeroAddr  ;
                    mem_we_o=   `WriteDisable     ;
                    mem_ce_o =  `ChipDisable   ;

                end
            endcase

        end


        //条件跳转
        `INST_TYPE_B: begin
            begin
                wdata_o= `ZeroWord  ;
                wd_o= `NOPRegAddr;
                wreg_o=`WriteDisable ;

                mem_wdata_o=   `ZeroWord  ;
                mem_raddr_o=  `Mem_ZeroAddr ;
                mem_waddr_o=  `Mem_ZeroAddr  ;
                mem_we_o=   `WriteDisable     ;
                mem_ce_o =  `ChipDisable   ;
                inst_hold = `Hold_Disable;
            end
            case(funct3)
                `INST_BEQ:   begin
                    inst_jump = op1_eq_op2 & `Jump_Enable ;
                    inst_jump_addr = {64{op1_eq_op2}} & B_jump_addr;


                end
                `INST_BNE:  begin
                    inst_jump = (~op1_eq_op2) & `Jump_Enable;
                    inst_jump_addr = {64{~op1_eq_op2}} & B_jump_addr;


                end
                `INST_BLT:  begin
                    inst_jump = (op1_compare_op2_signed) & `Jump_Enable;
                    inst_jump_addr = {64{op1_compare_op2_signed}} & B_jump_addr;

                end
                `INST_BGE:  begin
                    inst_jump = (~op1_compare_op2_signed) & `Jump_Enable;
                    inst_jump_addr = {64{~op1_compare_op2_signed}} & B_jump_addr;


                end
                `INST_BLTU:  begin
                    inst_jump = (op1_compare_op2_unsigned) & `Jump_Enable;
                    inst_jump_addr = {64{op1_compare_op2_unsigned}} & B_jump_addr;

                end
                `INST_BGEU:  begin
                    inst_jump = (~op1_compare_op2_unsigned) & `Jump_Enable;
                    inst_jump_addr = {64{~op1_compare_op2_unsigned}} & B_jump_addr;
                end
                default: begin
                    wdata_o= `ZeroWord  ;
                    wd_o= `NOPRegAddr;
                    wreg_o=`WriteDisable ;

                    mem_wdata_o=   `ZeroWord  ;
                    mem_raddr_o=  `Mem_ZeroAddr ;
                    mem_waddr_o=  `Mem_ZeroAddr  ;
                    mem_we_o=   `WriteDisable     ;
                    mem_ce_o =  `ChipDisable   ;
                    inst_hold = `Hold_Disable;
                end


            endcase
        end

        //end



        // 64位独有
        `INST_TYPE_64IW:   begin
            begin
                wd_o= reg_waddr_i;
                wreg_o=`WriteEnable ;
            end
            case (funct3)
                `INST_ADDIW:  begin
                    wdata_o ={ {32{op1_add_op2_res[31]}},op1_add_op2_res[31:0] }  ;

                end
                `INST_SLLIW:  begin
                    wdata_o= { {32{sli_shift[31]}},sli_shift[31:0]}  ;
                end
                `INST_SRIW:  begin
                    if (inst_i[30] == 1'b1) begin    //算术
                        wdata_o =    {{32{op1_lower32bit_rashift[31]} }, op1_lower32bit_rashift} ;
                    end
                    else begin
                        wdata_o =  {{32{op1_lower32bit_rlshift[31]}},op1_lower32bit_rlshift}  ;
                    end
                end
                default : begin
                    wdata_o=`ZeroWord;
                end

            endcase
        end




        `INST_TYPE_R_M_64W :  begin
            begin
                wd_o= reg_waddr_i;
                wreg_o=`WriteEnable ;
            end
            case (funct3)
                `INST_ADD_SUB_MULW: begin
                    if( funct7== 7'b0100000  )    //-
                        wdata_o={{32{op1_sub_op2_res[31]} },op1_sub_op2_res[31:0]}    ;
                    else   if( funct7== 7'b0000000)     //+
                        wdata_o=  {{32{op1_add_op2_res[31]}} ,op1_add_op2_res[31:0]}  ;
                    else   if( funct7== 7'b0000001)      // *
                        wdata_o= { {32{mul_temp[31]}},mul_temp[31:0]}     ;
                    else
                        wdata_o=`ZeroWord  ;
                end
                `INST_SLLW: begin
                    wdata_o=  sllw_temp_sext;

                end
                `INST_SRW_DIVUW: begin
                    if( funct7==7'b0100000)   //算术· SR
                        wdata_o={{32{op1_lower32bit_srawshift[31]}} ,op1_lower32bit_srawshift[31:0]}  ;
                    else  if( funct7==7'b0000000 )      //逻辑sr
                        wdata_o=  {{32{op1_lower32bit_srlwshift[31]}} ,op1_lower32bit_srlwshift[31:0]} ;
                    else  if( funct7== 7'b0000001 )  //  divu   w
                        wdata_o= {{32{op1_div_op2_res_w[31]} },  op1_div_op2_res_w[31:0]} ;
                    else
                        wdata_o=  `ZeroWord;
                end

                `INST_REMW: begin
                    wdata_o= {{32{op1_rem_op2_res_w[31]}} ,op1_rem_op2_res_w[31:0]} ;
                end
                `INST_REMUW: begin
                    wdata_o= {{32{op1_rem_op2_res_w[31]}} ,op1_rem_op2_res_w[31:0]} ;
                end
                default : begin
                    wdata_o=`ZeroWord  ;
                end
            endcase
        end
        default : begin
            inst_hold=  `Hold_Disable ;

            inst_jump= `Jump_Disable   ;
            inst_jump_addr= `NO_InstAddr  ;

            mem_wdata_o=   `ZeroWord  ;
            mem_raddr_o=      `Mem_ZeroAddr  ;
            mem_waddr_o=  `Mem_ZeroAddr  ;
            mem_we_o=   `WriteDisable     ;
            mem_ce_o =  `ChipDisable  ;

            csr_wdata_o=  `ZeroWord  ;
            csr_we_o= `WriteDisable     ;
            csr_waddr_o=  `CSR_Zeroaddr   ;

            wdata_o= `ZeroWord  ;
            wd_o= reg_waddr_i;
            wreg_o=reg_we_i ;

        end

    endcase
end









endmodule



