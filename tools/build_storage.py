"""Release owned compiler intermediates while retaining reusable simulator binaries."""
import fcntl
from pathlib import Path
from .configs import ROOT

BUILD_ROOT=ROOT/'cvw/sim/verilator/wkdir'


def release_intermediates(directories, build_root=BUILD_ROOT):
    report=dict(bytes_released=0,files=[],busy=[])
    root=Path(build_root).resolve()
    for requested in directories:
        path=Path(requested)
        if path.is_symlink():continue
        path=path.resolve()
        if path.parent!=root or not (path/'Vtestbench').is_file():continue
        with (root/('.'+path.name+'.lock')).open('a') as lock:
            try:fcntl.flock(lock,fcntl.LOCK_EX|fcntl.LOCK_NB)
            except BlockingIOError:
                report['busy'].append(str(path));continue
            # wsim freshness and execution depend on Vtestbench, not these
            # reproducible compiler inputs. Retain generated C++ and diagnostics.
            for candidate in path.iterdir():
                if candidate.suffix in ('.gch','.o','.a') and candidate.is_file() and not candidate.is_symlink():
                    size=candidate.stat().st_size
                    candidate.unlink()
                    report['files'].append(str(candidate));report['bytes_released']+=size
    return report
