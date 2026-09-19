// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_aessbox8.h"

void Vtestbench_aessbox8___ctor_var_reset(Vtestbench_aessbox8* vlSelf);

Vtestbench_aessbox8::Vtestbench_aessbox8(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_aessbox8___ctor_var_reset(this);
}

void Vtestbench_aessbox8::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestbench_aessbox8::~Vtestbench_aessbox8() {
}
