# WallyGuard Runtime, Workload, Token, and Efficiency Audit

**Audit date:** 2026-09-23  
**Scope:** read-only analysis of the WallyGuard repository and archived campaign runs.  
**Repository:** `/home/rafay/miniconda3/WallyGuard2`

No source code, logs, run artifacts, Git state, or configuration was modified during this audit.

## Interpretation Rules

- **MEASURED** means the value was read directly from an archived field or event.
- **DERIVED** means it was calculated from measured fields, with the derivation stated.
- **UNAVAILABLE** means the repository did not record enough information to calculate it without guessing.
- Nested timers overlap. They must not be summed as wall-clock time unless explicitly described as an aggregate of invocation durations.
- An Architect `target` is an agent hypothesis. It is not controller-established bug evidence.
- A repeated `MISMATCH_CONFIRMED` with an identical fingerprint is treated as a stable reproduction because that is the controller's gate.

## A. Data Sources

| Metric | Source | Field or interpretation |
|---|---|---|
| Campaign ID | `runs/<id>/attempt.json` | `tag` and directory name |
| Campaign start | `runs/<id>/attempt.json` | `started_at` |
| Campaign wall time | `runs/<id>/attempt.json` | `duration_seconds`; monotonic elapsed time including final archival accounting |
| Campaign outcome | `runs/<id>/attempt.json` | `status` |
| Campaign end | `runs/<id>/events.jsonl` | Final controller event `timestamp`, when present |
| Agent-stage runtime | `attempt.json` | `timings[].stage`, `timings[].duration_seconds` |
| Agent context size | `attempt.json` | `timings[].context_bytes`; compact JSON from `agent_context()` only |
| Controller operation timing | `attempt.json` | `operations[].total_seconds`, `worker_seconds`, `queue_transport_seconds` |
| Shell/MCP command timing | `logs/tool-timing.jsonl` | `COMMAND_FINISHED.duration_seconds`, `outcome`, `role` |
| Agent workload | `controller/agent-*/tool-metrics.json` | `commands`, `polls`, `preflights`, `command_seconds`, `cleanup_seconds` |
| OpenCode timing | `controller/agent-*/events.jsonl`, `logs/lifecycle-events.jsonl` | `LLM_TIMING`, capacity wait, dispatch, performance |
| Verification timing | `attempt.json` | Reproducer `duration_seconds` and nested `steps` |
| Provider token usage | `controller/agent-*/cli-diagnostics.json` | `[Usage]` and `[Result]` blocks embedded in `transcript` |
| Historical performance baseline | `docs/performance-baseline.json` | Four older audited attempts |
| Timing semantics | `orchestration/performance.py`, `orchestration/timing.py` | Explicit overlap and unavailable-field rules |

Relevant implementation paths are [loop.py](../loop.py), [orchestration/performance.py](../orchestration/performance.py), [orchestration/timing.py](../orchestration/timing.py), [orchestration/processes.py](../orchestration/processes.py), [orchestration/test_preflight.py](../orchestration/test_preflight.py), [orchestration/tool_runtime.py](../orchestration/tool_runtime.py), and [orchestration/retry_policy.py](../orchestration/retry_policy.py).

## B. Campaign-Level Runtime

### Inventory

- Archived `attempt.json` records: **83 MEASURED**
- Terminal campaigns: **46 MEASURED**
- Partial or infrastructure-incomplete attempts: **37 MEASURED**
- `candidate_fix_verified`: **6 MEASURED**
- `confirmed`: **0 MEASURED**
- `no_bug`: **20 MEASURED**
- `no_grounded_lead`: **5 MEASURED**
- Records with stable repeated mismatch fingerprints: **16 DERIVED**
- Terminal records with stable repeated mismatch fingerprints: **10 DERIVED**
- Records reaching candidate verification after stable reproduction: **6 MEASURED/DERIVED**
- `confirmed-bugs/` directory: **UNAVAILABLE/not present**
- Fresh-versus-duplicate labels: **UNAVAILABLE for most candidate records**

### Terminal campaign wall time

`duration_seconds` is read from `attempt.json` and is measured using monotonic elapsed time in the controller.

| N | Mean | Median | Minimum | P25 | P75 | Maximum |
|---:|---:|---:|---:|---:|---:|---:|
| 46 | 2107.28 s | 1797.02 s | 438.45 s | 1002.02 s | 2728.82 s | 6646.08 s |

### Candidate-fix campaigns

| N | Mean | Median | Minimum | P25 | P75 | Maximum |
|---:|---:|---:|---:|---:|---:|---:|
| 6 | 4337.84 s | 4417.09 s | 2800.04 s | 2978.91 s | 4706.50 s | 6646.08 s |

The six candidate campaigns were:

- `20260922T044024Z-c24f74c3`
- `20260922T120117Z-33808e6e`
- `20260922T154032Z-c3aec3e8`
- `20260922T211925Z-f293c4b6`
- `20260923T042133Z-b2f651bd`
- `20260923T114955Z-74b865d1`

No campaign reached `confirmed`, because directed regression was not configured and full regression was disabled in the archived records.

## C. Agent-Stage Runtime

### All recorded invocations

| Role | N | Mean | Median | Minimum | P25 | P75 | Maximum |
|---|---:|---:|---:|---:|---:|---:|---:|
| Architect | 71 | 849.06 s | 559.04 s | 2.72 s | 422.56 s | 982.53 s | 4202.54 s |
| Tester | 77 | 543.45 s | 419.19 s | 76.93 s | 239.44 s | 689.93 s | 1825.91 s |
| Critic | 25 | 991.16 s | 796.69 s | 258.27 s | 606.69 s | 1159.57 s | 2301.57 s |
| RTL Fixer | 13 | 281.72 s | 243.45 s | 8.12 s | 146.22 s | 458.67 s | 566.75 s |

### Terminal campaigns only

