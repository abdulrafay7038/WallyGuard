// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_aesinvsbox8.h"

void Vtestbench_aesinvsbox8___ctor_var_reset(Vtestbench_aesinvsbox8* vlSelf);

Vtestbench_aesinvsbox8::Vtestbench_aesinvsbox8(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_aesinvsbox8___ctor_var_reset(this);
}

void Vtestbench_aesinvsbox8::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestbench_aesinvsbox8::~Vtestbench_aesinvsbox8() {
}
