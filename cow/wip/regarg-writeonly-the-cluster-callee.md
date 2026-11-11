# The register argument the entry only ever WRITES — and the cluster callee it explains

Status: **machinery landed** (`ab463d4a` + the correction commit), knob `COW_MODEL_REGARG_WRITEONLY`
**OFF by default**, **nothing booked** (the halt stands). Measured result in one line: **16 units
FAIL→PASS, 0 PASS→FAIL, 0 of 40 byte-identical controls flipped**, against a committed-bytes baseline
in the same build.

## The mechanism, in one line

`gen_model._reads_before_write` decides whether ecx/edx "arrive populated" and become register
arguments in the adapter. Its write test is

```python
pat_write = re.compile(r"(?m)^\s*%s\s*=\s*\(uint32_t\)\(" % reg)
w = pat_write.match(stmt.lstrip()) or pat_write.search(stmt)
if w and w.start() <= stmt.find(reg): ...
return True          # <-- reached whenever w is None
```

`(?m)^\s*` recognises an assignment **only when it opens a line**. The recompiler lowers many
instructions into a block whose first line already carries other statements:

```
/* 103134d3: pop ecx */
{ uint32_t v = rd32(esp); esp += 4; ecx = (uint32_t)(v); }
```

`w` is None, the loop falls through to `return True`, and a register the entry only ever **writes** is
booked as an **incoming argument**.

## The population

`tools/cow/ghidra/lift_regarg_census.py` over `generated/all` — 21,891 bodies, through the real parser
(`model_generated`), with a classifier self-test in **both** directions that refuses to print a number
if the classifier gets a hand case wrong:

```
   10512  ecx/read-CLAIMED        <- genuine thiscall arguments, untouched by the veto
    1014  edx/read-CLAIMED
     733  ecx/write-only          <- correctly not claimed today
     363  ecx/write-only-CLAIMED  <- the defect
       3  edx/write-only-CLAIMED  <- the defect
SUSPECT entries: 366   lifted today: 163   recorded pass=True in the map: 114
```

## Why this is the cluster's callee

`0x103134c6` is the shared callee behind **123 of the 161 genuine failures at `@00993b60`**. Its guest
body (`generated/all/funcs_052.c:14563`, read in full this session):

```
103134c6: push dword ptr [esp + 4]      <- the CALLER's first stack argument
103134ca: call 0x10313448               <- pushes 0x103134CF; the callee's ret pops it
103134cf: neg eax
103134d1: sbb eax, eax                  <- eax = (eax != 0) ? 0xFFFFFFFF : 0
103134d3: pop  ecx                      <- ecx := the word it just pushed   (its ONLY mention of ecx)
103134d4: neg eax
103134d6: dec eax                       <- eax = (eax != 0) ? 0 : 0xFFFFFFFF
103134d7: ret
```

Shipped lift (read by eye before anything was believed):

```c
void cow_lift_103134c6(Guest* g, CowU32 param_1) {
    iVar1 = cow_bridge_10313448(g, COW_IMG(COW_ADDR_LIFT_103134CF), 1u,
              (const CowU32[]){ param_1 }, param_1, g->edx, g->eax, 0u);
    g->eax = (CowU32)((iVar1 != 0) - 1); return;
}
/* adapter */  CowU32 param_1 = g->ecx;   /* ecx argument */
```

With the veto:

```c
    iVar1 = cow_bridge_10313448(g, COW_IMG(COW_ADDR_LIFT_103134CF), 1u,
              (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);   /* ecx_in left ALONE */
/* adapter */  CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));   /* the guest's actual read */
```

The word the guest pushes is the caller's stack argument; the lift was pushing the caller's leftover
**ecx** into that slot. `((iVar1 != 0) - 1)` is the correct rendering of `neg/sbb/neg/dec` — worked out
from the flag definitions in the generated body and it matches.

