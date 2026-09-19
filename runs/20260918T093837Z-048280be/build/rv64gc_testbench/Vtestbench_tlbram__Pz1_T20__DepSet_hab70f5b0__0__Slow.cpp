// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench_tlbram__Pz1_T20.h"

VL_ATTR_COLD void Vtestbench_tlbram__Pz1_T20___stl_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram__2(Vtestbench_tlbram__Pz1_T20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestbench_tlbram__Pz1_T20___stl_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram__2\n"); );
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
}

VL_ATTR_COLD void Vtestbench_tlbram__Pz1_T20___ctor_var_reset(Vtestbench_tlbram__Pz1_T20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtestbench_tlbram__Pz1_T20___ctor_var_reset\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->PTE = VL_RAND_RESET_Q(64);
    vlSelf->Matches = VL_RAND_RESET_I(32);
    vlSelf->WriteEnables = VL_RAND_RESET_I(32);
    vlSelf->PPN = VL_RAND_RESET_Q(44);
    vlSelf->PTEAccessBits = VL_RAND_RESET_I(12);
    vlSelf->PTE_Gs = VL_RAND_RESET_I(32);
    vlSelf->PTE_NAPOTs = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__RamRead[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vcellout__tlbramline__BRA__1__KET____q = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellout__tlbramline__BRA__0__KET____q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__20__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__19__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__18__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__17__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__16__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__15__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__14__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__13__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__12__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__11__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__10__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__1__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->__PVT__tlbramline__BRA__0__KET____DOT__genblk1__DOT__ptereg = VL_RAND_RESET_Q(58);
    vlSelf->tlbramline__BRA__0__KET____DOT____Vcellinp__genblk1__DOT__pteflop____pinNumber4 = VL_RAND_RESET_Q(58);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->__PVT__PTEOr__DOT__genblk1__DOT__mid[__Vi0] = VL_RAND_RESET_Q(64);
    }
}
