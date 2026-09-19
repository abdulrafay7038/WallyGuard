// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench_aesinvsbox8.h"

VL_ATTR_COLD void Vtestbench_aesinvsbox8___ctor_var_reset(Vtestbench_aesinvsbox8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_aesinvsbox8___ctor_var_reset\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->y = VL_RAND_RESET_I(8);
}
