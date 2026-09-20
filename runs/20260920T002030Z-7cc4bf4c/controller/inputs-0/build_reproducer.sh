#!/bin/bash
set -ex
cd /home/rafay/miniconda3/WallyGuard2/runs/20260920T002030Z-7cc4bf4c

mkdir -p build logs

# Create linker script
cat << 'LDEOF' > linker.ld
OUTPUT_ARCH( "riscv" )
ENTRY(_start)

SECTIONS
{
  . = 0x80000000;
  .text.init : { *(.text.init) }
  .text : { *(.text) }
  .data : { *(.data) }
  .bss : { *(.bss) }
  .tohost : { *(.tohost) }
  _end = .;
}
LDEOF

# Compile tests
riscv64-unknown-elf-gcc -march=rv64gc_zicboz -mabi=lp64d -nostdlib -nostartfiles -T linker.ld -I tests -o build/control.elf control.S
riscv64-unknown-elf-gcc -march=rv64gc_zicboz -mabi=lp64d -nostdlib -nostartfiles -T linker.ld -I tests -o build/test.elf test.S
