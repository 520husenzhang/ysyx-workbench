//模拟ram
`include "defines.v"
module RAM (
    input  wire                         clk                        ,
    input  wire                         ce                         ,
    input  wire                         we                         ,
    input  wire        [`MemAddrBus]    waddr                      ,
    input  wire        [`MemAddrBus]    raddr                      ,

    input  wire        [`MemBus]        data_i                     ,
    output wire         [`MemBus]        data_o                      

); 

//   reg [`MemBus] ram[`MemNum-1:0]  ;

// //内容初始化
//   initial $readmemh ( "ram.hex", ram );

ram  u_ram(
    .clock     ( clk     ),
    .data      ( data_i      ),
    .rdaddress ( raddr[14:3]),
    .wraddress ( waddr[14:3] ),
    .wren      ( we      ),
    .q         ( data_o         )
);






// //write  
// always @ (posedge clk) begin
//     if (ce == `ChipDisable) begin
//         //data_o <= ZeroWord;
//     end else if(we == `WriteEnable) begin
//         ram[waddr[63:3]]<=data_i     ;
//     end
// end
// //read
// always @ (*) begin
//     if (ce == `ChipDisable) begin
//         data_o = `ZeroWord;
//   end else if(we == `WriteDisable) begin
//         data_o =  ram[raddr[63:3]  ];  
//     end else begin
//             data_o <= `ZeroWord;
//     end
// end		




endmodule