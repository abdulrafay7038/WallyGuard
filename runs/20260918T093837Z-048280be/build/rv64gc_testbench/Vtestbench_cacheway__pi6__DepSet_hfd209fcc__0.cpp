// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_cacheway__pi6.h"

extern "C" const char* getenvval(const char* env_name);

VL_INLINE_OPT void Vtestbench_cacheway__pi6____Vdpiimwrap_word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__getenvval_TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__(std::string env_name, std::string &getenvval__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_cacheway__pi6____Vdpiimwrap_word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__getenvval_TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__\n"); );
    // Body
    const char* env_name__Vcvt;
    for (size_t env_name__Vidx = 0; env_name__Vidx < 1; ++env_name__Vidx) env_name__Vcvt = env_name.c_str();
    const char* getenvval__Vfuncrtn__Vcvt;
    getenvval__Vfuncrtn__Vcvt = getenvval(env_name__Vcvt);
    getenvval__Vfuncrtn = VL_CVT_N_CSTR(getenvval__Vfuncrtn__Vcvt);
}

VL_INLINE_OPT void Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____0(Vtestbench_cacheway__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.HitWay = ((IData)(vlSelfRef.ValidWay) 
                        & ((~ (IData)(vlSelfRef.__PVT__InvalidateCacheDelay)) 
                           & (vlSelfRef.CacheTagMem__DOT__ram__DOT__RAM
                              [vlSelfRef.__PVT__CacheTagMem__DOT__ram__DOT__addrd] 
                              == (0xfffffffffffULL 
                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
                                     >> 0xcU)))));
}

VL_INLINE_OPT void Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____1(Vtestbench_cacheway__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SelectedWay = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SelVictim)
                                           ? (1U & 
                                              (((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__VictimWayEnc)) 
                                               >> 3U))
                                           : ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                                               ? ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushWay) 
                                                  >> 3U)
                                               : (IData)(vlSelfRef.HitWay))));
    vlSelfRef.__PVT__ClearDirtyWay = ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearDirty) 
                                      & (IData)(vlSelfRef.__PVT__SelectedWay));
    vlSelfRef.__PVT__SetDirtyWay = ((IData)(vlSelfRef.__PVT__SelectedWay) 
                                    & (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetDirty));
    vlSelfRef.__PVT__SetValidWay = ((IData)(vlSelfRef.__PVT__SelectedWay) 
                                    & (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetValid));
}

VL_INLINE_OPT void Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____2(Vtestbench_cacheway__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____2\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__SetValidWay) {
        vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe = 0xffffU;
        vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe = 0xffffU;
        vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe = 0xffffU;
        vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe = 0xffffU;
    } else {
        vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe 
            = (0xffffU & (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask));
        vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe 
            = (0xffffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask 
                                  >> 0x10U)));
        vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe 
            = (0xffffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask 
                                  >> 0x20U)));
        vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe 
            = (0xffffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask 
                                  >> 0x30U)));
    }
}

VL_INLINE_OPT void Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____3(Vtestbench_cacheway__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____3\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SetValidEN = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                   & (IData)(vlSelfRef.__PVT__SetValidWay));
    vlSelfRef.__PVT__SelectedWriteWordEn = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                            & ((IData)(vlSelfRef.__PVT__SetValidWay) 
                                               | (IData)(vlSelfRef.__PVT__SetDirtyWay)));
}

