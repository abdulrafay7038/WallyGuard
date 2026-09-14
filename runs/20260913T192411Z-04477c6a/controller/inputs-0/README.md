# Spurious Illegal Instruction Exception on satp Access When Virtual Memory is Disabled

## Configuration
- `WALLYCONF=nodcache_rv64gc`
- `VIRTMEM_SUPPORTED = 0` (due to `SV39_SUPPORTED = 0` and `SV32_SUPPORTED = 0`)
- S-mode is implemented (`S_SUPPORTED = 1`)

## ISA/ABI
- Architecture: rv64gc
- ABI: lp64d

## Reproduction
Run the reproducer script from the worktree root:
```bash
./runs/20260913T192411Z-04477c6a/reproducer.sh
```

## Description
When `P.VIRTMEM_SUPPORTED == 0`, `satp` (CSR 0x180) should be hardwired to 0 (read-only zero) without trapping, per the RISC-V Privileged Architecture Spec v20211203 Section 4.1.11. However, the read decode multiplexer in `src/privileged/csrs.sv` introduces an erroneous condition `P.VIRTMEM_SUPPORTED &`, which forces `IllegalCSRSAccessM = 1'b1` on any access. This causes an unexpected Illegal Instruction exception (Cause 2). 

## Observed Results
- **Spike**: Correctly allows `satp` read/write in M-mode and S-mode (when `TVM=0`), returning 0. Exits with code 0.
- **Wally DUT**: Erroneously triggers an Illegal Instruction (Cause 2) on legal accesses, causing the testbench to catch an unexpected trap in the test suite and abort. Exits with code 134.

## Expected Results
- Both Spike and Wally should allow legal accesses to `satp` and return 0 when virtual memory is unsupported. Accesses in U-mode or S-mode with `TVM=1` should trap.
