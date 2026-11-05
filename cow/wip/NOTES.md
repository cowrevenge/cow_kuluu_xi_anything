# cow loop - working notes

- 2026-11-05 cluster.py, the note that was wrong and what was actually broken. The earlier note said
  "clusters never grow by callees" because `texts_of` kept only the `/* addr: mnemonic */` lines. It is
  true that the emitter writes the callee on the code line (`REGS_STORE; ... f_102d90f1(g); ...`) and
  that is now scanned (14,592 -> 14,609 todo entries with callees), but that was not why clusters stayed
  at one member: callees were dropped by the *filters*, not the regex - `thunk` status and
  `--max-callee-bytes 64`. 13,029 todo->callee edges sit in 65-256 B; the default is now 192 B, callees
  enter smallest-first, and `--max` is a budget spent across callees AND siblings (it used to be spent
  only by siblings, so a seed with a dozen 20-byte helpers produced thirteen members).
- 2026-11-05 two queue bugs, both learned from clusters that ended in `failed`. (1) Nothing checked
  whether anything *enters* an entry: 3,460 todo rows have no call, no jump and no stored pointer
  anywhere in the image, and the queue happily built a cluster around one. tools/cow/owner_index.py
  indexes the whole image once (0.2 s, cached in build/) and both `loopy pick` and `cluster.py --next`
  now prefer owned entries; they degrade to the old order rather than starve. (2) `cluster.py --next`
  ranked by size alone and handed out 0x1000d660, a 9-byte predicate, as a cluster.
- 2026-11-05 the object test needed a frequency cap. Six functions clustered around 0x10329a08 as if it
  were their shared struct; it is a dword constant in .rdata that 187 bodies cite. An address counts as
  the object only if <= MAX_OBJECT_REFS (64) bodies cite it - the net clock's 0x10492e10 is 17, the IME
  owner 0x103d3c64 is 40. Same test would drop an IAT slot every caller of one import shares. The
  sibling query is a lookup in the cached reverse index (abs_index, build/abs_index.pickle) instead of a
  regex pass over every ledger row per seed.
- 2026-11-05 0x102d920a (cow_spline_split_cubic_at_t draft) released to todo and parked in cow/skip.txt:
  its three evaluator calls walk thunk 0x102d90f1 -> trampoline 0x102d90cd -> state machine 0x102e7670 ->
  evaluator 0x102d90f7, >1000 lines of todo code; both sides fault inside it and memory diverges at the
  evaluator output buffer, so a green there is a harness artefact. Draft + seed kept out of the tree in
  build/rebook_102d920a/. The harness gained unbound-IAT binding (97 slots), section tail zero-fill and a
  stub hook ahead of pinned answers for it. Re-book it once its evaluator cluster is done.
