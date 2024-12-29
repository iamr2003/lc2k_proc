// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmem.h for the primary calling header

#ifndef VERILATED_VMEM___024ROOT_H_
#define VERILATED_VMEM___024ROOT_H_  // guard

#include "verilated.h"


class Vmem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(write_enable,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(addr,31,0);
    VL_IN(write_data,31,0);
    VL_OUT(read_data,31,0);
    IData/*31:0*/ mem__DOT____Vlvbound_h4de963a5__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 65537> mem__DOT__data;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmem___024root(Vmem__Syms* symsp, const char* v__name);
    ~Vmem___024root();
    VL_UNCOPYABLE(Vmem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
