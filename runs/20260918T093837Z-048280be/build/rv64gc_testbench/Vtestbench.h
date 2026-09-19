// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTESTBENCH_H_
#define VERILATED_VTESTBENCH_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtestbench__Syms;
class Vtestbench___024root;
class VerilatedVcdC;
class Vtestbench___024unit;
class Vtestbench_aesinvsbox8;
class Vtestbench_aessbox8;
class Vtestbench_cacheway__pi6;
class Vtestbench_instrNameDecTB__X40;
class Vtestbench_pmpchecker__Pz1;
class Vtestbench_tlbcam__Pz1_T20_K3d_S9;
class Vtestbench_tlbram__Pz1_T20;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtestbench VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtestbench__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtestbench___024unit* const __PVT____024unit;
    Vtestbench_pmpchecker__Pz1* const __PVT__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker;
    Vtestbench_tlbcam__Pz1_T20_K3d_S9* const __PVT__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam;
    Vtestbench_tlbram__Pz1_T20* const __PVT__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram;
    Vtestbench_aessbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox0;
    Vtestbench_aessbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox1;
    Vtestbench_aessbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox2;
    Vtestbench_aessbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox3;
    Vtestbench_aesinvsbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox0;
    Vtestbench_aesinvsbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox1;
    Vtestbench_aesinvsbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox2;
    Vtestbench_aesinvsbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox3;
    Vtestbench_aesinvsbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox4;
    Vtestbench_aesinvsbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox5;
    Vtestbench_aesinvsbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox6;
    Vtestbench_aesinvsbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox7;
    Vtestbench_aessbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox0;
    Vtestbench_aessbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox1;
    Vtestbench_aessbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox2;
    Vtestbench_aessbox8* const __PVT__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox3;
    Vtestbench_pmpchecker__Pz1* const __PVT__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker;
    Vtestbench_tlbcam__Pz1_T20_K3d_S9* const __PVT__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam;
    Vtestbench_tlbram__Pz1_T20* const __PVT__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram;
    Vtestbench_cacheway__pi6* const __PVT__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__;
    Vtestbench_cacheway__pi6* const __PVT__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__;
    Vtestbench_cacheway__pi6* const __PVT__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__;
    Vtestbench_cacheway__pi6* const __PVT__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__;
    Vtestbench_instrNameDecTB__X40* const __PVT__testbench__DOT__it__DOT__fdec;
    Vtestbench_instrNameDecTB__X40* const __PVT__testbench__DOT__it__DOT__ddec;
    Vtestbench_instrNameDecTB__X40* const __PVT__testbench__DOT__it__DOT__edec;
    Vtestbench_instrNameDecTB__X40* const __PVT__testbench__DOT__it__DOT__mdec;
    Vtestbench_instrNameDecTB__X40* const __PVT__testbench__DOT__it__DOT__wdec;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtestbench___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtestbench(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtestbench(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtestbench();
  private:
    VL_UNCOPYABLE(Vtestbench);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
