"""Four-agent Wally bug hunting, with persistent tests and verified RTL patches.

Run through the existing Chia cluster. The architect uses source/document
retrieval and saved findings, not weight training. Optional environment settings:
WALLY_PATH, WALLY_ISA_DOCS (local specs), WALLY_REGRESSION_COMMAND,
GOOGLE_CLOUD_PROJECT, CHIA_ARCHITECT_MODEL, CHIA_TESTER_MODEL, CHIA_CRITIC_MODEL
(Vertex AI via OpenCode; see GOOGLE_GENAI.md).
"""

from datetime import datetime, timezone
import fcntl
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
import anyio

from chia.base.ChiaFunction import ChiaFunction, get
from chia.base.tools.BashTool import BashTool
from chia.models.opencode import AdditionalModelProvider, OpenCodeLLM, RateLimitError, InvalidRequestError

WALLY_PATH = os.environ.get("WALLY_PATH", "/home/rafay/miniconda3/WallyGuard2/cvw")
MAX_ITERATIONS = 200
MAX_FIX_ATTEMPTS = 3
MAX_TEST_REPAIRS = 2
AGENT_RECOVERY_RETRIES = 2
RUN_REGRESSION = os.environ.get("WALLY_RUN_REGRESSION", "0").lower() in {"1", "true", "yes"}
REGRESSION_TIMEOUT = 5400
REPRODUCER_TIMEOUT = 900  # 15 minutes
AGENT_TIMEOUT = 14400  # Allows several long tool calls per investigation.
RATE_LIMIT_RETRIES = 4  # Extra calls after the first rate-limited call.
RATE_LIMIT_BASE_DELAY = 30
RATE_LIMIT_MAX_DELAY = 300
# Operator-selected suite: an agent cannot substitute a trivial success command.
REGRESSION_COMMAND = os.environ.get("WALLY_REGRESSION_COMMAND", "bin/regression-wally")
ISA_DOCS = os.environ.get("WALLY_ISA_DOCS", "")
VERTEX_PROJECT = os.environ.get("GOOGLE_CLOUD_PROJECT", "project-0df87a12-e649-434b-84a")
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


class GitCommandError(subprocess.CalledProcessError):
    def __str__(self):
        return f"{super().__str__()} Git stderr: {(self.stderr or '').strip()}"


def git(scratch: str, *args: str) -> str:
    result = subprocess.run(["git", "-C", scratch, *args], capture_output=True, text=True)
    if result.returncode:
        raise GitCommandError(result.returncode, result.args, output=result.stdout, stderr=result.stderr)
    return result.stdout


def wally_shell(scratch: str, command: str) -> str:
    # cluster.yaml already sources setup.sh on the simulation worker. Override
    # its checkout paths on EVERY call so regression builds the proposed RTL.
    return (f"export WALLY={shlex.quote(scratch)}\n"
            f'export PATH={shlex.quote(scratch + "/bin")}:"$PATH"\n' + command)


class WallyBashTool(BashTool):
    async def run_command(self, command: str) -> str:
        """Keep MCP responsive while a serialized Bash command is running."""
        script = wally_shell(self.work_dir, command)
        # FastMCP calls synchronous tool functions directly on its event loop.
        # communicate() can block it for an entire build, starving HTTP reads.
        # Create the lock on the server, after Ray has serialized this tool.
        if not hasattr(self, "_command_lock"):
            self._command_lock = anyio.Lock()
        async with self._command_lock:
            # The default (abandon_on_cancel=False) waits for this worker even
            # if an AnyIO cancellation scope is cancelled: do not release the
            # workspace lock while a detached shell is still editing files.
            return await anyio.to_thread.run_sync(
                super().run_command, "exec bash -o pipefail -c " + shlex.quote(script),
                abandon_on_cancel=False,
            )


class WorkspaceUnavailableError(RuntimeError):
    """Stop instead of repeatedly attempting to reset an occupied workspace."""


class AgentCallError(RuntimeError):
    """The provider/CLI could not complete an assignment after bounded retries."""


