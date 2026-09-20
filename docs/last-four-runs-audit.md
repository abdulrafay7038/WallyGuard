# Last four runs: why the Critic was not reached

Inspected on 20 September 2026. Sources: the attached `/home/rafay/Downloads/file (1).txt`, the last four `runs/*/attempt.json` files, agent transcripts, tool metrics and archived controller evidence. Machine-readable measurements are in `last-four-runs-audit.json`.

| Run | Total | Architect | Tester, including repairs | Outcome at inspection |
| --- | ---: | ---: | ---: | --- |
| 20260919T193248Z-eb60e108 | 209.2 min | 57.4 min | 134.6 min | test_repair_exhausted |
| 20260919T230158Z-efd6e12a | 78.5 min | 34.5 min | 28.9 min | test_repair_exhausted |
| 20260920T002030Z-7cc4bf4c | 107.1 min | 16.4 min | 75.6 min | test_repair_exhausted |
| 20260920T020736Z-5677afa3 | In progress | Still running | Not reached | in_progress |

## Confirmed infrastructure cause

All three completed runs invoked `/usr/bin/spike` for their controller oracle. The installed package describes that executable as a SPIFFE-based secrets-management CLI. It is not the RISC-V ISA simulator. Its log contains a memory-lock warning and it never completes these invocations. Each controller positive-control execution expired at 900 seconds. Agent tool commands could wait as long as 5,400 seconds; the first Tester recorded about 5,401 seconds of command time and 239 polls.

The actual RISC-V simulator is `/home/rafay/riscv/bin/spike`, whose help identifies it as `Spike RISC-V ISA Simulator 1.1.1-dev`.

I reran the preserved positive-control ELFs using that executable, keeping the original ISA options and placing output signatures in a temporary directory. All completed in roughly 8–11 milliseconds. The first and third controls returned exit 0 with selfcheck status 1. The second returned exit 1 with selfcheck status 2. That second control remains invalid and needs test-level investigation; its failure is not evidence of an RTL bug. These were oracle-only checks, not full Wally verification.

## Why there was no Critic

The Critic is intentionally behind the controller's positive-control and reproducible-mismatch gates. Those gates never passed. Repairs repeatedly returned inline Python source generators as the build command. Inline interpreters are forbidden at the verifier boundary, and build commands must not rewrite frozen inputs. One submission also omitted required signature fields. Agent prose claiming a successful reproduction was not supported by controller evidence.

The Architect also spent time running and polling the wrong oracle rather than handing off source analysis to the Tester. HTTP health-check and MCP logs show activity, not successful test execution.

## Local corrections

- A shared simulation environment selects the toolchain and exposes `WALLY_SPIKE`. An explicit absolute override is supported; otherwise discovery checks `$RISCV/bin`, `~/riscv/bin`, `/opt/riscv/bin`, then PATH.
- Check the simulator identity with a five-second deadline before agents start and before executing a reproducer.
- Use the same selected oracle in the seeded contract, shell tools and controller checks.
- Tell the Architect to leave simulation to the Tester. Tell agents to bound exploratory Spike calls and not use broad `pkill` commands.
- Give an actionable inline-command rejection: save edits first, then return a saved build-script invocation.
- Exclude controller-owned root `events.jsonl` from frozen input fingerprints. It can legitimately change when the controller saves state.
- Correct the misleading final `Test repair 3/2` message to report exhaustion.

Validation: all 78 unit tests pass, including new oracle-selection, identity-failure, short-deadline, startup-blocking and event-fingerprint regressions. No full hardware campaign or throughput benchmark was run.

The active Ray job retains its uploaded code and existing artifacts. These changes require a new job submission. They do not retroactively validate the archived bug claims or automatically repair the second run's test. Preserve the active run and let its cleanup/archive path complete before reusing the shared workspace; do not delete its lock/state to bypass ownership checks.
