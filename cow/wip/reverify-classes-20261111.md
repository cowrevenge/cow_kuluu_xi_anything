# What the 394 re-verify failures actually are — MEASURED 2026-11-11

This exists to **retract an over-claim I made the same day**, with the numbers that did it.
The claim was in commit `b2c4222f` ("the 394 re-verify failures are one dropped wrap, not 394
lift bugs"). It was false twice over, and a later "measurement" in this same file was invalid too - see FOLLOW-UP 3. Both claims are retracted:
the wrap recovers **none** of the 394 (0/394 at 2000 states), and the "204 explained by the wrap" figure came from testing a class *defined as diverging beyond state 400* at **400 states**, where it passes by construction. That test could not have failed.

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

## FOLLOW-UP 1: the stale-`generated/` route is closed too

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
reproducible from any buildable source even at booking time.

**The phantom-side-effect story I wrote in this section is REFUTED.** It assumed the frozen object
zeroed a *different offset* than the honest adapter. It did not. Parsed properly - my first attempt
counted only `uint32_t` lines and so put the field at +0x14 while the file documents +0x4c; do not
trust that earlier number:

| revision | field at +0x4c | `tick_ms` |
|---|---|---|
| `34c7ca07` (when it last compiled) | `cleared_before_tick` | +0x50 |
| HEAD | `tick_wrap_count` | +0x50 |

The field was renamed **in place** and both offsets match the guest bytes
(`mov [eax+0x4c],0` / `mov [ecx+0x50],eax`). Same offsets, same bytes written - the phantom had no
special effect on the clock, so it cannot explain the cluster. Useful corollary: the restored
adapter is confirmed faithful to the guest, which is what that fix was for.

Everything eliminated for the 136 so far: tracked sources (unchanged since 11-07), `cowdiff.py`
(unchanged since **11-06** - the judge itself never moved), `runtime/` (only my `cow_wraps.c` edit),
side A `funcs_000.c` (byte-identical), the DLL (11-03), `build.h` (11-02), the phantom offset.

**Next cheap test, and it is not another stack dump:** the queue already documents that "earlier
verdicts came from a binary older than the sources" after a wedged build, and the ledger is
cumulative - so ask **when each of the 136 was first booked `pass`**. If those bookings predate the
11-06 judge, they were never judged by the tool that now rejects them, which makes them
wrongly-booked rows to report (and re-gate), not a new lift bug. Only after that is the push/cleanup
family worth attacking on these units.

## State of things right now

## FOLLOW-UP 2: the cluster splits - 62 stale bookings, 74 still open

Read out of history (`when_booked.py`, `stale_booking.py`), per unit: *when was its pass first
booked* vs *when was its source last written*.

| | count |
|---|---:|
| **STALE - booked before the source was rewritten** | **62** |
| booked after the last source change | 74 |

The stale ones were booked `2026-11-06 11:59` and their sources were overwritten `2026-11-07 05:46`
(the argument-passing round). **Their `pass` certifies bytes that no longer exist** - a re-lift that
did not force re-proof. For those 62 the failure is honest and the ledger row is the bug; per the
standing rule they are reported, not quietly un-proved.

The judge-change theory died first, and with minute precision: `cowdiff.py` last changed 11-06
**05:41** and every first-booking is at or after **11:59** that day, so all 136 were judged by the
current tool. (My first pass at this counted days, which would have mislabelled 62 units.)

Two traps this section was nearly built on, both caught by the checks rather than by me:
the ledger keys are bare hex while `reverify.json` stores `0x...`, and with the wrong form the script
reported **"0 of 136 ever booked pass"** - a confident, entirely fictional negative. And a
day-granularity date comparison against a 05:41 timestamp.

For the 74 genuinely-open ones, every versioned input is identical (sources, `cowdiff.py`,
`runtime/`, side A `funcs_000.c`, DLL, `build.h`) and the only thing that changed under them is the
**11-10 22:52 recomp of the gitignored `generated/`** - the same un-versioned event that dropped
`100dc1f0`. Note what my earlier hash comparison does *not* prove: it compared today's regeneration
against the post-22:52 file, so it says nothing about what `table.c`/`funcs_014.c` looked like at
booking time. That pre-22:52 state is gone (no backup), so the honest status is: **62 explained, 74
unexplained with one un-falsifiable suspect.**

The durable lesson: `generated/` is the judge and it is not in version control, so verdicts can move
with no commit to bisect and no snapshot to compare. Any future re-verify worth believing should
record a hash manifest of `generated/all` at the moment it ran.

- Main tree: **clean, green, at HEAD.** Not touched by the experiment.
- The fix is **proven in isolation but deliberately not applied**, because step 3 regenerates
  the judge by scanning the tree and the main tree currently holds 2,796 unproven files.
- Working reproduction lives in `C:\Users\Owner\AppData\Local\Temp\cow_fix` (worktree, warm
  522 s recomp cache). If it is gone, `cow/wip/100dc1f0/FIX-REQUIRED.md` reproduces it.
