# Bug Reproducer: Missing Global ITLB Invalidation on sfence.inval.ir

This reproducer exposes a bug in Wally's Privileged Decoder (`src/privileged/privdec.sv`) where the instruction `sfence.inval.ir` incorrectly evaluates `sfencevmaAllM = 0`, causing Wally to silently preserve global entries in the ITLB during a flush.

## Test Strategy
The test maps a virtual address `0x40001000` to a physical `code_page_a` with a global PTE (`PTE_G = 1`).
We execute the page to load it into the ITLB. Then we rewrite the PTE to point to `code_page_b` and execute:
```assembly
    sinval.vma x0, s2  # s2 != 0, so sfencevmaAllM = 0 on Wally, preserving global entries
    sfence.inval.ir
```
On Spike, the `sinval.vma` instruction correctly invalidates the PTW cache (since Spike handles it coarsely). Then `sfence.inval.ir` properly invalidates the ITLB globally. Spike fetches the new code page (`code_page_b`).

On Wally, `sfence.inval.ir` encodes its instruction fields such that `~|InstrM[24:20]` evaluates to `0`. Consequently, `sfencevmaAllM` is 0, `TLBFlushAll` is 0, and `ShouldFlush` evaluates to `0` for any entry with `PTE_G = 1`. The stale translation persists in the ITLB, causing Wally to mistakenly re-fetch the old code (`code_page_a`).

The mismatch causes the assembly test to detect the wrong value (it expects `a5 == 0x22` from `code_page_b` but gets `0x11` from `code_page_a`) and branches to a failure handler (`jr x0`) which triggers a deterministic Watchdog Timeout (exit code 134) in Verilator.

## Included Files
- `tests/test_sfence_inval_ir_global.S`: Bug reproducer (Global PTE).
- `tests/test_sfence_vma_control.S`: Control using `sfence.vma x0, x0` (which correctly flushes global mappings).
- `tests/test_sfence_inval_ir_nonglobal.S`: Control using a non-global PTE (which correctly flushes).
- `reproducer.sh`: Execution script. Exits 1 upon successfully reproducing the bug.