| Role | N | Mean | Median | Minimum | P25 | P75 | Maximum |
|---|---:|---:|---:|---:|---:|---:|---:|
| Architect | 46 | 937.16 s | 649.58 s | 258.21 s | 457.01 s | 984.37 s | 3474.71 s |
| Tester | 62 | 547.13 s | 411.74 s | 76.93 s | 244.29 s | 685.13 s | 1825.91 s |
| Baseline Critic | 10 | 918.36 s | 801.99 s | 342.22 s | 433.57 s | 940.77 s | 2008.82 s |
| Post-fix Critic | 8 | 1034.52 s | 730.10 s | 258.27 s | 606.69 s | 881.57 s | 2301.57 s |
| RTL Fixer | 8 | 250.95 s | 170.15 s | 117.00 s | 125.47 s | 334.77 s | 485.19 s |

The baseline/post-fix Critic distinction is **DERIVED from invocation order and controller phase fields**. `timings[]` records `stage`, but not an explicit Critic phase on every invocation.

Total stage time across all invocations was **130,570.43 s MEASURED/AGGREGATED**:

- Architect: **46.17% DERIVED**
- Tester: **32.05% DERIVED**
- Critic: **18.98% DERIVED**
- RTL Fixer: **2.80% DERIVED**

For the six candidate campaigns, stage-time shares were:

- Architect: **33.61%**
- Tester: **15.48%**
- Critic: **45.10%**
- RTL Fixer: **5.81%**

### Agent workload

| Measure | Value | Status/source |
|---|---:|---|
| Stage invocations | 186 | MEASURED from `timings[]` |
| LLM timing events | 192 | MEASURED from lifecycle events |
| Architect LLM timing events | 75 | MEASURED |
| Tester LLM timing events | 78 | MEASURED |
| Critic LLM timing events | 26 | MEASURED |
| RTL Fixer LLM timing events | 13 | MEASURED |
| Successful diagnostics with exact usage summaries | 165 | MEASURED from `[Result]` records |
| Completed command events | 7963 | MEASURED from `tool-timing.jsonl` |
| Tool-metrics command count | 7875 | MEASURED; differs because old/interrupted sessions are incomplete |
| Command polls | 595 | MEASURED from tool metrics |
| Reproducer preflights | 182 | MEASURED from tool metrics |
| Test-generation revisions | 54 | MEASURED from `test_revisions` |
| Test-repair transitions | 23 | DERIVED as revisions minus initial attempts |
| RTL fix attempts | 9 | MEASURED from `fix_attempts` |
| Mean stage calls/run | 2.24 | DERIVED across 83 records |
| Median stage calls/run | 2 | DERIVED across 83 records |

Files-read, files-written, and unique-file-inspection counts are **UNAVAILABLE**. Shell transcripts expose commands, but no reliable file-level activity ledger is persisted.

`context_bytes` is the UTF-8 size of compact serialized `agent_context()`. It excludes the common prompt and role instructions, so it is not a token count.

Architect context-byte distribution:

| N | Mean | Median | Minimum | Maximum |
|---:|---:|---:|---:|---:|
| 71 | 36,956 bytes | 35,383 bytes | 22,093 bytes | 51,875 bytes |

## D. Deterministic Verification Time

These are nested execution durations recorded in reproducer results. They are not additional wall time beyond agent stages when the verification occurred inside an agent stage.

| Component | N | Total | Median | Status |
|---|---:|---:|---:|---|
| Baseline reproducer | 54 | 238.26 s | 4.84 s | MEASURED |
| Repeated baseline reproduction | 16 | 90.84 s | 5.50 s | MEASURED |
| Post-fix reproducer | 9 | 40.65 s | 3.88 s | MEASURED |
| Build step | 79 | 17.36 s | 0.19 s | MEASURED |
| Control Wally execution | 68 | 122.81 s | 1.28 s | MEASURED |
| Test Wally execution | 55 | 159.18 s | 3.05 s | MEASURED |
| Control Spike execution | 72 | 6.85 s | 0.07 s | MEASURED |
| Test Spike execution | 59 | 4.68 s | 0.07 s | MEASURED |
| ELF preparation | 112 | 34.64 s | approximately 0.31 s | MEASURED |
| Artifact/Git/controller guards |  | 250.03 s for terminal subset |  | MEASURED from operations |
| Full regression | 0 | UNAVAILABLE/not run |  | `run_regression=false` |
| Directed regression | 0 | UNAVAILABLE/not configured |  | `directed_configured=false` |

For terminal campaigns:

- Wall time: **96,935.03 s**
- Agent-stage time: **96,498.88 s**, or **99.55% DERIVED**
- Controller verification execution: **264.61 s**, or **0.273% DERIVED**
- Operation-level `verify_command`: **265.39 s MEASURED/AGGREGATED**
- Guard operations: **250.03 s MEASURED/AGGREGATED**
- Queue/transport residual: **34.67 s MEASURED/AGGREGATED**

For candidate campaigns:

- Wall time: **26,027.06 s**
- Agent-stage time: **25,900.48 s**, or **99.51% DERIVED**
- Verification execution: **106.03 s**, or **0.407% DERIVED**
- Guard operations: **95.87 s MEASURED/AGGREGATED**

The controller intentionally serializes dependent stages. Asynchronous command polling can overlap with model-side non-tool time, so command totals and assistant non-tool totals must not be added to campaign wall time.

## E. Waiting, Retries, and Infrastructure Overhead

| Category | Count | Time | Status/source |
|---|---:|---:|---|
| API rate-limit events | 5 | 750 s requested; 450.78 s actual waiting | MEASURED |
| Completed rate-limit waits | 4 | 450.78 s | MEASURED |
| Provider capacity waits | 192 LLM events | 214.11 s | MEASURED |
| MCP tool startup timings | 173 | 320.48 s | MEASURED |
| MCP cleanup timings | 173 | 28.12 s | MEASURED |
| MCP restart recoveries | 0 | 0 | MEASURED in available lifecycle events |
| Agent-call failures | 16 | included in stage wall time | MEASURED |
| Invalid-request failures | 9 | separate wait unavailable | MEASURED category |
| Unknown/empty-response failures | 5 | separate wait unavailable | MEASURED category |
| Authentication failures | 2 | separate wait unavailable | MEASURED category |
| Completed command failures | 826 | 1160.93 s | MEASURED |
| Command timeouts | 55 | 6607.35 s | MEASURED |
| Passing commands | 7082 | 4980.54 s | MEASURED |
| Test-repair transitions | 23 | included in stage/controller time | MEASURED/DERIVED |

