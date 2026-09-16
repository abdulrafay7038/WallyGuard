## Exports
```bash
export HEAD_IP=$(hostname -I | awk '{print $1}')
export GCP_PROJECT=project-0df87a12-e649-434b-84a
export GCP_PRIVATE_KEY_PATH=~/.ssh/chia_gcp
```

[15:15:30] (Architect) Missing Instruction-Address-Misaligned Exception (Cause 0) on Taken Unaligned Jump/Branch Due to CommittedF Trap Suppression (src/privileged/trap.sv, src/ifu/ifu.sv)
(_ToolServerActor pid=53274) INFO:     Waiting for application shutdown.
(_ToolServerActor pid=53274) INFO:     Application shutdown complete.
(_ToolServerActor pid=53274) INFO:     Finished server process [53274]
(_ToolServerActor pid=53274) INFO:     Waiting for application shutdown.
(_ToolServerActor pid=53274) INFO:     Application shutdown complete.
(_ToolServerActor pid=53274) INFO:     Finished server process [53274]
[15:15:30] (LOOP) Attempt failed: RayTaskError(CalledProcessError)(CalledProcessError(128, ['git', '-C', '/home/abdul/miniconda3/WallyGuard2/wally-worktrees/wally-shared', 'diff', '--binary', '2d5751b1a4a5b453bb8d929bb1d6c328f2e286fd', '--'])); continuing
[15:15:30] (LOOP) Archive failed: RayTaskError(CalledProcessError)(CalledProcessError(128, ['git', '-C', '/home/abdul/miniconda3/WallyGuard2/wally-worktrees/wally-shared', 'diff', '--binary', '2d5751b1a4a5b453bb8d929bb1d6c328f2e286fd', '--'])); files remain in /home/abdul/miniconda3/WallyGuard2/wally-worktrees/wally-shared
[15:15:30] (LOOP) Outcome: error; worktree retained: /home/abdul/miniconda3/WallyGuard2/wally-worktrees/wally-shared
[15:15:30] (LOOP) Iteration 2: 20260913T151530Z-f710274d
[15:15:30] (LOOP) Stopping: ray::make_worktree() (pid=46370, ip=10.212.0.2)
  File "/home/abdul/miniconda3/chia/chia/base/ChiaFunction.py", line 401, in _chia_trampoline
    return func(*args, **kwargs)
  File "/tmp/ray/session_2026-09-13_13-35-30_466508_4352/runtime_resources/working_dir_files/_ray_pkg_3f3b7839962737c8/loop.py", line 389, in make_worktree
    raise WorkspaceUnavailableError(f"Previous attempt is active or unarchived: {previous}")
WorkspaceUnavailableError: Previous attempt is active or unarchived: /home/abdul/miniconda3/WallyGuard2/runs/20260913T144157Z-9286d137/attempt.json
[15:15:30] (LOOP) Outcome: workspace_unavailable; worktree retained: None
Traceback (most recent call last):
  File "/tmp/ray/session_2026-09-13_13-35-30_466508_4352/runtime_resources/working_dir_files/_ray_pkg_3f3b7839962737c8/loop.py", line 781, in <module>
    main()
  File "/tmp/ray/session_2026-09-13_13-35-30_466508_4352/runtime_resources/working_dir_files/_ray_pkg_3f3b7839962737c8/loop.py", line 750, in main
    run_attempt(record, history, max_fix_attempts)
  File "/tmp/ray/session_2026-09-13_13-35-30_466508_4352/runtime_resources/working_dir_files/_ray_pkg_3f3b7839962737c8/loop.py", line 607, in run_attempt
    record.update(remote(make_worktree, WALLY_PATH, record["tag"]))
  File "/tmp/ray/session_2026-09-13_13-35-30_466508_4352/runtime_resources/working_dir_files/_ray_pkg_3f3b7839962737c8/loop.py", line 600, in remote
    return get(function.chia_remote(*args, **kwargs))
  File "/home/abdul/miniconda3/chia/chia/base/ChiaFunction.py", line 691, in get
    raw = ray.get(ref, timeout=timeout, _use_object_store=_use_object_store)  # type: ignore[call-overload]
  File "/home/abdul/miniconda3/envs/chia_env/lib/python3.10/site-packages/ray/_private/auto_init_hook.py", line 22, in auto_init_wrapper
    return fn(*args, **kwargs)
  File "/home/abdul/miniconda3/envs/chia_env/lib/python3.10/site-packages/ray/_private/client_mode_hook.py", line 104, inwrapper
    return func(*args, **kwargs)
  File "/home/abdul/miniconda3/envs/chia_env/lib/python3.10/site-packages/ray/_private/worker.py", line 2981, in get
    values, debugger_breakpoint = worker.get_objects(
  File "/home/abdul/miniconda3/envs/chia_env/lib/python3.10/site-packages/ray/_private/worker.py", line 1012, in get_objects
    raise value.as_instanceof_cause()
ray.exceptions.RayTaskError(WorkspaceUnavailableError): ray::make_worktree() (pid=46370, ip=10.212.0.2)
  File "/home/abdul/miniconda3/chia/chia/base/ChiaFunction.py", line 401, in _chia_trampoline
    return func(*args, **kwargs)
  File "/tmp/ray/session_2026-09-13_13-35-30_466508_4352/runtime_resources/working_dir_files/_ray_pkg_3f3b7839962737c8/loop.py", line 389, in make_worktree
    raise WorkspaceUnavailableError(f"Previous attempt is active or unarchived: {previous}")
WorkspaceUnavailableError: Previous attempt is active or unarchived: /home/abdul/miniconda3/WallyGuard2/runs/20260913T144157Z-9286d137/attempt.json

---------------------------------------
Job 'raysubmit_YnWWj9VYABfZGr4G' failed
---------------------------------------

Status message: Job entrypoint command failed with exit code 1, last available logs (truncated to 20,000 chars):
  File "/home/abdul/miniconda3/envs/chia_env/lib/python3.10/site-packages/ray/_private/worker.py", line 2981, in get
    values, debugger_breakpoint = worker.get_objects(
  File "/home/abdul/miniconda3/envs/chia_env/lib/python3.10/site-packages/ray/_private/worker.py", line 1012, in get_objects
    raise value.as_instanceof_cause()
ray.exceptions.RayTaskError(WorkspaceUnavailableError): ray::make_worktree() (pid=46370, ip=10.212.0.2)
  File "/home/abdul/miniconda3/chia/chia/base/ChiaFunction.py", line 401, in _chia_trampoline
    return func(*args, **kwargs)
  File "/tmp/ray/session_2026-09-13_13-35-30_466508_4352/runtime_resources/working_dir_files/_ray_pkg_3f3b7839962737c8/loop.py", line 389, in make_worktree
    raise WorkspaceUnavailableError(f"Previous attempt is active or unarchived: {previous}")
WorkspaceUnavailableError: Previous attempt is active or unarchived: /home/abdul/miniconda3/WallyGuard2/runs/20260913T144157Z-9286d137/attempt.json
