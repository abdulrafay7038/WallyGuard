Thanks for tracing the consumers. I agree: the `Lx_ADR` terms have no effect because every consumer of `HPTWUpdateDA` is gated on `LEAF`. The revision replaces them with a single `WalkerState == LEAF` gate and the appropriate `PageType` check for RV32 and RV64.

The description now covers loads and instruction fetches as well as stores/AMOs. The existing fix already blocks all of those update paths; the RTL revision simplifies that fix.

I validated the revision locally with a directed Sv39/Svadu suite covering loads, stores, and instruction fetches on both 2 MiB and 1 GiB pages. Each has an aligned control with A/D initially clear. Stores also test A=1,D=0, so `SetDirty` is exercised independently of `~Accessed`.

The 16 test ELFs run independently on Spike and Wally. The fault cases check the cause, trap value, exception PC, and complete leaf PTE. They report expected/actual values through `selfcheck_record`, so the regression identifies the PTE mutation directly rather than inferring it from a watchdog timeout.

Validation against the PR's parent, `275695cdb`, and a fresh build of the revision:

- Spike passes all 16 cases.
- Before the fix, all eight misaligned cases reach the expected page fault and fail specifically on the PTE comparison. Loads/fetches set A; stores set A/D or D. All eight aligned controls pass.
- With the revision, all 16 cases pass on Wally, including the controls that require hardware A/D updates.
- Verilator RTL lint passes for `rv32gc` and `rv64gc`.

This update changes only `src/mmu/hptw.sv`. The directed tests and runner remain local validation artifacts and are not included in the PR. Dynamic coverage here is Sv39; Sv32/Sv48/Sv57 and AMOs are not claimed as dynamically tested. No ACT generator changes are included.