For a **caller** (the `100103xx`/`100298xx` family that pushes a constant and calls this callee) the
rewrite is value-preserving: it had invented `param_1 = g->ecx` and forwarded `param_1` as `ecx_in`, so
the bridge received `g->ecx` both ways; the parameter simply stops existing. Reading the proof needs
that distinction — a caller changing bytes is not the same event as the callee changing meaning.

**Effect on the callee's own verdict: 10 mismatches → 1.** The remaining one is
`@00993b68 10313417/00000000` — the same word the cluster investigation is about, written by
`rt_call_indirect`'s return-address push inside the **original** subtree (both sides run the original
below the entry). So the veto is **necessary and not sufficient** for the cluster, and the tenth word
is still the open question, not a veto failure.

Verified by reading, not memory: `layout/lifted_bridges.c`'s `cow_bridge_103134c6` calls **`f_103134c6`**
(the generated original), never `cow_adapter_103134c6`. Lifted code runs only at the entry.

## The zero that was a bug — kept here as the mistake

The first version of this note, the committed body of `ab463d4a`, the spec docstring and a `gen_model`
comment all said:

> not one of the 366 is recorded pass=True in cow/lift_proof_all.json — the shape is uniformly fatal

**That was false.** It came from

```python
proof.get("0x" + x)          # the map is keyed by BARE hex: '103134c6'
```

Every one of 21,891 lookups missed, and a perfect zero fell out. The real figure is **114 of 366**
recorded passing. Nothing about "uniformly fatal" was ever true, and the safety argument I built on it
("no proven unit can be lost") was built on a key-format bug. Two rules re-learned the hard way:

* validate a counter against a by-eye exemplar *before* quoting it — the exemplar here
  (`103134c6`) is in the map, so one lookup would have shown the miss;
* a zero is only evidence if the predicate has been shown capable of firing.

Now enforced in code: **`tools/cow/ghidra/lift_proof_map.py`** is the only allowed way to ask the map a
pass/fail question, and it refuses until it has retrieved a row it knows exists.

Sweeping for the class found a **third** instance in shipped machinery: `lift_local_feasibility.py`'s
by-eye tripwire looked up `"0x" + EXEMPLAR` in its own bare-hex dict, so it printed *"the tripwire is
skipped, so do not treat the buckets as verified"* — forever, and on every run. Normalised, and an
absent exemplar is now fatal instead of a note.

## What the proof batch said, and what it actually meant

The re-lift joined to `cow/lift_proof_all.json` reported **+17 / −3, one of the losses a control**. I
was about to report that as "the knob breaks a unit it never touched" — except the control
(`10014c90`) has `changed_files: 163` / `unexpected_changes: []` and is **not in the census**: its
bytes never moved, so the knob cannot have broken it. Joining one batch to a *stack of bookings*
accumulated over many builds measures the knob **and** the bookings' staleness together — and 394 of
those bookings do not pass cowdiff today, which is the very reason the loop is halted. All three
"regressions" (`10010350`, `103272b5`, `10014c90`) fail at committed bytes too, with the cluster's own
signature `10313417/00000000` in the frame window. They are stale bookings, not regressions.

So the cohort was proved **twice in one build** — the veto arm and a fresh committed-bytes baseline
(`build/scratch/regarg_crosstab.py`):

```
                  units   CONTROLS
FAIL->PASS           16        0
PASS->FAIL            0        0
PASS->PASS          113       39
FAIL->FAIL           37        1

NOISE FLOOR from the byte-identical controls: 0 of 40 flipped verdicts between two runs.
```

16 gained, none lost, and the controls (identical bytes in both records) did not move at all — which is
what makes the 16 attributable to the bytes rather than to the harness.

`tools/cow/ghidra/lift_proof_noise.py` is the permanent version of that measurement: same units, same
tree, same seed, N runs, and it refuses a dirty judged tree, a crashed run, an empty record, and rows
that are harness non-verdicts (`awaiting_solo`, "reported nothing") so a harness problem cannot be
counted as a flip.

