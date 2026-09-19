// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench_tlbram__Pz1_T20.h"

VL_INLINE_OPT void Vtestbench_tlbram__Pz1_T20___act_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram__0(Vtestbench_tlbram__Pz1_T20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestbench_tlbram__Pz1_T20___act_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PTEAccessBits = ((0xf00U & ((IData)((
                                                   vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                   [0x1eU] 
                                                   >> 0x3cU)) 
                                          << 8U)) | 
                               (0xffU & (IData)(vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                [0x1eU])));
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[1U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0U] | vlSelfRef.__PVT__RamRead[2U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[2U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [1U] | vlSelfRef.__PVT__RamRead[3U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[3U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [2U] | vlSelfRef.__PVT__RamRead[4U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[4U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [3U] | vlSelfRef.__PVT__RamRead[5U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[5U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [4U] | vlSelfRef.__PVT__RamRead[6U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[6U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [5U] | vlSelfRef.__PVT__RamRead[7U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[7U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [6U] | vlSelfRef.__PVT__RamRead[8U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[8U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [7U] | vlSelfRef.__PVT__RamRead[9U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[9U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [8U] | vlSelfRef.__PVT__RamRead[0xaU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xaU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [9U] | vlSelfRef.__PVT__RamRead[0xbU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xbU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xaU] | vlSelfRef.__PVT__RamRead[0xcU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xcU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xbU] | vlSelfRef.__PVT__RamRead[0xdU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xdU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xcU] | vlSelfRef.__PVT__RamRead[0xeU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xeU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xdU] | vlSelfRef.__PVT__RamRead[0xfU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xfU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xeU] | vlSelfRef.__PVT__RamRead[0x10U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x10U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xfU] | vlSelfRef.__PVT__RamRead[0x11U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x11U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x10U] | vlSelfRef.__PVT__RamRead[0x12U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x12U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x11U] | vlSelfRef.__PVT__RamRead[0x13U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x13U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x12U] | vlSelfRef.__PVT__RamRead[0x14U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x14U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x13U] | vlSelfRef.__PVT__RamRead[0x15U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x15U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x14U] | vlSelfRef.__PVT__RamRead[0x16U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x16U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x15U] | vlSelfRef.__PVT__RamRead[0x17U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x17U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x16U] | vlSelfRef.__PVT__RamRead[0x18U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x18U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x17U] | vlSelfRef.__PVT__RamRead[0x19U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x19U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x18U] | vlSelfRef.__PVT__RamRead[0x1aU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x1aU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x19U] | vlSelfRef.__PVT__RamRead[0x1bU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x1bU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x1aU] | vlSelfRef.__PVT__RamRead[0x1cU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x1cU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x1bU] | vlSelfRef.__PVT__RamRead[0x1dU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x1dU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x1cU] | vlSelfRef.__PVT__RamRead[0x1eU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x1eU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x1dU] | vlSelfRef.__PVT__RamRead[0x1fU]);
}

VL_INLINE_OPT void Vtestbench_tlbram__Pz1_T20___nba_comb__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram__0(Vtestbench_tlbram__Pz1_T20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestbench_tlbram__Pz1_T20___nba_comb__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[1U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0U] | vlSelfRef.__PVT__RamRead[2U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[2U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [1U] | vlSelfRef.__PVT__RamRead[3U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[3U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [2U] | vlSelfRef.__PVT__RamRead[4U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[4U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [3U] | vlSelfRef.__PVT__RamRead[5U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[5U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [4U] | vlSelfRef.__PVT__RamRead[6U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[6U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [5U] | vlSelfRef.__PVT__RamRead[7U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[7U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [6U] | vlSelfRef.__PVT__RamRead[8U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[8U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [7U] | vlSelfRef.__PVT__RamRead[9U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[9U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [8U] | vlSelfRef.__PVT__RamRead[0xaU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xaU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [9U] | vlSelfRef.__PVT__RamRead[0xbU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xbU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xaU] | vlSelfRef.__PVT__RamRead[0xcU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xcU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xbU] | vlSelfRef.__PVT__RamRead[0xdU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xdU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xcU] | vlSelfRef.__PVT__RamRead[0xeU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xeU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xdU] | vlSelfRef.__PVT__RamRead[0xfU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xfU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xeU] | vlSelfRef.__PVT__RamRead[0x10U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x10U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xfU] | vlSelfRef.__PVT__RamRead[0x11U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x11U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x10U] | vlSelfRef.__PVT__RamRead[0x12U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x12U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x11U] | vlSelfRef.__PVT__RamRead[0x13U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x13U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x12U] | vlSelfRef.__PVT__RamRead[0x14U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x14U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x13U] | vlSelfRef.__PVT__RamRead[0x15U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x15U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x14U] | vlSelfRef.__PVT__RamRead[0x16U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x16U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x15U] | vlSelfRef.__PVT__RamRead[0x17U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x17U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x16U] | vlSelfRef.__PVT__RamRead[0x18U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x18U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x17U] | vlSelfRef.__PVT__RamRead[0x19U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x19U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x18U] | vlSelfRef.__PVT__RamRead[0x1aU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x1aU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x19U] | vlSelfRef.__PVT__RamRead[0x1bU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x1bU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x1aU] | vlSelfRef.__PVT__RamRead[0x1cU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x1cU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x1bU] | vlSelfRef.__PVT__RamRead[0x1dU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x1dU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x1cU] | vlSelfRef.__PVT__RamRead[0x1eU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0x1eU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0x1dU] | vlSelfRef.__PVT__RamRead[0x1fU]);
}