The dominant measured bottleneck is agent/OpenCode execution and waiting, not deterministic Wally/Spike execution. This does **not** prove that pure model generation is dominant, because `assistant_non_tool_seconds` includes provider and CLI waits and `llm_generation_seconds` is unavailable.

## F. Token-Usage Audit

Exact token metadata exists opportunistically in archived OpenCode transcripts, but not as a normalized WallyGuard campaign schema.

### Successful usage-bearing calls

| Agent | Records | Model |
|---|---:|---|
| Architect | 52 | `google-vertex/gemini-3.8-flash` |
| Tester | 76 | `google-vertex/gemini-3.1-pro-preview-customtools` |
| Critic | 25 | `google-vertex/gemini-3.8-flash` |
| RTL Fixer | 12 | `google-vertex/gemini-3.1-pro-preview-customtools` |

### Exact totals from persisted `[Result]` summaries

| Category | Total |
|---|---:|
| Input tokens | 113,124,474 |
| Output tokens | 1,154,603 |
| Reasoning tokens | 5,251,299 |
| Cache-read tokens | 694,889,763 |
| Cache-write tokens | 0 observed in archived per-turn blocks |
| Per-turn total tokens | 814,420,139 |
| OpenCode-reported `cost_usd` | 232.34314735 |
| Model turns | 8404 |

These are **MEASURED from archived usage blocks**, not estimates from character counts.

Limitations:

- Usage is embedded in `transcript` inside `cli-diagnostics.json`.
- `attempt.json`, `timings`, `operations`, `tool-metrics.json`, and lifecycle events do not contain normalized token fields.
- 165 usage-bearing records do not cover all 192 LLM timing events or all 186 stage invocations.
- Failed calls and format-repair calls do not consistently have exact usage records.
- `cost_usd` is OpenCode's model-table estimate, not a cloud billing export.
- Cached-content and reasoning tokens are present in the raw OpenCode records.
- Complete exact token totals for every attempt are UNAVAILABLE.
- Tokens per reproduced bug, fresh bug, upstream PR, and actual billed dollar cost are UNAVAILABLE as complete campaign metrics.

## G. Vertex AI and Provider Instrumentation

The actual request path is:

1. [loop.py](../loop.py) creates `AdditionalModelProvider(id="google-vertex", npm="@ai-sdk/google-vertex")`.
2. `prompt_with_rate_limit_retry()` calls `llm.prompt.chia_remote(...)`.
3. `DiagnosticOpenCodeLLM` wraps CHIA's `OpenCodeLLM`.
4. CHIA's `OpenCodeLLM` invokes `opencode run` and `opencode export`.
5. OpenCode exports assistant usage metadata.
6. WallyGuard saves the transcript and performance, but not `response.usage` as a separate field.

The direct CHIA Vertex backend in `chia/models/vertex.py` is not the backend used by these WallyGuard campaign calls.

WallyGuard's configured models are:

- Architect: `google-vertex/gemini-3.8-flash`
- Tester: `google-vertex/gemini-3.1-pro-preview-customtools`
- Critic: `google-vertex/gemini-3.8-flash`
- RTL Fixer: Tester model by default

The archived lifecycle events also contain one historical RTL Fixer call using `opencode/mimo-v2.5-free`; this is an observed exception to the normal configured model set.

`OpenCodeQueryResult.usage` contains:

- `input_tokens`
- `output_tokens`
- `reasoning_tokens`
- `cache_read`
- `cache_write`
- `cost_usd`
- `num_turns`

But `ask_agent()` persists only `stderr`, `returncode`, `transcript`, `model`, `performance`, and `protocol_recovery` in `cli-diagnostics.json`.

### Smallest safe future instrumentation

Add one structured per-call JSONL record at the `ask_agent()` / `prompt_with_rate_limit_retry()` boundary:

```json
{
  "timestamp": "2026-09-23T00:00:00Z",
  "run_id": "20260923T114955Z-74b865d1",
  "attempt_id": "agent-architect-...",
  "agent": "architect",
  "stage": "architect",
  "model": "google-vertex/gemini-3.8-flash",
  "request_duration_seconds": 0.0,
  "capacity_wait_seconds": 0.0,
  "input_tokens": 0,
  "cache_read_tokens": 0,
  "cache_write_tokens": 0,
  "tool_use_prompt_tokens": null,
  "output_tokens": 0,
  "reasoning_tokens": 0,
  "total_tokens": 0,
  "retry_count": 0,
  "success": true,
  "error_type": null
}
```

Recommended implementation location:

- Extract `response.usage` in `loop.py:prompt_with_rate_limit_retry()`.
- Emit it with the existing `LLM_TIMING` event.
- Persist one record per request in `runs/<id>/controller/llm-calls.jsonl`.
- Use `Path(test_dir).name` as `run_id`.
- Pass role and phase from `ask_agent()`.

`tool_use_prompt_tokens` should remain `null` unless the provider explicitly supplies it. It must not be inferred.

API request labels are not currently attached by WallyGuard. Adding a supported provider/API label for `run_id`, `agent`, and `stage` may be possible through the OpenCode Vertex adapter, but this was not implemented or validated. Local archival metadata is the safer first step and does not change model behavior.

## H. Architect History-Payload Optimization

The repository documents a reduction from **97,373 bytes to 5,855 bytes**, described as 94%, in [ORCHESTRATION.md](../ORCHESTRATION.md) and referenced by [README.md](../README.md) and [docs/performance-audit.md](performance-audit.md).

This measures serialized prompt/context size, not token count, runtime, or cost.

Implementation details:

