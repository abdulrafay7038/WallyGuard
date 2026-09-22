# Deterministic orchestration and verification

`loop.py` still owns the existing four-agent CHIA campaign. The modules in
`orchestration/` provide its validation and recovery mechanisms. No CVW source,
existing reproducer, or archived patch is changed by this hardening work.

## Agent output and recovery

Every agent uses one schema and JSON decoder. Plain JSON, Markdown fences and
surrounding prose are accepted; ambiguous objects, missing fields and incorrect
types/enums are rejected. There is exactly one format-only repair conversation,
with no MCP tools and all OpenCode tool permissions denied. Invalid output after
that retry produces `agent_output_invalid`. Raw answers (with secrets redacted),
format-repair answers, parsed JSON, validation errors and CLI diagnostics live in
`runs/<iteration>/controller/agent-<role>-<id>/`.

The project-local OpenCode subclass preserves errors that upstream `prompt()`
previously reduced to an empty unsuccessful response. Typed API rate limits use
Retry-After/reset time or bounded exponential backoff and retry the same prompt,
worktree and tool. A Retry-After longer than the wait budget stops with the
candidate retained instead of retrying too early. Agent orchestration tasks reserve no model resource while
waiting; only the actual OpenCode call reserves `opencode_creds`, preventing
nested-call resource starvation. Generic exit 1 is an agent-call failure, not a rate limit or a
hardware verdict. No unconfigured model fallback occurs. A named Ray capacity
actor limits concurrent LLM calls (`WALLY_LLM_CONCURRENCY`, default 1); leases expire
if a caller disappears. Change this setting between cluster sessions, because a
running named capacity actor retains its initial limit.

## Reproducer contract

New workspaces are seeded with `reproducer.json`, `build_reproducer.sh`, and
`tests/selfcheck.h` / `tests/template.S.example`. These are editable run inputs,
frozen with the rest of the reproducer before verification. The RV64 template
contains a deliberate assembler error; the Tester must implement the stimulus
and independent assertions in `control.S` and `test.S` and adapt the ISA/ABI and
record widths when needed. The header declares the native five-word self-check
record and its Spike signature aliases. The starter build compiles the ELFs;
the contract's `bin/wsim` calls handle incremental DUT rebuilding.

The MCP `validate_reproducer` tool reads a contract under `test_dir` and performs
static checks without building or executing it. It returns all detected
command/path/metadata errors, allowing repair within the same conversation.
The same checks run again in the controller before the build. Linked symbol
alignment and actual oracle/DUT results are still checked after building.
`PREFLIGHT_READY` does not imply a valid test, a mismatch, or a passing DUT.

A Tester may return a legacy `reproduce_command` for human convenience, but it
cannot establish a mismatch. A bug claim needs `reproducer` with:

- `version: 1`, `oracle: "spike"`;
- `build`: an argument list for the saved build script or build tool;
- `control` and `test`: independent positive-control and candidate executions;
- `trap_vectors`: `{ "elf": "build/test.elf", "symbol": "handler" }` entries
  for generated direct-mode trap handlers.

Each control/test specifies `wally` and `oracle` argument lists. The controller
requires the current checkout's `bin/wsim` and the configured installed Spike,
respectively, directly executing the same ELF under `test_dir/build`. Specify
`--elf` explicitly for Wally. Shell control flow, inline interpreter code and
exit-code masking are rejected at this boundary. Legitimate shell code remains
permitted inside a saved build harness.
Build scripts execute from `test_dir` like the Tester shell. Saved interpreter
script paths are normalized to absolute paths before execution; other verifier
commands continue to execute from the Wally checkout.

Two deterministic comparison modes are supported:

1. Default signature mode: provide distinct `wally_signature` and
   `oracle_signature` paths under `build/` or `logs/`, relative to `test_dir`,
   plus nonempty `wally_complete` and `oracle_complete` log markers. Both tools
   must finish successfully. The controller deletes stale signatures, validates
   nonempty hexadecimal contents and compares complete signatures itself.
2. `mode: "selfcheck"`: use CVW's native `CheckSelfCheck` support. The ELF must
   define `selfcheck_record`, `tohost`, and `begin_signature` aliasing the five-word
   self-check record (with a covering `end_signature`). Provide `oracle_signature`
   and Spike `+signature=<absolute path>` / `+signature-granularity=<XLEN/8>`.
   The controller checks Spike's freshly emitted self-check record has status 1;
   Wally must emit its native successful self-check message or an explicit
   expected/actual value mismatch with the same ELF's completed failure summary.
   Only the intentional `$stop` at the current `CheckSelfCheck` source location
   is exempted from tool-error detection. The complete log is rescanned so later
   real tool errors remain visible. Generic aborts, entry-count errors and
   unfinished self-checks are not mismatch evidence. This mode does not require
   a Wally signature-output extension or changes to CVW's testbench.

