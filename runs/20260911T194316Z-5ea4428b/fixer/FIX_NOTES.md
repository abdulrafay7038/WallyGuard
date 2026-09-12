# RTL Fix Notes

## Bug
In `src/mmu/hptw.sv`, the `ImproperPrivilege` check incorrectly suppressed the 
S-mode instruction fetch privilege check during ITLB walks. The condition 
`~STATUS_SUM & DTLBWalk` evaluated to 0 when `DTLBWalk == 0` (ITLB walk), 
allowing S-mode to fetch instructions from User-mode pages (PTE.U=1) without 
raising ImproperPrivilege. This caused the HPTW to proceed to Step 9 (hardware 
A/D bit update) and write PTE.A=1 to memory before the ITLB raised an 
Instruction Page Fault, violating the RISC-V Privileged Architecture Specification 
v1.12, Section 4.3.2, Step 8.

## Root Cause
`src/mmu/hptw.sv` line 200: `~STATUS_SUM & DTLBWalk` incorrectly requires 
`DTLBWalk == 1` for the privilege check. The RISC-V spec mandates that S-mode 
instruction fetches from User-mode pages are ALWAYS forbidden, regardless of SUM.

## Fix
**File:** `src/mmu/hptw.sv`, line 200  
**Change:** `(~STATUS_SUM & DTLBWalk)` → `(~STATUS_SUM | ~DTLBWalk)`  
**Rationale:** OR instead of AND means:
- DTLB walks (DTLBWalk=1): check passes only when SUM=0 (unchanged behavior)
- ITLB walks (DTLBWalk=0): check always flags improper privilege (fixed)

## Verification
- All 4 directed tests (A, B, C, D) pass on Spike (exit 0)
- All 4 directed tests pass on Verilator (exit 0)
- Before fix: test_a failed on Verilator (exit 134, $fatal) due to illegal PTE.A update
- After fix: test_a passes on Verilator (exit 0, $finish)
- No regression in positive controls (tests B, C, D)
