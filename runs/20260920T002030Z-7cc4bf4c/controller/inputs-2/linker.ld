OUTPUT_ARCH("riscv")
ENTRY(_start)
SECTIONS {
  . = 0x80000000;
  .text.init : { *(.text.init) }
  .text : { *(.text) }
  .data : { *(.data) }
  .bss : { *(.bss) }
  . = ALIGN(64);
  .tohost : { *(.tohost) }
  _end = .;
}
