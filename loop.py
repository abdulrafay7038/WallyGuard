"""Four-agent Wally bug hunting, with persistent tests and verified RTL patches.

Run through the existing Chia cluster. The architect uses source/document
retrieval and saved findings, not weight training. Optional environment settings:
WALLY_PATH, WALLY_ISA_DOCS (local specs), WALLY_REGRESSION_COMMAND,
GOOGLE_CLOUD_PROJECT, CHIA_ARCHITECT_MODEL, CHIA_TESTER_MODEL, CHIA_CRITIC_MODEL
(Vertex AI via OpenCode; see GOOGLE_GENAI.md).
"""

from datetime import datetime, timezone
import hashlib
import json
import os
from pathlib import Path
import random
import re
import shlex
import shutil
import signal
import subprocess
import time
import uuid

from chia.base.ChiaFunction import ChiaFunction, get
from chia.base.tools.BashTool import BashTool
from chia.models.opencode import AdditionalModelProvider, OpenCodeLLM, RateLimitError

WALLY_PATH = os.environ.get("WALLY_PATH", "/home/abdul/miniconda3/WallyGuard2/cvw")
MAX_ITERATIONS = 200
MAX_FIX_ATTEMPTS = 3
REGRESSION_TIMEOUT = 5400
AGENT_TIMEOUT = 14400  # Allows several long tool calls per investigation.
RATE_LIMIT_RETRIES = 4  # Extra calls after the first rate-limited call.
RATE_LIMIT_BASE_DELAY = 30
RATE_LIMIT_MAX_DELAY = 300
# Operator-selected suite: an agent cannot substitute a trivial success command.
REGRESSION_COMMAND = os.environ.get("WALLY_REGRESSION_COMMAND", "bin/regression-wally")
ISA_DOCS = os.environ.get("WALLY_ISA_DOCS", "")
VERTEX_PROJECT = os.environ.get("GOOGLE_CLOUD_PROJECT", "jovial-analyst-507116-p9")
VERTEX_PROVIDER = AdditionalModelProvider(
    id="google-vertex",
    npm="@ai-sdk/google-vertex",
    name="Google Vertex AI",
    models=["gemini-3.8-flash", "gemini-3.1-pro-preview-customtools"],
    options={"project": VERTEX_PROJECT, "location": "global"},
)
ARCHITECT_MODEL = os.environ.get("CHIA_ARCHITECT_MODEL", "google-vertex/gemini-3.8-flash")
TESTER_MODEL = os.environ.get("CHIA_TESTER_MODEL", "google-vertex/gemini-3.1-pro-preview-customtools")
CRITIC_MODEL = os.environ.get("CHIA_CRITIC_MODEL", "google-vertex/gemini-3.1-pro-preview-customtools")
MODELS = {
    "architect": ARCHITECT_MODEL,
    "tester": TESTER_MODEL,
    "critic": CRITIC_MODEL,
    "rtl_fixer": "opencode/mimo-v2.5-free",
}


def log(role: str, msg: str):
    print(f"[{datetime.now():%H:%M:%S}] ({role}) {msg}", flush=True)


def parse_response(text: str) -> dict:
    """Malformed responses fail closed, rather than becoming approvals."""
    candidate = text.strip()
    candidate = re.sub(r"^```(?:json)?\s*", "", candidate)
    candidate = re.sub(r"\s*```$", "", candidate)
    start = candidate.find("{")
    if start >= 0:
        candidate = candidate[start:]
    decoder = json.JSONDecoder()
    value, end = decoder.raw_decode(candidate)
    if candidate[end:].strip(" `\n\r"):
        raise ValueError("Agent response contains non-JSON content after the object")
    if not isinstance(value, dict):
        raise ValueError("Agent response must be a JSON object")
    return value


def require_text(result: dict, *keys: str):
    for key in keys:
        if not isinstance(result.get(key), str) or not result[key].strip():
            raise ValueError(f"Missing or empty agent field: {key}")