For either mode the control must match. Every run archives its ELF and emitted
signatures with SHA256 hashes, so later builds cannot overwrite prior evidence. The baseline is repeated at least twice
(`WALLY_BASELINE_RUNS`, default 2), with matching failure fingerprints. Linked
trap-handler addresses are checked with RISC-V `nm`; handlers must be 4-byte
aligned. Metadata is required when generated source references mtvec/stvec, and
simple `la`/`csrw` patterns are checked against the declared symbols. Use the
reusable `TRAP_VECTOR_TEMPLATE` in `orchestration/test_preflight.py`. This check
cannot prove the correctness of arbitrary computed vector addresses or program
privilege logic; inconclusive cases must remain unconfirmed.

`DUT_WATCHDOG_FAILURE` recognizes Verilator's watchdog even when `$finish` returns
zero. It is distinct from `HOST_COMMAND_TIMEOUT`, which requires an actual host
command deadline. A watchdog alone is not proof of a hardware bug. Unsupported
block-test oracles fail closed until a trusted controller adapter is added.

## Isolation and MCP lifecycle

Every agent stage records HEAD/tree, git status, diff and file snapshots. Tester
and Architect may change test artifacts; Critic may add only `critic/` artifacts;
Fixer may modify existing `src/**/*.sv` and `fixer/` artifacts. Runtime `build/`
and `logs/` remain writable. Unauthorized changes, including setup scripts and
controller input snapshots, are archived under `controller/guards/`, restored,
and classified as invalid artifacts. Valid RTL edits remain visible. The
campaign stops on an unhandled guard violation after archiving the attempt; it
does not automatically reset the reviewed candidate for another investigation.
Fixer commands start in `test_dir/fixer`, so relative scripts and backups stay
inside its allowed scope. `$WALLY` still identifies RTL, and `$WALLY_TEST_DIR`
identifies the frozen reproducer's run directory. A symlinked Fixer directory is
rejected before command execution. Other normal iteration transitions use the
managed-worktree reset to supply the next baseline. Original CVW and
existing archived patches are not reset or reclassified.

This is an artifact-integrity guard, not an OS sandbox for malicious same-user
shell commands. Do not run unrelated editors/jobs in the managed shared worktree.
Ignored dependency/build outputs are retained and are not copied into guard
snapshots. Builds must regenerate candidate-dependent outputs.

A project-local CHIA tool actor exposes `/healthz`. Startup and periodic readiness
checks use that endpoint, instead of `GET /` (404) or an incorrectly negotiated MCP
request (406). Actual MCP calls still use `/<tool>/mcp`. Uvicorn's shutdown flag is
set, owned shell commands are cancelled, thread shutdown is bounded and the actor
is always terminated. A hung endpoint is restarted once on the same stage and
artifacts, then reported as `mcp_server_timeout` if still unhealthy.

Commands stream full stdout/stderr to files and return only a bounded tail.
A command taking longer than two seconds returns a job ID; agents poll
`command_status`, so a long build does not exceed the MCP response deadline.
An explicit status call waits up to 30 seconds for completion using an async
wait that does not cancel the underlying job on timeout or client cancellation.
Only one workspace command may run at a time.
Tester shell commands start in the run directory, so relative helper-script
writes remain test artifacts. Other roles start at the checkout root. `$WALLY`
always points to the checkout and `$WALLY_TEST_DIR` to the run directory; working
directory changes do not persist between tool calls. Source guards still reject
unauthorized checkout edits.
Timeout/cancellation sends TERM then KILL to owned process groups and tracked
separate-session descendants. Uvicorn and application loggers install a handler
once and disable propagation, avoiding local handler/root duplication. Historical duplication in Ray job-log
forwarding cannot be conclusively attributed without replaying the deployed
cluster; local one-event/one-output behavior is covered by a test. JSONL
controller, agent and verifier events include semantic status and raw exit code
as separate fields. No credentials or complete environment dumps are added.

## Confirmation and running

The controller requires baseline reproduction, reviewed test quality, an RTL
patch, a passing targeted reproducer, passing directed regression and passing
configured full regression. Critic approval cannot override any failing gate.
Full regression is disabled by default; set `WALLY_RUN_REGRESSION=1` to enable it.
With regression disabled or directed regression unconfigured, a targeted passing
fix is `candidate_fix_verified`, exported only under `candidate-bugs/`.
`confirmed-bugs/` requires all gates, checked again at export.
An enabled full regression executes even without a directed command. Every
configured stage must execute and pass before either candidate or confirmed
export; a disabled option cannot bypass another stage's failure. Candidates
also recheck these requirements and repeated mismatch/review evidence at export.

Regression failures are retained and returned to the Fixer via the existing
bounded fix loop. After exhaustion the campaign stops instead of treating the
patch as good and moving to another discovery iteration. API/MCP exhaustion also
stops discovery and preserves the current candidate for inspection.

Run tests without cloud, Spike or a Wally build:

```bash
cd /home/rafay/miniconda3/WallyGuard2
../envs/chia_env/bin/python -B -m unittest discover -s tests -p 'test_*.py' -v
```

For a configured, healthy CHIA cluster, after resolving the existing CVW merge
conflicts and installing the operator's regression assets:

