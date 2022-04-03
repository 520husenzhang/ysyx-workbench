// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__trace_chg_sub_0(VALU___024root* vlSelf, VerilatedVcd* tracep);

void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALU___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VALU___024root__trace_chg_sub_0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->risc_v__DOT__reg1_rdata_addr),5);
        tracep->chgBit(oldp+1,(vlSelf->risc_v__DOT__re1));
        tracep->chgBit(oldp+2,(vlSelf->risc_v__DOT__re2));
        tracep->chgIData(oldp+3,(vlSelf->risc_v__DOT__inst_id),32);
        tracep->chgQData(oldp+4,(vlSelf->risc_v__DOT__inst_addr_id),64);
        tracep->chgQData(oldp+6,(vlSelf->risc_v__DOT__reg1_op_id),64);
        tracep->chgQData(oldp+8,(vlSelf->risc_v__DOT__reg2_op_id),64);
        tracep->chgCData(oldp+10,(vlSelf->risc_v__DOT__wd_alu_mem_i),5);
        tracep->chgQData(oldp+11,(vlSelf->risc_v__DOT__wdata_alu_mem_i),64);
        tracep->chgCData(oldp+13,(vlSelf->risc_v__DOT__wd_mem_wb_i),5);
        tracep->chgBit(oldp+14,(vlSelf->risc_v__DOT__wreg_mem_wb_i));
        tracep->chgQData(oldp+15,(vlSelf->risc_v__DOT__wdata_mem_wb_i),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgQData(oldp+17,(vlSelf->risc_v__DOT__inst_IF__DOT__PC),64);
        tracep->chgQData(oldp+19,(vlSelf->risc_v__DOT__id_pc),64);
        tracep->chgIData(oldp+21,(vlSelf->risc_v__DOT__id_inst),32);
        tracep->chgIData(oldp+22,(vlSelf->risc_v__DOT__inst_alu),32);
        tracep->chgQData(oldp+23,(vlSelf->risc_v__DOT__inst_addr_alu),64);
        tracep->chgQData(oldp+25,(vlSelf->risc_v__DOT__reg1_op_alu),64);
        tracep->chgQData(oldp+27,(vlSelf->risc_v__DOT__reg2_op_alu),64);
        tracep->chgBit(oldp+29,(vlSelf->risc_v__DOT__reg_we_alu));
        tracep->chgCData(oldp+30,(vlSelf->risc_v__DOT__reg_waddr_alu),5);
        tracep->chgCData(oldp+31,(vlSelf->risc_v__DOT__wd_alu_mem_o),5);
        tracep->chgBit(oldp+32,(vlSelf->risc_v__DOT__wreg_alu_mem_o));
        tracep->chgQData(oldp+33,(vlSelf->risc_v__DOT__wdata_alu_mem_o),64);
        tracep->chgCData(oldp+35,(vlSelf->risc_v__DOT__wb_wd_i),5);
        tracep->chgBit(oldp+36,(vlSelf->risc_v__DOT__wb_wreg_i));
        tracep->chgQData(oldp+37,(vlSelf->risc_v__DOT__wb_wdata_i),64);
        tracep->chgCData(oldp+39,((0x7fU & vlSelf->risc_v__DOT__inst_alu)),7);
        tracep->chgCData(oldp+40,((7U & (vlSelf->risc_v__DOT__inst_alu 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+41,((vlSelf->risc_v__DOT__inst_alu 
                                   >> 0x19U)),7);
        tracep->chgCData(oldp+42,((0x1fU & (vlSelf->risc_v__DOT__inst_alu 
                                            >> 7U))),5);
        tracep->chgCData(oldp+43,((0x1fU & (vlSelf->risc_v__DOT__inst_alu 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+44,((0x1fU & (vlSelf->risc_v__DOT__inst_alu 
                                            >> 0x14U))),5);
        tracep->chgQData(oldp+45,((vlSelf->risc_v__DOT__reg1_op_alu 
                                   + vlSelf->risc_v__DOT__reg2_op_alu)),64);
        tracep->chgCData(oldp+47,((0x7fU & vlSelf->risc_v__DOT__id_inst)),7);
        tracep->chgCData(oldp+48,((7U & (vlSelf->risc_v__DOT__id_inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+49,((vlSelf->risc_v__DOT__id_inst 
                                   >> 0x19U)),7);
        tracep->chgCData(oldp+50,((0x1fU & (vlSelf->risc_v__DOT__id_inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+51,((0x1fU & (vlSelf->risc_v__DOT__id_inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+52,((0x1fU & (vlSelf->risc_v__DOT__id_inst 
                                            >> 0x14U))),5);
        tracep->chgQData(oldp+53,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0]),64);
        tracep->chgQData(oldp+55,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[1]),64);
        tracep->chgQData(oldp+57,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[2]),64);
        tracep->chgQData(oldp+59,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[3]),64);
        tracep->chgQData(oldp+61,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[4]),64);
        tracep->chgQData(oldp+63,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[5]),64);
        tracep->chgQData(oldp+65,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[6]),64);
        tracep->chgQData(oldp+67,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[7]),64);
        tracep->chgQData(oldp+69,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[8]),64);
        tracep->chgQData(oldp+71,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[9]),64);
        tracep->chgQData(oldp+73,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[10]),64);
        tracep->chgQData(oldp+75,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[11]),64);
        tracep->chgQData(oldp+77,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[12]),64);
        tracep->chgQData(oldp+79,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[13]),64);
        tracep->chgQData(oldp+81,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[14]),64);
        tracep->chgQData(oldp+83,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[15]),64);
        tracep->chgQData(oldp+85,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[16]),64);
        tracep->chgQData(oldp+87,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[17]),64);
        tracep->chgQData(oldp+89,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[18]),64);
        tracep->chgQData(oldp+91,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[19]),64);
        tracep->chgQData(oldp+93,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[20]),64);
        tracep->chgQData(oldp+95,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[21]),64);
        tracep->chgQData(oldp+97,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[22]),64);
        tracep->chgQData(oldp+99,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[23]),64);
        tracep->chgQData(oldp+101,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[24]),64);
        tracep->chgQData(oldp+103,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[25]),64);
        tracep->chgQData(oldp+105,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[26]),64);
        tracep->chgQData(oldp+107,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[27]),64);
        tracep->chgQData(oldp+109,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[28]),64);
        tracep->chgQData(oldp+111,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[29]),64);
        tracep->chgQData(oldp+113,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[30]),64);
        tracep->chgQData(oldp+115,(vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[31]),64);
    }
    tracep->chgBit(oldp+117,(vlSelf->clk));
    tracep->chgBit(oldp+118,(vlSelf->rst_n));
    tracep->chgIData(oldp+119,(vlSelf->inst),32);
    tracep->chgQData(oldp+120,(vlSelf->pc),64);
    tracep->chgBit(oldp+122,(vlSelf->rom_ce));
    tracep->chgQData(oldp+123,(((IData)(vlSelf->rst_n)
                                 ? ((0U == (IData)(vlSelf->risc_v__DOT__reg1_rdata_addr))
                                     ? 0ULL : (((((IData)(vlSelf->risc_v__DOT__reg1_rdata_addr) 
                                                  == (IData)(vlSelf->risc_v__DOT__wb_wd_i)) 
                                                 & (IData)(vlSelf->risc_v__DOT__wb_wreg_i)) 
                                                & (IData)(vlSelf->risc_v__DOT__re1))
                                                ? vlSelf->risc_v__DOT__wb_wdata_i
                                                : ((IData)(vlSelf->risc_v__DOT__re1)
                                                    ? 
                                                   vlSelf->risc_v__DOT__inst_REG_files__DOT__regs
                                                   [vlSelf->risc_v__DOT__reg1_rdata_addr]
                                                    : 0ULL)))
                                 : 0ULL)),64);
    tracep->chgBit(oldp+125,(((IData)(vlSelf->rst_n) 
                              & (IData)((0x13U == (0x707fU 
                                                   & vlSelf->risc_v__DOT__id_inst))))));
    tracep->chgCData(oldp+126,(((IData)(vlSelf->rst_n)
                                 ? ((0x13U == (0x7fU 
                                               & vlSelf->risc_v__DOT__id_inst))
                                     ? ((0U == (7U 
                                                & (vlSelf->risc_v__DOT__id_inst 
                                                   >> 0xcU)))
                                         ? (0x1fU & 
                                            (vlSelf->risc_v__DOT__id_inst 
                                             >> 7U))
                                         : 0U) : 0U)
                                 : 0U)),5);
}

void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_cleanup\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