def git(scratch: str, *args: str) -> str:
    return subprocess.run(
        ["git", "-C", scratch, *args], check=True, capture_output=True, text=True,
    ).stdout


def wally_shell(scratch: str, command: str) -> str:
    # cluster.yaml already sources setup.sh on the simulation worker. Override
    # its checkout paths on EVERY call so regression builds the proposed RTL.
    return (f"export WALLY={shlex.quote(scratch)}\n"
            f'export PATH={shlex.quote(scratch + "/bin")}:"$PATH"\n' + command)


class WallyBashTool(BashTool):
    def run_command(self, command: str) -> str:
        """Run Bash with pipefail and WALLY pointing at this tool's checkout."""
        script = wally_shell(self.work_dir, command)
        return super().run_command("exec bash -o pipefail -c " + shlex.quote(script))


COMMON_PROMPT = """
You are part of a CORE-V Wally RTL bug-hunting campaign. Use the supplied bash
 tool for ALL repository access and execution: your LLM container is not the
simulation worker. The tool sets WALLY and PATH to the current worktree.
Read README.md, docs/testplans/testplan.md, relevant src/ modules, config/,
testbench/, bin/ and tests/. Installed Spike, Verilator, GTKWave and RISC-V
compiler/toolchain are available on the worker; verify versions and flags.
Use local ISA documents where available. Cite exact revision/section and RTL
file references; do not invent normative rules. Unsupported extensions, legal
implementation choices, unspecified behavior, malformed tests, build errors,
uninitialized signals and timeouts are not evidence of an RTL bug.

All generated programs, assertions, testbenches, scripts and oracle data MUST
live below test_dir. Put generated binaries/build output in test_dir/build and
logs in test_dir/logs. Write README.md with configuration, ISA/ABI, exact commands,
seeds, observed and expected results. Commands start at the worktree root.
Reproducer scripts must rebuild against $WALLY/src, use paths relative to $WALLY,
and exit 0 for correct DUT behavior, 1 ONLY for a successfully executed functional
mismatch, and 2 for build/tool errors. Preserve failures through pipelines.
Never reuse a stale DUT executable. No commits, resets, branch changes or edits
to the original checkout. Never weaken assertions or expected values.
Worktrees initially contain committed files only: inspect submodule/test-data
availability and prepare required dependencies within the worktree, using the
original checkout as a local source where possible. Never modify shared inputs.
Return exactly one JSON object with the requested fields.
"""

ARCHITECT_PROMPT = """
You are Agent 1, Architect. Study Wally and the relevant RISC-V ISA before
choosing ONE narrow investigation. This is source-grounded planning, not model
weight training. Inspect actual RTL/control paths, enabled configurations,
existing tests and coverage gaps. Consult local specifications at isa_docs;
if unavailable, disclose that and identify the normative rule the Tester must
verify before claiming a bug. Read saved attempts at history_dir as needed,
avoid repeating disproven claims, and carry forward useful lessons.

Rotate across underexplored blocks/interactions: stalls/flushes/forwarding,
exception and interrupt priority, CSR side effects/privilege, MMU/TLB/PMP
boundaries, cache/LSU replay and misalignment, LR/SC and AMOs, compressed
instruction boundaries, arithmetic widths/signedness/division, FP rounding,
NaNs/subnormals, reset/handshakes and parameter extremes. Verify that the
configuration supports the feature. Prefer legal edge-case sequences absent
from ordinary architecture tests. You may only write under test_dir.

Return string fields: target, rationale, tester_prompt, knowledge.
tester_prompt must give the Tester a detailed assignment: RTL files/signals,
supported configuration, hypothesized failure, directed and seeded edge cases,
method (Spike differential / assertions / isolated block), independent oracle,
and concrete success/failure criteria. knowledge must summarize what you read,
with file paths and spec references for reuse by later rounds.
"""

