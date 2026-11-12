# SYSTEM 2: the conveyor

Brief for the conversion agent. Repository `D:\projects\ffxi_disassembly\Cow_kuluu_xi_anything`, branch `main`.
This replaces `docs/cow/LOOP.md` for machine conversion. Read all of it once, then do the phases in order.
Every command is run from the repository root.

## 0. The short version

- The loop did not stall because the conversions were bad, and not because you worked badly. It stalled
  because the judge (`cowdiff`) was wrong in both directions at once: it failed correct code and it passed
  code it had never checked. One harness bug produced the whole 136-unit cluster. Section 1 has the evidence.
- This delivery repairs the judge (judge v2) and replaces one-unit-per-turn conversion with a production
  line, `tools/cow/conveyor.py`: the local model drafts units, the judge proves them a batch at a time, only
  what is proven is kept, and the line commits by itself.
- Your job changes. You do not convert units by hand and you do not investigate individual failures. You
  install the system, run the baseline, start the line, and keep it running: read four numbers, turn five
  knobs, and improve the prompt when a pattern of failures shows what the model misunderstands.
- The number that matters is the PROVEN C line of `docs/cow/SCOREBOARD.md`. It must go up every day. The
  goal is 1% of the code bytes a day. A day at 0 is a problem to solve that same day.

**System 2.1 (2026-11-12).** Four things changed after the first day. Section 13 has the evidence and the
ruling on that day's stop. Where an older sentence of yours disagrees with this file, this file wins.

- The prover made working rows look hung (it never read the harness's error output, and the harness
  blocked on it). Fixed. A batch that took 38 minutes should take a few. `hang` now means hang.
- The audit counted changes that no caller can see as failures of the judge. Rebuilt (section 8.4).
- Nothing waits for the USER any more. Rule 10 is rewritten.
- Your routine is one command, `python tools/cow/conveyor.py watch`. Rule 12 is rewritten.

## 1. What was wrong, with the evidence

### 1.1 The harness leaked the heap between its two runs (the 136-unit cluster)

For each state the harness runs side A (the original), puts the world back, runs side B (the unit), and
compares. "Puts the world back" restored the image, the arena, the stack and the TEB. It did not restore
the guest heap, and it did not restore the allocator's own bookkeeping in `runtime/portable/gwin.c`.

