// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


VL_ATTR_COLD void VALU___024root__trace_init_sub__TOP__0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst_n", false,-1);
    tracep->pushNamePrefix("risc_v ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst_n", false,-1);
    tracep->declBus(c+18,"inst_wire", false,-1, 31,0);
    tracep->declBus(c+1,"reg1_rdata_addr", false,-1, 4,0);
    tracep->declBus(c+124,"reg2_rdata_addr", false,-1, 4,0);
    tracep->declQuad(c+120,"reg1_rdata_wire", false,-1, 63,0);
    tracep->declQuad(c+125,"reg2_rdata_wire", false,-1, 63,0);
    tracep->declBit(c+2,"re1", false,-1);
    tracep->declBit(c+3,"re2", false,-1);
    tracep->declQuad(c+19,"if_pc", false,-1, 63,0);
    tracep->declBus(c+127,"if_inst", false,-1, 31,0);
    tracep->declQuad(c+21,"id_pc", false,-1, 63,0);
    tracep->declBus(c+23,"id_inst", false,-1, 31,0);
    tracep->declBus(c+4,"inst_id", false,-1, 31,0);
    tracep->declQuad(c+5,"inst_addr_id", false,-1, 63,0);
    tracep->declQuad(c+7,"reg1_op_id", false,-1, 63,0);
    tracep->declQuad(c+9,"reg2_op_id", false,-1, 63,0);
    tracep->declBit(c+122,"reg_we_id", false,-1);
    tracep->declBus(c+123,"reg_waddr_id", false,-1, 4,0);
    tracep->declBus(c+24,"inst_alu", false,-1, 31,0);
    tracep->declQuad(c+25,"inst_addr_alu", false,-1, 63,0);
    tracep->declQuad(c+27,"reg1_op_alu", false,-1, 63,0);
    tracep->declQuad(c+29,"reg2_op_alu", false,-1, 63,0);
    tracep->declBit(c+31,"reg_we_alu", false,-1);
    tracep->declBus(c+32,"reg_waddr_alu", false,-1, 4,0);
    tracep->declBus(c+11,"wd_alu_mem_i", false,-1, 4,0);
    tracep->declBit(c+31,"wreg_alu_mem_i", false,-1);
    tracep->declQuad(c+12,"wdata_alu_mem_i", false,-1, 63,0);
    tracep->declBus(c+33,"wd_alu_mem_o", false,-1, 4,0);
    tracep->declBit(c+34,"wreg_alu_mem_o", false,-1);
    tracep->declQuad(c+35,"wdata_alu_mem_o", false,-1, 63,0);
    tracep->declBus(c+14,"wd_mem_wb_i", false,-1, 4,0);
    tracep->declBit(c+15,"wreg_mem_wb_i", false,-1);
    tracep->declQuad(c+16,"wdata_mem_wb_i", false,-1, 63,0);
    tracep->declBus(c+37,"wb_wd_i", false,-1, 4,0);
    tracep->declBit(c+38,"wb_wreg_i", false,-1);
    tracep->declQuad(c+39,"wb_wdata_i", false,-1, 63,0);
    tracep->pushNamePrefix("inst_ALU ");
    tracep->declBit(c+119,"rst_n", false,-1);
    tracep->declBus(c+24,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+25,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+27,"reg1_i_op", false,-1, 63,0);
    tracep->declQuad(c+29,"reg2_i_op", false,-1, 63,0);
    tracep->declBit(c+31,"reg_we_i", false,-1);
    tracep->declBus(c+32,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+11,"wd_o", false,-1, 4,0);
    tracep->declBit(c+31,"wreg_o", false,-1);
    tracep->declQuad(c+12,"wdata_o", false,-1, 63,0);
    tracep->declBus(c+41,"opcode", false,-1, 6,0);
    tracep->declBus(c+42,"funct3", false,-1, 2,0);
    tracep->declBus(c+43,"funct7", false,-1, 6,0);
    tracep->declBus(c+44,"rd", false,-1, 4,0);
    tracep->declQuad(c+45,"op1_add_op2_res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_ALU_MEM ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst_n", false,-1);
    tracep->declBus(c+11,"alu_wd", false,-1, 4,0);
    tracep->declBit(c+31,"alu_wreg", false,-1);
    tracep->declQuad(c+12,"alu_wdata", false,-1, 63,0);
    tracep->declBus(c+33,"mem_wd", false,-1, 4,0);
    tracep->declBit(c+34,"mem_wreg", false,-1);
    tracep->declQuad(c+35,"mem_wdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_ID ");
    tracep->declBit(c+119,"rst_n", false,-1);
    tracep->declBus(c+23,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+21,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+120,"reg1_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+125,"reg2_rdata_i", false,-1, 63,0);
    tracep->declBus(c+1,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+124,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+2,"reg1_read_o", false,-1);
    tracep->declBit(c+3,"reg2_read_o", false,-1);
    tracep->declBus(c+4,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+5,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+7,"reg1_o_op", false,-1, 63,0);
    tracep->declQuad(c+9,"reg2_o_op", false,-1, 63,0);
    tracep->declBit(c+122,"reg_we_o", false,-1);
    tracep->declBus(c+123,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+47,"opcode", false,-1, 6,0);
    tracep->declBus(c+48,"funct3", false,-1, 2,0);
    tracep->declBus(c+49,"funct7", false,-1, 6,0);
    tracep->declBus(c+50,"rd", false,-1, 4,0);
    tracep->declBus(c+51,"rs1", false,-1, 4,0);
    tracep->declBus(c+52,"rs2", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_ID_ALU ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst_n", false,-1);
    tracep->declBus(c+4,"inst_id", false,-1, 31,0);
    tracep->declQuad(c+5,"inst_addr_id", false,-1, 63,0);
    tracep->declQuad(c+7,"reg1_op_id", false,-1, 63,0);
    tracep->declQuad(c+9,"reg2_op_id", false,-1, 63,0);
    tracep->declBit(c+122,"reg_we_id", false,-1);
    tracep->declBus(c+123,"reg_waddr_id", false,-1, 4,0);
    tracep->declBus(c+24,"inst_alu", false,-1, 31,0);
    tracep->declQuad(c+25,"inst_addr_alu", false,-1, 63,0);
    tracep->declQuad(c+27,"reg1_op_alu", false,-1, 63,0);
    tracep->declQuad(c+29,"reg2_op_alu", false,-1, 63,0);
    tracep->declBit(c+31,"reg_we_alu", false,-1);
    tracep->declBus(c+32,"reg_waddr_alu", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_IF ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst_n", false,-1);
    tracep->declBus(c+18,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+19,"if_pc", false,-1, 63,0);
    tracep->declQuad(c+19,"PC", false,-1, 63,0);
    tracep->declBit(c+53,"rom_ce", false,-1);
    tracep->pushNamePrefix("inst_ROM ");
    tracep->declBit(c+53,"ce", false,-1);
    tracep->declQuad(c+19,"addr", false,-1, 63,0);
    tracep->declBus(c+18,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_IF_ID ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst_n", false,-1);
    tracep->declQuad(c+19,"if_pc", false,-1, 63,0);
    tracep->declBus(c+18,"if_inst", false,-1, 31,0);
    tracep->declQuad(c+21,"id_pc", false,-1, 63,0);
    tracep->declBus(c+23,"id_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_MEM ");
    tracep->declBit(c+119,"rst_n", false,-1);
    tracep->declBus(c+33,"wd_i", false,-1, 4,0);
    tracep->declBit(c+34,"wreg_i", false,-1);
    tracep->declQuad(c+35,"wdata_i", false,-1, 63,0);
    tracep->declBus(c+14,"wd_o", false,-1, 4,0);
    tracep->declBit(c+15,"wreg_o", false,-1);
    tracep->declQuad(c+16,"wdata_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_MEM_WB ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst_n", false,-1);
    tracep->declBus(c+14,"mem_wd", false,-1, 4,0);
    tracep->declBit(c+15,"mem_wreg", false,-1);
    tracep->declQuad(c+16,"mem_wdata", false,-1, 63,0);
    tracep->declBus(c+37,"wb_wd", false,-1, 4,0);
    tracep->declBit(c+38,"wb_wreg", false,-1);
    tracep->declQuad(c+39,"wb_wdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_REG_files ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst_n", false,-1);
    tracep->declBit(c+38,"we", false,-1);
    tracep->declBus(c+37,"waddr", false,-1, 4,0);
    tracep->declQuad(c+39,"wdata", false,-1, 63,0);
    tracep->declBit(c+2,"re1", false,-1);
    tracep->declBus(c+1,"raddr1", false,-1, 4,0);
    tracep->declQuad(c+120,"rdata1", false,-1, 63,0);
    tracep->declBit(c+3,"re2", false,-1);
    tracep->declBus(c+124,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+125,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+54+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VALU___024root__trace_init_top(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_top\n"); );
    // Body
    VALU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU___024root__trace_register(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->risc_v__DOT__reg1_rdata_addr),5);
    tracep->fullBit(oldp+2,(vlSelf->risc_v__DOT__re1));
    tracep->fullBit(oldp+3,(vlSelf->risc_v__DOT__re2));
    tracep->fullIData(oldp+4,(vlSelf->risc_v__DOT__inst_id),32);
    tracep->fullQData(oldp+5,(vlSelf->risc_v__DOT__inst_addr_id),64);
    tracep->fullQData(oldp+7,(vlSelf->risc_v__DOT__reg1_op_id),64);
    tracep->fullQData(oldp+9,(vlSelf->risc_v__DOT__reg2_op_id),64);
    tracep->fullCData(oldp+11,(vlSelf->risc_v__DOT__wd_alu_mem_i),5);
    tracep->fullQData(oldp+12,(vlSelf->risc_v__DOT__wdata_alu_mem_i),64);
    tracep->fullCData(oldp+14,(vlSelf->risc_v__DOT__wd_mem_wb_i),5);
    tracep->fullBit(oldp+15,(vlSelf->risc_v__DOT__wreg_mem_wb_i));
    tracep->fullQData(oldp+16,(vlSelf->risc_v__DOT__wdata_mem_wb_i),64);
    tracep->fullIData(oldp+18,(((IData)(vlSelf->risc_v__DOT__inst_IF__DOT__rom_ce)
                                 ? vlSelf->risc_v__DOT__inst_IF__DOT__inst_ROM__DOT__rom
                                [(0x3fU & (IData)(vlSelf->risc_v__DOT__inst_IF__DOT__PC))]
                                 : 0U)),32);
    tracep->fullQData(oldp+19,(vlSelf->risc_v__DOT__inst_IF__DOT__PC),64);
    tracep->fullQData(oldp+21,(vlSelf->risc_v__DOT__id_pc),64);
    tracep->fullIData(oldp+23,(vlSelf->risc_v__DOT__id_inst),32);
    tracep->fullIData(oldp+24,(vlSelf->risc_v__DOT__inst_alu),32);
    tracep->fullQData(oldp+25,(vlSelf->risc_v__DOT__inst_addr_alu),64);
    tracep->fullQData(oldp+27,(vlSelf->risc_v__DOT__reg1_op_alu),64);
    tracep->fullQData(oldp+29,(vlSelf->risc_v__DOT__reg2_op_alu),64);
    tracep->fullBit(oldp+31,(vlSelf->risc_v__DOT__reg_we_alu));
    tracep->fullCData(oldp+32,(vlSelf->risc_v__DOT__reg_waddr_alu),5);
    tracep->fullCData(oldp+33,(vlSelf->risc_v__DOT__wd_alu_mem_o),5);
    tracep->fullBit(oldp+34,(vlSelf->risc_v__DOT__wreg_alu_mem_o));
    tracep->fullQData(oldp+35,(vlSelf->risc_v__DOT__wdata_alu_mem_o),64);
    tracep->fullCData(oldp+37,(vlSelf->risc_v__DOT__wb_wd_i),5);
    tracep->fullBit(oldp+38,(vlSelf->risc_v__DOT__wb_wreg_i));
    tracep->fullQData(oldp+39,(vlSelf->risc_v__DOT__wb_wdata_i),64);
    tracep->fullCData(oldp+41,((0x7fU & vlSelf->risc_v__DOT__inst_alu)),7);
    tracep->fullCData(oldp+42,((7U & (vlSelf->risc_v__DOT__inst_alu 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+43,((vlSelf->risc_v__DOT__inst_alu 
                                >> 0x19U)),7);
    tracep->fullCData(oldp+44,((0x1fU & (vlSelf->risc_v__DOT__inst_alu 
                                         >> 7U))),5);
    tracep->fullQData(oldp+45,((vlSelf->risc_v__DOT__reg1_op_alu 
                                + vlSelf->risc_v__DOT__reg2_op_alu)),64);
    tracep->fullCData(oldp+47,((0x7fU & vlSelf->risc_v__DOT__id_inst)),7);
    tracep->fullCData(oldp+48,((7U & (vlSelf->risc_v__DOT__id_inst 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+49,((vlSelf->risc_v__DOT__id_inst 
                                >> 0x19U)),7);
    tracep->fullCData(oldp+50,((0x1fU & (vlSelf->risc_v__DOT__id_inst 
                                         >> 7U))),5);
    tracep->fullCData(oldp+51,((0x1fU & (vlSelf->risc_v__DOT__id_inst 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+52,((0x1fU & (vlSelf->risc_v__DOT__id_inst 
                                         >> 0x14U))),5);
    tracep->fullBit(oldp+53,(vlSelf->risc_v__DOT__inst_IF__DOT__rom_ce));
    tracep->fullQData(oldp+54,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0]),64);
    tracep->fullQData(oldp+56,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[1]),64);
    tracep->fullQData(oldp+58,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[2]),64);
    tracep->fullQData(oldp+60,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[3]),64);
    tracep->fullQData(oldp+62,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[4]),64);
    tracep->fullQData(oldp+64,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[5]),64);
    tracep->fullQData(oldp+66,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[6]),64);
    tracep->fullQData(oldp+68,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[7]),64);
    tracep->fullQData(oldp+70,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[8]),64);
    tracep->fullQData(oldp+72,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[9]),64);
    tracep->fullQData(oldp+74,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[10]),64);
    tracep->fullQData(oldp+76,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[11]),64);
    tracep->fullQData(oldp+78,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[12]),64);
    tracep->fullQData(oldp+80,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[13]),64);
    tracep->fullQData(oldp+82,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[14]),64);
    tracep->fullQData(oldp+84,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[15]),64);
    tracep->fullQData(oldp+86,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[16]),64);
    tracep->fullQData(oldp+88,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[17]),64);
    tracep->fullQData(oldp+90,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[18]),64);
    tracep->fullQData(oldp+92,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[19]),64);
    tracep->fullQData(oldp+94,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[20]),64);
    tracep->fullQData(oldp+96,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[21]),64);
    tracep->fullQData(oldp+98,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[22]),64);
    tracep->fullQData(oldp+100,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[23]),64);
    tracep->fullQData(oldp+102,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[24]),64);
    tracep->fullQData(oldp+104,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[25]),64);
    tracep->fullQData(oldp+106,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[26]),64);
    tracep->fullQData(oldp+108,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[27]),64);
    tracep->fullQData(oldp+110,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[28]),64);
    tracep->fullQData(oldp+112,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[29]),64);
    tracep->fullQData(oldp+114,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[30]),64);
    tracep->fullQData(oldp+116,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[31]),64);
    tracep->fullBit(oldp+118,(vlSelf->clk));
    tracep->fullBit(oldp+119,(vlSelf->rst_n));
    tracep->fullQData(oldp+120,(((IData)(vlSelf->rst_n)
                                  ? ((0U == (IData)(vlSelf->risc_v__DOT__reg1_rdata_addr))
                                      ? 0ULL : (((((IData)(vlSelf->risc_v__DOT__reg1_rdata_addr) 
                                                   == (IData)(vlSelf->risc_v__DOT__wb_wd_i)) 
                                                  & (IData)(vlSelf->risc_v__DOT__wb_wreg_i)) 
                                                 & (IData)(vlSelf->risc_v__DOT__re1))
                                                 ? vlSelf->risc_v__DOT__wb_wdata_i
                                                 : 
                                                ((IData)(vlSelf->risc_v__DOT__re1)
                                                  ? 
                                                 vlSelf->risc_v__DOT__inst_REG_files__DOT__regs
                                                 [vlSelf->risc_v__DOT__reg1_rdata_addr]
                                                  : 0ULL)))
                                  : 0ULL)),64);
    tracep->fullBit(oldp+122,(((IData)(vlSelf->rst_n) 
                               & (IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->risc_v__DOT__id_inst))))));
    tracep->fullCData(oldp+123,(((IData)(vlSelf->rst_n)
                                  ? ((0x13U == (0x7fU 
                                                & vlSelf->risc_v__DOT__id_inst))
                                      ? ((0U == (7U 
                                                 & (vlSelf->risc_v__DOT__id_inst 
                                                    >> 0xcU)))
                                          ? (0x1fU 
                                             & (vlSelf->risc_v__DOT__id_inst 
                                                >> 7U))
                                          : 0U) : 0U)
                                  : 0U)),5);
    tracep->fullCData(oldp+124,(0U),5);
    tracep->fullQData(oldp+125,(0ULL),64);
    tracep->fullIData(oldp+127,(vlSelf->risc_v__DOT__if_inst),32);
}