- `run_attempt()` passes `history[-40:]`.
- `agent_context()` includes bounded history, investigation lessons, prior Critic feedback, coverage, repository subsystems, and recent notes.
- History fields are truncated.
- `investigation_lessons()` keeps up to eight negative results and eight accepted targets.

The exact before/after benchmark fixture is not archived. No test stores 97,373 or 5,855. Current Architect `context_bytes` are larger because they include more than the historical 40-entry payload:

- Mean: **36,956 bytes**
- Median: **35,383 bytes**
- Minimum: **22,093 bytes**
- Maximum: **51,875 bytes**

Therefore the 97,373-to-5,855 claim is a **documented historical measurement**, but it is not independently reproducible from the current repository and run archive.

## I. Efficiency Metrics

| Metric | Result | Status |
|---|---:|---|
| Median terminal campaign time | 1797.02 s | MEASURED/DERIVED |
| Mean terminal campaign time | 2107.28 s | MEASURED/DERIVED |
| Median candidate campaign time | 4417.09 s | MEASURED/DERIVED |
| Median time to stable reproduction | UNAVAILABLE | Per-check absolute timestamps are not persisted |
| Median reproduction-to-verified-fix time | UNAVAILABLE | Same limitation |
| Agent time as terminal wall time | 99.55% | DERIVED |
| Deterministic verification as terminal wall time | 0.273% | DERIVED |
| Average stage calls/campaign | 2.24 | DERIVED |
| Median stage calls/campaign | 2 | DERIVED |
| Average test revisions/record | 0.65 | DERIVED |
| Median test revisions/record | 0 | DERIVED |
| Average fix attempts/record | 0.108 | DERIVED |
| Median fix attempts/record | 0 | DERIVED |
| Candidate-fix verified rate, all archived records | 6/83 = 7.23% | DERIVED |
| Candidate-fix verified rate, terminal records | 6/46 = 13.04% | DERIVED |
| Confirmed-repair rate | 0/83 and 0/46 | MEASURED/DERIVED |
| Stable-reproduction yield, all records | 16/83 = 19.28% | DERIVED |
| Stable-reproduction yield, terminal records | 10/46 = 21.74% | DERIVED |
| Fresh-bug yield | UNAVAILABLE | Freshness labels not consistently recorded |
| Tokens per reproduced bug | UNAVAILABLE as complete metric | Incomplete token coverage |
| Tokens per fresh bug | UNAVAILABLE | Freshness and complete token coverage absent |
| Tokens per upstream PR | UNAVAILABLE | No PR linkage |
| Actual dollar cost/run | UNAVAILABLE | No billing export; OpenCode cost is a model-table field |

## J. Statistical Summary

The distributions above use N, mean, median, minimum, P25, P75, and maximum where enough observations exist. Small phase-specific samples, especially baseline and post-fix Critic samples, should not be treated as stable population estimates.

The main statistical separation is:

- **All archived records:** includes four active/in-progress records and infrastructure failures; useful for workload inventory but not campaign-success timing.
- **Terminal campaigns:** 46 records; used for campaign runtime and outcome rates.
- **Stable reproductions:** 16 records; includes some invalid-artifact, rejected-fix, and incomplete attempts.
- **Candidate-fix campaigns:** 6 records; all are targeted candidates, not confirmed repairs.

## K. Bottleneck Analysis

1. Agent-stage wall time dominates measured terminal campaign wall time: 99.55%.
2. Deterministic Wally/Spike verification is short in the successful newer runs, generally seconds per reproducer rather than tens of minutes.
3. Historical command timeouts and wrong-tool invocations are visible in `tool-timing.jsonl`; 55 command timeouts accumulated 6607.35 seconds.
4. Provider capacity waits and rate-limit waits are measurable but smaller than total agent-stage time.
5. Pure model generation cannot be isolated because OpenCode reports assistant non-tool intervals that include provider and CLI waits.
6. Critic stages are disproportionately expensive in candidate campaigns, representing 45.10% of candidate stage time.
7. Full and directed regression cost is absent because neither was run in the archived campaigns.

## L. Missing Telemetry

The archive cannot reliably reconstruct:

- Pure model-generation time
- Complete token usage for failed and repaired calls
- Provider billing or invoice cost
- Structured file-read/file-write counts
- Per-check absolute start/end timestamps
- Time from campaign start to stable reproduction
- Time from stable reproduction to verified fix
- Separate RTL compilation versus simulator execution time
- Complete format-repair token/runtime attribution
- Explicit Critic phase on every timing record
- Fresh-versus-duplicate classification for all findings
- Upstream PR linkage
- Directed/full-regression runtime

Nested timers and interrupted command records also limit additive decomposition.

## M. Paper-Ready Facts

1. WallyGuard archived 83 campaign/attempt records in the audited period.
2. Forty-six campaigns reached terminal controller outcomes; 37 were partial or infrastructure-incomplete.
3. Terminal campaign wall time had a median of 1797.02 seconds and a mean of 2107.28 seconds.
4. Six campaigns reached `candidate_fix_verified`; none reached `confirmed`.
5. Sixteen records achieved repeated mismatch fingerprints; ten were terminal campaigns.
6. Candidate campaigns had a median wall time of 4417.09 seconds.
7. The controller recorded 186 agent-stage invocations and 192 LLM timing events.
8. Architect, Tester, Critic, and RTL Fixer stage durations totaled 130570.43 seconds.
9. Across all stage invocations, Architect time represented 46.17%, Tester 32.05%, Critic 18.98%, and RTL Fixer 2.80% of recorded stage time.
10. Recorded agent-stage time represented 99.55% of terminal campaign wall time.
11. Controller verification execution represented 0.273% of terminal campaign wall time.
12. The archive contains 7963 completed agent command events, including 826 command failures and 55 timeouts.
13. Four completed rate-limit waits accumulated 450.78 seconds.
14. OpenCode capacity waits totaled 214.11 seconds across 192 LLM timing events.
15. Exact token summaries were available for 165 successful OpenCode calls.
16. Those calls consumed 113124474 input tokens, 1154603 output tokens, 5251299 reasoning tokens, and 694889763 cache-read tokens.
17. OpenCode-reported model-table cost totaled 232.34314735 USD; no actual billing export was available.
18. No archived campaign ran directed or full regression.
19. The documented Architect context reduction from 97373 to 5855 bytes is a historical prompt-size measurement, not a token or runtime measurement.
20. The historical before/after context-size fixture is not present in the repository or run archives.