TESTER_PROMPT = """
You are Agent 2, Tester. Execute the architect's tester_prompt and try hard to
find a reproducible functional bug. DO NOT fix or edit RTL, configuration,
existing tests or regression scripts. Build new tests only under test_dir.
Use realistic reset/clocks, legal handshakes, correct widths and supported ISA
options. Compare architectural state/signatures against Spike where suitable;
for block tests derive an independent oracle, not a copy of the implementation.
Probe boundaries/sequences beyond ordinary RISC-V arch tests. Reduce failures
to deterministic reproducers and separate functional mismatches from tools
failing. Save negative findings too. Do not run the full regression here.

Return found_bug (JSON boolean), report (string), reproduce_command (string;
empty if no bug), evidence (string: log paths, mismatch, expected rule, config,
seed, and why this is not a test artifact). The command must obey the 0/1/2
exit contract and reproduce on UNMODIFIED RTL.
"""

CRITIC_PROMPT = """
You are Agent 3, adversarial Critic. Try your hardest to PROVE THE TESTER WRONG.
Read actual test sources, logs, oracle and RTL, not just reports. Independently
execute the reproducer. Challenge spec interpretation, enabled extensions,
XLEN/ABI, widths/signedness, reset/X state, timing/handshakes, memory maps,
reference-model flags, simulator semantics, stale builds and assertions that
constrain legal behavior. Try control tests or an independent oracle.
Put additional tests under test_dir/critic. Do not edit original reproducer
inputs, tracked files or RTL. Reject unsupported or inconclusive claims.

phase=bug_review: approve ONLY a real, independently reproduced RTL defect on
original source with a valid expected result. No fix exists yet.
phase=fix_review: inspect git diff against base_commit and independent results.
Check the actual fix is minimal and correct. When verification fails, diagnose
whether the bug remains real and give concrete RTL repair guidance. Compare
baseline regression failures when available. Never approve failed verification
or call a timeout a pass. Reject test artifacts; request revision for a real bug
whose fix needs repair. Infrastructure failures must be explicitly identified.
Return verdict (approve/revise/reject) and critique (string). revise is only
valid in fix_review. approve requires valid evidence and passing verification.
"""

FIXER_PROMPT = """
You are Agent 4, RTL Fixer. The Critic has validated the bug. Read the evidence,
reproducer and critique, find the root cause and apply the SMALLEST correct fix
to existing files under src/. Do not edit tests, expected results, configuration,
regression scripts or dependencies. Do not commit. You may add notes/supplemental
tests under test_dir/fixer. Keep original reproducer inputs unchanged. Rebuild
and run the reproducer against the fix. Use previous verification logs and
Critic feedback to refine your patch after failures. Never hide errors, disable
features or weaken checks. The controller runs the full regression independently.
Return changed (JSON boolean) and report (string: root cause, minimal fix,
files and targeted-test outcome). changed=false if no defensible fix is possible.
"""


def prompt_with_rate_limit_retry(llm, prompt: str, tools: list, role: str):
    """Retry typed 429 errors without abandoning this agent's worktree.

    CHIA propagates RateLimitError immediately, regardless of llm.retries.
    Ray's get() preserves this type through RayTaskError's cause subclass.
    A retry starts a fresh OpenCode conversation; files and tool endpoints stay
    available, so explicitly ask the agent to inspect its existing work first.
    """
    retry_note = ""
    for attempt in range(RATE_LIMIT_RETRIES + 1):
        try:
            return get(llm.prompt.chia_remote(llm, prompt + retry_note, tools=tools))
        except RateLimitError:
            if attempt == RATE_LIMIT_RETRIES:
                log(role, f"Rate limit persisted after {RATE_LIMIT_RETRIES} retries; preserving this attempt.")
                raise
            delay = min(RATE_LIMIT_MAX_DELAY,
                        RATE_LIMIT_BASE_DELAY * 2 ** attempt + random.uniform(0, 5))
            log(role, f"Rate limited; retry {attempt + 1}/{RATE_LIMIT_RETRIES} in {delay:.0f}s, same worktree.")
            remaining = delay
            while remaining > 0:
                pause = min(60, remaining)
                time.sleep(pause)
                remaining -= pause
                if remaining > 0:
                    log(role, f"Rate-limit cooldown: {remaining:.0f}s remaining.")
            retry_note = (
                "\nA previous call for this SAME assignment was interrupted by a provider rate limit. "
                "This is a fresh conversation, but the worktree and test_dir still contain its work. "
                "Inspect existing tests, notes, logs and git diff first and continue this assignment. "
                "Preserve existing evidence and obey your original role's edit restrictions."
            )


