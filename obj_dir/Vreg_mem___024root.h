// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreg_mem.h for the primary calling header

#ifndef VERILATED_VREG_MEM___024ROOT_H_
#define VERILATED_VREG_MEM___024ROOT_H_  // guard

#include "verilated.h"


class Vreg_mem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vreg_mem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(regA,2,0);
    VL_IN8(regB,2,0);
    VL_IN8(writeReg,2,0);
    VL_IN8(write_enable,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(write_val,31,0);
    VL_OUT(readRegA,31,0);
    VL_OUT(readRegB,31,0);
    IData/*31:0*/ reg_mem__DOT__r0;
    IData/*31:0*/ reg_mem__DOT__r1;
    IData/*31:0*/ reg_mem__DOT__r2;
    IData/*31:0*/ reg_mem__DOT__r3;
    IData/*31:0*/ reg_mem__DOT__r4;
    IData/*31:0*/ reg_mem__DOT__r5;
    IData/*31:0*/ reg_mem__DOT__r6;
    IData/*31:0*/ reg_mem__DOT__r7;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vreg_mem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vreg_mem___024root(Vreg_mem__Syms* symsp, const char* v__name);
    ~Vreg_mem___024root();
    VL_UNCOPYABLE(Vreg_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
