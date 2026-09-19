// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_pmpchecker__Pz1.h"

VL_INLINE_OPT void Vtestbench_pmpchecker__Pz1___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker__0(Vtestbench_pmpchecker__Pz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pmpchecker__Pz1___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __VdfgRegularize_hd0c7ee50_0_64;
    __VdfgRegularize_hd0c7ee50_0_64 = 0;
    CData/*2:0*/ __VdfgRegularize_hd0c7ee50_0_65;
    __VdfgRegularize_hd0c7ee50_0_65 = 0;
    CData/*3:0*/ __VdfgRegularize_hd0c7ee50_0_66;
    __VdfgRegularize_hd0c7ee50_0_66 = 0;
    CData/*4:0*/ __VdfgRegularize_hd0c7ee50_0_67;
    __VdfgRegularize_hd0c7ee50_0_67 = 0;
    CData/*5:0*/ __VdfgRegularize_hd0c7ee50_0_68;
    __VdfgRegularize_hd0c7ee50_0_68 = 0;
    CData/*6:0*/ __VdfgRegularize_hd0c7ee50_0_69;
    __VdfgRegularize_hd0c7ee50_0_69 = 0;
    CData/*7:0*/ __VdfgRegularize_hd0c7ee50_0_70;
    __VdfgRegularize_hd0c7ee50_0_70 = 0;
    SData/*8:0*/ __VdfgRegularize_hd0c7ee50_0_71;
    __VdfgRegularize_hd0c7ee50_0_71 = 0;
    SData/*9:0*/ __VdfgRegularize_hd0c7ee50_0_72;
    __VdfgRegularize_hd0c7ee50_0_72 = 0;
    SData/*10:0*/ __VdfgRegularize_hd0c7ee50_0_73;
    __VdfgRegularize_hd0c7ee50_0_73 = 0;
    SData/*11:0*/ __VdfgRegularize_hd0c7ee50_0_74;
    __VdfgRegularize_hd0c7ee50_0_74 = 0;
    SData/*12:0*/ __VdfgRegularize_hd0c7ee50_0_75;
    __VdfgRegularize_hd0c7ee50_0_75 = 0;
    // Body
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__14__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xeU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__13__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xdU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__12__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xcU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__11__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xbU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__10__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xaU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__9__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[9U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__8__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[8U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__7__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[7U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__6__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[6U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__5__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[5U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__4__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[4U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__3__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[3U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__2__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[2U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__1__KET____DOT__PAltPMPAdr 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[1U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__0__KET____DOT__TORMatch 
        = ((0xffffffffffffffULL & (3ULL + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xeU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xdU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xcU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xbU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xaU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[9U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[8U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[7U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[6U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[5U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[4U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[3U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[2U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[1U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0U] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0xeU] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__14__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__13__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__14__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__14__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xeU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xeU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0xdU] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__13__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__12__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__13__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__13__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xdU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xdU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0xcU] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__12__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__11__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__12__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__12__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xcU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xcU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0xbU] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__11__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__10__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__11__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__11__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xbU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xbU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0xaU] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__10__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__9__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__10__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__10__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xaU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xaU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[9U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__9__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__8__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__9__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__9__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[9U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[9U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[8U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__8__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__7__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__8__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__8__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[8U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[8U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[7U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__7__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__6__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__7__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__7__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[7U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[7U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[6U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__6__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__5__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__6__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__6__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[6U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[6U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[5U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__5__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__4__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__5__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__5__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[5U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[5U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[4U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__4__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__3__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__4__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__4__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[4U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[4U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[3U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__3__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__2__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__3__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__3__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[3U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[3U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[2U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__2__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__1__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__2__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__2__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[2U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[2U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__0__KET____Match 
            = vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__0__KET____DOT__TORMatch;
        vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch 
            = vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch;
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__0__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[1U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__1__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__0__KET____DOT__TORMatch)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__1__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__1__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[1U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__NABase 
                                                  ^ 
                                                  (3ULL 
                                                   + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[1U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    __VdfgRegularize_hd0c7ee50_0_64 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__1__KET____Match) 
                                        << 1U) | (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__0__KET____Match));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_50 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch));
    __VdfgRegularize_hd0c7ee50_0_65 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__2__KET____Match) 
                                        << 2U) | (IData)(__VdfgRegularize_hd0c7ee50_0_64));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_51 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_50));
    __VdfgRegularize_hd0c7ee50_0_66 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__3__KET____Match) 
                                        << 3U) | (IData)(__VdfgRegularize_hd0c7ee50_0_65));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_52 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_51));
    __VdfgRegularize_hd0c7ee50_0_67 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__4__KET____Match) 
                                        << 4U) | (IData)(__VdfgRegularize_hd0c7ee50_0_66));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_53 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_52));
    __VdfgRegularize_hd0c7ee50_0_68 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__5__KET____Match) 
                                        << 5U) | (IData)(__VdfgRegularize_hd0c7ee50_0_67));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_54 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match) 
                                                  << 5U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_53));
    __VdfgRegularize_hd0c7ee50_0_69 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__6__KET____Match) 
                                        << 6U) | (IData)(__VdfgRegularize_hd0c7ee50_0_68));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_55 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match) 
                                                  << 6U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_54));
    __VdfgRegularize_hd0c7ee50_0_70 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__7__KET____Match) 
                                        << 7U) | (IData)(__VdfgRegularize_hd0c7ee50_0_69));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_56 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_55));
    __VdfgRegularize_hd0c7ee50_0_71 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__8__KET____Match) 
                                        << 8U) | (IData)(__VdfgRegularize_hd0c7ee50_0_70));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_57 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_56));
    __VdfgRegularize_hd0c7ee50_0_72 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__9__KET____Match) 
                                        << 9U) | (IData)(__VdfgRegularize_hd0c7ee50_0_71));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_58 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match) 
                                                  << 9U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_57));
    __VdfgRegularize_hd0c7ee50_0_73 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__10__KET____Match) 
                                        << 0xaU) | (IData)(__VdfgRegularize_hd0c7ee50_0_72));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_59 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match) 
                                                  << 0xaU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_58));
    __VdfgRegularize_hd0c7ee50_0_74 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__11__KET____Match) 
                                        << 0xbU) | (IData)(__VdfgRegularize_hd0c7ee50_0_73));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_60 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match) 
                                                  << 0xbU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_59));
    __VdfgRegularize_hd0c7ee50_0_75 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__12__KET____Match) 
                                        << 0xcU) | (IData)(__VdfgRegularize_hd0c7ee50_0_74));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_61 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match) 
                                                  << 0xcU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_60));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_76 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__13__KET____Match) 
                                                  << 0xdU) 
                                                 | (IData)(__VdfgRegularize_hd0c7ee50_0_75));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_62 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match) 
                                                  << 0xdU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_61));
    vlSelfRef.__PVT__EndFirstMatch = (((((((~ ((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__14__KET____Match) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_76)))) 
                                           & ((1U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [0xfU] 
                                                   >> 3U)))
                                               ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__14__KET____DOT__PAltPMPAdr)) 
                                                  & ((0xffffffffffffffULL 
                                                      & (3ULL 
                                                         + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                                     < 
                                                     (vlSelfRef.PMPADDR_ARRAY_REGW
                                                      [0xfU] 
                                                      << 2U)))
                                               : ((
                                                   vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [0xfU] 
                                                   >> 4U) 
                                                  & (0xffffffffffffffULL 
                                                     == 
                                                     (0xffffffffffffffULL 
                                                      & (3ULL 
                                                         | ((~ 
                                                             (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__15__KET____DOT__NABase 
                                                              ^ 
                                                              (3ULL 
                                                               + vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero))) 
                                                            | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                               << 2U)))))))) 
                                          << 0xfU) 
                                         | (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_76)))) 
                                             & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__14__KET____Match)) 
                                            << 0xeU)) 
                                        | ((((~ (IData)(
                                                        (0U 
                                                         != (IData)(__VdfgRegularize_hd0c7ee50_0_75)))) 
                                             & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__13__KET____Match)) 
                                            << 0xdU) 
                                           | (((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_74)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__12__KET____Match)) 
                                              << 0xcU))) 
                                       | (((((~ (IData)(
                                                        (0U 
                                                         != (IData)(__VdfgRegularize_hd0c7ee50_0_73)))) 
                                             & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__11__KET____Match)) 
                                            << 0xbU) 
                                           | (((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_72)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__10__KET____Match)) 
                                              << 0xaU)) 
                                          | ((((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_71)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__9__KET____Match)) 
                                              << 9U) 
                                             | (((~ (IData)(
                                                            (0U 
                                                             != (IData)(__VdfgRegularize_hd0c7ee50_0_70)))) 
                                                 & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__8__KET____Match)) 
                                                << 8U)))) 
                                      | ((((((~ (IData)(
                                                        (0U 
                                                         != (IData)(__VdfgRegularize_hd0c7ee50_0_69)))) 
                                             & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__7__KET____Match)) 
                                            << 7U) 
                                           | (((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_68)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__6__KET____Match)) 
                                              << 6U)) 
                                          | ((((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_67)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__5__KET____Match)) 
                                              << 5U) 
                                             | (((~ (IData)(
                                                            (0U 
                                                             != (IData)(__VdfgRegularize_hd0c7ee50_0_66)))) 
                                                 & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__4__KET____Match)) 
                                                << 4U))) 
                                         | (((((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_65)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__3__KET____Match)) 
                                              << 3U) 
                                             | (((~ (IData)(
                                                            (0U 
                                                             != (IData)(__VdfgRegularize_hd0c7ee50_0_64)))) 
                                                 & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__2__KET____Match)) 
                                                << 2U)) 
                                            | ((((~ (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__0__KET____Match)) 
                                                 & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__1__KET____Match)) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__0__KET____Match)))));
    vlSelfRef.__PVT__FirstMatch = (((((((~ ((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match) 
                                            | (0U != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_62)))) 
                                        & ((1U == (3U 
                                                   & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                      [0xfU] 
                                                      >> 3U)))
                                            ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr)) 
                                               & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                                  < 
                                                  (vlSelfRef.PMPADDR_ARRAY_REGW
                                                   [0xfU] 
                                                   << 2U)))
                                            : ((vlSelfRef.PMPCFG_ARRAY_REGW
                                                [0xfU] 
                                                >> 4U) 
                                               & (0xffffffffffffffULL 
                                                  == 
                                                  (0xffffffffffffffULL 
                                                   & (3ULL 
                                                      | ((~ 
                                                          (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__15__KET____DOT__NABase 
                                                           ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                                         | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                            << 2U)))))))) 
                                       << 0xfU) | (
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_62)))) 
                                                    & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match)) 
                                                   << 0xeU)) 
                                     | ((((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_61)))) 
                                          & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match)) 
                                         << 0xdU) | 
                                        (((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_60)))) 
                                          & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match)) 
                                         << 0xcU))) 
                                    | (((((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_59)))) 
                                          & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match)) 
                                         << 0xbU) | 
                                        (((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_58)))) 
                                          & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match)) 
                                         << 0xaU)) 
                                       | ((((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_57)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match)) 
                                           << 9U) | 
                                          (((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_56)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match)) 
                                           << 8U)))) 
                                   | ((((((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_55)))) 
                                          & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match)) 
                                         << 7U) | (
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_54)))) 
                                                    & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match)) 
                                                   << 6U)) 
                                       | ((((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_53)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match)) 
                                           << 5U) | 
                                          (((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_52)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match)) 
                                           << 4U))) 
                                      | (((((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_51)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match)) 
                                           << 3U) | 
                                          (((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_50)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match)) 
                                           << 2U)) 
                                         | ((((~ (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch)) 
                                              & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match)) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch)))));
}