## N. Complete Run Inventory

`wall_s` is `attempt.json.duration_seconds`. `UNAVAILABLE` means the record remained active or did not persist a duration. Topics are omitted here because `plan.target` is an unverified agent hypothesis; the authoritative evidence remains in each run's `attempt.json`, `events.jsonl`, and verification logs.

| Run | Start | Status | wall_s |
|---|---|---|---:|
| 20260920T071102Z-264f62cd | 2026-09-20T07:11:02.968517+00:00 | controller_error | 189.405 |
| 20260920T072731Z-82f6f3f2 | 2026-09-20T07:27:31.572163+00:00 | in_progress | UNAVAILABLE |
| 20260921T124419Z-ecb279b5 | 2026-09-21T12:44:19.304342+00:00 | workspace_unavailable | 0.043 |
| 20260921T124449Z-319ba701 | 2026-09-21T12:44:49.520531+00:00 | agent_failed | 104.373 |
| 20260921T124830Z-d9383bb1 | 2026-09-21T12:48:30.063210+00:00 | invalid_artifacts | 3552.949 |
| 20260921T134743Z-d09d0518 | 2026-09-21T13:47:43.028642+00:00 | baseline_not_reproduced | 2537.816 |
| 20260921T143000Z-4394004e | 2026-09-21T14:30:00.857220+00:00 | agent_failed | 172.450 |
| 20260921T143521Z-84f06d2d | 2026-09-21T14:35:21.757383+00:00 | agent_failed | 354.345 |
| 20260921T144858Z-059e2eea | 2026-09-21T14:48:58.491751+00:00 | api_rate_limit | 1484.782 |
| 20260921T154553Z-67aaf380 | UNAVAILABLE | in_progress | UNAVAILABLE |
| 20260921T171134Z-f3f2a3ec | 2026-09-21T17:11:34.181143+00:00 | workspace_unavailable | 0.063 |
| 20260921T171305Z-bb9ecfe5 | 2026-09-21T17:13:05.504868+00:00 | agent_failed | 1001.401 |
| 20260921T173710Z-5f32c234 | 2026-09-21T17:37:10.180293+00:00 | agent_failed | 1192.382 |
| 20260921T180937Z-1c8013db | 2026-09-21T18:09:37.190114+00:00 | agent_failed | 1336.728 |
| 20260921T184036Z-0cc29037 | 2026-09-21T18:40:36.590003+00:00 | no_bug | 1836.908 |
| 20260921T191113Z-c30a4ef3 | 2026-09-21T19:11:13.510776+00:00 | in_progress | UNAVAILABLE |
| 20260921T191229Z-0da0583d | 2026-09-21T19:12:29.012965+00:00 | workspace_unavailable | 0.035 |
| 20260921T191541Z-44352c94 | 2026-09-21T19:15:41.673176+00:00 | test_repair_exhausted | 3271.377 |
| 20260921T201013Z-01b23d31 | 2026-09-21T20:10:13.063410+00:00 | baseline_not_reproduced | 2392.846 |
| 20260921T205005Z-d91af006 | 2026-09-21T20:50:05.921109+00:00 | test_repair_exhausted | 2721.866 |
| 20260921T213527Z-4a348d42 | 2026-09-21T21:35:27.802367+00:00 | no_bug | 2121.370 |
| 20260921T221049Z-dfb7bc5d | 2026-09-21T22:10:49.182349+00:00 | test_repair_exhausted | 2728.817 |
| 20260921T225618Z-e85ff7af | 2026-09-21T22:56:18.015791+00:00 | agent_failed | 651.550 |
| 20260922T021745Z-e2b36d57 | 2026-09-22T02:17:45.092504+00:00 | agent_failed | 2843.122 |
| 20260922T032209Z-b069f2a3 | 2026-09-22T03:22:09.640788+00:00 | invalid_artifacts | 2658.720 |
| 20260922T040628Z-e59647ef | 2026-09-22T04:06:28.381533+00:00 | agent_failed | 147.082 |
| 20260922T044024Z-c24f74c3 | 2026-09-22T04:40:24.032082+00:00 | candidate_fix_verified | 2800.039 |
| 20260922T052704Z-b1b96c21 | 2026-09-22T05:27:04.085593+00:00 | test_repair_exhausted | 3429.664 |
| 20260922T062413Z-61b21fbb | 2026-09-22T06:24:13.765929+00:00 | fix_rejected | 2525.199 |
| 20260922T073154Z-65a65722 | 2026-09-22T07:31:54.605893+00:00 | baseline_not_reproduced | 790.074 |
| 20260922T074504Z-a7176468 | 2026-09-22T07:45:04.693596+00:00 | agent_failed | 2595.880 |
| 20260922T113556Z-03ce19c5 | 2026-09-22T11:35:56.641996+00:00 | interrupted | 0.079 |
| 20260922T120117Z-33808e6e | 2026-09-22T12:01:17.272116+00:00 | candidate_fix_verified | 6646.084 |
| 20260922T135203Z-315f8442 | 2026-09-22T13:52:03.370787+00:00 | invalid_artifacts | 3102.345 |
| 20260922T154032Z-c3aec3e8 | 2026-09-22T15:40:32.008989+00:00 | candidate_fix_verified | 4706.497 |
| 20260922T165858Z-5bfc82a1 | 2026-09-22T16:58:58.539459+00:00 | bug_rejected | 3746.277 |
| 20260922T180124Z-956ff96d | 2026-09-22T18:01:24.837963+00:00 | no_bug | 996.633 |
| 20260922T181801Z-e71afe58 | 2026-09-22T18:18:01.482582+00:00 | invalid_artifacts | 5027.416 |
| 20260922T194400Z-358132bc | 2026-09-22T19:44:00.087304+00:00 | test_repair_exhausted | 2755.104 |
| 20260922T202955Z-25226302 | 2026-09-22T20:29:55.209815+00:00 | interrupted | 0.115 |
| 20260922T203156Z-98a82e4b | 2026-09-22T20:31:56.468645+00:00 | workspace_unavailable | 0.044 |
| 20260922T203252Z-27a10c57 | 2026-09-22T20:32:52.185241+00:00 | workspace_unavailable | 0.037 |
| 20260922T203450Z-c573e309 | 2026-09-22T20:34:50.104403+00:00 | invalid_artifacts | 2675.056 |
| 20260922T211925Z-f293c4b6 | 2026-09-22T21:19:25.175783+00:00 | candidate_fix_verified | 2978.909 |
| 20260922T220904Z-63bb2754 | 2026-09-22T22:09:04.102286+00:00 | no_bug | 1002.020 |
| 20260922T222546Z-f0405936 | 2026-09-22T22:25:46.133358+00:00 | fix_rejected | 5000.043 |
| 20260922T234906Z-d5445717 | 2026-09-22T23:49:06.192318+00:00 | no_bug | 1269.428 |
| 20260923T001015Z-ef569629 | 2026-09-23T00:10:15.632586+00:00 | no_bug | 2516.121 |
| 20260923T005211Z-3e2e9537 | 2026-09-23T00:52:11.767273+00:00 | no_bug | 1120.228 |
| 20260923T011052Z-d3f4ccfb | 2026-09-23T01:10:52.008409+00:00 | baseline_not_reproduced | 1757.141 |
| 20260923T014009Z-b16c087e | 2026-09-23T01:40:09.163350+00:00 | interrupted | 0.153 |
| 20260923T020415Z-efddaeed | 2026-09-23T02:04:15.762051+00:00 | workspace_unavailable | 0.045 |
| 20260923T020610Z-285de727 | 2026-09-23T02:06:10.296334+00:00 | no_bug | 1390.256 |
| 20260923T022920Z-86913c31 | 2026-09-23T02:29:20.562756+00:00 | baseline_not_reproduced | 2514.649 |
| 20260923T031115Z-5afcdb67 | 2026-09-23T03:11:15.224679+00:00 | agent_failed | 170.052 |
| 20260923T042133Z-b2f651bd | 2026-09-23T04:21:33.927252+00:00 | candidate_fix_verified | 4767.836 |
| 20260923T054101Z-c5b395c4 | 2026-09-23T05:41:01.777494+00:00 | no_bug | 1569.606 |
| 20260923T060711Z-10cc899b | 2026-09-23T06:07:11.393604+00:00 | no_bug | 973.911 |
| 20260923T062325Z-a2088d4a | 2026-09-23T06:23:25.316346+00:00 | no_bug | 1349.023 |
| 20260923T064554Z-0d23b5f3 | 2026-09-23T06:45:54.353136+00:00 | no_bug | 1887.643 |
| 20260923T071722Z-a00c14fc | 2026-09-23T07:17:22.006794+00:00 | no_bug | 1264.198 |
| 20260923T073826Z-96774d6e | 2026-09-23T07:38:26.216822+00:00 | no_bug | 3378.541 |
| 20260923T083444Z-ba9b4e95 | 2026-09-23T08:34:44.768591+00:00 | no_bug | 615.538 |
| 20260923T084459Z-6a717255 | 2026-09-23T08:44:59.557506+00:00 | workspace_unavailable | 0.401 |
| 20260923T084500Z-f24c9492 | 2026-09-23T08:45:00.318822+00:00 | agent_failed | 1314.204 |
| 20260923T092804Z-54964bc9 | 2026-09-23T09:28:04.956097+00:00 | no_grounded_lead | 457.167 |
| 20260923T093542Z-4dff1b62 | 2026-09-23T09:35:42.135401+00:00 | no_grounded_lead | 453.852 |
| 20260923T094315Z-9b822dc1 | 2026-09-23T09:43:15.998004+00:00 | agent_failed | 283.610 |
| 20260923T100654Z-4dbed042 | 2026-09-23T10:06:54.408874+00:00 | no_grounded_lead | 457.281 |
| 20260923T101431Z-4136e891 | 2026-09-23T10:14:31.701290+00:00 | no_grounded_lead | 453.552 |
| 20260923T102205Z-06e854fb | 2026-09-23T10:22:05.263741+00:00 | agent_failed | 441.121 |
| 20260923T112219Z-c7bb6f93 | 2026-09-23T11:22:19.824359+00:00 | baseline_not_reproduced | 1655.766 |
| 20260923T114955Z-74b865d1 | 2026-09-23T11:49:55.605151+00:00 | candidate_fix_verified | 4127.692 |
| 20260923T125843Z-291a64c1 | 2026-09-23T12:58:43.314050+00:00 | no_bug | 1322.806 |
| 20260923T132046Z-fbd6cd14 | 2026-09-23T13:20:46.131877+00:00 | agent_failed | 385.397 |
| 20260923T133435Z-58817945 | 2026-09-23T13:34:35.878879+00:00 | no_grounded_lead | 438.454 |
| 20260923T134154Z-dc5dd7e7 | 2026-09-23T13:41:54.346775+00:00 | baseline_not_reproduced | 976.150 |
| 20260923T135810Z-dd8d452d | 2026-09-23T13:58:10.515345+00:00 | no_bug | 2009.483 |
| 20260923T143140Z-5c2b8b3c | 2026-09-23T14:31:40.010450+00:00 | no_bug | 946.080 |
| 20260923T144726Z-38a5e816 | 2026-09-23T14:47:26.100676+00:00 | agent_failed | 449.672 |
| 20260923T150707Z-40daacec | 2026-09-23T15:07:07.028342+00:00 | no_bug | 1063.949 |
| 20260923T152450Z-2aaa04ab | 2026-09-23T15:24:50.990139+00:00 | no_bug | 1211.135 |
| 20260923T154502Z-747ae2ff | 2026-09-23T15:45:02.137874+00:00 | in_progress | UNAVAILABLE |

