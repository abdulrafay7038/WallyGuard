# Fix Notes: Spurious Illegal Instruction on satp Access When Virtual Memory Disabled

## Root Cause
In `src/privileged/csrs.sv` line 158, the SATP read decode condition includes an
erroneous `P.VIRTMEM_SUPPORTED &` guard:

```systemverilog
// BEFORE (buggy):
SATP: if (P.VIRTMEM_SUPPORTED & (PrivilegeModeW == P.M_MODE | ~STATUS_TVM))
        CSRSReadValM = SATP_REGW;
      else IllegalCSRSAccessM = 1'b1;
```

When `P.VIRTMEM_SUPPORTED == 0` (e.g., `nodcache_rv64gc` configuration), the entire
condition evaluates to 0 regardless of privilege mode, falling through to
`IllegalCSRSAccessM = 1'b1`. This causes a spurious Illegal Instruction exception
(Cause 2) on any attempt to read the `satp` CSR.

The RISC-V Privileged Architecture (v20211203, Section 4.1.11) mandates that when
address translation is not supported, `satp` is hardwired to 0 (correctly implemented
at lines 111-114: `assign SATP_REGW = '0;`) but must remain accessible without
trapping for privileged accesses (M-mode always, S-mode when TVM=0).

## Minimal Fix
Remove `P.VIRTMEM_SUPPORTED &` from the condition on line 158 of `src/privileged/csrs.sv`:

```systemverilog
// AFTER (fixed):
SATP: if (PrivilegeModeW == P.M_MODE | ~STATUS_TVM)
        CSRSReadValM = SATP_REGW;
      else IllegalCSRSAccessM = 1'b1;
```

This makes the privilege check independent of virtual memory support, which is correct
because:
1. The register value is already hardwired to 0 when `VIRTMEM_SUPPORTED == 0` (line 114)
2. The write path already correctly suppresses writes via `& P.SV39_SUPPORTED` (line 96)
3. Only the read access path was erroneously gated by `VIRTMEM_SUPPORTED`

## Files Changed
- `src/privileged/csrs.sv`: Line 158 - removed `P.VIRTMEM_SUPPORTED &` from SATP
  read decode condition (1 character deletion of the guard term)

## Verification
- Reproducer (`reproducer.sh`) now passes (exit code 0) with the fix applied
- Spike oracle also passes (exit code 0) - consistent behavior confirmed
- Build against `nodcache_rv64gc` configuration succeeds with no errors
- Full regression was NOT run (run_regression=false per operator setting)
