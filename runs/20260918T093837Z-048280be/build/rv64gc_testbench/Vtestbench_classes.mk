# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtestbench.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtestbench \
	Vtestbench___024root__DepSet_hfc24d085__0 \
	Vtestbench___024root__DepSet_hfc24d085__1 \
	Vtestbench___024root__DepSet_hfc24d085__2 \
	Vtestbench___024root__DepSet_hfc24d085__3 \
	Vtestbench___024root__DepSet_hfc24d085__4 \
	Vtestbench___024root__DepSet_hfc24d085__5 \
	Vtestbench___024root__DepSet_hfc24d085__6 \
	Vtestbench___024root__DepSet_hed41eec4__0 \
	Vtestbench___024root__DepSet_hed41eec4__1 \
	Vtestbench___024root__DepSet_hed41eec4__2 \
	Vtestbench___024root__DepSet_hed41eec4__3 \
	Vtestbench_instrNameDecTB__X40__DepSet_h151358f7__0 \
	Vtestbench_pmpchecker__Pz1__DepSet_h44ad58cd__0 \
	Vtestbench_pmpchecker__Pz1__DepSet_h74cb670c__0 \
	Vtestbench_cacheway__pi6__DepSet_hfd209fcc__0 \
	Vtestbench_tlbcam__Pz1_T20_K3d_S9__DepSet_h3b5b3b70__0 \
	Vtestbench_tlbcam__Pz1_T20_K3d_S9__DepSet_h18436516__0 \
	Vtestbench_tlbram__Pz1_T20__DepSet_h3df7cb71__0 \
	Vtestbench_tlbram__Pz1_T20__DepSet_hab70f5b0__0 \
	Vtestbench_tlbcamline__Pz1_K3d_S9__DepSet_hb0406af3__0 \
	Vtestbench_aesinvsbox8__DepSet_h0e9b1f73__0 \
	Vtestbench_aessbox8__DepSet_h12cc5d1c__0 \
	Vtestbench__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtestbench__ConstPool_0 \
	Vtestbench___024root__Slow \
	Vtestbench___024root__DepSet_hfc24d085__0__Slow \
	Vtestbench___024root__DepSet_hfc24d085__1__Slow \
	Vtestbench___024root__DepSet_hed41eec4__0__Slow \
	Vtestbench___024root__DepSet_hed41eec4__1__Slow \
	Vtestbench___024root__DepSet_hed41eec4__2__Slow \
	Vtestbench___024root__DepSet_hed41eec4__3__Slow \
	Vtestbench___024root__DepSet_hed41eec4__4__Slow \
	Vtestbench___024root__DepSet_hed41eec4__5__Slow \
	Vtestbench___024unit__Slow \
	Vtestbench___024unit__DepSet_hf87c9ffd__0__Slow \
	Vtestbench_instrNameDecTB__X40__Slow \
	Vtestbench_instrNameDecTB__X40__DepSet_hc40d6736__0__Slow \
	Vtestbench_pmpchecker__Pz1__Slow \
	Vtestbench_pmpchecker__Pz1__DepSet_h74cb670c__0__Slow \
	Vtestbench_cacheway__pi6__Slow \
	Vtestbench_cacheway__pi6__DepSet_hec3e220d__0__Slow \
	Vtestbench_tlbcam__Pz1_T20_K3d_S9__Slow \
	Vtestbench_tlbcam__Pz1_T20_K3d_S9__DepSet_h18436516__0__Slow \
	Vtestbench_tlbram__Pz1_T20__Slow \
	Vtestbench_tlbram__Pz1_T20__DepSet_h3df7cb71__0__Slow \
	Vtestbench_tlbram__Pz1_T20__DepSet_hab70f5b0__0__Slow \
	Vtestbench_tlbcamline__Pz1_K3d_S9__Slow \
	Vtestbench_tlbcamline__Pz1_K3d_S9__DepSet_h28de5532__0__Slow \
	Vtestbench_aesinvsbox8__Slow \
	Vtestbench_aesinvsbox8__DepSet_hba95a1b2__0__Slow \
	Vtestbench_aessbox8__Slow \
	Vtestbench_aessbox8__DepSet_hc66a635d__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtestbench__Dpi \
	Vtestbench__Trace__0 \
	Vtestbench__Trace__1 \
	Vtestbench__Trace__2 \
	Vtestbench__Trace__3 \
	Vtestbench__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtestbench__Syms \
	Vtestbench__Trace__0__Slow \
	Vtestbench__TraceDecls__0__Slow \
	Vtestbench__Trace__1__Slow \
	Vtestbench__Trace__2__Slow \
	Vtestbench__Trace__3__Slow \
	Vtestbench__Trace__4__Slow \
	Vtestbench__Trace__5__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
