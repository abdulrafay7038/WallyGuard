// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench_tlbcamline__Pz1_K3d_S9.h"

VL_ATTR_COLD void Vtestbench_tlbcamline__Pz1_K3d_S9___ctor_var_reset(Vtestbench_tlbcamline__Pz1_K3d_S9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K3d_S9___ctor_var_reset\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__VPN = VL_RAND_RESET_Q(45);
    vlSelf->__PVT__SATP_ASID = VL_RAND_RESET_I(16);
    vlSelf->__PVT__SV39Mode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__SV48Mode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__WriteEnable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PTE_G = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PTE_NAPOT = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PageTypeWriteVal = VL_RAND_RESET_I(3);
    vlSelf->__PVT__TLBFlush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__TLBFlushAll = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PageTypeRead = VL_RAND_RESET_I(3);
    vlSelf->__PVT__Match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Key = VL_RAND_RESET_Q(61);
    vlSelf->__PVT__PageType = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ShouldFlush = VL_RAND_RESET_I(1);
}
