# WallyGuard directed ELF tests

From the project root, build the additional tests and run all top-level ELFs:

```bash
make -C tests
python wally_loop.py --once --local --stop-on-failure
```

For the existing CHIA cluster, omit `--local`. `make -C tests` adds five
ELFs and leaves `add_test.elf` alone. Use `make -C tests add_test.elf` to
rebuild the original example after editing its source.

| ELF | Source | Coverage |
| --- | --- | --- |
| `add_test.elf` | `add_test.S` | Original 5 + 7 example |
| `integer.elf` | `directed/integer.S` | Arithmetic, logic, signed/unsigned shifts, word sign extension |
| `branches.elf` | `directed/branches.S` | Loops, branch flushing, signed/unsigned branches, call/return, x0 |
| `memory.elf` | `directed/memory.S` | Aligned byte/halfword/word/doubleword loads/stores, extension, partial stores, load/use |
| `muldiv.elf` | `directed/muldiv.S` | Multiply high/low, signed division/remainder, division by zero, signed overflow |
| `retirement.elf` | `trace/retirement.S` | Existing compressed/stall/branch/ECALL/MRET collector regression |

The four new sources use `directed/harness.h`, recording eight 64-bit results
before a terminal `tohost` store. They use `link.ld` and the same signature
labels as the original test. RVC instructions are enabled by `-march=rv64gc`.
No processor RTL, loop behavior, or cluster configuration is changed.

Expected 64-bit signature values, in memory order (`-N` means the RV64
two's-complement encoding; Spike's signature file splits each into two
32-bit lines, low word first):

| Test | Expected values |
| --- | --- |
| integer | `12, -2, 0x5a, 5, 0x5f, -4, 15, 0xffffffff80000000` |
| branches | `15, 42, 1, 1, 77, 9, 0, 123` |
| memory | `0x1122334455667788, -120, 136, -32767, 32769, 0xffffffff80000001, 0x80000001, 0x112233448000aa02` |
| muldiv | `-21, -2, -1, 1, -1, -1, 123, 0x8000000000000000` |

These tests exercise the deterministic comparison of two implementations;
the normal loop checks their signatures against each other, not against this
table. They are small directed tests, not RISC-V-DV random generation or a
complete ISA compliance suite. Generated `.elf.memfile` and `.elf.objdump.*`
files are Wally input artifacts. Execution evidence is written under `runs/`.

The separate `test_*.py` files test WallyGuard's Python infrastructure:

```bash
python -m unittest discover -s tests -p 'test_*.py' -v
```
