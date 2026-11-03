# Conversion machinery

How our code gets in front of the recompiled game, how it is proven, and how progress is published.
Each part was built, run and recorded here; the gate (`tools/cow/gate.ps1`) is the only judge.

Upstream's surface we touch: **three marked lines in `tools/build.py`** (search `# COW:`). Nothing
under `recomp/`, `meta/` or `tests/` is edited, and `generated/`, `build/` never enter git.

---

## Part 2 — the hook (`--wraps`)

### The mechanism, upstream's own

`recomp.py --wraps name=0xADDR` (documented at `recomp/recomp.py:16-20`) turns a translation into a
gate:

```c
void f_1031676f_body(Guest* g) { ...the real translation... }   /* funcs_052.c */
void f_1031676f(Guest* g) { if (rt_wrap_...) rt_wrap_...(g); else f_1031676f_body(g); }
/* table.c */   GuestFn rt_wrap_...;  const GuestFn rt_orig_... = f_1031676f_body;
```

Direct calls, tail jumps and `rt_table` (indirect calls, vtables) all reach `f_1031676f`, so a wrap
covers every way in. Our side is three pieces:

| file | who writes it | what it is |
|---|---|---|
| `cow/wraps.json` | `tools/cow/genwraps.py` | `{"cow_<entry hex>": "0x<entry hex>"}` for every ledger row with `status=done` |
| `runtime/cow/cow_wraps.c` | `tools/cow/genwraps.py` | sets `rt_wrap_cow_<hex> = cow_adapter_<hex>` for each wrap |
| `src/**`, `layout/**` | us | the user functions and their `COW_ADAPTER` blocks |

* **Keys never change.** `cow_<entry hex>` is derived from the entry address, so renaming a function
  (or moving its file) never orphans a wrap a running host already installed.
* **`--wraps` reaches `recomp.py`** through one changed line in `recomp()`:
  `wraps = ','.join([...BUILD['wraps']...] + cow.wraps())`.
* **Our sources reach the builds** through one line in `compile_stale()`:
  `sources = list(sources) + cow.sources_for(objdir, sources)`. `tools/cow/cow_build.py` adds them to
  the whole-image builds (`host`, `boot64`, `host64`, `host64-headless`, `uwp-lib` — the ones that
  compile `generated\all\table.c`) and to `build\cowdiff`, and **refuses to add them to the CRT slice**
  (`tests/difftest.c`): the differential test has to stay a pristine comparison of upstream's
  translation. It also fails the build if two of our `.c` files share a basename, because
  `compile_stale()` names objects after the basename.
* **Registration needs no upstream `main()`.** `boot64.exe` is built from `tests/boot64.c` and the
  stand-in DLL from `host/ffximain.c` — both upstream, both off-limits. The generated TU installs its
  pointers from a `.CRT$XCU` initialiser, which the MSVC CRT runs at start-up for EXEs and DLLs alike
  (`/MT`), before any guest code executes.

### Proof it works (2026-11-03)

Target: the guest's own entry point. `generated/all/table.c:22818` says `rt_image_oep = 0x1031676f`,
and `tests/boot64.c:89-91` calls exactly that and prints the result:

```c
uint32_t dllmain[3] = { rt_image_base, 1 /* DLL_PROCESS_ATTACH */, 0 };
uint32_t ok = guest_call(rt_image_oep, 3, dllmain);
printf("DllMain(PROCESS_ATTACH) -> %u\n", ok);
```

A temporary `src/unsorted/cow_probe_dllmain.c` provided `cow_adapter_1031676f`, the ledger row was set
to `done` with `tools/cow/setstatus.py`, and `genwraps.py` produced the two generated files.

| adapter body | result |
|---|---|
| forwards: `rt_orig_cow_1031676f(g);` | `BUILD_CHECK PASS host 22s` · `PASS difftest 3s` · `PASS boot64 20s`, `BOOT64 OK`, `DllMain(PROCESS_ATTACH) -> 1` |
| skips the body: `rt_return(g, 0, 12);` | `BUILD_CHECK FAIL boot64 exit=1 22s` with **`DllMain(PROCESS_ATTACH) -> 0`** |

Skipping the body changed what the guest returned, so the wrap was on the executed path and our code
genuinely replaced the generated function. The recomp side of the hook was checked in the generated
output while the wrap was registered:

```
generated/all/funcs_052.c:47452   if (rt_wrap_cow_103169e0) rt_wrap_cow_103169e0(g);
generated/all/funcs_052.c:47453   else f_103169e0_body(g);
generated/all/table.c:63          GuestFn rt_wrap_cow_103169e0; /* recomp.py --wraps */
generated/all/table.c:64          const GuestFn rt_orig_cow_103169e0 = f_103169e0_body;
```

(that pair was a first attempt on the CRT `memcpy`, which also stayed green both ways — informative
but not decisive, because guest `memcpy` is not on the boot path; the `DllMain` target above is).

The probe file was then deleted, the ledger row returned to `todo`, `genwraps.py` regenerated the
empty pair, and `host`/`difftest`/`boot64` were confirmed green again.

### Commands

```
python tools/cow/genwraps.py            # regenerate cow/wraps.json + runtime/cow/cow_wraps.c
python tools/cow/genwraps.py --check    # stale check (the gate calls this)
python tools/cow/setstatus.py 0x100035a0 --status done --name <n> --file src/... --verified true
python tools/cow/setstatus.py --summary # ledger state counts, including in_progress units
python tools/cow/cow_build.py           # what the hook would add to each build, and the wraps
```