## O. Final Usage Accounting Pass

This final read-only pass reparsed every archived `runs/*/controller/agent-*/cli-diagnostics.json` transcript using the same `[Usage]` and `[Result]` parsing rule as the previous audit.

- Diagnostic files inspected: **167 MEASURED**
- Usage-bearing records: **167 MEASURED**
- Runs with usage-bearing records: **53 MEASURED**
- Every diagnostic contained exactly one parseable usage-bearing `[Result]` block.
- Each transcript contained 1 to 232 OpenCode `[Usage]` step blocks.

### O.1 Per-model aggregate

| Model | Records | Turns | Input | Output | Reasoning | Cache read | Cache write | OpenCode cost USD |
|---|---:|---:|---:|---:|---:|---:|---:|---:|
| `google-vertex/gemini-3.1-pro-preview-customtools` | 89 | 3035 | 34067027 | 531606 | 1621531 | 101096781 | 0 | 114.191054200 |
| `google-vertex/gemini-3.8-flash` | 78 | 5464 | 80865272 | 647250 | 3697926 | 597042907 | 0 | 121.721582025 |
| **Total** | **167** | **8499** | **114932299** | **1178856** | **5319457** | **698139688** | **0** | **235.912636225** |

### O.2 Per-agent aggregate

| Agent | Records | Turns | Input | Output | Reasoning | Cache read | Cache write | OpenCode cost USD |
|---|---:|---:|---:|---:|---:|---:|---:|---:|
| Architect | 53 | 3738 | 59896539 | 427875 | 2996205 | 471463941 | 0 | 93.122499825 |
| Tester | 77 | 2809 | 31988004 | 502559 | 1525322 | 96565247 | 0 | 107.623629400 |
| Critic | 25 | 1726 | 20968733 | 219375 | 701721 | 125578966 | 0 | 28.599082200 |
| RTL Fixer | 12 | 226 | 2079023 | 29047 | 96209 | 4531534 | 0 | 6.567424800 |
| **Total** | **167** | **8499** | **114932299** | **1178856** | **5319457** | **698139688** | **0** | **235.912636225** |

