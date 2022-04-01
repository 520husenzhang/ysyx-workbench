// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"

#include "VALU___024root.h"

VL_INLINE_OPT void VALU___024root___combo__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___combo__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->risc_v__DOT__re2 = 0U;
        vlSelf->risc_v__DOT__re1 = 0U;
    }
}

VL_INLINE_OPT void VALU___024root___sequent__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vdly__risc_v__DOT__inst_IF__DOT__PC;
    CData/*4:0*/ __Vdlyvdim0__risc_v__DOT__inst_REG_files__DOT__regs__v0;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__risc_v__DOT__inst_REG_files__DOT__regs__v0;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v2;
    CData/*0:0*/ __Vdlyvset__risc_v__DOT__inst_REG_files__DOT__regs__v2;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v3;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v4;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v5;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v6;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v7;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v8;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v9;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v10;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v11;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v12;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v13;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v14;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v15;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v16;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v17;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v18;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v19;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v20;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v21;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v22;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v23;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v24;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v25;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v26;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v27;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v28;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v29;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v30;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v31;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v32;
    QData/*63:0*/ __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v33;
    // Body
    __Vdly__risc_v__DOT__inst_IF__DOT__PC = vlSelf->risc_v__DOT__inst_IF__DOT__PC;
    __Vdlyvset__risc_v__DOT__inst_REG_files__DOT__regs__v0 = 0U;
    __Vdlyvset__risc_v__DOT__inst_REG_files__DOT__regs__v2 = 0U;
    if (vlSelf->rst_n) {
        __Vdly__risc_v__DOT__inst_IF__DOT__PC = (1ULL 
                                                 + vlSelf->risc_v__DOT__inst_IF__DOT__PC);
        vlSelf->risc_v__DOT__inst_addr_alu = vlSelf->risc_v__DOT__inst_addr_id;
        vlSelf->risc_v__DOT__id_pc = vlSelf->risc_v__DOT__inst_IF__DOT__PC;
        vlSelf->risc_v__DOT__wd_alu_mem_o = vlSelf->risc_v__DOT__wd_alu_mem_i;
        vlSelf->risc_v__DOT__wdata_alu_mem_o = vlSelf->risc_v__DOT__wdata_alu_mem_i;
        vlSelf->risc_v__DOT__reg2_op_alu = vlSelf->risc_v__DOT__reg2_op_id;
        vlSelf->risc_v__DOT__inst_alu = vlSelf->risc_v__DOT__inst_id;
        vlSelf->risc_v__DOT__reg1_op_alu = vlSelf->risc_v__DOT__reg1_op_id;
        vlSelf->risc_v__DOT__reg_waddr_alu = ((IData)(vlSelf->rst_n)
                                               ? ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->risc_v__DOT__id_inst))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->risc_v__DOT__id_inst 
                                                        >> 0xcU)))
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->risc_v__DOT__id_inst 
                                                       >> 7U))
                                                    : 0U)
                                                   : 0U)
                                               : 0U);
        vlSelf->risc_v__DOT__wreg_alu_mem_o = vlSelf->risc_v__DOT__reg_we_alu;
        if (((IData)(vlSelf->risc_v__DOT__wb_wreg_i) 
             & (0U != (IData)(vlSelf->risc_v__DOT__wb_wd_i)))) {
            __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v0 
                = vlSelf->risc_v__DOT__wb_wdata_i;
            __Vdlyvset__risc_v__DOT__inst_REG_files__DOT__regs__v0 = 1U;
            __Vdlyvdim0__risc_v__DOT__inst_REG_files__DOT__regs__v0 
                = vlSelf->risc_v__DOT__wb_wd_i;
        }
    } else {
        __Vdly__risc_v__DOT__inst_IF__DOT__PC = 0ULL;
        vlSelf->risc_v__DOT__inst_addr_alu = 0ULL;
        vlSelf->risc_v__DOT__id_pc = 0ULL;
        vlSelf->risc_v__DOT__wd_alu_mem_o = 0U;
        vlSelf->risc_v__DOT__wdata_alu_mem_o = 0ULL;
        vlSelf->risc_v__DOT__reg2_op_alu = 0ULL;
        vlSelf->risc_v__DOT__inst_alu = 0U;
        vlSelf->risc_v__DOT__reg1_op_alu = 0ULL;
        vlSelf->risc_v__DOT__reg_waddr_alu = 0U;
        vlSelf->risc_v__DOT__wreg_alu_mem_o = 0U;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v2 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvset__risc_v__DOT__inst_REG_files__DOT__regs__v2 = 1U;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v3 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v4 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v5 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v6 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v7 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v8 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v9 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v10 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v11 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v12 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v13 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v14 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v15 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v16 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v17 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v18 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v19 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v20 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v21 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v22 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v23 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v24 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v25 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v26 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v27 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v28 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v29 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v30 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v31 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v32 
            = vlSelf->risc_v__DOT__wb_wdata_i;
        __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v33 
            = vlSelf->risc_v__DOT__wb_wdata_i;
    }
    if (__Vdlyvset__risc_v__DOT__inst_REG_files__DOT__regs__v0) {
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[__Vdlyvdim0__risc_v__DOT__inst_REG_files__DOT__regs__v0] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v0;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0U] = 0ULL;
    }
    if (__Vdlyvset__risc_v__DOT__inst_REG_files__DOT__regs__v2) {
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v2;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[1U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v3;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[2U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v4;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[3U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v5;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[4U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v6;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[5U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v7;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[6U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v8;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[7U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v9;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[8U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v10;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[9U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v11;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0xaU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v12;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0xbU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v13;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0xcU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v14;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0xdU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v15;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0xeU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v16;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0xfU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v17;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x10U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v18;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x11U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v19;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x12U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v20;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x13U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v21;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x14U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v22;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x15U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v23;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x16U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v24;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x17U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v25;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x18U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v26;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x19U] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v27;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x1aU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v28;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x1bU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v29;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x1cU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v30;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x1dU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v31;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x1eU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v32;
        vlSelf->risc_v__DOT__inst_REG_files__DOT__regs[0x1fU] 
            = __Vdlyvval__risc_v__DOT__inst_REG_files__DOT__regs__v33;
    }
    if (vlSelf->rst_n) {
        vlSelf->risc_v__DOT__reg_we_alu = (IData)((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->risc_v__DOT__id_inst)));
        vlSelf->risc_v__DOT__wb_wreg_i = vlSelf->risc_v__DOT__wreg_mem_wb_i;
        vlSelf->risc_v__DOT__wb_wd_i = vlSelf->risc_v__DOT__wd_mem_wb_i;
        vlSelf->risc_v__DOT__wb_wdata_i = vlSelf->risc_v__DOT__wdata_mem_wb_i;
        vlSelf->risc_v__DOT__id_inst = ((IData)(vlSelf->risc_v__DOT__inst_IF__DOT__rom_ce)
                                         ? vlSelf->risc_v__DOT__inst_IF__DOT__inst_ROM__DOT__rom
                                        [(0x3fU & (IData)(vlSelf->risc_v__DOT__inst_IF__DOT__PC))]
                                         : 0U);
        vlSelf->risc_v__DOT__inst_IF__DOT__PC = __Vdly__risc_v__DOT__inst_IF__DOT__PC;
        vlSelf->risc_v__DOT__inst_IF__DOT__rom_ce = 1U;
    } else {
        vlSelf->risc_v__DOT__reg_we_alu = 0U;
        vlSelf->risc_v__DOT__wb_wreg_i = 0U;
        vlSelf->risc_v__DOT__wb_wd_i = 0U;
        vlSelf->risc_v__DOT__wb_wdata_i = 0ULL;
        vlSelf->risc_v__DOT__id_inst = 0U;
        vlSelf->risc_v__DOT__inst_IF__DOT__PC = __Vdly__risc_v__DOT__inst_IF__DOT__PC;
        vlSelf->risc_v__DOT__inst_IF__DOT__rom_ce = 0U;
    }
}

VL_INLINE_OPT void VALU___024root___combo__TOP__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->risc_v__DOT__inst_addr_id = ((IData)(vlSelf->rst_n)
                                          ? vlSelf->risc_v__DOT__id_pc
                                          : 0ULL);
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
        vlSelf->risc_v__DOT__wd_alu_mem_i = vlSelf->risc_v__DOT__reg_waddr_alu;
        vlSelf->risc_v__DOT__wreg_mem_wb_i = vlSelf->risc_v__DOT__wreg_alu_mem_o;
        vlSelf->risc_v__DOT__wd_mem_wb_i = vlSelf->risc_v__DOT__wd_alu_mem_o;
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
        vlSelf->risc_v__DOT__wreg_mem_wb_i = 0U;
        vlSelf->risc_v__DOT__wd_mem_wb_i = 0U;
        vlSelf->risc_v__DOT__wdata_mem_wb_i = 0ULL;
        vlSelf->risc_v__DOT__inst_id = 0U;
        vlSelf->risc_v__DOT__reg2_op_id = 0ULL;
        vlSelf->risc_v__DOT__reg1_rdata_addr = 0U;
        vlSelf->risc_v__DOT__reg1_op_id = 0ULL;
    }
}

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Body
    VALU___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VALU___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VALU___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
