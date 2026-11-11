# 58 of the 66 credible clobbers are one defect: the push is emitted but not modelled

Measured 2026-11-11 with `tools/cow/ghidra/lift_clobber_predicate_blindness.py --halfmodel SINGLE-EXIT`
(static; no builds, no cowdiff). Complements `clobber-count-corrected.md`, which reduced 168 claimed
clobbers to 66 the predicate can actually judge.

## The split

| count | shape | what breaks |
|---:|---|---|
| **58** | **push emitted but not modelled** | **esp AND the register** |
| 8 | save dropped entirely | register only; esp stays consistent |

Examples: `0x10003070(edi)`, `0x1006c050(esi)`, `0x10072db0(edi)`, `0x10098f50(edi)` / and
`0x10072c30(esi)`, `0x10131810(esi)` for the second group.

## The mechanism

Guest `f_10003070`:
```asm
10003073: push edi
...       edi = edx + 0x48
1000309a: pop edi
```
Our lifted file emits the save:
```c
g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10003073: push edi */
g->edi = (uint32_t)((uint32_t)(g->edx + 0x48u));
```
but the frame model says:
```
MODEL  pushes=['ebx']  pops=['ebx']  locals=0
```
so **nothing restores it**: `edi` returns as `edx + 0x48`, and esp is left 4 below where the guest
returns it.

It is a *disagreement*, not an omission - two components read the same `push <reg>` and reach different
conclusions:

- the **body replayer** sees it and emits the store;
- **`model_generated`'s frame read-back** does not record it in `pushes`, so no pop is ever paired with it.

So the fix is a single-source-of-truth question, not a whitelist entry: whichever component drives the
epilogue must be the one that decides the body's pushes, or both must consult the same list. Adding
registers to only one side leaves the two halves able to disagree again.

## What this is NOT (two claims I made and then checked)

**Not a lead for the 136-cluster.** An earlier draft called these "the strongest remaining lead" for the
cluster signature, because a broken esp plus a stale word in a compared stack slot look like the same
story. Checked against `cow/reverify.json`:

```
cluster size                   : 136
overlap  cluster x flagged-66  : 0
overlap  cluster x the 58      : 0
```

Disjoint populations. Similar shape, no shared units. The cluster remains **unexplained** after three
candidate mechanisms have been examined and rejected: the dropped `100dc1f0` wrap, booking depth, and
now this.

**Not a false green.** An earlier draft said all 58 "sit in the claimed-proven population", implying
`cowdiff` is blind to a clobbered callee-saved register. Spot-checking the four examples the tool prints
against the ledger:

```
units named in the bucket      : 4
booked pass in the ledger      : 0
```

**None is proven.** That is what a broken lift is supposed to look like - it fails proof and stays in
the unproven pool, so this is the pipeline working, not a coverage hole. The judge-blindness framing is
retracted.

*Full-population check (done, not deferred).* Counting the shape across every single-exit body and
joining to `cow/lift_proof_all.json`:

```
units matching PUSH-EMITTED-BUT-NOT-MODELLED : 74
  booked pass in the ledger  (candidate false greens) : 12
  unproven                   (pipeline correctly refusing) : 62
  e.g. 0x100ebd70, 0x100ef950, 0x1018c6b0, 0x10284970,
       0x102de39f, 0x102de613, 0x102de762, 0x102de9f4
```

So **62 are the system working correctly** - a broken lift fails proof and stays unproven. But **12 are
booked as proven while carrying a clobbered callee-saved register and an esp that is off by four**. Four
of those (`0x102de39f`, `0x102de613`, `0x102de762`, `0x102de9f4`) also appear among the 394 re-verify
failures, so the ledger's `pass` is already contradicted for them independently. Those 12 - not 74, not
58 - are the units that reopen the judge-coverage question, and each needs an individual look before any
claim about `cowdiff` blindness is made.

**And a warning about the two numbers above.** The tool's `--halfmodel` reported **58**; this inline
count reports **74** for what should be the same population. The predicates differ in how they treat
multi-exit and LIFO-cleared bodies. That is precisely the failure this file has been about: a second
copy of a filter producing a second number for one population. Neither figure is authoritative until the
predicate exists in exactly one place and both counts are drawn from it. Quote neither 58 nor 74 as
"the" count; quote the tool's, and reconcile them before any fix is sized against it.

## Why it is still worth fixing

58 units that cannot pass proof because of one systematic disagreement is a throughput item, and the
defect is mechanical rather than mysterious. It is also the third distinct frame-handling defect found
in this area today (the `add esp` run-breaker, the LIFO contiguity rule, and this emitter/model
split), which suggests `gen_model`'s frame read-back and the body replayer need a single shared
definition of "what this entry pushes" rather than three patches to two readers.

The 8 `SAVE DROPPED ENTIRELY` units are a different bug - no push statement and no model entry, so esp
stays consistent and only the register leaks. Fixing the disagreement above will not touch them.

## Deliberately not done

No fix attempted. It changes plumbing shared by every lifted unit and needs `lift_selftest` cases per
shape, a knob, and a measured sample - and since these units are (so far) unproven, the payoff is
measurable directly: how many of the 58 newly pass `cowdiff` after the fix. The population audit still
owns `build/`.
