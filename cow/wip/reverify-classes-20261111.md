# What the 394 re-verify failures actually are — MEASURED 2026-11-11

This exists to **retract an over-claim I made the same day**, with the numbers that did it.
The claim was in commit `b2c4222f` ("the 394 re-verify failures are one dropped wrap, not 394
lift bugs"). It is true for the largest class and **false as a universal statement.**

## The experiment

The fix (restore `0x100dc1f0`: ledger `done` → `genwraps.py` → delete `generated/.recomp.stamp`
→ recomp regenerates `table.c` with `rt_wrap_cow_100dc1f0` + `rt_orig_cow_100dc1f0 =
f_100dc1f0_body`) was applied in an **isolated git worktree**: HEAD + the one restored unit, so
the 2,796 untracked `src/lifted/*.c` from another session's in-flight re-lift could not be
folded into the judge. 522 s recomp, `genwraps.py --check` green, the unit itself passes.

Then failures were re-run **by class**, 12 sampled per class, `--states 400 --seed 12345`
(`C:\Users\Owner\AppData\Local\Temp\measure_wrap_fix.py`).

## Result

| class | size | recovered | verdict |
|---|---:|---|---|
| first divergence beyond state 400 | 204 | **12/12** | **explained** by the dropped wrap |
| `stack 00993b60 ours=10313417/theirs=0` cluster | 136 | **0/12** | **NOT explained** — genuine, open |
| other (mostly below booking depth) | 45 | 1/12 | mostly not explained |
| cowdiff timeout at 1800 s | 9 | not tested | separate class; ~30 min/unit |

So roughly **52% of the 394 is the missing wrap**, and it makes sense that it is the deep-state
class: those runs only diverge after hundreds of states, which is exactly when a silently
mis-routed call at `0x100dc1f0` would compound. The 136-unit cluster fails at **state 0**, in
every sample, whether or not the wrap is installed — that is not downstream of it.

## What is still true from the earlier write-up

- The chain of causation for the wrap is verified, not guessed: `structs.h` renamed
  `cleared_before_tick` → `tick_wrap_count`, the source stopped compiling, a stale `build/`
  object masked it, the re-verify exposed it, the unit was deleted rather than fixed, and a
  `recomp.py` pass ran a minute later from a tree that no longer contained it.
- `table.c` carries 3 hits per healthy neighbour and 1 for `100dc1f0`; restoring source+wrap
  without regeneration fails `LNK2019: unresolved external rt_wrap_cow_100dc1f0`.
- **Nothing was un-proved.** The ledger still records all 6,474 passes.

## The open defect: 136 units, state 0, one signature

```
(memory) @00993b60  ours=10313417  theirs=00000000  x11 stack
```

`siblings at 0x993b48/b54/b58/b38/b70/b78` carry the same value. `0x10313417` is **not a symbol**
— it exists only as a branch target (`103133f9: ja 0x10313417`, `generated/all/funcs_052.c`), so
our side leaves a **code address** in a guest stack slot the guest holds as zero. In the deep
class the same slots appear in **both directions**, which is the shape of uninitialised stack
being compared rather than a wrong computation.

Their own sources are untouched since 11-07 and no tracked harness file changed since the
booking, so the pre-existing variable is again the **gitignored `generated/`** — the 22:52 pass
also rewrote `funcs.h` and `funcs_014.c`. A route worth trying before reading 136 units:
regenerate `generated/` from a clean HEAD tree and see whether the cluster moves at all.

## FOLLOW-UP: that route is closed, and it points at the push/cleanup family

Ran it. Hashing the worktree's fully regenerated `generated/all` against the main tree's:

| file | result |
|---|---|
| `funcs_000.c` — **side A for every cluster unit** | **IDENTICAL** (142,252 lines both) |
| `table.c` | differs by 2 lines (the restored `100dc1f0` wraps) |
| `funcs.h` | differs by 3 lines (same restoration) |
| `funcs_014.c` | differs by 6 lines (same restoration) |

So the cluster's guest reference is byte-for-byte what it always was, and the *only* generation
difference is my own restoration - which the cluster ignores, failing identically either way. A
stale-`generated/` explanation for the 136 is dead.

What that leaves: side A identical, their sources unchanged, harness unchanged, and a fresh build
in an isolated tree still fails them **at state 0** - so the pass they were booked on was not
reproducible from any buildable source even at booking time. The one thing that *was* in every
booking-time build and is in no current one is the **phantom `cow_100dc1f0.obj`**, frozen from an
older source compiled against an older `CowFrameNetClock`. It therefore zeroed a *different offset*
than the honest adapter does, and 136 units were passing on that side effect.

Read the signature that way: a **code address** sitting in a compared stack slot where the guest has
zero, at state 0, in units that all reach one call. That is the push/cleanup/return-address family
(the parked `cleanup_mismatch` / `argcount_mismatch` group), not the `memory` group the ledger
labelled them. Start there rather than reading 136 stack dumps; and per the standing rule, report
them - do not quietly un-prove them.

## State of things right now

- Main tree: **clean, green, at HEAD.** Not touched by the experiment.
- The fix is **proven in isolation but deliberately not applied**, because step 3 regenerates
  the judge by scanning the tree and the main tree currently holds 2,796 unproven files.
- Working reproduction lives in `C:\Users\Owner\AppData\Local\Temp\cow_fix` (worktree, warm
  522 s recomp cache). If it is gone, `cow/wip/100dc1f0/FIX-REQUIRED.md` reproduces it.
