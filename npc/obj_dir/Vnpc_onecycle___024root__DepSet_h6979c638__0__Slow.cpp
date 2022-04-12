// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc_onecycle.h for the primary calling header

#include "verilated.h"

#include "Vnpc_onecycle___024root.h"

VL_ATTR_COLD void Vnpc_onecycle___024root___settle__TOP__0(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___settle__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h49928414__0;
    VlWide<4>/*127:0*/ __Vtemp_hf4fbbb62__0;
    VlWide<4>/*127:0*/ __Vtemp_h6bf42a10__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_h0c4231f9__0;
    VlWide<4>/*127:0*/ __Vtemp_h3780105a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_h0c4231f9__1;
    VlWide<4>/*127:0*/ __Vtemp_hd9419514__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_h0c4231f9__2;
    VlWide<4>/*127:0*/ __Vtemp_h22eb8ae9__0;
    // Body
    vlSelf->npc_onecycle__DOT__csr_we_ID_EX = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                if ((1U & (~ (vlSelf->inst >> 3U)))) {
                    if ((1U & (~ (vlSelf->inst >> 2U)))) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->npc_onecycle__DOT__csr_we_ID_EX 
                                    = (1U & ((0x4000U 
                                              & vlSelf->inst)
                                              ? (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSelf->inst)))
                                              : (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSelf->inst)))));
                                vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
                                vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS 
                                    = (vlSelf->inst 
                                       >> 0x14U);
                                vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0U;
                                vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX 
                                    = (vlSelf->inst 
                                       >> 0x14U);
                            } else {
                                vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
                                vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0U;
                            }
                        } else {
                            vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0U;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0U;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0U;
                }
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
            } else {
                vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                if ((8U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                } else if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                        if ((1U & (~ (vlSelf->inst 
                                      >> 0xeU)))) {
                            if ((0x2000U & vlSelf->inst)) {
                                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                            } else {
                                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                            }
                        } else {
                            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                }
            }
        } else {
            vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0U;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
        }
        vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
        vlSelf->npc_onecycle__DOT__reg_we_ID_EX = (1U 
                                                   & ((vlSelf->inst 
                                                       >> 5U) 
                                                      & ((0x10U 
                                                          & vlSelf->inst)
                                                          ? (IData)(
                                                                    ((3U 
                                                                      == 
                                                                      (0xfU 
                                                                       & vlSelf->inst)) 
                                                                     & ((0x4000U 
                                                                         & vlSelf->inst)
                                                                         ? (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->inst)))
                                                                         : (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->inst))))))
                                                          : 
                                                         ((8U 
                                                           & vlSelf->inst)
                                                           ? (IData)(
                                                                     (7U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->inst)))
                                                           : (IData)(
                                                                     (7U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->inst)))))));
        vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
        vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX 
            = ((0x20U & vlSelf->inst) ? (0x1fU & ((0x10U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->inst)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelf->inst)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((0x4000U 
                                                        & vlSelf->inst)
                                                        ? 
                                                       ((0x2000U 
                                                         & vlSelf->inst)
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 7U)
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->inst)
                                                          ? 
                                                         (vlSelf->inst 
                                                          >> 7U)
                                                          : 0U))
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->inst)
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 7U)
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->inst)
                                                          ? 
                                                         (vlSelf->inst 
                                                          >> 7U)
                                                          : 0U)))
                                                       : 0U)
                                                      : 0U)))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 7U)
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 7U)
                                                       : 0U)
                                                      : 0U)
                                                     : 0U))))
                : 0U);
    } else {
        vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
        vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0U;
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                if ((8U & vlSelf->inst)) {
                    if ((4U & vlSelf->inst)) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                        vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                        vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                        vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                    } else if ((2U & vlSelf->inst)) {
                        if ((1U & (~ vlSelf->inst))) {
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        } else {
                            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        }
                        vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                        if ((1U & vlSelf->inst)) {
                            if ((0x4000U & vlSelf->inst)) {
                                vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 1U;
                                vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                                vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX 
                                    = (0x1fU & (vlSelf->inst 
                                                >> 7U));
                            } else if ((1U & (~ (vlSelf->inst 
                                                 >> 0xdU)))) {
                                vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 1U;
                                vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                                vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX 
                                    = (0x1fU & (vlSelf->inst 
                                                >> 7U));
                            } else {
                                vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                            }
                        } else {
                            vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                            vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                            vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                        vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                        vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                        vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                    }
                } else if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                    vlSelf->npc_onecycle__DOT__reg_we_ID_EX 
                        = (1U & ((vlSelf->inst >> 1U) 
                                 & vlSelf->inst));
                    vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                    vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX 
                        = (0x1fU & ((2U & vlSelf->inst)
                                     ? ((1U & vlSelf->inst)
                                         ? (vlSelf->inst 
                                            >> 7U) : 0U)
                                     : 0U));
                } else {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & (~ vlSelf->inst))) {
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        } else {
                            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    }
                    vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                    vlSelf->npc_onecycle__DOT__reg_we_ID_EX 
                        = (1U & ((vlSelf->inst >> 1U) 
                                 & (vlSelf->inst & 
                                    (((0U == (vlSelf->inst 
                                              >> 0x19U)) 
                                      | (0x20U == (vlSelf->inst 
                                                   >> 0x19U))) 
                                     | (1U == (vlSelf->inst 
                                               >> 0x19U))))));
                    vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                    vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX 
                        = (0x1fU & ((2U & vlSelf->inst)
                                     ? ((1U & vlSelf->inst)
                                         ? (((0U == 
                                              (vlSelf->inst 
                                               >> 0x19U)) 
                                             | (0x20U 
                                                == 
                                                (vlSelf->inst 
                                                 >> 0x19U)))
                                             ? (vlSelf->inst 
                                                >> 7U)
                                             : ((1U 
                                                 == 
                                                 (vlSelf->inst 
                                                  >> 0x19U))
                                                 ? 
                                                ((0x4000U 
                                                  & vlSelf->inst)
                                                  ? 
                                                 (vlSelf->inst 
                                                  >> 7U)
                                                  : 
                                                 (vlSelf->inst 
                                                  >> 7U))
                                                 : 0U))
                                         : 0U) : 0U));
                }
            } else {
                if ((8U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                } else if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                }
                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM 
                    = (IData)((3U == (0x400fU & vlSelf->inst)));
                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM 
                    = (IData)((3U == (0x400fU & vlSelf->inst)));
                vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
            }
        } else if ((0x10U & vlSelf->inst)) {
            if ((8U & vlSelf->inst)) {
                if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                    vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                    vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                    vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    } else {
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    }
                    vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                    if ((1U & vlSelf->inst)) {
                        if ((((0U == (7U & (vlSelf->inst 
                                            >> 0xcU))) 
                              | (1U == (7U & (vlSelf->inst 
                                              >> 0xcU)))) 
                             | (5U == (7U & (vlSelf->inst 
                                             >> 0xcU))))) {
                            vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 1U;
                            vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                            vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX 
                                = (0x1fU & (vlSelf->inst 
                                            >> 7U));
                        } else {
                            vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                        vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                        vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                    vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                    vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                    vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                }
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                vlSelf->npc_onecycle__DOT__reg_we_ID_EX 
                    = (1U & ((vlSelf->inst >> 1U) & vlSelf->inst));
                vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX 
                    = (0x1fU & ((2U & vlSelf->inst)
                                 ? ((1U & vlSelf->inst)
                                     ? (vlSelf->inst 
                                        >> 7U) : 0U)
                                 : 0U));
            } else {
                if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    } else {
                        vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                }
                vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
                vlSelf->npc_onecycle__DOT__reg_we_ID_EX 
                    = (1U & ((vlSelf->inst >> 1U) & vlSelf->inst));
                vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
                vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX 
                    = (0x1fU & ((2U & vlSelf->inst)
                                 ? ((1U & vlSelf->inst)
                                     ? (vlSelf->inst 
                                        >> 7U) : 0U)
                                 : 0U));
            }
        } else {
            if ((8U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                }
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
            }
            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM 
                = (IData)((3U == (0xfU & vlSelf->inst)));
            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__reg_we_ID_EX = 0U;
            vlSelf->npc_onecycle__DOT__reg_we_ID_EX 
                = (1U & (IData)(((3U == (0xfU & vlSelf->inst)) 
                                 & (0x7000U != (0x7000U 
                                                & vlSelf->inst)))));
            vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = 0U;
            vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX 
                = ((8U & vlSelf->inst) ? 0U : ((4U 
                                                & vlSelf->inst)
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    (0x1fU 
                                                     & ((0x4000U 
                                                         & vlSelf->inst)
                                                         ? 
                                                        ((0x2000U 
                                                          & vlSelf->inst)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->inst)
                                                           ? 0U
                                                           : 
                                                          (vlSelf->inst 
                                                           >> 7U))
                                                          : 
                                                         (vlSelf->inst 
                                                          >> 7U))
                                                         : 
                                                        (vlSelf->inst 
                                                         >> 7U)))
                                                     : 0U)
                                                    : 0U)));
        }
    }
    vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_sb 
        = ((0x800U & (vlSelf->inst >> 0x14U)) | ((0x400U 
                                                  & (vlSelf->inst 
                                                     << 3U)) 
                                                 | ((0x3f0U 
                                                     & (vlSelf->inst 
                                                        >> 0x15U)) 
                                                    | (0xfU 
                                                       & (vlSelf->inst 
                                                          >> 8U)))));
    vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_s 
        = ((0xfe0U & (vlSelf->inst >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 7U)));
    vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 0U;
    if ((0x40U & vlSelf->inst)) {
        vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS 
            = (1U & (IData)(((0x20U == (0x38U & vlSelf->inst)) 
                             & ((4U & vlSelf->inst)
                                 ? ((vlSelf->inst >> 1U) 
                                    & vlSelf->inst)
                                 : ((vlSelf->inst >> 1U) 
                                    & (vlSelf->inst 
                                       & (IData)((0x2000U 
                                                  != 
                                                  (0x6000U 
                                                   & vlSelf->inst)))))))));
        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                    = (0x1fU & ((8U & vlSelf->inst)
                                 ? 0U : ((4U & vlSelf->inst)
                                          ? 0U : ((2U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->inst)
                                                     ? 0U
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 0xfU)
                                                       : 0U)))
                                                    : 0U)
                                                   : 0U))));
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            } else if ((8U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                    = (0x1fU & 0U);
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                    = (0x1fU & ((2U & vlSelf->inst)
                                 ? ((1U & vlSelf->inst)
                                     ? (vlSelf->inst 
                                        >> 0xfU) : 0U)
                                 : 0U));
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    if ((0x4000U & vlSelf->inst)) {
                        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                            = (0x1fU & (vlSelf->inst 
                                        >> 0xfU));
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS 
                            = (0x1fU & (vlSelf->inst 
                                        >> 0x14U));
                    } else if ((0x2000U & vlSelf->inst)) {
                        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                            = (0x1fU & 0U);
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS 
                            = (0x1fU & 0U);
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                            = (0x1fU & (vlSelf->inst 
                                        >> 0xfU));
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS 
                            = (0x1fU & (vlSelf->inst 
                                        >> 0x14U));
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                        = (0x1fU & 0U);
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                }
            } else {
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                    = (0x1fU & 0U);
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            }
        } else {
            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
        }
        vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
        vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS 
            = (1U & (IData)(((0x23U == (0x3fU & vlSelf->inst)) 
                             & (0x2000U != (0x6000U 
                                            & vlSelf->inst)))));
        vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            } else if ((8U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                } else {
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                }
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                if ((1U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM = 0U;
                    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
                        if ((0x2000U & vlSelf->inst)) {
                            vlSelf->npc_onecycle__DOT__wreg_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                                = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                            vlSelf->npc_onecycle__DOT__wd_EX_MEM = 0U;
                            vlSelf->npc_onecycle__DOT__wd_EX_MEM = 0U;
                        } else {
                            vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                                = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                            vlSelf->npc_onecycle__DOT__wd_EX_MEM = 0U;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                            = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                        vlSelf->npc_onecycle__DOT__wd_EX_MEM = 0U;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                }
            } else {
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            }
        } else {
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
            vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((8U & vlSelf->inst)) {
                if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                    vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = (1U & (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        if ((0x4000U & vlSelf->inst)) {
                            vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 1U;
                            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                                = (0x1fU & (vlSelf->inst 
                                            >> 0xfU));
                            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS 
                                = (0x1fU & (vlSelf->inst 
                                            >> 0x14U));
                            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 1U;
                        } else if ((1U & (~ (vlSelf->inst 
                                             >> 0xdU)))) {
                            vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 1U;
                            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                                = (0x1fU & (vlSelf->inst 
                                            >> 0xfU));
                            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS 
                                = (0x1fU & (vlSelf->inst 
                                            >> 0x14U));
                            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 1U;
                        } else {
                            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                    }
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                        vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    } else {
                        vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    }
                    vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                    vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = (1U & (vlSelf->inst | (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX)));
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                    vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = (1U & (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
                }
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            } else {
                vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS 
                    = (IData)(((3U == (7U & vlSelf->inst)) 
                               & (((0U == (vlSelf->inst 
                                           >> 0x19U)) 
                                   | (0x20U == (vlSelf->inst 
                                                >> 0x19U))) 
                                  | (1U == (vlSelf->inst 
                                            >> 0x19U)))));
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        if (((0U == (vlSelf->inst >> 0x19U)) 
                             | (0x20U == (vlSelf->inst 
                                          >> 0x19U)))) {
                            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                                = (0x1fU & (vlSelf->inst 
                                            >> 0xfU));
                            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS 
                                = (0x1fU & (vlSelf->inst 
                                            >> 0x14U));
                        } else if ((1U == (vlSelf->inst 
                                           >> 0x19U))) {
                            if ((0x4000U & vlSelf->inst)) {
                                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                                    = (0x1fU & (vlSelf->inst 
                                                >> 0xfU));
                                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS 
                                    = (0x1fU & (vlSelf->inst 
                                                >> 0x14U));
                            } else {
                                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                                    = (0x1fU & (vlSelf->inst 
                                                >> 0xfU));
                                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS 
                                    = (0x1fU & (vlSelf->inst 
                                                >> 0x14U));
                            }
                        } else {
                            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                                = (0x1fU & 0U);
                            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                }
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS 
                    = (IData)(((3U == (7U & vlSelf->inst)) 
                               & (((0U == (vlSelf->inst 
                                           >> 0x19U)) 
                                   | (0x20U == (vlSelf->inst 
                                                >> 0x19U))) 
                                  | (1U == (vlSelf->inst 
                                            >> 0x19U)))));
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                    vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                        vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                        vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                        vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                        vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                            = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                        vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                            = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                        vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                            = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                        vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                            = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                    } else {
                        vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                        vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                        vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                        vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                            = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                        vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                            = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                    vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                }
            }
        } else {
            vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS 
                = (IData)((3U == (0x400fU & vlSelf->inst)));
            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
            if ((8U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    if ((0x4000U & vlSelf->inst)) {
                        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                            = (0x1fU & (vlSelf->inst 
                                        >> 0xfU));
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS 
                            = (0x1fU & (vlSelf->inst 
                                        >> 0x14U));
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                }
            } else {
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            }
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS 
                = (IData)((3U == (0x400fU & vlSelf->inst)));
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
            if ((8U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                } else {
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                }
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = ((~ vlSelf->inst) & (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = ((1U & vlSelf->inst) ? 0U : (IData)(vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX));
            } else {
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            }
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((8U & vlSelf->inst)) {
            if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = (1U & (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    if ((((0U == (7U & (vlSelf->inst 
                                        >> 0xcU))) 
                          | (1U == (7U & (vlSelf->inst 
                                          >> 0xcU)))) 
                         | (5U == (7U & (vlSelf->inst 
                                         >> 0xcU))))) {
                        vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 1U;
                        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                            = (0x1fU & (vlSelf->inst 
                                        >> 0xfU));
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                }
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                } else {
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                }
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = (1U & (vlSelf->inst | (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX)));
            } else {
                vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = (1U & (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
            }
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
        } else {
            vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS 
                = (IData)((3U == (7U & vlSelf->inst)));
            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
            if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            } else if ((2U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                    = ((1U & vlSelf->inst) ? (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0xfU))
                        : 0U);
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                    vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                } else {
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                    vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                }
            } else {
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
                vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            }
        }
    } else {
        vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS 
            = (1U & (IData)(((3U == (0xfU & vlSelf->inst)) 
                             & (0x7000U != (0x7000U 
                                            & vlSelf->inst)))));
        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
        if ((8U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
        } else if ((4U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
        } else if ((2U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                = ((1U & vlSelf->inst) ? (0x1fU & (
                                                   (0x4000U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->inst)
                                                      ? 0U
                                                      : 
                                                     (vlSelf->inst 
                                                      >> 0xfU))
                                                     : 
                                                    (vlSelf->inst 
                                                     >> 0xfU))
                                                    : 
                                                   (vlSelf->inst 
                                                    >> 0xfU)))
                    : 0U);
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            } else {
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
        }
        vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
        vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
        vlSelf->npc_onecycle__DOT__wreg_EX_MEM = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
        vlSelf->npc_onecycle__DOT__wreg_EX_MEM = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
        vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
        vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
    }
    if (vlSelf->rst_n) {
        vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS 
            = ((0U == (IData)(vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS))
                ? 0ULL : ((IData)(vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS)
                           ? vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs
                          [vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS]
                           : 0ULL));
        vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS 
            = ((0U == (IData)(vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS))
                ? 0ULL : ((IData)(vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS)
                           ? vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs
                          [vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS]
                           : 0ULL));
    } else {
        vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS = 0ULL;
        vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS = 0ULL;
    }
    vlSelf->npc_onecycle__DOT__reg2_op_ID_EX = 0ULL;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                if ((1U & (~ (vlSelf->inst >> 3U)))) {
                    if ((1U & (~ (vlSelf->inst >> 2U)))) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                if ((0x4000U & vlSelf->inst)) {
                                    if ((0x2000U & vlSelf->inst)) {
                                        vlSelf->npc_onecycle__DOT__reg2_op_ID_EX = 0ULL;
                                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->inst 
                                                                  >> 0xfU))));
                                    } else if ((0x1000U 
                                                & vlSelf->inst)) {
                                        vlSelf->npc_onecycle__DOT__reg2_op_ID_EX = 0ULL;
                                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->inst 
                                                                  >> 0xfU))));
                                    } else {
                                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->inst)) {
                                    vlSelf->npc_onecycle__DOT__reg2_op_ID_EX = 0ULL;
                                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                        = vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS;
                                } else if ((0x1000U 
                                            & vlSelf->inst)) {
                                    vlSelf->npc_onecycle__DOT__reg2_op_ID_EX = 0ULL;
                                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                        = vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS;
                                } else {
                                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                                }
                            } else {
                                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                            }
                        } else {
                            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                }
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            } else if ((8U & vlSelf->inst)) {
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                                = (((- (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x1fU)))) 
                                    << 0x15U) | (QData)((IData)(
                                                                ((0x100000U 
                                                                  & (vlSelf->inst 
                                                                     >> 0xbU)) 
                                                                 | ((0xff000U 
                                                                     & vlSelf->inst) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->inst 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->inst 
                                                                             >> 0x14U))))))));
                            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                        } else {
                            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                }
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            } else if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                            = (((- (QData)((IData)(
                                                   (vlSelf->inst 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->inst 
                                                            >> 0x14U))));
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                            = vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS;
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                }
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    if ((0x4000U & vlSelf->inst)) {
                        vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                            = vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS;
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                            = vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS;
                    } else if ((1U & (~ (vlSelf->inst 
                                         >> 0xdU)))) {
                        vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                            = vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS;
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                            = vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS;
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                    }
                    vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
                        if ((0x2000U & vlSelf->inst)) {
                            vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                        }
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 3U)))) {
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->npc_onecycle__DOT__reg2_op_ID_EX = 0ULL;
                        }
                    }
                }
            }
            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
            if ((8U & vlSelf->inst)) {
                if ((1U & (~ (vlSelf->inst >> 2U)))) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            if ((0x4000U & vlSelf->inst)) {
                                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                    = vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS;
                            } else if ((1U & (~ (vlSelf->inst 
                                                 >> 0xdU)))) {
                                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                    = vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS;
                            }
                        }
                    }
                }
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                }
            } else if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                            = (((QData)((IData)((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->inst))));
                    }
                }
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    if (((0U == (vlSelf->inst >> 0x19U)) 
                         | (0x20U == (vlSelf->inst 
                                      >> 0x19U)))) {
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                            = vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS;
                    } else if ((1U == (vlSelf->inst 
                                       >> 0x19U))) {
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                            = vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS;
                    }
                }
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            }
        } else {
            if ((1U & (~ (vlSelf->inst >> 3U)))) {
                if ((1U & (~ (vlSelf->inst >> 2U)))) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            if ((1U & (~ (vlSelf->inst 
                                          >> 0xeU)))) {
                                vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                                    = vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS;
                                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                    = vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS;
                            } else {
                                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                            }
                        } else {
                            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
            }
            vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM 
                = ((8U & vlSelf->inst) ? 0ULL : ((4U 
                                                  & vlSelf->inst)
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->inst)
                                                     ? 0ULL
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->inst)
                                                       ? vlSelf->npc_onecycle__DOT__reg2_op_ID_EX
                                                       : (QData)((IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->inst)
                                                       ? (QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX))))
                                                       : (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))))))
                                                    : 0ULL)
                                                   : 0ULL)));
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((8U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 2U)))) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        if ((((0U == (7U & (vlSelf->inst 
                                            >> 0xcU))) 
                              | (1U == (7U & (vlSelf->inst 
                                              >> 0xcU)))) 
                             | (5U == (7U & (vlSelf->inst 
                                             >> 0xcU))))) {
                            vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                                = (((- (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x14U))));
                            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                = vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS;
                        } else {
                            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
            }
            vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            }
        } else if ((4U & vlSelf->inst)) {
            if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__reg2_op_ID_EX = 0ULL;
                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->inst 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->inst))));
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
            }
            vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
        } else if ((2U & vlSelf->inst)) {
            if ((1U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                    = (((- (QData)((IData)((vlSelf->inst 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   (vlSelf->inst 
                                                    >> 0x14U))));
                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                    = vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS;
            } else {
                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
            }
            vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
        }
    } else {
        if ((1U & (~ (vlSelf->inst >> 3U)))) {
            if ((1U & (~ (vlSelf->inst >> 2U)))) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        if ((0x4000U & vlSelf->inst)) {
                            if ((0x2000U & vlSelf->inst)) {
                                if ((1U & (~ (vlSelf->inst 
                                              >> 0xcU)))) {
                                    vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                                        = (((- (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU)))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x14U))));
                                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                        = vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS;
                                } else {
                                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                                }
                            } else {
                                vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                                    = (((- (QData)((IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->inst 
                                                                    >> 0x14U))));
                                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                    = vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS;
                            }
                        } else {
                            vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                                = (((- (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x14U))));
                            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                = vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
        }
        vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = 0ULL;
    }
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2 
        = (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
           == vlSelf->npc_onecycle__DOT__reg2_op_ID_EX);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_sub_op2_res 
        = (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
           - vlSelf->npc_onecycle__DOT__reg2_op_ID_EX);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__sr_shift 
        = (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
           >> (0x3fU & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)));
    vlSelf->npc_onecycle__DOT__u_EX__DOT__sli_shift 
        = (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
           << (0x3fU & (vlSelf->inst >> 0x14U)));
    vlSelf->npc_onecycle__DOT__u_EX__DOT__sllw_temp 
        = ((IData)(vlSelf->npc_onecycle__DOT__reg1_op_ID_EX) 
           << (0x1fU & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)));
    VL_EXTEND_WQ(128,64, __Vtemp_h49928414__0, ((IData)(
                                                        (0x2000033U 
                                                         == 
                                                         (0xfe00007fU 
                                                          & vlSelf->inst)))
                                                 ? 
                                                ((0x4000U 
                                                  & vlSelf->inst)
                                                  ? vlSelf->npc_onecycle__DOT__reg1_op_ID_EX
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->inst)
                                                    ? vlSelf->npc_onecycle__DOT__reg1_op_ID_EX
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                                >> 0x1fU)))
                                                     ? 
                                                    (1ULL 
                                                     + 
                                                     (~ vlSelf->npc_onecycle__DOT__reg1_op_ID_EX))
                                                     : vlSelf->npc_onecycle__DOT__reg1_op_ID_EX))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                                >> 0x1fU)))
                                                     ? 
                                                    (1ULL 
                                                     + 
                                                     (~ vlSelf->npc_onecycle__DOT__reg1_op_ID_EX))
                                                     : vlSelf->npc_onecycle__DOT__reg1_op_ID_EX)
                                                    : vlSelf->npc_onecycle__DOT__reg1_op_ID_EX)))
                                                 : vlSelf->npc_onecycle__DOT__reg1_op_ID_EX));
    VL_EXTEND_WQ(128,64, __Vtemp_hf4fbbb62__0, ((IData)(
                                                        (0x2000033U 
                                                         == 
                                                         (0xfe00007fU 
                                                          & vlSelf->inst)))
                                                 ? 
                                                ((0x4000U 
                                                  & vlSelf->inst)
                                                  ? vlSelf->npc_onecycle__DOT__reg2_op_ID_EX
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->inst)
                                                   ? vlSelf->npc_onecycle__DOT__reg2_op_ID_EX
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                                                                >> 0x1fU)))
                                                     ? 
                                                    (1ULL 
                                                     + 
                                                     (~ vlSelf->npc_onecycle__DOT__reg2_op_ID_EX))
                                                     : vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)
                                                    : vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))
                                                 : vlSelf->npc_onecycle__DOT__reg2_op_ID_EX));
    VL_MUL_W(4, __Vtemp_h6bf42a10__0, __Vtemp_h49928414__0, __Vtemp_hf4fbbb62__0);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[0U] 
        = __Vtemp_h6bf42a10__0[0U];
    vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[1U] 
        = __Vtemp_h6bf42a10__0[1U];
    vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[2U] 
        = __Vtemp_h6bf42a10__0[2U];
    vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[3U] 
        = __Vtemp_h6bf42a10__0[3U];
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res = 0ULL;
    if ((IData)((0x2000033U == (0xfe00007fU & vlSelf->inst)))) {
        if ((0x4000U & vlSelf->inst)) {
            if ((0x2000U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res 
                    = ((0x1000U & vlSelf->inst) ? VL_MODDIV_QQQ(64, vlSelf->npc_onecycle__DOT__reg1_op_ID_EX, vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)
                        : VL_MODDIVS_QQQ(64, vlSelf->npc_onecycle__DOT__reg1_op_ID_EX, vlSelf->npc_onecycle__DOT__reg2_op_ID_EX));
            }
            vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res = 0ULL;
            if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res 
                    = ((0x1000U & vlSelf->inst) ? VL_DIV_QQQ(64, vlSelf->npc_onecycle__DOT__reg1_op_ID_EX, vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)
                        : VL_DIVS_QQQ(64, vlSelf->npc_onecycle__DOT__reg1_op_ID_EX, vlSelf->npc_onecycle__DOT__reg2_op_ID_EX));
            }
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res = 0ULL;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res = 0ULL;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res = 0ULL;
        }
    } else if ((1U & (~ (IData)((0x200001bU == (0xfe00007fU 
                                                & vlSelf->inst)))))) {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res = 0ULL;
        vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res = 0ULL;
        vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res = 0ULL;
    } else {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res = 0ULL;
    }
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w = 0U;
    if ((1U & (~ (IData)((0x2000033U == (0xfe00007fU 
                                         & vlSelf->inst)))))) {
        if ((IData)((0x200001bU == (0xfe00007fU & vlSelf->inst)))) {
            if ((0x4000U & vlSelf->inst)) {
                if ((0x2000U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w 
                        = ((0x1000U & vlSelf->inst)
                            ? VL_MODDIV_III(32, (IData)(vlSelf->npc_onecycle__DOT__reg1_op_ID_EX), (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX))
                            : VL_MODDIVS_III(32, (IData)(vlSelf->npc_onecycle__DOT__reg1_op_ID_EX), (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)));
                }
                vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w = 0U;
                if ((1U & (~ (vlSelf->inst >> 0xdU)))) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w 
                        = ((0x1000U & vlSelf->inst)
                            ? VL_DIV_III(32, (IData)(vlSelf->npc_onecycle__DOT__reg1_op_ID_EX), (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX))
                            : VL_DIVS_III(32, (IData)(vlSelf->npc_onecycle__DOT__reg1_op_ID_EX), (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)));
                }
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w = 0U;
            }
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w = 0U;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w = 0U;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w = 0U;
        }
    } else {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w = 0U;
    }
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed 
        = VL_LTS_IQQ(64, vlSelf->npc_onecycle__DOT__reg1_op_ID_EX, vlSelf->npc_onecycle__DOT__reg2_op_ID_EX);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned 
        = (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
           < vlSelf->npc_onecycle__DOT__reg2_op_ID_EX);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__mem_waddr_s 
        = ((((- (QData)((IData)((1U & ((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_s) 
                                       >> 0xbU))))) 
             << 0xcU) | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_s))) 
           + vlSelf->npc_onecycle__DOT__reg1_op_ID_EX);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res 
        = (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
           + vlSelf->npc_onecycle__DOT__reg2_op_ID_EX);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rlshift 
        = ((0x1fU >= (0x3fU & (vlSelf->inst >> 0x14U)))
            ? ((IData)(vlSelf->npc_onecycle__DOT__reg1_op_ID_EX) 
               >> (0x3fU & (vlSelf->inst >> 0x14U)))
            : 0U);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srlwshift 
        = ((IData)(vlSelf->npc_onecycle__DOT__reg1_op_ID_EX) 
           >> (0x1fU & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)));
    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            } else if ((8U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    if ((0x4000U & vlSelf->inst)) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump 
                            = (1U & ((0x2000U & vlSelf->inst)
                                      ? ((0x1000U & vlSelf->inst)
                                          ? (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned))
                                          : (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned))
                                      : ((0x1000U & vlSelf->inst)
                                          ? (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed))
                                          : (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed))));
                    } else if ((1U & (~ (vlSelf->inst 
                                         >> 0xdU)))) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump 
                            = (1U & ((0x1000U & vlSelf->inst)
                                      ? (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2))
                                      : (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2)));
                    }
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
                        if ((0x2000U & vlSelf->inst)) {
                            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                        } else {
                            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((8U & vlSelf->inst)) {
                if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                        vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                        vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                    } else {
                        vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                }
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                } else {
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            }
        } else if ((8U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
        } else if ((4U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
        } else if ((2U & vlSelf->inst)) {
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            }
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            if ((1U & vlSelf->inst)) {
                if ((0x4000U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                } else {
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__u_EX__DOT__mem_waddr_s;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__u_EX__DOT__mem_waddr_s;
                }
            } else {
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((8U & vlSelf->inst)) {
            if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                } else {
                    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            }
        } else if ((4U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
        } else if ((2U & vlSelf->inst)) {
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            } else {
                vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
        }
    } else if ((8U & vlSelf->inst)) {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
        vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
    } else if ((4U & vlSelf->inst)) {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
        vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
    } else if ((2U & vlSelf->inst)) {
        if ((1U & (~ vlSelf->inst))) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
        }
        vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
            = ((1U & vlSelf->inst) ? vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res
                : 0ULL);
    } else {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
        vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
        vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = 0ULL;
    }
    if ((1U & (IData)((vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                       >> 0x1fU)))) {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rashift 
            = ((~ ((0x1fU >= (0x3fU & (vlSelf->inst 
                                       >> 0x14U))) ? 
                   (0xffffffffU >> (0x3fU & (vlSelf->inst 
                                             >> 0x14U)))
                    : 0U)) | vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rlshift);
        vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srawshift 
            = ((~ (0xffffffffU >> (0x1fU & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))) 
               | vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srlwshift);
    } else {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rashift 
            = vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rlshift;
        vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srawshift 
            = vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srlwshift;
    }
    vlSelf->mem_waddr = vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM;
    vlSelf->mem_raddr = vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM;
    vlSelf->mem_wdata = vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM;
    if (((3U == (0x7fU & vlSelf->inst)) | (0x23U == 
                                           (0x7fU & vlSelf->inst)))) {
        if ((3U != (0x7fU & vlSelf->inst))) {
            if ((0x23U == (0x7fU & vlSelf->inst))) {
                if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
                    if ((0x2000U & vlSelf->inst)) {
                        if ((0x1000U & vlSelf->inst)) {
                            vlSelf->mem_wdata = vlSelf->mem_rdata;
                        } else if ((0U == (7U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                            vlSelf->mem_wdata = (((QData)((IData)(
                                                                  (vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM 
                                                                   >> 0x20U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->mem_rdata)));
                        } else if ((4U == (7U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                            vlSelf->mem_wdata = (((QData)((IData)(vlSelf->mem_rdata)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM)));
                        }
                    } else if ((0x1000U & vlSelf->inst)) {
                        if ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                           >> 2U)))) {
                            if ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                               >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                                    vlSelf->mem_wdata 
                                        = (((QData)((IData)(
                                                            (((IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->mem_rdata 
                                                                           >> 0x20U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->mem_rdata)));
                                }
                            } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                                vlSelf->mem_wdata = 
                                    (((QData)((IData)(
                                                      (((IData)(
                                                                (vlSelf->mem_rdata 
                                                                 >> 0x30U)) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & (IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->mem_rdata)));
                            }
                        } else if ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                                  >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                                vlSelf->mem_wdata = 
                                    (((QData)((IData)(
                                                      (vlSelf->mem_rdata 
                                                       >> 0x20U))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (((IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM) 
                                                                    << 0x10U) 
                                                                   | (0xffffU 
                                                                      & (IData)(vlSelf->mem_rdata))))));
                            }
                        } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                            vlSelf->mem_wdata = ((0xffffffffffff0000ULL 
                                                  & vlSelf->mem_rdata) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM)))));
                        }
                    } else {
                        vlSelf->mem_wdata = ((1U & (IData)(
                                                           (vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                                            >> 2U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM)))) 
                                                    << 0x38U) 
                                                   | (0xffffffffffffffULL 
                                                      & vlSelf->mem_rdata))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->mem_rdata 
                                                                                >> 0x38U))))) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM)))) 
                                                       << 0x30U) 
                                                      | (0xffffffffffffULL 
                                                         & vlSelf->mem_rdata))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->mem_rdata 
                                                                                >> 0x30U))))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM)))) 
                                                       << 0x28U) 
                                                      | (0xffffffffffULL 
                                                         & vlSelf->mem_rdata)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->mem_rdata 
                                                                               >> 0x28U)) 
                                                                      << 8U) 
                                                                     | (0xffU 
                                                                        & (IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->mem_rdata)))))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (vlSelf->mem_rdata 
                                                                     >> 0x20U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM) 
                                                                       << 0x18U) 
                                                                      | (0xffffffU 
                                                                         & (IData)(vlSelf->mem_rdata))))))
                                                   : 
                                                  ((0xffffffffff000000ULL 
                                                    & vlSelf->mem_rdata) 
                                                   | (QData)((IData)(
                                                                     ((0xff0000U 
                                                                       & ((IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM) 
                                                                          << 0x10U)) 
                                                                      | (0xffffU 
                                                                         & (IData)(vlSelf->mem_rdata)))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                                                   ? 
                                                  ((0xffffffffffff0000ULL 
                                                    & vlSelf->mem_rdata) 
                                                   | (QData)((IData)(
                                                                     ((0xff00U 
                                                                       & ((IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM) 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & (IData)(vlSelf->mem_rdata))))))
                                                   : 
                                                  ((0xffffffffffffff00ULL 
                                                    & vlSelf->mem_rdata) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM))))))));
                    }
                }
            }
        }
    }
    vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
            } else if ((8U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
                    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
                        if ((0x2000U & vlSelf->inst)) {
                            vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
                        }
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
        }
    } else if ((0x20U & vlSelf->inst)) {
        __Vtemp_hc961b8db__0[0U] = 1U;
        __Vtemp_hc961b8db__0[1U] = 0U;
        __Vtemp_hc961b8db__0[2U] = 0U;
        __Vtemp_hc961b8db__0[3U] = 0U;
        __Vtemp_h0c4231f9__0[0U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[0U]);
        __Vtemp_h0c4231f9__0[1U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[1U]);
        __Vtemp_h0c4231f9__0[2U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[2U]);
        __Vtemp_h0c4231f9__0[3U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[3U]);
        VL_ADD_W(4, __Vtemp_h3780105a__0, __Vtemp_hc961b8db__0, __Vtemp_h0c4231f9__0);
        __Vtemp_hc961b8db__1[0U] = 1U;
        __Vtemp_hc961b8db__1[1U] = 0U;
        __Vtemp_hc961b8db__1[2U] = 0U;
        __Vtemp_hc961b8db__1[3U] = 0U;
        __Vtemp_h0c4231f9__1[0U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[0U]);
        __Vtemp_h0c4231f9__1[1U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[1U]);
        __Vtemp_h0c4231f9__1[2U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[2U]);
        __Vtemp_h0c4231f9__1[3U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[3U]);
        VL_ADD_W(4, __Vtemp_hd9419514__0, __Vtemp_hc961b8db__1, __Vtemp_h0c4231f9__1);
        __Vtemp_hc961b8db__2[0U] = 1U;
        __Vtemp_hc961b8db__2[1U] = 0U;
        __Vtemp_hc961b8db__2[2U] = 0U;
        __Vtemp_hc961b8db__2[3U] = 0U;
        __Vtemp_h0c4231f9__2[0U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[0U]);
        __Vtemp_h0c4231f9__2[1U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[1U]);
        __Vtemp_h0c4231f9__2[2U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[2U]);
        __Vtemp_h0c4231f9__2[3U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[3U]);
        VL_ADD_W(4, __Vtemp_h22eb8ae9__0, __Vtemp_hc961b8db__2, __Vtemp_h0c4231f9__2);
        vlSelf->npc_onecycle__DOT__wdata_EX_MEM = (
                                                   (0x10U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->inst)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->inst)
                                                        ? 
                                                       ((0x4000U 
                                                         & vlSelf->inst)
                                                         ? 
                                                        ((0x2000U 
                                                          & vlSelf->inst)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->inst)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w)))
                                                           : 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w))))
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->inst)
                                                           ? 
                                                          ((0x20U 
                                                            == 
                                                            (vlSelf->inst 
                                                             >> 0x19U))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srawshift 
                                                                                >> 0x1fU))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srawshift)))
                                                            : 
                                                           ((0U 
                                                             == 
                                                             (vlSelf->inst 
                                                              >> 0x19U))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srlwshift 
                                                                                >> 0x1fU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srlwshift)))
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (vlSelf->inst 
                                                               >> 0x19U))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               (- (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w 
                                                                                >> 0x1fU))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w)))
                                                              : 0ULL)))
                                                           : 0ULL))
                                                         : 
                                                        ((0x2000U 
                                                          & vlSelf->inst)
                                                          ? 0ULL
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->inst)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__sllw_temp 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__sllw_temp)))
                                                           : 
                                                          ((0x20U 
                                                            == 
                                                            (vlSelf->inst 
                                                             >> 0x19U))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_sub_op2_res 
                                                                                >> 0x1fU))))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_sub_op2_res)))
                                                            : 
                                                           ((0U 
                                                             == 
                                                             (vlSelf->inst 
                                                              >> 0x19U))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res 
                                                                                >> 0x1fU))))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res)))
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (vlSelf->inst 
                                                               >> 0x19U))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               (- (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[0U] 
                                                                                >> 0x1fU))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[0U])))
                                                              : 0ULL))))))
                                                        : 0ULL)
                                                       : 0ULL))
                                                     : 
                                                    ((4U 
                                                      & vlSelf->inst)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->inst)
                                                        ? 
                                                       (((0U 
                                                          == 
                                                          (vlSelf->inst 
                                                           >> 0x19U)) 
                                                         | (0x20U 
                                                            == 
                                                            (vlSelf->inst 
                                                             >> 0x19U)))
                                                         ? 
                                                        ((0x4000U 
                                                          & vlSelf->inst)
                                                          ? 
                                                         ((0x2000U 
                                                           & vlSelf->inst)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelf->inst)
                                                            ? 
                                                           (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                            & vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)
                                                            : 
                                                           (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                            | vlSelf->npc_onecycle__DOT__reg2_op_ID_EX))
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->inst)
                                                            ? 
                                                           ((0x40000000U 
                                                             & vlSelf->inst)
                                                             ? 
                                                            ((vlSelf->npc_onecycle__DOT__u_EX__DOT__sr_shift 
                                                              & (0xffffffffffffffffULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))) 
                                                             | (~ 
                                                                (0xffffffffffffffffULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))))
                                                             : vlSelf->npc_onecycle__DOT__u_EX__DOT__sr_shift)
                                                            : 
                                                           (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                            ^ vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))
                                                          : 
                                                         ((0x2000U 
                                                           & vlSelf->inst)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelf->inst)
                                                            ? (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned))
                                                            : (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed)))
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->inst)
                                                            ? 
                                                           (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                            << 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))
                                                            : 
                                                           ((0x40000000U 
                                                             & vlSelf->inst)
                                                             ? vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_sub_op2_res
                                                             : vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res))))
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (vlSelf->inst 
                                                           >> 0x19U))
                                                          ? 
                                                         ((0x4000U 
                                                           & vlSelf->inst)
                                                           ? 
                                                          ((0x2000U 
                                                            & vlSelf->inst)
                                                            ? vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res
                                                            : vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res)
                                                           : 
                                                          ((0x2000U 
                                                            & vlSelf->inst)
                                                            ? 
                                                           ((0x1000U 
                                                             & vlSelf->inst)
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[2U])))
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                                         >> 0x3fU)))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               __Vtemp_h3780105a__0[3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                __Vtemp_h3780105a__0[2U])))
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[2U])))))
                                                            : 
                                                           ((0x1000U 
                                                             & vlSelf->inst)
                                                             ? 
                                                            ((0U 
                                                              == 
                                                              ((2U 
                                                                & ((IData)(
                                                                           (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                                            >> 0x3fU)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            (vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                                                                             >> 0x3fU)))))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[2U])))
                                                              : 
                                                             ((3U 
                                                               == 
                                                               ((2U 
                                                                 & ((IData)(
                                                                            (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                                             >> 0x3fU)) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                                                                              >> 0x3fU)))))
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[2U])))
                                                               : 
                                                              ((2U 
                                                                == 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                                              >> 0x3fU)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->npc_onecycle__DOT__reg2_op_ID_EX 
                                                                               >> 0x3fU)))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                __Vtemp_hd9419514__0[3U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                __Vtemp_hd9419514__0[2U])))
                                                                : 
                                                               (((QData)((IData)(
                                                                                __Vtemp_h22eb8ae9__0[3U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                __Vtemp_h22eb8ae9__0[2U]))))))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[0U]))))))
                                                          : 0ULL))
                                                        : 0ULL)
                                                       : 0ULL)))
                                                    : 0ULL);
    } else if ((0x10U & vlSelf->inst)) {
        vlSelf->npc_onecycle__DOT__wdata_EX_MEM = (
                                                   (8U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->inst)
                                                     ? 0ULL
                                                     : 
                                                    ((2U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU)))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res)))
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->inst 
                                                             >> 0xcU)))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__sli_shift 
                                                                                >> 0x1fU))))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__sli_shift)))
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->inst 
                                                              >> 0xcU)))
                                                          ? 
                                                         ((0x40000000U 
                                                           & vlSelf->inst)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rashift 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rashift)))
                                                           : 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rlshift 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rlshift))))
                                                          : 0ULL)))
                                                       : 0ULL)
                                                      : 0ULL))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->inst)
                                                     ? 0ULL
                                                     : 
                                                    ((2U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((0x4000U 
                                                        & vlSelf->inst)
                                                        ? 
                                                       ((0x2000U 
                                                         & vlSelf->inst)
                                                         ? 
                                                        ((0x1000U 
                                                          & vlSelf->inst)
                                                          ? 
                                                         (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                          & vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)
                                                          : 
                                                         (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                          | vlSelf->npc_onecycle__DOT__reg2_op_ID_EX))
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->inst)
                                                          ? 
                                                         ((0x40000000U 
                                                           & vlSelf->inst)
                                                           ? 
                                                          (((vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                             >> 
                                                             (0x3fU 
                                                              & (vlSelf->inst 
                                                                 >> 0x14U))) 
                                                            & (0xffffffffffffffffULL 
                                                               >> 
                                                               (0x3fU 
                                                                & (vlSelf->inst 
                                                                   >> 0x14U)))) 
                                                           | ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                                                >> 0x1fU)))))) 
                                                              & (~ 
                                                                 (0xffffffffffffffffULL 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U))))))
                                                           : 
                                                          (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                           >> 
                                                           (0x3fU 
                                                            & (vlSelf->inst 
                                                               >> 0x14U))))
                                                          : 
                                                         (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                          ^ vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->inst)
                                                         ? 
                                                        ((0x1000U 
                                                          & vlSelf->inst)
                                                          ? (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned))
                                                          : (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed)))
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->inst)
                                                          ? 
                                                         (vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                                          << 
                                                          (0x3fU 
                                                           & (vlSelf->inst 
                                                              >> 0x14U)))
                                                          : vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res)))
                                                       : 0ULL)
                                                      : 0ULL)));
    } else if ((8U & vlSelf->inst)) {
        vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
    } else if ((4U & vlSelf->inst)) {
        vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
    } else if ((2U & vlSelf->inst)) {
        if ((1U & vlSelf->inst)) {
            if ((0x4000U & vlSelf->inst)) {
                if ((0x2000U & vlSelf->inst)) {
                    if ((0x1000U & vlSelf->inst)) {
                        vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
                    }
                }
            }
        } else {
            vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
        }
    } else {
        vlSelf->npc_onecycle__DOT__wdata_EX_MEM = 0ULL;
    }
    vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS = vlSelf->npc_onecycle__DOT__wdata_EX_MEM;
    if (((3U == (0x7fU & vlSelf->inst)) | (0x23U == 
                                           (0x7fU & vlSelf->inst)))) {
        if ((3U == (0x7fU & vlSelf->inst))) {
            if ((0x4000U & vlSelf->inst)) {
                if ((0x2000U & vlSelf->inst)) {
                    if ((1U & (~ (vlSelf->inst >> 0xcU)))) {
                        if ((0U == (7U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                            vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                                = (QData)((IData)(vlSelf->mem_rdata));
                        } else if ((4U == (7U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                            vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                                = (QData)((IData)((vlSelf->mem_rdata 
                                                   >> 0x20U)));
                        }
                    }
                } else if ((0x1000U & vlSelf->inst)) {
                    if ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                       >> 2U)))) {
                        if ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                           >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                                vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                                    = (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(
                                                                 (vlSelf->mem_rdata 
                                                                  >> 0x30U)))));
                            }
                        } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                            vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                                = (QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->mem_rdata 
                                                              >> 0x20U)))));
                        }
                    } else if ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                              >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                            vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                                = (QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->mem_rdata 
                                                              >> 0x10U)))));
                        }
                    } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                        vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->mem_rdata))));
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                        = ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                          >> 2U))) ? 
                           ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                           >> 1U)))
                             ? ((1U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                                 ? (QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->mem_rdata 
                                                               >> 0x38U)))))
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->mem_rdata 
                                                               >> 0x30U))))))
                             : ((1U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                                 ? (QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->mem_rdata 
                                                               >> 0x28U)))))
                                 : (QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->mem_rdata 
                                                               >> 0x20U)))))))
                            : ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                              >> 1U)))
                                ? ((1U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                                    ? (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->mem_rdata 
                                                                  >> 0x18U)))))
                                    : (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->mem_rdata 
                                                                  >> 0x10U))))))
                                : ((1U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                                    ? (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->mem_rdata 
                                                                  >> 8U)))))
                                    : (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->mem_rdata)))))));
                }
            } else if ((0x2000U & vlSelf->inst)) {
                if ((0x1000U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                        = vlSelf->mem_rdata;
                } else if ((0U == (7U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                    vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->mem_rdata 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->mem_rdata)));
                } else if ((4U == (7U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                    vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->mem_rdata 
                                                                   >> 0x3fU))))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->mem_rdata 
                                                         >> 0x20U))));
                }
            } else if ((0x1000U & vlSelf->inst)) {
                if ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                   >> 2U)))) {
                    if ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                       >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                            vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                                = (((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->mem_rdata 
                                                                   >> 0x3fU)))))) 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->mem_rdata 
                                                                            >> 0x30U))))));
                        }
                    } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                        vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                            = (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->mem_rdata 
                                                               >> 0x2fU)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->mem_rdata 
                                                                        >> 0x20U))))));
                    }
                } else if ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                          >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                        vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                            = (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->mem_rdata 
                                                               >> 0x1fU)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->mem_rdata 
                                                                        >> 0x10U))))));
                    }
                } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM)))) {
                    vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->mem_rdata 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->mem_rdata)))));
                }
            } else {
                vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                    = ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->mem_rdata 
                                                                                >> 0x3fU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->mem_rdata 
                                                                                >> 0x38U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->mem_rdata 
                                                                                >> 0x37U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->mem_rdata 
                                                                                >> 0x30U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->mem_rdata 
                                                                                >> 0x2fU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->mem_rdata 
                                                                                >> 0x28U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->mem_rdata 
                                                                                >> 0x27U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->mem_rdata 
                                                                                >> 0x20U))))))))
                        : ((1U & (IData)((vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                             ? (((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->mem_rdata 
                                                                >> 0x1fU)))))) 
                                 << 8U) | (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->mem_rdata 
                                                                      >> 0x18U))))))
                             : (((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->mem_rdata 
                                                                >> 0x17U)))))) 
                                 << 8U) | (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->mem_rdata 
                                                                      >> 0x10U)))))))
                            : ((1U & (IData)(vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM))
                                ? (((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->mem_rdata 
                                                                   >> 0xfU)))))) 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->mem_rdata 
                                                                         >> 8U))))))
                                : (((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->mem_rdata 
                                                                   >> 7U)))))) 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->mem_rdata))))))));
            }
        }
    }
}

