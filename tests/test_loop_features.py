"""Loop sequencing, durable evidence collection, and console behavior."""
from argparse import Namespace
from contextlib import redirect_stdout
import csv
import io
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

import wally_loop as loop
from tools import console
from tools.compare import compare_traces
from tools.evidence import collect_mismatch, sha256
from tools.trace import write_trace


class LoopFeatureTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory()
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name)
        self.run = self.root / "runs/session_one/000001_seed_509"
        self.run.mkdir(parents=True)
        self.generated = self.root / "generated"
        self.generated.mkdir()
        self.elf = self.generated / "test.elf"
        self.elf.write_bytes(b"original ELF artifact")
        (self.generated / "test.S").write_text("ori x27, x11, 100\n")
        for name in ("generation.log", "metadata.json"):
            (self.generated / name).write_text("{}\n")
        row = dict(order=0, pc="80000140", binary="0645ed93", mode="3", trap="0",
                   rd="x27", rd_value="64")
        write_trace(self.run / "wally_trace.csv", [row])
        write_trace(self.run / "spike_trace.csv", [{**row, "rd_value": "1064"}])
        self.trace = compare_traces(self.run / "wally_trace.csv", self.run / "spike_trace.csv", self.run)
        (self.run / "result.json").write_text(json.dumps(dict(trace_comparison=self.trace)))

    def test_collection_preserves_evidence_and_indexes_seed(self):
        before = {p: sha256(p) for p in self.run.iterdir()}
        target = Path(collect_mismatch(self.run, self.elf, self.root / "mismatches", {"seed": 509}))
        self.assertEqual((target / "test.S").read_bytes(), (self.generated / "test.S").read_bytes())
        self.assertEqual((target / "test.elf").read_bytes(), self.elf.read_bytes())
        for p, digest in before.items():
            self.assertEqual(sha256(p), digest)
            self.assertEqual(sha256(target / p.name), digest)
        self.assertEqual((target.parent / "seeds.txt").read_text(), "509\n")
        with (target.parent / "index.csv").open() as handle:
            index = list(csv.DictReader(handle))
        self.assertEqual(index[0]["reason"], "rd_value differs")
        self.assertEqual(index[0]["matched_instructions"], "0")
        with self.assertRaises(FileExistsError):
            collect_mismatch(self.run, self.elf, self.root / "mismatches", {"seed": 509})
        self.assertEqual((target.parent / "seeds.txt").read_text(), "509\n")

    def test_missing_assembly_does_not_publish_partial_collection(self):
        (self.generated / "test.S").unlink()
        with self.assertRaises(FileNotFoundError):
            collect_mismatch(self.run, self.elf, self.root / "mismatches", {"seed": 509})
        self.assertFalse((self.root / "mismatches/session_one/000001_seed_509").exists())

    def test_pass_is_not_collected(self):
        (self.run / "result.json").write_text(json.dumps(dict(trace_comparison={"status": "PASS"})))
        self.assertIsNone(collect_mismatch(self.run, self.elf, self.root / "mismatches"))
        self.assertFalse((self.root / "mismatches").exists())

    def test_collection_failure_preserves_original_architectural_result(self):
        runner = dict(log_path="log", trace_path="trace", signature_path="signature")
        comparison = dict(status="TRACE_MISMATCH", trace=self.trace, signature={"status": "NOT_AVAILABLE"})
        with patch.object(loop, "collect_mismatch", side_effect=OSError("disk full")):
            loop.save_summary(self.run, self.elf, runner, runner, comparison, generation={"seed": 509})
        result = json.loads((self.run / "result.json").read_text())
        self.assertEqual(result["status"], "TRACE_MISMATCH")
        self.assertIn("disk full", result["collection_error"])

    def test_save_summary_collects_and_records_destination(self):
        runner = dict(log_path="log", trace_path="trace", signature_path="signature")
        comparison = dict(status="TRACE_MISMATCH", trace=self.trace, signature={"status": "NOT_AVAILABLE"})
        loop.save_summary(self.run, self.elf, runner, runner, comparison,
                          generation={"seed": 509}, mismatch_root=self.root / "mismatches")
        result = json.loads((self.run / "result.json").read_text())
        target = Path(result["evidence"]["mismatch_collection"])
        self.assertEqual(comparison["collection_path"], str(target))
        self.assertEqual((target / "result.json").read_bytes(), (self.run / "result.json").read_bytes())
        self.assertEqual((target / "test.S").read_bytes(), (self.generated / "test.S").read_bytes())

    def test_console_hides_only_generated_unavailable_signature(self):
        comparison = dict(status="PASS", trace=dict(status="PASS", matched_instructions=138),
                          signature={"status": "NOT_AVAILABLE"})
        with patch.object(console, "COLOR", "never"), redirect_stdout(io.StringIO()) as output:
            loop.print_result(1, self.elf, comparison, self.run, generated=True)
        self.assertIn("seed 509 | TRACE PASS: 138", output.getvalue())
        self.assertNotIn("SIGNATURE", output.getvalue())
        self.assertNotIn("\033", output.getvalue())
        with redirect_stdout(io.StringIO()) as output:
            loop.print_result(1, self.elf, comparison, self.run)
        self.assertIn("SIGNATURE NOT_AVAILABLE", output.getvalue())
        comparison.update(status="INCONSISTENT_ORACLE", reason="signature mismatch")
        comparison["signature"]["status"] = "MISMATCH"
        with redirect_stdout(io.StringIO()) as output:
            loop.print_result(1, self.elf, comparison, self.run, generated=True)
        self.assertIn("SIGNATURE MISMATCH", output.getvalue())
        self.assertIn("INCONSISTENT_ORACLE", output.getvalue())

    def test_directed_tests_precede_generation_and_stop_policy(self):
        for stop in (False, True):
            with self.subTest(stop=stop):
                tests = self.root / f"tests_{stop}"
                tests.mkdir()
                for name in ("b.elf", "a.elf"):
                    (tests / name).touch()
                events = []

                def execute(elf, directory, args):
                    events.append(elf.name)
                    return {}, {}, dict(status="TRACE_MISMATCH", trace=self.trace,
                                        signature={"status": "NOT_AVAILABLE"})

                def campaign(args, session, *callbacks):
                    events.append("generation")
                    self.assertEqual(args.num_tests, 3)
                    self.assertEqual(args.directed_summary["attempted"], 2)
                    self.assertTrue((session / "directed.json").exists())
                    return 0

                argv = ["wally_loop.py", "--num-tests", "3", "--seed", "509", "--run-dir", str(self.root / f"runs_{stop}")]
                if stop:
                    argv.append("--stop-on-failure")
                with patch.object(sys, "argv", argv), patch.object(loop, "DEFAULT_TEST_DIR", tests), \
                     patch("ray.is_initialized", return_value=True), \
                     patch("ray.cluster_resources", return_value={r: 1 for r in ("wally", "spike", "compare", "generator")}), \
                     patch.object(loop, "execute_elf", side_effect=execute), \
                     patch.object(loop, "save_summary"), patch.object(loop, "print_result"), \
                     patch("tools.campaign.run_campaign", side_effect=campaign), redirect_stdout(io.StringIO()):
                    code = loop.main()
                self.assertEqual(code, 1)
                self.assertEqual(events, ["a.elf"] if stop else ["a.elf", "b.elf", "generation"])


if __name__ == "__main__":
    unittest.main()
