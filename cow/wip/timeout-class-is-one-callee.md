# The 9 `timeout` units are not nine defects — they are one callee's cost profile

A class the loop had never looked at: 49 `timeout` rows against **9 distinct units**. Untested, and listed
in the plan as "a separate untested class". Two static passes and one end-to-end read later, it is not a
class of nine things.

## Pass 1 — are they already explained? No

`lift_timeout_join.py` joined them to the two families this session has established, with capability
tripwires so a clean sheet couldn't be silence:

- **none** calls `f_10316337` (the callee behind the 116 `hang` rows);
- **none** carries an `RT_UNIMPL` site (the 26-row SSE family).

So genuinely separate — not a duplicate queue item. But the same join showed something more useful: the
units are **tiny**, 2 to 12 instructions (one 28). *A two-instruction function cannot be the thing that
spins.* Whatever times out is downstream.

## Pass 2 — the obvious mechanism, tested and refused

`lift_timeout_chain.py` follows the call/tail chain through the generated bodies looking for a closed
cycle: an infinite thunk chain would be exactly the shape that produces a timeout with no memory write and
no register loop — the harness's own label, "no in-process budget can reach it".

The detector found cycles in **7 of 9**, and six of them converge on **one node, `f_1031d016` calling
itself**. That is a satisfying story — and it was wrong.

So I read the function. `f_1031d016`'s body:

```
1031d016  push ebp / mov ebp, esp
1031d019  mov eax, [ebp+8]
1031d01c  push esi
1031d01d  cmp dword ptr [eax*4 + 0x103d29e0], 0
1031d02c  jne 0x1031d06c            <- guard
1031d03b  jne 0x1031d045            <- guard over the self-call
1031d047  call 0x1031d016           <- the "cycle": conditional
1031d053  call dword ptr [0x10329184]   <- IAT / import
1031d05d  call 0x10312eed
1031d065  call 0x1031d077
1031d06e  call dword ptr [0x1032918c]   <- IAT / import
```

The self-call sits **behind a `jne`**. It is guarded recursion, not a jump loop. A graph cycle is not a
non-terminating program, and publishing it as one is precisely how this loop has manufactured false
mechanisms before. So the tool now distinguishes the two and prints the guard it found:

```
7 of 9 timeout units reach a cycle; 0 of those close on an UNCONDITIONAL jmp.
```

The selftest pins both directions — it must find `A→B→C→A`, and must **not** invent a cycle for a leaf —
because a cycle detector that always says yes would have made this a headline.

## What is actually established

Not the cycle. The thing underneath it, which is the useful part:

> Six of nine route through **one callee**, `f_1031d016`, which recurses and calls heap/IAT helpers.

So this "class" is **one callee's cost profile, not nine defects** — the same lesson the 116-row hang
family taught, arriving twice from different directions. It also means the queue item was mis-scoped: the
question is not "why do these 9 time out" but "what does `f_1031d016` cost per state, and is the guard ever
false under fuzzed inputs".

Two candidate answers, both needing a run (the harness is still held by the audit):

1. **Deep recursion under fuzzed state** — the guard is `[eax*4 + 0x103d29e0] != 0` with `eax = [ebp+8]`, a
   table the fuzzer may well leave nonzero along the whole path, so recursion goes very deep, each frame
   pushing three registers and calling helpers. Slow, not hung.
2. **An import the host answers expensively** — two `call dword ptr [0x1032918x]` IAT slots sit on the path.

The distinction matters because the fixes differ: (1) is a state-generation/depth-budget question in the
harness, (2) is an import-shim question. Guessing wrong spends the run.

## Discipline

- Capability tripwires first: the join refuses if it cannot see *either* known family, and the chain
  detector refuses if it cannot find a planted cycle or if it invents one for a leaf.
- The end-to-end read vetoed the tool's own headline. Without it this file would claim an infinite thunk
  chain — a mechanism with a satisfying shape and no evidence.
- Read-only, no harness, no writes; judged directories clean. Nothing booked, no knob on.

Committed: `lift_timeout_join.py`, `lift_timeout_chain.py`.