VL_ATTR_COLD void Vnpc_onecycle___024root___initial__TOP__0(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->npc_onecycle__DOT__u_IF__DOT__PC = 0x80000000ULL;
}

VL_ATTR_COLD void Vnpc_onecycle___024root___settle__TOP__1(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->pc = vlSelf->npc_onecycle__DOT__u_IF__DOT__PC;
    vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr 
        = ((((- (QData)((IData)((1U & ((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_sb) 
                                       >> 0xbU))))) 
             << 0xdU) | (QData)((IData)(((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_sb) 
                                         << 1U)))) 
           + vlSelf->pc);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            } else if ((8U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    if ((0x4000U & vlSelf->inst)) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr 
                            = ((0x2000U & vlSelf->inst)
                                ? ((0x1000U & vlSelf->inst)
                                    ? ((- (QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned)))))) 
                                       & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr)
                                    : ((- (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned))) 
                                       & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr))
                                : ((0x1000U & vlSelf->inst)
                                    ? ((- (QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed)))))) 
                                       & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr)
                                    : ((- (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed))) 
                                       & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr)));
                    } else if ((1U & (~ (vlSelf->inst 
                                         >> 0xdU)))) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr 
                            = ((0x1000U & vlSelf->inst)
                                ? ((- (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2)))))) 
                                   & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr)
                                : ((- (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2))) 
                                   & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr));
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((8U & vlSelf->inst)) {
                if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                }
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            }
        } else if ((8U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        } else if ((4U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        } else if ((2U & vlSelf->inst)) {
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((8U & vlSelf->inst)) {
            if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            }
        } else if ((4U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        } else if ((2U & vlSelf->inst)) {
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        }
    } else if ((8U & vlSelf->inst)) {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
    } else if ((4U & vlSelf->inst)) {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
    } else if ((2U & vlSelf->inst)) {
        if ((1U & (~ vlSelf->inst))) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        }
    } else {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
    }
}

