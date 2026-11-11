# A fresh refusal ranking (the old one was stale), and the frame-escape alarm that did not survive its own predicate

Two things this turn, both from refusing to trust a number I had not just measured.

## 1. The frozen histogram was sending the next turn at a bug that is already fixed

`lift-notes.md:167` still lists `does_not_compile_C2100 1295` among the top refusal classes — but the same
file at `:415` and `:557` records that C2100 was an emitter bug ("the largest reject was a star, not a
strategy") and that the stranded-deref-star fix took it **749 → 15**. Picking a target off the frozen table
would have cost a turn, so `lift_refusal_ranking.py` regenerates it from a live report-only run (20,732
candidates, 11,230 lift = **54.2%**) and, crucially, **aggregates by class**: `lift.py` prints one line per
distinct reason string, and the big classes carry an address or symbol in them
(`argcount_mismatch_10126320_ghidra0_push2`, `calls_unknown_symbol_SetEnvironmentVariableA`), so the raw
table shows ~2,400 lines with hundreds of `1`s and hides exactly the ranking the queue needs.

| class | units | share |
|---|---|---|
| argcount_mismatch | 2,702 | 13.0% (1,667 variants) |
| x87_not_modelled | 1,607 | 7.8% (25 variants) |
| calls_unknown_symbol | 791 | 3.8% (151 variants; `operator_new` alone 205) |
| cleanup_mismatch | 671 | 3.2% |
| indirect_call_not_modelled | 667 | 3.2% |
| **string_op_not_modelled** | **512** | 2.5% — **84.2% is ONE reason: `operand_stack_frame` (431)** |
| unresolved_register_or_overlay | 397 | 1.9% |
| leftover_unbridged_call | 384 | 1.9% |

`--class <name>` prints the members and hands down a verdict: *one cause ≥60% = a job; spread = needs a
slice*. `string_op_not_modelled` came back **"That is a job, not a landscape"** — 431 of 512 on
`operand_stack_frame`.

And that bucket is the **same wall** as last turn's push-naming gap: `gen_model.py:2361` says `stack`
provenance "is the frame model's wall", and `lift_frame_escape.py:29` names it directly — *"the same
problem the string family parks under `operand_stack_frame` (431 refused)"*. So there is now a single
named mechanism, **naming an ebp-relative frame slot**, sitting behind: the 431 string units, the 70
local-slot push units, and `f_10316337` (116 `hang` rows). That is the highest-leverage design item the
loop has identified, and it is a design — not a knob turn.

## 2. Fourteen "proven" units carry a frame-local pointer escape; the alarm did not survive sharpening

`lift_frame_escape.py --proven` scans all 6,466 booked passes: 14 declare a host C array standing in for
the guest frame and then **hand that array's address to a guest-facing call**. The guest said
`lea ecx,[esp+8]` + `push ecx`; our side pushes the address of a host array — a process pointer where a
guest stack address belongs. cowdiff cannot see it: it compares *guest* memory, so a callee that never
writes through the pointer makes both sides agree by construction (same blind spot as the image-rebase
RD=0 case).

The note in that tool said 6, from a 196-unit sample. The full scan says **14** — and 14 booked-pass units
with an unobservable correctness hole is exactly the shape of the halt's complaint, so it deserved a
decision-grade answer rather than a number.

`lift_frame_escape_callee.py` asks the question the alarm turns on: does the callee **write through** what
it was handed? My first version asked only "does the callee store anywhere with a computed address" — and
returned **13 SUSPECT, 0 benign**. Almost every real function stores somewhere, so a classifier that cannot
answer *no* has not classified anything. Sharpened to the actual predicate — a store whose address names a
register the callee **reads before writing** (i.e. an incoming argument), using
`gen_model._reads_before_write` rather than a hand-rolled rule — it can answer no, and it does:

```
no argument-store seen in callee                    12
SUSPECT (callee stores through an argument)          1     <- 0x101a1cc0 -> 10080dc0 / 101a2480
callee unresolved (no bridge matched)                1     <- 0x10284970
```

So **the case for pulling all 14 out of the ledger is not supported.** If anything is un-booked it is
argued per unit, starting with `0x101a1cc0`. What the class still is: a latent hole with zero coverage,
needing a contract case and the frame-slot binding the string family also waits on.

Limits stated rather than implied: this inspects only the **direct** callee's own stores. The pointer can
be stored into a struct and reach a callee two hops away, or be compared instead of written — neither is
attempted here, and "no argument-store seen" is not a safety proof. `10312031` recurs as a callee in four
of the fourteen, so one helper's behaviour covers a quarter of the population if anyone follows it.

## Discipline

`--selftest` on the escape detector was run first and passes (`0x1000b3f0 -> ('pushed-argument',
'auStack_10')`) — the file's own header records its fifth near-miss, a bridge pattern that required
`const CowU32 *)` when the real spelling is `const CowU32[])`, matched nothing, and reported 0 escapes
across 196 units *including one being looked at on screen*. I wrote my first version against APIs I
invented (`FE.detect`, `FE.proven_escape_units`, `FE.FRAME_ARRAY_RE`) and had to read the module for the
real ones (`scan`, `load_proof`, `ARR`) — a footgun this session has paid for repeatedly, and the reason
the population now comes from `FE.scan` rather than a re-implementation.

Nothing booked, no knob on, no write to a judged directory. The audit (pid 20748) still holds the harness.
