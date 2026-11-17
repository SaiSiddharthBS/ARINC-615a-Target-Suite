# ARINC 615A / VxWorks dev-PC handoff

Prepared 7 October 2026. Read this before reconnecting or rebuilding.

## 1. Objective and honest current status

The goal is to demonstrate a running ARINC 615A Target Host Application (THA)
on the LS1028A: configuration loaded, FIND and protocol initialized, event loop
processing requests, and intended transfers completing.

The previous Windows session demonstrated successful original-DKM loading,
worker creation, configuration-file access and JSON parsing. It did not capture
conclusive FIND/protocol/network success. Closing WRDBG did not establish whether
the worker stopped. The last known worker was `t4`; its current state is unknown.

The Mac review repaired the host test build and corrected FIND parameter
validation. Host tests passed for Information, upload, both download modes,
invalid inputs and shutdown. Those results do not certify VxWorks operation.
The FIND correction is not a demonstrated fix for a startup failure.

**No instruction can guarantee an error-free target run before it is tested.**
This procedure preserves the working baseline, gives observable success checks,
and tells you when to collect evidence instead of making speculative changes.

### What the words mean

| Term | Meaning |
| --- | --- |
| DKM / `.out` | Compiled code loaded into the VxWorks kernel |
| `start()` | Entry function that creates the THA worker task |
| Worker / `tArinc615a` | Task executing the THA; direct debugger launches may be named `t4`, etc. |
| FIND | Network discovery request and response |
| Information operation | Network request for the configured hardware/software information |
| `ioContext.run()` | Event loop: normally waits for network/timer events and handles them |
| Breakpoint | Debugger instruction to stop execution at a location |
| `Continuing.` | Debugger resumed execution; not evidence of failure or of network success |

## 2. Know which window receives each command

| Window | Typical prompt | Commands belong here |
| --- | --- | --- |
| Windows CMD | `C:\...>` or `E:\...>` | `dir`, `cd`, `python`, `ipconfig`, build commands |
| WRDBG | `(wrdbg)` | `info tasks`, `info modules`, `break`, `continue`, `task create` |
| VxWorks C interpreter shell | Usually `->` | Existing target functions such as `stopArinc615a` |

Do not type the prompt itself. Do not paste a whole section at once. Issue one
command, read its output, then proceed. PowerShell is not used in this handoff.
If your target shell uses a different interpreter, select the C interpreter or
ask the platform owner; do not assume shell and WRDBG syntax are interchangeable.

## 3. Bring the files to Windows without replacing the baseline

Known Windows project:

```text
E:\WindRiverWorkspaces\ARINC-Open-Source-Lib
```

Keep a separate copy of this Mac folder as the reviewed source package. Do not
overwrite the active Windows project wholesale, especially its Workbench
metadata, build directories, JSON, or original `.out`.

For the first network check, only these updated test files are required in the
Windows project's `tests` directory, together:

- `vxworks_target_test.py`
- `network_smoke.py` (imported by the first file)

Copy this handoff and `LOCAL_REVIEW_2026-10-07.md` too. Preserve any newer Windows
versions before replacing the two scripts. Do not invoke automatic build/deploy
while copying or reconnecting.

The source correction for a later controlled build is:

```text
src/lib/arinc_615a/find/servers/implementation/ServerImpl.cpp
```

Its original is preserved alongside it as `ServerImpl.cpp.bak_20261007`. The
single changed predicate uses `||` instead of `&&` to reject either invalid
parameter count or a nonempty parameter. Do not confuse this FIND file with the
similarly named TFTP server files.

The restored THA `.cpp`, `dkm.c`, JSON and existing DKM were not modified on the
Mac. Host-only build/test changes are described in the local review report.

## 4. Establish the actual network and save session details

Fill these in; previous documentation's example IP addresses are not proof of
the current board address:

```text
Session date/time:
Board IPv4 address:
PC Ethernet IPv4 address facing the board:
Subnet mask:
Workbench target-connection name:
Loaded target image/BSP if known:
WRDBG executable/launcher:
Was the board rebooted since the earlier session? yes / no / unknown
```

Get the board IP from the existing Workbench connection, boot/serial console,
or the platform owner. The PC address can be found with this Windows CMD command:

```cmd
ipconfig
```

Keep a serial/target console visible if available: application output may appear
there rather than in WRDBG. Save debugger text and console output to a session
record. Do not clear existing useful logs.

