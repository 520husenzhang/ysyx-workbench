// 指令译码  
//张虎森
//ysyx_22040422 
// 纯组合逻辑电路
`include "defines.v"

module ID(
       
 	input wire rst_n, 
 	// from if_id
    input wire[`InstBus] inst_i,             // 指令内容
    input wire[`InstAddrBus] inst_addr_i,    // 指令地址 ???
     // from regs
    input wire[`RegBus] reg1_rdata_i,        // 通用寄存器1输入数据
    input wire[`RegBus] reg2_rdata_i,        // 通用寄存器2输入数据

   	//送到regfile的信息
    output reg[`RegAddrBus] reg1_raddr_o,    // 读通用寄存器1地址
    output reg[`RegAddrBus] reg2_raddr_o,    // 读通用寄存器2地址\
	output reg              reg1_read_o,
	output reg              reg2_read_o, 



     // to ex
    output reg[`InstBus] inst_o,             // 指令内容
    output reg[`InstAddrBus] inst_addr_o,    // 指令地址  ???需要一直传递下去吗


    output reg[`RegBus] reg1_o_op,           // 操作数1
    output reg[`RegBus] reg2_o_op,            // 操作数2

    output reg reg_we_o,                     // 写通用寄存器标志
    output reg[`RegAddrBus] reg_waddr_o     // 写通用寄存器地址


    //不加入csr寄存器

	);
        
    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
    wire[4:0] rd = inst_i[11:7];
    wire[4:0] rs1 = inst_i[19:15];
    wire[4:0] rs2 = inst_i[24:20];
 
  //指令解码部分
  always @(*) begin
  	if (rst_n==`RstDisable) begin
  		// reset
  		 //ex
  		inst_o=`NO_Inst  ;
  		inst_addr_o= `NO_InstAddr;
  		reg1_o_op=`ZeroReg  ;
  		reg2_o_op=`ZeroReg    ;
  		reg_we_o=`WriteDisable;   
  		reg_waddr_o=`NOPRegAddr;
  		//regfile 
  		reg1_raddr_o=`NOPRegAddr  ;
  		reg2_raddr_o=`NOPRegAddr  ;  	
  		reg1_read_o=1'b0 ;	
  		reg2_read_o = 1'b0;
  	end
  	else  begin
      inst_o=inst_i  ;
      inst_addr_o=inst_addr_i ;
  		case(opcode)  
  		`INST_TYPE_I:   begin 
  			case(funct3)
  			`INST_ADDI:        begin
  			       reg_we_o = `WriteEnable;
               reg_waddr_o = rd;
               reg1_raddr_o=rs1;
               reg2_raddr_o =`ZeroReg;
               reg1_o_op=reg1_rdata_i   ;  
               reg2_o_op={{52{inst_i[31]}}, inst_i[31:20]}   ;  
               end 
  		     default:begin    
             reg_we_o = `WriteDisable;
             reg_waddr_o = `ZeroReg;
             reg1_raddr_o = `ZeroReg;
             reg2_raddr_o = `ZeroReg;
  		     end
  			endcase
  

  		 end
  		default:			begin  
         reg_we_o = `WriteDisable;
         reg_waddr_o = `ZeroReg;
         reg1_raddr_o = `ZeroReg;
         reg2_raddr_o = `ZeroReg;


  		  end
  		endcase 




  	end

  end







endmodule 