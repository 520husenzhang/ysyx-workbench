// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "verilated.h"

#include "Vrisc_v__Syms.h"
#include "Vrisc_v___024root.h"

void Vrisc_v___024root___ctor_var_reset(Vrisc_v___024root* vlSelf);

Vrisc_v___024root::Vrisc_v___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrisc_v___024root___ctor_var_reset(this);
}

void Vrisc_v___024root::__Vconfigure(Vrisc_v__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrisc_v___024root::~Vrisc_v___024root() {
}