### O.3 Model-by-agent matrix

| Model | Agent | Records | Turns | Input | Output | Reasoning | Cache read | Cache write | OpenCode cost USD |
|---|---|---:|---:|---:|---:|---:|---:|---:|---:|
| `google-vertex/gemini-3.1-pro-preview-customtools` | Tester | 77 | 2809 | 31988004 | 502559 | 1525322 | 96565247 | 0 | 107.623629400 |
| `google-vertex/gemini-3.1-pro-preview-customtools` | RTL Fixer | 12 | 226 | 2079023 | 29047 | 96209 | 4531534 | 0 | 6.567424800 |
| `google-vertex/gemini-3.8-flash` | Architect | 53 | 3738 | 59896539 | 427875 | 2996205 | 471463941 | 0 | 93.122499825 |
| `google-vertex/gemini-3.8-flash` | Critic | 25 | 1726 | 20968733 | 219375 | 701721 | 125578966 | 0 | 28.599082200 |

### O.4 Per-run aggregate CSV

```csv
run_id,model(s),agent_calls,turns,input,output,reasoning,cache_read,cache_write,cost_usd
20260920T072731Z-82f6f3f2,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",3,116,1458677,17474,78463,4680857,0,4.619807275
20260921T124830Z-d9383bb1,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",4,257,1689979,32379,168432,22611355,0,5.006054500
20260921T134743Z-d09d0518,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",3,165,1076505,23161,118997,9475123,0,4.807789350
20260921T184036Z-0cc29037,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",3,177,1607051,20007,93031,8995196,0,4.674305325
20260921T191541Z-44352c94,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",4,221,2278395,47291,124398,14432120,0,7.155498250
20260921T201013Z-01b23d31,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",4,197,2454034,35125,124828,11434128,0,6.501425725
20260921T205005Z-d91af006,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",4,136,1683478,19407,99043,2925594,0,4.851795675
20260921T213527Z-4a348d42,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,152,1075275,27760,101520,11928666,0,4.552026825
20260921T221049Z-dfb7bc5d,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",4,151,4282933,29639,101150,5858376,0,10.760331950
20260922T021745Z-e2b36d57,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",5,167,1855467,21437,95916,4429631,0,4.231755075
20260922T032209Z-b069f2a3,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",4,132,1881646,18456,53294,5754446,0,2.863600700
20260922T044024Z-c24f74c3,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",5,190,2372941,36110,103485,8776166,0,4.568158950
20260922T052704Z-b1b96c21,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",5,251,2425463,37312,172055,12369981,0,6.838827450
20260922T062413Z-61b21fbb,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",5,230,1653436,28642,88136,14938687,0,3.371048025
20260922T073154Z-65a65722,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",3,84,1115489,12992,39690,3308264,0,1.771399175
20260922T074504Z-a7176468,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,118,2012151,17350,47843,7247828,0,3.545331350
20260922T113556Z-03ce19c5,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",3,109,1016388,14933,48246,4947724,0,1.526621175
20260922T120117Z-33808e6e,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",5,271,4809811,33198,127594,21148158,0,6.121744975
20260922T135203Z-315f8442,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",4,138,1850977,13786,67191,5516548,0,2.567657850
20260922T154032Z-c3aec3e8,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",5,193,3171379,24739,69917,5432807,0,4.594158900
20260922T165858Z-5bfc82a1,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",5,352,4882430,37981,117717,30841602,0,9.588603525
20260922T180124Z-956ff96d,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,92,824966,10103,45872,5669514,0,1.606301300
20260922T181801Z-e71afe58,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,231,8915355,21078,219532,37968706,0,11.460527700
20260922T194400Z-358132bc,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",4,172,3056490,19428,96540,8664945,0,5.130721750
20260922T203450Z-c573e309,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",6,259,1967734,32477,111044,14324487,0,4.826020400
20260922T211925Z-f293c4b6,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",5,215,1802504,29461,86742,10158993,0,3.685058600
20260922T220904Z-63bb2754,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,102,651735,12052,54083,6762668,0,1.832460850
20260922T222546Z-f0405936,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",5,413,5524078,44501,303885,62633253,0,10.952820600
20260922T234906Z-d5445717,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,136,1108021,15491,111041,15998310,0,2.984658500
20260923T001015Z-ef569629,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",3,194,1451537,24035,107133,10757464,0,5.079288300
20260923T005211Z-3e2e9537,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,134,1168524,14713,69900,13732125,0,2.691728250
20260923T011052Z-d3f4ccfb,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,146,1718452,17968,108647,15099091,0,3.703214700
20260923T020610Z-285de727,"google-vertex/gemini-3.1-pro-preview-customtools",2,105,1455026,11604,82618,8684602,0,2.549779400
20260923T022920Z-86913c31,"google-vertex/gemini-3.1-pro-preview-customtools",2,153,3756303,14066,108733,18319119,0,4.994939675
20260923T042133Z-b2f651bd,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",6,384,7761633,41986,359713,72628892,0,14.114173275
20260923T054101Z-c5b395c4,"google-vertex/gemini-3.1-pro-preview-customtools",2,159,2097362,15995,151742,21396789,0,4.430549675
20260923T060711Z-10cc899b,"google-vertex/gemini-3.1-pro-preview-customtools",2,104,1070641,11713,78317,8750924,0,2.248619800
20260923T062325Z-a2088d4a,"google-vertex/gemini-3.1-pro-preview-customtools",2,123,1253183,11110,103924,13023425,0,2.784365250
20260923T064554Z-0d23b5f3,"google-vertex/gemini-3.1-pro-preview-customtools",2,140,2579859,27138,130752,18097826,0,4.460928325
20260923T071722Z-a00c14fc,"google-vertex/gemini-3.1-pro-preview-customtools",2,111,1162535,15244,108876,10345627,0,2.873649525
20260923T073826Z-96774d6e,"google-vertex/gemini-3.1-pro-preview-customtools",2,262,4505675,35651,219499,64432351,0,10.139630450
20260923T083444Z-ba9b4e95,"google-vertex/gemini-3.1-pro-preview-customtools",2,56,680109,10385,39435,2066493,0,1.314358975
20260923T084500Z-f24c9492,"google-vertex/gemini-3.1-pro-preview-customtools",2,102,1312981,15503,42726,6162438,0,2.340199600
20260923T112219Z-c7bb6f93,"google-vertex/gemini-3.1-pro-preview-customtools",3,103,1353631,25542,64773,3326239,0,3.839042175
20260923T114955Z-74b865d1,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",6,247,3135337,32011,86652,10852394,0,4.965019300
20260923T125843Z-291a64c1,"google-vertex/gemini-3.1-pro-preview-customtools",2,45,1130771,9652,39488,875416,0,1.458491075
20260923T133435Z-58817945,"google-vertex/gemini-3.8-flash",1,15,108133,2185,41026,401493,0,0.273252975
20260923T134154Z-dc5dd7e7,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,62,592383,14125,22575,1509387,0,1.401882400
20260923T135810Z-dd8d452d,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,85,1267070,18952,36313,3317123,0,3.208400725
20260923T143140Z-5c2b8b3c,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,83,843930,14040,42302,3262890,0,2.036329625
20260923T150707Z-40daacec,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,82,1099722,20471,74552,4989930,0,2.079185500
20260923T152450Z-2aaa04ab,"google-vertex/gemini-3.1-pro-preview-customtools;google-vertex/gemini-3.8-flash",2,82,1114889,16744,61918,3623592,0,2.359606650
20260923T154502Z-747ae2ff,"google-vertex/gemini-3.1-pro-preview-customtools",2,95,1807825,24253,68158,3249925,0,3.569488875
```

