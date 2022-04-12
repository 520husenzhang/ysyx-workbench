// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc_onecycle__Syms.h"


void Vnpc_onecycle___024root__trace_chg_sub_0(Vnpc_onecycle___024root* vlSelf, VerilatedVcd* tracep);

void Vnpc_onecycle___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root__trace_chg_top_0\n"); );
    // Init
    Vnpc_onecycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc_onecycle___024root*>(voidSelf);
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnpc_onecycle___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vnpc_onecycle___024root__trace_chg_sub_0(Vnpc_onecycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_h0c4231f9__0;
    VlWide<4>/*127:0*/ __Vtemp_h3780105a__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump));
        tracep->chgQData(oldp+1,(vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr),64);
        tracep->chgCData(oldp+3,(vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS),5);
        tracep->chgCData(oldp+4,(vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS),5);
        tracep->chgBit(oldp+5,(vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS));
        tracep->chgBit(oldp+6,(vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS));
        tracep->chgQData(oldp+7,(vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS),64);
        tracep->chgQData(oldp+9,(vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS),64);
        tracep->chgCData(oldp+11,(vlSelf->npc_onecycle__DOT__wd_EX_MEM),5);
        tracep->chgBit(oldp+12,(vlSelf->npc_onecycle__DOT__wreg_EX_MEM));
        tracep->chgQData(oldp+13,(vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS),64);
        tracep->chgSData(oldp+15,(vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS),12);
        tracep->chgQData(oldp+16,(vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM),64);
        tracep->chgBit(oldp+18,(vlSelf->npc_onecycle__DOT__csr_we_EX_MEM));
        tracep->chgSData(oldp+19,(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM),12);
        tracep->chgQData(oldp+20,(vlSelf->npc_onecycle__DOT__reg1_op_ID_EX),64);
        tracep->chgQData(oldp+22,(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX),64);
        tracep->chgBit(oldp+24,(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
        tracep->chgCData(oldp+25,(vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX),5);
        tracep->chgBit(oldp+26,(vlSelf->npc_onecycle__DOT__csr_we_ID_EX));
        tracep->chgSData(oldp+27,(vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX),12);
        tracep->chgQData(oldp+28,(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM),64);
        tracep->chgQData(oldp+30,(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM),64);
        tracep->chgQData(oldp+32,(vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM),64);
        tracep->chgBit(oldp+34,(vlSelf->npc_onecycle__DOT__mem_we_EX_MEM));
        tracep->chgBit(oldp+35,(vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM));
        tracep->chgQData(oldp+36,(vlSelf->npc_onecycle__DOT__wdata_EX_MEM),64);
        tracep->chgSData(oldp+38,(vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_s),12);
        tracep->chgSData(oldp+39,(vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_sb),12);
        tracep->chgQData(oldp+40,(vlSelf->npc_onecycle__DOT__u_EX__DOT__mem_waddr_s),64);
        tracep->chgQData(oldp+42,(vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr),64);
        tracep->chgQData(oldp+44,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res),64);
        tracep->chgQData(oldp+46,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_sub_op2_res),64);
        tracep->chgBit(oldp+48,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2));
        tracep->chgBit(oldp+49,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed));
        tracep->chgBit(oldp+50,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned));
        tracep->chgQData(oldp+51,((0xffffffffffffffffULL 
                                   >> (0x3fU & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))),64);
        tracep->chgQData(oldp+53,(vlSelf->npc_onecycle__DOT__u_EX__DOT__sr_shift),64);
        tracep->chgQData(oldp+55,(vlSelf->npc_onecycle__DOT__u_EX__DOT__sli_shift),64);
        tracep->chgIData(oldp+57,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rlshift),32);
        tracep->chgIData(oldp+58,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rashift),32);
        tracep->chgIData(oldp+59,(vlSelf->npc_onecycle__DOT__u_EX__DOT__sllw_temp),32);
        tracep->chgQData(oldp+60,((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->npc_onecycle__DOT__u_EX__DOT__sllw_temp 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__sllw_temp)))),64);
        tracep->chgIData(oldp+62,((~ (0xffffffffU >> 
                                      (0x1fU & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX))))),32);
        tracep->chgIData(oldp+63,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srlwshift),32);
        tracep->chgIData(oldp+64,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srawshift),32);
        tracep->chgWData(oldp+65,(vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp),128);
        __Vtemp_hc961b8db__0[0U] = 1U;
        __Vtemp_hc961b8db__0[1U] = 0U;
        __Vtemp_hc961b8db__0[2U] = 0U;
        __Vtemp_hc961b8db__0[3U] = 0U;
        __Vtemp_h0c4231f9__0[0U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[0U]);
        __Vtemp_h0c4231f9__0[1U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[1U]);
        __Vtemp_h0c4231f9__0[2U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[2U]);
        __Vtemp_h0c4231f9__0[3U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[3U]);
        VL_ADD_W(4, __Vtemp_h3780105a__0, __Vtemp_hc961b8db__0, __Vtemp_h0c4231f9__0);
        tracep->chgWData(oldp+69,(__Vtemp_h3780105a__0),128);
        tracep->chgQData(oldp+73,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res),64);
        tracep->chgQData(oldp+75,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res),64);
        tracep->chgIData(oldp+77,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w),32);
        tracep->chgIData(oldp+78,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w),32);
        tracep->chgQData(oldp+79,((1ULL + (~ vlSelf->npc_onecycle__DOT__reg1_op_ID_EX))),64);
        tracep->chgQData(oldp+81,((1ULL + (~ vlSelf->npc_onecycle__DOT__reg2_op_ID_EX))),64);
        tracep->chgBit(oldp+83,(vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold));
        tracep->chgCData(oldp+84,((7U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))),3);
        tracep->chgCData(oldp+85,((7U & (IData)(vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM))),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+86,((1U & (IData)((vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mstatus 
                                               >> 3U)))));
        tracep->chgQData(oldp+87,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mtvec),64);
        tracep->chgQData(oldp+89,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mepc),64);
        tracep->chgQData(oldp+91,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mstatus),64);
        tracep->chgQData(oldp+93,(((((0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)) 
                                     == (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i))) 
                                    & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_we_i))
                                    ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_wdata_i
                                    : ((0xc00U == (0xfffU 
                                                   & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i)))
                                        ? (QData)((IData)(
                                                          vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle[0U]))
                                        : ((0x305U 
                                            == (0xfffU 
                                                & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i)))
                                            ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mtvec
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i)))
                                                ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mcause
                                                : (
                                                   (0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i)))
                                                    ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mepc
                                                    : 
                                                   ((0x304U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i)))
                                                     ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mie
                                                     : 
                                                    ((0x300U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i)))
                                                      ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mstatus
                                                      : 
                                                     ((0x340U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i)))
                                                       ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mscratch
                                                       : 0ULL))))))))),64);
        tracep->chgWData(oldp+95,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle),128);
        tracep->chgQData(oldp+99,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mcause),64);
        tracep->chgQData(oldp+101,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mie),64);
        tracep->chgQData(oldp+103,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mscratch),64);
        tracep->chgQData(oldp+105,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0]),64);
        tracep->chgQData(oldp+107,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[1]),64);
        tracep->chgQData(oldp+109,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[2]),64);
        tracep->chgQData(oldp+111,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[3]),64);
        tracep->chgQData(oldp+113,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[4]),64);
        tracep->chgQData(oldp+115,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[5]),64);
        tracep->chgQData(oldp+117,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[6]),64);
        tracep->chgQData(oldp+119,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[7]),64);
        tracep->chgQData(oldp+121,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[8]),64);
        tracep->chgQData(oldp+123,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[9]),64);
        tracep->chgQData(oldp+125,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[10]),64);
        tracep->chgQData(oldp+127,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[11]),64);
        tracep->chgQData(oldp+129,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[12]),64);
        tracep->chgQData(oldp+131,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[13]),64);
        tracep->chgQData(oldp+133,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[14]),64);
        tracep->chgQData(oldp+135,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[15]),64);
        tracep->chgQData(oldp+137,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[16]),64);
        tracep->chgQData(oldp+139,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[17]),64);
        tracep->chgQData(oldp+141,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[18]),64);
        tracep->chgQData(oldp+143,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[19]),64);
        tracep->chgQData(oldp+145,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[20]),64);
        tracep->chgQData(oldp+147,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[21]),64);
        tracep->chgQData(oldp+149,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[22]),64);
        tracep->chgQData(oldp+151,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[23]),64);
        tracep->chgQData(oldp+153,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[24]),64);
        tracep->chgQData(oldp+155,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[25]),64);
        tracep->chgQData(oldp+157,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[26]),64);
        tracep->chgQData(oldp+159,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[27]),64);
        tracep->chgQData(oldp+161,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[28]),64);
        tracep->chgQData(oldp+163,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[29]),64);
        tracep->chgQData(oldp+165,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[30]),64);
        tracep->chgQData(oldp+167,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[31]),64);
        tracep->chgQData(oldp+169,(vlSelf->npc_onecycle__DOT__u_IF__DOT__PC),64);
    }
    tracep->chgBit(oldp+171,(vlSelf->clk));
    tracep->chgBit(oldp+172,(vlSelf->rst_n));
    tracep->chgIData(oldp+173,(vlSelf->inst),32);
    tracep->chgQData(oldp+174,(vlSelf->mem_rdata),64);
    tracep->chgQData(oldp+176,(vlSelf->pc),64);
    tracep->chgBit(oldp+178,(vlSelf->rom_ce));
    tracep->chgQData(oldp+179,(vlSelf->mem_wdata),64);
    tracep->chgQData(oldp+181,(vlSelf->mem_raddr),64);
    tracep->chgQData(oldp+183,(vlSelf->mem_waddr),64);
    tracep->chgBit(oldp+185,(vlSelf->mem_we));
    tracep->chgBit(oldp+186,(vlSelf->mem_ce));
    tracep->chgQData(oldp+187,(((((IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM) 
                                  == (IData)(vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS)) 
                                 & (IData)(vlSelf->npc_onecycle__DOT__csr_we_EX_MEM))
                                 ? vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM
                                 : ((0xc00U == (IData)(vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS))
                                     ? (QData)((IData)(
                                                       vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle[0U]))
                                     : ((0x305U == (IData)(vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS))
                                         ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mtvec
                                         : ((0x342U 
                                             == (IData)(vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS))
                                             ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mcause
                                             : ((0x341U 
                                                 == (IData)(vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS))
                                                 ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mepc
                                                 : 
                                                ((0x304U 
                                                  == (IData)(vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS))
                                                  ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mie
                                                  : 
                                                 ((0x300U 
                                                   == (IData)(vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS))
                                                   ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mstatus
                                                   : 
                                                  ((0x340U 
                                                    == (IData)(vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS))
                                                    ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mscratch
                                                    : 0ULL))))))))),64);
    tracep->chgCData(oldp+189,((0x7fU & vlSelf->inst)),7);
    tracep->chgCData(oldp+190,((7U & (vlSelf->inst 
                                      >> 0xcU))),3);
    tracep->chgCData(oldp+191,((vlSelf->inst >> 0x19U)),7);
    tracep->chgCData(oldp+192,((0x1fU & (vlSelf->inst 
                                         >> 7U))),5);
    tracep->chgCData(oldp+193,((0x1fU & (vlSelf->inst 
                                         >> 0xfU))),5);
    tracep->chgCData(oldp+194,((0x1fU & (vlSelf->inst 
                                         >> 0x14U))),5);
    tracep->chgCData(oldp+195,((0x3fU & (vlSelf->inst 
                                         >> 0x14U))),6);
    tracep->chgSData(oldp+196,((vlSelf->inst >> 0x14U)),12);
    tracep->chgIData(oldp+197,((vlSelf->inst >> 0xcU)),20);
    tracep->chgIData(oldp+198,(((0x80000U & (vlSelf->inst 
                                             >> 0xcU)) 
                                | ((0x7f800U & (vlSelf->inst 
                                                >> 1U)) 
                                   | ((0x400U & (vlSelf->inst 
                                                 >> 0xaU)) 
                                      | (0x3ffU & (vlSelf->inst 
                                                   >> 0x15U)))))),20);
    tracep->chgQData(oldp+199,((0xffffffffffffffffULL 
                                >> (0x3fU & (vlSelf->inst 
                                             >> 0x14U)))),64);
    tracep->chgQData(oldp+201,((vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                >> (0x3fU & (vlSelf->inst 
                                             >> 0x14U)))),64);
    tracep->chgIData(oldp+203,((~ ((0x1fU >= (0x3fU 
                                              & (vlSelf->inst 
                                                 >> 0x14U)))
                                    ? (0xffffffffU 
                                       >> (0x3fU & 
                                           (vlSelf->inst 
                                            >> 0x14U)))
                                    : 0U))),32);
    tracep->chgQData(oldp+204,(((IData)((0x2000033U 
                                         == (0xfe00007fU 
                                             & vlSelf->inst)))
                                 ? ((0x4000U & vlSelf->inst)
                                     ? vlSelf->npc_onecycle__DOT__reg1_op_ID_EX
                                     : ((0x2000U & vlSelf->inst)
                                         ? ((0x1000U 
                                             & vlSelf->inst)
                                             ? vlSelf->npc_onecycle__DOT__reg1_op_ID_EX
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                            >> 0x1fU)))
                                                 ? 
                                                (1ULL 
                                                 + 
                                                 (~ vlSelf->npc_onecycle__DOT__reg1_op_ID_EX))
                                                 : vlSelf->npc_onecycle__DOT__reg1_op_ID_EX))
                                         : ((0x1000U 
                                             & vlSelf->inst)
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                            >> 0x1fU)))
                                                 ? 
                                                (1ULL 
                                                 + 
                                                 (~ vlSelf->npc_onecycle__DOT__reg1_op_ID_EX))
                                                 : vlSelf->npc_onecycle__DOT__reg1_op_ID_EX)
                                             : vlSelf->npc_onecycle__DOT__reg1_op_ID_EX)))
                                 : vlSelf->npc_onecycle__DOT__reg1_op_ID_EX)),64);
    tracep->chgQData(oldp+206,(((IData)((0x2000033U 
                                         == (0xfe00007fU 
                                             & vlSelf->inst)))
                                 ? ((0x4000U & vlSelf->inst)
                                     ? vlSelf->npc_onecycle__DOT__reg2_op_ID_EX
                                     : ((0x2000U & vlSelf->inst)
                                         ? vlSelf->npc_onecycle__DOT__reg2_op_ID_EX
                                         : ((0x1000U 
                                             & vlSelf->inst)
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                                                            >> 0x1fU)))
                                                 ? 
                                                (1ULL 
                                                 + 
                                                 (~ vlSelf->npc_onecycle__DOT__reg2_op_ID_EX))
                                                 : vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)
                                             : vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))
                                 : vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)),64);
}

void Vnpc_onecycle___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root__trace_cleanup\n"); );
    // Init
    Vnpc_onecycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc_onecycle___024root*>(voidSelf);
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
