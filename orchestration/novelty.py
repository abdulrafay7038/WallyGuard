"""Record local known-fix evidence separately from hardware verification."""
import re
import subprocess


def assess_novelty(scratch: str, diff: str, reports: list[str]) -> dict:
    """Check explicitly cited commits only; no claim of exhaustive novelty search."""
    references = sorted(set(re.findall(r'\b[0-9a-f]{40}\b', '\n'.join(reports))))[:8]
    result = dict(status='not_established', references=[],
                  scope='Only commits cited in agent reports were checked in the local repository. '
                        'No match is not evidence of a novel discovery.')
    def git(*args, data=None):
        return subprocess.run(['git', '-C', scratch, *args], input=data, text=True,
                              capture_output=True, check=True, timeout=15).stdout
    try:
        patch_id = git('patch-id', '--stable', data=diff).split()[0]
        for ref in references:
            try:
                saved = git('show', '--format=', '--no-ext-diff', '--binary', ref, '--', 'src/')
                ids = git('patch-id', '--stable', data=saved).split()
                match = bool(ids) and ids[0] == patch_id
                result['references'].append(dict(commit=ref, resolved=True, rtl_patch_matches=match))
                if match:
                    result['status'] = 'known_fix_patch_match'
            except (subprocess.SubprocessError, OSError):
                result['references'].append(dict(commit=ref, resolved=False))
    except (subprocess.SubprocessError, OSError, IndexError) as exc:
        result['diagnostic'] = type(exc).__name__
    return result
