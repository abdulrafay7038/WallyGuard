// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_pmpchecker__Pz1.h"

void Vtestbench_pmpchecker__Pz1___ctor_var_reset(Vtestbench_pmpchecker__Pz1* vlSelf);

Vtestbench_pmpchecker__Pz1::Vtestbench_pmpchecker__Pz1(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_pmpchecker__Pz1___ctor_var_reset(this);
}

void Vtestbench_pmpchecker__Pz1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestbench_pmpchecker__Pz1::~Vtestbench_pmpchecker__Pz1() {
}