## 5. Reopen WRDBG and reconnect

**Windows CMD:**

```cmd
dir /s /b C:\WindRiver\wrdbg.exe 2>nul
```

If no result, run this separately:

```cmd
dir /s /b C:\WindRiver\*wrdbg* 2>nul
```

Record all returned paths. Prefer the installed Wind River/Workbench launcher
and existing target connection used in the previous successful session. If an
executable is returned, its quoted full path can be used to launch it from CMD;
some installations require the vendor's environment launcher first.

**The exact launcher, environment command and reconnect syntax are not known
from the saved project.** Do not invent them or assume `wrenv.bat` is under
`C:\WindRiver\vxworks\24.03`. Use the installed shortcut, Workbench connection
workflow or installed help. Reuse the existing kernel connection without choosing
automatic download, reset, restart or launch. If reconnecting is unclear, save
the executable-search result and the connection screen/error for assistance.

After WRDBG is connected to the running VxWorks kernel, proceed below.

## 6. Inspect first — do not create another worker yet

**WRDBG, first command:**

```text
info tasks
```

Save the complete output. Look for `tArinc615a`, `t4`, `tArinc`, or other tasks
whose entry point is the THA. A name alone does not identify an unrelated task;
record IDs and entry functions where available. The old `t4` ID was
`0xffff800000165ad0`, but IDs may change or be reused.

**WRDBG, next command:**

```text
info modules
```

Confirm whether `ARINC-Open-Source-Lib.out` is already loaded. Save the module
details. Do not reload a loaded copy.

**WRDBG, next command:**

```text
info breakpoints
```

The previous session left a Runtime breakpoint, but reconnection may not preserve
it. Inspect what actually exists. Clear or disable only your ARINC debugging
breakpoints when preparing an uninterrupted network test; use installed WRDBG
help/UI for breakpoint-ID deletion if needed. Preserve unrelated breakpoints.

### Choose the matching branch

| Observation | Next action |
| --- | --- |
| Module loaded, one THA worker alive | Inspect its state; resume if deliberately stopped at your breakpoint, then try section 8 |
| Worker waiting, no exception reported | It may be normally waiting for traffic; section 8 is useful evidence |
| Worker stopped at a breakpoint | Record location; resume before attempting a network test |
| Worker suspended unexpectedly or exception reported | Record task, PC, locals and console; use sections 9 and 11 |
| Multiple possible THA workers | Resolve entry functions and IDs before starting or deleting anything |
| Module loaded, no THA worker | Section 7, after checking no other runtime is active |
| Module absent | Section 7's load step, then start exactly one worker |

When `Continuing.` owns the debugger terminal, use its normal interrupt/pause
control before entering debugger commands. Pausing may halt the worker or target;
resume before running the network test. Do not interpret a deliberate debugger
stop as a spontaneous crash.

## 7. Conditional load and start

Only if `info modules` confirms the module is absent, use this **WRDBG** command:

```text
module load E:/WindRiverWorkspaces/ARINC-Open-Source-Lib/Test_Default_VSB_ARMARCH8Allvm_LP64_LARGE_SMP/ARINC-Open-Source-Lib/Debug/ARINC-Open-Source-Lib.out
```

Expected: `Loading module ...done` and a module ID. If loading reports undefined
references, ENOMEM or another error, stop here and save the complete output.
Do not repeatedly load it or interpret a partial load as success.

If there is no active THA runtime and a fresh start is needed, the previously
verified **WRDBG** entry command is:

```text
task create -d start
```

If this launch stops under debugger control, resume when ready:

```text
continue
```

Expected target-console output includes task creation and the THA starting
banner. Inspect `info tasks` when debugger control is available and record the
new `tArinc615a` ID. Missing console text alone is not a failure verdict.

For a controlled Runtime breakpoint test, install the breakpoint in section 9
BEFORE creating the fresh worker. Do not use both start methods for one run.

Alternative previously verified **WRDBG** launch, only when deliberately testing
the worker directly instead of `start()`:

```text
task create arinc615aTask 0
```

This may create a debugger-named task rather than `tArinc615a`. It does not by
itself satisfy acceptance that `start()` created `tArinc615a`.

## 8. First decisive test: FIND and Information

Prerequisites: one running/resumed THA, known board IP, updated test scripts,
Python 3, and a network path between PC and board. This test uses no upload or
download fixture files and does not require modifying the JSON.

