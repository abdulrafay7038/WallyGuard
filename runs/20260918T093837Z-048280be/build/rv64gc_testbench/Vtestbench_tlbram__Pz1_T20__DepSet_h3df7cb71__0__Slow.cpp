// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_tlbram__Pz1_T20.h"

VL_ATTR_COLD void Vtestbench_tlbram__Pz1_T20___stl_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram__0(Vtestbench_tlbram__Pz1_T20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestbench_tlbram__Pz1_T20___stl_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tlbramline__BRA__0__KET____DOT____Vcellinp__genblk1__DOT__pteflop____pinNumber4 
        = (((QData)((IData)((7U & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PTE 
                                           >> 0x3dU))))) 
            << 0x37U) | (((QData)((IData)((0U != (0x7fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PTE 
                                                             >> 0x36U)))))) 
                          << 0x36U) | (0x3fffffffffffffULL 
                                       & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PTE)));
    vlSelfRef.PTE_NAPOTs = (((((((IData)((0x200000000002000ULL 
                                          == (0x200000000003c00ULL 
                                              & vlSelfRef.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg))) 
                                 << 0x1fU) | ((IData)(
                                                      (0x200000000002000ULL 
                                                       == 
                                                       (0x200000000003c00ULL 
                                                        & vlSelfRef.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg))) 
                                              << 0x1eU)) 
                               | (((IData)((0x200000000002000ULL 
                                            == (0x200000000003c00ULL 
                                                & vlSelfRef.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg))) 
                                   << 0x1dU) | ((IData)(
                                                        (0x200000000002000ULL 
                                                         == 
                                                         (0x200000000003c00ULL 
                                                          & vlSelfRef.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg))) 
                                                << 0x1cU))) 
                              | ((((IData)((0x200000000002000ULL 
                                            == (0x200000000003c00ULL 
                                                & vlSelfRef.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg))) 
                                   << 0x1bU) | ((IData)(
                                                        (0x200000000002000ULL 
                                                         == 
                                                         (0x200000000003c00ULL 
                                                          & vlSelfRef.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg))) 
                                                << 0x1aU)) 
                                 | (((IData)((0x200000000002000ULL 
                                              == (0x200000000003c00ULL 
                                                  & vlSelfRef.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg))) 
                                     << 0x19U) | ((IData)(
                                                          (0x200000000002000ULL 
                                                           == 
                                                           (0x200000000003c00ULL 
                                                            & vlSelfRef.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg))) 
                                                  << 0x18U)))) 
                             | (((((IData)((0x200000000002000ULL 
                                            == (0x200000000003c00ULL 
                                                & vlSelfRef.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg))) 
                                   << 0x17U) | ((IData)(
                                                        (0x200000000002000ULL 
                                                         == 
                                                         (0x200000000003c00ULL 
                                                          & vlSelfRef.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg))) 
                                                << 0x16U)) 
                                 | (((IData)((0x200000000002000ULL 
                                              == (0x200000000003c00ULL 
                                                  & vlSelfRef.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg))) 
                                     << 0x15U) | ((IData)(
                                                          (0x200000000002000ULL 
                                                           == 
                                                           (0x200000000003c00ULL 
                                                            & vlSelfRef.__PVT__tlbramline__BRA__20__KET____DOT__genblk1__DOT__ptereg))) 
                                                  << 0x14U))) 
                                | ((((IData)((0x200000000002000ULL 
                                              == (0x200000000003c00ULL 
                                                  & vlSelfRef.__PVT__tlbramline__BRA__19__KET____DOT__genblk1__DOT__ptereg))) 
                                     << 0x13U) | ((IData)(
                                                          (0x200000000002000ULL 
                                                           == 
                                                           (0x200000000003c00ULL 
                                                            & vlSelfRef.__PVT__tlbramline__BRA__18__KET____DOT__genblk1__DOT__ptereg))) 
                                                  << 0x12U)) 
                                   | (((IData)((0x200000000002000ULL 
                                                == 
                                                (0x200000000003c00ULL 
                                                 & vlSelfRef.__PVT__tlbramline__BRA__17__KET____DOT__genblk1__DOT__ptereg))) 
                                       << 0x11U) | 
                                      ((IData)((0x200000000002000ULL 
                                                == 
                                                (0x200000000003c00ULL 
                                                 & vlSelfRef.__PVT__tlbramline__BRA__16__KET____DOT__genblk1__DOT__ptereg))) 
                                       << 0x10U))))) 
                            | ((((((IData)((0x200000000002000ULL 
                                            == (0x200000000003c00ULL 
                                                & vlSelfRef.__PVT__tlbramline__BRA__15__KET____DOT__genblk1__DOT__ptereg))) 
                                   << 0xfU) | ((IData)(
                                                       (0x200000000002000ULL 
                                                        == 
                                                        (0x200000000003c00ULL 
                                                         & vlSelfRef.__PVT__tlbramline__BRA__14__KET____DOT__genblk1__DOT__ptereg))) 
                                               << 0xeU)) 
                                 | (((IData)((0x200000000002000ULL 
                                              == (0x200000000003c00ULL 
                                                  & vlSelfRef.__PVT__tlbramline__BRA__13__KET____DOT__genblk1__DOT__ptereg))) 
                                     << 0xdU) | ((IData)(
                                                         (0x200000000002000ULL 
                                                          == 
                                                          (0x200000000003c00ULL 
                                                           & vlSelfRef.__PVT__tlbramline__BRA__12__KET____DOT__genblk1__DOT__ptereg))) 
                                                 << 0xcU))) 
                                | ((((IData)((0x200000000002000ULL 
                                              == (0x200000000003c00ULL 
                                                  & vlSelfRef.__PVT__tlbramline__BRA__11__KET____DOT__genblk1__DOT__ptereg))) 
                                     << 0xbU) | ((IData)(
                                                         (0x200000000002000ULL 
                                                          == 
                                                          (0x200000000003c00ULL 
                                                           & vlSelfRef.__PVT__tlbramline__BRA__10__KET____DOT__genblk1__DOT__ptereg))) 
                                                 << 0xaU)) 
                                   | (((IData)((0x200000000002000ULL 
                                                == 
                                                (0x200000000003c00ULL 
                                                 & vlSelfRef.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg))) 
                                       << 9U) | ((IData)(
                                                         (0x200000000002000ULL 
                                                          == 
                                                          (0x200000000003c00ULL 
                                                           & vlSelfRef.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg))) 
                                                 << 8U)))) 
                               | (((((IData)((0x200000000002000ULL 
                                              == (0x200000000003c00ULL 
                                                  & vlSelfRef.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg))) 
                                     << 7U) | ((IData)(
                                                       (0x200000000002000ULL 
                                                        == 
                                                        (0x200000000003c00ULL 
                                                         & vlSelfRef.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg))) 
                                               << 6U)) 
                                   | (((IData)((0x200000000002000ULL 
                                                == 
                                                (0x200000000003c00ULL 
                                                 & vlSelfRef.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg))) 
                                       << 5U) | ((IData)(
                                                         (0x200000000002000ULL 
                                                          == 
                                                          (0x200000000003c00ULL 
                                                           & vlSelfRef.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg))) 
                                                 << 4U))) 
                                  | ((((IData)((0x200000000002000ULL 
                                                == 
                                                (0x200000000003c00ULL 
                                                 & vlSelfRef.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg))) 
                                       << 3U) | ((IData)(
                                                         (0x200000000002000ULL 
                                                          == 
                                                          (0x200000000003c00ULL 
                                                           & vlSelfRef.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg))) 
                                                 << 2U)) 
                                     | (((IData)((0x200000000002000ULL 
                                                  == 
                                                  (0x200000000003c00ULL 
                                                   & vlSelfRef.__PVT__tlbramline__BRA__1__KET____DOT__genblk1__DOT__ptereg))) 
                                         << 1U) | (IData)(
                                                          (0x200000000002000ULL 
                                                           == 
                                                           (0x200000000003c00ULL 
                                                            & vlSelfRef.__PVT__tlbramline__BRA__0__KET____DOT__genblk1__DOT__ptereg))))))));
    vlSelfRef.PTE_Gs = (((((((IData)((vlSelfRef.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg 
                                      >> 5U)) << 0x1fU) 
                            | (0x40000000U & ((IData)(
                                                      (vlSelfRef.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg 
                                                       >> 5U)) 
                                              << 0x1eU))) 
                           | ((0x20000000U & ((IData)(
                                                      (vlSelfRef.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg 
                                                       >> 5U)) 
                                              << 0x1dU)) 
                              | (0x10000000U & ((IData)(
                                                        (vlSelfRef.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg 
                                                         >> 5U)) 
                                                << 0x1cU)))) 
                          | (((0x8000000U & ((IData)(
                                                     (vlSelfRef.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg 
                                                      >> 5U)) 
                                             << 0x1bU)) 
                              | (0x4000000U & ((IData)(
                                                       (vlSelfRef.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg 
                                                        >> 5U)) 
                                               << 0x1aU))) 
                             | ((0x2000000U & ((IData)(
                                                       (vlSelfRef.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg 
                                                        >> 5U)) 
                                               << 0x19U)) 
                                | (0x1000000U & ((IData)(
                                                         (vlSelfRef.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg 
                                                          >> 5U)) 
                                                 << 0x18U))))) 
                         | ((((0x800000U & ((IData)(
                                                    (vlSelfRef.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg 
                                                     >> 5U)) 
                                            << 0x17U)) 
                              | (0x400000U & ((IData)(
                                                      (vlSelfRef.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg 
                                                       >> 5U)) 
                                              << 0x16U))) 
                             | ((0x200000U & ((IData)(
                                                      (vlSelfRef.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg 
                                                       >> 5U)) 
                                              << 0x15U)) 
                                | (0x100000U & ((IData)(
                                                        (vlSelfRef.__PVT__tlbramline__BRA__20__KET____DOT__genblk1__DOT__ptereg 
                                                         >> 5U)) 
                                                << 0x14U)))) 
                            | (((0x80000U & ((IData)(
                                                     (vlSelfRef.__PVT__tlbramline__BRA__19__KET____DOT__genblk1__DOT__ptereg 
                                                      >> 5U)) 
                                             << 0x13U)) 
                                | (0x40000U & ((IData)(
                                                       (vlSelfRef.__PVT__tlbramline__BRA__18__KET____DOT__genblk1__DOT__ptereg 
                                                        >> 5U)) 
                                               << 0x12U))) 
                               | ((0x20000U & ((IData)(
                                                       (vlSelfRef.__PVT__tlbramline__BRA__17__KET____DOT__genblk1__DOT__ptereg 
                                                        >> 5U)) 
                                               << 0x11U)) 
                                  | (0x10000U & ((IData)(
                                                         (vlSelfRef.__PVT__tlbramline__BRA__16__KET____DOT__genblk1__DOT__ptereg 
                                                          >> 5U)) 
                                                 << 0x10U)))))) 
                        | (((((0x8000U & ((IData)((vlSelfRef.__PVT__tlbramline__BRA__15__KET____DOT__genblk1__DOT__ptereg 
                                                   >> 5U)) 
                                          << 0xfU)) 
                              | (0x4000U & ((IData)(
                                                    (vlSelfRef.__PVT__tlbramline__BRA__14__KET____DOT__genblk1__DOT__ptereg 
                                                     >> 5U)) 
                                            << 0xeU))) 
                             | ((0x2000U & ((IData)(
                                                    (vlSelfRef.__PVT__tlbramline__BRA__13__KET____DOT__genblk1__DOT__ptereg 
                                                     >> 5U)) 
                                            << 0xdU)) 
                                | (0x1000U & ((IData)(
                                                      (vlSelfRef.__PVT__tlbramline__BRA__12__KET____DOT__genblk1__DOT__ptereg 
                                                       >> 5U)) 
                                              << 0xcU)))) 
                            | (((0x800U & ((IData)(
                                                   (vlSelfRef.__PVT__tlbramline__BRA__11__KET____DOT__genblk1__DOT__ptereg 
                                                    >> 5U)) 
                                           << 0xbU)) 
                                | (0x400U & ((IData)(
                                                     (vlSelfRef.__PVT__tlbramline__BRA__10__KET____DOT__genblk1__DOT__ptereg 
                                                      >> 5U)) 
                                             << 0xaU))) 
                               | ((0x200U & ((IData)(
                                                     (vlSelfRef.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg 
                                                      >> 5U)) 
                                             << 9U)) 
                                  | (0x100U & ((IData)(
                                                       (vlSelfRef.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg 
                                                        >> 5U)) 
                                               << 8U))))) 
                           | ((((0x80U & ((IData)((vlSelfRef.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg 
                                                   >> 5U)) 
                                          << 7U)) | 
                                (0x40U & ((IData)((vlSelfRef.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg 
                                                   >> 5U)) 
                                          << 6U))) 
                               | ((0x20U & ((IData)(
                                                    (vlSelfRef.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg 
                                                     >> 5U)) 
                                            << 5U)) 
                                  | (0x10U & ((IData)(
                                                      (vlSelfRef.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg 
                                                       >> 5U)) 
                                              << 4U)))) 
                              | (((8U & ((IData)((vlSelfRef.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg 
                                                  >> 5U)) 
                                         << 3U)) | 
                                  (4U & ((IData)((vlSelfRef.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg 
                                                  >> 5U)) 
                                         << 2U))) | 
                                 ((2U & ((IData)((vlSelfRef.__PVT__tlbramline__BRA__1__KET____DOT__genblk1__DOT__ptereg 
                                                  >> 5U)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSelfRef.__PVT__tlbramline__BRA__0__KET____DOT__genblk1__DOT__ptereg 
                                                 >> 5U))))))));
}
