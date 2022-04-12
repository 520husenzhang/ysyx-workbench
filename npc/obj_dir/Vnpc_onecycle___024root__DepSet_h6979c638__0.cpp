// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc_onecycle.h for the primary calling header

#include "verilated.h"

#include "Vnpc_onecycle___024root.h"

VL_INLINE_OPT void Vnpc_onecycle___024root___combo__TOP__0(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___combo__TOP__0\n"); );
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
                                vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0ULL;
                                vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX 
                                    = (QData)((IData)(
                                                      (vlSelf->inst 
                                                       >> 0x14U)));
                            } else {
                                vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
                                vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0ULL;
                            }
                        } else {
                            vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
                            vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0ULL;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
                        vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0ULL;
                }
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold = 0U;
                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__mem_we_EX_MEM = 0U;
            } else {
                vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0ULL;
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
            vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0ULL;
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
        vlSelf->npc_onecycle__DOT__csr_waddr_ID_EX = 0ULL;
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
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                    vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                }
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
            } else {
                vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
                vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
            }
        } else {
            vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS 
                = (IData)((3U == (7U & vlSelf->inst)));
            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
                = ((4U & vlSelf->inst) ? 0U : ((2U 
                                                & vlSelf->inst)
                                                ? (
                                                   (1U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 0xfU))
                                                    : 0U)
                                                : 0U));
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
            vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
        }
    } else {
        vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS 
            = (1U & (IData)(((3U == (0xfU & vlSelf->inst)) 
                             & (0x7000U != (0x7000U 
                                            & vlSelf->inst)))));
        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS = 0U;
        vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS 
            = ((8U & vlSelf->inst) ? 0U : ((4U & vlSelf->inst)
                                            ? 0U : 
                                           ((2U & vlSelf->inst)
                                             ? ((1U 
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
                                                       >> 0xfU))
                                                      : 
                                                     (vlSelf->inst 
                                                      >> 0xfU))
                                                     : 
                                                    (vlSelf->inst 
                                                     >> 0xfU)))
                                                 : 0U)
                                             : 0U)));
        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
        vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS = 0U;
        vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
        vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS = 0U;
    }
    vlSelf->mem_ce = vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM;
    vlSelf->mem_we = vlSelf->npc_onecycle__DOT__mem_we_EX_MEM;
    vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr 
        = ((((- (QData)((IData)((1U & ((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_sb) 
                                       >> 0xbU))))) 
             << 0xdU) | (QData)((IData)(((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_sb) 
                                         << 1U)))) 
           + vlSelf->npc_onecycle__DOT__pc_IF_ID);
}

