# The halt's real size, measured — 394 is not 394 units of broken conversion

Status: **measurement only.** `cow/reverify.json` (the halt's evidence) is **untouched**; every number here
came from a scratch output. Nothing was un-proved, no ledger row changed, no verdict was written back. The
halt stands exactly as it was.

## Why this needed measuring

The loop is halted on one sentence: *"independent re-verify FAILED at 02b111fca3: 394 of 6405
claimed-proven unit(s) do not pass cowdiff."* Treated as one number, that implies 394 conversion bugs.
`tools/cow/reverify_bucket.py` sorts the same 394 by CAUSE, and `cowdiff_deadstack_probe.py` answers the one
question the audit record structurally cannot (it stores the flat `COWDIFF FAIL` line, which has no esp):

```
DEPTH-ONLY                  161  (41%)   diverges above the ~400 the booking reached; judge ran 2000
DEAD-STACK-RESIDUE          137  (35%)   one word, stack region
RUNNER-OR-STATE-DIVERGENCE    52  (13%)   fault asymmetry - one side access-violates, the other not
CONTRACT-VIOLATION            30   (8%)   real register/behaviour mismatch, mostly eax
NO-VERDICT(UNREPORTED)       11   (3%)   the runner never compared it - no conclusion available
VALUE-MISMATCH                3   (1%)
```

## Measurement 1 — the dead-stack family is scope, not conversion

`cowdiff_deadstack_probe.py` on 6 units of the `@00993b68 10313417/00000000` family, including
`0x103134c6` (the callee the register-argument veto fixed):

```
0x10010350  state 0 memory slot=@00993b60 A=10313417 B=00000000 | esp 00993be4/00993be4 AGREE | BELOW final esp | blocks 5/5
0x10014c90  ...  | esp AGREE | BELOW final esp | blocks 11/13
0x100298d0  ...  | esp AGREE | BELOW final esp | blocks 3/3
0x100298f0  ...  | esp AGREE | BELOW final esp | blocks 5/5
0x10029930  ...  | esp AGREE | BELOW final esp | blocks 5/5
0x103134c6  state 0 memory slot=@00993b68 ... | esp AGREE | BELOW final esp | blocks 9/9
6 of 6 differ ONLY below the final esp  =>  rc=0  comparison scope, not conversion
```

Both sides agree on esp, registers and fault; the lone difference is stack space the entry's own `ret` has
already left behind. **Do not re-lift or un-prove these.** Note `0x10014c90` at 11/13 blocks — the one row
where coverage is not complete, so its classification is the softest of the six.

## Measurement 2 — the depth-only rows at the depth they were booked

`reverify.py --depth booked` over exactly the 161 (extracted with the tool's own `classify()`, so the list
and the bucket cannot disagree — it returned 161, matching the census):

```
reverify at 19ac1826c4: selected=161
  50/161 settled, 0 failed (264s)   100/161, 0 failed (545s)   150/161, 0 failed (840s)
REVERIFY: checked=161 passed=160 failed=1 in 907.9s
```

**160 of 161 pass at the depth their booking claims.** They failed only because the judge looked at 2000
states while the booking was made at ~400. That is not a violated claim; it is an *under-deep* claim. The
honest response is to prove them deeper, not to relax the judge — widening what the judge ignores would
turn FAILs into PASSes, which is forbidden and is exactly the temptation this bucket invites.

## The one genuine failure this surfaced — REPORTED, not un-proved

```
FAIL 0x102da1d8 [hand] 1 mismatch(es), first at state 1311 (memory) fault 0/0
     @1017ce8c 7fd01004/7fc01002 x2 image
```

* **`hand` track**, not lift — a hand-written unit that the record calls proven and does not pass.
* Image memory (`@1017ce8c`), both sides **nonzero and differing** (`7fd01004` vs `7fc01002`), 2 mismatches,
  first at state **1311** — deep, so it is seeding-dependent and it survived 1310 states before diverging.
* It is not dead stack (image region, both nonzero) and not a runner artefact. It is a real question.

Nothing was done to it. Per the standing rule and the tool's own closing line — *"Report them; do not
un-prove them by editing a ledger"* — it goes to whoever takes the next unit, via normal tools.

## What the halt actually costs

| group | rows | is it a conversion bug? |
|---|--:|---|
| depth-only, verified passing at booked depth | 160 | no — booking is under-deep |
| dead-stack residue (probe: 6/6 below esp) | 137 | no — judge scope |
| runner never answered | 11 | unknown — re-measure, don't assume |
| fault asymmetry | 52 | **investigate** |
| contract-violation (mostly eax) | 30 | **investigate** |
| value mismatch | 3 | **investigate** |
| depth-only that failed anyway (`0x102da1d8`) | 1 | **investigate** |

So the halt is **~86 units of genuine investigation**, not 394 — plus 160 units that need proving deeper
and 137 that need a judge-scope decision someone must make explicitly and in the open, not as a side effect.

That is a re-basing argument, **not** a re-base. `cow/reverify.json` still says 394 and the loop is still
halted; lifting or re-basing the halt is the user's call.

## Reproduce

```
python tools/cow/reverify_bucket.py cow/reverify.json
python tools/cow/cowdiff_deadstack_probe.py 0x10010350 0x10014c90 0x100298d0 0x100298f0 0x10029930 0x103134c6 --states 8
python tools/cow/reverify.py --units <build/scratch/depth-only-units.txt> --depth booked \
       --out build/scratch/reverify-depthonly-booked.json
```
The third takes ~15 min for 161 units: booked depth means one subprocess per unit, no shared chunk. An
earlier attempt to run all 7441 that way projected 11.6 hours and was killed rather than left to look like
progress.