def ask_agent(role: str, scratch: str, instructions: str, context: dict) -> dict:
    # Pass the driver's model selection in context: worker/container environment
    # variables need not match the environment that launched this campaign.
    model = context.get("models", MODELS)[role]
    providers = [VERTEX_PROVIDER]
    if model.startswith("google/"):
        providers.append(AdditionalModelProvider(
            id="google", npm="@ai-sdk/google", name="Google Generative AI",
            models=[model.split("/", 1)[1]],
            # OpenCode reads the Google API key from its worker-side stored
            # login. Do not embed credentials in prompts, records or config.
        ))
    log(role, f"Using {model}")
    llm = OpenCodeLLM(model=model, timeout_seconds=AGENT_TIMEOUT, retries=1,
                      additional_providers=providers)
    bash = WallyBashTool(
        f"{role}_bash", scratch, timeout_seconds=REGRESSION_TIMEOUT,
        task_options={"resources": {"wally_sim": 1}},
    )
    try:
        response = prompt_with_rate_limit_retry(
            llm, COMMON_PROMPT + instructions + "\nContext:\n" + json.dumps(context, indent=2),
            tools=[bash], role=role,
        )
        if not response.success or not response.result:
            raise RuntimeError(f"{role} LLM call failed (success={response.success})")
        try:
            return parse_response(response.result)
        except (json.JSONDecodeError, ValueError) as exc:
            preview = response.result[:500].replace("\n", "\\n")
            raise ValueError(f"{role} returned invalid JSON ({preview!r}): {exc}") from exc
    finally:
        bash.stop()


@ChiaFunction(resources={"opencode_creds": 1})
def architect(scratch: str, context: dict) -> dict:
    result = ask_agent("architect", scratch, ARCHITECT_PROMPT, context)
    require_text(result, "target", "rationale", "tester_prompt", "knowledge")
    return result


@ChiaFunction(resources={"opencode_creds": 1})
def tester(scratch: str, context: dict) -> dict:
    result = ask_agent("tester", scratch, TESTER_PROMPT, context)
    if type(result.get("found_bug")) is not bool:
        raise ValueError("Tester found_bug must be a JSON boolean")
    require_text(result, "report")
    if result["found_bug"]:
        require_text(result, "reproduce_command", "evidence")
    return result


@ChiaFunction(resources={"opencode_creds": 1})
def critic(scratch: str, context: dict) -> dict:
    result = ask_agent("critic", scratch, CRITIC_PROMPT, context)
    require_text(result, "verdict", "critique")
    allowed = {"approve", "reject"} if context["phase"] == "bug_review" else {"approve", "revise", "reject"}
    if result["verdict"] not in allowed:
        raise ValueError("Invalid Critic verdict")
    return result


@ChiaFunction(resources={"opencode_creds": 1})
def rtl_fixer(scratch: str, context: dict) -> dict:
    result = ask_agent("rtl_fixer", scratch, FIXER_PROMPT, context)
    if type(result.get("changed")) is not bool:
        raise ValueError("Fixer changed must be a JSON boolean")
    require_text(result, "report")
    return result


