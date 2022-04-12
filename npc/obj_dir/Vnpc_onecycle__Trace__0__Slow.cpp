// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc_onecycle__Syms.h"


VL_ATTR_COLD void Vnpc_onecycle___024root__trace_init_sub__TOP__0(Vnpc_onecycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+178,"clk", false,-1);
    tracep->declBit(c+179,"rst_n", false,-1);
    tracep->declBus(c+180,"inst", false,-1, 31,0);
    tracep->declQuad(c+181,"mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+183,"pc", false,-1, 63,0);
    tracep->declQuad(c+185,"rom_ce", false,-1, 63,0);
    tracep->declQuad(c+187,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+189,"mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+191,"mem_waddr", false,-1, 63,0);
    tracep->declBit(c+193,"mem_we", false,-1);
    tracep->declBit(c+194,"mem_ce", false,-1);
    tracep->pushNamePrefix("npc_onecycle ");
    tracep->declBit(c+178,"clk", false,-1);
    tracep->declBit(c+179,"rst_n", false,-1);
    tracep->declBus(c+180,"inst", false,-1, 31,0);
    tracep->declQuad(c+181,"mem_rdata", false,-1, 63,0);
    tracep->declQuad(c+183,"pc", false,-1, 63,0);
    tracep->declQuad(c+185,"rom_ce", false,-1, 63,0);
    tracep->declQuad(c+187,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+189,"mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+191,"mem_waddr", false,-1, 63,0);
    tracep->declBit(c+193,"mem_we", false,-1);
    tracep->declBit(c+194,"mem_ce", false,-1);
    tracep->declBit(c+1,"jump_flag_EX_IF", false,-1);
    tracep->declQuad(c+2,"jump_addr_EX_IF", false,-1, 63,0);
    tracep->declBus(c+180,"inst_IF_ID", false,-1, 31,0);
    tracep->declQuad(c+216,"pc_IF_ID", false,-1, 63,0);
    tracep->declBus(c+4,"reg1_raddr_ID_GEN_REGS", false,-1, 4,0);
    tracep->declBus(c+5,"reg2_raddr_ID_GEN_REGS", false,-1, 4,0);
    tracep->declBit(c+6,"reg1_read_ID_GEN_REGS", false,-1);
    tracep->declBit(c+7,"reg2_read_ID_GEN_REGS", false,-1);
    tracep->declQuad(c+8,"rdata1_ID_GEN_REGS", false,-1, 63,0);
    tracep->declQuad(c+10,"rdata2_ID_GEN_REGS", false,-1, 63,0);
    tracep->declBus(c+218,"wd_EX_GEN_REGS", false,-1, 4,0);
    tracep->declBit(c+219,"wreg_EX_GEN_REGS", false,-1);
    tracep->declQuad(c+220,"wdata_EX_GEN_REGS", false,-1, 63,0);
    tracep->declBus(c+12,"wd_MEM_GEN_REGS", false,-1, 4,0);
    tracep->declBit(c+13,"wreg_MEM_GEN_REGS", false,-1);
    tracep->declQuad(c+14,"wdata_MEM_GEN_REGS", false,-1, 63,0);
    tracep->declQuad(c+195,"csr_rdata_ID_CSR_REGS", false,-1, 63,0);
    tracep->declBus(c+16,"csr_raddr_ID_CSR_REGS", false,-1, 11,0);
    tracep->declBit(c+222,"csr_read_ID_CSR_REGS", false,-1);
    tracep->declQuad(c+17,"csr_wdata_MEM_CSR_REGS", false,-1, 63,0);
    tracep->declBit(c+19,"csr_we_MEM_CSR_REGS", false,-1);
    tracep->declQuad(c+20,"csr_waddr_MEM_CSR_REGS", false,-1, 63,0);
    tracep->declBus(c+180,"inst_ID_EX", false,-1, 31,0);
    tracep->declQuad(c+216,"inst_addr_ID_EX", false,-1, 63,0);
    tracep->declQuad(c+22,"reg1_op_ID_EX", false,-1, 63,0);
    tracep->declQuad(c+24,"reg2_op_ID_EX", false,-1, 63,0);
    tracep->declBit(c+26,"reg_we_ID_EX", false,-1);
    tracep->declBus(c+27,"reg_waddr_ID_EX", false,-1, 4,0);
    tracep->declBit(c+28,"csr_we_ID_EX", false,-1);
    tracep->declQuad(c+223,"csr_rdata_ID_EX", false,-1, 63,0);
    tracep->declQuad(c+29,"csr_waddr_ID_EX", false,-1, 63,0);
    tracep->declQuad(c+31,"mem_wdata_EX_MEM", false,-1, 63,0);
    tracep->declQuad(c+33,"mem_raddr_EX_MEM", false,-1, 63,0);
    tracep->declQuad(c+35,"mem_waddr_EX_MEM", false,-1, 63,0);
    tracep->declBit(c+37,"mem_we_EX_MEM", false,-1);
    tracep->declBit(c+38,"mem_ce_EX_MEM", false,-1);
    tracep->declBus(c+12,"wd_EX_MEM", false,-1, 4,0);
    tracep->declBit(c+13,"wreg_EX_MEM", false,-1);
    tracep->declQuad(c+39,"wdata_EX_MEM", false,-1, 63,0);
    tracep->declQuad(c+17,"csr_wdata_EX_MEM", false,-1, 63,0);
    tracep->declBit(c+19,"csr_we_EX_MEM", false,-1);
    tracep->declQuad(c+20,"csr_waddr_EX_MEM", false,-1, 63,0);
    tracep->declBus(c+180,"inst_EX", false,-1, 31,0);
    tracep->pushNamePrefix("u_CSR_REGS ");
    tracep->declBit(c+178,"clk", false,-1);
    tracep->declBit(c+179,"rst_n", false,-1);
    tracep->declBit(c+19,"we_i", false,-1);
    tracep->declQuad(c+20,"waddr_i", false,-1, 63,0);
    tracep->declQuad(c+17,"wdata_i", false,-1, 63,0);
    tracep->declBus(c+16,"raddr_i", false,-1, 11,0);
    tracep->declBit(c+222,"read_en_i", false,-1);
    tracep->declBit(c+225,"clint_we_i", false,-1);
    tracep->declQuad(c+226,"clint_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+228,"clint_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+230,"clint_raddr_i", false,-1, 63,0);
    tracep->declBit(c+92,"global_int_en_o", false,-1);
    tracep->declQuad(c+93,"clint_csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+95,"clint_csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+97,"clint_csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+99,"clint_data_o", false,-1, 63,0);
    tracep->declQuad(c+195,"csr_data_o", false,-1, 63,0);
    tracep->declArray(c+101,"cycle", false,-1, 127,0);
    tracep->declQuad(c+93,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+105,"mcause", false,-1, 63,0);
    tracep->declQuad(c+95,"mepc", false,-1, 63,0);
    tracep->declQuad(c+107,"mie", false,-1, 63,0);
    tracep->declQuad(c+97,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+109,"mscratch", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_EX ");
    tracep->declBit(c+179,"rst_n", false,-1);
    tracep->declBus(c+180,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+216,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+22,"reg1_i_op", false,-1, 63,0);
    tracep->declQuad(c+24,"reg2_i_op", false,-1, 63,0);
    tracep->declBit(c+26,"reg_we_i", false,-1);
    tracep->declBus(c+27,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+28,"csr_we_i", false,-1);
    tracep->declQuad(c+29,"csr_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+223,"csr_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+232,"int_addr_i", false,-1, 63,0);
    tracep->declBit(c+234,"int_assert_i", false,-1);
    tracep->declQuad(c+17,"csr_wdata_o", false,-1, 63,0);
    tracep->declBit(c+19,"csr_we_o", false,-1);
    tracep->declQuad(c+20,"csr_waddr_o", false,-1, 63,0);
    tracep->declBus(c+180,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+31,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+41,"mem_raddr_o", false,-1, 11,0);
    tracep->declBus(c+42,"mem_waddr_o", false,-1, 11,0);
    tracep->declBit(c+37,"mem_we_o", false,-1);
    tracep->declBit(c+38,"mem_ce_o", false,-1);
    tracep->declBus(c+12,"wd_o", false,-1, 4,0);
    tracep->declBit(c+13,"wreg_o", false,-1);
    tracep->declQuad(c+39,"wdata_o", false,-1, 63,0);
    tracep->declBit(c+235,"hold_flag_o", false,-1);
    tracep->declBit(c+1,"jump_flag_o", false,-1);
    tracep->declQuad(c+2,"jump_addr_o", false,-1, 63,0);
    tracep->declBus(c+197,"opcode", false,-1, 6,0);
    tracep->declBus(c+198,"funct3", false,-1, 2,0);
    tracep->declBus(c+199,"funct7", false,-1, 6,0);
    tracep->declBus(c+200,"rd", false,-1, 4,0);
    tracep->declBus(c+201,"rs1", false,-1, 4,0);
    tracep->declBus(c+202,"rs2", false,-1, 4,0);
    tracep->declBus(c+203,"shamt", false,-1, 5,0);
    tracep->declBus(c+204,"imm_type_i", false,-1, 11,0);
    tracep->declBus(c+43,"imm_type_s", false,-1, 11,0);
    tracep->declBus(c+44,"imm_type_sb", false,-1, 11,0);
    tracep->declBus(c+205,"imm_type_u", false,-1, 19,0);
    tracep->declBus(c+206,"imm_type_uj", false,-1, 19,0);
    tracep->declBus(c+201,"zimm", false,-1, 4,0);
    tracep->declQuad(c+45,"mem_waddr_s", false,-1, 63,0);
    tracep->declQuad(c+47,"B_jump_addr", false,-1, 63,0);
    tracep->declQuad(c+49,"op1_add_op2_res", false,-1, 63,0);
    tracep->declQuad(c+51,"op1_sub_op2_res", false,-1, 63,0);
    tracep->declBit(c+53,"op1_eq_op2", false,-1);
    tracep->declBit(c+54,"op1_compare_op2_signed", false,-1);
    tracep->declBit(c+55,"op1_compare_op2_unsigned", false,-1);
    tracep->declQuad(c+207,"sri_shift_mask", false,-1, 63,0);
    tracep->declQuad(c+56,"sr_shift_mask", false,-1, 63,0);
    tracep->declQuad(c+209,"sri_shift", false,-1, 63,0);
    tracep->declQuad(c+58,"sr_shift", false,-1, 63,0);
    tracep->declQuad(c+60,"sli_shift", false,-1, 63,0);
    tracep->declBus(c+211,"op1_lower32bit_mask", false,-1, 31,0);
    tracep->declBus(c+62,"op1_lower32bit_rlshift", false,-1, 31,0);
    tracep->declBus(c+63,"op1_lower32bit_rashift", false,-1, 31,0);
    tracep->declBus(c+64,"sllw_temp", false,-1, 31,0);
    tracep->declQuad(c+65,"sllw_temp_sext", false,-1, 63,0);
    tracep->declBus(c+67,"op1_lower32bit_srawmask", false,-1, 31,0);
    tracep->declBus(c+68,"op1_lower32bit_srlwshift", false,-1, 31,0);
    tracep->declBus(c+69,"op1_lower32bit_srawshift", false,-1, 31,0);
    tracep->declQuad(c+212,"op1_mul", false,-1, 63,0);
    tracep->declQuad(c+214,"op2_mul", false,-1, 63,0);
    tracep->declArray(c+236,"op1_op2_mul", false,-1, 127,0);
    tracep->declArray(c+70,"mul_temp", false,-1, 127,0);
    tracep->declArray(c+74,"mul_temp_invert", false,-1, 127,0);
    tracep->declQuad(c+78,"op1_div_op2_res", false,-1, 63,0);
    tracep->declQuad(c+80,"op1_rem_op2_res", false,-1, 63,0);
    tracep->declBus(c+82,"op1_div_op2_res_w", false,-1, 31,0);
    tracep->declBus(c+83,"op1_rem_op2_res_w", false,-1, 31,0);
    tracep->declQuad(c+84,"reg1_i_op_inv", false,-1, 63,0);
    tracep->declQuad(c+86,"reg2_i_op_inv", false,-1, 63,0);
    tracep->declBit(c+240,"hold_symbol", false,-1);
    tracep->declBit(c+241,"jump_symbol", false,-1);
    tracep->declBit(c+88,"inst_hold", false,-1);
    tracep->declBit(c+1,"inst_jump", false,-1);
    tracep->declQuad(c+2,"inst_jump_addr", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_GEN_REGS ");
    tracep->declBit(c+178,"clk", false,-1);
    tracep->declBit(c+179,"rst_n", false,-1);
    tracep->declBit(c+13,"we", false,-1);
    tracep->declBus(c+12,"waddr", false,-1, 4,0);
    tracep->declQuad(c+14,"wdata", false,-1, 63,0);
    tracep->declBit(c+6,"re1", false,-1);
    tracep->declBus(c+4,"raddr1", false,-1, 4,0);
    tracep->declQuad(c+8,"rdata1", false,-1, 63,0);
    tracep->declBit(c+7,"re2", false,-1);
    tracep->declBus(c+5,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+10,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+111+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ID ");
    tracep->declBit(c+179,"rst_n", false,-1);
    tracep->declBus(c+180,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+216,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+8,"reg1_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+10,"reg2_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+195,"csr_rdata_i", false,-1, 63,0);
    tracep->declBus(c+242,"inst_ex_i", false,-1, 31,0);
    tracep->declQuad(c+243,"ex_wdata_i", false,-1, 63,0);
    tracep->declBus(c+245,"ex_wd_i", false,-1, 4,0);
    tracep->declBit(c+246,"ex_wreg_i", false,-1);
    tracep->declQuad(c+247,"mem_wdata_reg_i", false,-1, 63,0);
    tracep->declBus(c+249,"mem_wd_reg_i", false,-1, 4,0);
    tracep->declBit(c+250,"mem_wreg_i", false,-1);
    tracep->declBus(c+4,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+5,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+6,"reg1_read_o", false,-1);
    tracep->declBit(c+7,"reg2_read_o", false,-1);
    tracep->declBus(c+16,"csr_raddr_o", false,-1, 11,0);
    tracep->declBit(c+222,"csr_read_o", false,-1);
    tracep->declBus(c+180,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+216,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+22,"reg1_o_op", false,-1, 63,0);
    tracep->declQuad(c+24,"reg2_o_op", false,-1, 63,0);
    tracep->declBit(c+26,"reg_we_o", false,-1);
    tracep->declBus(c+27,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+28,"csr_we_o", false,-1);
    tracep->declQuad(c+223,"csr_rdata_o", false,-1, 63,0);
    tracep->declBus(c+89,"csr_waddr_o", false,-1, 11,0);
    tracep->declBit(c+251,"hold_flag_o", false,-1);
    tracep->declBus(c+200,"rd", false,-1, 4,0);
    tracep->declBus(c+201,"rs1", false,-1, 4,0);
    tracep->declBus(c+202,"rs2", false,-1, 4,0);
    tracep->declBus(c+197,"opcode", false,-1, 6,0);
    tracep->declBus(c+198,"funct3", false,-1, 2,0);
    tracep->declBus(c+199,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_IF ");
    tracep->declBit(c+178,"clk", false,-1);
    tracep->declBit(c+179,"rst_n", false,-1);
    tracep->declBus(c+252,"hold_flag_i", false,-1, 5,0);
    tracep->declBit(c+1,"jump_flag_i", false,-1);
    tracep->declQuad(c+2,"jump_addr_i", false,-1, 63,0);
    tracep->declBus(c+180,"inst_i", false,-1, 31,0);
    tracep->declBus(c+180,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+183,"if_pc", false,-1, 63,0);
    tracep->declBit(c+175,"rom_ce", false,-1);
    tracep->declBit(c+253,"hold_flag_o", false,-1);
    tracep->declQuad(c+176,"PC", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_MEM ");
    tracep->declBit(c+179,"rst_n", false,-1);
    tracep->declBus(c+180,"inst_i", false,-1, 31,0);
    tracep->declBus(c+12,"wd_i", false,-1, 4,0);
    tracep->declBit(c+13,"wreg_i", false,-1);
    tracep->declQuad(c+39,"wdata_i", false,-1, 63,0);
    tracep->declQuad(c+31,"mem_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+33,"mem_raddr_i", false,-1, 63,0);
    tracep->declQuad(c+35,"mem_waddr_i", false,-1, 63,0);
    tracep->declBit(c+37,"mem_we_i", false,-1);
    tracep->declBit(c+38,"mem_ce_i", false,-1);
    tracep->declBit(c+19,"csr_we_i", false,-1);
    tracep->declQuad(c+20,"csr_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+17,"csr_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+181,"mem_rdata_i", false,-1, 63,0);
    tracep->declBus(c+12,"wd_o", false,-1, 4,0);
    tracep->declBit(c+13,"wreg_o", false,-1);
    tracep->declQuad(c+14,"wdata_o", false,-1, 63,0);
    tracep->declQuad(c+17,"csr_wdata_o", false,-1, 63,0);
    tracep->declBit(c+19,"csr_we_o", false,-1);
    tracep->declQuad(c+20,"csr_waddr_o", false,-1, 63,0);
    tracep->declBit(c+254,"hold_flag_o", false,-1);
    tracep->declQuad(c+187,"mem_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+189,"mem_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+191,"mem_waddr_o", false,-1, 63,0);
    tracep->declBit(c+193,"mem_we_o", false,-1);
    tracep->declBit(c+194,"mem_ce_o", false,-1);
    tracep->declBus(c+197,"opcode", false,-1, 6,0);
    tracep->declBus(c+198,"funct3", false,-1, 2,0);
    tracep->declBus(c+199,"funct7", false,-1, 6,0);
    tracep->declBus(c+200,"rd", false,-1, 4,0);
    tracep->declBus(c+201,"rs1", false,-1, 4,0);
    tracep->declBus(c+202,"rs2", false,-1, 4,0);
    tracep->declBus(c+90,"raddr_mem_index", false,-1, 2,0);
    tracep->declBus(c+91,"waddr_mem_index", false,-1, 2,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vnpc_onecycle___024root__trace_init_top(Vnpc_onecycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root__trace_init_top\n"); );
    // Body
    Vnpc_onecycle___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vnpc_onecycle___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vnpc_onecycle___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vnpc_onecycle___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vnpc_onecycle___024root__trace_register(Vnpc_onecycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vnpc_onecycle___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vnpc_onecycle___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vnpc_onecycle___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vnpc_onecycle___024root__trace_full_sub_0(Vnpc_onecycle___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vnpc_onecycle___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root__trace_full_top_0\n"); );
    // Init
    Vnpc_onecycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc_onecycle___024root*>(voidSelf);
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vnpc_onecycle___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vnpc_onecycle___024root__trace_full_sub_0(Vnpc_onecycle___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_onecycle___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_h0c4231f9__0;
    VlWide<4>/*127:0*/ __Vtemp_h3780105a__0;
    // Body
    tracep->fullBit(oldp+1,(vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump));
    tracep->fullQData(oldp+2,(vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_jump_addr),64);
    tracep->fullCData(oldp+4,(vlSelf->npc_onecycle__DOT__reg1_raddr_ID_GEN_REGS),5);
    tracep->fullCData(oldp+5,(vlSelf->npc_onecycle__DOT__reg2_raddr_ID_GEN_REGS),5);
    tracep->fullBit(oldp+6,(vlSelf->npc_onecycle__DOT__reg1_read_ID_GEN_REGS));
    tracep->fullBit(oldp+7,(vlSelf->npc_onecycle__DOT__reg2_read_ID_GEN_REGS));
    tracep->fullQData(oldp+8,(vlSelf->npc_onecycle__DOT__rdata1_ID_GEN_REGS),64);
    tracep->fullQData(oldp+10,(vlSelf->npc_onecycle__DOT__rdata2_ID_GEN_REGS),64);
    tracep->fullCData(oldp+12,(vlSelf->npc_onecycle__DOT__wd_EX_MEM),5);
    tracep->fullBit(oldp+13,(vlSelf->npc_onecycle__DOT__wreg_EX_MEM));
    tracep->fullQData(oldp+14,(vlSelf->npc_onecycle__DOT__wdata_MEM_GEN_REGS),64);
    tracep->fullSData(oldp+16,(vlSelf->npc_onecycle__DOT__csr_raddr_ID_CSR_REGS),12);
    tracep->fullQData(oldp+17,(vlSelf->npc_onecycle__DOT__csr_wdata_EX_MEM),64);
    tracep->fullBit(oldp+19,(vlSelf->npc_onecycle__DOT__csr_we_EX_MEM));
    tracep->fullQData(oldp+20,(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM),64);
    tracep->fullQData(oldp+22,(vlSelf->npc_onecycle__DOT__reg1_op_ID_EX),64);
    tracep->fullQData(oldp+24,(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX),64);
    tracep->fullBit(oldp+26,(vlSelf->npc_onecycle__DOT__reg_we_ID_EX));
    tracep->fullCData(oldp+27,(vlSelf->npc_onecycle__DOT__reg_waddr_ID_EX),5);
    tracep->fullBit(oldp+28,(vlSelf->npc_onecycle__DOT__csr_we_ID_EX));
    tracep->fullQData(oldp+29,((QData)((IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_ID__csr_waddr_o))),64);
    tracep->fullQData(oldp+31,(vlSelf->npc_onecycle__DOT__mem_wdata_EX_MEM),64);
    tracep->fullQData(oldp+33,((QData)((IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))),64);
    tracep->fullQData(oldp+35,((QData)((IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o))),64);
    tracep->fullBit(oldp+37,(vlSelf->npc_onecycle__DOT__mem_we_EX_MEM));
    tracep->fullBit(oldp+38,(vlSelf->npc_onecycle__DOT__mem_ce_EX_MEM));
    tracep->fullQData(oldp+39,(vlSelf->npc_onecycle__DOT__wdata_EX_MEM),64);
    tracep->fullSData(oldp+41,(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o),12);
    tracep->fullSData(oldp+42,(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o),12);
    tracep->fullSData(oldp+43,(vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_s),12);
    tracep->fullSData(oldp+44,(vlSelf->npc_onecycle__DOT__u_EX__DOT__imm_type_sb),12);
    tracep->fullQData(oldp+45,(vlSelf->npc_onecycle__DOT__u_EX__DOT__mem_waddr_s),64);
    tracep->fullQData(oldp+47,(vlSelf->npc_onecycle__DOT__u_EX__DOT__B_jump_addr),64);
    tracep->fullQData(oldp+49,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_add_op2_res),64);
    tracep->fullQData(oldp+51,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_sub_op2_res),64);
    tracep->fullBit(oldp+53,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_eq_op2));
    tracep->fullBit(oldp+54,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_signed));
    tracep->fullBit(oldp+55,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_compare_op2_unsigned));
    tracep->fullQData(oldp+56,((0xffffffffffffffffULL 
                                >> (0x3fU & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX)))),64);
    tracep->fullQData(oldp+58,(vlSelf->npc_onecycle__DOT__u_EX__DOT__sr_shift),64);
    tracep->fullQData(oldp+60,(vlSelf->npc_onecycle__DOT__u_EX__DOT__sli_shift),64);
    tracep->fullIData(oldp+62,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rlshift),32);
    tracep->fullIData(oldp+63,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_rashift),32);
    tracep->fullIData(oldp+64,(vlSelf->npc_onecycle__DOT__u_EX__DOT__sllw_temp),32);
    tracep->fullQData(oldp+65,((((QData)((IData)((- (IData)(
                                                            (vlSelf->npc_onecycle__DOT__u_EX__DOT__sllw_temp 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->npc_onecycle__DOT__u_EX__DOT__sllw_temp)))),64);
    tracep->fullIData(oldp+67,((~ (0xffffffffU >> (0x1fU 
                                                   & (IData)(vlSelf->npc_onecycle__DOT__reg2_op_ID_EX))))),32);
    tracep->fullIData(oldp+68,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srlwshift),32);
    tracep->fullIData(oldp+69,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_lower32bit_srawshift),32);
    tracep->fullWData(oldp+70,(vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp),128);
    __Vtemp_hc961b8db__0[0U] = 1U;
    __Vtemp_hc961b8db__0[1U] = 0U;
    __Vtemp_hc961b8db__0[2U] = 0U;
    __Vtemp_hc961b8db__0[3U] = 0U;
    __Vtemp_h0c4231f9__0[0U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[0U]);
    __Vtemp_h0c4231f9__0[1U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[1U]);
    __Vtemp_h0c4231f9__0[2U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[2U]);
    __Vtemp_h0c4231f9__0[3U] = (~ vlSelf->npc_onecycle__DOT__u_EX__DOT__mul_temp[3U]);
    VL_ADD_W(4, __Vtemp_h3780105a__0, __Vtemp_hc961b8db__0, __Vtemp_h0c4231f9__0);
    tracep->fullWData(oldp+74,(__Vtemp_h3780105a__0),128);
    tracep->fullQData(oldp+78,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res),64);
    tracep->fullQData(oldp+80,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res),64);
    tracep->fullIData(oldp+82,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_div_op2_res_w),32);
    tracep->fullIData(oldp+83,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_rem_op2_res_w),32);
    tracep->fullQData(oldp+84,((1ULL + (~ vlSelf->npc_onecycle__DOT__reg1_op_ID_EX))),64);
    tracep->fullQData(oldp+86,((1ULL + (~ vlSelf->npc_onecycle__DOT__reg2_op_ID_EX))),64);
    tracep->fullBit(oldp+88,(vlSelf->npc_onecycle__DOT__u_EX__DOT__inst_hold));
    tracep->fullSData(oldp+89,(vlSelf->npc_onecycle__DOT____Vcellout__u_ID__csr_waddr_o),12);
    tracep->fullCData(oldp+90,((7U & (IData)((QData)((IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_raddr_o))))),3);
    tracep->fullCData(oldp+91,((7U & (IData)((QData)((IData)(vlSelf->npc_onecycle__DOT____Vcellout__u_EX__mem_waddr_o))))),3);
    tracep->fullBit(oldp+92,((1U & (IData)((vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mstatus 
                                            >> 3U)))));
    tracep->fullQData(oldp+93,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mtvec),64);
    tracep->fullQData(oldp+95,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mepc),64);
    tracep->fullQData(oldp+97,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mstatus),64);
    tracep->fullQData(oldp+99,(((((0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i)) 
                                  == (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i))) 
                                 & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_we_i))
                                 ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_wdata_i
                                 : ((0xc00U == (0xfffU 
                                                & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i)))
                                     ? (QData)((IData)(
                                                       vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle[0U]))
                                     : ((0x305U == 
                                         (0xfffU & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i)))
                                         ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mtvec
                                         : ((0x342U 
                                             == (0xfffU 
                                                 & (IData)(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i)))
                                             ? vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mcause
                                             : ((0x341U 
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
    tracep->fullWData(oldp+101,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__cycle),128);
    tracep->fullQData(oldp+105,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mcause),64);
    tracep->fullQData(oldp+107,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mie),64);
    tracep->fullQData(oldp+109,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__mscratch),64);
    tracep->fullQData(oldp+111,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[0]),64);
    tracep->fullQData(oldp+113,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[1]),64);
    tracep->fullQData(oldp+115,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[2]),64);
    tracep->fullQData(oldp+117,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[3]),64);
    tracep->fullQData(oldp+119,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[4]),64);
    tracep->fullQData(oldp+121,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[5]),64);
    tracep->fullQData(oldp+123,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[6]),64);
    tracep->fullQData(oldp+125,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[7]),64);
    tracep->fullQData(oldp+127,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[8]),64);
    tracep->fullQData(oldp+129,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[9]),64);
    tracep->fullQData(oldp+131,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[10]),64);
    tracep->fullQData(oldp+133,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[11]),64);
    tracep->fullQData(oldp+135,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[12]),64);
    tracep->fullQData(oldp+137,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[13]),64);
    tracep->fullQData(oldp+139,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[14]),64);
    tracep->fullQData(oldp+141,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[15]),64);
    tracep->fullQData(oldp+143,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[16]),64);
    tracep->fullQData(oldp+145,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[17]),64);
    tracep->fullQData(oldp+147,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[18]),64);
    tracep->fullQData(oldp+149,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[19]),64);
    tracep->fullQData(oldp+151,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[20]),64);
    tracep->fullQData(oldp+153,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[21]),64);
    tracep->fullQData(oldp+155,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[22]),64);
    tracep->fullQData(oldp+157,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[23]),64);
    tracep->fullQData(oldp+159,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[24]),64);
    tracep->fullQData(oldp+161,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[25]),64);
    tracep->fullQData(oldp+163,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[26]),64);
    tracep->fullQData(oldp+165,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[27]),64);
    tracep->fullQData(oldp+167,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[28]),64);
    tracep->fullQData(oldp+169,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[29]),64);
    tracep->fullQData(oldp+171,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[30]),64);
    tracep->fullQData(oldp+173,(vlSelf->npc_onecycle__DOT__u_GEN_REGS__DOT__regs[31]),64);
    tracep->fullBit(oldp+175,(vlSelf->npc_onecycle__DOT____Vcellout__u_IF__rom_ce));
    tracep->fullQData(oldp+176,(vlSelf->npc_onecycle__DOT__u_IF__DOT__PC),64);
    tracep->fullBit(oldp+178,(vlSelf->clk));
    tracep->fullBit(oldp+179,(vlSelf->rst_n));
    tracep->fullIData(oldp+180,(vlSelf->inst),32);
    tracep->fullQData(oldp+181,(vlSelf->mem_rdata),64);
    tracep->fullQData(oldp+183,(vlSelf->pc),64);
    tracep->fullQData(oldp+185,(vlSelf->rom_ce),64);
    tracep->fullQData(oldp+187,(vlSelf->mem_wdata),64);
    tracep->fullQData(oldp+189,(vlSelf->mem_raddr),64);
    tracep->fullQData(oldp+191,(vlSelf->mem_waddr),64);
    tracep->fullBit(oldp+193,(vlSelf->mem_we));
    tracep->fullBit(oldp+194,(vlSelf->mem_ce));
    tracep->fullQData(oldp+195,(((((0xfffU & (IData)(vlSelf->npc_onecycle__DOT__csr_waddr_EX_MEM)) 
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
    tracep->fullCData(oldp+197,((0x7fU & vlSelf->inst)),7);
    tracep->fullCData(oldp+198,((7U & (vlSelf->inst 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+199,((vlSelf->inst >> 0x19U)),7);
    tracep->fullCData(oldp+200,((0x1fU & (vlSelf->inst 
                                          >> 7U))),5);
    tracep->fullCData(oldp+201,((0x1fU & (vlSelf->inst 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+202,((0x1fU & (vlSelf->inst 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+203,((0x3fU & (vlSelf->inst 
                                          >> 0x14U))),6);
    tracep->fullSData(oldp+204,((vlSelf->inst >> 0x14U)),12);
    tracep->fullIData(oldp+205,((vlSelf->inst >> 0xcU)),20);
    tracep->fullIData(oldp+206,(((0x80000U & (vlSelf->inst 
                                              >> 0xcU)) 
                                 | ((0x7f800U & (vlSelf->inst 
                                                 >> 1U)) 
                                    | ((0x400U & (vlSelf->inst 
                                                  >> 0xaU)) 
                                       | (0x3ffU & 
                                          (vlSelf->inst 
                                           >> 0x15U)))))),20);
    tracep->fullQData(oldp+207,((0xffffffffffffffffULL 
                                 >> (0x3fU & (vlSelf->inst 
                                              >> 0x14U)))),64);
    tracep->fullQData(oldp+209,((vlSelf->npc_onecycle__DOT__reg1_op_ID_EX 
                                 >> (0x3fU & (vlSelf->inst 
                                              >> 0x14U)))),64);
    tracep->fullIData(oldp+211,((~ ((0x1fU >= (0x3fU 
                                               & (vlSelf->inst 
                                                  >> 0x14U)))
                                     ? (0xffffffffU 
                                        >> (0x3fU & 
                                            (vlSelf->inst 
                                             >> 0x14U)))
                                     : 0U))),32);
    tracep->fullQData(oldp+212,(((IData)((0x2000033U 
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
    tracep->fullQData(oldp+214,(((IData)((0x2000033U 
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
    tracep->fullQData(oldp+216,(vlSelf->npc_onecycle__DOT__pc_IF_ID),64);
    tracep->fullCData(oldp+218,(vlSelf->npc_onecycle__DOT__wd_EX_GEN_REGS),5);
    tracep->fullBit(oldp+219,(vlSelf->npc_onecycle__DOT__wreg_EX_GEN_REGS));
    tracep->fullQData(oldp+220,(vlSelf->npc_onecycle__DOT__wdata_EX_GEN_REGS),64);
    tracep->fullBit(oldp+222,(vlSelf->npc_onecycle__DOT__csr_read_ID_CSR_REGS));
    tracep->fullQData(oldp+223,(vlSelf->npc_onecycle__DOT__csr_rdata_ID_EX),64);
    tracep->fullBit(oldp+225,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_we_i));
    tracep->fullQData(oldp+226,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_waddr_i),64);
    tracep->fullQData(oldp+228,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_wdata_i),64);
    tracep->fullQData(oldp+230,(vlSelf->npc_onecycle__DOT__u_CSR_REGS__DOT__clint_raddr_i),64);
    tracep->fullQData(oldp+232,(vlSelf->npc_onecycle__DOT__u_EX__DOT__int_addr_i),64);
    tracep->fullBit(oldp+234,(vlSelf->npc_onecycle__DOT__u_EX__DOT__int_assert_i));
    tracep->fullBit(oldp+235,(vlSelf->npc_onecycle__DOT__u_EX__DOT__hold_flag_o));
    tracep->fullWData(oldp+236,(vlSelf->npc_onecycle__DOT__u_EX__DOT__op1_op2_mul),128);
    tracep->fullBit(oldp+240,(vlSelf->npc_onecycle__DOT__u_EX__DOT__hold_symbol));
    tracep->fullBit(oldp+241,(vlSelf->npc_onecycle__DOT__u_EX__DOT__jump_symbol));
    tracep->fullIData(oldp+242,(vlSelf->npc_onecycle__DOT__u_ID__DOT__inst_ex_i),32);
    tracep->fullQData(oldp+243,(vlSelf->npc_onecycle__DOT__u_ID__DOT__ex_wdata_i),64);
    tracep->fullCData(oldp+245,(vlSelf->npc_onecycle__DOT__u_ID__DOT__ex_wd_i),5);
    tracep->fullBit(oldp+246,(vlSelf->npc_onecycle__DOT__u_ID__DOT__ex_wreg_i));
    tracep->fullQData(oldp+247,(vlSelf->npc_onecycle__DOT__u_ID__DOT__mem_wdata_reg_i),64);
    tracep->fullCData(oldp+249,(vlSelf->npc_onecycle__DOT__u_ID__DOT__mem_wd_reg_i),5);
    tracep->fullBit(oldp+250,(vlSelf->npc_onecycle__DOT__u_ID__DOT__mem_wreg_i));
    tracep->fullBit(oldp+251,(vlSelf->npc_onecycle__DOT__u_ID__DOT__hold_flag_o));
    tracep->fullCData(oldp+252,(vlSelf->npc_onecycle__DOT__u_IF__DOT__hold_flag_i),6);
    tracep->fullBit(oldp+253,(vlSelf->npc_onecycle__DOT__u_IF__DOT__hold_flag_o));
    tracep->fullBit(oldp+254,(vlSelf->npc_onecycle__DOT__u_MEM__DOT__hold_flag_o));
}