**Windows CMD**, each command separately:

```cmd
cd /d E:\WindRiverWorkspaces\ARINC-Open-Source-Lib
```

```cmd
python --version
```

If `python` is unavailable but the Python launcher is installed, try
`py -3 --version`, then use `py -3` in place of `python` below. If neither works,
install/use the site's approved Python 3 interpreter. No pip packages are needed.

```cmd
python tests\vxworks_target_test.py --help
```

Confirm `--information-only` appears. Otherwise you have the old script.

Replace `BOARD_IP` below with the actual numeric address; do not type angle
brackets around it. An optional reachability check is:

```cmd
ping BOARD_IP
```

Ping success does not prove ARINC service, and blocked ICMP does not prove ARINC
failure. The next command is the application test:

```cmd
python -u tests\vxworks_target_test.py --target BOARD_IP --information-only --serial DEMO001
```

Expected final lines:

```text
PASS: T01 FIND answered by <actual board address>
PASS: T02 Information: LCL has DEMO-PN/DEMO001 (one lost DATA packet retransmitted)
PASS: FIND still responds after Information transfer
ALL 3 CHECKS PASSED in ... s (FIND and Information only; upload/download not tested).
```

The deliberate dropped packet tests retransmission, so a short delay is normal.
Immediately after the script returns, run:

```cmd
echo %ERRORLEVEL%
```

Expected `0`. A traceback, `FAIL`, nonzero result or missing final success line
is not a pass. Save the full output, not only the last line.

For a logged repeat, choose an unused filename (redirection overwrites an
existing file with the same name):

```cmd
python -u tests\vxworks_target_test.py --target BOARD_IP --information-only --serial DEMO001 > arinc-information-run01.txt 2>&1
```

Check `echo %ERRORLEVEL%` immediately, then view the log:

```cmd
type arinc-information-run01.txt
```

If the PC has several adapters, repeat with its actual board-facing IP:

```cmd
python -u tests\vxworks_target_test.py --target BOARD_IP --bind PC_IP --information-only --serial DEMO001
```

`PC_IP` must belong to the PC, not the board. `0.0.0.0` in the JSON is a wildcard
bind address, not an address to use for `--target`.

If required, allow the Python executable's inbound UDP traffic on the appropriate
lab network through the approved Windows firewall workflow. Transfers use
negotiated/ephemeral UDP ports as well as initial ports 59 and 1001. Do not disable
the entire firewall to diagnose one test.

### What a pass means

The configured device answered FIND, accepted an Information request, transferred
an LCL containing DEMO-PN and DEMO001, and answered FIND again. The target's
network/event-loop path is functioning for this operation. Confirm the same
worker remains alive afterward. Repeat after a short idle period for additional
liveness evidence; this is not a long-duration stability certification.

It does not establish upload/download success, prove every breakpoint was hit,
or prove the locally corrected FIND source is in the existing DKM.

## 9. Controlled initialization check if still needed

Use this if the existing worker cannot be verified or the network test fails.
Do not stop a proven working worker merely to obtain breakpoint screenshots.
For a clean start, first stop the old runtime gracefully as in section 10 and
verify its exit. If it cannot stop, collect evidence instead of force-deleting it.

With no old runtime active, install this **WRDBG** breakpoint before launch:

```text
break arinc_615a_test_tha.cpp:247
```

```text
info breakpoints
```

It previously resolved to line 249. Addresses can change after a load; do not
reuse hardcoded addresses from the old session. Launch exactly one worker using
section 7, then `continue` if needed. If the breakpoint is unresolved or the
displayed source differs, correct the source/symbol mapping before relying on it.

At a hit, collect these **WRDBG** commands one at a time:

```text
info args
```

```text
info locals
```

```text
info registers pc
```

Inspect `this`/members in the debugger's variable view when locals do not expand
them. Do not infer null pointers from unavailable or optimized-out displays.

Set the NEXT breakpoint and continue to it. Replace the preceding ARINC breakpoint
using the installed UI/help as appropriate; do not accumulate obsolete breaks.

