// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREG_MEM__SYMS_H_
#define VERILATED_VREG_MEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vreg_mem.h"

// INCLUDE MODULE CLASSES
#include "Vreg_mem___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vreg_mem__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vreg_mem* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vreg_mem___024root             TOP;

    // CONSTRUCTORS
    Vreg_mem__Syms(VerilatedContext* contextp, const char* namep, Vreg_mem* modelp);
    ~Vreg_mem__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
