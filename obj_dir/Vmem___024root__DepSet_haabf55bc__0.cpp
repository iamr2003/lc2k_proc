// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem.h for the primary calling header

#include "Vmem__pch.h"
#include "Vmem__Syms.h"
#include "Vmem___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem___024root___dump_triggers__ico(Vmem___024root* vlSelf);
#endif  // VL_DEBUG

void Vmem___024root___eval_triggers__ico(Vmem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmem___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem___024root___dump_triggers__act(Vmem___024root* vlSelf);
#endif  // VL_DEBUG

void Vmem___024root___eval_triggers__act(Vmem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmem___024root___dump_triggers__act(vlSelf);
    }
#endif
}
