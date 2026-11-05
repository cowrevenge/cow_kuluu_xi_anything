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
  ranked by size alone and handed out 0x1000d660, a 9-byte `setne` predicate.
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
- Now: cluster 3 is the net clock around 0x100dbeb0 (0x100dbe50 / 0x100dbf20 todo, five siblings already
  done as the object's known shape). The layout of the 0x10492e10 owner exists and its members are read.
