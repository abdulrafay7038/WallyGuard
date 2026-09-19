// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_tlbram__Pz1_T20.h"

void Vtestbench_tlbram__Pz1_T20___ctor_var_reset(Vtestbench_tlbram__Pz1_T20* vlSelf);

Vtestbench_tlbram__Pz1_T20::Vtestbench_tlbram__Pz1_T20(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_tlbram__Pz1_T20___ctor_var_reset(this);
}

void Vtestbench_tlbram__Pz1_T20::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestbench_tlbram__Pz1_T20::~Vtestbench_tlbram__Pz1_T20() {
}
