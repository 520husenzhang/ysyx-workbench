//ysyx_22040422   张虎森
//  
// 控制状态寄存器
//  可以被wb 写 也可以 被 Clint写读
//  可以被 ex  读
`include "defines.v"



module CSR_REGS (

    input wire clk,
    input wire rst_n,

    // form  WB 
    input wire we_i,                        // ex模块写寄存器标志
    input wire[`CSR_Addr_bus] waddr_i,        // ex模块写寄存器地址
    input wire[`RegBus] wdata_i,             // ex模块写寄存器数据
    //FROM ID READ ONLY  ID--->EX 
    input wire[`CSR_Addr_bus] raddr_i,        // ex模块读寄存器地址
    input wire             read_en_i,
    // from v
    input wire clint_we_i,                  // clint模块写寄存器标志
    input wire[`MemAddrBus] clint_waddr_i,  // clint模块写寄存器地址
    input wire[`RegBus] clint_wdata_i,       // clint模块写寄存器数据

    input wire[`MemAddrBus] clint_raddr_i,  // clint模块读寄存器地址
    //int  
    output wire global_int_en_o,            // 全局中断使能标志

    // to clint   目前只读这几个  
    output wire[`RegBus] clint_csr_mtvec,   // mtvec
    output wire[`RegBus] clint_csr_mepc,    // mepc
    output wire[`RegBus] clint_csr_mstatus, // mstatus
    output reg[`RegBus] clint_data_o,       // clint模块读寄存器数据
    // to ex READ ONLY   ID--->EX 
    output reg[`RegBus] csr_data_o               // 模块读寄存器数据

    );

    reg[`DoubleRegBus] cycle;
    reg[`RegBus] mtvec;
    reg[`RegBus] mcause;
    reg[`RegBus] mepc;
    reg[`RegBus] mie;
    reg[`RegBus] mstatus;
    reg[`RegBus] mscratch;

    assign global_int_en_o = (mstatus[3] == 1'b1)? 1'b1: 1'b0;

    assign clint_csr_mtvec = mtvec;
    assign clint_csr_mepc = mepc;
    assign clint_csr_mstatus = mstatus;

    // cycle counter
    // 复位撤销后就一直计数
    always @ (posedge clk) begin
        if (rst_n == `RstDisable) begin
            cycle <= {`ZeroWord, `ZeroWord};
        end else begin
            cycle <= cycle + 1'b1;
        end
    end

    // write reg
    // 写寄存器操作
    always @ (posedge clk) begin
        if (rst_n == `RstDisable) begin
            mtvec <= `ZeroWord;
            mcause <= `ZeroWord;
            mepc <= `ZeroWord;
            mie <= `ZeroWord;
            mstatus <= `ZeroWord;
            mscratch <= `ZeroWord;
        end else begin
            // 优先响应ex模块的写操作
            if (we_i == `WriteEnable) begin
                case (waddr_i[11:0])
                    `CSR_MTVEC: begin
                        mtvec <= wdata_i;
                    end
                    `CSR_MCAUSE: begin
                        mcause <= wdata_i;
                    end
                    `CSR_MEPC: begin
                        mepc <= wdata_i;
                    end
                    `CSR_MIE: begin
                        mie <= wdata_i;
                    end
                    `CSR_MSTATUS: begin
                        mstatus <= wdata_i;
                    end
                    `CSR_MSCRATCH: begin
                        mscratch <= wdata_i;
                    end
                    default: begin

                    end
                endcase
            // clint模块写操作
            end else if (clint_we_i == `WriteEnable) begin
                case (clint_waddr_i[11:0])
                    `CSR_MTVEC: begin
                        mtvec <= clint_wdata_i;
                    end
                    `CSR_MCAUSE: begin
                        mcause <= clint_wdata_i;
                    end
                    `CSR_MEPC: begin
                        mepc <= clint_wdata_i;
                    end
                    `CSR_MIE: begin
                        mie <= clint_wdata_i;
                    end
                    `CSR_MSTATUS: begin
                        mstatus <= clint_wdata_i;
                    end
                    `CSR_MSCRATCH: begin
                        mscratch <= clint_wdata_i;
                    end
                    default: begin

                    end
                endcase
            end
        end
    end

    // read reg
    // ex模块读CSR寄存器
    always @ (*) begin
        if ((waddr_i[11:0] == raddr_i[11:0]) && (we_i == `WriteEnable)) begin
            csr_data_o  = wdata_i;
        end else begin
            case (raddr_i[11:0])
                `CSR_CYCLE: begin
                    csr_data_o  = {32'd0,cycle[31:0]};
                end
            
                `CSR_MTVEC: begin
                    csr_data_o  = mtvec;
                end
                `CSR_MCAUSE: begin
                    csr_data_o  = mcause;
                end
                `CSR_MEPC: begin
                    csr_data_o  = mepc;
                end
                `CSR_MIE: begin
                    csr_data_o  = mie;
                end
                `CSR_MSTATUS: begin
                    csr_data_o  = mstatus;
                end
                `CSR_MSCRATCH: begin
                    csr_data_o  = mscratch;
                end
                default: begin
                    csr_data_o  = `ZeroWord;
                end
            endcase
        end
    end

    // read reg
    // clint模块读CSR寄存器
    always @ (*) begin
        if ((clint_waddr_i[11:0] == clint_raddr_i[11:0]) && (clint_we_i == `WriteEnable)) begin
            clint_data_o  = clint_wdata_i;
        end else begin
            case (clint_raddr_i[11:0])
                `CSR_CYCLE: begin
                    clint_data_o  = {32'd0,cycle[31:0] };
                end

                `CSR_MTVEC: begin
                    clint_data_o  = mtvec;
                end
                `CSR_MCAUSE: begin
                    clint_data_o  = mcause;
                end
                `CSR_MEPC: begin
                    clint_data_o  = mepc;
                end
                `CSR_MIE: begin
                    clint_data_o  = mie;
                end
                `CSR_MSTATUS: begin
                    clint_data_o  = mstatus;
                end
                `CSR_MSCRATCH: begin
                    clint_data_o  = mscratch;
                end
                default: begin
                    clint_data_o  = `ZeroWord;
                end
            endcase
        end
    end

endmodule
