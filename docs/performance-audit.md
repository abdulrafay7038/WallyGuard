# Controller performance audit — 20 September 2026

The dominant measured problem was long-running **wrong-tool invocations**, followed
by test repair and planning work that drifted into execution. The archived runs
do not establish that model generation itself takes 30–40 minutes. None of the
four completed runs below reached the Critic or Fixer.

Sources: archived attempt records, agent transcripts, command logs and tool
metrics; the supplied `file (1).txt`; the current project implementation; the
installed CHIA implementation. Numerical summaries are reproducible with
`python -m orchestration.performance runs/TAG --json` and saved in
[performance-baseline.json](performance-baseline.json).

## Measured baseline

| Run suffix | Iteration | Architect | Architect shell calls | Architect command time | Tester incl. repairs | Controller verification |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| `193248Z-eb60e108` | 209.17 min | 57.37 min | 95 | 49.28 min | 134.56 min | 900.72 s |
| `230158Z-efd6e12a` | 78.53 min | 34.54 min | 40 | 30.63 min | 28.94 min | 900.79 s |
| `002030Z-7cc4bf4c` | 107.10 min | 16.44 min | 14 | 15.53 min | 75.60 min | 900.62 s |
| `041307Z-f2caada9` | 111.74 min | 99.93 min | 60 | 94.07 min | 9.74 min | 1.68 s |

Command time is included in stage time. Old metrics can omit commands cancelled
during shutdown, so subtraction is **not** an exact model-generation measurement.
Controller verification here means the recorded execution duration; older records
do not separate Ray scheduling and transfer time. In-progress records were excluded.

Ranked causes:

1. **Wrong Spike and prolonged command waits.** `/usr/bin/spike` is a SPIFFE
   secrets CLI, not the RISC-V simulator. A single Architect command took 1,834.27 s
   in the 34.54-minute stage. In the latest completed run, a command starting with
   `/usr/bin/spike --help` took 5,400.09 s. The first Tester had another approximately
   5,400-second command. Three controller controls each waited 900 s. The working
   simulator is `/home/rafay/riscv/bin/spike`.
2. **Test artifact repair and role drift.** The Architect ran/debugged tests;
   Testers submitted forbidden inline build scripts, incomplete contracts, and an
   invalid control. The latest run ended on a forbidden checkout-root helper
   (`source/fix_json.py`). These are legitimate controller rejections, not a reason
   to bypass the Critic's prerequisite gates. Repair stages reached 53.9 minutes;
   some old command metrics are incomplete, so that entire time cannot be assigned
   to either tools or model calls.
3. **Insufficient reusable exploration context.** The previous 40-entry history
   and five recent notes were useful but had no cumulative subsystem ledger.
   Two successive plans revisited mstateen/senvcfg behavior. This establishes
   repetition, not a precise time penalty.
4. **Build/copy cost is real but smaller in these samples.** One observed Wally
   build/run command took 228.74 s. Initial workspace preparation spanned roughly
   131 s in the attached log, including copy and setup. Subsequent attempts reused
   it. Neither explains the 90-minute tool wait. No full regression ran here.
5. **Unquantified overhead.** There is at least one recorded Tester rate-limit
   event. Older data do not reliably separate provider waits, recovery, OpenCode
   export, or Ray scheduling. New timing covers these instead of guessing.

## Inspection and changes

The starting revision was `c18728d44`. It already contained correct Spike
selection/identity checks, shorter configurable exploratory command defaults,
the seeded harness, file-based contract submission, Tester run-directory cwd,
pruned input traversal, and reusable guarded workspaces. These are retained;
they are **not newly implemented by this audit**.

