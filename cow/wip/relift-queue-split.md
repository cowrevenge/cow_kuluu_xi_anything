# The re-lift queue split in two: 170 cleared, 23 blocked by my own layout guard

Pre-flighting the re-lift so the run is one command when the harness lock frees. The pre-flight found that
the queue I had assembled was not one queue.

## What happened

I merged the two actionable-looking lists — **170** (`relift-accepted.txt`, units whose bytes change under
the lift/model knobs) and **23** (`npush-newly-liftable.txt`, units currently refused that
`COW_MODEL_NPUSH_FRAME_AWARE` makes liftable) — into a 193-unit list and pre-flighted it. Two things came
back:

**1. The pre-flight's knob-verification guard refused the run:**

```
REFUSING: set in the environment but the module did not read them: COW_MODEL_NPUSH_FRAME_AWARE
```

Because `ATTRS` had no entry for the knob I added last week. The guard is right and I had it exactly
backwards: the danger is not a knob that fails to apply loudly, it is a knob that **may or may not** have
applied depending on import order — the same reload-order incident that once mispriced a unit by one. Fixed
by registering it.

And `COW_MODEL_STR_PROV_MEASURE` is **deliberately left unregistered**, so if anyone tries to carry the
counting-only knob into a run that keeps its files, the pre-flight refuses it too — not just `lift.py
--apply`. Two independent walls on a knob whose output is unsafe by design.

**2. Then the gate itself caught the real problem:**

```
0x101581e0  [('C2065', "'COW_ADDR_LIFT_101581F1': undeclared identifier")]
0x10186c60  [('C2065', "'COW_ADDR_LIFT_10186C85': undeclared identifier")]
...  (all 23, and only the 23)
DO NOT RUN the re-lift: the knobs break compilation for 23 unit(s). Fix the emitter first.
```

Not an emitter bug. **A consequence of the safety guard I added after truncating `lifted_bridges.c`.**
Those 23 units were never lifted, so `layout/lifted_addresses.h` has no `COW_ADDR_LIFT_*` macro for the
addresses their bodies mention — and a restricted `--apply --entries` run is now *forbidden* from
rewriting that header, because rewriting it from a partial population is what erased 6.7 MB of bridges
while the audit was reading it.

So the old behaviour would have "worked" by destroying everyone else's macros, and the new behaviour is
honest: those 23 cannot be applied by a restricted run. Both are correct observations, and neither is a
reason to relax the guard.

## Where the queue stands

| list | units | status |
|---|---|---|
| `relift-run-170.txt` | **170** | **cleared to run** — baseline emitted 170, gate rejected 0; **0** new compile failures with the knobs on; gate-capability control fired (broken file rejected=True, good file kept=True) |
| `npush-newly-liftable.txt` | 23 | emits, **does not compile** — needs a whole-population lift run, or layout **merge** so a restricted run can add macros without overwriting |
| `frame-read-clean82.txt` | 82 | needs the frame-**binding** feature (not built); `STR_PROV_MEASURE` refuses `--apply` on purpose |

The combiner now refuses to pad the runnable list with either blocked group, and prints why next to each
count. **A queue count is not a pipeline** — 193 "attempted" would have been 23 refusals and 82 more,
reported as progress.

## Remedies, ranked

1. **Run the 170** when the lock frees — pre-flight is green, verdict tool ready, nothing else outstanding.
2. **For the 23:** schedule a whole-population `lift.py --apply` (no `--entries`), which regenerates the
   layout completely. Cheaper and safer than any new code.
3. **Or** implement layout **merge** — read the existing `lifted_addresses.h`, add only new macros — which
   would make restricted runs able to introduce units at all. Real work, and it must not weaken the
   guard: merging is only safe if it can never *remove* an existing macro. That belongs behind its own
   test (delete-one-macro control), not bolted on.

Nothing booked, no knob on, judged directories clean, audit (pid 20748) still holds the harness.