```bash
export PATH=/home/rafay/miniconda3/envs/chia_env/bin:$PATH
chia job submit --address http://127.0.0.1:8265 \
  --runtime-env-json '{"working_dir":".","excludes":["cvw/","runs/","reviews/","wally-worktrees/","confirmed-bugs/","candidate-bugs/",".git/","__pycache__/"],"env_vars":{"WALLY_RUN_REGRESSION":"1","WALLY_DIRECTED_COMMAND":"bin/wsim rv64gc arch64i --sim verilator","WALLY_REGRESSION_COMMAND":"bin/regression-wally","WALLY_REGRESSION_TIMEOUT":"5400","WALLY_REPRODUCER_TIMEOUT":"900","WALLY_LLM_CONCURRENCY":"1"}}' \
  -- python -B loop.py
```

Select the directed suite appropriate to the campaign through
`WALLY_DIRECTED_COMMAND`; the example requires its architectural-test assets.
Regression commands are operator configuration, never agent proposals. The
reproducer timeout bounds each build/simulator command; a complete reproducer
contains several such bounded commands. `WALLY_AGENT_TIMEOUT` bounds an LLM call.
The working-directory upload includes the new orchestration package on fresh
workers and excludes hardware checkouts and accumulated evidence.

No live hardware verification is claimed by the unit/integration suite. Existing
CVW merge conflicts, missing suite assets, provider authentication and deployed
worker connectivity remain external prerequisites.

## Performance visibility

The current audit and measurements are in [docs/performance-audit.md](docs/performance-audit.md).
The numbers below describe earlier checks, not a new end-to-end speedup.
New `attempt.json` operation timings separate successful worker execution from
dispatch/serialization/scheduling/transfer overhead. Agent lifecycle events record
model-capacity waits, OpenCode run/export, actual backoff, tool setup and cleanup.
`logs/tool-timing.jsonl` preserves command starts/completions independently of the
shutdown summary; unfinished commands remain explicit in the performance report.
Use `python -m orchestration.performance runs/<tag> --json` for structured output.
Nested durations overlap; pure LLM generation and the split between RTL compilation
and Wally simulation are not observable through the current backend and remain null.

The coverage ledger is rebuilt from all saved attempt records, persisted at
`runs/coverage.json`, and summarized for the Architect. Selected, tested,
reproduced and confirmed are distinct counters. Its preferred areas are advisory;
source revisions and unverified notes are labelled. After 12 shell commands or
eight minutes, Architect commands require a nonempty `extension_reason` naming
the missing fact; a missing reason returns `PLANNING_HANDOFF_REQUIRED` without
executing the command or failing the stage. Six deeply read files remains prompt
guidance. Reasons are recorded, not semantically verified by the controller.
Essential investigations may continue within the unchanged stage deadline.

Prompt context is selected by role. The Architect gets a bounded tag/target/status
history index with the archive path. The Tester gets its plan and repair feedback;
the Critic and Fixer keep the applicable full verification evidence. Context
selection copies inputs and never truncates current reproducer contracts or
verification results. Complete historical reports remain in `runs/`.

`attempt.json` records per-agent stage durations (including guards, model and
tool waits), context byte counts, and the iteration's elapsed time at archival.
The normal MCP shutdown writes command/poll/preflight counts and aggregate
command wall time to `controller/agent-*/tool-metrics.json`. A killed actor may
not produce that file, so these are observability data, not verification gates.
The reproducer result also records its total elapsed time.

`python -m orchestration.performance runs/<tag>` summarizes these records.
CLI startup enables the installed Chia profiler after connecting to Ray;
`WALLY_PROFILE=0` disables it and `WALLY_PROFILE_DIR` chooses its output directory.
The collector is stopped in a `finally` block. No Chia source, model selection,
global concurrency, baseline repeat count, or confirmation gate is changed.

Validation of the iteration-efficiency changes: **72 project tests pass**,
including the existing confirmation-gate tests and new context, preflight,
poll cancellation, and timing tests. A real GCC/Spike scaffold smoke test
confirmed that an unfinished template fails compilation, valid control/test
programs emit passing signatures, an injected expected-value mismatch fails,
and linked trap handlers satisfy alignment checks. The current archive's
40-entry history payload shrank from 97,373 to 5,855 bytes (94%) for the
Architect. This measures prompt size, not end-to-end iteration speed. No new
provider-backed campaign or full hardware regression was run for this change.

## Validation of this change

The project suite covers output schemas and format repair, semantic classification,
command masking, test/control and vector preflight, immutable evidence copies,
artifact restoration (including ignored environment files), API retries and
serialization, MCP lifecycle/polling, process cleanup, logging and the complete
four-agent mocked flow. The existing CHIA OpenCode offline tests are run separately;
provider-backed live tests are excluded. No live hardware result is inferred from
these tests.

Validation recorded for this implementation: **57 project tests passed** using
`unittest`; **63 existing CHIA OpenCode offline tests passed**, with 9 live tests
deselected. Python syntax and whitespace checks passed. The optional pytest runner
was installed only in `/tmp/wallyguard2-test-deps`; the CHIA environment and source
were not changed. Pre-existing CVW merge conflicts prevented live hardware
validation and were left untouched.
