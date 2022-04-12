// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnpc_onecycle.h"
#include "Vnpc_onecycle__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vnpc_onecycle::Vnpc_onecycle(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vnpc_onecycle__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , rom_ce{vlSymsp->TOP.rom_ce}
    , mem_we{vlSymsp->TOP.mem_we}
    , mem_ce{vlSymsp->TOP.mem_ce}
    , inst{vlSymsp->TOP.inst}
    , mem_rdata{vlSymsp->TOP.mem_rdata}
    , pc{vlSymsp->TOP.pc}
    , mem_wdata{vlSymsp->TOP.mem_wdata}
    , mem_raddr{vlSymsp->TOP.mem_raddr}
    , mem_waddr{vlSymsp->TOP.mem_waddr}
    , rootp{&(vlSymsp->TOP)}
{
}

Vnpc_onecycle::Vnpc_onecycle(const char* _vcname__)
    : Vnpc_onecycle(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vnpc_onecycle::~Vnpc_onecycle() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vnpc_onecycle___024root___eval_initial(Vnpc_onecycle___024root* vlSelf);
void Vnpc_onecycle___024root___eval_settle(Vnpc_onecycle___024root* vlSelf);
void Vnpc_onecycle___024root___eval(Vnpc_onecycle___024root* vlSelf);
#ifdef VL_DEBUG
void Vnpc_onecycle___024root___eval_debug_assertions(Vnpc_onecycle___024root* vlSelf);
#endif  // VL_DEBUG
void Vnpc_onecycle___024root___final(Vnpc_onecycle___024root* vlSelf);

static void _eval_initial_loop(Vnpc_onecycle__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vnpc_onecycle___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vnpc_onecycle___024root___eval_settle(&(vlSymsp->TOP));
        Vnpc_onecycle___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vnpc_onecycle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnpc_onecycle::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnpc_onecycle___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vnpc_onecycle___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vnpc_onecycle::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vnpc_onecycle::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vnpc_onecycle::final() {
    Vnpc_onecycle___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vnpc_onecycle___024root__trace_init_top(Vnpc_onecycle___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnpc_onecycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc_onecycle___024root*>(voidSelf);
    Vnpc_onecycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vnpc_onecycle___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vnpc_onecycle___024root__trace_register(Vnpc_onecycle___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vnpc_onecycle::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vnpc_onecycle___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