| File / function | Finding and action |
| --- | --- |
| `loop.py`: driver, `remote`, `agent_stage`, `main` | Serial dependencies are intentional. Added operation totals and worker durations, with scheduling/serialization/transfer reported as a combined residual. Failed operations retain elapsed time; their worker decomposition is unavailable. Existing stage and context sizes remain. Final archival work is measured; elapsed time excludes the final small JSON write/return. |
| `loop.py`: `ask_agent`, `prompt_with_rate_limit_retry` | Each role has a fresh conversation and tool server. Added OpenCode performance to diagnostics and per-call lifecycle events, including capacity wait and dispatch time. Format-repair and API retries are included. No model or agent-timeout changes. |
| `orchestration/tool_runtime.py`: `DiagnosticOpenCodeLLM` | Times OpenCode run/export separately and records worker elapsed time. Extracts exported assistant/tool intervals without double-counting overlapping intervals. Pure provider generation is not exposed; assistant non-tool time is labelled an estimate including provider/CLI waits. |
| Same file: `ManagedBashTool`, `ToolServer` | Preserves one active command and existing polling/deadline behavior. Writes one start and finish event per command, including duration and cleanup. Reports unfinished commands explicitly. Architect results carry advisory budget progress; `extension_reason` records justified extra exploration without blocking it. |
| Same file: `LLMCapacity` | Inspected and retained at one. It uses expiring leases; waits are now measured. Increasing it would not parallelize the sequential dependency graph or isolate a second mutation of the same checkout. |
| `orchestration/stage_runner.py`: `with_tool_recovery` | Retains one same-stage restart and unconditional tool cleanup. Added startup/readiness and teardown durations. |
| `orchestration/retry_policy.py`: `retry_call` | Retains rate-limit classification, Retry-After handling and bounded retries. Records actual backoff duration. No provider failure is turned into success. |
| `loop.py`: prompts | Architect now selects one behavior using the ledger first, reads targeted RTL/config/spec/test material, and hands off when a legal trigger and falsifiable hypothesis are established. Advisory budget: 12 shell commands, six deep file reads, eight minutes; essential extensions remain allowed. Tester follows the target-to-minimal-reproducer path. Critic starts with controller evidence but retains adversarial tests. Fixer starts with evidence, prior failed-fix feedback and the implicated RTL. |
| `orchestration/coverage.py`, `context.py`; `loop.py`: `history_entry`, `save_attempt` | Cumulative bounded subsystem summary from all archived attempts, not only the last 40. Distinguishes selection, successful testing, repeated reproduction, confirmation and source revision. Suggests three under-covered areas. Persists `runs/coverage.json` plus each finalized record's snapshot; reconstructs from attempt records on restart. Agent notes remain unverified. No weight training. |
| `loop.py`: `run_attempt`, `export_patch`; `verification_state.py` | Fixed both validation branches. Enabled full regression runs after a targeted pass even without a directed command. A configured directed failure cannot export a candidate when full regression is off. Export rechecks required execution/pass, repeated evidence and reviews. |
| `orchestration/test_preflight.py`: `run_reproducer` | Same build, metadata validation, positive control, independent oracle/DUT runs, comparison and evidence archival. Added test-build, Spike, Wally-plus-build, and comparison/evidence timing. No verdict caching or skipped repetitions. |
| `orchestration/processes.py`: `run_command` | Retains file-backed output, noninteractive subprocesses, owned-process cancellation and PID identity checks. Adds cleanup duration. |
| `orchestration/timing.py`, `performance.py` | Small monotonic timers and offline text/JSON breakdown. Missing measurements are null. Timing is diagnostic only and never establishes verification success. |

## Validation state machine

After targeted reproduction passes: run directed validation if configured; only
after it passes (or is unconfigured), run full regression if enabled. A failed
enabled stage returns evidence through Critic/Fixer. Both disabled stages are
neutral for candidate eligibility; neither is falsely marked as having run.

| Directed configured | Full regression enabled | Required after targeted pass | Export after approval |
| --- | --- | --- | --- |
| No | No | Neither optional suite | Candidate |
| Yes | No | Directed must execute and pass | Candidate |
| No | Yes | Full regression must execute and pass | Candidate |
| Yes | Yes | Directed and full regression must execute and pass | Confirmed |

The stricter existing confirmed-patch policy still requires directed coverage.
Candidate eligibility is not permission to bypass a configured failed stage.
Tests cover all enabled/disabled/pass/fail combinations, skipped execution with a
forged pass flag, and rechecking a corrupted candidate record at export.

Validation: 99 project unit tests pass, including timing propagation, coverage
counts, advisory-budget extension, process cancellation, artifacts and the
controller flow. `git diff --check` passes. These are orchestration tests, not
a full hardware regression or cloud campaign benchmark.

