# RTL Fix: HPTW Misaligned Superpage A/D Update Bug

## Root Cause
In `src/mmu/hptw.sv`, the `Misaligned` signal was only asserted when `WalkerState` was in
the `L*_ADR` states (e.g., `L1_ADR` for gigapages, `L0_ADR` for megapages). When the FSM
transitioned from an ADR state to the `LEAF` state, `Misaligned` dropped to 0 because
`WalkerState` was no longer `L*_ADR`.

This caused `OtherPageFault` (line 237) to evaluate to 0, which allowed `HPTWUpdateDA`
(line 243) to assert, driving the FSM into `UPDATE_PTE`. In `UPDATE_PTE`, the walker
spuriously wrote Accessed (A=1) and Dirty (D=1) bits into the PTE in physical memory
before the DTLB could detect the misaligned superpage and raise the appropriate page fault.

This directly violates Step 6 of the RISC-V Privileged Architecture Virtual Address
Translation Process (Section 4.3.2), which requires that misaligned superpage detection
must stop translation and raise a page fault **before** Step 7 (Svadu A/D update) executes.

## Minimal Fix
Extended the `Misaligned` signal in both the RV32 and RV64 code paths to also evaluate
in the `LEAF` state. Since the `PageType` register correctly reflects the page type
(gigapage, megapage, etc.) in the LEAF state, the fix uses `PageType` to re-check the
misalignment conditions:

- `PageType == 3'b100` (petapage) → check `|(CurrentPPN[35:0])`
- `PageType == 3'b011` (terapage) → check `|(CurrentPPN[26:0])`
- `PageType == 3'b010` (gigapage) → check `|(CurrentPPN[17:0])`
- `PageType == 3'b001` (megapage) → check `|(CurrentPPN[8:0])`

## File Changed
- `src/mmu/hptw.sv`: Lines 307, 317-320 (RV32 and RV64 Misaligned signal definitions)

## Verification
- Spike (1.1.1-dev, --isa=rv64gc_svadu): All three tests pass (exit 0)
- Wally DUT (Verilator 5.036): All three tests pass (exit 0)
- Reproducer exits 0 (bug NOT reproduced = correct behavior after fix)
- Reproducer script: `$TEST_DIR/reproducer.sh`

## Correctness Argument
1. `PageType` is a registered signal set in the `_RD` states (L4_RD through L0_RD) before
   any transition to `LEAF`. The FSM guarantees that `PageType` is stable and correct in
   the `LEAF` state.
2. `CurrentPPN` is derived from the `PTE` register, which captures the PTE from memory
   during `_RD` states. It remains valid in the `LEAF` state.
3. In the `LEAF` state, `Misaligned` being high causes `OtherPageFault` to assert, which
   prevents `HPTWUpdateDA` from asserting. This prevents the FSM from entering `UPDATE_PTE`,
   preserving the PTE in memory unmodified.
4. The TLB entry is still written (`DTLBWriteM` uses `~HPTWUpdateDA`), consistent with the
   non-ADUE behavior. The TLB has its own misalignment check and will raise the appropriate
   page fault on access replay.
5. No new registers, wires, or FSM states are added. Only existing combinational logic is
   extended.
