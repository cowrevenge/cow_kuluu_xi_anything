# One pass to 100%: work log

The record of the "one pass" session (cloud sandbox, 2026-11-17 to 2026-11-18): what was found, what was
changed and why, and what is still open. It is a reference so the work survives the session. Nothing in this
folder is live machinery: the code changes sit in `wip.patch` and reach the tree only through a
panel drop and `tools/cow/commit.py`, as always.

## Ground rules this work runs under

- The judge is `tools/cow/cowdiff.c`. Gold = PASS, at least 100 clean states, every site reached in a clean state.
- Any change to `judge2.JUDGE_FILES` means a new judge id and one re-judge. All judge changes go out in ONE drop.
- No "unreachable" exemptions. Every site is readable code, so every site gets a state that reaches it.
- No file goes to the user until the sample is at 100%. One drop, one re-judge.
- Root-cause fixes only. Each fix below names the unit that showed the bug.

## Timeline

### Phase 0: inputs (start of session)
- The user supplied generated/, the Ghidra dump, build/cycle, the retail DLL, the Cow panel and the Grind13 installer.
- Built a Linux harness so the judge runs here: `linshim.py` (signals in place of SEH), image objects with
  `-DCOW_TICK_MEMORY`, `linprove.py`, and `lin_lift_proof.py` (lift_proof's main with gcc).
- Measured baseline: the ledger had 20195 units, 16940 gold (45.5% of code bytes).

### Phase 1: judge 14 (already on main as df25fa76)
- Same-crash coverage, inconclusive overflows, a switch jump is not a tail call, 512 states per row.
- The aim (`tools/cow/aim.py`): seek driven at the sites the judge misses, round after round.
- docs/cow/SITES.csv.

### Phase 2: block entry (in the patch)
- A state can start at any block (`--pin-entry`). Side A gets `CE_<addr>` labels plus a switch on
  `cow_entry_at`. Side B (rise unit) gets `COW_AT(addr)` labels, a `COW_BLOCK_ENTRY` switch, and
  `cow_entry_fix_<entry>()`, which puts the guest in the shape the unit assumes at that block.
- `CowBatchRow.entry_fix`. The aim adds two entry states for every block with unreached sites.
- Seek's start-at-block drive picks the block's own inputs (`to_state` sets `entry`).
- Selftest rows: dead / deadentry / deadentrywrong.

### Phase 3: seek capacity and solver
- Float translation to z3 Reals; masked self-loads (`x = f(x)`); deep-fold loop values; args as memory.
- Indirect calls carry `sure`. Only a pop count the code proves is answered (`pop_forced`, vslot agreement).
- Capacity: PIN_STATES_MAX 512, PIN_WRITES_MAX 256, PIN_STUBS_MAX 32, PIN_ANSWERS_MAX 64, PIN_SRC_MAX 16384.

### Phase 4: rise fixes found by real FAILs
| unit | symptom | root cause | fix |
|---|---|---|---|
| (32 of 127 refusals) | esp-off / ret / tail refusals | pop counts guessed | `solve_pops`: z3 over the frame |
| 10262020 | callee-saved esi differs | original pops esi itself, unit never restored it | `saved_by_original()`: push/pop pairs in a function that calls restore `g->reg = in_reg` at exit |
| 100b5210 | eax upper bytes differ | a value loaded from a frame word was re-read AFTER the word was overwritten | `slot_write` binds live loads of that word to a temp before the store |

### Phase 5: judge 15 (in the patch; one more judge id, ships in the same drop)
| unit | symptom | root cause | fix |
|---|---|---|---|
| 10262020 | esi/esp differ in fuzzed states | a made-up object's method popped 12 bytes for a 4-byte call: the original came back off its own frame | `ret_pop1` row field (from `callee_purge`). A state where side A returns with esp not at sp0+4+N is set aside like a fault: counted, never compared. Decided from side A only. |
| 102dbe10 | B faults, A does not | sandbox regions were contiguous: a heap overrun ran into the stack and through the original's locals | 64 KB uncommitted guard granules around arena, repair heap and stack |
| 1005f820 | st0 differs | the harness answered `_ftol` without popping its x87 operand | `judge2.x87_delta()` (path walk over the generated sites, callees counted, tail calls through pointers count 0). Callees that change the x87 stack are never answered; they run |

- Selftest rows added: brokeframe (PASS), brokeframe0 (FAIL eax). judge2 selftest: x87 cases.
- Debug aids in cowdiff.c (off by default): `COWDIFF_TRACE_STATE=N` traces any state, prints both sides'
  esp/eax/last access, x87 top/st0, and a side B block trace when a unit is built with tracing COW_AT.

### Phase 6: seek reach
| unit | symptom | fix |
|---|---|---|
| 100f0840 | site after `call eax` never reached | `call reg` where reg was loaded from memory gets the same slot treatment as `call [mem]`; a slot only decided as "some object" may take the function address |
| (all) | failing states lost between rounds | aim keeps them in `build/aim/seeds_fail/` |

### Phase 7: what OneP1 (judge 14) cost on the user's machine, and why (2026-11-18)
Ledger at 585b8107 (before) vs 0cd6db0a (after): +116 gold units, but code bytes fell.
| loss | count | cause | fix |
|---|---|---|---|
| gold -> silver | 301 | grind golds (12000+ states) re-judged at 2000 states after the new judge id | cycle step 3b `regold`: units gold under an earlier judge are re-judged at the depth their gold took, before publishing. 10007860/1000f420/10028ba0 back to gold at 40000 states |
| gold -> fail | 179 | mostly judge-14 harness faults; 12 sampled: 9 pass under the newer judge, 2 real Ghidra-lift bugs rise lifts gold (1009d0d0, 102f0914), 1 needed a seek state (1005e1a0) | all 12 back |
| (both) | ? | `g_pin_stub_calls[8]` while PIN_STUBS_MAX went to 32: a state with 9+ answered callees overwrote `g_active_pin` by one byte; side B then ran real callees where A got answers | array sized PIN_STUBS_MAX |

Other fixes in this phase:
- x87: answered callees now DO what the callee does to the x87 stack (row table `x87`, `judge2.x87_delta`
  path walk) instead of being excluded. Only callees whose count cannot be told run for real.
- rise printer: `(uint16_t)a * (uint16_t)b` and `(uint8_t)x << 24` are int arithmetic in C (overflow is UB);
  narrow left operands of `*` and `<<` are cast to uint32_t.
- seek: the critical-section imports get a zeroed, unowned CRITICAL_SECTION (10261640: no clean state -> 81/85).
- Gold regression check: 60 units gold on main, all gold under the sandbox judge. This check now gates every drop.

### Phase 8: the last sample units, and the drop (2026-11-18)
- judge2: callee_purge follows tail calls; CRT table shims are pop 0 when every caller cleans up; the x87 walk
  settles a float result through a pointer call by the ABI (unknown x87 counts ~2500 -> 159 functions).
- seek: critical-section imports get an unowned section; `call reg` slots; index words decided (`settle`);
  dest-src copy loops; L._argw set as rise's own lift does; a caller cleanup a few instructions after a call.
- rise: `cleanup_after` (add esp after a call beats the vtable guess); block-entry fix sets the known part of a
  register (`_known_part`).
- aim: states belong to the text they were built for (`unit` key, fresh_only retry); block-entry inputs go
  where the fix reads them (`_as_the_fix_reads`); census round is not a stall; failing units with a newer
  rise text are aimed; old states first, new ones appended.
- judge: every state's seed is its own (random states numbered among random states), so added pins never
  renumber what random states found (102a64f0: 249 -> 210 with new states, 267/267 with this).
- Sample: 47/50 gold. 60 gold-on-main units: 60/60 gold.
- Open: 100426f0 (callee drives a D3D device through COM; needs a device model), 1003d220 (coverage still
  growing), 1020ebf0 (FAILs only after 10256ad0 in the same Linux chunk: host-side state leaking between rows,
  possibly specific to the sandbox's Linux harness; not reproduced on Windows yet).
- Drop: OnePass2.zip (judge 15, regold with regold_extra.json from the 585b8107 ledger).

## Measurements (50-unit sample of silver/weak units, `/home/claude/work/sample2.txt` in the sandbox)
- Start of session: 0 gold.
- After block entry + aim: 30 gold, 14 silver, 5 weak, 1 fail.
- After the phase 4-6 fixes: 33 gold, 12 silver, 3 weak, 2 fail (the 2 fails are old ledger rows not yet re-judged).
- The six units that FAILed on real differences: all PASS now (10262020, 102dbe10, 100b5210, 1005f820 gold or silver;
  100f0840, 100f2a70 gold).

## Open, in order
1. Coverage gaps on silver units: entry states fault on garbage pointers in frame words and in the
   callees they call (100b5210: 55 of 86 pinned states afault). Entry states need their frame pointers and
   the callees on the path laid down the way seek lays them down from the entry.
2. Entry-state `call reg` where reg is a block input (free atom): give it a fake function too.
3. Units whose every state faults in the original (100426f0) and the two 0/0 rows (10261640, 10308374).
4. rise refusals: esp-off CRT fragments, non-frame esp, x87 depth, probes.
5. Non-rise silver/weak/fail units: relift with rise.
6. Then the drop: one zip for the panel, installer modeled on Grind13 (manifest against main, stop line,
   install, z3, selftests, commit.py --machinery, cycle).

## Note on main moving
main had its own commits since this session started (judge 14 drop df25fa76, scoreboards). The patch here is
against 0cd6db0a. The drop is always rebuilt against the latest main before it goes out.

## Phase 9 (2026-11-18, after OnePass2 went in)

- Judge chunks were dying whole (every row after one bad row lost, "not judged"). Three causes, all fixed at root, sandbox only so far, for the next drop:
  - cowdiff.c: a state never starts a real thread. CreateThread inside a state is answered by the harness (logged, fake handle, thread id written). 0x10265d00 started 0x10265cd0 on a fuzzed `self`, the thread faulted outside every guard and ended the process.
  - runtime/portable/gwin.c: cow_walk decommits pages a run created instead of memsetting them. A fuzzed operator new of 2.9 GB (0x101a07e0) left 2.9 GB resident per prover after every restore; two provers side by side got OOM-killed. Peak 3.5 GB -> 208 MB, verdict unchanged.
  - runtime/portable/k32.c: ExitProcess asks the fatal hook first (as ExitThread already did). 0x10320be7 reached _amsg_exit -> ExitProcess(255) and ended its chunk. Now gold.
- rise.py import_args: shim bodies parsed by brace matching. A one-line shim swallowed the shims after it, so Enter/LeaveCriticalSection and 168 other imports had no known pop count and rise guessed (0x10265d00 popped edi from the wrong slot). Known imports 126 -> 291 (0 changed, 170 gained). 306 non-gold functions call one.
- Checks: g60 still 60/60 gold, judge selftest OK (57 rows). nu24 sample: all 24 judged now (was 10). imp40 sample (non-gold callers of the gained imports): 9 gold of 35 lifted.
- Origin note: worklog pushes to main from the sandbox made the user's commit.py push fail (not a fast-forward). No more pushes from the sandbox; the next drop carries the worklog.
- kobj.c/k32_io.c: the handle table and the named-object table are now world the harness puts back (k_cow_save/restore, k32_cow_save/restore, called from snap_save/snap_restore). Side A's CreateMutexA got 0x100 and side B 0x104 (0x10113d30, "memory" fail); now gold. Handles a run opens are closed, ones it closed come back. judge2 JUDGE_FILES gains kobj.c, k32_io.c, k32.c. Mock gets empty stubs.
- After both: imp 9 -> 12 gold of 35, nu24 6 -> 8 gold, g60 60/60, judge selftest 57 rows OK, judge2 selftest 64.

## Phase 10 (2026-11-19, OnePass3c in: judge 16, commit 05920b7ff pushed)

- OnePass3 and 3b stopped at the merge check before changing anything: git's "could not open directory" warning (stderr, merged by P.run) was read as a dirty file. 3c reads stdout only, skips a missing folder, and was tested against clones with the folder missing / identical / different. It merged, installed, passed, committed and pushed.
- rise solve_pops: call-site guess for every unknown call (no `add esp` after -> the words pushed in the block since the last call). 0x1004e8d0's `call [edx+0x50]` was solved as 0, then 64; now 12.
- rise solve_pops: the x87 stack depth joins the same z3 system (a variable in {-1,0,1} per call with no xdelta, one depth per block, ret/tail = the function's result 0 or 1); x87 refusals now go to it too. 0x1004e8d0 (15 KB) lifts.
- All 136 no-unit functions refused for frame shape relifted: 43 now lift, 107,910 bytes (6.2% of code). Left: 32 CRT x87 fragments entered mid-frame ("ret with esp off (44)", 680 bytes), 10 esp differs (27 KB), tail jumps off by N.
- rise solve_pops also models the stack probe (`mov eax, N; call __chkstk`: esp -= N) and `and esp, -16` (a free aligned base); both made it return None before. 0x1017de20 (13 KB) and 0x101b00b0 (4 KB) lift. Now 48 of the 136 shape-refused functions lift (~125 KB).
- Judged so far (37 of the first 43, sandbox, one seek pass, no aim): 4 gold, 12 silver, 11 weak, 10 fail (6 st0, 3 no clean state, 1 callee-saved). The st0 fails are few states each (0x1004e8d0: 2 mismatches, 536 clean): suspect the x87 choice is ambiguous where a +1 and a -1 cancel on one path. Next: read xdelta off direct callees' own bodies so fewer calls are unknown.
- Left refused: 1000e250 (frame unsat, 260 bytes apart), exit()-style callees that never return (1027d6e0, 10102340, 103185ec), 32 CRT x87 fragments entered mid-frame.
- Sandbox lesson: never wait blind on a captured subprocess; chunks now write their output to /tmp/<tag>/cN.out as they go.
- OnePass3c on the user's machine, 1.8 h in: 46.9% proven (was 44.4% published), regold gave 333 back, grow 1,417 new gold, step 6 judging 3,886 rise lifts (first 920: 20 gold, 366 silver, 221 weak, 302 fail). Aim and grind not reached yet.
- solve_pops: calls of one direct target share one x87 variable; the function may take x87 inputs (x_ret in -4..1, depth down to -4), a deviation from a call's own guess costs 2, an odd x_ret costs 1. Still 48 of 136 lift; 4 gold / 12 silver of the first judged set hold (one silver, 0x10153310, text unchanged, now fails `call args` in 3 states under a different seek state set: a latent mismatch, not this change).
- THE st0 FAILS ARE NOT THE SOLVER. Root cause read off 0x102f182d: `fild; fmul; fld; call 0x10312cd0` is _CIpow, which TAKES two x87 values and GIVES one. rise knows a callee's x87 effect only as a net number (xdelta), which is None for it (deep calls), and a net -1 cannot say "takes 2, gives 1": the unit hands over one value and loses the result. NEXT: a callee x87 signature (takes, gives) in Image.info, read off the entry (values read before any is pushed) and the exits; the call hands `takes` values and takes `gives` back. The CRT's _CI* family and compiled helpers both need it. Expect it to move the "lifts; judge: st0" (0.9%) and part of "fail" buckets too.
- OnePass4 (rise.py + this log only; judge id unchanged, so nothing is re-judged; the cycle's rise step reruns because the rise stamp changed). To be run after OnePass3c's cycle says CYCLE DONE.

## Phase 11 (2026-11-19): OnePass3c's aim hung

- OnePass3c's cycle reached 47.44% (16,102 gold), then aim round 1's seek sat on function 3,264 of 3,265 for 5.3 hours. The function's time budget is only asked for between drives; a drive that never returns is never asked.
- seek.py: a hard clock per worker (COW_SEEK_HARD_SECONDS, default FUNC_SECONDS_MAX * 1.25 + 120 = 1,620 s). Past it the worker names its function in <out>/hung.txt and ends itself; the run gives that function up ("hung: over the hard time limit"), names it, and deals the rest out again. Tested with a forced hang.
- Which function hung and why is not known yet: the next run prints its name. OnePass4 (rise only) was not run: held until the takes/gives x87 fix is in.

## Phase 12 (2026-11-19): the judge wrote junk folders into C:\

- OnePass5's cycle reached 72.054% (18,273 gold). Seek's hard clock fired once: 0x102c69ef (seek.ev on an expression too deep to evaluate as a tree; contained by the clock, its root fix is next).
- THE BUG: empty folders with 1-3 byte non-ASCII names in the root of the user's C: drive, in bursts of 10-13 (one per prover), the same bytes run after run. Root cause read off the code: inside a state the runtime's file shims do what they are asked for real; on a Windows host vfs_host_path maps the guest path straight to the host path, and a relative name is joined to the guest cwd, which starts at C:\ (vfs.c g_cwd). A fuzzed pointer read as a name made a folder. The same path could have deleted, moved, truncated or written any file a fuzzed string named, and written the saved registry. Not seen in the sandbox: on Linux an unmounted guest path fails before the host is touched.
- JUDGE 17 (cowdiff.c): inside a state the harness refuses every call that changes the disk or the saved registry: CreateFileA/W unless it opens an existing file for reading only, DeleteFileA, CreateDirectoryA, RemoveDirectoryA, MoveFileA, CopyFileA, SetFileAttributesA, SetCurrentDirectoryA, WriteFile, SetEndOfFile, FlushFileBuffers, RegCreateKey(Ex)A, RegSetValueExA, RegDeleteValueA, RegDeleteKeyA. Answer: failure, last error 5 (access denied), the call's own pop count; the same on both sides.
- Selftest row "disk": a unit that calls mkdir, delete and create-for-write must PASS with the mock dispatching none of them (the harness answers), and its answers are checked by hand. A deliberately wrong pop count fails it (checked).

## Phase 13 (2026-11-19): 72% -> on to 100: what keeps the rest from gold

- OnePass6 (judge 17, the disk fix) was built but not run: the user wants the disk fix to ride with progress.
- Read the published WHY.csv (72.054%): of the bytes not gold, 52% are silver/weak (states miss some
  instructions), 12% no clean state, 7% memory, 6% rise refusals (esp), the rest small.
- A sample of 30 near-gold silver units (miss 1-6 sites), judged with COWDIFF_UNREACHED: the missed site is
  the instruction after a call in 20 of 29. Three causes, each fixed at its root:
  - judge2.dead_sites + cowdiff.instrument(dead=): instructions that only follow a call which never returns
    (libjpeg's error_exit, longjmp) are not sites. Control flow read off the generated body in address order;
    a body that runs off its end, or jumps through a register, has nothing dead; only runs that start right
    after a noreturn call. 18 functions, 84 sites in the image. (cowdiff.py joins JUDGE_FILES.)
  - judge2._gamecore_slot: the 142 gamecore table thunks (`mov eax, [0x10456a2c]; jmp [eax+K]`) pop 0
    (specs/gamecore-slots.files.txt: every slot is __cdecl). The table pointer is 0 in the judge's world, so
    every call faulted; now they can be answered like any other callee.
  - seek: `call reg` where the register is an INPUT of the state (a block-entry state) gets the function in
    the input itself (trivial function or a fake stub), placed before the inputs are.
- Sample result: 11 of 30 near-gold silver went gold (2 dead sites, 4+2 gamecore/stub, 3 call-reg). Left:
  CreateFontIndirectA return (import), `call ebp` with a trivial fn, branches the states do not take.
- No-clean-state sample (20 functions, rise lifts, one seek round): 12 still none. Seen: an import with no
  shim (USER32!GetKeyboardLayout: FATAL), a callee answered beyond STUB_CALLEES, a string pointer from an
  unanswered callee. Not fixed here.
- Checks: g60 60/60, 38/38 gold units that call gamecore thunks stay gold, judge selftest OK (disk row),
  judge2 selftest 64.

## Phase 14 (2026-11-19/20): the bench, and the fixes it pointed at (judge 17, OnePass8)

- THE BENCH (sandbox, /home/claude/bench): 150 non-gold functions drawn by size (cap 6 KB weight) from the
  published WHY.csv (72.054%); for each, the GitHub unit and rise's lift, judged, then aimed seek rounds; the
  best tier counts. Projected total = 72.054 + 27.946 * (bench bytes gold / bench bytes). Baseline (the code
  the user had, one aim round): 73.93%. That said small fixes do not reach 90%.
- What stopped units, read off the bench's unreached sites: 517 runs of missed instructions; 181 began right
  after a call, 112 mid-block (the state died there), 192 on a branch arm. The states die; the code is fine.
- BIG FUNCTIONS WERE CAPPED: a row held 512 pinned states (cowdiff.c PIN_STATES_MAX) and seek made 128 a run,
  for functions of 2,000-7,000 blocks. Now 1536 per row (PIN_SRC_MAX 49152; aim/cycle PIN_MAX, lift_proof),
  seek makes up to 1024 for a function with that many blocks left, starting each missed block directly first.
  0x1008f740 (12 KB) weak 68% -> GOLD; 0x10057fb0 (23 KB) 57% -> 99.6%; 0x10005a40 67% -> 98%, in two rounds.
- RETURN SITES ARE BLOCKS (rise build_cfg): the instruction after every call starts a block, so a state can
  start there when the callee dies in the judge's world. Same refusals as before on 40 functions tried.
- THE CLOCK THROUGH A POINTER (cowdiff.c pinned_clock): QueryPerformanceCounter, GetSystemTimeAsFileTime,
  GetSystemTime, GetLocalTime answered from the state's stream inside a state. 0x102750b0 (the game timer)
  stored the counter's low word and every caller FAILed `memory` on it (0x1026f920: fail -> gold).
- x87: (rise) a callee is handed every value it reads (callee_xtakes: _CIpow takes 2, leaves 1), bottom first,
  and gives back takes+delta values in order; a block-entry case pops the function's own pushed values off the
  guest's stack after reading them (st.xd); (rise + judge2) the CRT intrinsic dispatchers _cintrindisp2/1
  (0x1031dd70: -1, takes 2; 0x1031ddae: 0, takes 1), followed through `mov edx, T; jmp D`. Bench st0 FAILs:
  14 -> 6 gold, 6 silver, 2 other.
- rise: an argument word whose address is handed to a callee (`lea edx, [esp+0x10]; push edx; call`) is memory
  from then on (0x10252c50: fail -> gold).
- seek: drives with the lift's own frame mode and attempt (rise.lift_cfg), and a stub's argument count is
  what the unit passes at that site (rise.EMIT_NARGS): a register save had been counted as an argument and the
  judge compared a word nobody passed (0x1008e9a0: call args FAIL -> silver).
- THE IMPORTS THE JUDGE DOES NOT LINK (user32.c, ws2.c, d3d8.c, dinput.c need SDL/sockets/devices): "no shim
  yet" ended every state that called one. tools/cow/mk_import_pops.py writes tools/cow/judge_import_pops.h
  (119 imports, the words each pops, from the shims' RET counts or the Win32 ABI); inside a state cowdiff.c
  answers them from the state's stream. 0x10008020 (GetKeyboardLayout): no clean state -> gold.
- seek: a read or write in the null page is a dead end (the branches before it are tried the other way),
  including the string instructions' esi/edi; a word the function stored is made an object through what it
  stored. No-clean-state sample of 20: 12 -> 6.
- seek: Model.ev evaluates each subexpression once per evaluation (0x102c69ef's 5.3-hour hang: 32 s now).
- cowdiff.c entry_arm: a block-entry fix that leaves esp on no committed page starts the state at the entry
  instead (0x100311a0 ended its chunk).
- Checks: judge selftest OK (disk row), judge2 selftest 64, g60 60/60 (before the last changes; rerun in the
  drop's own check).

## Phase 15 (2026-11-19/20): silver to gold, seek and x87

- seek starts a state only at a block the unit has a `case` for; others are driven to from the entry
  (0x1009ee60: 154 of 182 states had run from the entry with the block's registers).
- x87 count of a call through a pointer: credited +1 when the code after it pops below its depth (the ABI
  allows 0 or 1). judge2.x87_delta and rise.callee_xdelta now apply the same rule, so the harness's stub
  and the lift agree (0x100aaef0 is 1; 0x100a6240's fnstsw read TOP one too high).
- seek: a branch that reads `[arg + answer]` with the answer an object can revise the answer and decide the
  bytes it then reads (0x10076ab0).
- rise: when the return from a direct call meets another path with a different esp, that call never
  returns (exit()); the path ends there and the lift starts again (0x1027d6e0).
- frames over 4 KB: pin region `deep` (512 KB below the entry esp) and seek's FRAME_DEEP
  (0x100311a0: 867 -> 1264 of 1849 blocks).
- seek drives with the call cleanup rise's scan settled on (0x100f9eb0, 0x102f6c31: "esp differs").

## Phase 16 (2026-11-20): after OnePass8 (79.37%)

- judge build: every block start of a lifted unit (COW_AT) is a watchdog tick, so a loop of ours that
  touches no memory is bounded by the row budget instead of hanging its whole chunk (0x1031bb89).
- seek: a 32-bit div/idiv is a condition, the divisor != 0 (0x10057fb0: every state started at 0x100585b0
  divided by 0).
- seek: drives run on the call cleanup the unit was EMITTED with (rise.EMIT_POPS), and an indirect call on
  that count is sure: both sides go on with the same esp (398 of 1174 functions stopped on "an indirect call
  whose cleanup the code does not say" in OnePass8's first aim round).
- seek: a drive or a block start that reached its target and dead-ended after it (null page) keeps the
  state (0x10165070: 1266 -> 1273 of 1273 blocks, gold).
- seek: a callee's answer used as a length or index can be revised, and the bytes it then reads decided.
- rise: indirect calls through the same global object's slot share one cleanup (0x1017de20).
- aim: a unit that stopped moving is tried again when seek.py or rise.py changed.

## Phase 17 (2026-11-22): OnePass10, 2.1 - the aim was aiming at almost nothing

- aim: the two keys are split. A site list is now compared with lift_proof's OWN `sites_key` (4 fields: judge,
  unit, seeds_auto, seeds), called through `states_key(e)`, not copied. The stall memo keeps
  `states_key + tools_sha + the text judged`, and aim.py's own sha is inside `tools_sha`, which releases the
  units the broken pass stalled in `build\aim\state.json` without hand-editing the memo. Before: with 5 fields
  against the header's 4, `site_list(e)[0] == key(e)` was never true, so every round re-ran the census, `aimed`
  kept only the `fresh_only` units, and the rest were marked `stall=STALL_ROUNDS` and left aside (OnePass9
  step 7: 812 units, 361 aimed, round 2 "18 units (794 left aside: stopped moving)"). After, dry and read-only
  (`python tools/cow/aim.py --census`): 20,323 of 20,724 site lists recognised as their unit's current states,
  401 legitimately stale (the unit's text changed since: judged once again); of 656 candidates, 302 AIMED now
  and 269 after a census round, 85 left aside because every site is reached (the grind's lane), 0 held by the
  stall memo. `python tools/cow/aim.py --selftest` writes a list through lift_proof's `write_sites`, reads it
  back through `site_list()` and fails if the header and `states_key` ever drift apart again, so this cannot
  come back silently.
- next: 2.3 (drop the pinned state a try FAILs at and re-judge the rest) and 2.4 (the per-unit outcome file
  why_table reads). 2.2 is held for the AuditFix drop, which is not in `$HOME\Downloads` yet.
- aim (2.3): a try that FAILs on one of its OWN new pinned states sheds that state and judges the rest again, up
  to 8 times, instead of throwing every state seek made for the unit away (OnePass9 round 1: 294 of 353 FAILed,
  101 of them silver/weak, 1.71% of the code). `first_state` is counted the way the harness numbers pins
  (cow/seeds first, then the merged file: tools/cow/cowdiff.py:load_seeds), so a FAIL at a hand-written state or
  past every pinned one is the unit's and sheds nothing, as before. Each dropped state goes to
  `build\aim\seeds_fail\<entry>.json` with the judge's why, and the kept states file is written clean.
  `--selftest` stands in for the judge and covers all three cases.
- why_table (2.4): aim writes `build\aim\outcome\<entry>.json` each round (aimed or not and why, seek states,
  seek exit, try verdict, states shed, kept), and SITES.csv reads it: "not aimed: ...", "seek gave no states:
  ...", "aimed states FAILed at state N: ...", "new states never ran: row budget". "seek made a state for it;
  the judge's run went elsewhere" is left for the one case it was written for: a KEPT state built for that block
  that did not reach it. Before, 23,970 of 26,720 missed sites carried that sentence; today they say the truth
  first ("the aim has not reported on it yet", 26,767 sites / 480 units) until the next aim pass fills it in.
- next: 2.2 with the AuditFix drop (`$HOME\Downloads\AuditFix.zip` is not there yet), then the cycle.
