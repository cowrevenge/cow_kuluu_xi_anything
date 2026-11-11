# The frame binding is two mechanisms, not one - and the predicate I was about to gate it on is a constant

The standing rule says: read one unit end to end before proposing a mechanism. The frame binding was ranked
#1 for several turns on a *shape* census (85% of the string wall is `lea reg,[base ± const]`), which is a
population statistic, not a read. So I built the read instrument and read two units - one from each escape
family - and the design changed shape twice in the process.

New instruments: `tools/cow/ghidra/lift_unit_read.py` (the end-to-end read, permanent) and
`tools/cow/ghidra/lift_escape_binding_census.py` (the population measured through the live pipeline).
Population list: `cow/wip/frame-binding-pop.txt`.

## Exemplar 1 - `0x1001ac50`, refused `param_address_escapes`

```
1001ac50  mov  eax, [esp+4]        ; the value of stack argument #1
1001ac54  push esi                 ; frame save
1001ac55  mov  esi, ecx            ; thiscall `this`
1001ac57  push eax                 ; argument: the VALUE
1001ac58  lea  ecx, [esp+0xc]      ; the ADDRESS of that same argument slot (esp is sp0-8 here)
1001ac5c  push 0x2b
1001ac5e  push ecx                 ; argument: the POINTER
1001ac5f  mov  ecx, [0x1047d128]
1001ac65  call 0x10073ba0
          ...
1001ac9d  pop  esi
1001ac9e  ret  0x20
```

Ghidra compresses the whole thing to `FUN_10073ba0(&param_1,0x2b,param_1);` - and the lifter declares
`param_1` as a host C local (`CowU32 param_1 = rd32(sp0 + 4u)`), so `&param_1` is a **host address handed to
guest code**. Refusing it is correct.

What the read added is the *witness for the right answer*, sitting in the same screen: the generated body,
which is the recompiler's own faithful translation, computes exactly what the guest computed —

```
43270|  /* 1001ac50: mov eax, dword ptr [esp + 4] */   uint32_t A = esp + 0x4u;  eax = rd32(A);
43287|  /* 1001ac58: lea ecx, [esp + 0xc] */            ecx = (esp + 0xCu);
```