VL_ATTR_COLD void Vnpc_onecycle___024root___eval_initial(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vnpc_onecycle___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vnpc_onecycle___024root___eval_settle(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___eval_settle\n"); );
    // Body
    Vnpc_onecycle___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vnpc_onecycle___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vnpc_onecycle___024root___final(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___final\n"); );
}

VL_ATTR_COLD void Vnpc_onecycle___024root___ctor_var_reset(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->rom_ce = VL_RAND_RESET_I(1);
    vlSelf->mem_wdata = VL_RAND_RESET_Q(64);
    vlSelf->mem_raddr = VL_RAND_RESET_Q(64);
    vlSelf->mem_waddr = VL_RAND_RESET_Q(64);
    vlSelf->mem_we = VL_RAND_RESET_I(1);
    vlSelf->mem_ce = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = VL_RAND_RESET_I(5);
    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = VL_RAND_RESET_I(5);
    vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__wd_EX_GEN_REGS = VL_RAND_RESET_I(5);
    vlSelf->npc_onecycle__DOT__wreg_EX_GEN_REGS = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__wdata_EX_GEN_REGS = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = VL_RAND_RESET_I(12);
    vlSelf->npc_onecycle__DOT__csr_read_ID_CSR_REGS = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__reg2_op_ID_EX = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__reg_we_ID_EX = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX = VL_RAND_RESET_I(5);
    vlSelf->npc_onecycle__DOT__csr_we_ID_EX = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__csr_rdata_ID_EX = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = VL_RAND_RESET_I(12);
    vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__mem_raddr_EX_MEM = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__mem_waddr_EX_MEM = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__wd_EX_MEM = VL_RAND_RESET_I(5);
    vlSelf->npc_onecycle__DOT__wreg_EX_MEM = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__wdata_EX_MEM = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = VL_RAND_RESET_I(12);
    vlSelf->npc_onecycle__DOT__u_IF__DOT__hold_flag_i = VL_RAND_RESET_I(6);
    vlSelf->npc_onecycle__DOT__u_IF__DOT__hold_flag_o = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_IF__DOT__PC = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_ID__DOT__inst_ex_i = VL_RAND_RESET_I(32);
    vlSelf->npc_onecycle__DOT__u_ID__DOT__ex_wdata_i = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_ID__DOT__ex_wd_i = VL_RAND_RESET_I(5);
    vlSelf->npc_onecycle__DOT__u_ID__DOT__ex_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_ID__DOT__mem_wdata_reg_i = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_ID__DOT__mem_wd_reg_i = VL_RAND_RESET_I(5);
    vlSelf->npc_onecycle__DOT__u_ID__DOT__mem_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_ID__DOT__hold_flag_o = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__int_addr_i = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__int_assert_i = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__hold_flag_o = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_s = VL_RAND_RESET_I(12);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_sb = VL_RAND_RESET_I(12);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__mem_waddr_s = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_sub_op2_res = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2 = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__sr_shift = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__sli_shift = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rlshift = VL_RAND_RESET_I(32);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rashift = VL_RAND_RESET_I(32);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__sllw_temp = VL_RAND_RESET_I(32);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srlwshift = VL_RAND_RESET_I(32);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srawshift = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_op2_mul);
    VL_RAND_RESET_W(128, vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w = VL_RAND_RESET_I(32);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w = VL_RAND_RESET_I(32);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__hold_symbol = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__jump_symbol = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_we_i = VL_RAND_RESET_I(1);
    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_wdata_i = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle);
    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mscratch = VL_RAND_RESET_Q(64);
    vlSelf->npc_onecycle__DOT__u_MEM__DOT__hold_flag_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
