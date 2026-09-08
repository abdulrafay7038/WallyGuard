"""Read-only inventory of the installed generator, returned through CHIA."""
import json
from pathlib import Path
from chia.base.ChiaFunction import ChiaFunction, get

@ChiaFunction(resources={"generator": 1}, max_retries=0)
def inventory():
    import os, socket, subprocess, hashlib
    from pathlib import Path
    root = Path(os.environ['RISCV_DV_ROOT']).resolve()
    files = {}
    tracked = subprocess.check_output(["git","ls-files"],cwd=root,text=True).splitlines()
    patterns = ('yaml/*.yaml', 'target/**/*', 'pygen/**/*.py', 'scripts/gen_csr_test.py',
                'run.py', 'user_extension/*', 'directed_tests/**/*', 'src/*.sv', 'test/*.sv')
    for pattern in patterns:
        for path in root.glob(pattern):
            if path.is_file() and path.suffix in ('.yaml', '.py', '.sv', '.S', '.s', '.h', '.ld'):
                files[str(path.relative_to(root))] = path.read_text()
    for relative in tracked:
        path=root/relative
        if path.suffix in ('.yaml','.S','.c') and path.is_file():
            files[relative]=path.read_text(errors='replace')
    return dict(tracked_files=tracked, hostname=socket.gethostname(), root=str(root),
                revision=subprocess.check_output(['git','rev-parse','HEAD'],cwd=root,text=True).strip(),
                files=files, hashes={k:hashlib.sha256(v.encode()).hexdigest() for k,v in files.items()})

if __name__ == '__main__':
    import ray
    ray.init(address='auto', logging_level='ERROR')
    data = get(inventory.chia_remote())
    dest = Path(__file__).parent / 'data' / 'riscv_dv_inventory.json'
    dest.write_text(json.dumps(data, indent=2)+'\n')
    print(json.dumps({k:v for k,v in data.items() if k not in ('files','hashes','tracked_files')}))
    print(f'{len(data["files"])} source files inventoried -> {dest}')
