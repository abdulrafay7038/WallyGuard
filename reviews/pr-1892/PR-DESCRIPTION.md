## Problem

With Svadu hardware A/D updates enabled, translation through a misaligned
superpage can modify its leaf PTE before raising the page fault. Loads and
instruction fetches with A=0 spuriously set A; stores/AMOs can set A and D,
including setting D when A is already 1.

The walker previously checked alignment only in `Lx_ADR` states. Those checks
became false on entry to `LEAF`, where `HPTWUpdateDA` controls the PTE update.
The subsequent TLB check still raised the page fault, but the PTE had already
changed. Misaligned-superpage validation must precede the conditional A/D
update in the RISC-V address-translation algorithm.

This addresses the misaligned-superpage subcase of #1833, item 4.

## Change

Check `Misaligned` in `LEAF` using the registered `PageType` to select the
appropriate PPN alignment condition. All consumers are gated on `LEAF`, so
the old `Lx_ADR` terms are removed. The change handles RV32 and RV64 without
adding registers or FSM states.

The only file changed in this PR is `src/mmu/hptw.sv`.

## Local validation

Validated locally with a directed Sv39/Svadu suite containing
16 cases covering loads, stores, and instruction fetches at both 2 MiB and
1 GiB page sizes. Aligned controls verify successful accesses and required
hardware A/D updates. Stores cover both A=0,D=0 and A=1,D=0.

Each fault case checks the trap cause, trap value, exception PC, and complete
leaf PTE. The runner requires explicit self-check completion and treats tool
failures and timeouts as errors.

Fresh Verilator builds compare the PR parent (`275695cdb`) with the revised RTL.
The same test ELFs are run independently against Spike and Wally.
The test sources and runner are local validation artifacts and are not included
in this PR.

| Result | Spike | Original Wally | Revised Wally |
| --- | --- | --- | --- |
| Eight misaligned cases | Pass | Exact PTE A/D mismatch after expected page fault | Pass |
| Eight aligned controls | Pass | Pass | Pass |

Verilator lint passes for `rv32gc` and `rv64gc`. Dynamic testing covers RV64
Sv39; it does not cover Sv32/Sv48/Sv57, AMOs, or cache-block operations. No full
regression or ACT generator changes are included. Leaf reserved-bit and
PBMT/NAPOT checks remain outside this PR's scope.