| Next WRDBG command | A hit means |
| --- | --- |
| `break arinc_615a_test_tha.cpp:252` | FIND construction returned; inspect `findServer` |
| `break arinc_615a_test_tha.cpp:256` | Handler/endpoint configuration completed; before FIND start |
| `break arinc_615a_test_tha.cpp:258` | FIND start returned; before protocol construction |
| `break arinc_615a_test_tha.cpp:264` | Protocol construction returned; inspect `protocol` |
| `break arinc_615a_test_tha.cpp:266` | Before protocol start |
| `break arinc_615a_test_tha.cpp:278` | Protocol start returned; before the event loop |

These lines apply to the restored source included in this folder. At line 256,
inspect `configuration.find.localInterfaceAddress` and `findPort`. Inspect
`configuration.dataLoader`, `configuration.version`, and
`configuration.statusTransmissionRate` too. Expected file values are listed below;
debugger inspection confirms what this particular runtime actually loaded.

At line 278, record success, clear/disable relevant ARINC breakpoints, then resume
and perform section 8. Arrival before `run()` alone does not prove event processing.

If a next breakpoint never hits, determine whether the worker exited, is stopped,
or remains running, and capture its current PC and console. A breakpoint installed
after execution has passed it will not be hit retroactively. Do not create another
worker just because the debugger says `Continuing.`

## 10. Graceful stop when a restart is actually required

The DKM already exports `stopArinc615a`. With the worker allowed to run, invoke
this from a separate **VxWorks C interpreter shell**, not Windows CMD or WRDBG:

```text
stopArinc615a
```

Expected first message is a queued stop request. That message is not proof of
completion. Wait for the THA STOPPED banner/result and verify the identified
worker has exited with WRDBG `info tasks` when debugger control is available.
If the worker is stopped at a breakpoint, it cannot process the queued stop until
resumed. If you only have WRDBG, use the installed function-invocation facilities
with assistance; do not substitute shell syntax at `(wrdbg)`.

The source stores `activeRuntime` as a pointer to a stack object and clears it
through C++ scope cleanup. Forced task deletion must not be assumed to perform
that cleanup. This updates the earlier handoff's suggestion to kill a worker:
**prefer the existing graceful stop, and do not unload a module containing live
tasks or callbacks.** If stop fails, preserve state for investigation.

## 11. Failure guide

| Observation | Check next / evidence to save |
| --- | --- |
| No WRDBG executable or failed launch | Search output, installed shortcut and exact launcher error |
| WRDBG cannot connect | Existing target-connection settings and board serial/boot state; do not reboot blindly |
| Undefined references on load | Complete loader diagnostics and exact DKM identity; do not use the earlier invalid kernel-symbol comparison |
| ENOMEM | Exact failing command, task/module inventory and available target memory evidence |
| `already running` | Existing runtime/worker state; do not keep launching workers |
| No FIND reply | Correct board IP, resumed worker, FIND startup, UDP 1001 path, PC interface/firewall |
| FIND passes, Information fails | Protocol startup, UDP 59, callbacks to PC ephemeral ports, ARINC_1, console errors |
| Serial mismatch | Current runtime may use generated TEST001 config or another JSON; inspect actual config before changing expectations |
| `Address already in use` or equivalent | Existing service/worker and port owner; do not change ports merely to hide duplicates |
| THA STOPPED with nonzero result | Capture preceding exception text and last reached breakpoint |
| Silence / `Continuing.` | Test network operation and inspect task state; INFO logs are suppressed by default |
| PC `0xffffffff805bbeb0` | Capture task, PC and exception evidence; this is outside the old DKM text range and previously mis-symbolized |
| FIND construction does not return | Inspect actual saved-DKM pipe interrupter path and runtime error; do not assume TCP loopback or change kernel/TLS |

The saved DKM's symbols and THA dependency file indicate a pipe-based Asio
interrupter, although `BuildConfig.hpp` requests a socket-based one. The visible
Workbench build does not force-include that header. Both paths passed host tests;
neither proves the target's `pipe`/`fcntl` or loopback behavior. This discrepancy
is a diagnostic lead, not permission to replace the known-good build settings.

Optional Wireshark evidence: capture on the PC adapter facing the board. Use a
display filter `ip.addr == BOARD_IP && udp` after replacing BOARD_IP. Filtering
only ports 59 and 1001 would miss negotiated transfer ports. Look for outgoing
FIND, an incoming response, the Information exchange, and follow-up FIND. Save
the capture with the script output. Do not label a timeout as an application crash
without evidence distinguishing network delivery from task execution.

## 12. Configuration expected for the first test

