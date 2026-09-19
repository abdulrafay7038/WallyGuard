// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_AESSBOX8_H_
#define VERILATED_VTESTBENCH_AESSBOX8_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_aessbox8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_OUT8(y,7,0);

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_aessbox8(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_aessbox8();
    VL_UNCOPYABLE(Vtestbench_aessbox8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