## Also measured

* **Knob-off inertness, against the tree**: the OFF arm's bytes equal `src/lifted` on all 171 shipped
  units, so the ON delta is the knob and not lifter drift. (This was *not* covered by
  `cow/wip/inertness_check.py` — that script hard-codes one knob and does not enumerate them, so
  "125/125 inert" said nothing about this one.)
* **Compiler**: both arms through `lift.py --gate-dir` and the real syntax gate: emitted 174,
  **compiled 171**, same 3 pre-existing non-compilers in both. The veto breaks 0 and fixes 0 in the
  compiler — its effect is inside the bodies, which is cowdiff's question.
* `lift_regarg_writeonly_spec.py`: 18 model cases over both arms + 10 `reg_never_read` cases, with a
  can-fire tripwire on the write-only verdict. `lift_selftest` 268/268, inertness 125/125,
  `lift_relift_run_check` green, lock spec green, suite green.

## NOT claimed

* **Nothing is booked.** The halt stands; the 16 gainers are evidence, not conversions.
* That the veto is complete. `tail_writes` is empty for `0x103134c6`, so nothing publishes the guest's
  `pop ecx` into `g->ecx`; the guest leaves ecx = the popped word, the lift leaves it alone. A unit
  that still fails on **ecx** is evidence about the tail-write gap, not against the veto.
* That 366 is the whole defect: the classifier treats any unclassifiable mention as a read, so
  `ecx/write-only` (733, not claimed today) and `ecx/read-CLAIMED` (10,512) are untouched.
* That 40 clean controls generalise. They are 40 units in one batch at one seed; `lift_proof_noise.py`
  exists so the next claim can be measured rather than assumed.

## Where this sits in the halt (measured after the veto landed)

`tools/cow/ghidra/lift_reverify_buckets.py` parses the audit's own verdict lines
(`cow/reverify.json`: claimed 6405, **failed 394**, commit `02b111fca3`) instead of treating them as a
pile:

```
cause    memory 222 · eax 84 · fault 52 · edx 22 · callee-saved register 1 · call count 1 · esp 1
         unparsed 11 (9 harness timeouts + 1 LNK1104 + 1)  <- NOT unit defects
depth    141 at STATE 0 · 15 at 1-99 · 58 at 100-499 · 180 at 500+
overlap  193 frame-window writes · 136 of them carry 10313417 · 65 in this veto's cohort
         392 of 394 recorded pass=True in the map today
```

So the veto's cohort overlaps **65 of the 394** — it is not the halt's cause, but it is a sixth of it,
and the veto gained 16 of those in one batch with zero controls moving.

**The tenth word is now the halt's single biggest lever: 136 of 394.** `esi`, which gates the branch
that writes it, is loaded at `0x1031314a: mov esi, [ebp + 0xc]` — a **caller-supplied stack word**
(`funcs_052.c:12498`), compared at `0x1031316e` and again at `0x103133f6` before
`0x103133f9: ja 0x10313417`. Both sides run this as the original, so the divergence is injected above
it: either our bridging lands a frame one word off (so the retaddr overwrites the argument slot that
`[ebp+0xc]` reads), or our entry never publishes a register/flag the subtree inherits. Both are
testable, and neither is testable by reading — they need the two-sided capture.

## A theory I killed before it cost anything

The 106 register-return failures (`eax` 84 + `edx` 22) looked like the tail-write gap — same mechanism
that leaves this callee's `pop ecx` unpublished. A 2×2 over their generated bodies
(`build/scratch/regtail_cohort.py`, which refuses if the four cells do not sum to the cohort):

```
     0  written-after-last-call / NOT-published      <- the predicted cell. EMPTY.
     0  written-after-last-call / published
    68  not-written-in-tail  / NOT-published
    38  not-written-in-tail  / published
```