VL_INLINE_OPT void Vnpc_onecycle___024root___sequent__TOP__0(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v0;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v0;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v2;
    CData/*0:0*/ __Vdlyvset__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v2;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v3;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v4;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v5;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v6;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v7;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v8;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v9;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v10;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v11;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v12;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v13;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v14;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v15;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v16;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v17;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v18;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v19;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v20;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v21;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v22;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v23;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v24;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v25;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v26;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v27;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v28;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v29;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v30;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v31;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v32;
    QData/*63:0*/ __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v33;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_hfc20d666__0;
    // Body
    __Vdlyvset__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v0 = 0U;
    __Vdlyvset__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v2 = 0U;
    __Vtemp_hc961b8db__0[0U] = 1U;
    __Vtemp_hc961b8db__0[1U] = 0U;
    __Vtemp_hc961b8db__0[2U] = 0U;
    __Vtemp_hc961b8db__0[3U] = 0U;
    VL_ADD_W(4, __Vtemp_hfc20d666__0, __Vtemp_hc961b8db__0, vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle);
    if (vlSelf->rst_n) {
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle[0U] 
            = __Vtemp_hfc20d666__0[0U];
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle[1U] 
            = __Vtemp_hfc20d666__0[1U];
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle[2U] 
            = __Vtemp_hfc20d666__0[2U];
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle[3U] 
            = __Vtemp_hfc20d666__0[3U];
        vlSelf->npc_onecycle__DOT____Vcellout__u_IF__rom_ce = 1U;
        vlSelf->npc_onecycle__DOT__u_IF__DOT__PC = 
            ((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump)
              ? vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr
              : (4ULL + vlSelf->npc_onecycle__DOT__u_IF__DOT__PC));
        if (vlSelf->npc_onecycle__DOT__csr_we_EX_MEM) {
            if ((0x305U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                if ((0x342U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                    if ((0x341U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                        if ((0x304U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                            if ((0x300U != (0xfffU 
                                            & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                                if ((0x340U == (0xfffU 
                                                & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                                    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mscratch 
                                        = vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM;
                                }
                            }
                        }
                    }
                    if ((0x341U == (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mepc 
                            = vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM;
                    }
                }
            }
            if ((0x305U == (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mtvec 
                    = vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM;
            }
            if ((0x305U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                if ((0x342U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                    if ((0x341U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                        if ((0x304U == (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                            vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mie 
                                = vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM;
                        }
                        if ((0x304U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                            if ((0x300U == (0xfffU 
                                            & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                                vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mstatus 
                                    = vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM;
                            }
                        }
                    }
                }
                if ((0x342U == (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)))) {
                    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mcause 
                        = vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM;
                }
            }
        } else if (vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_we_i) {
            if ((0x305U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                if ((0x342U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                    if ((0x341U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                        if ((0x304U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                            if ((0x300U != (0xfffU 
                                            & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                                if ((0x340U == (0xfffU 
                                                & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                                    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mscratch 
                                        = vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_wdata_i;
                                }
                            }
                        }
                    }
                    if ((0x341U == (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mepc 
                            = vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_wdata_i;
                    }
                }
            }
            if ((0x305U == (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mtvec 
                    = vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_wdata_i;
            }
            if ((0x305U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                if ((0x342U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                    if ((0x341U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                        if ((0x304U == (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                            vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mie 
                                = vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_wdata_i;
                        }
                        if ((0x304U != (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                            if ((0x300U == (0xfffU 
                                            & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                                vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mstatus 
                                    = vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_wdata_i;
                            }
                        }
                    }
                }
                if ((0x342U == (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)))) {
                    vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mcause 
                        = vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_wdata_i;
                }
            }
        }
        if (((IData)(vlSelf->npc_onecycle__DOT__wreg_EX_MEM) 
             & (0U != (IData)(vlSelf->npc_onecycle__DOT__wd_EX_MEM)))) {
            __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v0 
                = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
            __Vdlyvset__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v0 = 1U;
            __Vdlyvdim0__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v0 
                = vlSelf->npc_onecycle__DOT__wd_EX_MEM;
        }
    } else {
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle[0U] = 0U;
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle[1U] = 0U;
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle[2U] = 0U;
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle[3U] = 0U;
        vlSelf->npc_onecycle__DOT____Vcellout__u_IF__rom_ce = 0U;
        vlSelf->npc_onecycle__DOT__u_IF__DOT__PC = 0x80000000ULL;
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mscratch = 0ULL;
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mepc = 0ULL;
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mtvec = 0ULL;
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mie = 0ULL;
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mstatus = 0ULL;
        vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mcause = 0ULL;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v2 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvset__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v2 = 1U;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v3 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v4 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v5 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v6 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v7 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v8 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v9 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v10 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v11 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v12 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v13 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v14 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v15 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v16 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v17 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v18 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v19 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v20 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v21 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v22 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v23 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v24 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v25 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v26 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v27 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v28 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v29 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v30 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v31 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v32 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v33 
            = vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS;
    }
    if (__Vdlyvset__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v0) {
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[__Vdlyvdim0__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v0] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v0;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0U] = 0ULL;
    }
    if (__Vdlyvset__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v2) {
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v2;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[1U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v3;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[2U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v4;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[3U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v5;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[4U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v6;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[5U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v7;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[6U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v8;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[7U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v9;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[8U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v10;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[9U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v11;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0xaU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v12;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0xbU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v13;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0xcU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v14;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0xdU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v15;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0xeU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v16;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0xfU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v17;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x10U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v18;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x11U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v19;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x12U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v20;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x13U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v21;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x14U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v22;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x15U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v23;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x16U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v24;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x17U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v25;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x18U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v26;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x19U] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v27;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x1aU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v28;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x1bU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v29;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x1cU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v30;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x1dU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v31;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x1eU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v32;
        vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0x1fU] 
            = __Vdlyvval__npc_onecycle__DOT__u_GEN_REGS__DOT__regs__v33;
    }
    vlSelf->rom_ce = (QData)((IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_IF__rom_ce));
    vlSelf->pc = vlSelf->npc_onecycle__DOT__u_IF__DOT__PC;
}

VL_INLINE_OPT void Vnpc_onecycle___024root___combo__TOP__1(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___combo__TOP__1\n"); );
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
    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            } else if ((8U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
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
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                } else {
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                }
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
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
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
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
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
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = (1U & (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                        vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                        vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                        vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                        vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    } else {
                        vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                        vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    }
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = (1U & (vlSelf->inst | (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX)));
                } else {
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = (1U & (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
                }
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
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
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                } else {
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                    vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                        = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                }
            } else {
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            }
        } else if ((8U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
        } else if ((4U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
        } else if ((2U & vlSelf->inst)) {
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            } else {
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            }
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = ((~ vlSelf->inst) & (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = 
                ((1U & vlSelf->inst) ? 0U : (IData)(vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX));
        } else {
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((8U & vlSelf->inst)) {
            if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = (1U & (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                } else {
                    vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                    vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                }
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = (1U & (vlSelf->inst | (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX)));
            } else {
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = (1U & (IData)(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
            }
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
        } else if ((4U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
        } else if ((2U & vlSelf->inst)) {
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            } else {
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
                vlSelf->npc_onecycle__DOT__wd_EX_MEM 
                    = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            }
        } else {
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wreg_EX_MEM 
                = vlSelf->npc_onecycle__DOT__reg_we_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
            vlSelf->npc_onecycle__DOT__wd_EX_MEM = vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX;
        }
    } else {
        if ((8U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
        } else if ((4U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
        } else if ((2U & vlSelf->inst)) {
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            } else {
                vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
                vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__csr_we_EX_MEM = 0U;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
            vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM = 0ULL;
        }
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
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
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
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
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
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
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
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
                        if ((0x2000U & vlSelf->inst)) {
                            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                        }
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
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
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
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
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
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
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
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
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o 
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
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
            if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
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
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
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
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__reg1_op_ID_EX = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
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
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o = 0ULL;
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
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            } else if ((8U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    if ((0x4000U & vlSelf->inst)) {
                        if ((0x2000U & vlSelf->inst)) {
                            if ((0x1000U & vlSelf->inst)) {
                                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump 
                                    = (1U & (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned)));
                                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr 
                                    = ((- (QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned)))))) 
                                       & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr);
                            } else {
                                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump 
                                    = (1U & (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned));
                                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr 
                                    = ((- (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned))) 
                                       & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr);
                            }
                        } else if ((0x1000U & vlSelf->inst)) {
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump 
                                = (1U & (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed)));
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr 
                                = ((- (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed)))))) 
                                   & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr);
                        } else {
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump 
                                = (1U & (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed));
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr 
                                = ((- (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed))) 
                                   & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr);
                        }
                    } else if ((1U & (~ (vlSelf->inst 
                                         >> 0xdU)))) {
                        if ((0x1000U & vlSelf->inst)) {
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump 
                                = (1U & (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2)));
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr 
                                = ((- (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2)))))) 
                                   & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr);
                        } else {
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump 
                                = (1U & (IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2));
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr 
                                = ((- (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2))) 
                                   & vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr);
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    }
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
                        if ((0x2000U & vlSelf->inst)) {
                            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                        } else {
                            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                        }
                    } else {
                        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((8U & vlSelf->inst)) {
                if ((4U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                    } else {
                        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                }
            } else if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            }
        } else if ((8U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
        } else if ((4U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
        } else if ((2U & vlSelf->inst)) {
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            }
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            if ((1U & vlSelf->inst)) {
                if ((0x4000U & vlSelf->inst)) {
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                } else {
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o 
                        = vlSelf->npc_onecycle__DOT__u_EX__DOT__mem_waddr_s;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o 
                        = vlSelf->npc_onecycle__DOT__u_EX__DOT__mem_waddr_s;
                }
            } else {
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((8U & vlSelf->inst)) {
            if ((4U & vlSelf->inst)) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                } else {
                    vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                    vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                }
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            }
        } else if ((4U & vlSelf->inst)) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
        } else if ((2U & vlSelf->inst)) {
            if ((1U & (~ vlSelf->inst))) {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            } else {
                vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
                vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            }
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
            vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
        }
    } else if ((8U & vlSelf->inst)) {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
    } else if ((4U & vlSelf->inst)) {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
    } else if ((2U & vlSelf->inst)) {
        if ((1U & (~ vlSelf->inst))) {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        } else {
            vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        }
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o 
            = ((1U & vlSelf->inst) ? vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res
                : 0ULL);
    } else {
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump = 0U;
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
        vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o = 0ULL;
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
    vlSelf->mem_waddr = (QData)((IData)((1U & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o))));
    vlSelf->mem_raddr = (QData)((IData)((1U & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))));
    vlSelf->mem_wdata = (QData)((IData)((1U & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o))));
    if (((3U == (0x7fU & vlSelf->inst)) | (0x23U == 
                                           (0x7fU & vlSelf->inst)))) {
        if ((3U != (0x7fU & vlSelf->inst))) {
            if ((0x23U == (0x7fU & vlSelf->inst))) {
                if ((1U & (~ (vlSelf->inst >> 0xeU)))) {
                    if ((0x2000U & vlSelf->inst)) {
                        if ((0x1000U & vlSelf->inst)) {
                            vlSelf->mem_wdata = vlSelf->mem_rdata;
                        } else if ((0U == (7U & (IData)((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))))))) {
                            vlSelf->mem_wdata = (((QData)((IData)(
                                                                  ((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o)))) 
                                                                   >> 0x20U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->mem_rdata)));
                        } else if ((4U == (7U & (IData)((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))))))) {
                            vlSelf->mem_wdata = (((QData)((IData)(vlSelf->mem_rdata)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o)))))));
                        }
                    } else if ((0x1000U & vlSelf->inst)) {
                        if ((1U & (IData)(((QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                           >> 2U)))) {
                            if ((1U & (IData)(((QData)((IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                               >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
                                    vlSelf->mem_wdata 
                                        = (((QData)((IData)(
                                                            (((IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o))))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->mem_rdata 
                                                                           >> 0x20U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->mem_rdata)));
                                }
                            } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
                                vlSelf->mem_wdata = 
                                    (((QData)((IData)(
                                                      (((IData)(
                                                                (vlSelf->mem_rdata 
                                                                 >> 0x30U)) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & (IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o))))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->mem_rdata)));
                            }
                        } else if ((1U & (IData)(((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                                  >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
                                vlSelf->mem_wdata = 
                                    (((QData)((IData)(
                                                      (vlSelf->mem_rdata 
                                                       >> 0x20U))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (((IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o))))) 
                                                                    << 0x10U) 
                                                                   | (0xffffU 
                                                                      & (IData)(vlSelf->mem_rdata))))));
                            }
                        } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
                            vlSelf->mem_wdata = ((0xffffffffffff0000ULL 
                                                  & vlSelf->mem_rdata) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o)))))))));
                        }
                    } else {
                        vlSelf->mem_wdata = ((1U & (IData)(
                                                           ((QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                                            >> 2U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            ((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o)))))))) 
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
                                                                        & (IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o)))))))) 
                                                       << 0x30U) 
                                                      | (0xffffffffffffULL 
                                                         & vlSelf->mem_rdata))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->mem_rdata 
                                                                                >> 0x30U))))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o)))))))) 
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
                                                                        & (IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o))))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->mem_rdata)))))
                                              : ((1U 
                                                  & (IData)(
                                                            ((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (vlSelf->mem_rdata 
                                                                     >> 0x20U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o))))) 
                                                                       << 0x18U) 
                                                                      | (0xffffffU 
                                                                         & (IData)(vlSelf->mem_rdata))))))
                                                   : 
                                                  ((0xffffffffff000000ULL 
                                                    & vlSelf->mem_rdata) 
                                                   | (QData)((IData)(
                                                                     ((0xff0000U 
                                                                       & ((IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o))))) 
                                                                          << 0x10U)) 
                                                                      | (0xffffU 
                                                                         & (IData)(vlSelf->mem_rdata)))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
                                                   ? 
                                                  ((0xffffffffffff0000ULL 
                                                    & vlSelf->mem_rdata) 
                                                   | (QData)((IData)(
                                                                     ((0xff00U 
                                                                       & ((IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o))))) 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & (IData)(vlSelf->mem_rdata))))))
                                                   : 
                                                  ((0xffffffffffffff00ULL 
                                                    & vlSelf->mem_rdata) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_wdata_o))))))))))));
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
                        if ((0U == (7U & (IData)((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))))))) {
                            vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                                = (QData)((IData)(vlSelf->mem_rdata));
                        } else if ((4U == (7U & (IData)((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))))))) {
                            vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                                = (QData)((IData)((vlSelf->mem_rdata 
                                                   >> 0x20U)));
                        }
                    }
                } else if ((0x1000U & vlSelf->inst)) {
                    if ((1U & (IData)(((QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                           >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
                                vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                                    = (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(
                                                                 (vlSelf->mem_rdata 
                                                                  >> 0x30U)))));
                            }
                        } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
                            vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                                = (QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->mem_rdata 
                                                              >> 0x20U)))));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                              >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
                            vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                                = (QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->mem_rdata 
                                                              >> 0x10U)))));
                        }
                    } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
                        vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->mem_rdata))));
                    }
                } else {
                    vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                        = ((1U & (IData)(((QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                          >> 2U))) ? 
                           ((1U & (IData)(((QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                           >> 1U)))
                             ? ((1U & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
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
                             : ((1U & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
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
                            : ((1U & (IData)(((QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                              >> 1U)))
                                ? ((1U & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
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
                                : ((1U & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
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
                } else if ((0U == (7U & (IData)((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))))))) {
                    vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->mem_rdata 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->mem_rdata)));
                } else if ((4U == (7U & (IData)((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))))))) {
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
                if ((1U & (IData)(((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                   >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                       >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
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
                    } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
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
                } else if ((1U & (IData)(((QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                          >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
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
                } else if ((1U & (~ (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) {
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
                    = ((1U & (IData)(((QData)((IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             ((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
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
                                                    & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
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
                        : ((1U & (IData)(((QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o)))) 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
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
                            : ((1U & (IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))
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

void Vnpc_onecycle___024root___eval(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___eval\n"); );
    // Body
    Vnpc_onecycle___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vnpc_onecycle___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vnpc_onecycle___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vnpc_onecycle___024root___eval_debug_assertions(Vnpc_onecycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
