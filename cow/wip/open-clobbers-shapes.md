# The 168 open clobber candidates are not one bug — but they are one *class*

Measured 2026-11-11 with a shape-cluster scan (`tools/cow/ghidra/lift_clobber_shapes.py`, static, while the audit owns
`build/`). Tripwired: the by-eye unit `0x1015e910` must never classify as open, and the scan aborts
on zero analysed units rather than reporting an empty list as a result.

## The shape table

Epilogue signature = instruction mnemonics from the clobbered register's `pop` to the end of the body.

| count | shape | example |
|---:|---|---|
| 27 | `pop -> mov -> pop -> ret` | `0x10003070` (edi) |
| 21 | `pop -> jmp` | `0x100641b0` (esi) |
| 8 | `pop -> mov -> pop -> ret -> pop -> pop` | `0x10080d20` |
| 6 | `pop -> pop -> xor -> pop -> ret -> mov` | `0x10155bd0` |
| 5 | `pop -> mov -> pop -> ret -> pop -> xor` | `0x100a2c70` |
| 4 | `pop -> pop -> mov -> pop -> ret` | `0x10101070` |
| 3 | `pop -> jmp -> ret` | `0x1006ce70` (ebx) |
| 3 | `pop -> mov -> ret` | `0x10072c30` |
| 3 | `pop -> xor -> pop -> ret -> sbb -> pop` | `0x100e6fc0` |

**168 analysed, largest bucket 27 = 16%.** So "there is one remaining bug" is already false, and
anyone who fixes the top shape should expect to clear a sixth of the list, not the list.

## The class they share

`gen_model.epilogue_pop_run` walks the body **backwards** and stops at the first instruction that is
not one of its known-benign terminators. It handles `ret` and `leave` by design; I added a constant
`add esp, N` in `b34fb597`. Every dominant shape above shows another instruction sitting **inside**
the epilogue:

```
pop edi ; mov ... ; pop esi ; ret     <- walk: ret(skip) -> pop esi(keep) -> MOV -> break
                                          => edi's pop is never seen, its push never pairs,
                                             the save/restore is dropped
```

Same failure mode as the `add esp` bug, different interleaved instruction: `mov`, `xor`, `sbb`, `jmp`.
Retail interleaves these between the restores, exactly as the module docstring already says it
interleaves pushes in the prologue ("retail likes to read an argument before it saves anything").

## Why the fix is NOT "skip mov too"

That would be the tempting one-line change and it is wrong. A constant `add esp, N` provably cannot
restore a register and only moves esp; a `mov` can be anything, so skipping it would let the walk
swallow real body code and report pops that belong to the middle of the function. The same is true of
`xor`/`sbb`. `jmp` differs again: a body ending in a tail `jmp` has no `ret`, and `model_generated`
already routes the no-ret shape elsewhere on purpose ("the no-ret shape belongs to `tail_jump_of`").

So the correct change is structural, not another entry in a whitelist: match the epilogue the way the
prologue is matched — LIFO-pair the trailing pops with the leading pushes and tolerate benign
interleavings **only** where the pairing still closes (every pop accounted for by a push, esp
consistent), rather than trusting contiguity.

That is a change to how thousands of units are modelled. It needs, in this order: a failing case per
shape bucket, the change behind a knob, a **measured sample** re-lifted, and `lift_selftest` green.
Not attempted while the population audit owns `build/`, and not attempted blind.

## Sequencing note for whoever picks this up

The 21 `pop -> jmp` units may not be a defect at all - they may be the tail-jump shape being handled
by a different code path. Confirm which path owns them **before** writing a fix for them; the first
`add esp` investigation wasted a claim on exactly that kind of assumption.
