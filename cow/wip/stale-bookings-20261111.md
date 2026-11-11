# Stale bookings: 37.7% of the proven population has no evidence of re-proof — 2026-11-11

Found while explaining the 136-unit re-verify cluster: 62 of them had `pass` booked **before** their
source was last rewritten. Widened to the whole population with a standing tool,
**`tools/cow/stale_booking_audit.py`** (read-only, exits non-zero past 25% staleness).

## The number

```
HEAD f9ef85a5: claimed-proven rows = 5431
  STALE          : 2045  (37.7%)     <- source content changed after the pass was booked
  current        : 3386
  not auditable  : 0
```

Concentrated in three commits, which is what makes it a story rather than noise:

| source rewritten at | stale rows | what it was |
|---|---:|---|
| 11-07 05:46 | 1,300 | the argument-passing round ("3,741 of 5,233 proven") |
| 11-06 20:21 | 360 | |
| 11-06 22:53 | 186 | |

A lift that rewrites 3,741 units does not invalidate the verdicts recorded against the previous
bytes. It should.

## Why this is mostly a documentation problem, not a correctness disaster

Cross-read against the independent 2000-state re-verify:

| | count | reading |
|---|---:|---|
| stale **and** failing | **165** | **rows certifying bytes that no longer exist** — the real residue |
| stale but **passing** | 1,880 | bookkeeping only; the verdict still holds under an independent check |
| fresh and failing | 229 | genuine current-source failures (the wrap class + the open cluster) |

So 92% of the stale rows still pass. The likeliest explanation is benign: re-proofs happened but
produced an identical verdict, so the JSON never changed, **git recorded nothing**, and this audit
can only see the first booking. That is also the tool's declared limitation - it measures *absence
of evidence*, not proof of neglect. The 165 are the ones that matter.

## The fix this points at (not applied here)

The proofer should write the **hash of the source it judged** into each row (`src_sha`). Then
staleness is a comparison against a fact recorded at proof time instead of an inference from git
history, and it becomes immune to the identical-verdict case above. Until then:

* **do not un-prove the 2,045** - 1,880 of them are independently confirmed and un-proving them
  would be falsifying the population on a bookkeeping technicality;
* treat the **165** as the honest work list, and note which of them are already explained
  (the dropped `100dc1f0` wrap covers the deep-state class);
* when the ledger is next written by hand, say *what was re-judged*, not just the verdict.

## Method notes, because every one of these nearly produced a confident wrong answer

* Ledger keys are **bare hex8** (`100298f0`) while `reverify.json` stores `0x...`. With the wrong
  form the audit first reported **"0 of 136 ever booked pass"**. A tripwire asserting a unit known
  by eye to be stale is the only reason that was caught instead of shipped.
* Comparisons are at **minute** precision; day granularity against a 05:41 timestamp mislabelled 62
  units.
* `git log --name-only` reports only files whose **content** changed, so the audit does not fire on
  touch-only or line-ending churn (reverify's mtime touches had already made `git status` report
  10,547 "modified" files that `git diff` knew were unchanged).
