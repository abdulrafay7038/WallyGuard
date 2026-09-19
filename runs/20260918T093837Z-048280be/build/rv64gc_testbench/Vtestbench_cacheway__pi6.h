// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_CACHEWAY__PI6_H_
#define VERILATED_VTESTBENCH_CACHEWAY__PI6_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_cacheway__pi6 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(FlushStage,0,0);
    VL_IN8(InvalidateFlushStage,0,0);
    VL_IN8(CacheEn,0,0);
    VL_IN8(CacheSetData,5,0);
    VL_IN8(CacheSetTag,5,0);
    VL_IN8(SetValid,0,0);
    VL_IN8(ClearValid,0,0);
    VL_IN8(SetDirty,0,0);
    VL_IN8(SelVictim,0,0);
    VL_IN8(ClearDirty,0,0);
    VL_IN8(FlushCache,0,0);
    VL_IN8(VictimWay,0,0);
    VL_IN8(FlushWay,0,0);
    VL_IN8(InvalidateCache,0,0);
    VL_OUT8(HitWay,0,0);
    VL_OUT8(ValidWay,0,0);
    VL_OUT8(HitDirtyWay,0,0);
    VL_OUT8(DirtyWay,0,0);
    CData/*0:0*/ __PVT__Dirty;
    CData/*0:0*/ __PVT__SelectedWriteWordEn;
    CData/*0:0*/ __PVT__SetValidEN;
    CData/*0:0*/ __PVT__SetValidWay;
    CData/*0:0*/ __PVT__SetDirtyWay;
    CData/*0:0*/ __PVT__ClearDirtyWay;
    CData/*0:0*/ __PVT__SelectedWay;
    CData/*0:0*/ __PVT__InvalidateCacheDelay;
    CData/*5:0*/ __PVT__CacheTagMem__DOT__ram__DOT__addrd;
    CData/*5:0*/ __PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd;
    CData/*5:0*/ __PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd;
    CData/*5:0*/ __PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd;
    CData/*5:0*/ __PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__addrd;
    SData/*15:0*/ __Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__bwe;
    SData/*15:0*/ __Vcellinp__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__bwe;
    SData/*15:0*/ __Vcellinp__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__bwe;
    SData/*15:0*/ __Vcellinp__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__bwe;
    VL_INW(LineWriteData,511,0,16);
    VL_OUTW(ReadDataLineWay,511,0,16);
    IData/*31:0*/ __PVT__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i;
    IData/*31:0*/ __PVT__word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i;
    IData/*31:0*/ __PVT__word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i;
    IData/*31:0*/ __PVT__word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__genblk1__DOT__i;
    VL_IN64(PAdr,55,0);
    VL_IN64(LineByteMask,63,0);
    VL_OUT64(TagWay,43,0);
    QData/*63:0*/ ValidBits;
    QData/*63:0*/ DirtyBits;
    VlUnpacked<QData/*43:0*/, 64> CacheTagMem__DOT__ram__DOT__RAM;
    VlUnpacked<VlWide<4>/*127:0*/, 64> word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM;
    VlUnpacked<VlWide<4>/*127:0*/, 64> word__BRA__1__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM;
    VlUnpacked<VlWide<4>/*127:0*/, 64> word__BRA__2__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM;
    VlUnpacked<VlWide<4>/*127:0*/, 64> word__BRA__3__KET____DOT__wordram__DOT__CacheDataMem__DOT__ram__DOT__RAM;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_cacheway__pi6(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_cacheway__pi6();
    VL_UNCOPYABLE(Vtestbench_cacheway__pi6);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
