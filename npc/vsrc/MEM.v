//  ysyx_22040422
//  张虎森
//：访存 对存储器进行读/写


`include "defines.v"

module MEM(

           input  wire                         rst_n                      ,
           //区分 lbu  lw 等
           input  wire        [`InstBus]       inst_i                     ,
           //来自执行阶段的信息	  regs
           input  wire        [`RegAddrBus]    wd_i                       ,
           input  wire                         wreg_i                     ,
           input  wire        [`RegBus]        wdata_i                    ,
           //内存读写
           input  wire        [`MemBus]        mem_wdata_i                ,// 写内存数据
           input  wire        [`MemAddrBus]    mem_raddr_i                ,// 读内存地址
           input  wire        [`MemAddrBus]    mem_waddr_i                ,// 写内存地址
           input  wire                         mem_we_i                   ,// 是否要写内存
           input  wire                         mem_ce_i                   ,// 片选标志  选了就要读写
           // csr 回写
           input  wire                         csr_we_i                   ,// 是否写CSR寄存器
           input  wire        [`MemAddrBus]    csr_waddr_i                ,// 写CSR寄存器地址
           input  wire        [`RegBus]        csr_wdata_i                ,// CSR寄存器输入数据

           // from mem  cache
           input  wire        [`MemBus]        mem_rdata_i                ,// 内存输入数据
           //送到回写阶段的信息
           //回写 to regs
           output reg         [`RegAddrBus]    wd_o                       ,
           output reg                          wreg_o                     ,
           output reg         [`RegBus]        wdata_o                    ,
           // to csr reg
           output reg         [`RegBus]        csr_wdata_o                ,// 写CSR寄存器数据
           output reg                         csr_we_o                   ,// 是否要写CSR寄存器
           output reg        [`MemAddrBus]    csr_waddr_o                ,// 写CSR寄存器地址
           //请求流水线暂停
           output                              hold_flag_o                ,

           // to mem  cache
           output reg         [`MemBus]        mem_wdata_o                ,// 写内存数据
           output reg         [`MemAddrBus]    mem_raddr_o                ,// 读内存地址
           output reg         [`MemAddrBus]    mem_waddr_o                ,// 写内存地址
           output reg                         mem_we_o                   ,// 是否要写内存
           output reg                         mem_ce_o                   // 请求访问内存标志



       );
//基本盘
wire[6:0] opcode = inst_i[6:0];
wire[2:0] funct3 = inst_i[14:12];
// verilator lint_off UNSIGNED
wire[6:0] funct7 = inst_i[31:25];
// verilator lint_off UNSIGNED
wire[4:0] rd = inst_i[11:7];
wire[4:0] rs1 = inst_i[19:15];
// verilator lint_off UNSIGNED
wire[4:0] rs2 = inst_i[24:20];


wire[2:0] raddr_mem_index  = mem_raddr_i[2:0] ;   //LOAD
wire[2:0] waddr_mem_index  =mem_waddr_i[2:0] ;  //STORE



//csr
always @ (*) begin

    csr_wdata_o=csr_wdata_i   ;
    csr_we_o=csr_we_i  ;
    csr_waddr_o=csr_waddr_i    ;



end      //always





//内存访问 读  写  REG
always@(* ) begin
    begin
        wd_o=wd_i  ;
        wreg_o=wreg_i  ;
        wdata_o=wdata_i  ;

        mem_wdata_o   = mem_wdata_i;
        mem_raddr_o   = mem_raddr_i;
        mem_waddr_o  = mem_waddr_i;
        mem_we_o  = mem_we_i;
        mem_ce_o  =mem_ce_i;
    end

    if ( (opcode == `INST_TYPE_L) ||(opcode == `INST_TYPE_S)  )  begin
        case(opcode)
            `INST_TYPE_L: begin
                case(funct3)
                    `INST_LB: begin
                        case (raddr_mem_index)
                            3'b000: begin
                                wdata_o = {{56{mem_rdata_i[7]}}, mem_rdata_i[7:0]};
                            end
                            3'b001: begin
                                wdata_o = {{56{mem_rdata_i[15]}}, mem_rdata_i[15:8]};
                            end
                            3'b010: begin
                                wdata_o = {{56{mem_rdata_i[23]}}, mem_rdata_i[23:16]};
                            end
                            3'b011: begin
                                wdata_o = {{56{mem_rdata_i[31]}}, mem_rdata_i[31:24]};
                            end
                            3'b100: begin
                                wdata_o = {{56{mem_rdata_i[39]}}, mem_rdata_i[39:32]};
                            end
                            3'b101: begin
                                wdata_o = {{56{mem_rdata_i[47]}}, mem_rdata_i[47:40]};
                            end
                            3'b110: begin
                                wdata_o = {{56{mem_rdata_i[55]}}, mem_rdata_i[55:48]};
                            end
                            3'b111: begin
                                wdata_o = {{56{mem_rdata_i[63]}}, mem_rdata_i[63:56]};
                            end
                            default : begin
                            end
                        endcase


                    end
                    `INST_LH: begin
                        case(raddr_mem_index)
                            3'b000: begin
                                wdata_o = {{48{mem_rdata_i[15]}}, mem_rdata_i[15:0]};
                            end
                            3'b010: begin
                                wdata_o = {{48{mem_rdata_i[31]}}, mem_rdata_i[31:16]};
                            end
                            3'b100: begin
                                wdata_o = {{48{mem_rdata_i[47]}}, mem_rdata_i[47:32]};
                            end
                            3'b110: begin
                                wdata_o = {{48{mem_rdata_i[63]}}, mem_rdata_i[63:48]};
                            end


                            default: begin
                            end

                        endcase


                    end
                    `INST_LW: begin
                        case(raddr_mem_index)
                            3'b000: begin

                                wdata_o = {{32{mem_rdata_i[31]}}, mem_rdata_i[31:0]};
                            end
                            3'b100: begin
                                wdata_o = {{32{mem_rdata_i[63]}}, mem_rdata_i[63:32]};

                            end
                            default: begin
                            end

                        endcase
                    end

                    `INST_LBU: begin
                        case (raddr_mem_index)
                            3'b000: begin
                                wdata_o = {{56{1'b0}}, mem_rdata_i[7:0]};
                            end
                            3'b001: begin
                                wdata_o = {{56{1'b0}}, mem_rdata_i[15:8]};
                            end
                            3'b010: begin
                                wdata_o = {{56{1'b0}}, mem_rdata_i[23:16]};
                            end
                            3'b011: begin
                                wdata_o = {{56{1'b0}}, mem_rdata_i[31:24]};
                            end
                            3'b100: begin
                                wdata_o = {{56{1'b0}}, mem_rdata_i[39:32]};
                            end
                            3'b101: begin
                                wdata_o = {{56{1'b0}}, mem_rdata_i[47:40]};
                            end
                            3'b110: begin
                                wdata_o = {{56{1'b0}}, mem_rdata_i[55:48]};
                            end
                            3'b111: begin
                                wdata_o = {{56{1'b0}}, mem_rdata_i[63:56]};
                            end
                            default : begin
                            end
                        endcase


                    end
                    `INST_LHU:   begin
                        case(raddr_mem_index)
                            3'b000: begin
                                wdata_o = {{48{1'b0}}, mem_rdata_i[15:0]};
                            end
                            3'b010: begin
                                wdata_o = {{48{1'b0}}, mem_rdata_i[31:16]};
                            end
                            3'b100: begin
                                wdata_o = {{48{1'b0}}, mem_rdata_i[47:32]};
                            end
                            3'b110: begin
                                wdata_o = {{48{1'b0}}, mem_rdata_i[63:48]};
                            end
                            default: begin
                            end

                        endcase
                    end
                    `INST_LWU: begin
                        case(raddr_mem_index)
                            3'b000: begin

                                wdata_o = {{32{1'b0}}, mem_rdata_i[31:0]};
                            end
                            3'b100: begin
                                wdata_o = {{32{1'b0}}, mem_rdata_i[63:32]};

                            end
                            default: begin
                            end

                        endcase
                    end
                    //64 ONLY
                    `INST_LD: begin
                        wdata_o =  mem_rdata_i ;

                    end

                    default : begin
                    end
                endcase

            end

            `INST_TYPE_S: begin
                case(funct3)
                    `INST_SB: begin
                        case (raddr_mem_index)
                            3'b000: begin
                                mem_wdata_o = {{{mem_rdata_i[63:8]}}, mem_wdata_i[7:0]};
                            end
                            3'b001: begin
                                mem_wdata_o = {{{mem_rdata_i[63:16]}}, mem_wdata_i[7:0],mem_rdata_i[7:0] };
                            end
                            3'b010: begin
                                mem_wdata_o = {{{mem_rdata_i[63:24]}}, mem_wdata_i[7:0], mem_rdata_i[15:0]};
                            end
                            3'b011: begin
                                mem_wdata_o = {{{mem_rdata_i[63:32]}}, mem_wdata_i[7:0], mem_rdata_i[23:0]};
                            end
                            3'b100: begin
                                mem_wdata_o = {{{mem_rdata_i[63:40]}}, mem_wdata_i[7:0], mem_rdata_i[31:0]};
                            end

                            3'b101: begin
                                mem_wdata_o = {{{mem_rdata_i[63:48]}}, mem_wdata_i[7:0], mem_rdata_i[39:0]};
                            end
                            3'b110: begin
                                mem_wdata_o = {{{mem_rdata_i[63:56]}}, mem_wdata_i[7:0]  , mem_rdata_i[47:0]};
                            end
                            3'b111: begin
                                mem_wdata_o = { mem_wdata_i[7:0]  , mem_rdata_i[55:0]};
                            end
                            default : begin
                            end
                        endcase

                    end

                    `INST_SH: begin
                        case(raddr_mem_index)
                            3'b000: begin
                                mem_wdata_o = {mem_rdata_i[63:48], mem_rdata_i[47:32] ,mem_rdata_i[31:16],mem_wdata_i[15:0]};
                            end
                            3'b010: begin
                                mem_wdata_o = {mem_rdata_i[63:48], mem_rdata_i[47:32] ,mem_wdata_i[15:0],mem_rdata_i[15:0]};
                            end
                            3'b100: begin
                                mem_wdata_o = {mem_rdata_i[63:48], mem_wdata_i[15:0] ,mem_rdata_i[31:16],mem_rdata_i[15:0]};
                            end
                            3'b110: begin
                                mem_wdata_o ={mem_wdata_i[15:0] , mem_rdata_i[47:32] ,mem_rdata_i[31:16],mem_rdata_i[15:0]};
                            end


                            default: begin
                            end

                        endcase
                    end
                    `INST_SW: begin

                        case(raddr_mem_index)
                            3'b000 : begin
                                mem_wdata_o ={mem_wdata_i[63:32] ,mem_rdata_i[31:0]};
                            end
                            3'b100 : begin
                                mem_wdata_o ={mem_rdata_i[31:0] ,mem_wdata_i[31:0]};
                            end

                            default: begin
                            end

                        endcase


                    end
                    //64BIT ONLY
                    `INST_SD: begin
                        mem_wdata_o =mem_rdata_i;
                    end
                    default : begin
                    end
                endcase
            end




            default : begin
            end

        endcase
    end

    else  begin


    end



end



endmodule

