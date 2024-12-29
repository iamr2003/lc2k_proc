// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_mem.h for the primary calling header

#include "Vreg_mem__pch.h"
#include "Vreg_mem___024root.h"

void Vreg_mem___024root___ico_sequent__TOP__0(Vreg_mem___024root* vlSelf);

void Vreg_mem___024root___eval_ico(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vreg_mem___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vreg_mem___024root___ico_sequent__TOP__0(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.write_enable) {
        if ((1U & (~ ((IData)(vlSelfRef.writeReg) >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.writeReg) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.writeReg))) {
                    vlSelfRef.reg_mem__DOT__r1 = vlSelfRef.write_val;
                }
                if ((1U & (~ (IData)(vlSelfRef.writeReg)))) {
                    vlSelfRef.reg_mem__DOT__r0 = vlSelfRef.write_val;
                }
            }
            if ((2U & (IData)(vlSelfRef.writeReg))) {
                if ((1U & (IData)(vlSelfRef.writeReg))) {
                    vlSelfRef.reg_mem__DOT__r3 = vlSelfRef.write_val;
                }
                if ((1U & (~ (IData)(vlSelfRef.writeReg)))) {
                    vlSelfRef.reg_mem__DOT__r2 = vlSelfRef.write_val;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.writeReg))) {
            if ((2U & (IData)(vlSelfRef.writeReg))) {
                if ((1U & (IData)(vlSelfRef.writeReg))) {
                    vlSelfRef.reg_mem__DOT__r7 = vlSelfRef.write_val;
                }
                if ((1U & (~ (IData)(vlSelfRef.writeReg)))) {
                    vlSelfRef.reg_mem__DOT__r6 = vlSelfRef.write_val;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.writeReg) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.writeReg))) {
                    vlSelfRef.reg_mem__DOT__r5 = vlSelfRef.write_val;
                }
                if ((1U & (~ (IData)(vlSelfRef.writeReg)))) {
                    vlSelfRef.reg_mem__DOT__r4 = vlSelfRef.write_val;
                }
            }
        }
    }
    vlSelfRef.readRegA = ((4U & (IData)(vlSelfRef.regA))
                           ? ((2U & (IData)(vlSelfRef.regA))
                               ? ((1U & (IData)(vlSelfRef.regA))
                                   ? vlSelfRef.reg_mem__DOT__r7
                                   : vlSelfRef.reg_mem__DOT__r6)
                               : ((1U & (IData)(vlSelfRef.regA))
                                   ? vlSelfRef.reg_mem__DOT__r5
                                   : vlSelfRef.reg_mem__DOT__r4))
                           : ((2U & (IData)(vlSelfRef.regA))
                               ? ((1U & (IData)(vlSelfRef.regA))
                                   ? vlSelfRef.reg_mem__DOT__r3
                                   : vlSelfRef.reg_mem__DOT__r2)
                               : ((1U & (IData)(vlSelfRef.regA))
                                   ? vlSelfRef.reg_mem__DOT__r1
                                   : vlSelfRef.reg_mem__DOT__r0)));
    vlSelfRef.readRegB = ((4U & (IData)(vlSelfRef.regB))
                           ? ((2U & (IData)(vlSelfRef.regB))
                               ? ((1U & (IData)(vlSelfRef.regB))
                                   ? vlSelfRef.reg_mem__DOT__r7
                                   : vlSelfRef.reg_mem__DOT__r6)
                               : ((1U & (IData)(vlSelfRef.regB))
                                   ? vlSelfRef.reg_mem__DOT__r5
                                   : vlSelfRef.reg_mem__DOT__r4))
                           : ((2U & (IData)(vlSelfRef.regB))
                               ? ((1U & (IData)(vlSelfRef.regB))
                                   ? vlSelfRef.reg_mem__DOT__r3
                                   : vlSelfRef.reg_mem__DOT__r2)
                               : ((1U & (IData)(vlSelfRef.regB))
                                   ? vlSelfRef.reg_mem__DOT__r1
                                   : vlSelfRef.reg_mem__DOT__r0)));
}

void Vreg_mem___024root___eval_triggers__ico(Vreg_mem___024root* vlSelf);

bool Vreg_mem___024root___eval_phase__ico(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vreg_mem___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vreg_mem___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vreg_mem___024root___eval_act(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vreg_mem___024root___eval_nba(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vreg_mem___024root___eval_triggers__act(Vreg_mem___024root* vlSelf);

bool Vreg_mem___024root___eval_phase__act(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vreg_mem___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vreg_mem___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vreg_mem___024root___eval_phase__nba(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vreg_mem___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_mem___024root___dump_triggers__ico(Vreg_mem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_mem___024root___dump_triggers__nba(Vreg_mem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_mem___024root___dump_triggers__act(Vreg_mem___024root* vlSelf);
#endif  // VL_DEBUG

void Vreg_mem___024root___eval(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vreg_mem___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("reg_mem.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vreg_mem___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vreg_mem___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("reg_mem.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vreg_mem___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("reg_mem.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vreg_mem___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vreg_mem___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vreg_mem___024root___eval_debug_assertions(Vreg_mem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vreg_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_mem___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.regA & 0xf8U))) {
        Verilated::overWidthError("regA");}
    if (VL_UNLIKELY((vlSelfRef.regB & 0xf8U))) {
        Verilated::overWidthError("regB");}
    if (VL_UNLIKELY((vlSelfRef.writeReg & 0xf8U))) {
        Verilated::overWidthError("writeReg");}
    if (VL_UNLIKELY((vlSelfRef.write_enable & 0xfeU))) {
        Verilated::overWidthError("write_enable");}
}
#endif  // VL_DEBUG