So the correct lift for `&param_1` is not a new idea, it is `esp + 0xCu` = `sp0 + 4u`, an address in the
guest frame - which is what `ghidra_c.py:1850` already says in a comment ("the right answer is sp0 + 4 + 4k,
an address in the guest's stack"). Note also `if (param_1 != 0)` reads `param_1` **after** the call that
received its address: with a C-local copy that test reads a value the callee could have overwritten, so the
binding fixes a latent staleness bug in the same stroke.

## Exemplar 2 - `0x10002c30`, refused `local_address_escapes`

The classic three-out-parameters shape: `sub esp,0xc`, then three `lea`s of `[esp±k]` passed to a callee,
then the same three slots read back (`mov eax,[esp+4]`, `mov ecx,[esp+8]`, `mov edx,[esp+0x10]`). Ghidra
prints `FUN_100170d0(&local_c,&local_4,&local_8);`.

Here the read killed the obvious design. `[esp+4]` is used **twice for two different slots** — once before
`push ecx` and once after — so a local's address is a function of the **dynamic** esp, and Ghidra's
`local_c` / `local_4` / `local_8` names are **not a formula** for it (which token means which slot depends on
Ghidra's internal stack-pointer model, not on its suffix). Anyone implementing "bind local_N to the reserved
region" by parsing the name would write to the wrong guest slot - silently, probably outside the compared
frame window. The slot must be recovered from the guest `lea` that feeds the argument, with the generated
body as the source of truth, exactly as the plumbing is already the source of truth for widths and arg counts.

## The measured population, live (107 candidates verified through `classify()` + `emit()`)

| family | live today | what the mechanism needs |
|---|---|---|
| `param_address_escapes` | **64** | **59 nameable by pure arithmetic** (`sp0 + 4u + 4k`, no esp tracking); **5** take the address of a *register* argument (thiscall `this`) and need a **spill slot** - a different mechanism |
| `local_address_escapes` | **43** | guest-`lea`-derived slot resolution; 22 of 43 have `locals > 0` reserved by the prologue, 0 use a frame pointer |

**59 units is the one slice of this whole design space with no co-blocker**: it needs no esp tracking, no
load modelling, no string model - just the param→address map the adapter already builds for the value read,
used at the address-of site too.

## The predicate I nearly gated on is a constant, caught by the tool refusing to let me quote it

The census printed `esp_delta_reliable TRUE: 0 / 64` and `0 / 43` - and then refused to let that mean
anything, because its own control sample said the field never fires:

```
sampled bodies            : 300
contain a control transfer: 300
esp_delta_reliable TRUE   : 0
false WITHOUT any transfer (would falsify the explanation): 0
mnemonics that killed reliability: je=585, ret=410, jne=269, jmp=243, jl=76, jge=50, jb=33, jle=32
```

Reading the code explains it (`gen_model.py:207-232`): `reliable` starts `True` and is set `False` if **any**
instruction anywhere in the body is a branch, `ret`, `leave`, or `mov esp`. It is a whole-body "did a control
transfer appear *somewhere*" flag, so any function that returns has `esp_delta_reliable == False`. Gating a
frame binding on it would have been gating on a constant, and the gate would have looked like a
conservative safety check.

What is actually useful is one line earlier in the same loop: `c["d"] = delta`, the per-instruction esp
offset. It is valid on the straight-line prefix and a fiction after the first transfer - which is the same
**positional** rule `frame_save_addrs_of` already uses (a save counts only below the first control-flow
transfer). `0x1001ac50` is the test case: its `lea` at `1001ac58` sits five instructions into the body and
two pushes deep, before the first transfer at the `call` at `1001ac65`, so `d = -8` and `[esp+0xc] = sp0+4`
is nameable by prefix arithmetic.

## What is proposed, and what is not claimed

Proposal (next step, behind a measurement-only knob per `gen_model.py:2461`): when the rewritten body takes
`&param_k` for a **stack** argument, emit the address expression instead of a C local — `param_k` as a value
becomes `rd32((uint32_t)(sp0 + 4u + 0xXku))` (what `lift.py:1114` already emits) and `&param_k` becomes that
same expression. Gate: the use site must be on the straight-line prefix, `reg_order` must put `k` in the
stack range, and the unit must still pass cowdiff. Spec exemplar: `f_1001ac50` must emit
`cow_bridge_call_10073ba0(sp0 + 4u, 0x2b, rd32((uint32_t)(sp0 + 4u)))` and keep `ret 0x20`'s cleanup.

Not claimed: **nameable ≠ liftable ≠ bookable.** These 59 still have to survive every other gate and cowdiff
(both exemplars are `status=todo`, `lift-proof row: ABSENT` — never proved). The 43-unit local family is
explicitly **not** part of this proposal: it needs lea-derived slot resolution, and the earlier finding that
`f_10316337` (the 116-row hang family) needs an **argument slot and a local slot** still stands, so the
locals half is what unlocks that one - not this half.

## Two notes on the instruments themselves

`lift_unit_read.py` was wrong twice before it was right, and both failures were mine: it looked for
`generated/all/f_<hex>.c`, a filename that does not exist (the generated tree is ~60 files of many functions
each - `trivial_audit.HEAD_RE` matches `void f_<hex>(Guest* g)` inside them), and it unpacked
`ghidra_c.leftover_problems()` as tuples when it returns a flat list of tag strings. `ast.parse` passed both
times; running it is what caught them. The section-6 cross-check (the module's verdict must agree with the
lines my locator points at, or the tool refuses) is what makes the escape read trustworthy rather than a
pretty print.

And the wider lesson for the queue: the census' control sample is the only reason the `esp_delta_reliable`
zeros became a finding instead of a premise. A population count without a control for whether the predicate
can fire is not a measurement - which is the same rule that killed the seed probe, the UNIMPL regex, the
shared-callee scan, the `goto` detector and the `[ebp-4]` sign bug.

Nothing booked; no knob left on; `src/`, `layout/`, `ledger/` untouched. The audit (pid 20748) still holds
the harness, and per `leaked-cowdiff-processes.md` its hang/timeout rows - including the ones behind this
design's 116-row motivation - should be re-measured on a free box before being trusted.
