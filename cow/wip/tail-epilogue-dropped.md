# Tail-call entries: the guest's epilogue is being dropped wholesale, and my rule was right to refuse them

Found by reading **one** declined unit instead of trusting a counter — the discipline that has caught
every confident number this session. `lift_relift_price.py` named 27 of its 30 declines as
"tail-call / intra-tail (deferred)". Those 27 are not a hard corner of the fix; they are a **separate
and bigger defect** that the fix correctly refuses to paper over.

## The evidence, verbatim

`0x1006ce70`, generated body (side A — the reference), tail of the listing:

```
1006cf82  rep movsd dword ptr es:[edi], dword ptr [esi]
1006cf84  pop     edi
1006cf85  mov     ecx, ebx
1006cf87  pop     esi
1006cf88  pop     ebx
1006cf89  jmp     0x1006ce40
1006cf90  ret
```

The entry pushed `ebx, esi, edi` at 0x1006ce70/7b/7c and **pops all three, in LIFO order, immediately
above the tail `jmp`**. That is a complete epilogue. Our shipped adapter:

```
our prologue pushes : ['ebx', 'esi', 'edi']
our epilogue pops   : []
model pops (strict) : []
model pops (LIFO)   : []
```

…and the banner it prints asserts the opposite of the bytes: *"TAIL CALL: this entry ends in
`jmp 0x1006ce40`, not `call`+`ret`, so the frame has no epilogue"* (`lift.py:317`).

## Why every reader misses it — three places, all pointing the same way

1. **`gen_model.py:561`** — `_STOP_MNEMS` contains `"jmp"`. Both the strict backwards walk and the
   LIFO-widened `_tail_pops_loose` stop at a `jmp`, so a body ending `…pop edi; pop esi; pop ebx; jmp T`
   returns `pops = []`. That is the whole epilogue, gone, and the prologue then pairs its pushes against
   an empty pop list.
2. **`lift.py:1216`** — the tail branch renders `TAIL_ADAPTER_TMPL`, which has **no epilogue slot at
   all** (the non-tail `ADAPTER_TMPL` gets `epilogue="\n".join(epi)` at line 1233; the tail template
   simply does not have that field). So even a correct `m["pops"]` would be discarded.
3. **The prose** in the tail template then tells the next reader that no epilogue exists. A machine
   comment that describes code the code does not contain is the thing this project keeps promising not
   to ship — here it has been shipping as a *cause*.

The consequence is not only the three clobbered callee-saved registers - **esp is wrong on this path
too**. On the guest, esp is three words higher when control leaves through the tail target; our side
never advances it, and unlike the normal path there is nothing to hide it: `g->esp = sp0` exists only
in `ADAPTER_TMPL`. `TAIL_ADAPTER_TMPL` has no esp restore of any kind and its prose states the opposite
- *"esp is where it left it"* - while the reference side advanced it by twelve bytes. That comment
describes code that is not there, which is the sin this very file condemns. Both sides are snapshotted
after the adapter returns, so the harness compares an esp that differs by 0xc as well as three
registers - consistent with this population sitting in the unproven pool rather than failing loudly in
some other bucket.

## The fix, in the order it has to happen

1. **`gen_model`: recover the pop run above a final `jmp`.** Reuse the shape `_pop_run_directly_above`
   already implements for intra-body tails: walk back from the terminating `jmp`, collect `pop <r>`,
   step over register-only instructions and `ret`/`leave`/`add esp,N`, and **accept only if it CLOSES**
   — `list(reversed(pops)) == _head_pushes(ins)` — the same rule that makes the LIFO widening safe.
   Behind a knob (`COW_MODEL_TAIL_POP_RUN`, off), because it changes the frame model every lifted unit
   reads.
2. **`lift.py`: give the tail adapter the pops.** They must run *before* the `cow_bridge_tail_<hex>(...)`
   call, which lives inside the Ghidra body — so this is the same insertion the intra-tail path already
   does in `_tail_repl` (`lift.py:981`), not a new template concept. Refuse the unit if the bridge call
   site cannot be found, exactly as `tail_jump_not_in_ghidra` refuses today.
3. **Fix the banner** to say what the frame actually is: `pops [edi, esi, ebx], jmp 0x…`, and delete
   the "the frame has no epilogue" claim for units that have one.

## What I am not allowed to claim yet

* **27** is the count of *pricing declines that named tail-call*; **30** is the classifier's
  tail-call bucket in the clobber population. They overlap but are not the same set — do not merge them
  into one number the way "168" and "58" got merged before.
* Not one of them has been re-lifted, so there is no flip count. The falsifiable prediction is written
  down so it can be checked rather than remembered: **after step 1+2, every unit in the population emits
  `pops == reversed(pushes)` for its tail path, and the subset that is currently unproven starts
  passing `cowdiff`.** If they do not flip, the diagnosis is wrong and this file gets a retraction, not
  a footnote.
* Whether the guest *legitimately* leaves a save unrestored on some tail path is still open — which is
  precisely why the closure rule is mandatory and the emitter's `complete_pops` must keep refusing
  these units rather than inventing pops from the push list.

## Order of work

~~This now outranks the measured re-lift of the 143 accepted units~~ — **retracted by measurement, see
§ "Measured: it does not outrank anything"** below. The mechanism was real; the ranking was invented.


