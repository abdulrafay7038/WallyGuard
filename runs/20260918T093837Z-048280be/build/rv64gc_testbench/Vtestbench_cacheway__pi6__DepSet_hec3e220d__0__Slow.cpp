// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench_cacheway__pi6.h"

VL_ATTR_COLD void Vtestbench_cacheway__pi6___stl_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____0(Vtestbench_cacheway__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_cacheway__pi6___stl_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.HitDirtyWay = ((IData)(vlSelfRef.__PVT__Dirty) 
                             & (IData)(vlSelfRef.ValidWay));
}

VL_ATTR_COLD void Vtestbench_cacheway__pi6___ctor_var_reset(Vtestbench_cacheway__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_cacheway__pi6___ctor_var_reset\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->FlushStage = VL_RAND_RESET_I(1);
    vlSelf->InvalidateFlushStage = VL_RAND_RESET_I(1);
    vlSelf->CacheEn = VL_RAND_RESET_I(1);
    vlSelf->CacheSetData = VL_RAND_RESET_I(6);
    vlSelf->CacheSetTag = VL_RAND_RESET_I(6);
    vlSelf->PAdr = VL_RAND_RESET_Q(56);
    VL_RAND_RESET_W(512, vlSelf->LineWriteData);
    vlSelf->SetValid = VL_RAND_RESET_I(1);
    vlSelf->ClearValid = VL_RAND_RESET_I(1);
    vlSelf->SetDirty = VL_RAND_RESET_I(1);
    vlSelf->SelVictim = VL_RAND_RESET_I(1);
    vlSelf->ClearDirty = VL_RAND_RESET_I(1);
    vlSelf->FlushCache = VL_RAND_RESET_I(1);
    vlSelf->VictimWay = VL_RAND_RESET_I(1);
    vlSelf->FlushWay = VL_RAND_RESET_I(1);
    vlSelf->InvalidateCache = VL_RAND_RESET_I(1);
    vlSelf->LineByteMask = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->ReadDataLineWay);
    vlSelf->HitWay = VL_RAND_RESET_I(1);
    vlSelf->ValidWay = VL_RAND_RESET_I(1);
    vlSelf->HitDirtyWay = VL_RAND_RESET_I(1);
    vlSelf->DirtyWay = VL_RAND_RESET_I(1);
    vlSelf->TagWay = VL_RAND_RESET_Q(44);
    vlSelf->ValidBits = VL_RAND_RESET_Q(64);
    vlSelf->DirtyBits = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__Dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__SelectedWriteWordEn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__SetValidEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__SetValidWay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__SetDirtyWay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ClearDirtyWay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__SelectedWay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__InvalidateCacheDelay = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe = VL_RAND_RESET_I(16);
    vlSelf->__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe = VL_RAND_RESET_I(16);
    vlSelf->__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe = VL_RAND_RESET_I(16);
    vlSelf->__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->CacheTagMem__DOT__ram__DOT__RAM[__Vi0] = 0;
    }
    vlSelf->__PVT__CacheTagMem__DOT__ram__DOT__addrd = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__Vi0]);
    }
    vlSelf->__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__Vi0]);
    }
    vlSelf->__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__Vi0]);
    }
    vlSelf->__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__Vi0]);
    }
    vlSelf->__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i = VL_RAND_RESET_I(32);
}
