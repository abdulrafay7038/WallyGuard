"""Test cross-filesystem transfer and campaign policies without a cluster."""
from argparse import Namespace
from contextlib import redirect_stdout
from inspect import unwrap
import hashlib
import io
import json
import os
import sys
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

import wally_loop as loop
from tools import campaign
from tools.generator import generate_riscv_dv_test, materialize_generated_test, validate_elf, select_generator_python
from tools.generator import (InitializationError, prepare_comparison_marker,
                             normalize_initialization, validate_initialization)
from tools.trace import write_trace
from tools.test_profiles import compatibility


def candidate_selection():
    return compatibility("rv64gc", "wallyguard_rand", candidate=True)
from tools.compare import oracle_result


def elf_header():
    header = bytearray(64)
    header[:6] = b"\x7fELF\x02\x01"
    header[16:20] = b"\x02\x00\xf3\x00"
    return bytes(header)


def payload(seed=10):
    return dict(success=True, status="PASS", seed=seed, elf_bytes=elf_header(),
                assembly_text=".globl _start\n_start: nop\n", elf_original_name="random_0.o",
                generation_log="generated on remote worker\n", generator_command=["python", "run.py"],
                generation_timestamp="2026-09-06T00:00:00+00:00", hostname="remote-generator", error=None)


