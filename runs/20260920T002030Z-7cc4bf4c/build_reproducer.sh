#!/bin/bash
set -e
cd /home/rafay/miniconda3/WallyGuard2/runs/20260920T002030Z-7cc4bf4c

mkdir -p build logs

export PATH=/opt/riscv/bin:$PATH

riscv64-unknown-elf-gcc -march=rv64gc_zicboz_smstateen -mabi=lp64 -mcmodel=medany -T linker.ld -nostdlib -nostartfiles control.S -o build/control.elf || \
riscv64-unknown-elf-gcc -march=rv64gc_zicboz -mabi=lp64 -mcmodel=medany -T linker.ld -nostdlib -nostartfiles control.S -o build/control.elf

riscv64-unknown-elf-gcc -march=rv64gc_zicboz_smstateen -mabi=lp64 -mcmodel=medany -T linker.ld -nostdlib -nostartfiles test.S -o build/test.elf || \
riscv64-unknown-elf-gcc -march=rv64gc_zicboz -mabi=lp64 -mcmodel=medany -T linker.ld -nostdlib -nostartfiles test.S -o build/test.elf
