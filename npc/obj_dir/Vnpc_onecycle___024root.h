// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc_onecycle.h for the primary calling header

#ifndef VERILATED_VNPC_ONECYCLE___024ROOT_H_
#define VERILATED_VNPC_ONECYCLE___024ROOT_H_  // guard

#include "verilated.h"

class Vnpc_onecycle__Syms;
VL_MODULE(Vnpc_onecycle___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_OUT8(mem_we,0,0);
        VL_OUT8(mem_ce,0,0);
        CData/*4:0*/ npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS;
        CData/*4:0*/ npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS;
        CData/*0:0*/ npc_onecycle__DOT__reg1_read_ID_GEN_REGS;
        CData/*0:0*/ npc_onecycle__DOT__reg2_read_ID_GEN_REGS;
        CData/*4:0*/ npc_onecycle__DOT__wd_EX_GEN_REGS;
        CData/*0:0*/ npc_onecycle__DOT__wreg_EX_GEN_REGS;
        CData/*0:0*/ npc_onecycle__DOT__csr_read_ID_CSR_REGS;
        CData/*0:0*/ npc_onecycle__DOT__reg_we_ID_EX;
        CData/*4:0*/ npc_onecycle__DOT__reg_waddr_ID_EX;
        CData/*0:0*/ npc_onecycle__DOT__csr_we_ID_EX;
        CData/*0:0*/ npc_onecycle__DOT__mem_we_EX_MEM;
        CData/*0:0*/ npc_onecycle__DOT__mem_ce_EX_MEM;
        CData/*4:0*/ npc_onecycle__DOT__wd_EX_MEM;
        CData/*0:0*/ npc_onecycle__DOT__wreg_EX_MEM;
        CData/*0:0*/ npc_onecycle__DOT__csr_we_EX_MEM;
        CData/*0:0*/ npc_onecycle__DOT____Vcellout__u_IF__rom_ce;
        CData/*5:0*/ npc_onecycle__DOT__u_IF__DOT__hold_flag_i;
        CData/*0:0*/ npc_onecycle__DOT__u_IF__DOT__hold_flag_o;
        CData/*4:0*/ npc_onecycle__DOT__u_ID__DOT__ex_wd_i;
        CData/*0:0*/ npc_onecycle__DOT__u_ID__DOT__ex_wreg_i;
        CData/*4:0*/ npc_onecycle__DOT__u_ID__DOT__mem_wd_reg_i;
        CData/*0:0*/ npc_onecycle__DOT__u_ID__DOT__mem_wreg_i;
        CData/*0:0*/ npc_onecycle__DOT__u_ID__DOT__hold_flag_o;
        CData/*0:0*/ npc_onecycle__DOT__u_EX__DOT__int_assert_i;
        CData/*0:0*/ npc_onecycle__DOT__u_EX__DOT__hold_flag_o;
        CData/*0:0*/ npc_onecycle__DOT__u_EX__DOT__op1_eq_op2;
        CData/*0:0*/ npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed;
        CData/*0:0*/ npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned;
        CData/*0:0*/ npc_onecycle__DOT__u_EX__DOT__hold_symbol;
        CData/*0:0*/ npc_onecycle__DOT__u_EX__DOT__jump_symbol;
        CData/*0:0*/ npc_onecycle__DOT__u_EX__DOT__inst_hold;
        CData/*0:0*/ npc_onecycle__DOT__u_EX__DOT__inst_jump;
        CData/*0:0*/ npc_onecycle__DOT__u_CSR_REGS__DOT__clint_we_i;
        CData/*0:0*/ npc_onecycle__DOT__u_MEM__DOT__hold_flag_o;
        CData/*0:0*/ __Vclklast__TOP__clk;
        SData/*11:0*/ npc_onecycle__DOT__csr_raddr_ID_CSR_REGS;
        SData/*11:0*/ npc_onecycle__DOT__u_EX__DOT__imm_type_s;
        SData/*11:0*/ npc_onecycle__DOT__u_EX__DOT__imm_type_sb;
        VL_IN(inst,31,0);
        IData/*31:0*/ npc_onecycle__DOT__u_ID__DOT__inst_ex_i;
        IData/*31:0*/ npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rlshift;
        IData/*31:0*/ npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rashift;
        IData/*31:0*/ npc_onecycle__DOT__u_EX__DOT__sllw_temp;
        IData/*31:0*/ npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srlwshift;
        IData/*31:0*/ npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srawshift;
        VlWide<4>/*127:0*/ npc_onecycle__DOT__u_EX__DOT__op1_op2_mul;
        VlWide<4>/*127:0*/ npc_onecycle__DOT__u_EX__DOT__mul_temp;
        IData/*31:0*/ npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w;
        IData/*31:0*/ npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w;
        VlWide<4>/*127:0*/ npc_onecycle__DOT__u_CSR_REGS__DOT__cycle;
        VL_IN64(mem_rdata,63,0);
        VL_OUT64(pc,63,0);
        VL_OUT64(rom_ce,63,0);
        VL_OUT64(mem_wdata,63,0);
        VL_OUT64(mem_raddr,63,0);
        VL_OUT64(mem_waddr,63,0);
        QData/*63:0*/ npc_onecycle__DOT__pc_IF_ID;
        QData/*63:0*/ npc_onecycle__DOT__rdata1_ID_GEN_REGS;
        QData/*63:0*/ npc_onecycle__DOT__rdata2_ID_GEN_REGS;
        QData/*63:0*/ npc_onecycle__DOT__wdata_EX_GEN_REGS;
    };
    struct {
        QData/*63:0*/ npc_onecycle__DOT__wdata_MEM_GEN_REGS;
        QData/*63:0*/ npc_onecycle__DOT__reg1_op_ID_EX;
        QData/*63:0*/ npc_onecycle__DOT__reg2_op_ID_EX;
        QData/*63:0*/ npc_onecycle__DOT__csr_rdata_ID_EX;
        QData/*63:0*/ npc_onecycle__DOT__csr_waddr_ID_EX;
        QData/*63:0*/ npc_onecycle__DOT__mem_wdata_EX_MEM;
        QData/*63:0*/ npc_onecycle__DOT__mem_raddr_EX_MEM;
        QData/*63:0*/ npc_onecycle__DOT__mem_waddr_EX_MEM;
        QData/*63:0*/ npc_onecycle__DOT__wdata_EX_MEM;
        QData/*63:0*/ npc_onecycle__DOT__csr_wdata_EX_MEM;
        QData/*63:0*/ npc_onecycle__DOT__csr_waddr_EX_MEM;
        QData/*63:0*/ npc_onecycle__DOT__u_IF__DOT__PC;
        QData/*63:0*/ npc_onecycle__DOT__u_ID__DOT__ex_wdata_i;
        QData/*63:0*/ npc_onecycle__DOT__u_ID__DOT__mem_wdata_reg_i;
        QData/*63:0*/ npc_onecycle__DOT__u_EX__DOT__int_addr_i;
        QData/*63:0*/ npc_onecycle__DOT__u_EX__DOT__mem_waddr_s;
        QData/*63:0*/ npc_onecycle__DOT__u_EX__DOT__B_jump_addr;
        QData/*63:0*/ npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res;
        QData/*63:0*/ npc_onecycle__DOT__u_EX__DOT__op1_sub_op2_res;
        QData/*63:0*/ npc_onecycle__DOT__u_EX__DOT__sr_shift;
        QData/*63:0*/ npc_onecycle__DOT__u_EX__DOT__sli_shift;
        QData/*63:0*/ npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res;
        QData/*63:0*/ npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res;
        QData/*63:0*/ npc_onecycle__DOT__u_EX__DOT__inst_jump_addr;
        QData/*63:0*/ npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i;
        QData/*63:0*/ npc_onecycle__DOT__u_CSR_REGS__DOT__clint_wdata_i;
        QData/*63:0*/ npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i;
        QData/*63:0*/ npc_onecycle__DOT__u_CSR_REGS__DOT__mtvec;
        QData/*63:0*/ npc_onecycle__DOT__u_CSR_REGS__DOT__mcause;
        QData/*63:0*/ npc_onecycle__DOT__u_CSR_REGS__DOT__mepc;
        QData/*63:0*/ npc_onecycle__DOT__u_CSR_REGS__DOT__mie;
        QData/*63:0*/ npc_onecycle__DOT__u_CSR_REGS__DOT__mstatus;
        QData/*63:0*/ npc_onecycle__DOT__u_CSR_REGS__DOT__mscratch;
        VlUnpacked<QData/*63:0*/, 32> npc_onecycle__DOT__u_GEN_REGS__DOT__regs;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vnpc_onecycle__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vnpc_onecycle___024root(const char* name);
    ~Vnpc_onecycle___024root();
    VL_UNCOPYABLE(Vnpc_onecycle___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vnpc_onecycle__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