class ArtifactError(RuntimeError):
    """Evidence or source changes violate the verification contract."""


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
attempt.json, proposed.patch and untracked-rtl/ are controller-owned; do not edit them.
controller/ is also controller-owned. Put all backup files under test_dir/fixer,
never under src/. Keep runtime output under build/ or logs/.
Reproducer scripts must rebuild against $WALLY/src, use paths relative to $WALLY,
and exit 0 for correct DUT behavior, 1 ONLY for a successfully executed functional
mismatch, and 2 for build/tool errors. Preserve failures through pipelines.
Never reuse a stale DUT executable. No commits, resets, branch changes or edits
to the original checkout. Never weaken assertions or expected values.
The shared worktree was seeded once from the original checkout, including built
tests and populated dependencies. Its tracked files are restored to that initial
snapshot between attempts; regression build files persist. Check copied build
paths for relocation issues and rebuild when needed. Never modify shared inputs.
Do not replace populated dependency directories with symlinks to the original
checkout. Dependencies are already copied and must remain independent.
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
exit contract and reproduce on UNMODIFIED RTL. Return only a command that runs
an existing saved script: do not return inline heredocs that rewrite tests.
The script may rebuild binaries, but must not rewrite test sources or README.md.
If test_feedback is present, repair the reported tooling/test issues first,
inspect any Critic corrections, and rerun the complete reproducer. Do not infer
a hardware mismatch from a timeout, simulator crash or a generic nonzero exit.
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
original source with a valid expected result. No fix exists yet. If the test
needs correction, return revise and precise test repair instructions; put any
corrected examples under test_dir/critic, without editing the original inputs.
phase=fix_review: inspect git diff against base_commit and independent results.
Check the actual fix is minimal and correct. When verification fails, diagnose
whether the bug remains real and give concrete RTL repair guidance. Compare
baseline regression failures when available. When run_regression=false, full
regression is deliberately skipped: evaluate the targeted reproducer and RTL
diff and state this coverage limit. Never approve failed required verification
or call a timeout a pass. Reject test artifacts; request revision for a real bug
whose fix needs repair. Infrastructure failures must be explicitly identified.
Return verdict (approve/revise/reject) and critique (string).
approve requires valid evidence and passing required verification.
"""

FIXER_PROMPT = """
You are Agent 4, RTL Fixer. The Critic has validated the bug. Read the evidence,
reproducer and critique, find the root cause and apply the SMALLEST correct fix
to existing files under src/. Do not edit tests, expected results, configuration,
regression scripts or dependencies. Do not commit. You may add notes/supplemental
tests under test_dir/fixer. Keep original reproducer inputs unchanged. Rebuild
and run the reproducer against the fix. Use previous verification logs and
Critic feedback to refine your patch after failures. Never hide errors, disable
features or weaken checks. The controller runs full regression only when
run_regression=true; otherwise it independently runs the targeted reproducer.
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
    rate_retries = recovery_retries = 0
    while True:
        try:
            response = get(llm.prompt.chia_remote(llm, prompt + retry_note, tools=tools))
            if not response.success or not response.result:
                # CHIA returns success=False after CLI termination, missing
                # session output or timeout, without preserving the last error.
                raise AgentCallError(f"{role}: provider/CLI returned an unsuccessful or empty response")
            return response
        except RateLimitError:
            if rate_retries == RATE_LIMIT_RETRIES:
                log(role, f"Rate limit persisted after {RATE_LIMIT_RETRIES} retries; preserving this attempt.")
                raise
            delay = min(RATE_LIMIT_MAX_DELAY,
                        RATE_LIMIT_BASE_DELAY * 2 ** rate_retries + random.uniform(0, 5))
            rate_retries += 1
            log(role, f"Rate limited; retry {rate_retries}/{RATE_LIMIT_RETRIES} in {delay:.0f}s, same worktree.")
        except (InvalidRequestError, AgentCallError) as exc:
            # Retry this specific conversation-format failure, not invalid
            # models, bad credentials, billing failures or arbitrary requests.
            if isinstance(exc, InvalidRequestError) and "Requests ending with a model turn" not in str(exc):
                raise
            if recovery_retries == AGENT_RECOVERY_RETRIES:
                raise AgentCallError(f"{role}: agent recovery exhausted: {exc}") from exc
            recovery_retries += 1
            delay = 5 * recovery_retries
            log(role, f"Agent call interrupted; recovery {recovery_retries}/{AGENT_RECOVERY_RETRIES}: {exc}")
        remaining = delay
        while remaining > 0:
            pause = min(60, remaining)
            time.sleep(pause)
            remaining -= pause
        retry_note = (
            "\nA previous call for this SAME assignment was interrupted. "
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
    allowed = {"approve", "revise", "reject"}
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
    """Prepare one reusable checkout; never overwrite an unarchived attempt."""
    base = Path(wally_path).resolve()
    scratch = base.parent / "wally-worktrees" / "wally-shared"
    scratch.parent.mkdir(parents=True, exist_ok=True)
    state_path = scratch.parent / "wally-shared.json"
    with (scratch.parent / "wally-shared.lock").open("a") as lock:
        fcntl.flock(lock, fcntl.LOCK_EX)
        source_head = git(str(base), "rev-parse", "HEAD").strip()
        if state_path.exists():
            state = json.loads(state_path.read_text(encoding="utf-8"))
            if state["source"] != str(base) or not (scratch / ".git").is_file():
                raise WorkspaceUnavailableError("Shared worktree does not match its saved source")
            previous = base.parent / "runs" / state["tag"] / "attempt.json"
            if not previous.exists() or json.loads(previous.read_text())["status"] == "in_progress":
                raise WorkspaceUnavailableError(f"Previous attempt is active or unarchived: {previous}")
            if json.loads(previous.read_text()).get("workspace_recovery_required"):
                raise WorkspaceUnavailableError(f"Previous archive needs repair; see archive_errors in {previous}")
            # Older state files used a private snapshot whose parent was the
            # source HEAD. Never silently reuse it after cvw has advanced.
            saved_head = state.get("source_head") or git(
                str(scratch), "rev-parse", state["base_commit"] + "^").strip()
            if saved_head != source_head:
                raise WorkspaceUnavailableError(
                    f"cvw HEAD changed from {saved_head} to {source_head}; "
                    "preserve the archived workspace and reseed it before continuing")
            state["source_head"] = saved_head
            # Only this managed copy is reset. Keep ignored/untracked build data.
            git(str(scratch), "reset", "--hard", state["base_commit"])
            git(str(scratch), "clean", "-fdx", "--", "src/")
        else:
            if scratch.exists():
                raise WorkspaceUnavailableError(f"Incomplete/unmanaged shared worktree at {scratch}; inspect it before retrying")
            log("Workspace", f"Copying cvw and its built tests once into {scratch}")
            try:
                # The path was checked absent above. --force permits replacing
                # its stale Git registration after manual directory deletion;
                # a locked registration still requires separate intervention.
                git(str(base), "worktree", "add", "--force", "--detach", "--no-checkout", str(scratch), source_head)
            except subprocess.CalledProcessError as exc:
                raise WorkspaceUnavailableError(f"Cannot create shared worktree: {exc.stderr.strip()}") from exc
            git(str(scratch), "reset", "--mixed", "HEAD")
            # Unlike git checkout, copy ignored and untracked build/test files too.
            shutil.copytree(base, scratch, dirs_exist_ok=True, symlinks=True,
                            ignore=lambda directory, names: [".git"] if Path(directory) == base else [])
            copy_dependency_gitdirs(base, scratch)
            # Include local tracked edits and new RTL in the private baseline.
            # commit-tree avoids hooks and never changes the original checkout.
            git(str(scratch), "add", "-u")
            git(str(scratch), "add", "-f", "--", "src/")
            tree = git(str(scratch), "write-tree").strip()
            if git(str(base), "rev-parse", "HEAD").strip() != source_head:
                raise WorkspaceUnavailableError("cvw HEAD changed while copying; inspect the incomplete shared workspace")
            # A clean copy can use the exact merged commit as its baseline.
            # Retain the snapshot behavior when copying local source edits.
            baseline = source_head
            if tree != git(str(base), "rev-parse", source_head + "^{tree}").strip():
                baseline = git(str(scratch), "-c", "user.name=WallyGuard", "-c",
                               "user.email=wallyguard@localhost", "commit-tree", tree,
                               "-p", source_head, "-m", "Initial local cvw snapshot for shared workspace").strip()
            git(str(scratch), "reset", "--soft", baseline)
            state = {"source": str(base), "source_head": source_head, "base_commit": baseline}
        # Store tests directly in runs/ so their binaries are not copied twice.
        test_dir = base.parent / "runs" / tag
        test_dir.mkdir(parents=True, exist_ok=False)
        initial_record = {"tag": tag, "status": "in_progress", "scratch": str(scratch),
                          "base_commit": state["base_commit"], "test_dir": str(test_dir)}
        # Persist ownership before returning: the Architect can run for hours
        # or the driver can be stopped before it receives this task's result.
        record_tmp = test_dir / "attempt.json.tmp"
        record_tmp.write_text(json.dumps(initial_record, indent=2) + "\n", encoding="utf-8")
        record_tmp.replace(test_dir / "attempt.json")
        state["tag"] = tag
        temporary = state_path.with_suffix(".json.tmp")
        temporary.write_text(json.dumps(state, indent=2) + "\n", encoding="utf-8")
        temporary.replace(state_path)
    return {"scratch": str(scratch), "base_commit": state["base_commit"], "test_dir": str(test_dir)}


def copy_dependency_gitdirs(base: Path, scratch: Path, include_root: bool = False) -> None:
    """Give copied submodules their own metadata instead of source gitdir links."""
    for directory, dirs, files in os.walk(scratch):
        root = Path(directory)
        if ".git" in dirs:
            dirs.remove(".git")
        if (root == scratch and not include_root) or not (root / ".git").exists():
            continue
        metadata = root / ".git"
        if metadata.is_file():
            source = base / root.relative_to(scratch)
            gitdir = Path(git(str(source), "rev-parse", "--absolute-git-dir").strip())
            metadata.unlink()
            shutil.copytree(gitdir, metadata, symlinks=True)
        # The old relative core.worktree may be invalid at the new location.
        git(str(base), "config", "--file", str(metadata / "config"), "core.worktree", str(root))


def repair_submodule_links(scratch: str, base_commit: str, test_dir: str) -> list[str]:
    """Restore only replaced gitlinks whose original copy matches the baseline."""
    root = Path(scratch)
    state_path = root.parent / "wally-shared.json"
    repaired = []
    for entry in git(scratch, "ls-tree", "-rz", base_commit).split("\0"):
        if not entry:
            continue
        metadata, name = entry.split("\t", 1)
        mode, kind, commit = metadata.split()
        dest = root / name
        if mode != "160000" or not dest.is_symlink():
            continue
        state = json.loads(state_path.read_text())
        original = Path(state["source"]) / name
        if original.is_symlink() or git(str(original), "rev-parse", "HEAD").strip() != commit:
            raise ArtifactError(f"Cannot restore dependency {name}: original does not match baseline {commit}")
        # Copy before removing the link, never following it for writes. The
        # replacement must include builds and independent submodule metadata.
        temporary = dest.with_name(dest.name + ".repair-" + uuid.uuid4().hex)
        evidence = root / test_dir / "controller" / "dependency-repairs"
        evidence.mkdir(parents=True, exist_ok=True)
        (evidence / (uuid.uuid4().hex + ".json")).write_text(json.dumps(
            {"path": name, "replaced_symlink": str(dest.readlink()), "baseline_commit": commit}, indent=2))
        try:
            shutil.copytree(original, temporary, symlinks=True)
            copy_dependency_gitdirs(original, temporary, include_root=True)
            # Use relative worktree paths so metadata survives the rename.
            for directory, dirs, files in os.walk(temporary):
                if ".git" in dirs:
                    dirs.remove(".git")
                    config = Path(directory) / ".git" / "config"
                    git(str(original), "config", "--file", str(config), "core.worktree", "..")
            dest.unlink()
            temporary.rename(dest)
        finally:
            if temporary.exists():
                shutil.rmtree(temporary)
        repaired.append(name)
        log("Workspace", f"Restored independent dependency copy: {name}")
    return repaired


@ChiaFunction(resources={"wally_sim": 1})
def check_changes(scratch: str, base_commit: str, allow_rtl: bool = False, test_dir: str | None = None) -> str:
    """Reject tracked edits outside the role's scope, including staged edits."""
    if git(scratch, "rev-parse", "HEAD").strip() != base_commit:
        raise ArtifactError("Agent changed HEAD; attempt cannot be confirmed")
    if test_dir:
        repair_submodule_links(scratch, base_commit, test_dir)
        tracked = set(git(scratch, "ls-files", "-z", "--", "src/").split("\0"))
        for name in git(scratch, "ls-files", "--others", "--exclude-standard", "-z", "--", "src/").split("\0"):
            original = re.sub(r"(?:\.orig|\.bak|\.rej|~)$", "", name)
            if original != name and original in tracked:
                dest = Path(scratch) / test_dir / "fixer" / "backups" / uuid.uuid4().hex / name
                dest.parent.mkdir(parents=True, exist_ok=True)
                shutil.move(str(Path(scratch) / name), str(dest))
                log("Artifacts", f"Preserved backup outside RTL: {name}")
    names = git(scratch, "diff", "--name-only", base_commit, "--").splitlines()
    invalid = [
        name for name in names
        if not (allow_rtl and name.startswith("src/"))
    ]
    new_rtl = git(scratch, "ls-files", "--others", "--exclude-standard", "--", "src/")
    if invalid or new_rtl:
        raise ArtifactError(f"Disallowed source changes: {invalid}; new RTL: {new_rtl}")
    return git(scratch, "diff", "--binary", base_commit, "--", "src/")


@ChiaFunction(resources={"wally_sim": 1})
def test_fingerprint(scratch: str, test_dir: str) -> dict:
    """Freeze scripts/oracle inputs, excluding designated build/log directories."""
    root = Path(scratch) / test_dir
    return {str(path.relative_to(root)): hashlib.sha256(path.read_bytes()).hexdigest()
            for path in root.rglob("*") if path.is_file()
            and path.relative_to(root).as_posix() not in {"attempt.json", "attempt.json.tmp", "proposed.patch"}
            and not set(path.relative_to(root).parts) & {"build", "logs", "critic", "fixer", "__pycache__", "untracked-rtl", "controller"}}


def fingerprint_changes(before: dict, after: dict) -> dict:
    return {"added": sorted(after.keys() - before.keys()),
            "removed": sorted(before.keys() - after.keys()),
            "modified": sorted(k for k in before.keys() & after.keys() if before[k] != after[k])}


@ChiaFunction(resources={"wally_sim": 1})
def archive_inputs(scratch: str, test_dir: str, fingerprint: dict, revision: int) -> None:
    root = Path(scratch) / test_dir
    dest = root / "controller" / f"inputs-{revision}"
    for name in fingerprint:
        target = dest / name
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(root / name, target)


@ChiaFunction(resources={"wally_sim": 1})
def restore_review_edits(scratch: str, base: str, test_dir: str, revision: int) -> None:
    if git(scratch, "rev-parse", "HEAD").strip() != base:
        raise ArtifactError("Critic changed HEAD; automatic recovery stopped")
    dest = Path(scratch) / test_dir / "controller" / f"critic-edits-{revision}.patch"
    dest.parent.mkdir(parents=True, exist_ok=True)
    dest.write_text(git(scratch, "diff", "--binary", base, "--"), encoding="utf-8")
    git(scratch, "restore", "--source", base, "--staged", "--worktree", "--", ".")


@ChiaFunction(resources={"wally_sim": 1})
def verify_command(scratch: str, command: str, log_path: str, timeout: int = REGRESSION_TIMEOUT) -> dict:
    """Run on the simulation worker, retaining full logs and killing on timeout."""
    if not command.strip() or command.strip().lower() == "none":
        return {"ran": False, "passed": False, "returncode": None}
    path = Path(scratch) / log_path
    path.parent.mkdir(parents=True, exist_ok=True)
    timed_out = False
    log("Verify", f"Running command with {timeout / 60:.0f} min timeout: {command[:160]}")
    with path.open("w", encoding="utf-8") as output:
        proc = subprocess.Popen(
            ["bash", "-o", "pipefail", "-c", wally_shell(scratch, command)],
            cwd=scratch, stdout=output, stderr=subprocess.STDOUT, start_new_session=True,
        )
        start = time.monotonic()
        next_report = 60
        try:
            while proc.poll() is None:
                elapsed = time.monotonic() - start
                if elapsed >= timeout:
                    timed_out = True
                    break
                if elapsed >= next_report:
                    log("Verify", f"Still running: {elapsed / 60:.1f} min "
                                  f"(timeout {timeout / 60:.0f} min)")
                    next_report = elapsed + 60
                time.sleep(min(1, max(0, timeout - elapsed)))
        finally:
            # Also clean background children on normal exit or interruption.
            try:
                os.killpg(proc.pid, signal.SIGKILL)
            except ProcessLookupError:
                pass
            try:
                proc.wait(timeout=10)
            except subprocess.TimeoutExpired:
                log("Verify", "Process did not exit within 10 seconds after SIGKILL; cleanup failed")
                raise
    elapsed = time.monotonic() - start
    log("Verify", f"Finished: return code {proc.returncode}, timed out={timed_out}, "
                  f"elapsed {elapsed / 60:.1f} min (timeout {timeout / 60:.0f} min)")
    with path.open("rb") as output:
        output.seek(max(0, path.stat().st_size - 6000))
        tail = output.read().decode("utf-8", errors="replace")
    return {"ran": True, "passed": not timed_out and proc.returncode == 0,
            "returncode": proc.returncode, "timed_out": timed_out,
            "command": command, "log_path": str(path), "log_tail": tail}


@ChiaFunction(resources={"wally_sim": 1})
def save_attempt(wally_path: str, record: dict) -> None:
    """Archive all attempts under runs/ beside the cvw checkout."""
    dest = Path(wally_path).parent / "runs" / record["tag"]
    dest.mkdir(parents=True, exist_ok=True)
    try:
        if record.get("scratch"):
            source = Path(record["scratch"]) / record["test_dir"]
            if source.exists() and source.resolve() != dest.resolve():
                shutil.copytree(source, dest, dirs_exist_ok=True, symlinks=True)
            # Preserve even rejected/partial tracked changes before the next reset.
            diff = git(record["scratch"], "diff", "--binary", record["base_commit"], "--")
            (dest / "proposed.patch").write_text(diff, encoding="utf-8")
            for name in git(record["scratch"], "ls-files", "--others", "-z", "--", "src/").split("\0"):
                if name:
                    target = dest / "untracked-rtl" / name
                    target.parent.mkdir(parents=True, exist_ok=True)
                    shutil.copy2(Path(record["scratch"]) / name, target, follow_symlinks=False)
        record.pop("workspace_recovery_required", None)
    except (OSError, subprocess.CalledProcessError) as exc:
        # Do not lose the attempt outcome just because a diff/copy failed.
        # Keep the workspace protected until its evidence can be archived.
        record.setdefault("archive_errors", []).append(str(exc))
        record["workspace_recovery_required"] = True
        log("Archive", f"Saved failure details; workspace retained: {exc}")
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
    for path in sorted((Path(wally_path).parent / "runs").glob("*/attempt.json")):
        try:
            history.append(history_entry(json.loads(path.read_text(encoding="utf-8"))))
        except (OSError, ValueError, KeyError) as exc:
            log("History", f"Cannot read {path}: {exc}")
    return history


@ChiaFunction(resources={"wally_sim": 1})
def export_patch(wally_path: str, record: dict, expected_diff: str) -> str:
    diff = check_changes(record["scratch"], record["base_commit"], allow_rtl=True, test_dir=record["test_dir"])
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
    record["run_regression"] = RUN_REGRESSION
    record["verification_scope"] = "targeted_and_regression" if RUN_REGRESSION else "targeted_only"
    record.update(remote(make_worktree, WALLY_PATH, record["tag"]))
    scratch, test_dir, base = record["scratch"], record["test_dir"], record["base_commit"]
    context = {**record, "history": history[-40:],
               "history_dir": str(Path(WALLY_PATH).parent / "runs"),
               "original_checkout": WALLY_PATH, "isa_docs": ISA_DOCS,
               "regression_command": REGRESSION_COMMAND}
    remote(save_attempt, WALLY_PATH, record)
    log("Architect", "Studying source and choosing the next target...")
    record["plan"] = remote(architect, scratch, context)
    log("Architect", record["plan"]["target"])
    remote(check_changes, scratch, base, False, test_dir)
    remote(save_attempt, WALLY_PATH, record)
    context["plan"] = record["plan"]

    log("Tester", f"Investigating; tests will be archived in {Path(WALLY_PATH).parent / 'runs' / record['tag']}")
    record["test_revisions"] = []
    for revision in range(MAX_TEST_REPAIRS + 1):
        record.pop("bug_review", None)
        record["tester"] = remote(tester, scratch, context)
        remote(check_changes, scratch, base, False, test_dir)
        remote(save_attempt, WALLY_PATH, record)
        log("Tester", record["tester"]["report"])
        if not record["tester"]["found_bug"]:
            record["status"] = "no_bug"
            return  # No Critic, Fixer or regression when no bug was found.
        context["tester"] = record["tester"]
        command = record["tester"]["reproduce_command"]
        frozen_tests = remote(test_fingerprint, scratch, test_dir)
        if not frozen_tests:
            raise ArtifactError("Bug claim has no preserved reproducer inputs")
        remote(archive_inputs, scratch, test_dir, frozen_tests, revision)
        step = {"revision": revision, "tester": record["tester"], "inputs": frozen_tests}
        record["test_revisions"].append(step)
        baseline = remote(verify_command, scratch, command,
                          f"{test_dir}/logs/baseline-reproducer-{revision}.log", REPRODUCER_TIMEOUT)
        record["baseline_reproducer"] = step["baseline_reproducer"] = baseline
        remote(check_changes, scratch, base, False, test_dir)
        changes = fingerprint_changes(frozen_tests, remote(test_fingerprint, scratch, test_dir))
        feedback = {}
        if any(changes.values()):
            feedback = {"reason": "Reproducer rewrote its own inputs; make the script read existing sources",
                        "files": changes}
        elif baseline.get("timed_out") or baseline.get("returncode") not in (0, 1):
            feedback = {"reason": "Baseline reproducer failed to execute correctly", "verification": baseline}
        elif baseline["returncode"] == 0:
            record["status"] = "baseline_not_reproduced"
            return
        else:
            context.update(baseline_reproducer=baseline, phase="bug_review")
            log("Critic", "Trying to disprove the bug on unmodified RTL...")
            review = remote(critic, scratch, context)
            record["bug_review"] = step["review"] = review
            try:
                remote(check_changes, scratch, base, False, test_dir)
            except ArtifactError as exc:
                remote(restore_review_edits, scratch, base, test_dir, revision)
                feedback = {"reason": "Critic changed tracked source; review invalidated and edits archived",
                            "details": str(exc), "review": review}
            changes = fingerprint_changes(frozen_tests, remote(test_fingerprint, scratch, test_dir))
            if any(changes.values()):
                feedback.update(reason="Critic changed original inputs; Tester must revalidate corrections",
                                files=changes, review=review)
            if not feedback and review["verdict"] == "reject":
                record["status"] = "bug_rejected"
                return
            if not feedback and review["verdict"] == "approve":
                break
            if not feedback:
                feedback = {"reason": "Critic requested a test repair", "review": review}
        step["repair_needed"] = feedback
        context["test_feedback"] = feedback
        log("Tester", f"Test repair {revision + 1}/{MAX_TEST_REPAIRS}: {feedback['reason']}")
        remote(save_attempt, WALLY_PATH, record)
    else:
        record["status"] = "test_repair_exhausted"
        return

    skipped = {"ran": False, "passed": None, "reason": "Full regression disabled by operator"}
    record["baseline_regression"] = dict(skipped)
    if RUN_REGRESSION:
        log("Regression", f"Running baseline: {REGRESSION_COMMAND}")
        record["baseline_regression"] = remote(
            verify_command, scratch, REGRESSION_COMMAND, f"{test_dir}/logs/baseline-regression.log",
            REGRESSION_TIMEOUT)
        remote(check_changes, scratch, base, False, test_dir)
        if not record["baseline_regression"].get("passed"):
            record["status"] = "regression_blocked"
            return
    context.update(bug_review=record["bug_review"], baseline_regression=record["baseline_regression"])
    record["fix_attempts"] = []
    for attempt in range(1, max_fix_attempts + 1):
        log("RTL Fixer", f"Applying/refining the minimal RTL fix ({attempt}/{max_fix_attempts})...")
        fix = {"attempt": attempt, "fixer": remote(rtl_fixer, scratch, context)}
        record["fix_attempts"].append(fix)
        diff = remote(check_changes, scratch, base, True, test_dir)
        if remote(test_fingerprint, scratch, test_dir) != frozen_tests:
            raise ArtifactError("Original reproducer inputs changed during fixing: " +
                                json.dumps(fingerprint_changes(frozen_tests, remote(test_fingerprint, scratch, test_dir))))
        if not fix["fixer"]["changed"] or not diff:
            record["status"] = "no_fix"
            return
        fix["reproducer"] = remote(
            verify_command, scratch, command, f"{test_dir}/logs/fix-{attempt}-reproducer.log",
            REPRODUCER_TIMEOUT)
        fix["regression"] = dict(skipped)
        if RUN_REGRESSION:
            log("Regression", f"Independently checking fix {attempt}: {REGRESSION_COMMAND}")
            fix["regression"] = remote(
                verify_command, scratch, REGRESSION_COMMAND, f"{test_dir}/logs/fix-{attempt}-regression.log",
                REGRESSION_TIMEOUT)
        context.update(phase="fix_review", fix=fix)
        log("Critic", "Reviewing the RTL diff and independent verification logs...")
        fix["review"] = remote(critic, scratch, context)
        if remote(check_changes, scratch, base, True, test_dir) != diff:
            raise ArtifactError("RTL changed during verification or review")
        if remote(test_fingerprint, scratch, test_dir) != frozen_tests:
            raise ArtifactError("Original reproducer inputs changed during verification/review: " +
                                json.dumps(fingerprint_changes(frozen_tests, remote(test_fingerprint, scratch, test_dir))))
        remote(save_attempt, WALLY_PATH, record)
        log("Critic", fix["review"]["critique"])
        passed = fix["reproducer"]["passed"] and (not RUN_REGRESSION or fix["regression"]["passed"])
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
        except WorkspaceUnavailableError as exc:
            record.update(status="workspace_unavailable", error=str(exc))
            log("LOOP", f"Stopping: {exc}")
            raise  # Ray must not report a workspace-blocked run as succeeded.
        except ArtifactError as exc:
            record.update(status="invalid_artifacts", error=str(exc))
            log("LOOP", f"Evidence rejected; artifacts preserved: {exc}")
        except (AgentCallError, RateLimitError, InvalidRequestError) as exc:
            record.update(status="agent_failed", error=str(exc))
            log("LOOP", f"Agent could not finish; artifacts preserved: {exc}")
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