VL_INLINE_OPT void Vtestbench_pmpchecker__Pz1___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker__0(Vtestbench_pmpchecker__Pz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pmpchecker__Pz1___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __VdfgRegularize_hd0c7ee50_0_64;
    __VdfgRegularize_hd0c7ee50_0_64 = 0;
    CData/*2:0*/ __VdfgRegularize_hd0c7ee50_0_65;
    __VdfgRegularize_hd0c7ee50_0_65 = 0;
    CData/*3:0*/ __VdfgRegularize_hd0c7ee50_0_66;
    __VdfgRegularize_hd0c7ee50_0_66 = 0;
    CData/*4:0*/ __VdfgRegularize_hd0c7ee50_0_67;
    __VdfgRegularize_hd0c7ee50_0_67 = 0;
    CData/*5:0*/ __VdfgRegularize_hd0c7ee50_0_68;
    __VdfgRegularize_hd0c7ee50_0_68 = 0;
    CData/*6:0*/ __VdfgRegularize_hd0c7ee50_0_69;
    __VdfgRegularize_hd0c7ee50_0_69 = 0;
    CData/*7:0*/ __VdfgRegularize_hd0c7ee50_0_70;
    __VdfgRegularize_hd0c7ee50_0_70 = 0;
    SData/*8:0*/ __VdfgRegularize_hd0c7ee50_0_71;
    __VdfgRegularize_hd0c7ee50_0_71 = 0;
    SData/*9:0*/ __VdfgRegularize_hd0c7ee50_0_72;
    __VdfgRegularize_hd0c7ee50_0_72 = 0;
    SData/*10:0*/ __VdfgRegularize_hd0c7ee50_0_73;
    __VdfgRegularize_hd0c7ee50_0_73 = 0;
    SData/*11:0*/ __VdfgRegularize_hd0c7ee50_0_74;
    __VdfgRegularize_hd0c7ee50_0_74 = 0;
    SData/*12:0*/ __VdfgRegularize_hd0c7ee50_0_75;
    __VdfgRegularize_hd0c7ee50_0_75 = 0;
    // Body
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xeU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xdU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xcU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xbU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xaU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[9U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[8U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[7U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[6U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[5U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[4U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[3U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[2U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[1U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0U] << 2U));
    vlSelfRef.__PVT__EndAddress = (0xffffffffffffffULL 
                                   & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
                                      + (QData)((IData)(
                                                        (7U 
                                                         & (VL_POWSS_III(3,32,2, (IData)(2U), (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__dmmu__DOT__dmmu__Size), 1,0) 
                                                            - (IData)(1U)))))));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__14__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [0xeU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__13__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [0xdU] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0xeU] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__14__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__13__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__14__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xeU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__14__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xeU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__12__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [0xcU] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0xdU] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__13__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__12__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__13__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xdU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__13__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xdU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__11__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [0xbU] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0xcU] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__12__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__11__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__12__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xcU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__12__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xcU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__10__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [0xaU] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0xbU] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__11__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__10__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__11__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xbU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__11__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xbU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__9__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [9U] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0xaU] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__10__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__9__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__10__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xaU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__10__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0xaU] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__8__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [8U] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[9U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__9__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__8__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__9__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[9U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__9__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[9U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__7__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [7U] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[8U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__8__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__7__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__8__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[8U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__8__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[8U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__6__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [6U] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[7U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__7__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__6__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__7__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[7U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__7__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[7U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__5__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [5U] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[6U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__6__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__5__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__6__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[6U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__6__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[6U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__4__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [4U] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[5U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__5__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__4__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__5__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[5U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__5__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[5U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__3__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [3U] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[4U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__4__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__3__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__4__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[4U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__4__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[4U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__2__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [2U] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[3U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__3__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__2__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__3__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[3U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__3__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[3U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__1__KET____DOT__PAltPMPAdr 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [1U] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[2U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__2__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__1__KET____DOT__PAltPMPAdr)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__2__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[2U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__2__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[2U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__0__KET____DOT__TORMatch 
        = (vlSelfRef.__PVT__EndAddress < (vlSelfRef.PMPADDR_ARRAY_REGW
                                          [0U] << 2U));
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[1U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__1__KET____Match 
            = ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__0__KET____DOT__TORMatch)) 
               & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__1__KET____DOT__PAltPMPAdr));
    } else {
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[1U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__1__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[1U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    if ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW[0U] 
                      >> 3U)))) {
        vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch 
            = vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch;
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__0__KET____Match 
            = vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__0__KET____DOT__TORMatch;
    } else {
        vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__NABase 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
        vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__0__KET____Match 
            = ((vlSelfRef.PMPCFG_ARRAY_REGW[0U] >> 4U) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__NABase 
                                                  ^ vlSelfRef.__PVT__EndAddress)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                 << 2U))))));
    }
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_50 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_51 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_50));
    __VdfgRegularize_hd0c7ee50_0_64 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__1__KET____Match) 
                                        << 1U) | (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__0__KET____Match));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_52 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_51));
    __VdfgRegularize_hd0c7ee50_0_65 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__2__KET____Match) 
                                        << 2U) | (IData)(__VdfgRegularize_hd0c7ee50_0_64));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_53 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_52));
    __VdfgRegularize_hd0c7ee50_0_66 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__3__KET____Match) 
                                        << 3U) | (IData)(__VdfgRegularize_hd0c7ee50_0_65));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_54 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match) 
                                                  << 5U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_53));
    __VdfgRegularize_hd0c7ee50_0_67 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__4__KET____Match) 
                                        << 4U) | (IData)(__VdfgRegularize_hd0c7ee50_0_66));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_55 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match) 
                                                  << 6U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_54));
    __VdfgRegularize_hd0c7ee50_0_68 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__5__KET____Match) 
                                        << 5U) | (IData)(__VdfgRegularize_hd0c7ee50_0_67));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_56 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_55));
    __VdfgRegularize_hd0c7ee50_0_69 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__6__KET____Match) 
                                        << 6U) | (IData)(__VdfgRegularize_hd0c7ee50_0_68));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_57 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_56));
    __VdfgRegularize_hd0c7ee50_0_70 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__7__KET____Match) 
                                        << 7U) | (IData)(__VdfgRegularize_hd0c7ee50_0_69));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_58 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match) 
                                                  << 9U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_57));
    __VdfgRegularize_hd0c7ee50_0_71 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__8__KET____Match) 
                                        << 8U) | (IData)(__VdfgRegularize_hd0c7ee50_0_70));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_59 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match) 
                                                  << 0xaU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_58));
    __VdfgRegularize_hd0c7ee50_0_72 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__9__KET____Match) 
                                        << 9U) | (IData)(__VdfgRegularize_hd0c7ee50_0_71));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_60 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match) 
                                                  << 0xbU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_59));
    __VdfgRegularize_hd0c7ee50_0_73 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__10__KET____Match) 
                                        << 0xaU) | (IData)(__VdfgRegularize_hd0c7ee50_0_72));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_61 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match) 
                                                  << 0xcU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_60));
    __VdfgRegularize_hd0c7ee50_0_74 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__11__KET____Match) 
                                        << 0xbU) | (IData)(__VdfgRegularize_hd0c7ee50_0_73));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_62 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match) 
                                                  << 0xdU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_61));
    __VdfgRegularize_hd0c7ee50_0_75 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__12__KET____Match) 
                                        << 0xcU) | (IData)(__VdfgRegularize_hd0c7ee50_0_74));
    vlSelfRef.__PVT__FirstMatch = (((((((~ ((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match) 
                                            | (0U != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_62)))) 
                                        & ((1U == (3U 
                                                   & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                      [0xfU] 
                                                      >> 3U)))
                                            ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr)) 
                                               & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
                                                  < 
                                                  (vlSelfRef.PMPADDR_ARRAY_REGW
                                                   [0xfU] 
                                                   << 2U)))
                                            : ((vlSelfRef.PMPCFG_ARRAY_REGW
                                                [0xfU] 
                                                >> 4U) 
                                               & (0xffffffffffffffULL 
                                                  == 
                                                  (0xffffffffffffffULL 
                                                   & (3ULL 
                                                      | ((~ 
                                                          (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__15__KET____DOT__NABase 
                                                           ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                                         | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                            << 2U)))))))) 
                                       << 0xfU) | (
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_62)))) 
                                                    & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match)) 
                                                   << 0xeU)) 
                                     | ((((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_61)))) 
                                          & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match)) 
                                         << 0xdU) | 
                                        (((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_60)))) 
                                          & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match)) 
                                         << 0xcU))) 
                                    | (((((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_59)))) 
                                          & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match)) 
                                         << 0xbU) | 
                                        (((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_58)))) 
                                          & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match)) 
                                         << 0xaU)) 
                                       | ((((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_57)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match)) 
                                           << 9U) | 
                                          (((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_56)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match)) 
                                           << 8U)))) 
                                   | ((((((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_55)))) 
                                          & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match)) 
                                         << 7U) | (
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_54)))) 
                                                    & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match)) 
                                                   << 6U)) 
                                       | ((((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_53)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match)) 
                                           << 5U) | 
                                          (((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_52)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match)) 
                                           << 4U))) 
                                      | (((((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_51)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match)) 
                                           << 3U) | 
                                          (((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_50)))) 
                                            & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match)) 
                                           << 2U)) 
                                         | ((((~ (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch)) 
                                              & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match)) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch)))));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_76 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__13__KET____Match) 
                                                  << 0xdU) 
                                                 | (IData)(__VdfgRegularize_hd0c7ee50_0_75));
    vlSelfRef.__PVT__MatchingW = (0U != ((IData)(vlSelfRef.__PVT__W) 
                                         & (IData)(vlSelfRef.__PVT__FirstMatch)));
    vlSelfRef.__PVT__MatchingR = (0U != ((IData)(vlSelfRef.__PVT__R) 
                                         & (IData)(vlSelfRef.__PVT__FirstMatch)));
    vlSelfRef.__PVT__EnforcePMP = ((3U != (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__EffectivePrivilegeModeW)) 
                                   | (0U != ((IData)(vlSelfRef.__PVT__L) 
                                             & (IData)(vlSelfRef.__PVT__FirstMatch))));
    vlSelfRef.__PVT__EndFirstMatch = (((((((~ ((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__14__KET____Match) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_76)))) 
                                           & ((1U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [0xfU] 
                                                   >> 3U)))
                                               ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs_end__BRA__14__KET____DOT__PAltPMPAdr)) 
                                                  & (vlSelfRef.__PVT__EndAddress 
                                                     < 
                                                     (vlSelfRef.PMPADDR_ARRAY_REGW
                                                      [0xfU] 
                                                      << 2U)))
                                               : ((
                                                   vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [0xfU] 
                                                   >> 4U) 
                                                  & (0xffffffffffffffULL 
                                                     == 
                                                     (0xffffffffffffffULL 
                                                      & (3ULL 
                                                         | ((~ 
                                                             (vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__15__KET____DOT__NABase 
                                                              ^ vlSelfRef.__PVT__EndAddress)) 
                                                            | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_0 
                                                               << 2U)))))))) 
                                          << 0xfU) 
                                         | (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_76)))) 
                                             & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__14__KET____Match)) 
                                            << 0xeU)) 
                                        | ((((~ (IData)(
                                                        (0U 
                                                         != (IData)(__VdfgRegularize_hd0c7ee50_0_75)))) 
                                             & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__13__KET____Match)) 
                                            << 0xdU) 
                                           | (((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_74)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__12__KET____Match)) 
                                              << 0xcU))) 
                                       | (((((~ (IData)(
                                                        (0U 
                                                         != (IData)(__VdfgRegularize_hd0c7ee50_0_73)))) 
                                             & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__11__KET____Match)) 
                                            << 0xbU) 
                                           | (((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_72)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__10__KET____Match)) 
                                              << 0xaU)) 
                                          | ((((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_71)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__9__KET____Match)) 
                                              << 9U) 
                                             | (((~ (IData)(
                                                            (0U 
                                                             != (IData)(__VdfgRegularize_hd0c7ee50_0_70)))) 
                                                 & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__8__KET____Match)) 
                                                << 8U)))) 
                                      | ((((((~ (IData)(
                                                        (0U 
                                                         != (IData)(__VdfgRegularize_hd0c7ee50_0_69)))) 
                                             & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__7__KET____Match)) 
                                            << 7U) 
                                           | (((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_68)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__6__KET____Match)) 
                                              << 6U)) 
                                          | ((((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_67)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__5__KET____Match)) 
                                              << 5U) 
                                             | (((~ (IData)(
                                                            (0U 
                                                             != (IData)(__VdfgRegularize_hd0c7ee50_0_66)))) 
                                                 & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__4__KET____Match)) 
                                                << 4U))) 
                                         | (((((~ (IData)(
                                                          (0U 
                                                           != (IData)(__VdfgRegularize_hd0c7ee50_0_65)))) 
                                               & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__3__KET____Match)) 
                                              << 3U) 
                                             | (((~ (IData)(
                                                            (0U 
                                                             != (IData)(__VdfgRegularize_hd0c7ee50_0_64)))) 
                                                 & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__2__KET____Match)) 
                                                << 2U)) 
                                            | ((((~ (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__0__KET____Match)) 
                                                 & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__1__KET____Match)) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs_end__BRA__0__KET____Match)))));
    vlSelfRef.__VdfgRegularize_hb013dbb0_1_4 = ((IData)(vlSelfRef.__PVT__EnforcePMP) 
                                                & (IData)(
                                                          (2U 
                                                           == (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM))));
    vlSelfRef.__VdfgRegularize_hb013dbb0_1_1 = ((IData)(vlSelfRef.__PVT__EnforcePMP) 
                                                & (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM));
    vlSelfRef.__VdfgRegularize_hb013dbb0_1_0 = ((IData)(vlSelfRef.__PVT__FirstMatch) 
                                                != (IData)(vlSelfRef.__PVT__EndFirstMatch));
}
