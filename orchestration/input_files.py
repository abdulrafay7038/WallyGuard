"""Walk test inputs without descending into generated output trees."""
import os
from pathlib import Path


def input_files(root: Path, excluded_dirs: set[str], excluded_paths: tuple[str, ...] = ()):
    for directory, dirs, files in os.walk(root):
        parent = Path(directory)
        dirs[:] = [name for name in dirs if name not in excluded_dirs
                   and not ((parent / name).relative_to(root).as_posix() + '/').startswith(excluded_paths)]
        for name in files:
            path = parent / name
            if name not in excluded_dirs and path.is_file() and not path.relative_to(root).as_posix().startswith(excluded_paths):
                yield path
