// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_instrNameDecTB__X40.h"

void Vtestbench_instrNameDecTB__X40___ctor_var_reset(Vtestbench_instrNameDecTB__X40* vlSelf);

Vtestbench_instrNameDecTB__X40::Vtestbench_instrNameDecTB__X40(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_instrNameDecTB__X40___ctor_var_reset(this);
}

void Vtestbench_instrNameDecTB__X40::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestbench_instrNameDecTB__X40::~Vtestbench_instrNameDecTB__X40() {
}
