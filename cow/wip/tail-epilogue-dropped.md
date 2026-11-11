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

This now outranks the measured re-lift of the 143 accepted units, because it is the same defect class
(callee-saved registers lost through the frame) with a bigger blast radius and a known mechanism. Both
wait on the harness lock for their proof, so the next static steps are: implement step 1 behind the
knob, add its `lift_selftest`-style spec (positive closure cases + the negative controls: pops above a
jmp that do NOT close, a `call` between the pops, a memory write), and price the population the same way
`lift_relift_price.py` priced the first one.