**0 of 106.** The tail-write gap is not the mechanism for that family, and no fix was written for it.
The `38` where our file publishes a register the guest's tail does not write is *not yet* a defect
either: a body-level `g->eax = (CowU32)(...)` carrying Ghidra's return value is legitimate, and my
"tail" window is a naive proxy for "the guest never sets eax". The likelier mechanism is the **callee's
return value through the bridge** (caller-saved `eax` after a trailing call). That gets its own
measurement against a unit read by eye before it gets a mechanism — which is exactly the discipline the
`38` would have violated if I had reached for them.

## The judge is reproducible, and the one anomaly was my own instrument lying

I wrote a section here claiming chunk-vs-solo **path dependence** in the judge, on the strength of
`lift_proof_noise` reporting that `0x10014c90` passed in a 206-unit baseline and failed elsewhere, and
that `0x103134c6` showed 10 mismatches alone against 1 in-chunk. **Both readings were artifacts of my own
tool**, and the retraction matters more than the original claim:

`lift_proof_noise` wrote its records to fixed filenames and deleted them at the start. My second
invocation (the 40-unit control list) **overwrote the 206-unit records**, so the "repeated baseline" it
compared the re-lift against was a 40-row record being asked about 206 units. And the `10 vs 1`
comparison compared **committed bytes** (the alone run) against **veto bytes** (the re-lift chunk) - two
different things, one unit.

Re-measured properly, with a third independent 206-unit batch on the committed tree
(`build/scratch/batch_truth.py`):

```
baseline  rows 206  pass 152        (206 units, `--rerun`)
r2        rows 206  pass 152        (206 units, no --rerun, different invocation)
veto      rows 206  pass 168        (the veto's bytes)

committed-byte batches disagree on : 0 of 206      <-- the judge reproduces across batches
veto arm vs BOTH committed arms    : gained 16, lost 0
0x103134c6  committed: 10 mismatch(es) @00993b68 (map, baseline, r2 - all three agree)
            veto     :  1 mismatch(es) @00993b68
```

So, stated plainly:

1. **The judge is reproducible.** Two independent 206-unit batches over identical bytes agree on every
   one of 206 verdicts. There is no evidence of chunk-vs-solo disagreement, and I should not have
   proposed one before checking which records a tool was actually reading.
2. **The 16 gains are stable against two independent baselines, with 0 losses** - which is the strongest
   form this measurement is available in today, and is why they are worth booking once the halt lifts.
3. **The cluster callee genuinely went 10 mismatches → 1** from the veto's bytes, same address, same
   window, same seed. The tenth word is the cluster's own; the other nine were the invented argument.
4. **`0x10014c90` is a stale booking, not a contamination event.** It fails in both fresh committed
   batches and in the veto arm, and `pass=True` only in `cow/lift_proof_all.json`. My control list was
   built from that map - the same map the halt says is wrong 394 times - so `lift_relift_controls.py`
   selected a dead control and I nearly built a harness defect out of it. Controls must be validated
   against a **fresh batch**, not against the booking map.

The permanent lesson is the one this session keeps paying for: before interpreting a number, check which
artifact produced it and whether it still exists. Three of today's retractions (the vacuous zero, the
inverted map counter, this one) are all "trusted a counter without checking its provenance".

## Next

1. Re-earn the 16 with `lift_proof_noise.py` (two baseline runs + two veto runs) before any booking is
   even discussed — and only after the halt is lifted.
2. The `pop reg` tail-write gap: `tail_reg_writes` truncates at the last `call`, and cannot name
   `pop ecx` because the value is a load (`rd32(esp)`). The push→pop identity for a slot the entry
   itself pushed, with no store in between, is the provable case — and it is a *new* population, so it
   needs its own census and baseline pair, not a ride on this one.
3. The cluster's remaining word (`@00993b68 10313417/00000000`) still needs the two-sided capture at
   the entry of `f_10313110`; the veto removed nine of the callee's ten mismatches and left this one.
