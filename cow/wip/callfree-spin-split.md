# The call-free spinners: 3 look like ours, 4 like the guest's, 25 are the SSE family, and 69 are still unknown

Third cut at the 331 no-answer rows. Two families are already explained elsewhere: **116 park in
`f_10316337`** (`no-answer-family-sse-blocker.md` §6) and **26 die on an unimplemented opcode on the
reference side** (§2). What `lift_hang_families.py` left was **101 units that call nothing at all** — no
callee to blame — which `lift_proof.py` labels:

> "run alone; silent for 12s (parked in a host call or a **register-only loop** — no in-process budget can
> reach it)"

For a unit that calls nothing, "parked in a host call" is impossible by construction, so the label reduces
to *register-only loop* — and that is also exactly why no budget catches it: `cow_tick`, the cpu budget and
the memory-write budget all live on the other side of a store. But the label never said **which side**
spins, and that decides who owns the fix: side A (the generated original) means the guest is genuinely
unbounded and no lift change touches it; side B (our lifted C) means a Ghidra `while (true)` whose exit did
not survive translation, which is a defect with an owner in this loop.

`lift_callfree_spin_split.py` classifies both sides statically. Result over the 101:

| verdict | units | |
|---|---|---|
| **BOTH sides have a store-free loop** | **3** | `while(1)` in our body + a guest loop — the lift-side candidates |
| SIDE A only | 4 | guest unbounded, our body has no such loop |
| NEITHER | 94 | → 25 are the RT_UNIMPL family (oracle dies before any loop), **69 genuinely unexplained** |

The three worth a run, with what the detector saw:

```
0x10087df0   A=0x10087df7..0x10087e01 (6 insns, no memory write)   B=while( 1 )  (228 chars, no store / no call)
0x100dd9b0   A=0x100dd9b4..0x100dd9c0 (4 insns, no memory write)   B=while( 1 )  (152 chars, no store / no call)
0x10086fe0   A=0x10086fe6..0x10086ffc (8 insns, no memory write)   B=while ((rd32(...COW_IMG...))  (no store/call)
```

A `while(1)` in our emitted body that contains no store and no call is the clearest lift-side hang
signature this loop has produced: our program can only be spinning there, and the harness has no way to
see it stop. Three units is small, but they are *named*, and each is one `cowdiff` away from a verdict —
which is the honest next step, not a fourth theory.

**The lead in the leftovers:** the 69 unexplained are not scattered. The first ten are
`0x100821a0, 0x100821d0, 0x10082840, 0x10083260, 0x10083360, 0x100833f0, 0x10084140, 0x10084160,
0x100845b0, 0x10084600` — one neighbourhood around `0x1008xxxx`, the same shape of signal that pointed at
`f_10316337` last time.

## Two dead filters this tool walked into, and the check that caught both

This is the part worth re-reading before writing another detector.

1. **Hand-built instruction dicts.** The first selftest *failed to fail*: I fed the guest-side detector
   records built as `{addr, mnem, op, text}`, but `_writes_memory` looks for `wr32(` in **`stmt`** — a
   field my fixtures never had. So the "loop that stores" control was classified as register-only, and the
   selftest refused the run. Standing rule, violated anyway: *test through the real parser*. The fixtures
   now go through `gen_model.parse_instructions` on generated-shaped lines, and the selftest additionally
   asserts the fixture parsed into the expected record count and that `_writes_memory` actually sees the
   store — a selftest over an empty list proves nothing.
2. **A fixture written in a language the generator does not speak.** The our-side detector looked for a
   **backward `goto`**, and passed its own fixture. `--detector-power` then ran it over the corpus:
   **0 of 10,547 files**. Lifted bodies contain *no `goto` at all* (checked over 3,000: `goto=0`,
   `while=220`, `for=86`). The emitter's loops are `while (...)` / `for (...)`; my fixture had invented a
   construct that exists nowhere in the tree, and every "SIDE B: 0" since would have been silence read as
   evidence. Rewritten against brace-matched `while`/`for` with no store and no call inside, it fires on
   **321/10,547 (3.0%)** — including the `while(1)` bodies above — and only then was the population split
   allowed to run.

That is why the tool publishes `--detector-power` as its own mode: a detector that passes a fixture and
fires on nothing real is the failure mode this session has hit roughly ten times, and it is cheap to check
before it becomes a conclusion.

## Discipline

Static detectors *name candidates*, they do not convict — the three `while(1)` units are candidates until
`cowdiff` says so, and the harness lock is still held by the population audit (pid 20748). Nothing booked,
no knob on, no write to a judged directory.
