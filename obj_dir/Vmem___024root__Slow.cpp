// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem.h for the primary calling header

#include "Vmem__pch.h"
#include "Vmem__Syms.h"
#include "Vmem___024root.h"

void Vmem___024root___ctor_var_reset(Vmem___024root* vlSelf);

Vmem___024root::Vmem___024root(Vmem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmem___024root___ctor_var_reset(this);
}

void Vmem___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmem___024root::~Vmem___024root() {
}
