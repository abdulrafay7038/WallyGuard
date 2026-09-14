# Fixer Report: Spurious Illegal Instruction Exception on sfence.vma

## Tag: 20260914T004119Z-9aa7d80b

## Root Cause
In `src/privileged/privdec.sv` line 82, the decode logic for `sfencevmaM` was erroneously gated with `P.VIRTMEM_SUPPORTED` instead of `P.S_SUPPORTED`. When Supervisor mode is supported (`P.S_SUPPORTED == 1`) but virtual memory is disabled (`P.VIRTMEM_SUPPORTED == 0`, e.g., in the `nodcache_rv64gc` configuration), the gate forced `sfencevmaM = 0`, causing `IllegalPrivilegedInstrM` to evaluate to 1. This resulted in a spurious Illegal Instruction exception (Cause 2) on any execution of `sfence.vma` in M-mode or S-mode.

## Minimal Fix
Single-token change on line 82 of `src/privileged/privdec.sv`:

**Before:**
```systemverilog
assign sfencevmaM = PrivilegedM & P.VIRTMEM_SUPPORTED &
```

**After:**
```systemverilog
assign sfencevmaM = PrivilegedM & P.S_SUPPORTED &
```

## Specification Reference
- RISC-V Instruction Set Manual, Volume II: Privileged Architecture (v20211203), Section 4.2.1: "The SFENCE.VMA instruction is valid only when S-mode is implemented... When address translation is not supported (i.e., satp.MODE is read-only 0 / Bare), SFENCE.VMA executes as a no-op and does not raise an exception."

## Verification
- **Configuration:** `nodcache_rv64gc` (P.S_SUPPORTED=1, P.VIRTMEM_SUPPORTED=0)
- **Spike oracle:** exit code 0 (correct behavior)
- **Wally DUT (fixed):** exit code 0 (previously exit code 134 / Cause 2 trap)
- **Build command:** `make -C sim/verilator WALLYCONF=nodcache_rv64gc TESTBENCH=testbench`
- **Reproducer:** `reproducer.sh`

## Files Changed
- `src/privileged/privdec.sv`: line 82 only (1 token changed)

## Backup
- Original file saved at: `fixer/privdec.sv.orig`
