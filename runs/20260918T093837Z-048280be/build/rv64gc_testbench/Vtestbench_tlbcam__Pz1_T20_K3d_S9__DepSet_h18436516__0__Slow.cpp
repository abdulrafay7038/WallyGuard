// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench_tlbcam__Pz1_T20_K3d_S9.h"

VL_ATTR_COLD void Vtestbench_tlbcam__Pz1_T20_K3d_S9___ctor_var_reset(Vtestbench_tlbcam__Pz1_T20_K3d_S9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestbench_tlbcam__Pz1_T20_K3d_S9___ctor_var_reset\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->VPN = VL_RAND_RESET_Q(45);
    vlSelf->PageTypeWriteVal = VL_RAND_RESET_I(3);
    vlSelf->SV39Mode = VL_RAND_RESET_I(1);
    vlSelf->SV48Mode = VL_RAND_RESET_I(1);
    vlSelf->TLBFlush = VL_RAND_RESET_I(1);
    vlSelf->TLBFlushAll = VL_RAND_RESET_I(1);
    vlSelf->WriteEnables = VL_RAND_RESET_I(32);
    vlSelf->PTE_Gs = VL_RAND_RESET_I(32);
    vlSelf->PTE_NAPOTs = VL_RAND_RESET_I(32);
    vlSelf->SATP_ASID = VL_RAND_RESET_I(16);
    vlSelf->Matches = VL_RAND_RESET_I(32);
    vlSelf->HitPageType = VL_RAND_RESET_I(3);
    vlSelf->CAMHit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__PageTypeRead[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->__PVT__PageTypeOr__DOT__genblk1__DOT__mid[__Vi0] = VL_RAND_RESET_I(3);
    }
}
