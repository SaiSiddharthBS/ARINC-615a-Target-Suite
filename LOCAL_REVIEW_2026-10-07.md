# Local review and continuation record — 7 October 2026

The supplied WRDBG handoff remains the baseline for target state. This review
ran on macOS, without the Windows SDK or LS1028A connection. Host test results
below are not evidence of VxWorks runtime success.

## Changes

- `CMakeLists.txt`: compile the existing `tests/HostRunner.cpp.disabled` explicitly
  as C++. The previous reference to nonexistent `tests/HostRunner.cpp` prevented
  host configuration. Preserve the disabled extension to avoid adding a host
  `main()` to Workbench source discovery.
- `src/lib/arinc_615a/find/servers/implementation/ServerImpl.cpp`: change the
  request rejection predicate from AND to OR. Previously a nonempty single
  parameter, or extra parameters with an empty first parameter, bypassed the
  validation. A UDP regression reproduced the first case before the correction.
  Both cases are now tested, followed by a valid request to verify continued
  service. Original retained in `ServerImpl.cpp.bak_20261007` alongside it.
- `tests/network_smoke.py`: add the FIND parameter regression.
- `tests/vxworks_target_test.py`: add `--information-only` for the current
  configuration without generated download/upload fixtures. Fail on peer
  shutdown errors instead of subsequently reporting full-suite success.
- `tests/current_config_smoke.py`: run that verifier against the host runtime
  using a temporary copy of the shipped JSON, changing only bind addresses and
  ports. The shipped JSON itself remains unchanged.

The restored `arinc_615a_test_tha.cpp` remains byte-identical to its `.bak`.
`dkm.c`, the JSON files, Workbench settings, and existing `.out` are unchanged.
The existing DKM does NOT contain the new FIND correction; incorporating that
correction into a target artifact requires a future VxWorks rebuild and test.

## Startup findings

1. Configuration is FIND `0.0.0.0:1001`, TFTP `0.0.0.0:59`, protocol version
   `Arinc615a34`, target `ARINC_1`, serial `DEMO001`, status interval 1 second,
   DLP retries 2, TFTP timeout 3 seconds and retries 3. Upload uses
   `/sd0a/ARINC/upload`; both download modes use `/sd0a/ARINC/download`.
   These storage paths still need target-side validation for file transfers.
2. `Logging.hpp` defaults to warning level. FIND start, protocol start and
   request-handling messages use INFO; the reviewed startup path does not raise
   that level. A silent console does not establish a stalled event loop.
3. `BuildConfig.hpp` requests a TCP socket-based select interrupter on VxWorks,
   but the saved Workbench build does not reflect that configuration:
   the THA `.d` file includes `pipe_select_interrupter.hpp/.ipp`, and the DKM
   contains `pipe_select_interrupter` symbols. The generated include list and
   visible compile rules do not force-include `BuildConfig.hpp`.
   Thus the saved DKM must not be diagnosed as using the socket interrupter
   merely because that macro exists in the source tree.
4. The bundled pipe interrupter calls `pipe()` and `fcntl()` during construction.
   If the clean breakpoint test stops during initial Asio service construction,
   inspect this path and the actual exception/errno. This is a diagnostic lead,
   NOT a proven failure: the handoff already establishes successful DKM loading.
   Do not change kernel configuration, TLS, or build flags on this evidence alone.
5. `runConfigured()` stores a pointer to a stack-owned runtime in `activeRuntime`;
   its scope guard clears the pointer on normal C++ scope exit. Prefer the
   existing `stopArinc615a`/stop-request path and confirmed worker exit when a
   restart is required. Forced task deletion must not be assumed to perform
   that C++ cleanup. Inspect state before stopping anything or creating a worker.

## Host validation

Apple Clang 17, Debug C++17, bundled dependencies, build directory
`/private/tmp/arinc-local-review-20261007`. No VxWorks DKM was rebuilt.

The socket-interrupter variant (`-DARINC_ASIO_SOCKET_SELECT_INTERRUPTER=1`)
passed the codec/SHA256 self-test and full UDP transfer suite after the fix:

- FIND and invalid-parameter rejection, with continued service.
- Information and retransmission after deliberately dropping a DATA packet.
- Upload with ARINC 665 header and byte-checked 4097-byte payload.
- Media-defined and operator-defined downloads, including completed status.
- Malformed FIND handling.
- Empty, malformed and path-traversal headers rejected.
- Corrupt/truncated uploads rejected; subsequent valid upload succeeds.
- Graceful runtime shutdown.

The build was then reconfigured without that macro to exercise the pipe-based
host path corresponding to the saved DKM's interrupter selection. All three
CTest cases passed: `self_test`, `network_transfers`, and
`current_config_information` (6.95 seconds total). The final output is preserved
in `tests/local-review-20261007.log`, including the shipped-configuration
Information test. These are real host loopback transfers, not mocked networking.

To reproduce on a host with CMake, a C++17 compiler and Python:

```sh
cmake -S . -B /tmp/arinc-host-review -DCMAKE_BUILD_TYPE=Debug
cmake --build /tmp/arinc-host-review -j 6
ctest --test-dir /tmp/arinc-host-review --output-on-failure
```

Tests require permission to bind loopback sockets. They use host temporary
storage and do not access the LS1028A.

## Resume on the target

Locate WRDBG in Windows CMD using the handoff's executable search. After
reconnecting, issue commands one at a time in WRDBG: first `info tasks`, then
`info modules`. Inspect the existing worker before starting any new worker or
reloading a module. Prefer observing the existing runtime and sending a FIND
request if it is already active.

The preserved THA source gives these breakpoint locations; install only the
next required breakpoint for a controlled run, using the actually loaded source:

| Line | Meaning when reached |
| --- | --- |
| 249 | Before FIND server construction |
| 252 | FIND construction returned; inspect `findServer` |
| 256 | Handler/endpoint configured, before FIND start |
| 258 | FIND start returned, before protocol construction |
| 264 | Protocol construction returned; inspect `protocol` |
| 266 | Before protocol start |
| 278 | Protocol start returned, before `ioContext.run()` |

A breakpoint at line 278 proves arrival before the event loop, not processing
of events. Resume before sending network requests.

Once the existing runtime is resumed, run from the project directory in Windows
CMD (replace BOARD_IP with the actual board address):

```cmd
python tests\vxworks_target_test.py --target BOARD_IP --information-only --serial DEMO001
```

This tests FIND, an actual Information transfer and FIND again. It does not
verify upload/download storage or all final acceptance criteria. The full test
suite expects generated fixtures and defaults to serial TEST001; do not run it
unchanged against the current DEMO001 configuration and expect those fixtures.

Still pending: WRDBG reconnection, live task/module state, target startup
checkpoints, actual target network operation, target storage/file operations,
and VxWorks build/load/runtime verification of the corrected FIND source.

## Preserved artifact SHA-256

```text
THA source: f9558515cf7007e859e2037631be3bfb0b71a4728a3bd6343bef8c403fdc0eeb
JSON:       e5331cec4dec9e74003a2cca9589bb003809142b61452f6fae21d11ca1df27ed
DKM:        b13e09024007ecdc4b512f18adab0d2af703f3832c45579551c61dea31cbb84d
```
