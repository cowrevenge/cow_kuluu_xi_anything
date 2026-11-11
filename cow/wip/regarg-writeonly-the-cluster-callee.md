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

## Where this sits in the halt — and why the cluster word is not a conversion target

The canonical tool is **`tools/cow/reverify_bucket.py`** (I built a second copy today,
`lift_reverify_buckets.py`, and have deleted it: the brief's rule is no second copies, and its buckets were
worse). It sorts the audit's 394 failures by CAUSE:

```
DEPTH-ONLY                  161  (41%)   diverges above the ~400 the booking reached; the judge ran 2000
DEAD-STACK-RESIDUE          137  (35%)   one word, stack region
RUNNER-OR-STATE-DIVERGENCE    52  (13%)   fault asymmetry - one side access-violates, the other does not
CONTRACT-VIOLATION            30   (8%)   real register/behaviour mismatches (mostly eax)
NO-VERDICT(UNREPORTED)       11   (3%)   the runner never compared it - no conclusion available
VALUE-MISMATCH                3   (1%)
```

**The cluster family is DEAD-STACK-RESIDUE, and that is now measured rather than assumed.** The audit record
stores only the flat `COWDIFF FAIL` line, which carries no esp, so the below-esp question cannot be answered
from it. `cowdiff_deadstack_probe.py` asks the judge for its `--json` per-state line instead. Run on this
family today, including the callee the veto fixed:

```
0x10010350  state 0 memory slot=@00993b60 A=10313417 B=00000000 | esp 00993be4/00993be4 AGREE | BELOW final esp | blocks 5/5
0x10014c90  state 0 memory slot=@00993b48 ...                    | esp AGREE | BELOW final esp | blocks 11/13
0x100298d0  state 0 memory slot=@00993b60 ...                    | esp AGREE | BELOW final esp | blocks 3/3
0x100298f0  state 0 memory slot=@00993b60 ...                    | esp AGREE | BELOW final esp | blocks 5/5
0x10029930  state 0 memory slot=@00993b60 ...                    | esp AGREE | BELOW final esp | blocks 5/5
0x103134c6  state 0 memory slot=@00993b68 ...                    | esp AGREE | BELOW final esp | blocks 9/9
6 of 6 differ ONLY below the final esp  =>  rc=0  comparison scope, not conversion
```

Consequences, stated plainly:

* **The multi-session hunt for the "cluster word" was aimed at the wrong thing.** The `10313417` the entry
  writes is a return address pushed below the esp both sides agree on - stack space the entry's own `ret`
  has already abandoned. Re-lifting or un-proving units for it bends correct code to satisfy a comparison
  of garbage. What was genuinely broken in that callee was the invented register argument, and the veto
  removed **9 of its 10** mismatches; the tenth is this.
* **298 of the 394 (depth-only + dead-stack) are about how the audit compares, not what the lift computes.**
  The real conversion questions are the 30 contract-violations, the 52 fault asymmetries and 3 value
  mismatches.
* **DEPTH-ONLY is not "these units are fine."** It means the booking claims 400 states and the judge looked
  at 2000. The honest options are to re-prove those units deeper (raising what the booking claims) or to
  compare at the depth the booking actually made - **not** to un-prove them, and not to relax the judge: a
  change that turns a FAIL into a PASS is forbidden, and widening what the judge ignores is exactly that
  shape of temptation.
* To tell those two options apart quantitatively, a full audit at `reverify.py --depth booked` is running to
  **scratch** (`build/scratch/reverify-bookeddepth.json`). It deliberately does not touch `cow/reverify.json`,
  because that file is the halt's evidence and overwriting it with a more favourable run would be the halt
  lifted by argument rather than by proof.

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
3. **Do not chase the cluster word any further.** It is measured dead stack (6/6, esp agreeing, slot
   below final esp). Before acting on ANY single-word memory row, run
   `tools/cow/cowdiff_deadstack_probe.py` - the audit record cannot answer the question, and acting on
   the bucket without the probe is how correct code gets re-lifted to satisfy a comparison of garbage.
4. The genuine halt targets are now small enough to name: **30 contract-violations** (mostly `eax`),
   **52 fault asymmetries**, **3 value mismatches**. That is ~85 units to investigate, not 394. Start
   with the contract-violations, which were previously drowned out by the other two buckets.
5. Read the `--depth booked` audit when it lands (`build/scratch/reverify-bookeddepth.json`) and report
   both numbers side by side. Do **not** overwrite `cow/reverify.json` from it - that file is the halt's
   evidence, and re-basing the halt is the user's call, not a side effect of a convenient run.