The cluster units register static destructors: `push <dtor>; call 0x103134c6; pop ecx; ret`. `0x103134c6`
is the C runtime's `atexit`, and the `_onexit` behind it asks `_msize(table)` and, when the table is full,
calls `realloc(table, size + 16)`. After `DllMain` the table is full. So at state 0 side A grows the table
(the reallocation's call chain pushes the return address `0x10313417`), and side B, running in the heap
side A left behind, finds room and never makes that call. One word differs:
`@00993b60 10313417/00000000`, at state 0, once.

- 133 of the 136 cluster units have exactly 1 mismatch in 2000 states, at state 0.
- Your probe was right: both sides agree on esp and the word is below the final esp. It is dead stack. The
  reason A has it and B does not is simply that A ran first.
- It is also why the batch runner booked passes that single-entry `cowdiff` then failed: a row that runs
  second in a process starts in a heap where the table has already grown.
- Reproduced on the unmodified harness with the real allocator and a mock image:
  `first at state 0 (memory) ... @00193bc0 10313417/00000000 ... store=missing A:1/10313417 B:0/00000000`.
  The same unit run second in the same process passes. A function that allocates, compared against ITSELF,
  fails. That last control (A against A) is the one that would have found this in ten minutes.

### 1.2 The judge demanded things no caller can see

It compared every stack byte below the returned esp, eax and edx of functions that return nothing, four
words above every import's return address whether or not the import takes four arguments, and it ran half
its states with the direction flag SET (no Win32 caller can do that), so a plain forward copy was "wrong".
First mismatch of the 4,081 failing lifted units: memory 1,319 (1,032 on the stack, 468 of those below the
final esp), eax 1,134 (595 where the lifted body is `void`), edx 433, fault 506 (mostly: the original
faults on a garbage pointer and the unit does not), callee-saved 239, hang 211.

This is why the lifter needed 2,400 lines of rules to replay frames and register leftovers, and why even
the hand units carry adapters that reproduce pushes "because cowdiff compares stack memory byte for byte".

### 1.3 The judge passed things it had not checked

- Of 6,466 lifted units recorded proven, 4,383 reached every instruction site. 2,083 did not; 971 reached
  less than half; 396 less than a quarter (`0x1000aab0`: 4 of 112). All were booked at 300 or 400 states.
- A site reached only on the way to a fault counted as covered.
- Shown on the mock, 2000 states each, old comparison: a unit that is wrong only behind `cmp eax, 0x1f4`
  PASSES (the branch is never reached). A unit that returns an uninitialised local PASSES (the stack page
  was zero). A unit that writes a wrong value into a freshly allocated block PASSES (only the addresses of
  such writes were compared). A float unit that ignores x87 precision control PASSES (only 53-bit mode was
  ever run; the game mostly runs in 24-bit).

### 1.4 The honest size of the work

21,038 functions (thunks excluded, at most 32 KB each), 3,140,766 code bytes. 9,909 of them, 83% of the
bytes, have no unit of any kind. The lifted units cover 16.8% of the bytes; the ones recorded proven, 6.9%;
recorded proven AND fully covered, 2.8%. Readable hand units: 32. Most of the program has not been touched,
and the functions that hold most of the bytes are the ones between 128 and 2048 bytes long.

### 1.5 Process

A full day went into theories about the 394 before an A-against-A control was tried. The loop halted on
failing units. The rule "report, do not un-prove" (which came from the previous brief, and was wrong) left
the records saying one thing and the judge another. All three are fixed by rule below, not by effort.

## 2. Rules

Standing rules, unchanged:

1. Never touch the SG.GS network. Never write into `C:\PhoenixXI`. Never commit game files or generated C.
   Never launch the game, Docker or LSB. No registry writes.
2. Git: one branch (`main`), fast-forward pushes only, through `tools/cow/commit.py`. No reset, stash,
   rebase, force-push, or branch switching.

New rules:

3. **The judge's verdict is the record.** A unit that is not gold is not proven, and its record says so by
   itself. Nothing is "reported instead of un-proved", and nothing halts because units fail.
4. **The judge is frozen.** `tools/cow/cowdiff.c`, `tools/cow/cowdiff_batch.h`, `tools/cow/judge2.py`,
   `runtime/guest.h`, `runtime/portable/gwin.c`, `cow/retuse.json`. Do not edit them. Each edit changes the
   judge id, which voids every recorded proof and costs a full baseline. If you think the judge is wrong:
   two lines in the journal with one entry and its verdict line, park the units, carry on.
5. **The lifter is frozen.** `lift.py --apply` is not run again. The conveyor owns `src/lifted` from now on.
6. **No new tools.** `tools/cow/ghidra` holds 143 scripts. You may edit exactly two things: the prompt text
   in `tools/cow/conveyor.py` (section 8.3) and `cow/conveyor/config.json` (section 8.2).
7. **45 minutes.** No single problem gets more. Then one journal line, park it, move on. A unit is never
   worth an hour: there are twenty thousand.
8. **Ten lines a day** in `cow/conveyor/journal.md`. Nothing else is written down. Commit subjects stay
   under 100 characters and have no body.
9. **A claim needs a before and an after** on a named entry. A cause without an exemplar that flips is a guess.
10. **Nothing waits for the USER.** The USER does not rule on stops and does not choose between options.
    Never ask the USER to. Never write "holding" or "waiting for a ruling".
    Three events stop the line, and the line stops ITSELF on each of them. You never decide that a stop is
    needed, and you never run `conveyor.py stop` because a number looks bad:
    (a) `PROVER BROKEN`: two batches in a row came back without one verdict;
    (b) `JUDGE UNSTABLE`: the daily recheck re-proved gold units and more than 2% changed verdict;
    (c) `AUDIT BLIND`: a mutant that is wrong on every input passed the judge twice.
    `watch` shows the stop and its NEXT line says what to do. For (b) and (c) that is exactly:
    `python tools/cow/conveyor.py report` once (it writes `cow/conveyor/REPORT.md` and pushes it), ONE line
    to the USER (`line stopped by its judge check, report pushed`), and back to `watch`. The brief's author
    reads the report on GitHub and answers with a new delivery. Do not repair the judge yourself.
    Everything else is NOT a stop: `AUDIT LOW`, low gold per batch, failing units, a parked family, a slow
    day. Section 8 says what to do about each. None of them is "ask".
11. The hand loop (`loopy next`, `loopy submit`, `reverify.py`) is paused. Do not run it.
12. **Your routine is one command:** `python tools/cow/conveyor.py watch` (section 8.1). It waits, restarts
    what died, publishes what is proven, and ends with a NEXT line. Do what NEXT says, then run it again.
    When you are nudged and have nothing else in hand, the answer to the nudge is that command, not a
    sentence. Do not fill the time with investigations.

## 3. What is in the delivery

`$HOME\Downloads\System2.zip` holds `SYSTEM2.md` (this file), `install-system2.ps1`, `system2.patch`, and
`files\` (every file of the patch in full, for reference). The patch was made against commit `acf11bf7`.

| file | what it is |
| --- | --- |
| `tools/cow/cowdiff.c`, `cowdiff_batch.h` | judge v2: the world fix, the contract comparison, clean-state counting, the richer states, `--self`, failing inputs printed |
| `runtime/portable/gwin.c`, `gwin.h` | save and restore of the heap pages and the allocator's bookkeeping |
| `tools/cow/judge2.py` | what a verdict means: flags, contract, tiers, the record, the retuse table |
| `tools/cow/ghidra/lift_proof.py` | the batch prover, now judge v2 by default; two provers can run at once |
| `tools/cow/cowdiff.py` | single entry: `--judge 2`, `--self` |
| `tools/cow/conveyor.py` | the production line |
| `layout/cow_call.h` | how a unit calls guest code (`cow_cdecl`, `cow_stdcall`, `cow_thiscall`, ...) |
| `tools/cow/judge_selftest/` | 29 mock unit pairs with the one correct verdict for each |
| `tools/cow/commit.py`, `status.py`, `ghidra/lift.py` | small guards: unit files travel with their verdict; the README shows the scoreboard; the lifter cannot overwrite a conveyor unit |

Everything was built and tested on Linux against a mock image. **None of it has run on this machine, with
MSVC, or against the real image.** Phase 1 is where that happens, and its checks are there for that reason.

**If the patch does not apply** (the install script says so and changes nothing): `git apply --check` names
the file. If it is `commit.py`, `cowdiff.py`, `lift.py`, `lift_proof.py` or `status.py`: apply the rest with
`git apply --exclude=<that file> "$HOME\Downloads\System2\system2.patch"`, then port that file's hunks by
hand from `files\<path>` (they are marked `SYSTEM 2`, `judge2` or `JUDGE`). If it is `cowdiff.c`,
`cowdiff_batch.h`, `gwin.c` or `gwin.h`: do not merge by hand. Stop and report
`git log --oneline acf11bf7..HEAD -- <file>`.

> Sections 4 to 6 were carried out on 2026-11-12. They stay as the record of the install. Where they say
> rule 10(a) or 10(d), read: write the report (rule 10) and do not start the line.

## 4. Phase 0: retire the old loop (10 minutes)

```powershell
git mv cow/reverify.json cow/wip/reverify-legacy-judge.json
python tools/cow/loopy/loopy.py clear --because "System 2: judge v2 replaces the legacy re-verify"
```

Add one line at the top of `docs/cow/LOOP.md`:
`> PAUSED. Machine conversion is run by docs/cow/SYSTEM2.md. The hand loop below is not in use.`

The 394 are not investigated further. Phase 2 judges every unit again and the old list stops mattering.

## 5. Phase 1: install judge v2 and prove it on the real image (about 2 hours)

One exception to rule 4, valid until the end of step 5 only: if `cowdiff.c` or `gwin.c` does not COMPILE
with MSVC, that is a porting slip in the delivery (it was compiled with gcc), not a decision of the judge.
Fix the syntax and nothing else (a declaration, a cast, a missing include), change nothing about what is
compared or generated, and write the exact change in the journal.

**Step 1. Install.**

```powershell
Expand-Archive "$HOME\Downloads\System2.zip" "$HOME\Downloads\System2" -Force
powershell -ExecutionPolicy Bypass -File "$HOME\Downloads\System2\install-system2.ps1"
```

It must end with `judge2 selftest: 52 passed, 0 failed`, `conveyor selftest: 25 passed, 0 failed`,
`judge id: 8d58abb5a6fe` and `INSTALLED`. A different judge id means a judge file differs from what was
shipped: stop and report.

**Step 2. The judge, judged.**

```powershell
python tools/cow/judge_selftest/run.py
```

Expected: `LEGACY 16 row(s) checked, 0 wrong`, `V2 29 row(s) checked, 0 wrong`, `SELF 29 row(s) checked,
0 wrong`, `JUDGE SELFTEST OK`. Read `run.py` once: each row is one decision of the judge with its reason.
- `THE MOCK DID NOT BUILD`: that is the test rig (it links `plat_win.c`, which may want symbols the mock
  does not stub). Twenty minutes to add the missing stubs at the top of `judge_selftest/mock.c`, which is
  not a judge file. Not solved in twenty minutes: one journal line, go to step 3.
- It builds and a row is wrong: rule 10(a).

**Step 3. The world fix on the real image, with the OLD command line.**

```powershell
python tools/cow/cowdiff.py 0x10010350
python tools/cow/cowdiff.py 0x100298d0
python tools/cow/cowdiff.py 0x100298f0
python tools/cow/cowdiff.py 0x10029930
```

Before, each printed `COWDIFF FAIL ... 1 mismatch(es), first at state 0 (memory) ... @00993b60
10313417/00000000`. Now at least three of the four must print `COWDIFF PASS ... grade=exact judge=1`.
No new flag is involved: this is the same comparison as before, in a world that is put back properly.
If all four still fail at state 0 with `10313417/00000000`, the fix did not take on this machine: run
`python tools/cow/cowdiff.py 0x10010350 --self`, and report both outputs (rule 10).

**Step 4. The control that was missing.**

```powershell
python tools/cow/cowdiff.py 0x10010350 --self
```

`--self` runs the original against itself and must PASS. Whenever a failure looks like the harness, this is
the first thing to run, before any theory.

**Step 5. The retuse table** (who reads whose return registers; built once from the Ghidra dump).

```powershell
python tools/cow/judge2.py --retuse D:/projects/ghidra/ghidra_out/functions_all.jsonl
```

Expected: `RETUSE OK: <n> functions -> cow\retuse.json` and two lines of counts. Copy the three lines into
the journal. `RETUSE FAIL` means the path is not the dump `lift.py` reads (`COW_LIFT_DUMP`). From this
moment the judge is complete and rule 4 applies. Note the new id: `python tools/cow/judge2.py --judge-id`.
Then look at one unit under the full judge; the first line it prints is the contract it is judged under:

```powershell
python tools/cow/cowdiff.py 0x10010350 --judge 2
```

**Step 6. Forty units under judge v2.**

```powershell
New-Item -ItemType Directory -Force build | Out-Null
python -c "import json; d=json.load(open('cow/wip/reverify-legacy-judge.json')); f=[x['unit'][2:] for x in d['failed'] if x['track']=='lift'][:20]; p=json.load(open('cow/lift_proof_all.json')); g=[k for k in sorted(p) if p[k].get('pass')][:20]; open('build/j6.txt','w').write('\n'.join(f+g)+'\n')"
python tools/cow/ghidra/lift_proof.py --list build/j6.txt --out build/j6.json --rerun
```

The first run recompiles the allocator and relinks: allow 10 to 20 minutes. It ends with a
`TIERS gold .. silver .. weak .. fail ..` line and `LIFT PROOF ...`. Put the TIERS line and
the wall time in the journal. There is no pass mark for the counts. Stop only if every row is `error` or
`nocompile`, or the run takes more than 30 minutes: treat either as rule 10(d).

**Step 7. Commit.** Two commits, because `commit.py` keeps tools and units apart:

```powershell
python tools/cow/commit.py --machinery --subject "cow: machinery - judge v2 and the conveyor (docs/cow/SYSTEM2.md)"
python tools/cow/commit.py --subject "cow: System 2 - call helpers, retuse table, legacy re-verify archived"
```

## 6. Phase 2: the honest baseline (runs by itself, several hours)

Every unit in `src/lifted` is judged again by judge v2. Start it detached and leave it:

```powershell
Start-Process python -ArgumentList 'tools/cow/ghidra/lift_proof.py','--out','cow/lift_proof_all.json' -WorkingDirectory (Get-Location) -WindowStyle Hidden -RedirectStandardOutput build\baseline.out -RedirectStandardError build\baseline.err
Get-Content build\baseline.out -Tail 3      # to look in on it
```

It first syntax-checks every file (`syntax: n/N files` lines), then prints one line per chunk of 400 units
and saves after each. If it dies, run the same command again: it skips what this judge has already graded.
**Go straight on to Phase 3 while it runs**: the conveyor uses its own build directory, and both write the
ledger entry by entry, so the two do not collide. A prover run of your OWN while either is running needs
its own directory too, or the two overwrite each other's files: in that shell, first
`$env:COW_LIFT_BUILD='build\lift_hand'; $env:COW_LIFT_TAG='h'`.

When `baseline.out` ends with `LIFT PROOF ...`:

```powershell
python tools/cow/conveyor.py status
python tools/cow/commit.py --subject "cow: judge v2 baseline - <gold> gold of <total> lifted units, <x>% of code bytes"
```

To run a baseline again later (after a new judge, or to give rows without an answer another go):
`python tools/cow/conveyor.py baseline`. It is the same run, started as a process of its own; `watch`
resumes it if it dies, and it skips whatever this judge has already graded.

The number will not be the old 6,400. Many old failures become gold, because what they failed on is no
longer compared. Many old passes become silver or weak, because they never reached all their instructions.
Do not explain the difference and do not try to move it. It is the first number that is true, and it is the
starting line.

## 7. Phase 3: the conveyor

**What it does.** For each function: the prompt holds the original's instructions (the recompiler's own
listing, the ground truth), Ghidra's C, what every callee's convention is, and the exact contract line. The
model answers with one C function and a three-line adapter. A batch of 40 is proven in a scratch tree. Gold
units move into `src/lifted` with their record. A unit that fails goes back to the model with the judge's
verdict in words (what differs, both values, and the inputs of the failing state), up to three rounds, and is
then parked in `cow/conveyor/parked.tsv`. A function whose ORIGINAL completes on no generated input (`no clean
state`) is parked at once: no draft can change that. A draft that agrees with the original but that the judge cannot
fully cover is kept as silver or weak and counts for nothing. Nothing a model writes is trusted: a unit
exists in the tree because the judge proved it, and for no other reason.

**Step 1. The model answers.**

```powershell
python tools/cow/conveyor.py llm-check
```

Expected: `LLM OK: model <name> answered 'READY' in <n>s ... key sent`. The key is read from Goose's own
provider file. If it prints `key NOT FOUND` and the server refuses: set `$env:COW_LLM_KEY` in the shell that
starts the line. Never write the key into the repository, the journal, or a commit.

**Step 2. Three units, in full view** (15 minutes; this checks the wiring, not the units).

```powershell
python tools/cow/conveyor.py pick --n 10
python tools/cow/conveyor.py one 0x<an entry from the list> --show
```

Read the prompt once, so you know what the model sees. Then the reply, then the verdict. Do it for three
entries. What must be true: the reply is C in the stated shape, it compiles, and a verdict comes back in
words. If every verdict is `IT DOES NOT COMPILE` with the same error, that is one fix (an include path, or
one sentence of the prompt), not three problems. If the prompt has no `THE DECOMPILER'S READING` section,
the dump path is wrong: set `$env:COW_LIFT_DUMP`.

**Step 3. The pilot: one batch in the foreground.**

```powershell
python tools/cow/conveyor.py run --batches 1
```

**Gate: at least 8 gold of the 40.**
- 8 or more: step 4.
- Fewer: open the verdicts of the ten smallest failures (`build\conveyor\<batch>\log\<hex>.r1.txt`, at the
  end of each file) and group them by the judge's first sentence: RETURN VALUE, MEMORY, STACK POINTER, DOES
  NOT COMPILE, FAULTS, CALLS. The largest group is what the model misunderstands. Fix that one thing in the
  prompt (section 8.3) and run the pilot again. Three tries. Still under 8: start the line anyway (step 4)
  and write the group counts in the journal. The line parks what it cannot do and moves up in size by itself.

**Step 4. Start the line.**

```powershell
python tools/cow/conveyor.py start
```

It must print `LINE STARTED`. The line is a process of its own: it survives Goose stopping and a Ctrl-C in
your shell, waits when the model server is busy or restarting, commits and pushes every 30 minutes when
there is something new, and ends on `python tools/cow/conveyor.py stop`. It re-reads its config every
batch; a prompt edit needs a stop and a start. If it dies (a reboot, a crash), `watch` starts it again.

The line does not see variables set in your shell after it has started. If it needs `COW_LLM_KEY` or
`COW_LIFT_DUMP`, put them in `build\conveyor\env.json` (`{"COW_LIFT_DUMP": "D:/..."}`): `build\` is never
committed.

## 8. Every day

### 8.1 The routine: one command, again and again

```powershell
python tools/cow/conveyor.py watch
```

It waits ten minutes (less when the line's state changes), then prints where everything is:

```
WATCH 2026-11-12 21:40:11
  line      running  proving   heartbeat 12s ago
            last batches: +9 +11 +7 gold (of 40 38 40 the judge could judge)
  baseline  finished LIFT PROOF  7421/10610 pass (69.9%)  in 3120s   -> cow\lift_proof_all.json
  proven    3412 functions, 78901 bytes, 2.512% of the code   today +2.512   unjudged units: 0
  github    up to date
  checks    RECHECK OK: 0 of 200 ... | AUDIT OK: must-kill 30 of 30 died at once; ...
  NEXT      Nothing to do. Run this command again.
```

It also does the mechanical work itself: a line that died is started again, a baseline that died is resumed
while units are unjudged, and proven work that GitHub does not show is committed and pushed. What is left for
you is the NEXT line. Do what it says, then run `watch` again. Between two watches there is nothing to
check by hand, and nothing to write to the USER.

`python tools/cow/conveyor.py watch --look` only reports: it starts and publishes nothing.

### 8.2 The five knobs (`cow/conveyor/config.json`; create it with only the keys you change)

| key | start | change it when |
| --- | --- | --- |
| `size_max` | 128 | the line moves it to the next step (256, 512, 1024, 2048, 4096, ...) by itself when fewer than a full batch is left at the current one. Leave it. Never down. |
| `parallel` | 1 | on day one try 2, then 4. Keep the value with the most attempts per hour. |
| `clean_share` | 0 | set 0.25 after the first day that brought 300 gold. It rewrites gold machine lifts as readable C, kept only if gold again. |
| `allow_x87` | false | set true after three days of steady numbers. If gold per batch halves, set it back and write one line. |
| `rounds` | 3 | leave it. |

Five batches in a row under 4 gold (`watch` says so in NEXT) is that day's problem: read ten verdicts, find
the largest group, fix the prompt (8.3). If two prompt changes do not move it: write the three largest groups
with their counts in the journal, `python tools/cow/conveyor.py report`, and leave the line running. It is
not a stop.

### 8.3 The prompt is yours to improve

This is the one place where thinking pays, because a sentence that prevents a common mistake raises the
yield of every batch after it. `SYSTEM`, `EXAMPLE`, `COMPARES` and the wording in `build_prompt`, in
`tools/cow/conveyor.py`.

- Evidence first: at least five failures with the same judge sentence and the same cause, read in their
  `log\<hex>.rN.txt`.
- One change at a time. Bump `PROMPT_VERSION` (`p2`, `p3`, ...): parked units become eligible again.
  `python tools/cow/conveyor.py stop`, wait for `conveyor end` in the log, make the edit,
  `python tools/cow/conveyor.py start`.
- Measure: gold per batch over the next three batches against the previous three. Keep it if it is not
  worse. Revert it if it is. One journal line either way.
- At most two prompt changes a day.
- Never tell the model how to satisfy the judge on particular inputs, and never soften a rule about memory
  or calls. The prompt explains the original program better. It does not explain the judge away.

### 8.4 Once a day the line asks: is the judge still a judge

The line does this itself, between two batches, once per calendar day. You do not stop the line for it and
you do not run it by hand while the line is up (it proves in the same build directory). The two result
lines are in `watch`, in `cow/conveyor/checks.json`, and at the end of the scoreboard. By hand, with the
line stopped: `python tools/cow/conveyor.py check`.

**`recheck`** proves 200 gold units again: the same file under the same judge must get the same verdict. A
unit that is not gold in the batch is asked again alone, in a process of its own; only a unit that differs
from its record alone counts. More than 2% of the sample: `JUDGE UNSTABLE`, and the line stops itself.

**`audit`** breaks 30 gold units on purpose, in two ways.

- A **must-kill** mutant is wrong on every input, in something the judge always compares: a store into the
  caller's frame, a stack pointer that comes back 4 too high, the low bit of a result a caller reads. Every
  one of them must die. One that passes twice is `AUDIT BLIND`: the judge is not comparing, and the line
  stops itself.
- A **logic** mutant is one deliberate bug in the unit's own code: a comparison turned round, a constant
  off by one, a store removed, a result off by one. None is made where the unit's contract says no caller
  could see it. Killed is good. One that passes is run again with every state and another seed. Killed
  there, it is `missed`: a real bug the standard depth let through. Passing again, it is `unresolved`: the
  change makes no difference a caller can see, or none these inputs reach.

`AUDIT LOW` (under 90% of the resolved logic mutants killed) is NOT a stop. Copy the line into the journal. The
missed and unresolved mutants are listed with the changed line in `cow/conveyor/audit.json`, and they go to
the brief's author with the next `report`. Do not investigate them.

### 8.5 The journal

`cow/conveyor/journal.md`, one block a day, at most ten lines: the date; gold functions, bytes and percent
from `status`; the change since yesterday; batches, attempts, gold per batch; knobs changed; prompt
version; the three largest parked reasons with counts; anything stopped. The line's next commit carries it.

### 8.6 Commits

The line commits and pushes its own work and whatever else is proven by then, a baseline's gold included
(`cow: conveyor +N gold ...`). While the line is down, `watch` does it (`cow: scoreboard - ...`). By hand,
any time: `python tools/cow/conveyor.py publish`. Never `git commit` by hand: a commit made by hand is not
pushed, and GitHub is where the USER reads the number. You commit only a prompt change:
`python tools/cow/commit.py --machinery --subject "cow: machinery - conveyor prompt p3: <what>"`.
`commit.py` now refuses a unit file under `src/lifted` that has no verdict of the current judge for the file
as it is. That is deliberate: never edit a unit by hand after it was judged.

## 9. Reference: what judge v2 compares

Every state: side A, world restored (image, arena, stack, TEB, **every heap page, the allocator's
bookkeeping**), side B, compare.

| compared | not compared |
| --- | --- |
| eax and edx, as far as a caller can see them (the contract, below) | bits of eax/edx that no caller reads |
| ebx, esi, edi, ebp, and esp after return | stack memory below the returned esp |
| the direction flag and the x87 control word on return | the unit's own argument slots (declared by `stack_args`) |
| st(0) and the x87 stack depth (two NaNs are equal) | what the original leaves on states where the ORIGINAL faults |
| every byte of live memory, including blocks allocated during the call | junk above an import's real arguments |
| every call to an imported function: which, in what order, how many arguments, their values | |
| a fault in the unit where the original does not fault | |

**The contract.** A register is ignored only when all three hold: Ghidra's own signature says the bits are
not part of the result (`void`, a byte, a word, not 64-bit); at least one direct caller exists; and no
direct caller reads more (Ghidra shows such a read as `extraout_EAX` or `extraout_var`). Otherwise it is
compared in full, as before. A unit's `COW_CONTRACT` line can only make its contract stricter.
`python tools/cow/judge2.py --explain 0x<entry>` prints the contract of one function and the reason.

**The states.** Up to 2000 a row. The arena and the caller's frame are refilled per state; dead stack holds
rubbish, not zeros; the constants a function compares against, and the fields it reads them from, are taken
from its own instructions and planted in its inputs; the direction flag is clear on entry; half the states
run the x87 in 24-bit precision.

**The tiers.** `gold`: PASS, at least 100 states completed cleanly on both sides, and every instruction of
the original reached in such a state. Only gold is called proven, and `"pass": true` in
`cow/lift_proof_all.json` now means gold and nothing else. `silver`: PASS with at least 30 clean states and
70% of the instructions. `weak`: PASS with less. `fail`: a mismatch. `noisy`: the harness disagrees with
itself on that function (`--self` fails), so its failure says nothing about the unit. `nocompile`, `hang`,
`timeout`, `error` (the machinery did not answer): as named.

**The record.** Each entry names the file (`src`, a sha1) and the judge (`judge`, the id) it is valid for.
Change either and the record is void: the unit shows as `stale` until it is proven again. A baseline run
without `--rerun` re-proves exactly the stale ones.

**A FAIL line** now ends with what the state started from: `in=eax:..,ecx:..,...` and `args=..` (the first
stack words). `python tools/cow/conveyor.py one 0x<entry> --show` turns it into sentences.

**Where things live.**

| path | what | committed |
| --- | --- | --- |
| `cow/lift_proof_all.json` | the ledger: one record per unit | yes |
| `cow/retuse.json` | who reads whose return registers (a judge file) | yes |
| `docs/cow/SCOREBOARD.md`, `cow/conveyor/daily.tsv` | the scoreboard and its day-by-day line | yes |
| `cow/conveyor/config.json`, `parked.tsv`, `journal.md`, `audit.json` | knobs, parked units, the journal, the last audit | yes |
| `cow/conveyor/checks.json`, `REPORT.md` | the last daily judge check; the last report for the brief's author | yes |
| `cow/conveyor/attempts/` | what was tried per unit | no (the repository ignores `attempts/`) |
| `build/conveyor/` | `conveyor.log`, `heartbeat.json`, `run.out`, and per batch `log/<hex>.rN.txt` (prompt, reply) and `prove.log` | no |
| `build/baseline.out` | the baseline run's log | no |

## 10. Known limits. Park them; do not investigate them.

- **No direct caller** (virtual methods, callbacks): eax and edx are compared in full, leftovers included.
  Many of these will be parked. Expected.
- **No clean state**: the original calls or reads through a pointer the state generator cannot make valid
  (a virtual call through a fuzzed object, a jump through a table in an object), so it completes on no
  generated input and there is nothing to compare a unit with. Parked at once by the line. They wait for a
  judge that plants valid objects; no prompt and no draft changes them.
- **Silver and weak**: the judge could not reach every instruction, usually because a branch needs data the
  generator did not produce. Rewriting the unit cannot change that. They are kept and counted separately.
- **Noisy**: something outside guest memory is not restored between the two runs (a host handle table, for
  example). Parked by the line itself.
- **More than 4096 words written to freshly allocated memory** in one call: reported as `out-of-region
  overflow`. Parked.
- **Floats**: a unit must apply `fr(g, x)` to every x87 result, as the original does, or it fails in the
  24-bit states. Two different NaNs stored to memory still count as a difference.
- **ecx after a call** was never compared and still is not.
- Each unit is proven against the ORIGINAL versions of whatever it calls, one unit at a time. Nothing in
  the running program uses these units yet. That is section 11.

## 11. Later, and only on the USER's word: putting proven units into the program

Proven units are not wired in. `recomp.py --wraps` takes its list on the command line, and the 975 wraps of
today already fill most of what a command line can hold, so thousands more need a wraps file, which is an
edit to the recompiler's interface. After that: `genwraps.py` learns to register gold units, with
`COW_NO_WRAPS=1` to turn them all off and `COW_WRAPS_ONLY=<file>` to bisect, and
`cowdiff.exe --boot-digest` (already in this delivery) prints one line for `DllMain` (every import call
hashed, memory hashed) that must be the same with the units in and out. Do not start this. When the line
has run for some days, the USER decides.

## 12. Reporting to the USER

When asked: at most ten lines, read from `watch` and never from memory. Proven functions, bytes and percent,
the change today, gold per batch, what you changed (prompt version), the largest parked reasons. No theories.

At a stop (rule 10): `python tools/cow/conveyor.py report`, then ONE line. The report is a file on GitHub for
the brief's author; the USER does not read logs and does not pick from options. Never end a message to the
USER with a question about the line.

## 13. System 2.1: what was wrong on day one, and the ruling

### 13.1 The prover could not hear the harness (since 2026-11-06)

`tools/cow/ghidra/lift_proof.py` starts each chunk executable with its error output on a pipe, and until
this delivery it read that pipe only after the executable had ended. A pipe holds 4 KB on Windows.
`rt_fatal` (`runtime/runtime.c`) prints about 420 bytes there every time a state calls through a pointer
that is not a function, and a fuzzed state does that on every function with a virtual call. Both sides
run every state. So the tenth such call filled the pipe and the harness blocked inside its own log line:
no CPU, no guest memory touched, no row budget running. From outside that is a row that hangs.

It explains, with nothing left over:

- every 400-unit chunk ending in `TIMEOUT`, each time blaming a different innocent unit, on an idle machine;
- the accused units answering in 6 and 10 seconds when run alone;
- 17 of 40 drafts booked `hang`, 12 of them `mov eax,[ecx]; jmp [eax+off]`: two instructions cannot hang,
  but they call through a fuzzed pointer on every state;
- the baseline falling back to one process per row: about 14 hours for a job working chunks should do in
  one or two;
- a batch taking 38 minutes.

The repair is one reader thread. No judge file is touched (the id is the same), so no proof is void. The
mechanism can be seen on any machine: `python tools/cow/ghidra/lift_proof.py --selftest` runs the chunk
runner against a child that writes 1.7 MB to stderr between two verdict lines. Before the fix the child is
killed for silence after its first row. After it, every row reports.

What follows:

- A `hang` or a `timeout` booked before 2.1 says nothing about the unit. The baseline of 2.1 judges those
  rows again. Do not interpret old hang counts, and do not write about them.
- The functions that used to "hang" now get their true verdict. For most of them it is `no clean state`
  (section 10): a limit of this judge. The line parks them at once. They are not a problem for you to solve.

### 13.2 The audit measured its own mutations

29 of 37 mutants killed did not mean a judge that misses a fifth of all bugs. The judge does not compare
what no caller can see (section 9), and the first audit took no notice of that: it bumped the result of
functions whose callers never read eax, it removed stores from the unit's own dead frame, and it looked for
comparison operators inside comments. Such a mutant is not a bug, and the judge is right to pass it.

Shown with the real judge on the mock world: a result bumped under a `void` contract comes back gold, and
so does a store added below the returned esp, while every must-kill mutant of section 8.4 fails with the
reason it was built for (`memory`, `esp`, `eax`), and so does every logic mutant made with the contract
in mind.

The 8 survivors of 2026-11-12 are not investigated further. Your reading of them was right. The rule that
made you stop on them was the brief's, and it was wrong.

### 13.3 A stop that waited for somebody who could not answer

Rule 10 said: stop, tell the USER, wait. The USER cannot rule on a mutation audit and should never have
been asked to. So the line stood still for most of a day, the baseline's gold stayed on one machine because
nothing committed it, and some thousands of nudges were answered with "holding". That was the brief's doing,
not yours. The repair is rules 10 and 12 and section 12: the line stops only itself, a stop produces a
report file and one line, and the routine is a command that does something.

### 13.4 The ruling on the stop of 2026-11-12

**The stop is lifted.** The install script of 2.1 does the following by itself, in this order. Do not
repeat the steps; check them with `watch`.

1. It installs the files and runs the three selftests. The judge id does not change.
2. It commits the tools and pushes everything proven so far (`conveyor.py publish`).
3. It ends the old baseline run and starts a new one with the fixed prover. The new run judges only rows
   that have no verdict of this judge, and gives the rows a hang or a timeout left unanswered another go.
4. It starts the line. The line's first act is the daily check, with the new audit.

Then it is yours: `python tools/cow/conveyor.py watch`, do what NEXT says, again. Add at most four lines to
today's journal block: the stop lifted by 2.1; the two check lines once `watch` shows them; the scoreboard
figure at the end of the day.
