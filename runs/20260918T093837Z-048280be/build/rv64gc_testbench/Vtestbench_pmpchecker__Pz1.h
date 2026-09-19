// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_PMPCHECKER__PZ1_H_
#define VERILATED_VTESTBENCH_PMPCHECKER__PZ1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_pmpchecker__Pz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(EffectivePrivilegeModeW,1,0);
        VL_IN8(ExecuteAccessF,0,0);
        VL_IN8(WriteAccessM,0,0);
        VL_IN8(ReadAccessM,0,0);
        VL_IN8(Size,1,0);
        VL_IN8(CMOpM,3,0);
        VL_OUT8(PMPInstrAccessFaultF,0,0);
        VL_OUT8(PMPLoadAccessFaultM,0,0);
        VL_OUT8(PMPStoreAmoAccessFaultM,0,0);
        CData/*0:0*/ __PVT__EnforcePMP;
        CData/*0:0*/ __PVT__MatchingR;
        CData/*0:0*/ __PVT__MatchingW;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__14__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__13__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__12__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__11__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__10__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__9__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__8__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__7__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__6__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__5__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__4__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__3__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__2__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__1__KET____Match;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs_end__BRA__0__KET____Match;
        CData/*0:0*/ __VdfgRegularize_hb013dbb0_1_0;
        CData/*0:0*/ __VdfgRegularize_hb013dbb0_1_1;
        CData/*0:0*/ __VdfgRegularize_hb013dbb0_1_4;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__14__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__13__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__12__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__11__KET____DOT__PAltPMPAdr;
    };
    struct {
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__10__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__9__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__8__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__7__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__6__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__5__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__4__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__3__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__2__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__1__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs_end__BRA__0__KET____DOT__TORMatch;
        CData/*1:0*/ __VdfgRegularize_hd0c7ee50_0_50;
        CData/*2:0*/ __VdfgRegularize_hd0c7ee50_0_51;
        CData/*3:0*/ __VdfgRegularize_hd0c7ee50_0_52;
        CData/*4:0*/ __VdfgRegularize_hd0c7ee50_0_53;
        CData/*5:0*/ __VdfgRegularize_hd0c7ee50_0_54;
        CData/*6:0*/ __VdfgRegularize_hd0c7ee50_0_55;
        CData/*7:0*/ __VdfgRegularize_hd0c7ee50_0_56;
        SData/*15:0*/ __PVT__FirstMatch;
        SData/*15:0*/ __PVT__L;
        SData/*15:0*/ __PVT__X;
        SData/*15:0*/ __PVT__W;
        SData/*15:0*/ __PVT__R;
        SData/*15:0*/ __PVT__EndFirstMatch;
        SData/*8:0*/ __VdfgRegularize_hd0c7ee50_0_57;
        SData/*9:0*/ __VdfgRegularize_hd0c7ee50_0_58;
        SData/*10:0*/ __VdfgRegularize_hd0c7ee50_0_59;
        SData/*11:0*/ __VdfgRegularize_hd0c7ee50_0_60;
        SData/*12:0*/ __VdfgRegularize_hd0c7ee50_0_61;
        SData/*13:0*/ __VdfgRegularize_hd0c7ee50_0_62;
        SData/*13:0*/ __VdfgRegularize_hd0c7ee50_0_76;
        VL_IN64(PhysicalAddress,55,0);
        QData/*55:0*/ __PVT__EndAddress;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__15__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__NABase;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        QData/*55:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__NABase;
    };
    struct {
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_0;
        VL_IN8(PMPCFG_ARRAY_REGW[16],7,0);
        VL_IN64(PMPADDR_ARRAY_REGW[16],53,0);
    };

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_pmpchecker__Pz1(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_pmpchecker__Pz1();
    VL_UNCOPYABLE(Vtestbench_pmpchecker__Pz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
