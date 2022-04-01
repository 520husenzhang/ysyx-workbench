// ysyx_22040422
//  算术逻辑单元
//  张虎森
//44555



`include "defines.v"

module   ALU(
    input  wire                         rst_n                      ,

   // from id
    input  wire        [`InstBus]       inst_i                     ,// 指令内容
    input  wire        [`InstAddrBus]   inst_addr_i                ,// 指令地址  ???需要一直传递下去吗


    input  wire        [`RegBus]        reg1_i_op                  ,// 操作数1
    input  wire        [`RegBus]        reg2_i_op                  ,// 操作数2

    input  wire                         reg_we_i                   ,// 写通用寄存器标志
    input  wire        [`RegAddrBus]    reg_waddr_i                ,  // 写通用寄存器地址


	//回写
    output reg         [`RegAddrBus]    wd_o                       ,
    output reg                          wreg_o                     ,
    output reg         [`RegBus]        wdata_o                     


    );
    
wire[6:0] opcode;
wire[2:0] funct3;
wire[6:0] funct7;
wire [4:0]rd  ;
wire[`RegBus] op1_add_op2_res;


assign op1_add_op2_res = reg1_i_op + reg2_i_op;
assign opcode = inst_i[6:0];
assign funct3 = inst_i[14:12];
assign funct7 = inst_i[31:25];

assign rd = inst_i[11:7];



    
//reg      [`RegBus]        logicout                   ;//逻辑结果
//reg      [`RegBus]        algor_out                  ;//算术结果


 //指令解码
always @ ( * ) begin
        if(rst_n==`RstDisable) begin
            wdata_o = `ZeroWord;
        end 
        else    
            wd_o= reg_waddr_i; 
            wreg_o=reg_we_i ;
            begin
            case (opcode)
                `INST_TYPE_I:  begin
                case(funct3)
                 `INST_ADDI:  begin   wdata_o=op1_add_op2_res   ;          end  
			     	
                default:   begin  wdata_o=`ZeroWord    ;           end   
                endcase

                 end
					
        
            default: begin   wdata_o=`ZeroWord  ;    end  
            endcase
        end                                                        
    end                                                           



endmodule