| Setting | Value |
| --- | --- |
| Target JSON path | `/hostfs/ws/ARINC-Open-Source-Lib/arinc615a_test.json` |
| FIND bind | `0.0.0.0:1001` |
| TFTP initial bind | `0.0.0.0:59` |
| Protocol version | `Arinc615a34` |
| Target ID / FIND hardware ID | `ARINC_1` / `ARINC` |
| Information serial / part number | `DEMO001` / `DEMO-PN` |
| Status interval | 1 second |
| TFTP timeout / retries | 3 seconds / 3 |
| DLP retries | 2 |
| Upload directory | `/sd0a/ARINC/upload` |
| Download directory, both modes | `/sd0a/ARINC/download` |

## 13. Later: build the correction and test all transfers

First establish and save baseline runtime evidence using the currently loaded
module where possible. Do not rebuild merely to reconnect.

When ready for a corrected target build:

1. Preserve the original `.out`, build log and original source outside the output
   directory. Confirm the worker stopped before any unload/reload.
2. Apply only the reviewed FIND predicate correction to the Windows source.
   Preserve the restored THA and existing Workbench/VSB settings.
3. Use the existing managed Workbench Debug build with the matching VSB. The
   previously successful invocation, in the correctly initialized Wind River
   build environment and project directory, was:

   ```cmd
   make --no-print-directory BUILD_SPEC=Test_Default_VSB_ARMARCH8Allvm_LP64_LARGE_SMP DEBUG_MODE=1 TRACE=1
   ```

4. Save the full build output and new artifact timestamp/hash. Replacing a file
   on disk does not replace a module already loaded in target memory.
5. Use the established Workbench unload/load workflow only after worker exit;
   exact unload commands are not assumed in this handoff. Check for load errors,
   launch once, and repeat section 8 against the newly loaded module.

For full upload/download acceptance, follow `VXWORKS_TEST_PROCEDURE.md` only after
reviewing its fixture preparation against the actual target filesystem. Its full
suite uses generated `TEST001` fixtures, whereas the current JSON is `DEMO001`.
Do not run the full suite unchanged and expect its fixture files to exist.

Fixture preparation can empty its upload test directory. Use a dedicated test
root with no valuable files, verify the mounted writable storage, and stop the
current runtime before starting a fixture-configured runtime on the same ports.
Confirm task option constants and stack settings against the actual BSP rather
than copying an example taskSpawn value blindly. Retain the original JSON.

Once the dedicated fixture runtime is prepared and running, the full-suite CMD
invocation is (no `--information-only`, and TEST001 is intentional):

```cmd
python -u tests\vxworks_target_test.py --target BOARD_IP --serial TEST001
```

Require every check to pass, exit code 0, and target-side upload verification via
`arinc615aVerifyTestUpload` for that same fixture root as described in the existing
procedure. Preserve logs and any packet capture. A passing Information-only test
must never be reported as passing upload/download acceptance.

## 14. Acceptance record and what to send back

Mark only items observed in this target session:

- [ ] WRDBG reconnected to the correct board.
- [ ] Loaded DKM identity recorded; no load/unresolved-symbol/ENOMEM error.
- [ ] Exactly one intended THA runtime; task ID and launch method recorded.
- [ ] `start()` created `tArinc615a` if validating that entry path.
- [ ] Correct configuration established for this run.
- [ ] FIND/protocol initialization established through breakpoints or operational evidence, with the method recorded.
- [ ] Information-only test prints all 3 PASS results and returns 0.
- [ ] Same worker remains alive after testing.
- [ ] Upload/download tests completed, if claiming full transfer acceptance.
- [ ] Corrected source built/loaded on VxWorks, if claiming validation of the fix.
- [ ] Target console, debugger output and test logs retained.

If any stage fails, send: last successful step, exact next command and complete
output, `info tasks`, `info modules`, `info breakpoints`, selected task/PC where
available, target console, actual board/PC IPs, and the test log. Do not send
passwords or credentials. State whether a rebuild/reload/reboot occurred.

Suggested accurate success statement for the first milestone:

> The LS1028A THA answered FIND, completed an Information transfer containing
> DEMO-PN/DEMO001, and answered FIND afterward. The test returned 0 and the worker
> remained alive. Upload/download verification is [pending / separately recorded].

Related records: `LOCAL_REVIEW_2026-10-07.md`,
`tests/local-review-20261007.log`, and `VXWORKS_TEST_PROCEDURE.md`.
