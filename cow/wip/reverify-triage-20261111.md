# First full independent re-verify — 2026-11-11

Run: `python tools/cow/reverify.py --jobs 8`, started 02:21, finished 10:38 (**8h17m / 29,842s**).
Record: `cow/reverify.json` (pristine copy: `cow/wip/reverify-02b111fc-full.json`).
Stated commit: `02b111fc`. **Population: 6,405 checked / 6,011 passed / 394 failed (6.2%)**, 2000 states, seed 12345.

## Read this before using the number

**HEAD moved during the run.** 19 commits landed between `02b111fc` and `98fa3183` while the sweep
was in flight, and `show_head()` asked git for `"HEAD:"` on every single unit. So units judged at
03:00 and at 10:00 judged *different trees*, while the report carried one SHA. The 394 are an
aggregate over nineteen trees, not a certification of any one of them.

Fixed in this commit: the run now resolves the commit **once**, uses that SHA for every read, and
refuses to certify (`head_moved`, exit 1) if HEAD is not the same at the end. Until a clean sweep
runs against a quiet tree, **this list is a lead list, not an audit.**

Do **not** un-prove anything from it. The brief and LOOP.md both say: report, do not quietly
edit a ledger to make a finding disappear.

## The triage (this is the part worth the 8 hours)

| first divergence | count | what it means |
|---|---|---|
| state **< 300** | **158** | below the depth they were *booked* at (300/400) — should have failed booking |
| state 300–400 | 21 | within booking depth |
| state **> 400** | 202 | never reachable at booking depth — the depth artifact the queue predicted |
| timeout (1800 s) | 9 | separate class, not a content verdict |
| unparsed | 4 | 1 is `LNK1104 cannot open build\cowdiff\cowdiff_10017bd0.exe` — **tooling, not a unit** |

kinds: memory 222, eax 84, fault 52, edx 22, esp 1, timeout 9, unparsed 4. tracks: lift 392, hand 2.

## It is not 158 bugs — it is close to one

Of the 158 below-depth failures, **123 share a single signature**:

```
(memory) @00993b60  ours=10313417  theirs=00000000  x11 stack
```

with 8 siblings at `0x993b58/b54/b48/b44/b38/b70/b78` carrying the same value. One mechanism, many units.

`0x10313417` is **not a symbol** — it is nowhere in `layout/` or the generated headers; it appears only
as a branch target in `generated/all/funcs_052.c` (`103133f9: ja 0x10313417`). So our side leaves a
**code address** in a guest stack slot the guest has as zero — the shape of a stale return address in a
slot neither side deliberately wrote. In the beyond-400 class the same slot pair appears in **both
directions** (`ours=10312fc7/theirs=0` *and* the reverse at `0x993b84`), which points at uninitialised
stack being compared rather than a wrong computation.

Hand-confirmed, twice, at current HEAD: `0x10010350` fails **at state 0** with that signature at both
`--states 300` and `--states 2000` (seed 12345), from sources byte-identical to HEAD — while
`lift_proof_all.json` records `pass: True, states: 400, blocks 5/5` at HEAD *and* in the working tree.
That is a genuine false green under the queue's own definition ("if a rebuild ever flips PASS → FAIL,
that is a false-green emergency").

## Where I would go next

1. The 123-unit cluster first — one fix, and it is a *judge-integrity* question: does the compared
   stack window include slots outside what the callee owns? If so the same noise can produce false
   greens elsewhere, in both directions.
2. The 9 timeouts are a separate class; triage apart from content bugs.
3. The 202 beyond-400 ones are not indictments of the lift — they say booking depth is too shallow.
   Read `cow/wip/loop-notes.md`'s depth fork before raising the floor unilaterally.
4. Then re-run the full sweep on a **quiet tree** so a result can actually be attributed.

## Two defects in the tool itself, found by using it

1. **Unpinned HEAD** (above) — the report looked attributable to one commit and was not.
2. `print("wrote %s" % os.path.relpath(a.out, ROOT))` raised `ValueError: path is on mount 'C:',
   start on mount 'D:'` **after** a successful run, turning a good audit into a traceback. A cosmetic
   label must not be able to kill a completed run.

Both were caught only by running the thing against known-bad and known-good inputs — the same
discipline that keeps catching detectors which quietly match nothing.