@ChiaFunction(resources={"wally_sim": 1})
def make_worktree(wally_path: str, tag: str) -> dict:
    base = Path(wally_path).resolve()
    scratch = base.parent / "wally-worktrees" / f"wally-{tag}"
    scratch.parent.mkdir(parents=True, exist_ok=True)
    git(str(base), "worktree", "add", "-b", f"bugfix-{tag}", str(scratch), "HEAD")
    (scratch / "tester_llm" / tag).mkdir(parents=True)
    return {"scratch": str(scratch), "base_commit": git(str(scratch), "rev-parse", "HEAD").strip(),
            "test_dir": f"tester_llm/{tag}"}


@ChiaFunction(resources={"wally_sim": 1})
def check_changes(scratch: str, base_commit: str, allow_rtl: bool = False) -> str:
    """Reject tracked edits outside the role's scope, including staged edits."""
    if git(scratch, "rev-parse", "HEAD").strip() != base_commit:
        raise RuntimeError("Agent changed HEAD; attempt cannot be confirmed")
    names = git(scratch, "diff", "--name-only", base_commit, "--").splitlines()
    invalid = [
        name for name in names
        if not (name.startswith("addins/") and (Path(scratch) / name).is_symlink())
        and not (allow_rtl and name.startswith("src/"))
    ]
    new_rtl = git(scratch, "ls-files", "--others", "--exclude-standard", "--", "src/")
    if invalid or new_rtl:
        raise RuntimeError(f"Disallowed source changes: {invalid}; new RTL: {new_rtl}")
    return git(scratch, "diff", "--binary", base_commit, "--", "src/")


@ChiaFunction(resources={"wally_sim": 1})
def test_fingerprint(scratch: str, test_dir: str) -> dict:
    """Freeze scripts/oracle inputs, excluding designated build/log directories."""
    root = Path(scratch) / test_dir
    return {str(path.relative_to(root)): hashlib.sha256(path.read_bytes()).hexdigest()
            for path in root.rglob("*") if path.is_file()
            and not set(path.relative_to(root).parts) & {"build", "logs", "critic", "fixer", "__pycache__"}}


@ChiaFunction(resources={"wally_sim": 1})
def verify_command(scratch: str, command: str, log_path: str, timeout: int = REGRESSION_TIMEOUT) -> dict:
    """Run on the simulation worker, retaining full logs and killing on timeout."""
    if not command.strip() or command.strip().lower() == "none":
        return {"ran": False, "passed": False, "returncode": None}
    path = Path(scratch) / log_path
    path.parent.mkdir(parents=True, exist_ok=True)
    timed_out = False
    with path.open("w", encoding="utf-8") as output:
        proc = subprocess.Popen(
            ["bash", "-o", "pipefail", "-c", wally_shell(scratch, command)],
            cwd=scratch, stdout=output, stderr=subprocess.STDOUT, start_new_session=True,
        )
        try:
            proc.wait(timeout=timeout)
        except subprocess.TimeoutExpired:
            timed_out = True
        finally:
            # Also clean background children on normal exit or interruption.
            try:
                os.killpg(proc.pid, signal.SIGKILL)
            except ProcessLookupError:
                pass
            proc.wait()
    with path.open("rb") as output:
        output.seek(max(0, path.stat().st_size - 6000))
        tail = output.read().decode("utf-8", errors="replace")
    return {"ran": True, "passed": not timed_out and proc.returncode == 0,
            "returncode": proc.returncode, "timed_out": timed_out,
            "command": command, "log_path": str(path), "log_tail": tail}


@ChiaFunction(resources={"wally_sim": 1})
def save_attempt(wally_path: str, record: dict) -> None:
    """Archive negative/crashed attempts too, into the user's cvw/tester_llm."""
    dest = Path(wally_path) / "tester_llm" / record["tag"]
    dest.mkdir(parents=True, exist_ok=True)
    if record.get("scratch"):
        source = Path(record["scratch"]) / record["test_dir"]
        if source.exists():
            shutil.copytree(source, dest, dirs_exist_ok=True, symlinks=True)
    temp = dest / "attempt.json.tmp"
    temp.write_text(json.dumps(record, indent=2) + "\n", encoding="utf-8")
    temp.replace(dest / "attempt.json")


