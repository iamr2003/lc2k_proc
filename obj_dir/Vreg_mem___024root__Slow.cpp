// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_mem.h for the primary calling header

#include "Vreg_mem__pch.h"
#include "Vreg_mem__Syms.h"
#include "Vreg_mem___024root.h"

void Vreg_mem___024root___ctor_var_reset(Vreg_mem___024root* vlSelf);

Vreg_mem___024root::Vreg_mem___024root(Vreg_mem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vreg_mem___024root___ctor_var_reset(this);
}

void Vreg_mem___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vreg_mem___024root::~Vreg_mem___024root() {
}
