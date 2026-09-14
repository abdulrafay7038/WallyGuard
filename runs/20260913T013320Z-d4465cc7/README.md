# Bug Report: Instruction-Address-Misaligned Exception (Cause 0) from JALR Retains Unmasked Bit 0 in mtval/xtval

## Configuration
- ISA: rv64i_zicsr
- ABI: lp64
- Configuration: rv64i (WALLYCONF=rv64i)

## Description
Under the RISC-V Unprivileged Architecture Specification (v20191213, Section 2.5), the target address calculation of JALR is strictly defined as `(rs1 + imm) & ~1`.
When an instruction-address-misaligned exception occurs, `mtval` must be written with the faulting virtual address (which is the architectural target address).
In Wally RTL (`src/privileged/csr.sv` and `src/ieu/datapath.sv`), the ALU adder output is not masked for bit 0 before being passed to `NextFaultXtvalM` for Cause 0 exceptions.
Thus, when executing `jalr x0, 3(t0)` where `t0` is 4-byte aligned, the target address raises Cause 0 but incorrectly writes `t0 + 3` into `mtval`/`xtval` instead of the expected `t0 + 2`.
The Spike oracle correctly clears bit 0, setting `mtval = t0 + 2`.

## Reproduction
Execute the deterministic reproducer script from the worktree root:
```bash
./tester_llm/20260913T013320Z-d4465cc7/reproducer.sh
```
