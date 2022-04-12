///全局
`define RstEnable 1'b1
`define RstDisable 1'b0
`define ZeroWord   64'd0

`define WriteEnable   1'b1
`define WriteDisable 1'b0
`define ReadEnable 1'b1
`define ReadDisable 1'b0
`define AluOpBus 6:0
`define AluSelBus 2:0
`define InstValid 1'b1
`define InstInvalid 1'b0
`define Stop 1'b1
`define NoStop 1'b0
`define InDelaySlot 1'b1
`define NotInDelaySlot 1'b0
`define Branch 1'b1
`define NotBranch 1'b0
`define InterruptAssert 1'b1
`define InterruptNotAssert 1'b0
`define TrapAssert 1'b1
`define TrapNotAssert 1'b0
`define True_v 1'b1
`define False_v 1'b0
`define ChipEnable 1'b1
`define ChipDisable 1'b0



//指令集相关
 
// I type inst   8条
`define INST_TYPE_I 7'b0010011
//32位相加
`define INST_ADDI   3'b000
`define INST_SLTI   3'b010
`define INST_SLTIU  3'b011
`define INST_XORI   3'b100
`define INST_ORI    3'b110
`define INST_ANDI   3'b111
  //64BIT 最fun7--->fun6
`define INST_SLLI   3'b001
//包含算术和逻辑
`define INST_SRI    3'b101


// U type inst  7条
`define INST_TYPE_L 7'b0000011
`define INST_LB     3'b000
`define INST_LH     3'b001
`define INST_LW     3'b010
`define INST_LBU    3'b100
`define INST_LHU    3'b101
//64bit inst
`define INST_LWU    3'b110
`define INST_LD     3'b011


// S type inst   4条  
`define INST_TYPE_S   7'b0100011
`define INST_SB     3'b000
`define INST_SH     3'b001
`define INST_SW     3'b010
//64 bit
`define INST_SD     3'b011  

// R and M type inst  16条
`define INST_TYPE_R_M 7'b0110011
// R type inst
`define INST_ADD_SUB 3'b000
`define INST_SLL    3'b001
`define INST_SLT    3'b010
`define INST_SLTU   3'b011
`define INST_XOR    3'b100
`define INST_SR     3'b101
`define INST_OR     3'b110
`define INST_AND    3'b111
// M type inst  乘除法
`define INST_MUL    3'b000
`define INST_MULH   3'b001
`define INST_MULHSU 3'b010
`define INST_MULHU  3'b011
`define INST_DIV    3'b100
`define INST_DIVU   3'b101
`define INST_REM    3'b110
`define INST_REMU   3'b111

// J type inst  4条
`define INST_JAL    7'b1101111
`define INST_JALR   7'b1100111
`define INST_LUI    7'b0110111
`define INST_AUIPC  7'b0010111

`define INST_NOP    32'h00000001
`define INST_NOP_OP 7'b0000001
`define INST_MRET   32'h30200073
//从子过程返回
`define INST_RET    32'h00008067

`define INST_FENCE  7'b0001111
`define INST_ECALL  32'h73
//停止 EBREAK指令被调试器所使用，用来将控制权传送回给调试环境
`define INST_EBREAK 32'h00100073

// B type inst 有条件跳转  6条
`define INST_TYPE_B 7'b1100011
`define INST_BEQ    3'b000
`define INST_BNE    3'b001
`define INST_BLT    3'b100
`define INST_BGE    3'b101
`define INST_BLTU   3'b110
`define INST_BGEU   3'b111

// CSR inst   7条
`define INST_CSR    7'b1110011
`define INST_CSRRW  3'b001
`define INST_CSRRS  3'b010
`define INST_CSRRC  3'b011
`define INST_CSRRWI 3'b101
`define INST_CSRRSI 3'b110
`define INST_CSRRCI 3'b111

//64位仅有的指令
//64位仅有的指令
//64位仅有的指令----vvvv    13条
`define INST_TYPE_64IW   7'b0011011  
`define INST_ADDIW     3'b000
`define INST_SLLIW     3'b001
//包含算术和逻辑2 
`define INST_SRIW     3'b101
    

`define INST_TYPE_R_M_64W  7'b0111011
`define INST_ADD_SUB_MULW    3'b000
`define INST_SLLW         3'b001
//包含两条
`define INST_SRW_DIVUW         3'b101
//乘除法

`define INST_DIVW         3'b100
`define INST_DIVUW        3'b101
`define INST_REMW        3'b110
`define INST_REMUW       3'b111
//64位仅有的指令----AAAA

// CSR reg addr
`define   CSR_Addr_bus   11:0
`define   CSR_Zeroaddr    12'd0  
//用户csr  read only 
`define CSR_CYCLE   12'hc00

//机器csr    read  and write 
`define CSR_MTVEC   12'h305
`define CSR_MCAUSE  12'h342
`define CSR_MEPC    12'h341
`define CSR_MIE     12'h304
`define CSR_MSTATUS 12'h300
`define CSR_MSCRATCH 12'h340



//指令存储器相关
//rom
`define RomNum  'd64  // rom depth(how many words)
`define NO_InstAddr  64'd0 
//ram
`define MemNum 'd4096  //ram  memory depth(how many words)
`define MemBus 63:0
`define MemAddrBus 63:0
`define Mem_ZeroAddr 12'd0  
//`define MemAddrBus  63:0
//指令长度
`define InstBus 31:0
`define InstAddrBus 63:0
//`define  ZeroAddr   64'd0 
//空指令
`define NO_Inst   32'd0 
//流水线 
`define  Hold_Flag_Bus  5:0
`define  Hold_None 6'b000000
`define  Hold_PC   6'b000001
`define  Hold_IF   6'b000011
`define  Hold_ID   6'b000111
`define  Hold_EX   6'b001111
`define  Hold_MEM  6'b011111
`define  Hold_Enable   1'b1 
`define  Hold_Disable   1'b0 


`define  Jump_Enable   1'b1 
`define  Jump_Disable   1'b0 

`define  Hold_Stop   1'b1
`define  Hold_NoStop    1'b0 


//  0:  PC
//  1:if_id
//  2:id_ex
//  3:ex_mem
//  4:mem_wb
//  5:  wb

//指令存储器inst_rom
//数据存储器data_ram


//通用寄存器regfile
//32个
`define RegAddrBus 4:0
`define RegBus 63:0
`define RegWidth 64
`define DoubleRegWidth 128
`define DoubleRegBus 127:0
`define RegNum 32
`define RegNumLog2 5
`define NOPRegAddr 5'd0
`define ZeroReg    64'd0
`define Zero32bit    'd0
`define DoubleRegBus_Hi   127:64
`define DoubleRegBus_Lo   63:0
//除法div

//总线





