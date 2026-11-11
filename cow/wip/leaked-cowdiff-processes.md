# Leaked cowdiff processes - a row whose launcher died owns a core forever (and what that does to 'hang')

Found while waiting on the independent re-verify. New tool: `tools/cow/clear_orphan_cowdiff.py`
(report-only by default, evidence written before anything is killed).

## The leak, in two lines that are both individually reasonable

```
tools/cow/reverify.py:471-477   subprocess.run([python, cowdiff.py, 0x<hex>, ...], timeout=1800)
tools/cow/cowdiff.py:570        subprocess.run([cowdiff_<hex>.exe, ...])      <- no timeout at all
```

`reverify` bounds the **launcher**; `cowdiff.py` does not bound the **executable** it spawns. When the
1800 s expires, `subprocess.run` kills *its direct child* - the python launcher - and the grandchild
`build/cowdiff/cowdiff_<entry>.exe` is orphaned and keeps running. Nothing ever terminates it.

Nor can it terminate itself. The row budgets inside `cowdiff.c` (25 CPU-s, 60 s wall by default) are
checked at tick points, and the runtime's own comment on `COW_TICK_MEMORY` says what that means: a loop
spinning inside a **bridged generated original** never reaches one, because `cow_tick` does not run in
generated code. So the class of row that can hang forever is exactly the class that cannot notice it is
hanging.

## What was on the box

Ten orphaned `cowdiff_*.exe`, every one with its recorded parent process gone, all created *before* the
audit started (on Windows `ParentProcessId` records the creator and there is no reparenting, which makes
"older than the audit" a sound proof of non-descendance). Five were eating a core outright:

| pid | unit | CPU-seconds |
|---|---|---|
| 12308 | `cowdiff_10017bd0.exe` | **66,253** |
| 14628 | `cowdiff_100543a0.exe` | **52,240** |
| 19688 | `cowdiff_101172a0.exe` | **43,471** |
| 17088 | `cowdiff_1014e620.exe` | **41,417** |
| 13456 | `cowdiff_101c4a20.exe` | **37,453** |
| 3584 / 10636 / 19604 / 1624 / 7584 | five more | 0.9 - 3.2 (parked, harmless) |

~240,800 CPU-seconds ≈ **67 core-hours** of spin on an eight-core machine, from rows nobody was waiting
for any more. Killed after the capture; `0x10017bd0` is one of the 394 the halt names, and `0x100543a0`
appears in the previous audit's FAIL list - i.e. the leaked ones are the usual over-budget rows, not
random casualties.

One of my own tools destroyed the evidence for this on its first run: `--dry-run` overwrote
`orphaned-cowdiff-evidence.json` with an empty record while the numbers above were still on my screen. The
tool now writes a **timestamped** file per invocation - evidence has to survive the next look.

## The claim I have to correct, in my own words, before it becomes a session fact

My first reading was "the audit is not slow, it is starved". **That is not established, and it is wrong as
stated.** The audit's own heartbeat (`build/reverify.inflight`) says otherwise:

```
{"pid": 20748, "beat": "2026-11-11T10:03:25Z", "done": 5677, "total": 7441, "passed": 5503, "failed": 174}
```

beat nine seconds old, 5,677 of 7,441 units settled - alive and advancing at roughly a thousand units an
hour. The measurement that convinced me otherwise was a 60-second sample of worker CPU that came to 0.64
CPU-seconds: but the pool **turns over per chunk**, so I was sampling whichever two workers happened to
exist at that instant and calling it the audit. Same failure mode as every other dead filter this session -
a predicate applied to the wrong population, producing a number that looked like an answer.

What is true: the leak wastes 67 core-hours and takes cores away from everything on this box, including the
audit's other workers, and it will eventually take all eight. What is *not* proven: that it was the reason
this audit has taken five hours.

## The part that matters for the grind, and the test that settles it

`COWDIFF_ROW_WALL_SECS` (default **60**) is a **wall** budget, deliberately - the comment says it exists to
catch "a row parked in the kernel, which `clock()` cannot see". A wall budget is exactly the thing a busy
box can violate on a healthy row. So:

**Every 'hang' and 'timeout' verdict this session leans on was recorded on a box with up to five cores
pinned by leaked processes.** That includes the 116-row `f_10316337` no-answer family and the nine-unit
timeout class - the two families I built design decisions on this session (and one of them, "the timeout
units are one callee's cost profile", is a claim about *why* time runs out, which is precisely the claim CPU
contention invalidates).

Test owed, cheap and specific: with the box idle, re-run ~20 of those rows individually
(`python tools/cow/cowdiff.py 0x<entry> --states N --seed S --args M`, same parameters as the ledger row) and
compare verdicts. If a meaningful share now answer, then the hang families are partly **harness
contention**, not guest behaviour, and any plan built on their counts is suspect. If none do, the families
stand and the wall budget is exonerated. Either way it is one measurement that retires a whole class of
doubt - and it must wait for the audit to release the harness, because per-entry object dirs make a
concurrent build a race.

## Fix owed (NOT applied - the audit is judging right now)

Two changes, both landing only when no audit is running, because `reverify` re-spawns worker processes
*from disk* per chunk and editing the judging toolchain mid-audit would mix two versions under the same
result file:

1. **Kill the tree, not the child.** In `reverify.run_one`, launch with `CREATE_NEW_PROCESS_GROUP` (or
   `Popen` and record the grandchild), and on `TimeoutExpired` `taskkill /T /F` the whole tree before
   returning `"timeout"`.
2. **A deadline inside the executable that does not depend on tick points.** A watchdog *thread* armed at
   startup that `ExitProcess`es with a distinct code. The current design asks guest code that may never
   return to notice its own timeout; that is not a budget, it is a hope.

Until then, `python tools/cow/clear_orphan_cowdiff.py` before any long proof run: it refuses to touch a
process whose parent is alive, refuses anything created after the audit started, and by default kills only
orphans above 300 CPU-seconds, because a parked orphan costs nothing and killing it is an unnecessary risk.
