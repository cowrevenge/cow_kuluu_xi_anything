# Correction: the "168 open clobbers" figure was inflated by my own predicate

Supersedes the headline in `cow/wip/open-clobbers-shapes.md` (and the "168 genuinely open" line in
the `b34fb597`/`3706c65c` commit messages). Reproduce with
**`tools/cow/ghidra/lift_clobber_predicate_blindness.py`** (static; no builds).

## What happened

I reported 168 units as clobbering a callee-saved register. Reading two of them end to end — the
same technique that found the real `add esp` defect — showed they were not clobbers at all. The
predicate asks a single question, *"does the lifted file contain a `pop <r>` restore?"*, which
silently assumes **the guest has exactly one epilogue**. Real bodies do not.

`0x100641b0`, printed verbatim:

```
GUEST   100641b0: push esi   /   esi = ecx   /   100641e2: pop esi
OURS    Frame...: 1 push(es) [esi]          FRAME: Convention: ... no return (tail call).
```
The push **is** modelled. It is a tail call, so the restore belongs to the tail path and is handled
by different machinery — the absence of an epilogue pop proves nothing.

`0x10057010`: the guest has **one `push esi` and two `pop esi`** — multiple return paths, each with
its own restore. A single backwards "epilogue run" can only ever see the last one.

## The re-classification

| count | class |
|---:|---|
| ~58 | pop/push count mismatch for the register — suspect shape, **not** a confirmed clobber |
| 30 | **tail-call** — restores live on the tail path; predicate cannot judge |
| 13 | **multi-exit** (3,4,6,8,10 returns) — one epilogue run cannot see them all |
| **66** | **single-exit, clean shape — the credible clobber population** |

**Report 66, not 168.** The other 102 are a limitation of the tool. Calling them clobbers would be a
claim about the lift that is really a claim about my predicate — and this session has already had to
retract two figures of exactly that shape (the "~320", and the "0 of 136 ever booked pass" that came
from a key-form mismatch).

## What this changes for the work

- The LIFO pairing fix (`COW_MODEL_EPILOGUE_LIFO`, 12% of 168) should now be read against the
  credible set: it clears ~21 units of a class that is itself only 66 deep.
- The tail-call and multi-exit populations need a **different** question than "is there an epilogue
  pop": for those, correctness means every return/tail path restores what the guest restores. That is
  the `intra_tail_jumps` / `_pop_run_directly_above` machinery, which already exists — the right test
  is whether each path's pops match each path's pushes, not whether one contiguous run exists.
- Do not treat 66 as "66 confirmed bugs" either. It is *66 units the predicate can judge and does
  judge as clobbers*; each still needs a re-lift + `cowdiff` before it is called a defect.

## Standing lesson

A filter that silently cannot judge a whole class of input does not report "unknown" — it reports
**negative**, which reads exactly like a finding. The fix is not to be careful, it is to make the
tool say which inputs it could not evaluate: this re-classifier exists only because printing the
restore forms *verbatim* made a false positive impossible to miss.
