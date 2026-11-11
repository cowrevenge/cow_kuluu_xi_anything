# The frame-eating push walk: a real measurement defect, priced at 23 units — and not the gate I thought it was

Followed from the `hang`-family thread (`no-answer-family-sse-blocker.md` §6): 116 of the 211 `hang` rows
park in `f_10316337`, which is not lifted, and `lift.py` refuses it with
`argcount_mismatch_10320fb3_ghidra4_push11`.

## 1. Reading one unit end-to-end beat censusing a thousand

`f_10316337`'s first block, verbatim from `generated/all/funcs_052.c`:

```
10316337  push ebp                    }
10316338  mov ebp, esp                } frame
1031633a  sub esp, 4                  }
1031633d  push ebx  \
1031633e  push esi   } the adapter's head saves - NOT arguments
1031633f  push edi  /
10316340  cld
10316341  mov dword ptr [ebp - 4], eax
10316344  xor eax, eax
10316346  push eax        \
   ... 7 more pushes ...   } EIGHT argument pushes
10316358  call 0x10320fb3
1031635d  add esp, 0x20   <- 0x20/4 = 8: agrees with the eight pushes exactly
```

`gen_model`'s backward walk (line 250) counts pushes upward from the call and breaks at the prologue
boundary — but `push ebx/esi/edi` live *below* that boundary, so they get billed to the call:
`npush_walk = 11` where the bytes say 8. Then `lift.py` refuses the unit, and `_push_values` bails at
`pushed-vs-npush` because 8 nameable words cannot match a count of 11.

So this instance of `argcount_mismatch` is not "Ghidra disagrees with the bytes about an argument count"
— the philosophical problem that got the class parked — it is **the walk counting the frame**. Two
measurements in the same site already said 8 (`cleanup/4`, and the esp delta); the code used `npush_walk`.

## 2. How big is it, honestly? Small.

`lift_npush_frame_inflation.py`, over every direct call site with a cleanup constant (tripwire: the
exemplar must reproduce npush_walk=11 / cleanup/4=8 or it refuses to print anything):

| bucket | sites | share |
|---|---|---|
| WALK_RIGHT (`npush_walk == cleanup/4`) | 10,522 | 72.3% |
| **FRAME_INFLATED** (walk − callee-saved pushes eaten == cleanup/4) | **313** | **2.1%** |
| OTHER (neither — a different defect, kept separate) | 3,728 | 25.6% |

2.1% is not a mountain. It is the exemplar's shape, and the exemplar is the head of a 116-row thread, so
it was worth one knob. `OTHER` is the honest reminder that most disagreements are *not* this defect, and it
is never counted as helped.

## 3. The knob, and the two walkers that had to agree

`COW_MODEL_NPUSH_FRAME_AWARE` (off by default). The rule has **one definition**, `frame_save_addrs_of(ins)`,
used by both the backward walk and the forward `pending` walk in `call_reg_values`:

* stop the walk at a push whose **address** is in the head-save run — by address, not by register name, so
  a genuine `push ebx` argument in the middle of a body still counts;
* only when the tail **proves** those pushes are the frame: the loose tail pops must equal the head run
  reversed, one for one.

Two mistakes surfaced while building it, both worth keeping in the record:

1. **My own safety rule could not fire on the unit that motivated it.** The closure test used the *strict*
   `epilogue_pop_run`, which walks back from `ret` and stops at any non-pop — and this unit has
   `mov eax, dword ptr [ebp + 0x14]` sitting between `pop ebx` and `mov esp, ebp`. Strict returned
   `['ebp']`, so `reversed(head) == pops` could never hold. `_tail_pops_loose` returns
   `['edi','esi','ebx','ebp']`, which does close. Same discipline, working reader.
2. **Fixing only the backward walk moved the failure, it did not fix it.** With `npush` at 8 the site bailed
   at `pending-vs-pushed`: the forward walk still counted 12. Both walks had to skip the same addresses —
   which is why the rule lives in one function.

Verified before committing: knob **off** renders 125/125 units byte-identical (`inertness_check.py`), and
the six regression checks pass (`lift_saved_regs_check`, `lift_pushpair_check`, `lift_matchpushes_check`,
`lift_epilogue_pairing_spec`, `lift_tail_pop_spec`, `lift_tail_epilogue_check`).

## 4. What it buys, and the claim I have to retract

`lift_npush_price.py` runs the **real lifter** report-only (writes nothing) over the FRAME_INFLATED units,
both knob positions, in a scrubbed environment (never inherit `COW_*` from the shell):

* **23 units lift that did not lift before** (`lifted 0 → 23`)
* 28 distinct `argcount_mismatch` reasons eliminated outright
* and, named rather than hidden: refusals that **moved to the next gate** — `cleanup_mismatch` (+5 across
  four sites), `calls_unknown_symbol operator_new` (+5), `local_address_escapes` (+2),
  `calls_unknown_symbol __setjmp3` (+2), `leftover_overlay` (+1). Those are not wins and the tool prints
  them as `NEW GATE - not a win`.

**The retraction.** I wrote in §6 of the previous note that the frame walk was the gate on the 116-row
family. It was not, by itself:

```
argcount_mismatch_10320fb3_ghidra4_push11    1 → 0   GONE
argcount_mismatch_10320fb3_ghidra4_push8     0 → 1   fewer
```

With the count *corrected to the truth* (8), `f_10316337` is still refused — Ghidra still says 4 — and
`_push_values` now dies one gate later at `unnameable:dwordptr[ebp+8]`. That operand is an incoming stack
argument, and it is exactly the memory-operand wall `cow/skip_patterns.txt` refuses on purpose ("a memory
operand — `_operand_expr` refuses it on purpose, and rightly"), after **three** `g->reg` widenings were
released and measured at 8.6–10% pass. So:

* the walk fix is real, measured, inert-when-off, and buys **23 units now**;
* the 116-row family still needs the ebp-relative memory-operand question answered, and that question has
  a documented graveyard in front of it. `lift_pushmnem_census.py` exists precisely so a fourth candidate
  is priced in one run rather than argued — anyone tempted to climb it should start there, not here.

Nothing was booked, no knob is on, and `src/` was never touched (the audit still holds it as MATERIAL).