class GeneratorTests(unittest.TestCase):
    def setUp(self):
        temp = tempfile.TemporaryDirectory()
        self.addCleanup(temp.cleanup)
        self.root = Path(temp.name)
        setting=self.root/"pygen/pygen_src/target/rv64imafdc/riscv_core_setting.py"
        setting.parent.mkdir(parents=True);setting.write_text("XLEN = 64\n")

    def test_bytes_materialize_without_remote_filesystem(self):
        generated = payload()
        elf, directory, metadata = materialize_generated_test(generated, "one", self.root)
        self.assertTrue(elf.is_absolute())
        self.assertEqual(elf.read_bytes(), generated["elf_bytes"])
        self.assertEqual((directory / "test.S").read_text(), generated["assembly_text"])
        self.assertEqual(metadata["elf_sha256"], hashlib.sha256(generated["elf_bytes"]).hexdigest())
        self.assertNotIn("elf_bytes", json.loads((directory / "metadata.json").read_text()))

    def test_failure_log_is_preserved(self):
        generated = payload()
        generated.update(success=False, status="GENERATOR_ERROR", error="compiler failed")
        elf, directory, metadata = materialize_generated_test(generated, "failed", self.root)
        self.assertIsNone(elf)
        self.assertEqual(metadata["error"], "compiler failed")
        self.assertIn("remote worker", (directory / "generation.log").read_text())
        self.assertFalse((directory / "test.elf").exists())

    def test_remote_path_and_relocatable_object_are_rejected(self):
        for data in ("/remote/test.elf", b"not an elf", elf_header()[:16] + b"\x01\x00" + elf_header()[18:]):
            with self.assertRaises(ValueError):
                validate_elf(data)
        generated = payload()
        generated["elf_bytes"] = "/remote/test.elf"
        elf, _, metadata = materialize_generated_test(generated, "bad", self.root)
        self.assertIsNone(elf)
        self.assertEqual(metadata["status"], "GENERATOR_ERROR")

    def test_missing_worker_environment_returns_error_metadata(self):
        with patch.dict(os.environ, {}, clear=True):
            result = unwrap(generate_riscv_dv_test)(42, selection=candidate_selection())
        self.assertFalse(result["success"])
        self.assertEqual(result["status"], "GENERATOR_ERROR")
        self.assertIn("RISCV_DV_ROOT", result["generation_log"])
        self.assertEqual(result["seed"], 42)

    def test_cancelled_generation_stops_its_subprocess_group(self):
        import signal
        (self.root/'run.py').write_text('# installed generator placeholder\n')
        with patch.dict(os.environ, {"RISCV_DV_ROOT": str(self.root), "RISCV_GCC": "/bin/true",
                                    "RISCV_OBJCOPY": "/bin/true"}), \
             patch("tools.generator.select_generator_python", return_value=(sys.executable, [])), \
             patch("subprocess.Popen") as popen, patch("os.killpg") as killpg:
            process=popen.return_value
            process.pid=12345
            process.wait.side_effect=[KeyboardInterrupt(),0]
            with self.assertRaises(KeyboardInterrupt):
                unwrap(generate_riscv_dv_test)(42, selection=candidate_selection())
            killpg.assert_called_once_with(12345,signal.SIGKILL)
            self.assertEqual(process.wait.call_count,2)
            self.assertEqual(popen.call_count,1)

    def test_worker_collects_one_elf_named_o_and_complete_logs(self):
        script = self.root / "run.py"
        script.write_text('''import pathlib, sys
out = pathlib.Path(sys.argv[sys.argv.index('--output')+1]) / 'asm_test'
out.mkdir(parents=True, exist_ok=True)
if sys.argv[sys.argv.index('--steps')+1] == 'gen':
    (out/'random_0.S').write_text('_start: nop\\ninit:\\n' + ''.join(' li x%d, 0\\n' % r for r in range(32) if r not in (2,11)) + ' la x2, user_stack_end\\nmain: ori x27, x11, 100\\n')
    print('assembly generated', flush=True)
    sys.exit(0)
text = (out/'random_0.S').read_text()
assert text.index('li x11, 0') < text.index('wallyguard_compare_start:') < text.index('ori x27')
(out/'random_0.o').write_bytes(bytes.fromhex(''' + repr(elf_header().hex()) + '''))
(out/'intermediate.o').write_bytes(bytes.fromhex(''' + repr((elf_header()[:16] + b"\x01\x00" + elf_header()[18:]).hex()) + '''))
(out/'child.log').write_text('child details\\n')
print('run.py output', flush=True)
''')
        with patch.dict(os.environ, {"RISCV_DV_ROOT": str(self.root),
                                    "RISCV_GCC": "/bin/true", "RISCV_OBJCOPY": "/bin/true"}), \
             patch("tools.generator.select_generator_python", return_value=(sys.executable, [])), \
             patch("subprocess.check_output", return_value="00000000800000b8 T wallyguard_compare_start\n"):
            result = unwrap(generate_riscv_dv_test)(42, selection=candidate_selection())
        self.assertTrue(result["success"], result["generation_log"])
        self.assertEqual(result["elf_original_name"], "random_0.o")
        self.assertEqual(result["elf_bytes"], elf_header())
        self.assertIn("child details", result["generation_log"])
        self.assertIn("run.py output", result["generation_log"])
        cmd = result["generator_command"]
        self.assertEqual(cmd[cmd.index("--steps")+1], "gen")
        compile_cmd = result["compiler_command"]
        self.assertEqual(compile_cmd[compile_cmd.index("--steps")+1], "gcc_compile")
        self.assertEqual(result["initialization"], {"x11": "0x0", "validated": True})
        self.assertEqual(cmd[cmd.index("--seed")+1], "42")
        self.assertEqual(cmd[cmd.index("--iterations")+1], "1")
        self.assertEqual(result["generator_profile"]["no_fence"], 1)

    def test_initialization_is_before_marker_and_idempotent(self):
        source = '_start:\n li x10, 8\nmain: ori x27, x11, 100\n'
        marked = prepare_comparison_marker(source)
        normalized = normalize_initialization(marked)
        self.assertEqual(normalize_initialization(normalized), normalized)
        self.assertLess(normalized.index('li x10'), normalized.index('li x11, 0'))
        self.assertLess(normalized.index('li x11, 0'), normalized.index('wallyguard_compare_start:'))
        self.assertLess(normalized.index('wallyguard_compare_start:'), normalized.index('ori x27'))
        self.assertEqual(validate_initialization(normalized), {"x11": "0x0", "validated": True})
        self.assertEqual(prepare_comparison_marker(normalized), normalized)

    def test_validation_rejects_missing_duplicate_and_post_marker_initialization(self):
        for source in ('li x11, 0\n', 'wallyguard_compare_start:\nli x11, 0\n',
                       '# li x11, 0\nwallyguard_compare_start:\n',
                       'li x11, 0\nli x11, 1\nwallyguard_compare_start:\n',
                       'li x11, 0\nwallyguard_compare_start:\nwallyguard_compare_start:\n'):
            with self.subTest(source=source), self.assertRaises(InitializationError):
                validate_initialization(source)
        with self.assertRaises(InitializationError):
            normalize_initialization('main: nop\n')
        with self.assertRaises(InitializationError):
            prepare_comparison_marker('_start: nop\n')

    def test_invalid_initialization_never_invokes_compiler_and_is_materialized_as_error(self):
        (self.root / 'run.py').write_text('''import pathlib,sys
out = pathlib.Path(sys.argv[sys.argv.index('--output')+1]) / 'asm_test'
assert sys.argv[sys.argv.index('--steps')+1] == 'gen', 'compiler must not run'
out.mkdir(parents=True)
(out/'random_0.S').write_text('_start: nop\\n')
print('generation log preserved')
''')
        with patch.dict(os.environ, {"RISCV_DV_ROOT": str(self.root), "RISCV_GCC": "/bin/true",
                                    "RISCV_OBJCOPY": "/bin/true"}), \
             patch("tools.generator.select_generator_python", return_value=(sys.executable, [])):
            result = unwrap(generate_riscv_dv_test)(42, selection=candidate_selection())
        self.assertEqual(result['status'], 'INITIALIZATION_ERROR')
        self.assertFalse(result['success'])
        self.assertFalse(result['initialization']['validated'])
        self.assertEqual(result['compiler_command'], [])
        self.assertEqual(result['elf_bytes'], b'')
        self.assertIn('generation log preserved', result['generation_log'])
        elf, directory, metadata = materialize_generated_test(result, 'bad_init', self.root/'materialized')
        self.assertIsNone(elf)
        self.assertEqual(metadata['status'], 'INITIALIZATION_ERROR')
        self.assertEqual((directory/'test.S').read_text(), '_start: nop\n')

    def test_explicit_generator_python_is_probed(self):
        python = self.root / "python"
        python.touch()
        with patch("subprocess.run") as run:
            run.return_value = Namespace(returncode=0, stdout="Python version", stderr="")
            selected, checks = select_generator_python(self.root, {"RISCV_DV_PYTHON": str(python)})
        self.assertEqual(selected, str(python))
        self.assertIn("vsc", run.call_args.args[0][2])
        self.assertEqual(checks[0]["returncode"], 0)

    def test_invalid_explicit_python_does_not_silently_fallback(self):
        python = self.root / "python"
        python.touch()
        with patch("subprocess.run") as run:
            run.return_value = Namespace(returncode=1, stdout="", stderr="No module named vsc")
            with self.assertRaisesRegex(ValueError, "No module named vsc"):
                select_generator_python(self.root, {"RISCV_DV_PYTHON": str(python)})
        self.assertEqual(run.call_count, 1)

    def test_missing_signature_is_optional_and_mismatch_still_fails(self):
        trace = self.root / "trace.csv"
        write_trace(trace, [dict(order=0, pc="80000000", binary="13", mode="3", trap="0", rd="", rd_value="")])
        Path(str(trace)+".complete").write_text("1\n")
        result = unwrap(loop.compare_architectural_traces)(str(trace), str(trace),
                    str(self.root / "missing1"), str(self.root / "missing2"), str(self.root))
        self.assertEqual(result["status"], "PASS")
        self.assertEqual(result["signature"]["status"], "NOT_AVAILABLE")
        self.assertEqual(oracle_result({"status": "TRACE_MISMATCH"}, {"status": "NOT_AVAILABLE"})["status"], "TRACE_MISMATCH")
        self.assertEqual(oracle_result({"status": "PASS"}, {"status": "MISMATCH"})["status"], "INCONSISTENT_ORACLE")

    def run_campaign(self, seeds, stop=False, failure=False, wrong_xlen=False):
        session = self.root / "session_test"
        session.mkdir()
        args = Namespace(preflight=False, once=False, num_tests=len(seeds), seed=seeds[0],
                         generated_dir=self.root / "generated", sleep=0, stop_on_failure=stop)
        requested = []

        def remote(seed, selection=None):
            requested.append(seed)
            data = payload(seed)
            if wrong_xlen and seed == seeds[0]:
                data["xlen"] = 32
            if failure and seed == seeds[0]:
                data.update(success=False, status=failure if isinstance(failure, str) else "GENERATOR_ERROR", error="failed")
            return data

        def execute(elf, directory, args, preflight=False):
            self.assertTrue(elf.is_absolute())
            self.assertEqual(elf.read_bytes(), elf_header())
            runner = dict(returncode=0, timed_out=False, error=None, trace_created=True)
            result = dict(status="PASS", trace={"status": "PASS"}, signature={"status": "NOT_AVAILABLE"})
            return runner, runner.copy(), result

        with patch.object(campaign.generate_riscv_dv_test, "chia_remote", side_effect=remote), \
             patch.object(campaign, "get", side_effect=lambda result: result), redirect_stdout(io.StringIO()):
            status = campaign.run_campaign(args, session, execute, lambda *a, **k: None, lambda *a: None)
        return requested, status, json.loads((session / "campaign.json").read_text())

    def test_wrong_architecture_metadata_never_reaches_simulators(self):
        requested,status,summary=self.run_campaign([10,11],wrong_xlen=True)
        self.assertEqual(requested,[10,11])
        self.assertEqual(status,1)
        self.assertEqual(summary['results'][0]['status'],'GENERATOR_ERROR')
        self.assertEqual(summary['generation_success'],1)
        self.assertEqual(summary['wally_success'],1)

    def test_each_seed_runs_once(self):
        requested, status, summary = self.run_campaign([10, 11, 12])
        self.assertEqual(requested, [10, 11, 12])
        self.assertEqual(status, 0)
        self.assertEqual(summary["trace_pass"], 3)

    def test_generator_failure_is_counted_and_campaign_continues(self):
        requested, status, summary = self.run_campaign([10, 11], failure=True)
        self.assertEqual(requested, [10, 11])
        self.assertEqual(status, 1)
        self.assertEqual(summary["infrastructure_generator_errors"], 1)
        self.assertEqual(summary["generation_success"], 1)

    def test_stop_on_generator_failure(self):
        requested, status, summary = self.run_campaign([10, 11], stop=True, failure=True)
        self.assertEqual(requested, [10])
        self.assertEqual(status, 1)
        self.assertEqual(summary["attempted"], 1)

    def test_initialization_error_is_not_downgraded_and_never_executed(self):
        requested, status, summary = self.run_campaign([10, 11], failure="INITIALIZATION_ERROR")
        self.assertEqual(requested, [10, 11])
        self.assertEqual(status, 1)
        self.assertEqual(summary["results"][0]["status"], "INITIALIZATION_ERROR")
        self.assertEqual(summary["generation_success"], 1)
        self.assertEqual(summary["wally_success"], 1)


if __name__ == "__main__":
    unittest.main()
