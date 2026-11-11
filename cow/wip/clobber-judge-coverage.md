# Are the booked-pass clobbers judge blindness? No - they are shallow passes, and my shallowness theory of the 394 died

Static turn (the population audit owns `build/` and the harness lock until roughly 20:35). Four new
tools under `tools/cow/ghidra/`, one hypothesis falsified by its own chart, and a number the loop has
been missing: **what `pass` actually covered.**

## 1. The judge is not blind by construction

`tools/cow/cowdiff.c` (~1153-1163) compares, in order:

```c
if (oa.faulted != ob.faulted)                     why = "fault";
else if (!oa.faulted && oa.eax != ob.eax)         why = "eax";
else if (!oa.faulted && oa.edx != ob.edx)         why = "edx";
else if (!oa.faulted && (ebx|esi|edi|ebp differ)) why = "callee-saved register";
else if (!oa.faulted && oa.esp != ob.esp)         why = "esp";
else if (oa.top != ob.top || oa.st0 != ob.st0)    why = "st0";        // no faulted guard
else if (!regions_equal(...))                     why = "memory";     // no faulted guard
... out-of-region write, call count, call args                        // no faulted guard
```

The file's own header (line 17) says the contract is "the return value, the callee-saved registers,
esp, memory and calls out". So the register contract **is** compared - except on states where side A
faulted, where eax/edx/ebx/esi/edi/ebp/esp are all skipped while st0, memory, out-of-region writes and
the call log still run. That is the mechanism by which a real clobber can sit in the ledger as `pass`:
not a blind judge, but a comparison that is conditional on the reference side surviving.

## 2. Not every unpaired push is a clobber - three counters, each with its own question

`lift_frame_predicates.py` (the single home for the code-level predicate) says **270 machine-lifted
units / 413 pairs** push a callee-saved register and never bring it back. Two more tests sharpen that:

* **does OUR code write the register after the push?** `lift_clobber_realised.py`. Reading the file in
  execution order (prologue → body → epilogue - the body sits *above* the adapter in the file, which is
  why a naive text-position test gets this backwards): **233 realised / 37 unrealised**. A push with no
  intervening write is a no-op on the caller's view (`g->esp = sp0` pins esp anyway), so the 37 are not
  defects.
* **does the GUEST bring it back?** `lift_clobber_matrix.py`, because if the entry itself never pops the
  register, matching that is what a faithful lift is supposed to do.

The matrix, in pairs:

| our write | guest | ledger | pairs |
|---|---|---|---|
| REALISED | restores it | unproven | **195** |
| REALISED | restores it | **pass** | **39** |
| REALISED | never pops | unproven | 53 |
| REALISED | never pops | pass | 4 |
| unrealised | restores it | unproven / pass | 111 / 11 |
| unrealised | never pops | both cells | 0 (and 0 is reported as a cell the counter never saw) |

**234 pairs (realised + guest-restored) are the only population a re-lift can move and the judge can
notice.** 195 of them are unproven - the pipeline refusing correctly - and 39 are booked pass.

## 3. The 39: every one is a partial-coverage pass

`lift_clobber_pass_audit.py` lists all 39 with their recorded coverage: **0 of 39 are `n/n`.** The
worst are 5/103 (`0x102dea8f`), 7/103, 7/105, 8/102; most reach only 5-15 blocks of 40-105. That is
exactly the shape predicted from §1: execution stopped early on both sides, the register comparison
was skipped, and `pass` was recorded for a run that never looked at the contract.

**Joined against the independent re-verify (checked, not remembered): 4 of the 23 units are among its
394 failures** - `0x100ef950`, `0x102d1cd0`, `0x102de613`, `0x102de9f4`. **The other 19 passed
re-verify at booked depth while carrying a realised clobber**, which is the point: the same harness,
re-run from scratch at HEAD, reproduced the pass. So this is not stale bookkeeping (that is a separate
62-row finding in `stale_booking_audit.py`) - it is the fault-gated comparison in §1 behaving exactly
as written, on a unit whose states never survived long enough to compare registers.

**What this does NOT prove.** `blocks` is the union over all states; it does not say *every* state
faulted. To close it I need the harness's per-state fault tally on these 23 units - one `cowdiff` run
each, which is the first thing to do when the audit releases the lock. Until then the sentence is
"consistent with a shallow pass", not "the registers were never compared".

## 4. Retracted: "shallowness explains the 394"

I wrote `lift_pass_depth_audit.py` to confirm that. It did not:

```
  full (n/n)   :  4383 rows,  291 reverified-fail  (  6.6%)
  >=80%        :   382 rows,   31 reverified-fail  (  8.1%)
  50-79%       :   730 rows,   41 reverified-fail  (  5.6%)
  20-49%       :   691 rows,   22 reverified-fail  (  3.2%)
  <20%         :   280 rows,    7 reverified-fail  (  2.5%)
```

The gradient is **inverted**: better-covered units fail *more*, because more of the unit is exercised.
So the 394 are not an artifact of shallow booking, and I am not allowed to keep the story that made
them comfortable. What the chart legitimately establishes: **971 of 6,466 booked passes covered less
than half the unit.** That is not a regression and not a lie - it is a proof of less than the unit, and
it is the reason a realised clobber can sit in the ledger unnoticed. Whether `pass` should require
full-block coverage (or a minimum) is the user's booking-standard decision, alongside the
300/400-vs-2000 state floor question already pending; I am not raising either unilaterally.

## Standing items this creates

1. When the harness lock frees: `cowdiff` the 23 units and report states where **both** sides faulted.
   All-both-fault ⇒ shallow pass confirmed; any state that survived on side A with a differing
   callee-saved register ⇒ the ledger row is wrong and must be un-booked *out loud*.
2. The measured re-lift stays the gate for `COW_LIFT_EPILOGUE_MATCH_PUSHES`: the payoff is how many of
   the 234 realised+guest-restored pairs newly pass `cowdiff`. Nothing booked before that number exists.
3. The unrealised 37 and the guest-never-pops 57 should not be handed to the same change - they are not
   the same defect, and two of the four cells are only reachable by predicates that have been shown to
   fire (the volatile control: 32 units).
