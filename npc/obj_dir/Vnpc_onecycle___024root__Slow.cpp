// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc_onecycle.h for the primary calling header

#include "verilated.h"

#include "Vnpc_onecycle__Syms.h"
#include "Vnpc_onecycle___024root.h"

void Vnpc_onecycle___024root___ctor_var_reset(Vnpc_onecycle___024root* vlSelf);

Vnpc_onecycle___024root::Vnpc_onecycle___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vnpc_onecycle___024root___ctor_var_reset(this);
}

void Vnpc_onecycle___024root::__Vconfigure(Vnpc_onecycle__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vnpc_onecycle___024root::~Vnpc_onecycle___024root() {
}
