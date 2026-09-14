# Bug Reproducer: mstatus.MXR and sstatus.MXR
This reproducer demonstrates that `mstatus.MXR` and `sstatus.MXR` erroneously allow software to set bit 19 when `P.VIRTMEM_SUPPORTED == 0`.
It tests `nodcache_rv64gc` where virtual memory is unsupported, checking that `MXR` cannot be set, alongside positive and negative controls.
