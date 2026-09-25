# Independent reproduction audit — 2026-09-24

Scope: three archived `baseline_not_reproduced` leads, the recent RV32E `test_repair_exhausted` lead, and the PMP `bug_rejected` lead. This is not an audit of every candidate patch or a claim that the campaign is bug-free. The active shared worktree and archived evidence were not modified.

| Run suffix | Hypothesis | Assessment |
| --- | --- | --- |
| `4c96859b` | Privileged instructions with nonzero rd escape illegal decoding | Not reproduced for the supplied case. Baseline controller.sv already requires RdD == 0 in PFunctD. Archived Wally passed both cases; fresh Spike reruns passed both. |
| `2d9ad930` | AES64KS1I accepts rnum > 10 | Not reproduced. Baseline bmuctrl.sv explicitly requires Rs2D[3:0] <= 10. Archived Wally passed both cases; fresh Spike reruns passed both. |
| `15cc1bae` | CLZW/CTZW/CPOPW use the upper 32 bits | Not reproduced. The RTL masks/selects the word operands correctly. Archived Wally and fresh Spike passed. A fresh isolated Verilator build of baseline cnt.sv passed 3,000 checks. |
| `29f55bde` | RV32E must trap on x16 when Zicsr is disabled | Inconclusive as an RTL claim; invalid test design and a controller classification defect. The positive control succeeds, but a RAM advisory containing “fail” triggers TEST_INVALID. The edge test branches on a1 to execute different setup in Spike and Wally. |
| `ca51c77f` | Instruction crossing a PMP boundary ignores execute permission | Original mismatch is explained by incompatible PMP granularity, not evidence of the proposed defect. The test programs 16-byte boundaries; rv64gc uses PMP_G=4 (64 bytes). The Critic's claimed Spike override rerun is not reproducible with the configured binary. |

## Fresh checks and limitations

Fresh Spike executions used controller-captured ELFs in each baseline evidence directory, with signatures and logs redirected to `reviews/reproduction-audit-20260924/`. Seven control/test executions across the first four rows passed; the RV32E edge ELF was not captured because verification stopped at its positive control. Default Spike also passed the two original PMP cases. Both attempts with `--pmpgranularity=64` failed with an unsupported-option error. ELF SHA-256 values, exit codes and signatures are recorded in `spike-results.json`.

The fresh Verilator unit simulation used cnt.sv, popcnt.sv, lzc.sv and mux.sv extracted with `git show` from baseline `53c8e72a2582f46a4307415ddb5a5a83bac42c98`. It checks leading zero, trailing zero and population counts over 1,000 operands, including zero low words and deliberately populated high words. It passed all 3,000 comparisons. Sources, testbench, build log and result are under `reviews/reproduction-audit-20260924/cnt/`. This is a unit test, not a fresh full-core Wally rerun. Full-core Wally results above are archived controller evidence.

The privileged and AES decode checks were inspected at their original baseline `d4072f763abe04a47d8c370d939cdea02eb337ec`, rather than inferred from a later fix.

## Confirmed controller problem

`orchestration/result_classifier.py` searches all Wally output with `\bFAIL(?:URE|ED)?\b`. The RV32E rev2 positive-control log contains:

```
%Warning: riscvassertions_wally.sv:45: ... Some regression tests will fail if UNCORE_RAM_RANGE is less than 64'h07FFFFFF
... control.elf succeeded. Brilliant!!!
Return code: 0
```

Calling the current classifier with that captured log, exit 0, complete=True and equal=True returns TEST_INVALID. Removing only that advisory changes the result to MATCH. This isolates a real false-rejection mechanism; it does not establish the edge test as a bug. Completion and signature checks must remain mandatory when correcting advisory handling. No classifier changes were made during this assessment.

The RV32E test explicitly uses `bnez a1, is_spike` and only installs mtvec on that path. Its expectation also needs revision: the current [RV32E specification](https://docs.riscv.org/reference/isa/v20260120/unpriv/rv32e.html) labels x16–x31 encodings reserved, which alone does not establish this test's unconditional must-trap claim.

## PMP evidence quality

The source legalizes TOR pmpaddr values by clearing the low PMP_G bits. With G=4, the test's boundaries 0x80000090 and 0x800000a0 both become 0x80000080. The forbidden second region is empty, and the fallback region permits execution. Thus Wally reaching the subsequent ecall is consistent with the configured protection map.

The Critic states that executing Spike with `--pmpgranularity=64` matched Wally. Independently executing the configured `/home/rafay/riscv/bin/spike` with that option failed (`htif: unrecognized option`). Do not treat the Critic's prose as execution evidence. A trustworthy follow-up uses a supported configuration mechanism or 64-byte-aligned tests, retains actual logs, and checks the resulting PMP map.

## Disposition

Do not promote any of these five leads to confirmed-bugs on the current evidence. Keep the first three as not reproduced for their tested cases, the RV32E lead as invalid/inconclusive, and reject the original PMP test's mismatch as evidence of this RTL defect. The controller advisory classifier deserves a targeted fix and regression test. The Critic's unsupported execution claim also illustrates why independent controller verification must remain authoritative.
