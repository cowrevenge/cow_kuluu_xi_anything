# The third frame defect: pops with nothing behind them (209 units, 208 fixed by a knob, 1 refused on purpose)

Found by following one NO-OP from the pricing run instead of discarding it, and by asking the counter a
question it had never been asked: `adapter_unpaired` only ever checked *pushed and never brought back*.
Nobody had checked the mirror.

## What it looks like, read off the two units that had no excuse

```
0x101c8950  guest: push 0x5b; push 0xc; … push edi (mid-body, an ARGUMENT push) … pop edi
            ours : pushes []              pops ['edi']      NOTE(machine): absent
0x101fcec0  guest: push ebx ×4 (mid-body, arguments) … pop ebx
            ours : pushes []              pops ['ebx']      NOTE(machine): absent
```

The epilogue comes from `m["pops"]` — the backwards walk genuinely saw the guest's `pop edi`. The
prologue comes from the leading instruction scan, which never saw a save that sat in the middle of an
argument sequence. So the adapter pops a word nobody saved: it reads the caller's stack into a register
and walks esp through stack this entry does not own.

**Correction to my own reporting.** `lift_overpop_join.py` first said 207 of 209 are "excused" by the
lift's `NOTE(machine): this entry also pushes N word(s) in the middle of its body` comment and **2 have
no excuse**. Read side by side, all 209 are the same shape — so the note under-reports by 2. A note that
misses 1% of the cases it exists to announce still misses cases; the honest phrasing is "the note fires
on 207 of the 209", not "2 unexplained".

## The rule (`COW_LIFT_FRAME_SYMMETRY`, off)

At the epilogue site, for every pop whose register the prologue did not push:

* **our text never writes that register → drop the pop.** Nothing was saved, nothing was disturbed, the
  restore returns the same value the register already holds, and the adapter pins esp afterwards. This
  is the `realised`/`unrealised` test from the push side, applied in the other direction.
* **our text does write it → REFUSE the unit.** This is the branch that matters. The tempting fix — hoist
  the guest's mid-body push into the prologue to complete the pair — is *not* sound: when that push was
  an argument push, hoisting it lowers esp for every call in the body, and the bridges compute their
  addresses from `g->esp` **at call time**, so side B would be four bytes off side A on every
  stack-derived address. A refusal leaves the unit unproven; the guess ships a corrupted frame that
  compiles and probably even passes its own seeds.

## Priced on its own population (`lift_symmetry_price.py`, real emitter)

```
  over-popping units                  : 209
  DROP the unpaired pop (fixed)       : 208
  REFUSED (we write that register)    :   1   0x102f749f -> frame_asymmetry_unrestored_eax
  controls byte-identical              : 40 / 40
```

The single refusal is the most informative line in the run: the counter had flagged `edi`, but the rule
stopped on **`eax`** — an unpaired `pop eax` where the body genuinely writes eax. eax is the return
value; dropping that restore would corrupt exactly what the harness compares first. The rule noticed and
declined.

Pre-flight (`lift_relift_preflight.py --list cow/wip/overpop-units.txt --knobs
COW_LIFT_FRAME_SYMMETRY`): **208 emitted, 0 rejected by the syntax gate, 0 new failures against
baseline**, and the gate's own capability control still separates a broken file from a good one. Full
regression green: inertness **125/125 byte-identical vs HEAD with all knobs off**,
`lift_matchpushes_check` 40/40 controls, `lift_tail_epilogue_check`, `lift_saved_regs_check`,
`lift_pushpair_check` all pass.

## Two bugs this thread caught in my own verification, worth keeping on the record

1. The first run of the rule raised `UnboundLocalError: 'frame'` — it appended its banner note before
   `frame` is built (the prose depends on which adapter shape is being emitted). A patch script's
   `compile()` cannot see that; six seconds of running it did.
2. When the pre-flight was pointed at a *single* custom knob, its assertion still checked the original
   hard-coded trio and refused with a message blaming knobs that were never part of the run. It now
   verifies the knobs it was actually given, by name — and note the direction of the failure: it refused
   rather than silently passing, which is the right way for a guard to be wrong.

## What is *not* claimed

Nothing has been re-lifted and nothing booked. Three knobs now sit off, each priced on its own
population: `COW_LIFT_EPILOGUE_MATCH_PUSHES` (143), `COW_MODEL_TAIL_POP_RUN`+`COW_LIFT_TAIL_EPILOGUE`
(+27), `COW_LIFT_FRAME_SYMMETRY` (208). They are priced **separately on purpose** — the same unit can
appear in two populations, so the combined effect is not their sum and a single combined number would be
a fabrication. The combined run is what the harness lock frees up for, and the payoff is still exactly
one sentence: **how many units newly pass `cowdiff`.**


## The re-lift is staged end to end (and every link has been made to say no)

| step | tool | what it refuses to do |
|---|---|---|
| decide the set | `lift_relift_price.py --list-out / --controls-out` | re-decided nowhere else; the runner reads its file |
| compile it | `lift_relift_preflight.py --list … --knobs …` | refuses to trust "0 rejected" unless its control shows the gate can reject; refuses a knob the module never read |
| apply + prove | `lift_relift_run.py` (default `--plan`) | refuses an inherited `COW_*`, a dirty judged directory, and stops before proving if the lifter touched anything outside the list |
| decide what it means | `lift_relift_verdict.py` | refuses to run at all without a scratch proof record; flags NO-VERDICT units instead of calling the sweep done; **writes nothing** |

Current plan, validated (not executed):

```
  units     : 170   (list sha 39fae9b4cf30)   controls: 40 (relift-controls.txt)
  knobs     : COW_LIFT_EPILOGUE_MATCH_PUSHES, COW_MODEL_TAIL_POP_RUN, COW_LIFT_TAIL_EPILOGUE
  pinned    : 7d3118434a        proof record: cow/wip/relift-proof.json  (SCRATCH)
```

The 40 controls are **frame-symmetric in both directions** by the library predicates - independently
re-checked after generation, 0 violations - and they are proved in the same batch as the changed units,
because "byte-identical in the emitter" is a claim about the emitter; only the harness gets to say
whether an untouched unit still works. `lift_relift_verdict.py --selftest` is the part I am happiest
with: it demonstrates that the bucketing can see a gain, a regression, a no-help, a missing row, and a
broken control (a broken control deliberately counts as both a regression and an alarm - the first
version of that test asked for disjoint sets, which would have let a broken control disappear from the
regression count).

Two bugs in my own tooling surfaced while staging it, both worth keeping visible: a print-and-write
block referencing a variable (`identical`) that had never existed in the file - a patch written from
memory of the tool instead of from its code - and an anchor guessed rather than read. Both died loudly
on first use, which is the correct outcome and the reason the flags were exercised before the run
instead of during it.
