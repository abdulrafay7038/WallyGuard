"""Recover an archived or interrupted workspace after verifying its Ray job stopped."""
import argparse
import fcntl
from inspect import unwrap
import json
from pathlib import Path
import re

from ray.job_submission import JobSubmissionClient
import loop


def recover(wally_path: str, job_id: str, client) -> dict:
    base = Path(wally_path).resolve()
    workspace_dir = base.parent / "wally-worktrees"
    with (workspace_dir / "wally-shared.lock").open("a") as lock:
        fcntl.flock(lock, fcntl.LOCK_EX)
        state = json.loads((workspace_dir / "wally-shared.json").read_text())
        if state["source"] != str(base):
            raise RuntimeError("Shared workspace belongs to a different checkout")
        status = client.get_job_status(job_id)
        if str(status) not in {"STOPPED", "FAILED"}:
            raise RuntimeError(f"Recovery requires a STOPPED or FAILED job, got {status}")
        for job in client.list_jobs():
            if (any(name in (job.entrypoint or "") for name in ("loop.py", "orchestration.submission"))
                    and str(job.status) in {"PENDING", "RUNNING"}):
                raise RuntimeError(f"Another loop job is active: {job.submission_id}")
        marker = rf"\(LOOP\) Iteration \d+: {re.escape(state['tag'])}(?:\s|$)"
        if not re.search(marker, client.get_job_logs(job_id)):
            raise RuntimeError("The stopped job did not start the attempt that owns this workspace")
        scratch = workspace_dir / "wally-shared"
        test_dir = base.parent / "runs" / state["tag"]
        path = test_dir / "attempt.json"
        record = json.loads(path.read_text()) if path.exists() else {}
        if (record and record.get("status") != "in_progress" and not record.get("active")
                and not record.get("workspace_recovery_required")):
            raise RuntimeError(f"Attempt is already archived as {record.get('status')}")
        loop.repair_submodule_links(str(scratch), state["base_commit"], str(test_dir))
        record.update(tag=state["tag"], scratch=str(scratch), base_commit=state["base_commit"],
                      test_dir=str(test_dir), status="interrupted", active=False,
                      recovery={"job_id": job_id, "job_status": str(status)})
        save = unwrap(loop.save_attempt)
        save(str(base), record)
        if record.get("workspace_recovery_required"):
            raise RuntimeError(f"Archive still needs repair: {record['archive_errors'][-1]}")
        return record


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--job-id", required=True)
    parser.add_argument("--address", default="http://127.0.0.1:8265")
    parser.add_argument("--wally-path", default=loop.WALLY_PATH)
    args = parser.parse_args()
    result = recover(args.wally_path, args.job_id, JobSubmissionClient(args.address))
    print(f"Archived interrupted attempt {result['tag']}; shared workspace is ready for a new job.")
