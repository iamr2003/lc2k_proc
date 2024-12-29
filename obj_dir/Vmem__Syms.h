// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMEM__SYMS_H_
#define VERILATED_VMEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmem.h"

// INCLUDE MODULE CLASSES
#include "Vmem___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmem__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmem* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmem___024root                 TOP;

    // CONSTRUCTORS
    Vmem__Syms(VerilatedContext* contextp, const char* namep, Vmem* modelp);
    ~Vmem__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