### O.5 Reconciliation against the previous audit

Previous totals:

```text
input       113124474
output        1154603
reasoning     5251299
cache_read  694889763
cost_usd        232.34314735
turns             8404
```

Current totals:

```text
input       114932299
output        1178856
reasoning     5319457
cache_read  698139688
cost_usd        235.912636225
turns             8499
```

| Field | Delta |
|---|---:|
| Input | +1807825 |
| Output | +24253 |
| Reasoning | +68158 |
| Cache read | +3249925 |
| Cost USD | +3.569488875 |
| Turns | +95 |

The reconciliation is exact. Every delta comes from the newly archived run `20260923T154502Z-747ae2ff`, which contains two Tester records using `google-vertex/gemini-3.1-pro-preview-customtools`:

- 95 turns
- 1807825 input tokens
- 24253 output tokens
- 68158 reasoning tokens
- 3249925 cache-read tokens
- 0 cache-write tokens
- `3.569488875` OpenCode-reported cost

### O.6 Raw provider metadata versus OpenCode-normalized usage

The archived diagnostics contain **OpenCode-normalized usage**, not raw Vertex response objects.

The normalized `[Usage]` blocks use fields such as:

```json
{
  "total": 12345,
  "input": 10000,
  "output": 500,
  "reasoning": 1845,
  "cache": {"read": 100000, "write": 0}
}
```

The normalized `[Result]` block aggregates them into fields such as `input_tokens`, `output_tokens`, `reasoning_tokens`, `cache_read`, `cache_write`, `cost_usd`, and `num_turns`.

A scan of all 167 diagnostic transcripts found **zero** occurrences of raw provider field names:

- `usageMetadata`
- `usage_metadata`
- `promptTokenCount`
- `candidatesTokenCount`
- `thoughtsTokenCount`
- `cachedContentTokenCount`
- `toolUsePromptTokenCount`
- `totalTokenCount`

Consequently, the paper may describe these as exact **OpenCode-export usage totals**, but not as independently archived raw Vertex response metadata. Tool-use prompt tokens are not separately recorded and must remain unavailable rather than inferred. Raw provider response objects are not archived.