- 2026-11-05 cluster 3 (the net clock, six units, one commit) taught the harness three things, each
  recorded where it bites. (1) A seed's `stubs` only intercept calls made from the ENTRY's own body -
  that is the copy cowdiff rewrites - so a call nested inside an unconverted callee runs for real on
  side A while side B is answered. It showed up as a .data list head (0x103d2a0c) holding a host-heap
  pointer, 0x00680038 against 0x00680098 and a further 0x60 every state: the routine at 0x10314f31 asks
  the operating system and allocates, so stub the entry-level callee instead and let that callee prove
  itself (cow/seeds/100dbe50.json). (2) A bridge must not push an argument the entry already pushed:
  `call()` in gthread.c writes the args at esp-4*n and the return address below them, and a site-exact
  bridge restores NOTHING, so a duplicated push leaves side B four bytes low forever (esp 0x993be0
  against 0x993be4). The three cdecl bridges in this cluster push nothing and the adapters do the pushes
  at the original's own instruction addresses - which also matters for ORDER, because f_100dbf20 pushes
  its first argument at 0x100dbf2f and only then reads the word at 0x100dbf30 that faults on a junk
  clock pointer: a bridge that pushed all three would be one write ahead of the fault. (3) `rep stosd`
  honours the direction flag (the generated body's own loop is `edi += (df ? -4 : 4)`) and cowdiff fuzzes
  df - a conversion that always filled upward wrote over a sentinel side A had left. Anything that
  translates a string op has to read df.
- 2026-11-05 gate and timing items for the next between-clusters pass, all seen while converting, none
  touched mid-cluster: (a) `phase.py report` prints a NEGATIVE total when a cluster is claimed twice -
  0x100dbeb0 has a `start` at 07:45:08Z from the abandoned earlier attempt and one at 13:16:18Z from
  this one - it should take the latest start or refuse the second; (b) gate.ps1 stamps cowdiff_done and
  gate_done per entry (right), but `loopy next --entry` stamps `start` under the seed only, so a
  cluster's phases spread over six cluster keys and the per-entry report is a mess; (c) `commit.py
  --machinery` allows docs/cow, which lets a tool commit carry the DERIVED README/STATUS/NAMES_TODO -
  both had to be `git checkout`-ed before the machinery commits today, and they should be excluded from
  machinery mode outright the way README.md already is.
- Now: cluster 4 is either the queue's next seed (0x102d8be9, 92B, rank 0, owned) or the spline
  evaluator the released 0x102d920a is waiting on (0x102d90cd trampoline / 0x102e7670 / 0x102d90f7).

- 2026-11-05 cluster 5 (the clock's setter side: 0x100dc090 / 0x100dc150 / 0x100dc1b0 booked, plus
  0x100dc0a0 / 0x100dc0e0 read, proven and left `failed` because nothing reaches them). Three things the
  loop should stop re-learning:
  (1) `cowdiff`'s memory comparison checks what each pinned address ENDS holding, not the sequence of
      writes that produced it. Two mutants that looked like checker holes are that fact: dropping the
      first of the entry's two stores to +0x14 (f_100dc1b0 M1) and dropping the loop's second reload of
      the global (f_100dc150 M9) are both invisible. Every header in src/ that says the proof covers
      writes "address, size, value, ORDER" overstates it - mine included, including the ones committed
      earlier today. A review pass should rewrite that phrase to "address, size and value" and, where an
      intermediate store is genuinely unverifiable, say so as M1 does.
  (2) `mov al,1` over eax=0x40 answers 1, not 0x41: the byte it replaces is the only one that was
      nonzero. The first reading of f_100dc150 said 0x41 in three places and the seeds were written to
      match; the harness did not catch it because the conversion happened to compute the truth with the
      mask idiom. Where a register's aftermath is a single byte write, state the value in the header from
      the measurement, not from the arithmetic in your head.
  (3) A seed value without the `0x` prefix is REJECTED by cowdiff's parse_u32 (`bad --pin-answer
      ffffffff`) - third time today (the two stubs earlier, this one an answer). Either the seeds should
      be validated before the harness runs (a --check mode in cowdiff.py that parses every seed file and
      reports), or parse_u32 should take base 16 when the text has no prefix. Machinery item.
- 2026-11-05 the queue keeps handing out entries that are proven-dead weight: 0x100dc0a0 and 0x100dc0e0
  took a full read, two conversions, two seed files, x87 work and a new bridge, and cannot be booked
  because callers_of/refs_to/owner_index all report zero references. cluster.py's next_seed and
  loopy.pick() already PREFER owned entries but do not exclude the ownerless ones until the owned queue
  is empty. Consider a harder filter (skip entries with zero references unless COW_LOOPY_UNOWNED=1), the
  way trivial() already excludes <=8-byte stubs.
- 2026-11-05 cluster.py grew this cluster correctly (all six setter/getter siblings of the net clock came
  from the 0x10492e10 object test), but it still finds NOTHING when the members share a callee instead of
  a global - the quaternion family around 0x102d64b1 is 10 call sites that are one module and each is
  served as its own one-member cluster. Machinery idea: a third cluster relation, siblings-by-shared-
  callee (entries that call the same non-thunk callee, capped by the same MAX_OBJECT_REFS test so a
  popular callee like the truncating conversion does not swallow the image).

- 2026-11-05 (cluster 6, 0x102d9502 plane-from-three-points) cowdiff compares the memory TRACE, so side
  B has to fault at the same INSTRUCTION as side A, not merely write the same words. Reading all nine
  point floats up front left 10 mismatches, because the original reads [ebx] three times with pushes and
  an fstp in between and a fuzzed pointer can alias the stack those writes land on. Rule: interleave the
  adapter's READS with its writes at the original's addresses; batching reads is only safe below the last
  store.
- 2026-11-05 the second string-instruction trap (after cluster 5's rep stosd): 0xa5 `movsd` advances BOTH
  esi and edi by +/-4, so it is df-dependent and the harness fuzzes df. Any a4/a5/aa/ab in a body means a
  `const int step = g->df ? -N : N;` and a per-pass register update. It also made a mutation I had
  labelled "expected equivalent" (keep the computed value instead of re-reading the object after a pinned
  callee) a genuine CATCH - with df set, the copy walks away from the field the read-back uses.
- 2026-11-05 x87 seed craft that paid for itself: a DEGENERATE state (here, the two difference vectors
  equal and nonzero) makes every `fsubp` subtract two equal products, so the sign of the +0.0f it leaves
  pins the operand order, and an `fchs` before the store versus a subtraction from zero differs at -0.0f.
  Two cheap states replaced four mutants' worth of doubt. Also: when a value is `fstp`ed to a scratch
  local and `fld`ed back, it is float-rounded, and a value that stays on the register stack is not -
  test the difference with a value that needs >24 bits (1.0f minus 1e-4f).
- 2026-11-05 `a*b - c*d` written straight in C is an FMA-contraction candidate, and clang (the macOS
  build) defaults to allowing it while MSVC /fp:precise does not - one rounding instead of the guest's
  two. Guarded with `volatile double` temporaries for each product. Machinery idea: state the policy in
  docs/cow/STYLE.md (or add -ffp-contract=off to build_posix.py's CFLAGS) so the next x87 unit does not
  have to rediscover it.
- 2026-11-05 renaming a shared constant when its second caller appeared (COW_ADDR_QUAT_AXIS_* ->
  COW_ADDR_VECTOR3_TABLE_* with _RETURN_A/_RETURN_B) is the right move, but it is a cross-file rename in
  already-committed files and had to ride along in the next unit's commit. Machinery idea: rename.py
  should also stamp the ledger note so the rename is visible in the row, not only in names.csv.