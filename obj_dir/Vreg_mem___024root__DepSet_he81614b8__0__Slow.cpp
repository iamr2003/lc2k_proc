// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_mem.h for the primary calling header

#include "Vreg_mem__pch.h"
#include "Vreg_mem___024root.h"

VL_ATTR_COLD void Vreg_mem___024root___eval_static(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vreg_mem___024root___eval_initial(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vreg_mem___024root___eval_final(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_mem___024root___dump_triggers__stl(Vreg_mem___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vreg_mem___024root___eval_phase__stl(Vreg_mem___024root* vlSelf);

VL_ATTR_COLD void Vreg_mem___024root___eval_settle(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vreg_mem___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("reg_mem.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vreg_mem___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_mem___024root___dump_triggers__stl(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vreg_mem___024root___ico_sequent__TOP__0(Vreg_mem___024root* vlSelf);

VL_ATTR_COLD void Vreg_mem___024root___eval_stl(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vreg_mem___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vreg_mem___024root___eval_triggers__stl(Vreg_mem___024root* vlSelf);

VL_ATTR_COLD bool Vreg_mem___024root___eval_phase__stl(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vreg_mem___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vreg_mem___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_mem___024root___dump_triggers__ico(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_mem___024root___dump_triggers__act(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_mem___024root___dump_triggers__nba(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreg_mem___024root___ctor_var_reset(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->regA = VL_RAND_RESET_I(3);
    vlSelf->regB = VL_RAND_RESET_I(3);
    vlSelf->writeReg = VL_RAND_RESET_I(3);
    vlSelf->write_enable = VL_RAND_RESET_I(1);
    vlSelf->write_val = VL_RAND_RESET_I(32);
    vlSelf->readRegA = VL_RAND_RESET_I(32);
    vlSelf->readRegB = VL_RAND_RESET_I(32);
    vlSelf->reg_mem__DOT__r0 = VL_RAND_RESET_I(32);
    vlSelf->reg_mem__DOT__r1 = VL_RAND_RESET_I(32);
    vlSelf->reg_mem__DOT__r2 = VL_RAND_RESET_I(32);
    vlSelf->reg_mem__DOT__r3 = VL_RAND_RESET_I(32);
    vlSelf->reg_mem__DOT__r4 = VL_RAND_RESET_I(32);
    vlSelf->reg_mem__DOT__r5 = VL_RAND_RESET_I(32);
    vlSelf->reg_mem__DOT__r6 = VL_RAND_RESET_I(32);
    vlSelf->reg_mem__DOT__r7 = VL_RAND_RESET_I(32);
}
