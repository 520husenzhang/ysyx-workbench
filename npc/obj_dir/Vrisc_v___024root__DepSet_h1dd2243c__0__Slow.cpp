// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "verilated.h"

#include "Vrisc_v___024root.h"

VL_ATTR_COLD void Vrisc_v___024root___settle__TOP__0(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___settle__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->risc_v__DOT__re2 = 0U;
        vlSelf->risc_v__DOT__re1 = 0U;
    }
    if (vlSelf->rst_n) {
        vlSelf->risc_v__DOT__inst_addr_id = vlSelf->risc_v__DOT__id_pc;
        vlSelf->risc_v__DOT__wd_alu_mem_i = vlSelf->risc_v__DOT__reg_waddr_alu;
    } else {
        vlSelf->risc_v__DOT__inst_addr_id = 0ULL;
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->risc_v__DOT__wdata_alu_mem_i = 0ULL;
    }
    vlSelf->risc_v__DOT__wdata_alu_mem_i = ((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->risc_v__DOT__inst_alu))
                                             ? ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->risc_v__DOT__inst_alu 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelf->risc_v__DOT__reg1_op_alu 
                                                 + vlSelf->risc_v__DOT__reg2_op_alu)
                                                 : 0ULL)
                                             : 0ULL);
    if (vlSelf->rst_n) {
        vlSelf->risc_v__DOT__wd_mem_wb_i = vlSelf->risc_v__DOT__wd_alu_mem_o;
        vlSelf->risc_v__DOT__wreg_mem_wb_i = vlSelf->risc_v__DOT__wreg_alu_mem_o;
        vlSelf->risc_v__DOT__wdata_mem_wb_i = vlSelf->risc_v__DOT__wdata_alu_mem_o;
        vlSelf->risc_v__DOT__inst_id = vlSelf->risc_v__DOT__id_inst;
        if ((0x13U == (0x7fU & vlSelf->risc_v__DOT__id_inst))) {
            if ((0U == (7U & (vlSelf->risc_v__DOT__id_inst 
                              >> 0xcU)))) {
                vlSelf->risc_v__DOT__reg2_op_id = (
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->risc_v__DOT__id_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->risc_v__DOT__id_inst 
                                                                      >> 0x14U))));
                vlSelf->risc_v__DOT__reg1_rdata_addr 
                    = (0x1fU & (vlSelf->risc_v__DOT__id_inst 
                                >> 0xfU));
                vlSelf->risc_v__DOT__reg1_op_id = ((IData)(vlSelf->rst_n)
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->risc_v__DOT__reg1_rdata_addr))
                                                     ? 0ULL
                                                     : 
                                                    (((((IData)(vlSelf->risc_v__DOT__reg1_rdata_addr) 
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
                                                    : 0ULL);
            } else {
                vlSelf->risc_v__DOT__reg1_rdata_addr = 0U;
            }
        } else {
            vlSelf->risc_v__DOT__reg1_rdata_addr = 0U;
        }
    } else {
        vlSelf->risc_v__DOT__wd_mem_wb_i = 0U;
        vlSelf->risc_v__DOT__wreg_mem_wb_i = 0U;
        vlSelf->risc_v__DOT__wdata_mem_wb_i = 0ULL;
        vlSelf->risc_v__DOT__inst_id = 0U;
        vlSelf->risc_v__DOT__reg2_op_id = 0ULL;
        vlSelf->risc_v__DOT__reg1_rdata_addr = 0U;
        vlSelf->risc_v__DOT__reg1_op_id = 0ULL;
    }
}

VL_ATTR_COLD void Vrisc_v___024root___initial__TOP__0(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->risc_v__DOT__inst_IF__DOT__PC = 0x80000000ULL;
}

VL_ATTR_COLD void Vrisc_v___024root___settle__TOP__1(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->pc = vlSelf->risc_v__DOT__inst_IF__DOT__PC;
}

VL_ATTR_COLD void Vrisc_v___024root___eval_initial(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vrisc_v___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vrisc_v___024root___eval_settle(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_settle\n"); );
    // Body
    Vrisc_v___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vrisc_v___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vrisc_v___024root___final(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___final\n"); );
}

VL_ATTR_COLD void Vrisc_v___024root___ctor_var_reset(Vrisc_v___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->rom_ce = VL_RAND_RESET_I(1);
    vlSelf->risc_v__DOT__reg1_rdata_addr = VL_RAND_RESET_I(5);
    vlSelf->risc_v__DOT__re1 = VL_RAND_RESET_I(1);
    vlSelf->risc_v__DOT__re2 = VL_RAND_RESET_I(1);
    vlSelf->risc_v__DOT__id_pc = VL_RAND_RESET_Q(64);
    vlSelf->risc_v__DOT__id_inst = VL_RAND_RESET_I(32);
    vlSelf->risc_v__DOT__inst_id = VL_RAND_RESET_I(32);
    vlSelf->risc_v__DOT__inst_addr_id = VL_RAND_RESET_Q(64);
    vlSelf->risc_v__DOT__reg1_op_id = VL_RAND_RESET_Q(64);
    vlSelf->risc_v__DOT__reg2_op_id = VL_RAND_RESET_Q(64);
    vlSelf->risc_v__DOT__inst_alu = VL_RAND_RESET_I(32);
    vlSelf->risc_v__DOT__inst_addr_alu = VL_RAND_RESET_Q(64);
    vlSelf->risc_v__DOT__reg1_op_alu = VL_RAND_RESET_Q(64);
    vlSelf->risc_v__DOT__reg2_op_alu = VL_RAND_RESET_Q(64);
    vlSelf->risc_v__DOT__reg_we_alu = VL_RAND_RESET_I(1);
    vlSelf->risc_v__DOT__reg_waddr_alu = VL_RAND_RESET_I(5);
    vlSelf->risc_v__DOT__wd_alu_mem_i = VL_RAND_RESET_I(5);
    vlSelf->risc_v__DOT__wdata_alu_mem_i = VL_RAND_RESET_Q(64);
    vlSelf->risc_v__DOT__wd_alu_mem_o = VL_RAND_RESET_I(5);
    vlSelf->risc_v__DOT__wreg_alu_mem_o = VL_RAND_RESET_I(1);
    vlSelf->risc_v__DOT__wdata_alu_mem_o = VL_RAND_RESET_Q(64);
    vlSelf->risc_v__DOT__wd_mem_wb_i = VL_RAND_RESET_I(5);
    vlSelf->risc_v__DOT__wreg_mem_wb_i = VL_RAND_RESET_I(1);
    vlSelf->risc_v__DOT__wdata_mem_wb_i = VL_RAND_RESET_Q(64);
    vlSelf->risc_v__DOT__wb_wd_i = VL_RAND_RESET_I(5);
    vlSelf->risc_v__DOT__wb_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->risc_v__DOT__wb_wdata_i = VL_RAND_RESET_Q(64);
    vlSelf->risc_v__DOT__inst_IF__DOT__PC = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