def history_entry(record: dict) -> dict:
    return {"tag": record["tag"], "target": record.get("plan", {}).get("target", "planning failed"),
            "status": record["status"], "report": record.get("tester", {}).get("report", ""),
            "knowledge": record.get("plan", {}).get("knowledge", "")}


@ChiaFunction(resources={"wally_sim": 1})
def load_history(wally_path: str) -> list[dict]:
    history = []
    for path in sorted((Path(wally_path) / "tester_llm").glob("*/attempt.json")):
        try:
            history.append(history_entry(json.loads(path.read_text(encoding="utf-8"))))
        except (OSError, ValueError, KeyError) as exc:
            log("History", f"Cannot read {path}: {exc}")
    return history


@ChiaFunction(resources={"wally_sim": 1})
def export_patch(wally_path: str, record: dict, expected_diff: str) -> str:
    diff = check_changes(record["scratch"], record["base_commit"], allow_rtl=True)
    if not diff or diff != expected_diff:
        raise RuntimeError("Empty patch or RTL changed after verification")
    dest = Path(wally_path).parent / "confirmed-bugs"
    dest.mkdir(parents=True, exist_ok=True)
    path = dest / f"bug-{record['tag']}.patch"
    path.write_text(diff, encoding="utf-8")
    return str(path)


def remote(function, *args, **kwargs):
    return get(function.chia_remote(*args, **kwargs))


def run_attempt(record: dict, history: list[dict], max_fix_attempts: int) -> None:
    record["models"] = dict(MODELS)
    record.update(remote(make_worktree, WALLY_PATH, record["tag"]))
    scratch, test_dir, base = record["scratch"], record["test_dir"], record["base_commit"]
    context = {**record, "history": history[-40:], "history_dir": f"{WALLY_PATH}/tester_llm",
               "original_checkout": WALLY_PATH, "isa_docs": ISA_DOCS,
               "regression_command": REGRESSION_COMMAND}
    log("Architect", "Studying source and choosing the next target...")
    record["plan"] = remote(architect, scratch, context)
    log("Architect", record["plan"]["target"])
    remote(check_changes, scratch, base)
    remote(save_attempt, WALLY_PATH, record)
    context["plan"] = record["plan"]

    log("Tester", f"Investigating; tests will be archived in {WALLY_PATH}/{test_dir}")
    record["tester"] = remote(tester, scratch, context)
    remote(check_changes, scratch, base)
    remote(save_attempt, WALLY_PATH, record)
    log("Tester", record["tester"]["report"])
    if not record["tester"]["found_bug"]:
        record["status"] = "no_bug"
        return  # No Critic, Fixer or regression when no bug was found.

    context["tester"] = record["tester"]
    command = record["tester"]["reproduce_command"]
    frozen_tests = remote(test_fingerprint, scratch, test_dir)
    if not frozen_tests:
        raise RuntimeError("Bug claim has no preserved reproducer inputs")
    record["baseline_reproducer"] = remote(
        verify_command, scratch, command, f"{test_dir}/logs/baseline-reproducer.log")
    context["baseline_reproducer"] = record["baseline_reproducer"]
    context["phase"] = "bug_review"
    log("Critic", "Trying to disprove the bug on unmodified RTL...")
    record["bug_review"] = remote(critic, scratch, context)
    remote(check_changes, scratch, base)
    if remote(test_fingerprint, scratch, test_dir) != frozen_tests:
        raise RuntimeError("Original reproducer inputs changed during bug review")
    remote(save_attempt, WALLY_PATH, record)
    baseline = record["baseline_reproducer"]
    if record["bug_review"]["verdict"] != "approve":
        record["status"] = "bug_rejected"
        return
    if baseline.get("timed_out") or baseline.get("returncode") != 1:
        record["status"] = "baseline_not_reproduced"
        return

    log("Regression", f"Running baseline: {REGRESSION_COMMAND}")
    record["baseline_regression"] = remote(
        verify_command, scratch, REGRESSION_COMMAND, f"{test_dir}/logs/baseline-regression.log")
    remote(check_changes, scratch, base)
    context.update(bug_review=record["bug_review"], baseline_regression=record["baseline_regression"])
    record["fix_attempts"] = []
    for attempt in range(1, max_fix_attempts + 1):
        log("RTL Fixer", f"Applying/refining the minimal RTL fix ({attempt}/{max_fix_attempts})...")
        fix = {"attempt": attempt, "fixer": remote(rtl_fixer, scratch, context)}
        record["fix_attempts"].append(fix)
        diff = remote(check_changes, scratch, base, True)
        if remote(test_fingerprint, scratch, test_dir) != frozen_tests:
            raise RuntimeError("Original reproducer inputs changed during fixing")
        if not fix["fixer"]["changed"] or not diff:
            record["status"] = "no_fix"
            return
        fix["reproducer"] = remote(
            verify_command, scratch, command, f"{test_dir}/logs/fix-{attempt}-reproducer.log")
        log("Regression", f"Independently checking fix {attempt}: {REGRESSION_COMMAND}")
        fix["regression"] = remote(
            verify_command, scratch, REGRESSION_COMMAND, f"{test_dir}/logs/fix-{attempt}-regression.log")
        context.update(phase="fix_review", fix=fix)
        log("Critic", "Reviewing the RTL diff and independent verification logs...")
        fix["review"] = remote(critic, scratch, context)
        if remote(check_changes, scratch, base, True) != diff:
            raise RuntimeError("RTL changed during verification or review")
        if remote(test_fingerprint, scratch, test_dir) != frozen_tests:
            raise RuntimeError("Original reproducer inputs changed during verification/review")
        remote(save_attempt, WALLY_PATH, record)
        log("Critic", fix["review"]["critique"])
        passed = fix["reproducer"]["passed"] and fix["regression"]["passed"]
        if passed and fix["review"]["verdict"] == "approve":
            record["patch"] = remote(export_patch, WALLY_PATH, record, diff)
            record["status"] = "confirmed"
            return
        if fix["review"]["verdict"] == "reject":
            record["status"] = "fix_rejected"
            return
        # Failure always goes through the Critic before returning to the Fixer.
        # Even a mistaken approve verdict cannot override failed verification.
        context["feedback"] = fix
    record["status"] = "fix_attempts_exhausted"


