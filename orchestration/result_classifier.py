"""Semantic verification results; exit codes are diagnostics, never an oracle."""
from dataclasses import dataclass, asdict
from enum import Enum
from pathlib import Path
import re
import shlex
from typing import Any


class Outcome(str, Enum):
    MATCH = 'MATCH'
    MISMATCH_CONFIRMED = 'MISMATCH_CONFIRMED'
    TEST_INVALID = 'TEST_INVALID'
    TOOL_FAILURE = 'TOOL_FAILURE'
    INFRA_TIMEOUT = 'HOST_COMMAND_TIMEOUT'
    BUILD_FAILURE = 'BUILD_FAILURE'
    ORACLE_FAILURE = 'ORACLE_FAILURE'
    DUT_WATCHDOG_FAILURE = 'DUT_WATCHDOG_FAILURE'


@dataclass
class ReproducerResult:
    status: Outcome
    reason: str
    returncode: int | None = None
    timed_out: bool = False
    passed: bool = False
    ran: bool = True

    def dict(self) -> dict:
        return asdict(self)


WATCHDOG = re.compile(r'(?:FAILURE:\s*)?Watch\s*Dog\s*Time\s*Out|watchdog.*(?:timeout|time out)', re.I)
TOOL_ERROR = re.compile(r'command not found|No such file or directory|cannot open|failed to open|%Error|segmentation fault|make(?:\[\d+\])?: \*\*\*|Usage: elf2hex', re.I)
FAILURE = re.compile(r'\bFAIL(?:URE|ED)?\b|\bError:|Assertion .*failed', re.I)
# This elaboration advisory predicts possible failures; it is not a test result.
# Match the entire known message so appended errors cannot be hidden.
RAM_SIZE_ADVISORY = re.compile(
    r"(?:\[\d+\]\s+)?%Warning: (?:[^\s:]+/)?riscvassertions_wally\.sv:\d+: "
    r"[\w.]+: Some regression tests will fail if UNCORE_RAM_RANGE is less than 64'h07FFFFFF")


def is_ram_size_advisory(line: str) -> bool:
    return RAM_SIZE_ADVISORY.fullmatch(line.rstrip('\r\n')) is not None


def classify(command: dict, wally_log: str = '', oracle_log: str = '', *,
             build_ok: bool = True, oracle_ok: bool = True,
             complete: bool = False, equal: bool | None = None) -> ReproducerResult:
    code, timeout = command.get('returncode'), command.get('timed_out', False)
    if timeout:
        status, reason = Outcome.INFRA_TIMEOUT, 'Python host command deadline expired'
    elif not build_ok:
        status, reason = Outcome.BUILD_FAILURE, 'Test/DUT build failed'
    elif not oracle_ok or TOOL_ERROR.search(oracle_log):
        status, reason = Outcome.ORACLE_FAILURE, 'Independent oracle did not complete correctly'
    elif TOOL_ERROR.search(wally_log):
        status, reason = Outcome.TOOL_FAILURE, 'Simulator/tool error in Wally log'
    elif WATCHDOG.search(wally_log):
        status, reason = Outcome.DUT_WATCHDOG_FAILURE, 'DUT watchdog marker (not a host timeout)'
    elif code != 0:
        status, reason = Outcome.TOOL_FAILURE, 'Command did not complete normally'
    elif not complete or equal is None or any(
            FAILURE.search(line) and not is_ram_size_advisory(line)
            for line in wally_log.splitlines()):
        status, reason = Outcome.TEST_INVALID, 'Missing/invalid completion or independent oracle artifacts'
    else:
        status = Outcome.MATCH if equal else Outcome.MISMATCH_CONFIRMED
        reason = 'Controller compared complete Wally and Spike signatures'
    return ReproducerResult(status, reason, code, timeout, status == Outcome.MATCH)


def artifact_argv(value: Any, scratch: Path, test_dir: Path | None = None) -> list[str]:
    """No shell interpretation at the agent-to-controller boundary."""
    args = shlex.split(value) if isinstance(value, str) else value
    if not isinstance(args, list) or not args or any(not isinstance(a, str) or not a for a in args):
        raise ValueError('Command must be a nonempty argument vector')
    program = Path(args[0]).name
    if (program in {'bash', 'sh', 'python', 'python3'} or program.startswith('python3.')) and (
            len(args) < 2 or args[1].startswith('-')):
        raise ValueError('Inline code is forbidden; save edits to test files first, then use '
                         '["bash", "ABSOLUTE_TEST_DIR/build_reproducer.sh"]')
    for arg in args:
        if any(x in arg for x in ('||', '&&', ';', '\n', '\r', '`', '$(', '|', '>','<')):
            raise ValueError('Shell control flow/redirection is forbidden at the verifier boundary')
    program = Path(args[0]).name
    if program in {'exit', 'true', 'false', 'eval', 'exec', 'env'}:
        raise ValueError('Result-masking command is forbidden')
    if program in {'bash', 'sh', 'python', 'python3'} or program.startswith('python3.'):
        if len(args) < 2 or args[1].startswith('-'):
            raise ValueError('Interpreter must execute a saved artifact directly; inline code is forbidden')
        script = (scratch / args[1]).resolve()
        if not script.is_file() or (test_dir and not script.is_relative_to(test_dir.resolve())):
            raise ValueError('Script must be a saved test artifact')
        args = list(args)
        args[1] = str(script)
    return args
