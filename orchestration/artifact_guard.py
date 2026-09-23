"""Stage snapshots and restoration limited to the managed worktree."""
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import uuid
from .input_files import input_files


class ArtifactViolation(RuntimeError):
    status = 'invalid_artifacts'

    def __init__(self, message, restored=False):
        self.restored = restored
        super().__init__(message)

    def __reduce__(self):
        return type(self), (str(self), self.restored)


def git(root: Path, *args: str) -> str:
    return subprocess.run(['git', '-C', str(root), *args], check=True, capture_output=True,
                          text=True, timeout=30).stdout


def source_files(root: Path) -> set[str]:
    # Existing ignored simulator/dependency outputs are not candidate source.
    names = set(filter(None, git(root, 'ls-files', '-z', '--cached', '--others', '--exclude-standard').split('\0')))
    # Root environment/setup files remain protected even if gitignored.
    names.update(p.name for p in root.iterdir() if p.name != '.git' and (p.is_file() or p.is_symlink()))
    names.update(filter(None, git(root, 'ls-files', '-z', '--others', '--ignored', '--exclude-standard',
                                 '--', 'src/', 'config/', 'bin/').split('\0')))
    return names


def test_files(tests: Path) -> set[str]:
    return {str(p.relative_to(tests)) for p in input_files(
        tests, {'build', 'logs', '__pycache__'}, ('controller/guards/', 'controller/agent-'))}


def snapshot(scratch: str, test_dir: str, stage: str) -> str:
    root, tests = Path(scratch), Path(test_dir)
    directory = tests / 'controller' / 'guards' / (stage + '-' + uuid.uuid4().hex)
    directory.mkdir(parents=True, mode=0o700)
    manifest = dict(stage=stage, scratch=scratch, test_dir=test_dir,
                    head=git(root, 'rev-parse', 'HEAD').strip(),
                    tree=git(root, 'rev-parse', 'HEAD^{tree}').strip(), files={})
    (directory / 'status-before.txt').write_text(git(root, 'status', '--porcelain=v1', '--untracked-files=all'))
    (directory / 'diff-before.patch').write_text(git(root, 'diff', '--binary', 'HEAD', '--'))
    for scope, parent, names in [('source', root, source_files(root)), ('tests', tests, test_files(tests))]:
        for name in names:
            path = parent / name
            if not path.is_file() and not path.is_symlink():
                continue
            target = directory / scope / name
            target.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(path, target, follow_symlinks=False)
            manifest['files'][scope + '/' + name] = digest(path)
    (directory / 'manifest.json').write_text(json.dumps(manifest, indent=2))
    return str(directory)


def digest(path: Path) -> str | None:
    if path.is_symlink():
        return 'link:' + str(path.readlink())
    if not path.is_file():
        return None
    return hashlib.sha256(path.read_bytes()).hexdigest() + ':' + oct(path.stat().st_mode & 0o777)


def is_snapshot_backup(root: Path, name: str, before: dict, tracked: set[str]) -> bool:
    """Recognize only new, unstaged copies of existing RTL from this stage."""
    if not name.startswith('src/') or name in tracked or 'source/' + name in before:
        return False
    suffix = next((suffix for suffix in ('.orig', '.bak', '~') if name.endswith(suffix)), None)
    if suffix is None:
        return False
    original = name[:-len(suffix)]
    expected = before.get('source/' + original, '')
    if not original.endswith('.sv') or original not in tracked or not expected or expected.startswith('link:'):
        return False
    # Never move a symlink or follow a redirected directory to remove a file.
    parts = Path(name).parts
    if any(root.joinpath(*parts[:i]).is_symlink() for i in range(1, len(parts) + 1)):
        return False
    path = root / name
    return path.is_file() and hashlib.sha256(path.read_bytes()).hexdigest() == expected.split(':')[0]


def finish(snapshot_path: str) -> None:
    directory = Path(snapshot_path)
    manifest = json.loads((directory / 'manifest.json').read_text())
    root, tests, stage = Path(manifest['scratch']), Path(manifest['test_dir']), manifest['stage']
    before = manifest['files']
    now = {'source/' + n for n in source_files(root)} | {'tests/' + n for n in test_files(tests)}
    tracked = set(git(root, 'ls-files', '-z').split('\0')) if stage == 'rtl_fixer' else set()
    backups = {}
    invalid = []
    for key in sorted(set(before) | now):
        scope, name = key.split('/', 1)
        path = (root if scope == 'source' else tests) / name
        if digest(path) == before.get(key):
            continue
        allowed = ((scope == 'source' and stage == 'rtl_fixer' and name.startswith('src/')
                    and key in before and path.suffix == '.sv') or
                   (scope == 'tests' and not name.startswith('controller/')
                    and name not in {'attempt.json', 'attempt.json.tmp', 'proposed.patch'}
                    and (stage in {'architect', 'tester'} or
                     (stage == 'critic' and name.startswith('critic/')) or
                     (stage == 'rtl_fixer' and name.startswith('fixer/')))))
        if not allowed:
            if scope == 'source' and stage == 'rtl_fixer' and is_snapshot_backup(root, name, before, tracked):
                archived = directory / 'backups' / name
                archived.parent.mkdir(parents=True, exist_ok=True)
                shutil.copy2(path, archived, follow_symlinks=False)
                path.unlink()
                backups[key] = dict(artifact=str(archived.relative_to(directory)), digest=digest(archived))
            else:
                invalid.append(key)
    if backups:
        (directory / 'backups.json').write_text(json.dumps(backups, indent=2))
    changed_head = git(root, 'rev-parse', 'HEAD').strip() != manifest['head']
    (directory / 'status-after.txt').write_text(git(root, 'status', '--porcelain=v1', '--untracked-files=all'))
    (directory / 'diff-after.patch').write_text(git(root, 'diff', '--binary', manifest['head'], '--'))
    if not invalid and not changed_head:
        return
    (directory / 'violations.json').write_text(json.dumps(dict(files=invalid, changed_head=changed_head), indent=2))
    if changed_head:
        # Only this managed scratch is affected. Restore its reference before path recovery.
        git(root, 'reset', '--soft', manifest['head'])
    for key in invalid:
        scope, name = key.split('/', 1)
        path = (root if scope == 'source' else tests) / name
        archived = directory / 'unauthorized' / key
        if path.is_file() or path.is_symlink():
            archived.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(path, archived, follow_symlinks=False)
            path.unlink()
        original = directory / key
        if original.is_file() or original.is_symlink():
            path.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(original, path, follow_symlinks=False)
        if scope == 'source':
            # Undo staging of unauthorized paths as well as their working content.
            git(root, 'reset', '-q', manifest['head'], '--', name)
    raise ArtifactViolation(f'Disallowed changes archived and restored: {invalid}; changed_head={changed_head}; {directory}', restored=True)
