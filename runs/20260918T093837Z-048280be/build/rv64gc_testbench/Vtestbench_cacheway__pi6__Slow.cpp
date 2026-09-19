// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_cacheway__pi6.h"

void Vtestbench_cacheway__pi6___ctor_var_reset(Vtestbench_cacheway__pi6* vlSelf);

Vtestbench_cacheway__pi6::Vtestbench_cacheway__pi6(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_cacheway__pi6___ctor_var_reset(this);
}

void Vtestbench_cacheway__pi6::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestbench_cacheway__pi6::~Vtestbench_cacheway__pi6() {
}
