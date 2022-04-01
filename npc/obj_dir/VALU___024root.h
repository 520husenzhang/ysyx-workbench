// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class VALU__Syms;
VL_MODULE(VALU___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*4:0*/ risc_v__DOT__reg1_rdata_addr;
    CData/*0:0*/ risc_v__DOT__re1;
    CData/*0:0*/ risc_v__DOT__re2;
    CData/*0:0*/ risc_v__DOT__reg_we_alu;
    CData/*4:0*/ risc_v__DOT__reg_waddr_alu;
    CData/*4:0*/ risc_v__DOT__wd_alu_mem_i;
    CData/*4:0*/ risc_v__DOT__wd_alu_mem_o;
    CData/*0:0*/ risc_v__DOT__wreg_alu_mem_o;
    CData/*4:0*/ risc_v__DOT__wd_mem_wb_i;
    CData/*0:0*/ risc_v__DOT__wreg_mem_wb_i;
    CData/*4:0*/ risc_v__DOT__wb_wd_i;
    CData/*0:0*/ risc_v__DOT__wb_wreg_i;
    CData/*0:0*/ risc_v__DOT__inst_IF__DOT__rom_ce;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ risc_v__DOT__id_inst;
    IData/*31:0*/ risc_v__DOT__inst_id;
    IData/*31:0*/ risc_v__DOT__inst_alu;
    QData/*63:0*/ risc_v__DOT__id_pc;
    QData/*63:0*/ risc_v__DOT__inst_addr_id;
    QData/*63:0*/ risc_v__DOT__reg1_op_id;
    QData/*63:0*/ risc_v__DOT__reg2_op_id;
    QData/*63:0*/ risc_v__DOT__inst_addr_alu;
    QData/*63:0*/ risc_v__DOT__reg1_op_alu;
    QData/*63:0*/ risc_v__DOT__reg2_op_alu;
    QData/*63:0*/ risc_v__DOT__wdata_alu_mem_i;
    QData/*63:0*/ risc_v__DOT__wdata_alu_mem_o;
    QData/*63:0*/ risc_v__DOT__wdata_mem_wb_i;
    QData/*63:0*/ risc_v__DOT__wb_wdata_i;
    QData/*63:0*/ risc_v__DOT__inst_IF__DOT__PC;
    VlUnpacked<IData/*31:0*/, 64> risc_v__DOT__inst_IF__DOT__inst_ROM__DOT__rom;
    VlUnpacked<QData/*63:0*/, 32> risc_v__DOT__inst_REG_files__DOT__regs;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VALU__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VALU___024root(const char* name);
    ~VALU___024root();
    VL_UNCOPYABLE(VALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(VALU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