VL_INLINE_OPT void Vtestbench_cacheway__pi6___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____0(Vtestbench_cacheway__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_cacheway__pi6___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET____0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*43:0*/ __VdlyVal__CacheTagMem__DOT__ram__DOT__RAM__v0;
    __VdlyVal__CacheTagMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*5:0*/ __VdlyDim0__CacheTagMem__DOT__ram__DOT__RAM__v0;
    __VdlyDim0__CacheTagMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheTagMem__DOT__ram__DOT__RAM__v0;
    __VdlySet__CacheTagMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0;
    CData/*7:0*/ __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    CData/*5:0*/ __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    CData/*0:0*/ __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0;
    // Body
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0U;
    __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0U;
    __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0U;
    __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 0U;
    __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 0U;
    __VdlySet__CacheTagMem__DOT__ram__DOT__RAM__v0 = 0U;
    if (((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheEn) 
         & (IData)(vlSelfRef.__PVT__SelectedWriteWordEn))) {
        vlSelfRef.__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i = 0x10U;
        vlSelfRef.__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i = 0x10U;
        vlSelfRef.__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i = 0x10U;
        vlSelfRef.__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i = 0x10U;
        if ((1U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0U]);
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0U] 
                            >> 8U));
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0U] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0U] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 1U;
        }
        if ((0x10U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[1U]);
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 1U;
        }
        if ((0x20U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[1U] 
                            >> 8U));
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 1U;
        }
        if ((0x40U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[1U] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 1U;
        }
        if ((0x80U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[1U] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 1U;
        }
        if ((0x100U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[2U]);
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 1U;
        }
        if ((0x200U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[2U] 
                            >> 8U));
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 1U;
        }
        if ((0x400U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[2U] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 1U;
        }
        if ((0x800U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[2U] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 1U;
        }
        if ((0x1000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[3U]);
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 1U;
        }
        if ((0x2000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[3U] 
                            >> 8U));
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 1U;
        }
        if ((0x4000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[3U] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 1U;
        }
        if ((0x8000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[3U] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[4U]);
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[4U] 
                            >> 8U));
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[4U] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[4U] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 1U;
        }
        if ((0x10U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[5U]);
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 1U;
        }
        if ((0x20U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[5U] 
                            >> 8U));
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 1U;
        }
        if ((0x40U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[5U] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 1U;
        }
        if ((0x80U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[5U] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 1U;
        }
        if ((0x100U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[6U]);
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 1U;
        }
        if ((0x200U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[6U] 
                            >> 8U));
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 1U;
        }
        if ((0x400U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[6U] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 1U;
        }
        if ((0x800U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[6U] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 1U;
        }
        if ((0x1000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[7U]);
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 1U;
        }
        if ((0x2000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[7U] 
                            >> 8U));
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 1U;
        }
        if ((0x4000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[7U] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 1U;
        }
        if ((0x8000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[7U] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[8U]);
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[8U] 
                            >> 8U));
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[8U] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[8U] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 1U;
        }
        if ((0x10U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[9U]);
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 1U;
        }
        if ((0x20U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[9U] 
                            >> 8U));
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 1U;
        }
        if ((0x40U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[9U] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 1U;
        }
        if ((0x80U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[9U] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 1U;
        }
        if ((0x100U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xaU]);
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 1U;
        }
        if ((0x200U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xaU] 
                            >> 8U));
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 1U;
        }
        if ((0x400U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xaU] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 1U;
        }
        if ((0x800U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xaU] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 1U;
        }
        if ((0x1000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xbU]);
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 1U;
        }
        if ((0x2000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xbU] 
                            >> 8U));
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 1U;
        }
        if ((0x4000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xbU] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 1U;
        }
        if ((0x8000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xbU] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xcU]);
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xcU] 
                            >> 8U));
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xcU] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xcU] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3 = 1U;
        }
        if ((0x10U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xdU]);
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4 = 1U;
        }
        if ((0x20U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xdU] 
                            >> 8U));
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5 = 1U;
        }
        if ((0x40U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xdU] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6 = 1U;
        }
        if ((0x80U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xdU] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7 = 1U;
        }
        if ((0x100U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xeU]);
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8 = 1U;
        }
        if ((0x200U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xeU] 
                            >> 8U));
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9 = 1U;
        }
        if ((0x400U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xeU] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10 = 1U;
        }
        if ((0x800U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xeU] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11 = 1U;
        }
        if ((0x1000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 
                = (0xffU & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xfU]);
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12 = 1U;
        }
        if ((0x2000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xfU] 
                            >> 8U));
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13 = 1U;
        }
        if ((0x4000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 
                = (0xffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xfU] 
                            >> 0x10U));
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14 = 1U;
        }
        if ((0x8000U & (IData)(vlSelfRef.__Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe))) {
            __VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 
                = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineWriteData[0xfU] 
                   >> 0x18U);
            __VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 
                = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
            __VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15 = 1U;
        }
    }
    if (((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheEn) 
         & (IData)(vlSelfRef.__PVT__SetValidEN))) {
        __VdlyVal__CacheTagMem__DOT__ram__DOT__RAM__v0 
            = (0xfffffffffffULL & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
                                   >> 0xcU));
        __VdlyDim0__CacheTagMem__DOT__ram__DOT__RAM__v0 
            = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetTag;
        __VdlySet__CacheTagMem__DOT__ram__DOT__RAM__v0 = 1U;
    }
    vlSelfRef.__PVT__InvalidateCacheDelay = 0U;
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0][0U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0][0U]) 
               | (IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1][0U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1][0U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2][0U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2][0U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3][0U] 
            = ((0xffffffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3][0U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4][1U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4][1U]) 
               | (IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5][1U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5][1U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6][1U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6][1U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7][1U] 
            = ((0xffffffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7][1U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8][2U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8][2U]) 
               | (IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9][2U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9][2U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10][2U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10][2U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11][2U] 
            = ((0xffffffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11][2U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12][3U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12][3U]) 
               | (IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13][3U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13][3U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14][3U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14][3U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15) {
        vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15][3U] 
            = ((0xffffffU & vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15][3U]) 
               | ((IData)(__VdlyVal__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0][0U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0][0U]) 
               | (IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1][0U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1][0U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2][0U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2][0U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3][0U] 
            = ((0xffffffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3][0U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4][1U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4][1U]) 
               | (IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5][1U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5][1U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6][1U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6][1U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7][1U] 
            = ((0xffffffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7][1U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8][2U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8][2U]) 
               | (IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9][2U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9][2U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10][2U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10][2U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11][2U] 
            = ((0xffffffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11][2U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12][3U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12][3U]) 
               | (IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13][3U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13][3U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14][3U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14][3U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15) {
        vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15][3U] 
            = ((0xffffffU & vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15][3U]) 
               | ((IData)(__VdlyVal__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0][0U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0][0U]) 
               | (IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1][0U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1][0U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2][0U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2][0U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3][0U] 
            = ((0xffffffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3][0U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4][1U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4][1U]) 
               | (IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5][1U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5][1U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6][1U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6][1U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7][1U] 
            = ((0xffffffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7][1U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8][2U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8][2U]) 
               | (IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9][2U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9][2U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10][2U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10][2U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11][2U] 
            = ((0xffffffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11][2U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12][3U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12][3U]) 
               | (IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13][3U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13][3U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14][3U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14][3U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15) {
        vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15][3U] 
            = ((0xffffffU & vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15][3U]) 
               | ((IData)(__VdlyVal__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0][0U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0][0U]) 
               | (IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v0));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1][0U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1][0U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v1) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2][0U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2][0U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v2) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3][0U] 
            = ((0xffffffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3][0U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v3) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4][1U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4][1U]) 
               | (IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v4));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5][1U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5][1U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v5) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6][1U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6][1U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v6) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7][1U] 
            = ((0xffffffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7][1U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v7) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8][2U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8][2U]) 
               | (IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v8));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9][2U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9][2U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v9) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10][2U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10][2U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v10) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11][2U] 
            = ((0xffffffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11][2U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v11) 
                  << 0x18U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12][3U] 
            = ((0xffffff00U & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12][3U]) 
               | (IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v12));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13][3U] 
            = ((0xffff00ffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13][3U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v13) 
                  << 8U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14][3U] 
            = ((0xff00ffffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14][3U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v14) 
                  << 0x10U));
    }
    if (__VdlySet__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15) {
        vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM[__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15][3U] 
            = ((0xffffffU & vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
                [__VdlyDim0__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15][3U]) 
               | ((IData)(__VdlyVal__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM__v15) 
                  << 0x18U));
    }
    if (__VdlySet__CacheTagMem__DOT__ram__DOT__RAM__v0) {
        vlSelfRef.CacheTagMem__DOT__ram__DOT__RAM[__VdlyDim0__CacheTagMem__DOT__ram__DOT__RAM__v0] 
            = __VdlyVal__CacheTagMem__DOT__ram__DOT__RAM__v0;
    }
    if (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheEn) {
        vlSelfRef.__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd 
            = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
        vlSelfRef.__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd 
            = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
        vlSelfRef.__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd 
            = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
        vlSelfRef.__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd 
            = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData;
        vlSelfRef.__PVT__Dirty = (1U & (IData)((vlSelfRef.DirtyBits 
                                                >> (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetTag))));
        if ((((IData)(vlSelfRef.__PVT__SetDirtyWay) 
              | (IData)(vlSelfRef.__PVT__ClearDirtyWay)) 
             & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)))) {
            vlSelfRef.__PVT__Dirty = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData) 
                                             == (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetTag))
                                             ? (IData)(vlSelfRef.__PVT__SetDirtyWay)
                                             : (IData)(
                                                       (vlSelfRef.DirtyBits 
                                                        >> (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetTag)))));
        }
        vlSelfRef.__PVT__CacheTagMem__DOT__ram__DOT__addrd 
            = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetTag;
        vlSelfRef.ValidWay = (1U & (IData)((vlSelfRef.ValidBits 
                                            >> (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetTag))));
    }
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.ValidBits = 0ULL;
    }
    if (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheEn) {
        if ((((IData)(vlSelfRef.__PVT__SetDirtyWay) 
              | (IData)(vlSelfRef.__PVT__ClearDirtyWay)) 
             & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)))) {
            vlSelfRef.DirtyBits = (((~ (1ULL << (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData))) 
                                    & vlSelfRef.DirtyBits) 
                                   | ((QData)((IData)(vlSelfRef.__PVT__SetDirtyWay)) 
                                      << (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData)));
        }
        if (vlSelfRef.__PVT__SetValidEN) {
            vlSelfRef.ValidBits = (((~ (1ULL << (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData))) 
                                    & vlSelfRef.ValidBits) 
                                   | ((QData)((IData)(vlSelfRef.__PVT__SetValidWay)) 
                                      << (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData)));
        } else if (((~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                    & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                       & (IData)(vlSelfRef.__PVT__SelectedWay)))) {
            vlSelfRef.ValidBits = ((~ (1ULL << (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetData))) 
                                   & vlSelfRef.ValidBits);
        }
    }
    vlSelfRef.HitDirtyWay = ((IData)(vlSelfRef.__PVT__Dirty) 
                             & (IData)(vlSelfRef.ValidWay));
}

