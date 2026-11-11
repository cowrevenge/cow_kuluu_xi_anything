# argcount_mismatch (2,884), sliced: the frame design clears 17 units on its own — and is a prerequisite for 831 more

`string-gate-was-masking-argcount.md` moved the target: the string gate was masking, and the binding
constraint is **`argcount_mismatch`**. `lift_argcount_frame_slice.py` asks the only question worth asking
about a class that three `g->reg` widenings already failed to open — not *can we name registers at push
time* (three measured NOs) but **what produced the register that today comes out `unnameable`** — because
`cow/skip_patterns.txt` contains one un-followed line from the 2026-11-07 census: `lea <r>,[esp+IMM] ~180`.
A pushed register whose value is a frame-relative constant is the same object the string family's 85% slice
is. Live report-only run: 2,884 argcount units, 17,635 unnameable register pushes inspected.

## The partition (units, asserted to sum to the population)

| bucket | units |
|---|---|
| every unnameable push is CONSTANT-FRAME `lea [base ± const]` | **12** |
| …plus the *sound* never-written case (register never written **anywhere** in the body) | **5** |
| some pushes nameable, at least one is not — **needs the frame binding AND something else** | **831** |
| none are — loads, chains, `pop`, `movsx` | 1,840 |
| no unnameable *register* push at all (memory-operand bails; a different design's case) | 196 |
| unscanned | 0 |
| **total** | **2,884** |

**The design's own yield is 17 units; its real value is that it is a *prerequisite* for 831 more.** Quoting
either figure alone misrepresents it — and quoting the *site* counts (the 325/265/244/231/199 rows above the
table) would badly overstate it, because a unit clears only when **every** unnameable push at **every** site
is nameable. That lesson has now been re-learned three times in this loop (319→82, 82→36, and here).

Combined with the string side, the frame-binding feature is worth **~53 report-only units** and gates
**831** others. `clears` means "the emitter produces a body" — never "passes cowdiff".

## The number that nearly got away: 466 → 5

First run put **466 units** in a `never-written` bucket — an apparent discovery inside a class everyone has
given up on. It was my own predicate being quietly weaker than the one that had already been disproved.

My `root_shape` stops its walk at the push, so "no producer found" meant *"never written **at or before the
push**"*. The two rules the loop actually priced are different:

* **"never written ANYWHERE in the body"** — sound, and measured nearly empty (837 → 833).
* **"not written at any addr < call"** — the weaker local rule, released 57 units and **passed 5 of 58 =
  8.6%**, dominated by `memory` and `callee-saved register`, and it silently rewrote 37 already-proven files
  until `call` was counted as a write.

A register written *after* the push passes my walk and fails the safety argument for exactly the reason those
runs failed: by bridge time `g->R` holds the recomputed value, not the word the guest pushed. So I split the
bucket on `written_anywhere`:

```
never-written candidates:  466   ->  5      (the sound, whole-body rule)
written-after-push         461   ->  folded into "needs something else"
```

**461 of the 466 were the third variant of an idea that is already dead.** Announcing 466 would have burned
another week re-running an experiment with a published result. The graveyard line is where they belong:
`gen_model._writes_reg` excludes calls, and a callee writes `g->eax/ecx/edx` — so a register untouched by
the *body* can still be changed by a `call` sitting between the push and the bridge.

## The 831, decomposed: why "frame + one more thing" is not a plan

The natural follow-up — if one co-cause dominated the 831, the real target would be *frame + that thing*.
`--coblockers` ranks each co-blocker by how many units it is the **last** obstacle for:

| co-blocker | appears | last-obstacle-only | |
|---|---|---|---|
| `written-after-push` | 671 | 87 | **DEAD** — the 8.6% variant, shown, never targeted |
| `not-lea:mov` | 690 | 62 | best live — but it **is** the load/deref-width wall |
| `INDEXED lea [base+reg]` | 220 | 4 | no frame binding reaches it, ever |
| `not-lea:xor` / `pop` / `movsx` / `and` / … | 206/185/117/67 | 0–3 | long tail |

**The two biggest co-blockers are both walls this loop has already measured.** `written-after-push` is the
8.6% killing from last turn; `not-lea:mov` — the best *live* candidate at 62 units — means the register was
**loaded from memory**, which is `_operand_expr`'s refusal, the same ground where the indirect family
records 1,051 of 1,051 refusing sites as a two-load chain and the deref-width wall stops any release
("releases 12 sites and ZERO units"). Naming it in the tool is the point: a shape name is not an unexplored
idea, and `IDENTITY` says so on the same line as the number.

**Verdict: judge the frame binding on its own 17 (+ the string side's 36 ≈ 53 report-only units), and
record the 831 as gated behind causes with published results** — not as a backlog that one more feature
would clear.

And a self-criticism worth keeping: the first version of this table ranked the *dead* co-blocker first and
printed it as **"TARGET"** while labelling it ALREADY DEAD two columns earlier. A tool that contradicts
itself on one screen is precisely how a killed experiment gets re-run by someone trusting the headline. The
ranking now draws only from live causes, and the dead row is displayed with a tag that forbids targeting it.

## `no-pushed-record` (3,674 sites / 1,160 units): I guessed "measurement bug", and the data said structural

Second-largest bail in the class, and tempting: `pushed-vs-npush` is exactly where the frame-walk fix lived,
so a measurement defect here could have been another cheap slice. My first diagnostic reported 2,037 sites
with a plain `mov` above the call and 471 a `lea` — neither of which the walk breaks on — which looked like
proof of a mis-set boundary.

**Both readings were wrong, and they were wrong in the same way: inferring a cause from a neighbouring fact.**
The instruction above a call says nothing about where a 30-instruction backward walk gave up. So I stopped
inferring and made the walk *record* why it stopped — `site["npush_stop"]`, added to `gen_model` exactly the
way `_push_values` records `push_values_why` (behaviour-free: no value, verdict, or emitted byte changes;
verified inert at 125/125 and `lift_selftest` 255/255).

| real break reason | sites |
|---|---|
| `control-flow:call` | **1,508** |
| `control-flow:je` | 931 |
| `control-flow:jne` | 461 |
| `control-flow:ret` | 278 |
| `control-flow:jmp` | 262 |
| `jl`/`jge`/`jle` | 143 |
| **`prologue-before-any-push`** | **34** |
| **`depth>24`** | **13** |

**The hypothesis is dead: 98.7% of `no-pushed-record` is structural**, not the prologue-boundary family I
hoped for (34 sites) and not the tunable (13). Reaching across a branch or a back-edge to find a call's
argument pushes is a *design*, and one with the wrong failure mode: values gathered from paths that do not
merge are guesses, which is the same error the three killed `g->reg` widenings made.

The dominant single shape deserves a note for whoever comes next: **1,508 sites have another `call`
immediately above them.** That is not a missing push — it smells like a call whose arguments arrive in
*registers* (`thiscall`/`fastcall`) while Ghidra's prototype still lists them as arguments, so the guard
compares a stack push count against a register-argument list. **Do not treat that as a green light**:
comparing Ghidra's count against the measured pushes is the exact thing `loop-notes.md:303` forbids
inventing a rule about, and the guard already strips one or two register args on the paths it knows. It is a
lead with a documented prohibition in front of it, and it needs the same treatment as everything else here —
a named exemplar read end-to-end, then a priced population, before a line of code.

## Discipline notes

- The first version's remainder printed **-196**: the "no unnameable register push" units were counted in
  their own bucket *and* in `blocked`. Now an asserted partition (`assert sum == len(real)`,
  `assert real + no_push + unscanned == len(units)`) — arithmetic that announces its own double count
  should be an exception, not a line someone squints at.
- Selftest pins both directions of the classifier: `lea ecx,[esp+0x10]` → `push ecx` **must** be
  frame-nameable (it is the parked census's shape), and `lea ecx,[esp+edx]` → `push ecx` **must not** be.
- The population comes from a live report-only run (cached to `build/lift/argcount-units.txt`), not from a
  frozen table — the last turn's stale-C2100 lesson.
- Nothing booked, no knob on, judged directories clean, audit (pid 20748) still holds the harness.
