The Architect, Tester and Critic use Vertex AI through `OpenCodeLLM`:

| Agent | Default model | Environment override |
| --- | --- | --- |
| Architect | `google-vertex/gemini-3.8-flash` | `CHIA_ARCHITECT_MODEL` |
| Tester | `google-vertex/gemini-3.1-pro-preview-customtools` | `CHIA_TESTER_MODEL` |
| Critic | `google-vertex/gemini-3.1-pro-preview-customtools` | `CHIA_CRITIC_MODEL` |

The current four-agent loop, RTL Fixer model, prompts, timeouts and verification
are preserved. `GOOGLE_CLOUD_PROJECT` defaults in Python to
`jovial-analyst-507116-p9`; the provider pins location to `global`.

`cluster.yaml` mounts the host's `${HOME}/.config/gcloud` directory read-only at
`/home/ray/.config/gcloud`. The actual container user is `ray` (UID 1000), and
Chia names this worker `chia-opencode-abdul-0`. It receives
`GOOGLE_CLOUD_PROJECT` and `VERTEX_LOCATION=global` at container creation.
OpenCode uses the standard mounted ADC location. No temporary ADC copy,
API key login, or per-command credential environment override is required.

On this host, ADC is owned by UID 1001 and was initially mode 600. A file ACL
allows container UID 1000 to read it without granting other users access:

```bash
setfacl -m u:1000:r ~/.config/gcloud/application_default_credentials.json
```

If reauthenticating replaces the file, check that this ACL still exists.

To recreate an idle cluster with this configuration, use the repository's
existing CHIA commands from the activated `chia_env`:

```bash
export HEAD_IP=10.212.0.2
export GOOGLE_CLOUD_PROJECT=jovial-analyst-507116-p9
chia down cluster.yaml -y
chia up cluster.yaml -y
```

A running container does not pick up changed mounts via `chia up` alone.
Preserve any container-local OpenCode data before recreation.

Verify authentication with a small request from the actual container:

```bash
docker exec chia-opencode-abdul-0 opencode run \
  -m google-vertex/gemini-3.8-flash 'Reply with exactly PONG'
```

Ray job drivers do not automatically inherit shell exports. `submit.py` forwards
the project and the three `CHIA_*_MODEL` settings using `--runtime-env-json`.
It uses the absolute loop path on this existing head host, avoiding an upload
of the large Wally checkout. Inspect the command without starting a campaign:

```bash
python submit.py --dry-run
```

To try the small AND-gate task in `test.py` first, use `python submit.py --test`.
It uses the Architect model and the same Vertex provider configuration.
When ready to start the campaign, use `python submit.py`. It also accepts
`chia job submit` options such as `--address` and `--submission-id`.
For direct `python loop.py` execution, normal shell environment inheritance works.

Local CHIA references: `chia/docs/user_guides/google_auth.rst` describes the
persistent ADC mount and job environment forwarding; the installed
`AdditionalModelProvider` and `additional_providers` APIs match the requested API.

Validation on 2026-09-10: the container command above returned `PONG` with the
persistent read-only mount, project and location already configured, and
`GOOGLE_APPLICATION_CREDENTIALS` unset. A second request through `OpenCodeLLM`
on the CHIA worker also returned `PONG` with `success=true`. Python syntax/provider
construction and all 13 controller tests passed. No bug-hunting campaign was started.

Vertex `Resource exhausted` / HTTP 429 during an agent call is an API failure,
not a hardware-test verdict. CHIA's OpenCode backend raises `RateLimitError`
immediately even when its own `retries` setting is increased. The loop now
retries the same agent up to four times, waiting 30, 60, 120 and 240 seconds
plus up to five seconds of jitter. It keeps the same worktree and Bash tool.
Each retry starts a fresh OpenCode conversation with instructions to inspect
existing files and logs before continuing; it does not restore chat history.
Authentication errors and other exception types are not retried by this policy.
If all retries fail, the existing error/archive/next-iteration behavior applies.