## Measured: it does not outrank anything (retraction of the ranking, not of the bug)

Step 1 is implemented behind `COW_MODEL_TAIL_POP_RUN` (off); steps 2 and 3 (the adapter's epilogue
slot and the banner prose) are not, which is why nothing shipped changes yet. The contract is
`tools/cow/ghidra/lift_tail_pop_spec.py` - 7 cases × both knob positions, built in
generated-source shape and pushed through the real `gen_model.model_generated`, plus three negative
controls (pops that do not close, a `call` between the pops and the jmp, a memory write inside the run)
and the requirement that the knob is inert when unset. The exemplar answers `[]` off and
`['edi','esi','ebx']` on. Green.

Then `tools/cow/ghidra/lift_tail_pop_reach.py` counted what it actually reaches:

```
  units where the strict walk found NO epilogue : 6870
  FILLED by the rule (closes against the pushes):   30   (0.4%)
  no pops above the jmp at all                  : 6824  (99.3%)
      pushes a saved register, never pops above the jmp : 1058   <- a lead pool, NOT a defect count
      never saved anything                              : 5766   <- normal shape, not a defect
  pops found but they DO NOT close (refused)    :   16   (0.2%)
```

So the honest ranking is: **the 143-unit epilogue-completion re-lift stays first**, and the tail
pop-run is a **30-unit** fix - real, cheap, verified, and small. The claim that it "outranks" anything
came from reading one unit and extrapolating, which is the exact habit this file exists to warn about.

The measurement also caught a **filter blind spot worth keeping**: my first population was "units the
model flags as tail calls", and the exemplar is *not* in it - `0x1006ce70`'s listing ends
`pop ebx; jmp T; ret` because an adjacent one-instruction thunk was lumped into the same function, so
`tail_jump` is None and `no_ret` is False. A population defined by the flag that is part of the bug
cannot measure the bug, so the tool now defaults to the rule's own firing set and keeps the flag-based
one behind `--tail-flagged` with its bias named.

Still to do, in this order: (1) the measured re-lift of the 143 when the harness lock frees; (2) step 2
of this fix - give the tail adapter an epilogue by inserting the pops before the `cow_bridge_tail_...`
call, reusing `_tail_repl` - priced the same way, expected to move ~30 units and no more.


## Step 2 landed, and it turned out to be the bigger half

`COW_LIFT_TAIL_EPILOGUE` (off) now inserts the model's pop list into the BODY, immediately above the
`cow_bridge_tail_<hex>(...)` call, and replaces the template's unconditional "so the frame has no
epilogue" with a claim that matches the emitted code. Contract:
`tools/cow/ghidra/lift_tail_epilogue_check.py`, which renders real units through the real emitter at
four knob positions and enforces one invariant instead of the one I originally (wrongly) asserted:

> **the lift emits exactly what the model reports, never more, never less.**

(My first version demanded the lift knob be inert without the model knob. 0x100641b0 disproved that
within a minute: the model already reports `pops=['esi']` with both knobs off, so emitting it is the
lift doing its job. The check was written before the belief, and it is the reason the belief got
corrected instead of shipped.)

That check then caught a **code-deleting bug** in the insertion itself: the rebuild used
`text[:found.start()] + pre + ind + text[found.end():]`, where `found` matched the whole
`cow_bridge_tail_...;` statement - the pops went in and **the tail call disappeared**, a unit that
returns without jumping anywhere. Fixed to re-insert `found.group(0)`, and the ordering assertion
(`last_pop < bridge_at`, with `bridge_at > 0`) is what keeps it that way.

## What it reaches, with every number tied to the question that counted it

| count | counter | question it answers |
|---|---|---|
| 30 | `lift_tail_pop_reach.py` (all machine-lifted) | the *walk* produces a pop list |
| 18 | same tool, `--tail-flagged` | same, restricted to units the model flags as tail calls |
| **27** | `lift_tail_epilogue_check.py` | `m["pops"]` - **what lift.py actually reads** - non-empty for tail-flagged units: **23 already known + 4 newly recovered** |

`cow/wip/which_number_is_real.py` settled the apparent conflict: **DISCARDED = 0** - the walk's answer
always survives into `m["pops"]` - and 18 ⊆ 27 because 14 of the walk-filled units were already known
to the model by the multi-exit path. Quote 27 for "how many files change"; quote 30/18 only as
walk-level reach, with the tool named. This is the same discipline that turned "58 vs 74" into one
predicate; a number without its question is how this loop has had to retract things.

**The headline:** of the 781 tail-flagged units whose strict walk finds nothing, 27 have a pop list the
model is willing to state — and the shipped tail adapter emits pops for **0 of them**. 100% of the
epilogues the frame model knew were thrown away by one missing template slot. 754 remain where the
guest really does not restore anything on that path, and the rule leaves those alone.

## Where this stands

Knobs off: every existing check still passes (`lift_saved_regs_check`, `lift_pushpair_check` 3/3,
`lift_matchpushes_check` with 40/40 byte-identical controls, `lift_epilogue_pairing_spec` with its own
knob). No file in `src/lifted` has been rewritten, nothing booked. The payoff claim is still exactly
one sentence and still unpaid: **how many of the 27 tail units, and the 143 matched-push units, newly
pass `cowdiff` after a measured re-lift.** Both wait on the harness lock.
