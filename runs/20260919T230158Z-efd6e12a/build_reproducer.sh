#!/bin/bash
set -euo pipefail
: "${WALLY:?WALLY must identify the managed checkout}"
test_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)
mkdir -p "$test_dir/build" "$test_dir/logs"
for name in control test; do
    riscv64-unknown-elf-gcc -march=rv64gc_zicboz -mabi=lp64d -nostdlib -nostartfiles \
        -T "$WALLY/tests/riscof/spike/env/link.ld" \
        "$test_dir/tests/$name.S" -o "$test_dir/build/$name.elf"
done