These changes apply to newly submitted jobs; an already running job retains
the code it loaded at startup.
See [Google's 429 guidance](https://cloud.google.com/vertex-ai/generative-ai/docs/error-code-429).

The loop reuses `wally-worktrees/wally-shared` beside `cvw` across iterations
and job restarts. The first run copies the local checkout, including ignored
build files, built tests and populated submodules. The copy has independent
submodule Git metadata. Existing symlinks are preserved; relocated executables,
virtual environments or build files with absolute paths may need rebuilding.
Local tracked edits and new RTL are captured in a private baseline commit;
the original checkout is not changed. Later edits to the original are not
automatically synchronized into the shared copy.

Before the next attempt, the loop restores tracked files to that initial
baseline and removes newly generated RTL under `src/`, while keeping regression
build data. Proposed patches and untracked RTL are saved before this reset.
Confirmed fixes remain exported patches; they are not accumulated in the
shared baseline. Tests, binaries, logs and attempt records are written directly
to `runs/<attempt-id>/`, without a second artifact copy in the worktree.

The loop stops if the previous shared-worktree attempt is still marked
`in_progress` or has no archive, so two jobs cannot reset each other's work.
An abrupt process kill or incomplete first copy requires inspecting the retained
workspace before reuse. Older per-iteration worktrees are left untouched.

If a job was forcibly stopped, recover its workspace on the simulation worker
with `python recover_workspace.py --job-id <stopped-job-id>`. This checks Ray's
job status, confirms its logs started the owning attempt, refuses recovery while
another loop job is active, and archives the interrupted attempt and any tracked
changes. It does not reset the workspace; the next loop performs the normal reset.
Attempt records are now written before the Architect starts. A workspace-blocked
job exits with failure rather than misleadingly reporting success.

Full regression is now optional and disabled by default. A confirmed patch
requires an unchanged, failing baseline reproducer, a passing targeted test
after the fix, and Critic approval. Records say `verification_scope=targeted_only`
and record regression as skipped, not passed. To require full regression again,
set `WALLY_RUN_REGRESSION=1` before submitting through `submit.py`, which forwards
this setting to the job. An enabled but failing baseline regression yields
`regression_blocked` before calling the RTL Fixer.

Unsuccessful/empty OpenCode calls and Vertex's specific "Requests ending with a
model turn" error now get two recovery retries on the same assignment, with
fresh conversations and existing artifacts. Exhaustion is recorded as
`agent_failed`. Invalid model requests and authentication failures are not
retried by this recovery policy. This bounds disruption; it cannot prevent the
provider from terminating or rejecting calls.

The Tester gets up to two repair rounds for execution errors, self-rewriting
reproducers, or Critic-requested corrections. Each repair must pass a fresh
baseline reproduction and a new Critic review. Original input snapshots and
the exact changed filenames are retained. Unauthorized tracked edits during
bug review are archived and restored before revalidation; that review's approval
is discarded. Repeated failures yield `test_repair_exhausted`. Scope violations
during fixing remain rejected as `invalid_artifacts`. Recognized `.orig`, `.bak`,
`.rej` and `~` backups of tracked RTL are moved to the attempt's `fixer/backups/`.

Regression preparation: `cvw/addins/riscv-arch-test` is now pinned locally to
`c8c813af55ea79acb97fe832c5737cc4539af3ee`, which adds the missing Sv57 tests.
Their Spike/Sail build report is in `cvw/tests/riscof/riscof_work/sv57/report.html`;
the converted simulation files are installed under the expected
`cvw/tests/riscof/work/riscv-arch-test/rv64i_m/vm_sv57/` path. The regression parser
accepts the legacy testbench success marker without a missing-RVCP warning,
while retaining error and explicit failure checks. These are test infrastructure
changes, separate from agent-generated RTL fixes. No full regression was run.

The Wally Bash MCP callback is asynchronous and runs blocking subprocess work
in an AnyIO worker thread. This keeps the HTTP event loop responsive during
long builds. A per-tool lock serializes shell commands; AnyIO cancellation does
not abandon a running thread or release that lock early. The existing command
timeout and process-group cleanup still apply. This addresses event-loop
starvation that can cause client disconnects; network interruptions and client
cancellations can still produce `ClientDisconnect` messages. Existing jobs must
be resubmitted to create tool servers with this callback.

Git errors now include stderr. If an agent replaces a copied submodule with a
symlink, the scope check preserves a record of the link and restores an independent
copy only when the original dependency is still at the baseline revision. Other
dependency edits remain disallowed. An archive error still writes `attempt.json`
with diagnostic details and protects the workspace until recovery succeeds.
