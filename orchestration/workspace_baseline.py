"""Carry accepted, archived RTL fixes into the next discovery baseline."""
import hashlib
import json
import os
from pathlib import Path
import subprocess
from tempfile import TemporaryDirectory

from .verification_state import candidate_allowed, confirmation_allowed


def retain_verified_fix(scratch: Path, state_path: Path, state: dict,
                        record: dict, archive: Path) -> dict:
    """Called under the workspace lock, before reset or new attempt ownership.

    Build from the archived patch in a private index, never from leftover edits.
    Persist the advanced baseline before reset so a restart cannot lose the fix.
    The previous attempt keeps its original base_commit for reproducibility.
    """
    if record.get('status') not in {'confirmed', 'candidate_fix_verified'}:
        return state
    if (record.get('active') or record.get('workspace_recovery_required')
            or record.get('tag') != state.get('tag')):
        raise ValueError('Accepted fix is active, unarchived, or belongs to another attempt')
    retained = state.get('retained_fixes', [])
    if retained and retained[-1]['tag'] == record['tag']:
        if retained[-1]['commit'] != state['base_commit']:
            raise ValueError('Retained fix does not match the saved workspace baseline')
        return state  # Restart after baseline persistence, before new ownership.
    if record.get('base_commit') != state['base_commit']:
        raise ValueError('Accepted fix was verified against a different baseline')
    if (not candidate_allowed(record)
            or (record['status'] == 'confirmed' and not confirmation_allowed(record))):
        raise ValueError('Accepted fix is missing required verification or reviews')
    patch_path = record.get('patch')
    if not patch_path:
        raise ValueError('Accepted fix has no exported patch')
    patch = Path(patch_path).read_bytes()
    if not patch or patch != (archive / 'proposed.patch').read_bytes():
        raise ValueError('Exported fix and archived workspace patch do not match')

    with TemporaryDirectory(prefix='wallyguard-baseline-') as temporary:
        env = dict(os.environ, GIT_INDEX_FILE=str(Path(temporary) / 'index'))

        def git(*args, data=None):
            return subprocess.run(
                ['git', '-C', str(scratch), *args], input=data, env=env,
                check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE).stdout

        parent = state['base_commit']
        git('read-tree', parent)
        git('apply', '--cached', '--whitespace=nowarn', '-', data=patch)
        tree = git('write-tree').decode().strip()
        names = git('diff', '--name-only', '-z', parent, tree, '--').split(b'\0')
        names = [name for name in names if name]
        if not names or any(not name.startswith(b'src/') for name in names):
            raise ValueError('Only a nonempty RTL fix can advance the baseline')
        commit = git('-c', 'user.name=WallyGuard', '-c', 'user.email=wallyguard@localhost',
                     '-c', 'commit.gpgSign=false', 'commit-tree', tree, '-p', parent,
                     '-m', f"Retain verified RTL fix from {record['tag']}").decode().strip()

    updated = dict(state, base_commit=commit, retained_fixes=[*retained, dict(
        tag=record['tag'], status=record['status'], base_commit=parent, commit=commit,
        patch_sha256=hashlib.sha256(patch).hexdigest())])
    pending = state_path.with_suffix('.json.tmp')
    pending.write_text(json.dumps(updated, indent=2) + '\n', encoding='utf-8')
    pending.replace(state_path)
    return updated