def main(max_iterations: int | None = MAX_ITERATIONS, max_fix_attempts: int = MAX_FIX_ATTEMPTS):
    if max_fix_attempts < 1:
        raise ValueError("max_fix_attempts must be at least 1")
    history = remote(load_history, WALLY_PATH)
    confirmed_bugs = []
    i = 0
    while max_iterations is None or i < max_iterations:
        i += 1
        tag = f"{datetime.now(timezone.utc):%Y%m%dT%H%M%SZ}-{uuid.uuid4().hex[:8]}"
        record = {"tag": tag, "iteration": i, "status": "in_progress"}
        log("LOOP", f"Iteration {i}: {tag}")
        try:
            run_attempt(record, history, max_fix_attempts)
            if record["status"] == "confirmed":
                confirmed_bugs.append(record["patch"])
                log("LOOP", f"CONFIRMED BUG: {record['patch']}")
        except KeyboardInterrupt:
            record["status"] = "interrupted"
            raise
        except Exception as exc:
            record.update(status="error", error=repr(exc))
            log("LOOP", f"Attempt failed: {exc!r}; continuing")
        finally:
            try:
                remote(save_attempt, WALLY_PATH, record)
            except Exception as exc:
                log("LOOP", f"Archive failed: {exc!r}; files remain in {record.get('scratch')}")
            history.append(history_entry(record))
            log("LOOP", f"Outcome: {record['status']}; worktree retained: {record.get('scratch')}")
    log("LOOP", f"Stopped after {i} iterations. Confirmed patches: {confirmed_bugs}")


if __name__ == "__main__":
    main()