## Scheduling, workspaces and caches

The configured CVW worker advertises one `wally_sim` resource. Its MCP actor holds
that resource through an agent stage; verification runs after tool shutdown.
The OpenCode worker advertises three `opencode_creds`, while the controller uses
one model lease. The agent wrappers themselves reserve zero CPUs and do not hold
the model resource while waiting for the nested model task.

CHIA resources govern task placement and availability; asynchronous dispatch can
overlap independent tasks, but a `get()` waits for completion. This matches both
the installed code and the [CHIA scheduling documentation](https://docs.chialoops.ai/en/latest/user_guides/chia_function.html).
Existing [CHIA profiling](https://docs.chialoops.ai/en/latest/user_guides/profiling.html)
remains available for a cluster timeline. No installed CHIA code was modified.

Shared-workspace ownership checks, lock, private dependency copies, baseline
reset and unarchived-attempt protection remain intact. There is no new symlink
sharing. Existing compiled artifacts remain cached. `wsim` keys builds by
configuration/parameters and checks source modification times before building;
this audit does not add another executable cache or bypass `wsim`.

Possible future parallelism is immutable source indexing or independent oracle
execution with distinct outputs. Neither is a measured major cost here. The
current positive-control-first ordering also avoids wasting a DUT run on a bad
oracle. Raising concurrency to four would add risk without addressing the
observed stalled command.

## After measurements and limits

A fresh **oracle-only** replay used the exact archived control ELFs and the
current process runner with temporary signatures. Details and ELF hashes are in
[oracle-benchmark.json](oracle-benchmark.json).

| Control run | Archived wrong-oracle wait | Correct-oracle execution incl. process cleanup | Result |
| --- | ---: | ---: | --- |
| `193248Z-eb60e108` | 900.09 s | 0.163 s | Passing self-check |
| `230158Z-efd6e12a` | 900.09 s | 0.160 s | Failing self-check, exit 1 — remains invalid |
| `002030Z-7cc4bf4c` | 900.09 s | 0.050 s | Passing self-check |

This measures the existing tool-selection correction, **not** a new full-loop
speedup. Correctly terminating a failing control is not proof of an RTL bug.

After Architect wall time/tool count, iteration total, Critic/Fixer time and full
Wally verification throughput are **not yet measured**. The configured campaign
Ray cluster and OpenCode Docker worker were not running at inspection; no cloud
agent iteration was launched. An isolated unit-test fixture accidentally tried
auto-starting local Ray after lifecycle instrumentation added a new remote call;
it was stopped, the fixture now mocks that boundary, and the final unit suite
does not start a cluster. No campaign or workspace was killed or reset.

No claim of 15–35 minutes is justified yet. That remains a target for ordinary
investigations after infrastructure failures are removed. A successful fix adds
Fixer, more verification and another Critic pass; difficult bugs, cold builds,
full regression and repeated repairs can legitimately exceed it. The 3–8-minute
Architect target is advisory and must be measured on a fresh deployment.

## Safety and next step

Artifact guards, immutable reproducer inputs, independent Wally/Spike execution,
positive controls, repeated mismatch fingerprints, Critic reviews, minimal RTL
scope, fix retries, failure classifications and export checks remain authoritative.
No agent can declare a bug confirmed or bypass a failing configured validation.
No timeout was shortened by this audit. No stale hardware verdict or executable
reuse was introduced.

Next, submit **one fresh job** with this revision once the existing CHIA workers
are available, preserve the timing output, and compare it with this baseline.
Prioritize any remaining Tester repair loop: the oracle replay proves one archived
control is still invalid. Optimize additional caching/concurrency only if new
timing demonstrates those costs dominate. Separate RTL compile/simulation timing
would require a supported timing hook in `wsim`; both are currently reported as
one measured operation, with the unavailable split explicitly null.

## Follow-up: script-mode Ray serialization

Run `20260920T071102Z-264f62cd` exposed a regression in the new timing code:
launching `python loop.py` makes Ray serialize the agent functions by value.
Their reference to `remote()` captured a module-level `ContextVar`, which cannot
be pickled. The failure occurred before the Architect's model call. Workspace
setup took 186.41 s; the controller archived the failed attempt normally.

The driver now accesses its timing context through the importable timing module,
so Ray transfers a module reference rather than the context object. A regression
test reproduces script-mode serialization with an active driver timing context,
covering all four agents and the main controller workers. All 100 project tests
pass. A separate live Ray dispatch check, with CHIA profiling enabled, received
the four real agent callables and confirmed that the worker timing context was
empty. This checks transport, not LLM execution or campaign throughput. The
existing archived workspace remains available for the next fresh submission.

## Follow-up: lifecycle guards, feedback and build environment

Run `20260921T124830Z-d9383bb1` reached a repeated controller mismatch and a
Critic rejection, but controller lifecycle logging then changed the guarded
root `events.jsonl`. The Critic's return was lost from the main attempt record.
Lifecycle events now go to `logs/lifecycle-events.jsonl`, which the existing
guard already treats as runtime output. The root event file and original test
inputs remain protected. The timing report reads both new and historical logs.

Review notes are retained before guard completion with `guard_passed=false`,
updated only after the guard succeeds. Rejections/revision requests are included
as bounded advisory history for Architect and Tester. For older finalized runs,
the loader can recover saved Critic responses with an explicit unaccepted label
and artifact path. It never edits those runs or restores an invalidated verdict
to a confirmation gate. Prompts require new evidence addressing the critique
before revisiting a rejected reproducer; this is guidance, not a guarantee of
agent compliance.

Run `20260921T134743Z-d09d0518` also exposed inconsistent command environments:
the Tester had `WALLY_TEST_DIR`, but controller execution did not. Its build
script consequently tried to create `/build` and failed with permission denied.
The verifier now sets this variable to the resolved test directory, overriding
any stale inherited value. No directory permissions or verification rules changed.

Validation: 105 tests pass, including real saved-shell-script execution, lifecycle
writes through Critic/Fixer guards, restoration of unauthorized root-log edits,
history recovery, and retention of unaccepted reviews on guard failure. These
changes require a fresh job submission; an already running uploaded job and its
workspace are left untouched.

## Follow-up: Gemini model-turn rejection

Architect runs `20260921T143000Z-4394004e` and
`20260921T143521Z-84f06d2d` failed after successful tool calls with HTTP 400:
`Requests ending with a model turn are not supported.` The installed OpenCode
version was 1.18.25. The last stream contained a step with finish reason
`unknown`, followed by the API error. This was neither a command timeout nor a
credential-access failure. An [upstream OpenCode report](https://github.com/anomalyco/opencode/issues/45359)
describes the same symptom and continuing with a new user message; it does not
establish that every occurrence has the same internal cause.

The project wrapper now recognizes that exact structured 400 and a consistent
session ID, rejects streams with unfinished tool calls, and appends one user
continuation using `--session`. It keeps the same configuration, model and tool
endpoint, with the remaining command time budget. It does not retry arbitrary
invalid requests, change models, or restart the investigation. A second failure
propagates normally. The original stream/stderr is retained in diagnostics.

Because OpenCode exports full session history, the wrapper ignores only the
recovered historical error preceding its exact continuation message; new errors,
unrelated errors, wrong sessions and missing continuation boundaries remain
errors. Controller verification, artifact guards and JSON validation still apply.
The performance report includes `protocol_recovery_attempts`, and generic failure
messages now include a bounded, redacted provider explanation.

Validation: 110 tests pass, including exact-error matching, one-attempt bounds,
same-session/config continuation, remaining timeout, refusal of unrelated errors,
and historical/new error separation. A tools-disabled live probe on a fork of
the failed session did not complete within its 60-second diagnostic budget; its
owned process was stopped. No successful live recovery or campaign throughput
claim is made. The original failed session was exported to a temporary diagnostic
file; no Wally worktree or archived run input was modified. A fresh job submission
is required to exercise this workaround with the controller's active MCP tools.

## Follow-up: provider capacity and controller submission

Run `20260921T144858Z-059e2eea` stopped with `api_rate_limit`. Its saved events
contain five separate HTTP 429 errors from Vertex, each before any tool call.
No model-turn recovery was attempted. The observed breakdown is:

| Measurement | Seconds |
| --- | ---: |
| Iteration | 1484.8 |
| Architect stage | 1484.6 |
| Five OpenCode calls, including provider/CLI waits | 1027.1 |
| Four controller backoff waits | 450.8 |
| LLM capacity lease wait | 0.9 |
| Worktree setup | 0.05 |
| Shell commands, Wally, Spike, controller verification | 0 |

The individual OpenCode calls took 213.5, 181.9, 245.6, 174.3 and 211.8 seconds.
Backoff was 30, 60, 120 and 240 seconds. No response supplied a Retry-After
header. The logs do not expose pure generation time or the number of provider
requests made internally by OpenCode. These measurements do not show slow RTL
exploration or simulation: no investigation began. Nested durations are not
additive.

Google's [429 guidance](https://cloud.google.com/vertex-ai/generative-ai/docs/error-code-429)
associates this error with unavailable request capacity. It recommends global
endpoints and exponential backoff, both already configured here. These logs
alone cannot distinguish a project quota from shared capacity pressure. No
model substitution, concurrency increase or shorter agent timeout was applied.
Retry events now print the model, attempt number, provider reason and whether
another retry is actually scheduled. Exhausted retries retain the original
failure classification and stop the campaign.

An inspection of the later submission `raysubmit_H147fftEsjnvSXwp` found its
uploaded `loop.py` matched commit `5e0d7ca08` byte-for-byte and its package had
no `orchestration/` directory. The dashboard recorded a package upload at
15:45:50 UTC. This establishes that an old payload was submitted, not why that
payload was selected. The running job was left untouched.

`python -B -m orchestration.submission` now submits through the same CHIA/Ray
CLI from an absolute checkout path. It calculates a source digest locally and
checks it in the uploaded entrypoint before importing or executing the loop.
The digest covers `loop.py`, orchestration Python files and harness templates;
run artifacts are excluded. An obsolete package without the entrypoint fails
to import it; a changed or incomplete source set fails the digest check. The
verified digest is saved in `attempt.json`. Direct submissions of `loop.py`
bypass this check, so the README now uses the checked command.

Validation: 116 tests pass. New checks exercise changed/missing source,
template invalidation, actual entrypoint execution, environment forwarding,
dry-run behavior, retry exhaustion and redacted console messages. A local
round-trip through Ray's installed package builder and ZIP extraction produced
the same source digest. No new live campaign was launched and no improved
end-to-end throughput is claimed. Provider capacity remains an external limit.

## Follow-up: successful continuation rejected as an old failure

Run `20260921T171305Z-bb9ecfe5` spent 867.8 seconds in Architect and made 84 tool
calls. Its first OpenCode command failed after 292.5 seconds with the known
model-turn 400. The bounded same-session continuation then ran for 565.5 seconds
and returned exit 0. Exporting the saved session showed a final assistant message
with `finish=stop` and a structured investigation plan, with no new API error.

The wrapper nevertheless failed the stage: OpenCode stored the continuation text
with literal double quotes around it, so the exact boundary comparison did not
match. The export parser consequently selected the earlier 400 from session
history. The recovery filter now recognizes the exact unquoted or double-quoted
continuation. It still requires the same session and preserves every error after
that boundary, unrelated historical errors, and near-match continuation text.

An offline replay of the actual exported session reproduces the old failure;
the patched parser returns no remaining error and its answer passes the Architect
schema. This verifies response extraction, not the proposed RTL bug. The original
run record and worktree were not changed or promoted to a successful result.

Healthy MCP polls previously dominated the console while real tool commands
were recorded on disk. The health response now includes command counts, active
commands and elapsed time; the caller prints these at most once per minute.
Only successful httpx `/healthz` INFO access lines are filtered. Failed requests
and readiness checks retain their existing behavior. This is progress visibility,
not a new timeout or proof that model generation is advancing.

Validation: 120 tests pass, including quoted-boundary extraction through the
installed OpenCode parser, preservation of new 400/429 errors, near-match refusal,
progress throttling and selective health-log filtering. No new live campaign or
end-to-end speed measurement was performed.

## Follow-up: model-turn error recurs after productive continuation

Run `20260921T173710Z-5f32c234` failed differently: its initial request returned
the exact model-turn 400 after 14.0 seconds, and its continuation made 107
completed tool calls over 1170.0 seconds before returning a new identical 400.
Both command exits were 1. The quote-boundary fix cannot make a fresh error a
success. The Architect also expanded from atomics into several FPU, bitmanip
and divide paths despite the planning reminders.

The wrapper now permits at most two same-session continuations within the
original deadline. The second requires newly observed completed tool call IDs
in the first continuation's stream, plus the exact eligible error and unchanged
session. Replayed calls, no progress, unrelated errors and deadline expiry stop
recovery. All continuation streams are retained; later errors are still fatal.
This is bounded mitigation for a recurring provider/OpenCode compatibility
problem, not a claim to repair its internal cause.

The existing Architect handoff budget is now a tool checkpoint: after 12 shell
commands or eight minutes, a command without `extension_reason` is not executed.
The tool asks for either a narrow handoff with uncertainties or the specific
missing fact that justifies another command. Nonempty reasons permit continued
investigation and are recorded; their substance is not machine-validated.
The checkpoint does not fail the stage or apply to Tester/Critic/Fixer.

Validation: 124 tests pass. Saved original/final streams from this run authorize
the second continuation in an offline replay with a mocked final call. Tests
cover unchanged session/config, no-progress refusal, replayed IDs, shrinking
deadline, two-continuation cap, and errors after the last continuation. A real
shell test verifies a blocked command has no filesystem effect, an explained
command executes, and Tester is unaffected. No live recovery success or speedup
has been measured for these new changes; no archived run was rewritten.

## Follow-up: recurring baseline harness failures

The generic baseline repair message hid several distinct problems in past runs:
invalid command/trap metadata, the previously corrected wrong-Spike selection,
signature layout mistakes, missing build environment, and Wally runtime artifact
generation. The current `20260921T184036Z-0cc29037` revision 0 specifically built
in 0.18 seconds, passed Spike in 0.06 seconds, then ran Wally for 2.23 seconds.
Its Wally log contains `Usage: elf2hex <width> <depth> <elf_file> [base]`, a Makefile
error, and `Single Elf file tests are not signatured verified.` Wally returned 0
without an explicit self-check pass. The controller correctly rejected it.

The environment helper introduced a name collision by prioritizing the RISC-V
toolchain directory over Wally's `bin`. The two `elf2hex` executables have
incompatible interfaces. Wally's scripts now take PATH precedence, while the
oracle retains independent absolute-path selection and identity validation.
The same collision is visible in `20260921T124830Z-d9383bb1` revision 0.

A second defect survives the PATH correction: `objdump` chooses one label when
`selfcheck_record` and `begin_signature` share an address. Wally builds its symbol
maps from disassembly, so it can miss the self-check record and skip checking.
The native controller now explicitly regenerates memory/disassembly inputs with
Wally's Makefile, verifies success/nonempty outputs, then writes address/label
maps from the already inspected ELF `nm` symbols. All aliases survive. Existing
runtime files are regenerated and symlink outputs are refused. No test source,
ELF assertion, DUT executable, or RTL is substituted. Wally still runs directly
and independently; its usual RTL rebuild checks remain in force.

Make failures and `elf2hex` usage errors are now recognized as tool failures,
including before native mismatch promotion. Baseline feedback includes the
actual status/reason and nested control failure instead of only the generic
"failed to execute correctly" message.

Validation: 129 tests pass. A temporary copy of this run's captured control ELF
reproduced the old PATH failure using the real toolchain. Patched preparation
generated an 8874-byte memory file and retained both aliases at `0x80001000`;
the unmodified disassembly omitted `selfcheck_record`. A second invocation of
the testbench Makefile preserved the corrected maps. Tests cover fresh inputs,
alias retention, failed/missing output rejection, symlink refusal, tool selection
and make failures overriding an apparent self-check pass. No simulation was
started against the occupied shared worktree and the live run was not changed.
This validates the preparation fix, not a completed fresh Wally/Spike campaign.
