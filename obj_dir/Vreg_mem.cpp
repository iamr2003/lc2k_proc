// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vreg_mem__pch.h"

//============================================================
// Constructors

Vreg_mem::Vreg_mem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vreg_mem__Syms(contextp(), _vcname__, this)}
    , regA{vlSymsp->TOP.regA}
    , regB{vlSymsp->TOP.regB}
    , writeReg{vlSymsp->TOP.writeReg}
    , write_enable{vlSymsp->TOP.write_enable}
    , write_val{vlSymsp->TOP.write_val}
    , readRegA{vlSymsp->TOP.readRegA}
    , readRegB{vlSymsp->TOP.readRegB}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vreg_mem::Vreg_mem(const char* _vcname__)
    : Vreg_mem(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vreg_mem::~Vreg_mem() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vreg_mem___024root___eval_debug_assertions(Vreg_mem___024root* vlSelf);
#endif  // VL_DEBUG
void Vreg_mem___024root___eval_static(Vreg_mem___024root* vlSelf);
void Vreg_mem___024root___eval_initial(Vreg_mem___024root* vlSelf);
void Vreg_mem___024root___eval_settle(Vreg_mem___024root* vlSelf);
void Vreg_mem___024root___eval(Vreg_mem___024root* vlSelf);

void Vreg_mem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vreg_mem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vreg_mem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vreg_mem___024root___eval_static(&(vlSymsp->TOP));
        Vreg_mem___024root___eval_initial(&(vlSymsp->TOP));
        Vreg_mem___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vreg_mem___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vreg_mem::eventsPending() { return false; }

uint64_t Vreg_mem::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vreg_mem::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vreg_mem___024root___eval_final(Vreg_mem___024root* vlSelf);

VL_ATTR_COLD void Vreg_mem::final() {
    Vreg_mem___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vreg_mem::hierName() const { return vlSymsp->name(); }
const char* Vreg_mem::modelName() const { return "Vreg_mem"; }
unsigned Vreg_mem::threads() const { return 1; }
void Vreg_mem::prepareClone() const { contextp()->prepareClone(); }
void Vreg_mem::atClone() const {
    contextp()->threadPoolpOnClone();
}