VL_INLINE_OPT void Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET____1(Vtestbench_cacheway__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET____1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SelectedWay = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SelVictim)
                                           ? (3U & 
                                              (((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__VictimWayEnc)) 
                                               >> 2U))
                                           : ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                                               ? ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushWay) 
                                                  >> 2U)
                                               : (IData)(vlSelfRef.HitWay))));
    vlSelfRef.__PVT__ClearDirtyWay = ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearDirty) 
                                      & (IData)(vlSelfRef.__PVT__SelectedWay));
    vlSelfRef.__PVT__SetDirtyWay = ((IData)(vlSelfRef.__PVT__SelectedWay) 
                                    & (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetDirty));
    vlSelfRef.__PVT__SetValidWay = ((IData)(vlSelfRef.__PVT__SelectedWay) 
                                    & (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetValid));
}

extern const VlWide<16>/*511:0*/ Vtestbench__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET____1(Vtestbench_cacheway__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET____1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SelectedWay = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SelVictim)
                                           ? (7U & 
                                              (((IData)(1U) 
                                                << (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__VictimWayEnc)) 
                                               >> 1U))
                                           : ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                                               ? ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushWay) 
                                                  >> 1U)
                                               : (IData)(vlSelfRef.HitWay))));
    if (vlSelfRef.__PVT__SelectedWay) {
        vlSelfRef.__PVT__ClearDirtyWay = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearDirty;
        vlSelfRef.__PVT__SetDirtyWay = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetDirty;
        vlSelfRef.TagWay = vlSelfRef.CacheTagMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__CacheTagMem__DOT__ram__DOT__addrd];
        vlSelfRef.ReadDataLineWay[0U] = vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][0U];
        vlSelfRef.ReadDataLineWay[1U] = vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][1U];
        vlSelfRef.ReadDataLineWay[2U] = vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][2U];
        vlSelfRef.ReadDataLineWay[3U] = vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][3U];
        vlSelfRef.ReadDataLineWay[4U] = vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][0U];
        vlSelfRef.ReadDataLineWay[5U] = vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][1U];
        vlSelfRef.ReadDataLineWay[6U] = vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][2U];
        vlSelfRef.ReadDataLineWay[7U] = vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][3U];
        vlSelfRef.ReadDataLineWay[8U] = vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][0U];
        vlSelfRef.ReadDataLineWay[9U] = vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][1U];
        vlSelfRef.ReadDataLineWay[0xaU] = vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][2U];
        vlSelfRef.ReadDataLineWay[0xbU] = vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][3U];
        vlSelfRef.ReadDataLineWay[0xcU] = vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][0U];
        vlSelfRef.ReadDataLineWay[0xdU] = vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][1U];
        vlSelfRef.ReadDataLineWay[0xeU] = vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][2U];
        vlSelfRef.ReadDataLineWay[0xfU] = vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][3U];
        vlSelfRef.__PVT__SetValidWay = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetValid;
    } else {
        vlSelfRef.__PVT__ClearDirtyWay = 0U;
        vlSelfRef.__PVT__SetDirtyWay = 0U;
        vlSelfRef.TagWay = 0ULL;
        vlSelfRef.ReadDataLineWay[0U] = Vtestbench__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.ReadDataLineWay[1U] = Vtestbench__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.ReadDataLineWay[2U] = Vtestbench__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.ReadDataLineWay[3U] = Vtestbench__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.ReadDataLineWay[4U] = Vtestbench__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.ReadDataLineWay[5U] = Vtestbench__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.ReadDataLineWay[6U] = Vtestbench__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.ReadDataLineWay[7U] = Vtestbench__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.ReadDataLineWay[8U] = Vtestbench__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.ReadDataLineWay[9U] = Vtestbench__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.ReadDataLineWay[0xaU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelfRef.ReadDataLineWay[0xbU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelfRef.ReadDataLineWay[0xcU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelfRef.ReadDataLineWay[0xdU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelfRef.ReadDataLineWay[0xeU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelfRef.ReadDataLineWay[0xfU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelfRef.__PVT__SetValidWay = 0U;
    }
}

VL_INLINE_OPT void Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET____1(Vtestbench_cacheway__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_cacheway__pi6___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET____1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SelectedWay = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SelVictim)
                                           ? ((IData)(1U) 
                                              << (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__VictimWayEnc))
                                           : ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                                               ? (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushWay)
                                               : (IData)(vlSelfRef.HitWay))));
    if (vlSelfRef.__PVT__SelectedWay) {
        vlSelfRef.__PVT__ClearDirtyWay = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearDirty;
        vlSelfRef.__PVT__SetDirtyWay = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetDirty;
        vlSelfRef.TagWay = vlSelfRef.CacheTagMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__CacheTagMem__DOT__ram__DOT__addrd];
        vlSelfRef.ReadDataLineWay[0U] = vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][0U];
        vlSelfRef.ReadDataLineWay[1U] = vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][1U];
        vlSelfRef.ReadDataLineWay[2U] = vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][2U];
        vlSelfRef.ReadDataLineWay[3U] = vlSelfRef.word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][3U];
        vlSelfRef.ReadDataLineWay[4U] = vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][0U];
        vlSelfRef.ReadDataLineWay[5U] = vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][1U];
        vlSelfRef.ReadDataLineWay[6U] = vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][2U];
        vlSelfRef.ReadDataLineWay[7U] = vlSelfRef.word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][3U];
        vlSelfRef.ReadDataLineWay[8U] = vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][0U];
        vlSelfRef.ReadDataLineWay[9U] = vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][1U];
        vlSelfRef.ReadDataLineWay[0xaU] = vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][2U];
        vlSelfRef.ReadDataLineWay[0xbU] = vlSelfRef.word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][3U];
        vlSelfRef.ReadDataLineWay[0xcU] = vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][0U];
        vlSelfRef.ReadDataLineWay[0xdU] = vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][1U];
        vlSelfRef.ReadDataLineWay[0xeU] = vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][2U];
        vlSelfRef.ReadDataLineWay[0xfU] = vlSelfRef.word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM
            [vlSelfRef.__PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd][3U];
        vlSelfRef.__PVT__SetValidWay = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetValid;
    } else {
        vlSelfRef.__PVT__ClearDirtyWay = 0U;
        vlSelfRef.__PVT__SetDirtyWay = 0U;
        vlSelfRef.TagWay = 0ULL;
        vlSelfRef.ReadDataLineWay[0U] = Vtestbench__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.ReadDataLineWay[1U] = Vtestbench__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.ReadDataLineWay[2U] = Vtestbench__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.ReadDataLineWay[3U] = Vtestbench__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.ReadDataLineWay[4U] = Vtestbench__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.ReadDataLineWay[5U] = Vtestbench__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.ReadDataLineWay[6U] = Vtestbench__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.ReadDataLineWay[7U] = Vtestbench__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.ReadDataLineWay[8U] = Vtestbench__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.ReadDataLineWay[9U] = Vtestbench__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.ReadDataLineWay[0xaU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelfRef.ReadDataLineWay[0xbU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelfRef.ReadDataLineWay[0xcU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelfRef.ReadDataLineWay[0xdU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelfRef.ReadDataLineWay[0xeU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelfRef.ReadDataLineWay[0xfU] = Vtestbench__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelfRef.__PVT__SetValidWay = 0U;
    }
}
