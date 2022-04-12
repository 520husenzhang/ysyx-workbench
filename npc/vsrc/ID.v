// 指令译码
//张虎森
//ysyx_22040422
// 纯组合逻辑电路
`include "defines.v"

module   ID(

           input  wire                         rst_n                      ,
           // from if_id
           input  wire        [`InstBus]       inst_i                     ,// 指令内容
           input  wire        [`InstAddrBus]   inst_addr_i                ,// 指令地址 ???
           // from regs
           input  wire        [`RegBus]        reg1_rdata_i               ,// 通用寄存器1输入数据
           input  wire        [`RegBus]        reg2_rdata_i               ,// 通用寄存器2输入数据

           // from csr reg
           input  wire        [`RegBus]        csr_rdata_i                ,// CSR寄存器输入数据
           //from ex  解决 load 相关
           input  wire        [`InstBus]       inst_ex_i                  ,
           //from ex  解决 数据 相关
           input  wire        [`RegBus]        ex_wdata_i                 ,
           input  wire         [`RegAddrBus]    ex_wd_i                   ,
           input  wire                         ex_wreg_i                  ,

           //from mem  解决 数据 相关
           input  wire        [`RegBus]        mem_wdata_reg_i            ,
           input  wire         [`RegAddrBus]    mem_wd_reg_i               ,
           input  wire                         mem_wreg_i                 ,


           //送到regfile的信息
           output reg         [`RegAddrBus]    reg1_raddr_o               ,// 读通用寄存器1地址
           output reg         [`RegAddrBus]    reg2_raddr_o               ,// 读通用寄存器2地址\
           output reg                          reg1_read_o                ,
           output reg                          reg2_read_o                ,

           // to csr reg
           output reg         [`CSR_Addr_bus]  csr_raddr_o                ,// 读CSR寄存器地址
           output reg                          csr_read_o                 ,// 读CSR寄存器标志


           // to ex
           output reg         [`InstBus]       inst_o                     ,// 指令内容
           output reg         [`InstAddrBus]   inst_addr_o                ,// 指令地址  ???需要一直传递下去吗
           output reg         [`RegBus]        reg1_o_op                  ,// 操作数1
           output reg         [`RegBus]        reg2_o_op                  ,// 操作数2
           output reg                          reg_we_o                   ,// 写通用寄存器标志
           output reg         [`RegAddrBus]    reg_waddr_o                ,// 写通用寄存器地址

           output reg                          csr_we_o                   ,// 写CSR寄存器标志
           output reg         [`RegBus]        csr_rdata_o                ,//读到的CSR寄存器数据
           output reg         [`RegBus]        csr_waddr_o                , // 写CSR寄存器地址
           // 解决 load 相关  
           output reg                          hold_flag_o

         );
//j基本盘
wire[4:0] rd = inst_i[11:7];
wire[4:0] rs1 = inst_i[19:15];
wire[4:0] rs2 = inst_i[24:20];

wire[6:0] opcode = inst_i[6:0];
wire[2:0] funct3 = inst_i[14:12];
wire[6:0] funct7 = inst_i[31:25];


//指令解码部分   不要异步复位 !!!
always @(*)
  begin
    begin      //默认
      inst_o=inst_i ;
      inst_addr_o= inst_addr_i;

      //csr
      csr_raddr_o = 12'd0;
      csr_waddr_o = 12'd0;
      csr_we_o = `WriteDisable;
      //操作数
      reg1_o_op= `ZeroWord   ;
      reg2_o_op=`ZeroWord  ;
      //regs
      reg_waddr_o= `NOPRegAddr  ;
      reg_we_o=  `WriteDisable  ;
      reg1_raddr_o= `NOPRegAddr  ;
      reg2_raddr_o= `NOPRegAddr  ;
      reg1_read_o = `ReadDisable    ;
      reg2_read_o= `ReadDisable    ;
    end

    case(opcode)
      `INST_TYPE_I:
        begin
          case(funct3)     // slli  srli srai    32 何64 不一样  fun7--->fun6
            `INST_ADDI, `INST_SLTI, `INST_SLTIU, `INST_XORI, `INST_ORI, `INST_ANDI, `INST_SLLI, `INST_SRI:
              begin
                reg_we_o = `WriteEnable;
                reg_waddr_o = rd;
                reg1_raddr_o=rs1;
                reg2_raddr_o =`NOPRegAddr;

                reg1_read_o= `ReadEnable   ;
                reg2_read_o=`ReadDisable     ;

                reg1_o_op=reg1_rdata_i   ;
                reg2_o_op={{52{inst_i[31]}}, inst_i[31:20]}   ;
              end

            default:
              begin
                reg_we_o = `WriteDisable;
                reg_waddr_o = `NOPRegAddr;
                reg1_raddr_o = `NOPRegAddr;
                reg2_raddr_o = `NOPRegAddr;
                reg1_read_o= `ReadDisable   ;
                reg2_read_o=`ReadDisable     ;
              end
          endcase
        end
      `INST_TYPE_R_M:
        begin
          if ((funct7 == 7'b0000000) || (funct7 == 7'b0100000))
            begin
              case (funct3)
                `INST_ADD_SUB, `INST_SLL, `INST_SLT, `INST_SLTU, `INST_XOR, `INST_SR, `INST_OR, `INST_AND:
                  begin
                    reg_we_o = `WriteEnable;
                    reg_waddr_o = rd;
                    reg1_raddr_o = rs1;
                    reg2_raddr_o = rs2;
                    reg1_read_o= `ReadEnable   ;
                    reg2_read_o=`ReadEnable     ;
                    reg1_o_op = reg1_rdata_i;
                    reg1_o_op = reg2_rdata_i;
                  end
                default :
                  begin
                    reg_we_o = `WriteDisable;
                    reg_waddr_o = `NOPRegAddr;
                    reg1_raddr_o = `NOPRegAddr;
                    reg2_raddr_o = `NOPRegAddr;
                    reg1_read_o= `ReadDisable   ;
                    reg2_read_o=`ReadDisable     ;
                  end

              endcase
            end
          else if  (funct7 == 7'b0000001)
            begin
              case (funct3)
                `INST_MUL, `INST_MULHU, `INST_MULH, `INST_MULHSU:
                  begin
                    reg_we_o = `WriteEnable;
                    reg_waddr_o = rd;
                    reg1_raddr_o = rs1;
                    reg2_raddr_o = rs2;
                    reg1_read_o= `ReadEnable   ;
                    reg2_read_o=`ReadEnable     ;
                    reg1_o_op = reg1_rdata_i;
                    reg1_o_op = reg2_rdata_i;


                  end
                `INST_DIV, `INST_DIVU, `INST_REM, `INST_REMU:
                  begin
                    reg_we_o = `WriteEnable; // ！！！！！
                    reg_waddr_o = rd;
                    reg1_raddr_o = rs1;
                    reg2_raddr_o = rs2;     //给出操作数
                    reg1_read_o= `ReadEnable   ;
                    reg2_read_o=`ReadEnable     ;
                    reg1_o_op = reg1_rdata_i;
                    reg1_o_op = reg2_rdata_i;


                  end
                default :
                  begin
                    reg_we_o = `WriteDisable;
                    reg_waddr_o = `NOPRegAddr;
                    reg1_raddr_o = `NOPRegAddr;
                    reg2_raddr_o = `NOPRegAddr;
                    reg1_read_o= `ReadDisable   ;
                    reg2_read_o=`ReadDisable     ;

                  end

              endcase
            end
          else
            begin
              reg_we_o = `WriteDisable;
              reg_waddr_o = `NOPRegAddr;
              reg1_raddr_o = `NOPRegAddr;
              reg2_raddr_o = `NOPRegAddr;
              reg1_read_o= `ReadDisable   ;
              reg2_read_o=`ReadDisable     ;
            end
        end
      `INST_TYPE_L:
        begin
          case (funct3)
            `INST_LB, `INST_LH, `INST_LW, `INST_LBU, `INST_LHU,  `INST_LWU , `INST_LD:
              begin
                reg1_raddr_o = rs1;
                reg2_raddr_o = `NOPRegAddr;
                reg1_read_o= `ReadEnable   ;
                reg2_read_o=`ReadDisable     ;
                reg_we_o = `WriteEnable;
                reg_waddr_o = rd;
                reg1_o_op = reg1_rdata_i;
                reg2_o_op = {{52{inst_i[31]}}, inst_i[31:20]};  //立即数扩展
              end

            default :
              begin
                reg1_raddr_o = `NOPRegAddr;
                reg2_raddr_o = `NOPRegAddr;
                reg_we_o = `WriteDisable;
                reg_waddr_o = `NOPRegAddr;
                reg1_read_o= `ReadDisable   ;
                reg2_read_o=`ReadDisable     ;

              end
          endcase
        end

      `INST_TYPE_S:
        begin
          case (funct3)
            //!!!!!                SD 来自64bit
            `INST_SB, `INST_SW, `INST_SH, `INST_SD :
              begin
                reg1_raddr_o = rs1;
                reg2_raddr_o = rs2;
                reg1_read_o= `ReadEnable   ;
                reg2_read_o=`ReadEnable     ;
                reg_we_o = `WriteDisable;  //写mem
                reg_waddr_o = `NOPRegAddr;
                reg1_o_op = reg1_rdata_i;
                reg2_o_op = reg2_rdata_i; // 不是立即数
              end
            default:
              begin
                reg1_raddr_o = `NOPRegAddr;
                reg2_raddr_o = `NOPRegAddr;
                reg_we_o = `WriteDisable;
                reg_waddr_o = `NOPRegAddr;
                reg1_read_o= `ReadDisable   ;
                reg2_read_o= `ReadDisable     ;
              end
          endcase

        end

      //!!!!
      `INST_TYPE_B:
        begin
          case (funct3)
            `INST_BEQ, `INST_BNE, `INST_BLT, `INST_BGE, `INST_BLTU, `INST_BGEU:
              begin
                reg1_raddr_o = rs1;
                reg2_raddr_o = rs2;
                reg1_read_o= `ReadEnable   ;
                reg2_read_o=`ReadEnable     ;

                reg_we_o = `WriteDisable;
                reg_waddr_o = `NOPRegAddr;
                reg1_o_op = reg1_rdata_i;
                reg2_o_op = reg2_rdata_i;

              end
            default:
              begin
                reg1_raddr_o = `NOPRegAddr;
                reg2_raddr_o = `NOPRegAddr;
                reg_we_o = `WriteDisable;
                reg_waddr_o = `NOPRegAddr;
                reg1_read_o= `ReadDisable   ;
                reg2_read_o=`ReadDisable     ;
              end
          endcase

        end

      //!!!!
      `INST_JAL:
        begin
          reg_we_o = `WriteEnable;
          reg_waddr_o = rd;
          reg1_raddr_o = `NOPRegAddr;
          reg2_raddr_o = `NOPRegAddr;
          reg1_read_o= `ReadDisable   ;
          reg2_read_o=`ReadDisable     ;
          reg1_o_op = `ZeroReg;  //地址
          reg2_o_op = {{43{inst_i[31]}}, {inst_i[31] , inst_i[19:12] , inst_i[20],inst_i[30:21] },1'b0}; // sign ext


        end

      //!!!!
      `INST_JALR:
        begin
          reg_we_o = `WriteEnable;
          reg1_raddr_o = rs1;
          reg2_raddr_o = `NOPRegAddr;
          reg1_read_o= `ReadEnable  ;
          reg2_read_o=`ReadDisable     ;

          reg_waddr_o = rd;
          reg1_o_op = reg1_rdata_i;
          reg2_o_op ={{52{inst_i[31]}}, inst_i[31:20]};
        end
      `INST_LUI:
        begin
          reg_we_o = `WriteEnable;
          reg_waddr_o = rd;
          reg1_raddr_o = `NOPRegAddr;
          reg2_raddr_o = `NOPRegAddr;
          reg1_read_o= `ReadDisable  ;
          reg2_read_o=`ReadDisable     ;
          reg1_o_op = {{32{inst_i[31]}}, inst_i[31:12], 12'b0};
          reg2_o_op = `ZeroWord;


        end
      `INST_AUIPC:
        begin
          reg_we_o = `WriteEnable;
          reg_waddr_o = rd;
          reg1_raddr_o = `NOPRegAddr;
          reg2_raddr_o = `NOPRegAddr;
          reg1_read_o= `ReadDisable  ;
          reg2_read_o=`ReadDisable     ;
          reg1_o_op = {{32{inst_i[31]}},inst_i[31:12], 12'b0};
          reg2_o_op =`ZeroWord;
        end

      `INST_CSR:
        begin
          reg_we_o = `WriteDisable;
          reg_waddr_o = `NOPRegAddr;
          reg1_raddr_o = `NOPRegAddr;
          reg2_raddr_o = `NOPRegAddr;
          reg1_read_o= `ReadDisable  ;
          reg2_read_o=`ReadDisable     ;  //csr  11:0  标准 RISC-V ISA 设置了一个 12 位的编码空间（
          csr_raddr_o = inst_i[31:20];
          csr_waddr_o = inst_i[31:20];
          case (funct3)
            `INST_CSRRW, `INST_CSRRS, `INST_CSRRC:
              begin
                reg1_raddr_o = rs1;
                reg2_raddr_o = `NOPRegAddr;
                reg_we_o = `WriteEnable;   //原子操作 同时写
                reg_waddr_o = rd;
                csr_we_o = `WriteEnable;
                reg1_o_op = reg1_rdata_i ;
                reg2_o_op = `ZeroReg ;
              end
            `INST_CSRRWI, `INST_CSRRSI, `INST_CSRRCI:
              begin
                reg1_raddr_o = `NOPRegAddr;
                reg2_raddr_o = `NOPRegAddr;
                reg_we_o = `WriteEnable;
                reg_waddr_o = rd;
                csr_we_o = `WriteEnable;
                reg1_o_op = { {59'd0},inst_i[19:15] }; //五位的零扩展的立即数 zimm
                reg2_o_op = `ZeroReg ;
              end
            default:
              begin
                reg_we_o = `WriteDisable;
                reg_waddr_o = `NOPRegAddr;
                reg1_raddr_o = `NOPRegAddr;
                reg2_raddr_o = `NOPRegAddr;
                csr_we_o = `WriteDisable;
              end
          endcase

        end
      //64位指令
      `INST_TYPE_64IW:
        begin
          case (funct3)
            `INST_ADDIW ,  `INST_SLLIW , `INST_SRIW:
              begin
                reg_we_o = `WriteEnable;
                reg_waddr_o = rd;
                reg1_raddr_o=rs1;
                reg2_raddr_o =`NOPRegAddr;
                reg1_read_o= `ReadEnable  ;
                reg2_read_o=`ReadDisable     ;
                reg1_o_op=reg1_rdata_i   ;
                reg2_o_op={{52{inst_i[31]}}, inst_i[31:20]}   ;
              end


            default :
              begin
              end
          endcase
        end

      `INST_TYPE_R_M_64W:
        begin
          case (funct3)
            `INST_ADD_SUB_MULW , `INST_SLLW , `INST_SRW_DIVUW  , `INST_DIVW , `INST_DIVUW  ,`INST_REMW,  `INST_REMUW:
              begin
                reg_we_o = `WriteEnable;
                reg_waddr_o = rd;
                reg1_raddr_o = rs1;
                reg2_raddr_o = rs2;
                reg1_read_o= `ReadEnable  ;
                reg2_read_o=`ReadEnable     ;
                reg1_o_op = reg1_rdata_i;
                reg1_o_op = reg2_rdata_i;
              end


            default :
              begin
              end
          endcase
        end




      default:
        begin
          reg_we_o = `WriteDisable;
          reg_waddr_o = `NOPRegAddr;
          reg1_raddr_o = `NOPRegAddr;
          reg2_raddr_o = `NOPRegAddr;
          reg1_read_o= `ReadDisable  ;
          reg2_read_o=`ReadDisable     ;



        end


    endcase

  end







endmodule
