// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_tlbcam__Pz1_T20_K3d_S9.h"
#include "Vtestbench_tlbcamline__Pz1_K3d_S9.h"

VL_INLINE_OPT void Vtestbench_tlbcam__Pz1_T20_K3d_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__0(Vtestbench_tlbcam__Pz1_T20_K3d_S9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestbench_tlbcam__Pz1_T20_K3d_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PageTypeRead[0x1fU] = ((IData)(vlSelf->__PVT__camlines__BRA__31__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__31__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x1eU] = ((IData)(vlSelf->__PVT__camlines__BRA__30__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__30__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x1dU] = ((IData)(vlSelf->__PVT__camlines__BRA__29__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__29__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x1cU] = ((IData)(vlSelf->__PVT__camlines__BRA__28__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__28__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x1bU] = ((IData)(vlSelf->__PVT__camlines__BRA__27__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__27__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x1aU] = ((IData)(vlSelf->__PVT__camlines__BRA__26__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__26__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x19U] = ((IData)(vlSelf->__PVT__camlines__BRA__25__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__25__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x18U] = ((IData)(vlSelf->__PVT__camlines__BRA__24__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__24__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x17U] = ((IData)(vlSelf->__PVT__camlines__BRA__23__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__23__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x16U] = ((IData)(vlSelf->__PVT__camlines__BRA__22__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__22__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x15U] = ((IData)(vlSelf->__PVT__camlines__BRA__21__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__21__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x14U] = ((IData)(vlSelf->__PVT__camlines__BRA__20__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__20__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x13U] = ((IData)(vlSelf->__PVT__camlines__BRA__19__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__19__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x12U] = ((IData)(vlSelf->__PVT__camlines__BRA__18__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__18__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x11U] = ((IData)(vlSelf->__PVT__camlines__BRA__17__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__17__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x10U] = ((IData)(vlSelf->__PVT__camlines__BRA__16__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__16__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xfU] = ((IData)(vlSelf->__PVT__camlines__BRA__15__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__15__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xeU] = ((IData)(vlSelf->__PVT__camlines__BRA__14__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__14__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xdU] = ((IData)(vlSelf->__PVT__camlines__BRA__13__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__13__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xcU] = ((IData)(vlSelf->__PVT__camlines__BRA__12__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__12__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xbU] = ((IData)(vlSelf->__PVT__camlines__BRA__11__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__11__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xaU] = ((IData)(vlSelf->__PVT__camlines__BRA__10__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__10__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[9U] = ((IData)(vlSelf->__PVT__camlines__BRA__9__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__9__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[8U] = ((IData)(vlSelf->__PVT__camlines__BRA__8__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__8__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[7U] = ((IData)(vlSelf->__PVT__camlines__BRA__7__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__7__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[6U] = ((IData)(vlSelf->__PVT__camlines__BRA__6__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__6__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[5U] = ((IData)(vlSelf->__PVT__camlines__BRA__5__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__5__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[4U] = ((IData)(vlSelf->__PVT__camlines__BRA__4__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__4__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[3U] = ((IData)(vlSelf->__PVT__camlines__BRA__3__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__3__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[2U] = ((IData)(vlSelf->__PVT__camlines__BRA__2__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__2__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[1U] = vlSelf->__PVT__camlines__BRA__1__KET__->__PVT__PageTypeRead;
    vlSelfRef.Matches = (((((((IData)(vlSelf->__PVT__camlines__BRA__31__KET__->__PVT__Match) 
                              << 0x1fU) | ((IData)(vlSelf->__PVT__camlines__BRA__30__KET__->__PVT__Match) 
                                           << 0x1eU)) 
                            | (((IData)(vlSelf->__PVT__camlines__BRA__29__KET__->__PVT__Match) 
                                << 0x1dU) | ((IData)(vlSelf->__PVT__camlines__BRA__28__KET__->__PVT__Match) 
                                             << 0x1cU))) 
                           | ((((IData)(vlSelf->__PVT__camlines__BRA__27__KET__->__PVT__Match) 
                                << 0x1bU) | ((IData)(vlSelf->__PVT__camlines__BRA__26__KET__->__PVT__Match) 
                                             << 0x1aU)) 
                              | (((IData)(vlSelf->__PVT__camlines__BRA__25__KET__->__PVT__Match) 
                                  << 0x19U) | ((IData)(vlSelf->__PVT__camlines__BRA__24__KET__->__PVT__Match) 
                                               << 0x18U)))) 
                          | (((((IData)(vlSelf->__PVT__camlines__BRA__23__KET__->__PVT__Match) 
                                << 0x17U) | ((IData)(vlSelf->__PVT__camlines__BRA__22__KET__->__PVT__Match) 
                                             << 0x16U)) 
                              | (((IData)(vlSelf->__PVT__camlines__BRA__21__KET__->__PVT__Match) 
                                  << 0x15U) | ((IData)(vlSelf->__PVT__camlines__BRA__20__KET__->__PVT__Match) 
                                               << 0x14U))) 
                             | ((((IData)(vlSelf->__PVT__camlines__BRA__19__KET__->__PVT__Match) 
                                  << 0x13U) | ((IData)(vlSelf->__PVT__camlines__BRA__18__KET__->__PVT__Match) 
                                               << 0x12U)) 
                                | (((IData)(vlSelf->__PVT__camlines__BRA__17__KET__->__PVT__Match) 
                                    << 0x11U) | ((IData)(vlSelf->__PVT__camlines__BRA__16__KET__->__PVT__Match) 
                                                 << 0x10U))))) 
                         | ((((((IData)(vlSelf->__PVT__camlines__BRA__15__KET__->__PVT__Match) 
                                << 0xfU) | ((IData)(vlSelf->__PVT__camlines__BRA__14__KET__->__PVT__Match) 
                                            << 0xeU)) 
                              | (((IData)(vlSelf->__PVT__camlines__BRA__13__KET__->__PVT__Match) 
                                  << 0xdU) | ((IData)(vlSelf->__PVT__camlines__BRA__12__KET__->__PVT__Match) 
                                              << 0xcU))) 
                             | ((((IData)(vlSelf->__PVT__camlines__BRA__11__KET__->__PVT__Match) 
                                  << 0xbU) | ((IData)(vlSelf->__PVT__camlines__BRA__10__KET__->__PVT__Match) 
                                              << 0xaU)) 
                                | (((IData)(vlSelf->__PVT__camlines__BRA__9__KET__->__PVT__Match) 
                                    << 9U) | ((IData)(vlSelf->__PVT__camlines__BRA__8__KET__->__PVT__Match) 
                                              << 8U)))) 
                            | (((((IData)(vlSelf->__PVT__camlines__BRA__7__KET__->__PVT__Match) 
                                  << 7U) | ((IData)(vlSelf->__PVT__camlines__BRA__6__KET__->__PVT__Match) 
                                            << 6U)) 
                                | (((IData)(vlSelf->__PVT__camlines__BRA__5__KET__->__PVT__Match) 
                                    << 5U) | ((IData)(vlSelf->__PVT__camlines__BRA__4__KET__->__PVT__Match) 
                                              << 4U))) 
                               | ((((IData)(vlSelf->__PVT__camlines__BRA__3__KET__->__PVT__Match) 
                                    << 3U) | ((IData)(vlSelf->__PVT__camlines__BRA__2__KET__->__PVT__Match) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__camlines__BRA__1__KET__->__PVT__Match) 
                                      << 1U) | (IData)(vlSelf->__PVT__camlines__BRA__0__KET__->__PVT__Match))))));
    vlSelfRef.__PVT__PageTypeOr__DOT__genblk1__DOT__mid[0U] 
        = ((IData)(vlSelf->__PVT__camlines__BRA__0__KET__->__PVT__PageTypeRead) 
           | (IData)(vlSelf->__PVT__camlines__BRA__1__KET__->__PVT__PageTypeRead));
    vlSelfRef.__PVT__PageTypeRead[0U] = vlSelf->__PVT__camlines__BRA__0__KET__->__PVT__PageTypeRead;
    vlSelfRef.CAMHit = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)) 
                        & (0U != vlSelfRef.Matches));
}

VL_INLINE_OPT void Vtestbench_tlbcam__Pz1_T20_K3d_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__0(Vtestbench_tlbcam__Pz1_T20_K3d_S9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestbench_tlbcam__Pz1_T20_K3d_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PageTypeRead[0x1fU] = ((IData)(vlSelf->__PVT__camlines__BRA__31__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__31__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x1eU] = ((IData)(vlSelf->__PVT__camlines__BRA__30__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__30__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x1dU] = ((IData)(vlSelf->__PVT__camlines__BRA__29__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__29__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x1cU] = ((IData)(vlSelf->__PVT__camlines__BRA__28__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__28__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x1bU] = ((IData)(vlSelf->__PVT__camlines__BRA__27__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__27__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x1aU] = ((IData)(vlSelf->__PVT__camlines__BRA__26__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__26__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x19U] = ((IData)(vlSelf->__PVT__camlines__BRA__25__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__25__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x18U] = ((IData)(vlSelf->__PVT__camlines__BRA__24__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__24__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x17U] = ((IData)(vlSelf->__PVT__camlines__BRA__23__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__23__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x16U] = ((IData)(vlSelf->__PVT__camlines__BRA__22__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__22__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x15U] = ((IData)(vlSelf->__PVT__camlines__BRA__21__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__21__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x14U] = ((IData)(vlSelf->__PVT__camlines__BRA__20__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__20__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x13U] = ((IData)(vlSelf->__PVT__camlines__BRA__19__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__19__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x12U] = ((IData)(vlSelf->__PVT__camlines__BRA__18__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__18__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x11U] = ((IData)(vlSelf->__PVT__camlines__BRA__17__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__17__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0x10U] = ((IData)(vlSelf->__PVT__camlines__BRA__16__KET__->__PVT__PageType) 
                                            & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__16__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xfU] = ((IData)(vlSelf->__PVT__camlines__BRA__15__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__15__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xeU] = ((IData)(vlSelf->__PVT__camlines__BRA__14__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__14__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xdU] = ((IData)(vlSelf->__PVT__camlines__BRA__13__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__13__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xcU] = ((IData)(vlSelf->__PVT__camlines__BRA__12__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__12__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xbU] = ((IData)(vlSelf->__PVT__camlines__BRA__11__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__11__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[0xaU] = ((IData)(vlSelf->__PVT__camlines__BRA__10__KET__->__PVT__PageType) 
                                           & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__10__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[9U] = ((IData)(vlSelf->__PVT__camlines__BRA__9__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__9__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[8U] = ((IData)(vlSelf->__PVT__camlines__BRA__8__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__8__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[7U] = ((IData)(vlSelf->__PVT__camlines__BRA__7__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__7__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[6U] = ((IData)(vlSelf->__PVT__camlines__BRA__6__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__6__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[5U] = ((IData)(vlSelf->__PVT__camlines__BRA__5__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__5__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[4U] = ((IData)(vlSelf->__PVT__camlines__BRA__4__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__4__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[3U] = ((IData)(vlSelf->__PVT__camlines__BRA__3__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__3__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[2U] = ((IData)(vlSelf->__PVT__camlines__BRA__2__KET__->__PVT__PageType) 
                                         & (- (IData)((IData)(vlSelf->__PVT__camlines__BRA__2__KET__->__PVT__Match))));
    vlSelfRef.__PVT__PageTypeRead[1U] = vlSelf->__PVT__camlines__BRA__1__KET__->__PVT__PageTypeRead;
    vlSelfRef.Matches = (((((((IData)(vlSelf->__PVT__camlines__BRA__31__KET__->__PVT__Match) 
                              << 0x1fU) | ((IData)(vlSelf->__PVT__camlines__BRA__30__KET__->__PVT__Match) 
                                           << 0x1eU)) 
                            | (((IData)(vlSelf->__PVT__camlines__BRA__29__KET__->__PVT__Match) 
                                << 0x1dU) | ((IData)(vlSelf->__PVT__camlines__BRA__28__KET__->__PVT__Match) 
                                             << 0x1cU))) 
                           | ((((IData)(vlSelf->__PVT__camlines__BRA__27__KET__->__PVT__Match) 
                                << 0x1bU) | ((IData)(vlSelf->__PVT__camlines__BRA__26__KET__->__PVT__Match) 
                                             << 0x1aU)) 
                              | (((IData)(vlSelf->__PVT__camlines__BRA__25__KET__->__PVT__Match) 
                                  << 0x19U) | ((IData)(vlSelf->__PVT__camlines__BRA__24__KET__->__PVT__Match) 
                                               << 0x18U)))) 
                          | (((((IData)(vlSelf->__PVT__camlines__BRA__23__KET__->__PVT__Match) 
                                << 0x17U) | ((IData)(vlSelf->__PVT__camlines__BRA__22__KET__->__PVT__Match) 
                                             << 0x16U)) 
                              | (((IData)(vlSelf->__PVT__camlines__BRA__21__KET__->__PVT__Match) 
                                  << 0x15U) | ((IData)(vlSelf->__PVT__camlines__BRA__20__KET__->__PVT__Match) 
                                               << 0x14U))) 
                             | ((((IData)(vlSelf->__PVT__camlines__BRA__19__KET__->__PVT__Match) 
                                  << 0x13U) | ((IData)(vlSelf->__PVT__camlines__BRA__18__KET__->__PVT__Match) 
                                               << 0x12U)) 
                                | (((IData)(vlSelf->__PVT__camlines__BRA__17__KET__->__PVT__Match) 
                                    << 0x11U) | ((IData)(vlSelf->__PVT__camlines__BRA__16__KET__->__PVT__Match) 
                                                 << 0x10U))))) 
                         | ((((((IData)(vlSelf->__PVT__camlines__BRA__15__KET__->__PVT__Match) 
                                << 0xfU) | ((IData)(vlSelf->__PVT__camlines__BRA__14__KET__->__PVT__Match) 
                                            << 0xeU)) 
                              | (((IData)(vlSelf->__PVT__camlines__BRA__13__KET__->__PVT__Match) 
                                  << 0xdU) | ((IData)(vlSelf->__PVT__camlines__BRA__12__KET__->__PVT__Match) 
                                              << 0xcU))) 
                             | ((((IData)(vlSelf->__PVT__camlines__BRA__11__KET__->__PVT__Match) 
                                  << 0xbU) | ((IData)(vlSelf->__PVT__camlines__BRA__10__KET__->__PVT__Match) 
                                              << 0xaU)) 
                                | (((IData)(vlSelf->__PVT__camlines__BRA__9__KET__->__PVT__Match) 
                                    << 9U) | ((IData)(vlSelf->__PVT__camlines__BRA__8__KET__->__PVT__Match) 
                                              << 8U)))) 
                            | (((((IData)(vlSelf->__PVT__camlines__BRA__7__KET__->__PVT__Match) 
                                  << 7U) | ((IData)(vlSelf->__PVT__camlines__BRA__6__KET__->__PVT__Match) 
                                            << 6U)) 
                                | (((IData)(vlSelf->__PVT__camlines__BRA__5__KET__->__PVT__Match) 
                                    << 5U) | ((IData)(vlSelf->__PVT__camlines__BRA__4__KET__->__PVT__Match) 
                                              << 4U))) 
                               | ((((IData)(vlSelf->__PVT__camlines__BRA__3__KET__->__PVT__Match) 
                                    << 3U) | ((IData)(vlSelf->__PVT__camlines__BRA__2__KET__->__PVT__Match) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__camlines__BRA__1__KET__->__PVT__Match) 
                                      << 1U) | (IData)(vlSelf->__PVT__camlines__BRA__0__KET__->__PVT__Match))))));
    vlSelfRef.__PVT__PageTypeOr__DOT__genblk1__DOT__mid[0U] 
        = ((IData)(vlSelf->__PVT__camlines__BRA__0__KET__->__PVT__PageTypeRead) 
           | (IData)(vlSelf->__PVT__camlines__BRA__1__KET__->__PVT__PageTypeRead));
    vlSelfRef.__PVT__PageTypeRead[0U] = vlSelf->__PVT__camlines__BRA__0__KET__->__PVT__PageTypeRead;
    vlSelfRef.CAMHit = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)) 
                        & (0U != vlSelfRef.Matches));
}
