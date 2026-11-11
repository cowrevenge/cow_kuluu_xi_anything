"""lift_proof.py - build ONCE, prove EVERY lifted unit, group the failures by pattern.

    python tools/cow/ghidra/lift_proof.py --list build/lift/entries.txt          # all of them
    python tools/cow/ghidra/lift_proof.py --entries 0x10017030,0x1001cfa0 --json
    python tools/cow/ghidra/lift_proof.py --list build/lift/entries.txt --chunk 250 --states 200

Why this exists and cowdiff.py does not: cowdiff.py links one executable per entry, which is right for a
hand unit (a slow proof of one thing you care about) and impossible for 20,000 (an hour of links to learn
that 60% of them fail the same way). Like tools/cow/table_proof.py, this renders every entry's
instrumented original and every adapter into ONE translation unit, links one exe, and lets the harness
loop. Each row still carries its own coverage counters, so a PASS is still per entry.

The output is not just a pass rate. A lift run's value is the FAIL GROUPS: two entries that fail for the
same reason are one bug in lift.py, not two bugs, and the reason strings are normalised (the differing
addresses and register names are folded away) so the groups count. That histogram is what decides what to
fix next.

Result: cow/lift_proof.json, {"<entry>": {"pass":bool,"why":str,"detail":str,...}} - and build/lift/
holds the rendered sources, the per-entry first-failure lines, and the compile log.
"""
import argparse
import collections
import csv
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys
import threading
import time

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

HERE = os.path.dirname(os.path.abspath(__file__))          # tools/cow/ghidra
TOOLS = os.path.dirname(HERE)                              # tools/cow: where cowdiff and trivial_audit live
ROOT = os.path.dirname(os.path.dirname(TOOLS))             # the repo root
sys.path.insert(0, TOOLS)              # tools/cow: cowdiff, build, build_cached, trivial_audit

import cowdiff                          # noqa: E402  instrument(), harness_lock(), GEN, COWDIR
import trivial_audit                    # noqa: E402  body_index() - one pass over generated/all
import judge2                           # noqa: E402  flags, contract, tiers, the record: what a verdict means

# JUDGE 2 is the default and the only judge whose PASS can be booked as proven (see tools/cow/judge2.py and
# docs/cow/SYSTEM2.md). `--judge 1` runs the legacy comparison for a side-by-side measurement; its verdicts
# are recorded with tier `weak` and count for nothing.
JUDGE = 2
JUDGE_ID = ""          # the id of the judge on disk, taken once per run
RETUSE = {}            # cow/retuse.json: who reads whose return registers

# TWO PROVERS AT ONCE. Everything a run writes - the rendered chunk, its objects, its exe, its logs - goes
# under BUILD_DIR with names built from the chunk index, so two runs in the same directory overwrite each
# other's files mid-build and both come back with nonsense (link errors, rows of the wrong table). A second
# prover - the conveyor proving a scratch tree while a baseline runs, or a one-off check while the conveyor
# runs - therefore gets its own directory and its own exe names:
#     COW_LIFT_BUILD   the directory, relative to the repo root (default build/lift)
#     COW_LIFT_TAG     a prefix for chunk names, so its exes are not called lift_c000.exe as well (the
#                      LNK1104 recovery in _link ends processes by image NAME)
# The translated image itself (20,000 functions, compiled once) is the same for everybody, so its object
# cache stays shared in build/lift/img; it is only ever written under cowdiff.harness_lock().
BUILD_DIR = os.path.join(ROOT, os.environ.get("COW_LIFT_BUILD") or os.path.join("build", "lift"))
IMG_DIR = os.path.join(ROOT, "build", "lift", "img")
CHUNK_TAG = re.sub(r"[^A-Za-z0-9]", "", os.environ.get("COW_LIFT_TAG", ""))
PROOF = os.path.join(ROOT, "cow", "lift_proof.json")
# COW_LIFT_SRC points the prover at a scratch lift tree instead of src/lifted, so an experiment
# (release a refusal, measure how many of its units actually pass) can be graded without ever
# putting an unproven file in front of the real build.
LIFTED_DIR = os.environ.get("COW_LIFT_SRC") or os.path.join(ROOT, "src", "lifted")

# THE LAYOUT HAS TO FOLLOW THE TREE IT IS PROVING. COW_LIFT_SRC redirected only the unit files, while the
# include path and `lifted_bridges.c` stayed hardcoded to `layout/`. But a scratch lift writes its OWN
# layout beside its units (lift.py:layout_targets), so the newly released units' COW_ADDR_LIFT_* macros
# exist in build/<scratch>/lifted_addresses.h and NOT in the committed one. Proving a scratch tree the old
# way compiled it against the wrong header table: every unit whose release depended on a macro nobody had
# registered before failed to compile, and those failures are the harness's fault, not the units' - a false
# negative aimed straight at whatever the experiment was measuring, which is exactly how a 322-unit family
# gets parked for a reason that is not true. Inert by construction when COW_LIFT_SRC is unset: the paths
# below resolve to the same `layout` string the file has always used.
if os.path.normpath(LIFTED_DIR) == os.path.normpath(os.path.join(ROOT, "src", "lifted")):
    LAYOUT_REL = "layout"
else:
    LAYOUT_REL = os.path.relpath(LIFTED_DIR, ROOT).replace("\\", "/")
BRIDGES_C = LAYOUT_REL + "\\lifted_bridges.c"
# PREPEND, DO NOT REPLACE. The first attempt at this redirected the include path at the scratch tree and
# nothing else, and the result was a proof in which 291 of 322 units failed with `C1083: Cannot open include
# file: 'cow.h'` - because `layout/` is not only where the generated `lifted_addresses.h`/`lifted_bridges.h`
# live, it is also where `cow.h`, `addresses.h`, `calls.h`, `cow_types.h`, `enums.h` and `handles.h` live,
# and the scratch tree contains ONLY the three generated files. Every unit failed with the same line, which
# is the signature this loop has learned to treat as a harness fault rather than a result: an experiment that
# pronounces a 322-unit family dead because a header went missing is the exact false negative the scratch
# path exists to avoid. So the scratch dir goes FIRST (its lifted_addresses.h must win over the committed
# one, which is the whole point) and `layout` stays behind it for everything else. Identical to the old
# behaviour when COW_LIFT_SRC is unset: the list collapses to ["layout"].
LAYOUT_INCS = [LAYOUT_REL, "layout"] if LAYOUT_REL != "layout" else ["layout"]

# A CALL TO A FUNCTION NOBODY DECLARED is only a warning in C (C4013: "undefined; assuming extern returning
# int"), so the file compiles - and then the LINK of the whole chunk fails on the unresolved name, and every
# row of the chunk is booked link_error for one unit's invented helper. For a scratch tree (candidates a
# model wrote, tools/cow/conveyor.py) the warning is therefore an error, which puts the blame on the one
# file, per file, in the syntax check. The committed tree is compiled exactly as it always was.
UNIT_STRICT = ["/we4013"] if os.environ.get("COW_LIFT_SRC") else []


OWNED = None           # the entries THIS run grades; set by main() once the list is final


def write_results(path, results):
    """Publish the verdict record ATOMICALLY.

    WHY. This file rewrites the population ledger after every chunk - a run of hours, dozens of writes - and
    every one of them used to be `open(path, "w")` followed by json.dump. Truncating the real file means any
    reader that arrives mid-write (the loop calling `loopy next`, patterns_check's reachability clause,
    reverify's claimed(), another tool) gets a PARTIAL document: json.load raises, `load_proof` catches
    ValueError and returns `({}, "unreadable")`, and the caller has no way to tell "the population has no
    failures" from "somebody was writing the file when I looked". A verdict record that can be observed
    half-written turns a tool's bad luck into a confident wrong number, which is the failure this loop keeps
    meeting. Write to a sibling temp file and rename: os.replace is atomic within a volume, so a reader sees
    either the previous complete record or the new complete one, never either in pieces.
    """
    if OWNED is not None:
        # This run answers only for the entries it was asked to grade. Whatever else is in the file - a
        # verdict the conveyor added while this run was in flight, say - is somebody else's and stays
        # exactly as it is on disk (tools/cow/judge2.py:update_ledger).
        judge2.update_ledger(path, {k: results[k] for k in OWNED if k in results})
        return
    tmp = path + ".tmp"
    with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
        json.dump(results, fh, indent=1, sort_keys=True)
    os.replace(tmp, path)



# ---------------------------------------------------------------- rendering one chunk

CONTRACT_OF = {}       # entry -> (label, why): the contract render_chunk gave each row, for the record


def render_chunk(entries, name):
    """One TU: every entry's instrumented original + its adapter's prototype + the batch table."""
    index = trivial_audit.body_index()
    L = ['/* generated by tools/cow/ghidra/lift_proof.py - do not edit, do not commit */',
         '#include "funcs.h"',
         '#include "cowdiff_batch.h"',
         '#if defined(_MSC_VER)',
         '#pragma warning(disable: 4102 4189 4101 4702 4244 4267 4013 4018)',
         '#endif',
         '',
         'void cow_stub_call(Guest* g, unsigned target, GuestFn real);',
         'GuestFn cow_side_a, cow_side_b;',
         'unsigned cow_cov[1];',
         'const unsigned cow_cov_count = 0u;',
         'const char* const cow_cov_sites[1] = { "" };',
         'const char* cow_target_entry = "lift-%s";' % name,
         'int cow_has_adapter = 1;',
         '']
    table, missing, no_adapter = [], [], []
    for entry in entries:
        body = index.get(entry)
        if body is None:
            missing.append(entry)
            continue
        src = os.path.join(LIFTED_DIR, "cow_%s.c" % entry)
        if not os.path.isfile(src):
            no_adapter.append(entry)
            continue
        inst, sites = cowdiff.instrument(body, entry, cov="cow_cov_%s" % entry)
        n = len(sites)
        # judge 2: the three numbers that say what this unit's callers can see. Legacy rows are all zero,
        # which is the every-bit comparison - so a row rendered for `--judge 1` is exactly the old row.
        eax_dead, edx_dead, stack_args = 0, 0, 0
        if JUDGE >= 2:
            with open(src, encoding="utf-8", errors="replace") as fh:
                eax_dead, edx_dead, stack_args, _label, _why = judge2.effective_contract(
                    fh.read(), RETUSE.get(entry), True)
            CONTRACT_OF[entry] = (_label, _why)
        L.append('/* %s: %d instruction site(s) */' % (entry, n))
        L.append('unsigned cow_cov_%s[%d];' % (entry, n))
        L.append('static const char* const cow_sites_%s[%d] = {' % (entry, n))
        for s in sites:
            L.append('    "%s",' % s.replace("\\", "\\\\").replace('"', "'"))
        L.append('};')
        L.append('static void cow_a_%s(Guest* g)' % entry)
        L += inst[1:]
        L.append('void cow_adapter_%s(Guest* g);' % entry)
        L.append('')
        table.append('    { "%s", 0x%su, cow_a_%s, cow_adapter_%s, cow_cov_%s, %uu, cow_sites_%s, 1, 0x%08xu, %d, %uu }'
                     % (entry, entry, entry, entry, entry, n, entry, eax_dead, edx_dead, stack_args))
    L.append('static const CowBatchRow g_rows[] = {')
    L.append(',\n'.join(table))
    L.append('};')
    L.append('const CowBatchRow* cow_batch_rows = g_rows;')
    L.append('const unsigned cow_batch_count = %du;' % len(table))
    L.append('')
    return "\n".join(L) + "\n", missing, no_adapter


# ---------------------------------------------------------------- build

CL_ERR_RE = re.compile(r"([A-Za-z0-9_\\.]+?cow_([0-9a-f]{8})\.c)(?:\((\d+)\))?\s*:\s*(?:fatal\s+)?error\s+(C\d+)\s*:\s*(.*)")
CL_ERR_BROAD = re.compile(r"([A-Za-z0-9_\\.]+\.c)(?:\((\d+)\))?\s*:\s*(?:fatal\s+)?error\s+(C\d+)\s*:\s*(.*)")


def syntax_check(entries):
    """Compile every lifted file with the output CAPTURED, and attribute each error to its file.

    The chunk build cannot tell you which of its 200 files is broken: upstream's compile_stale() lets cl
    write straight to the console, and one bad file aborts the batch. A lift run's single most useful
    early number is the COMPILE-ERROR PATTERN HISTOGRAM - which construct of Ghidra's does not survive
    translation - and that needs per-file blame, so this asks cl itself, once, with /Zs (parse and
    semantic check only, no code generation) and reads the diagnostics back.
    """
    import build as upstream
    env = upstream.msvc_env("x64")
    os.makedirs(BUILD_DIR, exist_ok=True)
    objdir = os.path.join(BUILD_DIR, "syn")
    os.makedirs(objdir, exist_ok=True)
    t_start = time.time()
    bad = {}
    # the lifted path has to follow LIFTED_DIR too, or a scratch experiment syntax-checks files that
    # are not the ones being proved and reports a clean tree for the wrong reasons
    rel = os.path.relpath(LIFTED_DIR, ROOT).replace("/", "\\")
    files = ["%s\\cow_%s.c" % (rel, e) for e in entries] + [BRIDGES_C]
    # Progress per batch, flushed. The whole syntax check prints one line at the END, which made a healthy
    # 4,852-file check indistinguishable from a hung one - and I spent half an hour killing a run that was
    # working. The same lesson as printing a PASS line per row: a long job has to keep talking, or the
    # operator cannot tell slow from dead and starts killing things.
    for i in range(0, len(files), 150):
        batch = files[i:i + 150]
        cmd = ["cl", "/c", "/Zs", "/nologo", "/O1", "/MT", "/W3", "/std:c11", "/bigobj"] + UNIT_STRICT + [
               "/DRT_GUEST_WINDOW",
               "/I", "runtime", "/I", "runtime\\portable", "/I", "generated",
               "/I", "generated\\all"] + sum([["/I", d] for d in LAYOUT_INCS], []) + batch
        p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                           encoding="utf-8", errors="replace", env=env)
        text = (p.stdout or "") + "\n" + (p.stderr or "")
        for m in CL_ERR_RE.finditer(text):
            bad.setdefault(m.group(2), []).append("%s: %s" % (m.group(4), m.group(5).strip()[:90]))
        # errors in the generated bridges (which no cow_*.c name carries) are everyone's problem
        for m in CL_ERR_BROAD.finditer(text):
            if "lifted_bridges" in m.group(1) or "lifted_addresses" in m.group(1):
                for e in entries:
                    bad.setdefault(e, []).append("bridges: %s: %s" % (m.group(3), m.group(4).strip()[:80]))
        if p.returncode != 0 and not bad:
            with open(os.path.join(BUILD_DIR, "syntax_unparsed.log"), "a", encoding="utf-8") as fh:
                fh.write(text)
        print("  syntax: %d/%d files (%d bad) %.0fs"
              % (min(i + 150, len(files)), len(files), len(bad), time.time() - t_start), flush=True)
    return bad


def _cl(env, srcs, objdir, includes):
    """Compile with the output CAPTURED. upstream.compile_stale lets cl write to the console, which is
    fine for a build and useless for a report: a lift run has to say WHICH file failed and WHY."""
    os.makedirs(objdir, exist_ok=True)
    # /DCOW_TICK_MEMORY here as well as in the cached image. The image needs it because a bridged callee is
    # the generated original, and this compile needs it because OUR side is here: the lifted bodies, the
    # bridges and the harness itself. A lifted body is plain C that reads and writes guest memory through the
    # same rd*/wr* helpers, so without the define side B has no route to the per-row budget at all - which is
    # exactly the class of hang this run kept hitting at 40s a pop, and why unlocking Ghidra's gotos made it
    # worse: `while (true)` whose exit condition did not survive the decompiler now spins in our own body,
    # where even cow_tick (which lives in the instrumented side A) cannot reach it.
    cmd = (["cl", "/c", "/nologo", "/MT", "/W3", "/std:c11", "/bigobj", "/DRT_GUEST_WINDOW",
            "/DCOW_TICK_MEMORY"]
           + [f for f in upstream_CFLAGS() if f not in ("/c", "/nologo")]
           + sum([["/I", d] for d in includes], []) + srcs + ["/Fo%s\\" % objdir])
    p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                       encoding="utf-8", errors="replace", env=env)
    return (p.stdout or "") + "\n" + (p.stderr or ""), p.returncode


def upstream_CFLAGS():
    import build as upstream
    return list(getattr(upstream, "CFLAGS64", ["/O2"]))


def _link(env, objs, exe):
    os.makedirs(os.path.dirname(exe), exist_ok=True)
    args = ["/nologo", "/OUT:%s" % exe, "/MACHINE:X64", "synchronization.lib"] + list(objs)
    rsp = exe.replace(".exe", ".rsp")
    with open(rsp, "w", encoding="utf-8") as fh:
        for x in args:
            fh.write(('"%s"' % x if " " in x else x) + "\n")
    p = subprocess.run(["link", "@%s" % rsp], cwd=ROOT, capture_output=True, text=True,
                       encoding="utf-8", errors="replace", env=env)
    out = (p.stdout or "") + "\n" + (p.stderr or "")
    # `LNK1104: cannot open file ...lift_c000.exe` is not a code problem - it means somebody is STILL
    # RUNNING that exe, and a chunk binary is held open by the very watchdog that kills it when a row hangs.
    # Cost of not handling it: one timed-out manual run booked 150 rows as link_error. So: find the
    # processes holding this exact image, end them, and link once more before believing the failure.
    if p.returncode != 0 and "LNK1104" in out:
        _kill_processes_running(exe)
        p = subprocess.run(["link", "@%s" % rsp], cwd=ROOT, capture_output=True, text=True,
                           encoding="utf-8", errors="replace", env=env)
        out = (p.stdout or "") + "\n" + (p.stderr or "")
    return out, p.returncode


def _kill_processes_running(exe):
    """End any live process whose image is this exe (psutil-free: a toolhelp snapshot through ctypes)."""
    import ctypes
    from ctypes import wintypes
    TH32CS_SNAPPROCESS = 0x2
    EXE32 = getattr(ctypes, "c_ulonglong", ctypes.c_ulong)

    class PROCESSENTRY32W(ctypes.Structure):
        _fields_ = [("dwSize", wintypes.DWORD), ("cntUsage", wintypes.DWORD),
                    ("th32ProcessID", wintypes.DWORD),
                    ("th32DefaultHeapID", EXE32), ("th32ModuleID", wintypes.DWORD),
                    ("cntThreads", wintypes.DWORD), ("th32ParentProcessID", wintypes.DWORD),
                    ("pcPriClassBase", ctypes.c_long), ("dwFlags", wintypes.DWORD),
                    ("szExeFile", ctypes.c_wchar * 260)]

    kernel32 = ctypes.windll.kernel32
    snap = kernel32.CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0)
    if snap == -1:
        return
    entry = PROCESSENTRY32W()
    entry.dwSize = ctypes.sizeof(PROCESSENTRY32W)
    want = os.path.basename(os.path.abspath(exe))
    # A basename match could, in principle, hit an unrelated program - so this only ever reaches the
    # harness's own chunk binaries, never an arbitrary process that happens to share a name.
    if not want.lower().startswith("lift_"):
        kernel32.CloseHandle(snap)
        return
    try:
        ok = kernel32.Process32FirstW(snap, ctypes.byref(entry))
        while ok:
            if os.path.normcase(entry.szExeFile) == os.path.normcase(want):
                h = kernel32.OpenProcess(0x0001 | 0x0400, False, entry.th32ProcessID)  # TERMINATE | QUERY
                if h:
                    kernel32.TerminateProcess(h, 0)
                    kernel32.CloseHandle(h)
            ok = kernel32.Process32NextW(snap, ctypes.byref(entry))
    finally:
        kernel32.CloseHandle(snap)


def _cached_image_objs(env):
    """Compile the generated image + portable runtime ONCE, into build/lift/img, and reuse them.

    Two bugs this closes, both found by running it. (1) Handing upstream's whole-image build 5,458 lifted
    sources builds a cl command line past the Windows limit (WinError 206), and cow_build adds src/** to
    that build whether we asked for it or not - so the build is compiled here, in batches, where the
    argument list is under control. (2) Falling back to "every .obj in build\\all64" links orphans left by
    sources that no longer exist (`cow_<hex>_ret.obj`, from before the trivial table replaced those files),
    and the link dies with LNK2005 against cow_trivial.obj. Only objects we deliberately compiled are
    linked, never a directory glob.
    """
    import build as upstream
    objdir = IMG_DIR
    os.makedirs(objdir, exist_ok=True)
    # The image carries the memory-op watchdog (runtime/guest.h COW_MEM_TICK), which is compiled IN,
    # not linked in. A cache keyed on mtimes alone would happily keep serving objects built without it,
    # and the proof would go back to 120s bisects while looking healthy - so the flags are part of the
    # cache identity, and changing them invalidates the directory instead of quietly mixing generations.
    flags = "/DCOW_TICK_MEMORY"
    stamp = os.path.join(objdir, ".flags")
    # guest.h is hashed, not merely depended-upon: the hook lives in a header, and the staleness test
    # below only compares .c mtimes, so an edited guest.h would otherwise be served from cache with the
    # watchdog silently absent - the failure mode this whole block exists to prevent.
    gh = os.path.join(ROOT, "runtime", "guest.h")
    with open(gh, "rb") as fh:
        gh_digest = hashlib.sha1(fh.read()).hexdigest()[:12]
    want = "%s\n%s\nguest.h=%s\n" % (flags,
                                      " ".join(sorted(getattr(upstream, "CFLAGS64", []))),
                                      gh_digest)
    have = ""
    if os.path.isfile(stamp):
        with open(stamp, encoding="utf-8") as fh:
            have = fh.read()
    if have != want:
        for f in os.listdir(objdir):
            if f.endswith(".obj"):
                os.remove(os.path.join(objdir, f))
        with open(stamp, "w", encoding="utf-8") as fh:
            fh.write(want)
    gen = [os.path.join("generated", "all", f) for f in sorted(os.listdir(cowdiff.GEN)) if f.endswith(".c")]
    srcs = gen + list(upstream.PORTABLE)
    stale = []
    for s in srcs:
        src = os.path.join(ROOT, s)
        obj = os.path.join(ROOT, objdir, os.path.basename(s)[:-2] + ".obj")
        if not os.path.isfile(obj) or os.path.getmtime(obj) < os.path.getmtime(src):
            stale.append(s)
    for i in range(0, len(stale), 300):
        batch = stale[i:i + 300]
        cmd = (["cl", "/c", "/nologo", "/O2", "/MT", "/W3", "/std:c11", "/bigobj", "/DRT_GUEST_WINDOW", flags]
               + sum([["/I", d] for d in ["runtime", "runtime\\portable", "generated", "generated\\all"]
                    + LAYOUT_INCS], [])
               + batch + ["/Fo%s\\" % objdir])
        if sum(len(x) + 3 for x in cmd) > 24000:
            rsp = os.path.join(BUILD_DIR, "img_%03d.rsp" % i)
            with open(rsp, "w", encoding="utf-8") as fh:
                for x in cmd[1:]:
                    fh.write(('"%s"' % x if " " in x else x) + "\n")
            cmd = [cmd[0], "@%s" % rsp]
        p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                           encoding="utf-8", errors="replace", env=env)
        if p.returncode != 0:
            raise CompileError((p.stdout or "") + (p.stderr or ""), os.path.join(BUILD_DIR, "img.log"))
    return [os.path.join(ROOT, objdir, f) for f in sorted(os.listdir(objdir)) if f.endswith(".obj")]


def build_chunk(entries, name):
    """Compile+link one exe for a chunk.

    The whole-image objects come from upstream's cached build (they are 20,000 generated functions and
    shared with build\\all64); everything we generate - the lifted units, the bridges, the rendered
    originals and the harness - is compiled here with its output captured, so a failure says which file
    and which line instead of printing to a console nobody is watching.
    """
    import build as upstream
    env = upstream.msvc_env("x64")
    os.makedirs(BUILD_DIR, exist_ok=True)
    target_rel = os.path.join(os.path.relpath(BUILD_DIR, ROOT), "lift_target_%s.c" % name)
    target = os.path.join(ROOT, target_rel)
    exe = os.path.join(BUILD_DIR, "lift_%s.exe" % name)
    text, missing, no_adapter = render_chunk(entries, name)
    with open(target, "w", encoding="utf-8", newline="\n") as fh:
        fh.write(text)
    log = os.path.join(BUILD_DIR, "compile_%s.log" % name)
    with cowdiff.harness_lock():
        cowdiff.stale_dependencies()
        import build_cached
        build_cached.ensure(upstream, "generated/all", ["--all"])
        objs_a = _cached_image_objs(env)
        incs = ["generated\\all", "tools\\cow", "runtime", "runtime\\portable", "generated"] + LAYOUT_INCS
        # A missing .c is a BOOKING, not a build failure: one absent file must not poison the other 399
        # rows of the chunk with a chunk-wide COMPILE FAIL, which is what happened when an entry refused
        # by a later rule was still named in a list handed to this tool.
        present, gone = [], []
        # BOTH of these must follow LIFTED_DIR. They were hardcoded to src/lifted, which did two damaging
        # things at once: a scratch experiment's units were booked `no_adapter` because they are not in
        # the committed tree, and the ones that WERE in the committed tree got the COMMITTED file handed
        # to the compiler instead of the file under test. That is how a 2,356-unit measurement came back
        # "no_adapter: 103/117" and got written up as a finding about adapters. It was a finding about
        # this line.
        _rel = LIFTED_DIR if os.path.isabs(LIFTED_DIR) else os.path.join(ROOT, LIFTED_DIR)
        _rel_win = _rel.replace("/", "\\")
        for e in entries:
            (present if os.path.isfile(os.path.join(_rel, "cow_%s.c" % e)) else gone).append(e)
        no_adapter = no_adapter + gone
        entries = present
        if not entries:
            return None, missing, no_adapter
        mine = (["tools\\cow\\cowdiff.c", target_rel.replace("\\", "/")]
                + ["%s\\cow_%s.c" % (_rel_win, e) for e in entries]
                + [BRIDGES_C])
        # Link exactly what we compiled, NEVER a glob of the object directory. The directory survives a
        # re-lift, and after the refusals landed it still held .obj files for sources that no longer exist
        # (`cow_10002460.obj`, whose bridge is gone) - so the link died with LNK2019 on every chunk and
        # 1,793 entries were booked link_error. This is the same "orphan .obj" bug I had already been
        # bitten by once with build\all64; globbing a cache links ghosts.
        objdir = os.path.join(BUILD_DIR, "obj_%s" % name)
        if os.path.isdir(objdir):
            shutil.rmtree(objdir, ignore_errors=True)
        out, rc = _cl(env, mine, objdir, incs)
        with open(log, "w", encoding="utf-8") as fh:
            fh.write(out)
        if rc != 0:
            raise CompileError(out, log)
        built = {os.path.splitext(os.path.basename(s))[0] + ".obj" for s in mine}
        objs_b = [os.path.join(objdir, f) for f in sorted(os.listdir(objdir))
                  if f.endswith(".obj") and f in built]
        # OUR objects win, always. build\all64 is a whole-image output directory and cow_build adds
        # src/** and layout/** to it, so it already holds cow_<hex>.obj from some earlier run of this
        # tool. Linking that copy instead of the one just compiled proves a unit against the version of
        # itself that was wrong - which is exactly how a fixed lift kept reporting the eax it had before
        # it was fixed. Dedupe therefore goes the other way: drop theirs, keep ours.
        mine = {os.path.basename(o).lower() for o in objs_b}
        objs_a = [o for o in objs_a if os.path.basename(o).lower() not in mine]
        cowdiff.stamp_dependencies()
        out, rc = _link(env, objs_a + objs_b, exe)
        with open(log, "a", encoding="utf-8") as fh:
            # The rc rides along with the output, because "the linker produced nothing and returned 1" is a
            # real failure mode here - it is what a still-held exe looks like after the watchdog killed its
            # owner - and an empty log section sends the next reader looking in the wrong place entirely.
            fh.write("\n== link rc=%d ==\n%s\n"
                     % (rc, out.strip() or "(the linker produced no output)"))
        if rc != 0:
            raise LinkError(out, log)
    return exe, missing, no_adapter


class CompileError(Exception):
    def __init__(self, text, log):
        Exception.__init__(self, text)
        self.stdout = text
        self.log = log


class LinkError(Exception):
    def __init__(self, text, log):
        Exception.__init__(self, text)
        self.stdout = text
        self.log = log


class ChunkTimeout(Exception):
    """A chunk whose executable stopped making progress. Raised with whatever it had printed.

    The harness has a per-row budget, but it rides on the coverage counter in the INSTRUMENTED side A -
    so a hang inside OUR lifted body (a Ghidra `while (true)` whose exit condition did not survive
    translation) never reaches it, and one such entry can hold a whole chunk forever. The chunk is
    therefore also bounded from outside, and bisected: a hung batch must degrade to one hung entry,
    never to no results at all."""
    def __init__(self, partial):
        Exception.__init__(self, partial)
        self.partial = partial


def retail_paths():
    """The same two arguments cowdiff.py passes: the unpacked retail image and the game folder."""
    import buildinfo
    b = buildinfo.current()
    return (os.path.join(ROOT, "generated", "FFXiMain.retail.dll"), b["game"])


# ---------------------------------------------------------------- run + parse

PASS_RE = re.compile(r"^COWDIFF PASS (\w+) states=(\d+) blocks=(\d+)/(\d+)")
FAIL_RE = re.compile(r"^COWDIFF FAIL (\w+) (.*)")


def classify_failure(text):
    """Fold a failure line into a PATTERN key: what differs, not which address differed.

    The loop fixes patterns, not entries, and two entries whose first mismatch is `esp 0068fe10/0068fe0c`
    and `esp 0068ff44/0068ff40` are the same bug. Numbers become # so the groups count.

    The reason is taken from the harness's OWN word in `first at state N (why)`, not by grepping the line
    for keywords: the failure text also contains a register dump with `fault 0/0` in it, so a keyword scan
    labelled eax and memory differences as "fault" and sent the loop chasing a group that was an artefact
    of its own parser.
    """
    t = text.strip()
    m = re.search(r"first at state\s+\d+\s*\(([^)]*)\)", t)
    why = (m.group(1).strip() if m else "")
    if not why:
        m2 = re.search(r"\(([^)]*)\)\s*$", t)
        why = m2.group(1).strip() if m2 else "other"
    if why.startswith("fatal:"):
        what = why.split(":", 1)[1].strip()
        api = re.search(r"([A-Za-z0-9_]+\.dll!)?([A-Za-z_][A-Za-z0-9_]*)\s*$", what)
        return "fatal:" + (api.group(2) if api else what[:40]), what
    if why == "no_adapter" or "no cow_adapter" in t:
        return "no_adapter", t
    return (why or "other"), re.sub(r"0x[0-9a-fA-F]+", "#", re.sub(r"\b[0-9a-fA-F]{4,}\b", "#", t))


def _row_budget_env():
    """Tell the harness to answer for a stuck row before the watchdog has to.

    The row budgets used to be 25 CPU / 60 wall seconds while the chunk watchdog fires at 120s of silence
    and the solo fuse at 12: a row that is merely SLOW could not spend its own budget before the watchdog
    shot the process, and came out `no_row_output` ("we do not know") instead of `timeout` ("this row ran
    out of time, at state N"). Ten times the median row - which runs in about 0.6s - is still generous.

    Do not oversell it. Measured on the rows this session's unlocks produced, the tighter budget did NOT
    catch them: `--rows 100648d0` with a 3s wall budget still spun past 300 seconds while its neighbour in
    the same exe answered in under a second. Both checkpoints live on paths a stuck row may never take -
    `cow_tick` is in the instrumented blocks of SIDE A, and `COW_MEM_TICK` is inside `rd*`/`wr*` - so a
    register-only loop, or a host call that does not come back, is unreachable from inside the process.
    For those the external watchdog is the only answer, and `hang` is the honest word for them.
    """
    env = dict(os.environ)
    # judge 2 runs up to 2000 states a row, and restores the whole heap per state: the 6/8 above were
    # sized for 400 states and would book honest rows as `timeout`
    env.setdefault("COWDIFF_ROW_CPU_SECS", str(judge2.ROW_CPU_SECS) if JUDGE >= 2 else "6")
    env.setdefault("COWDIFF_ROW_WALL_SECS", str(judge2.ROW_WALL_SECS) if JUDGE >= 2 else "8")
    return env


def run_chunk(exe, states, seed, nargs, idle_secs=120, hard_secs=4 * 3600, rows=None, self_check=False):
    """Run one chunk, and KILL it if it stops reporting.

    The harness prints a line per row, so an advancing chunk is a chunk that keeps talking. This is a
    watchdog on SILENCE rather than on total time: a fixed wall clock would punish a legitimately slow
    chunk (300 states x 400 rows) and still not save a genuinely hung one, whereas idle detection is
    precise - and it is the only defence available, because the hang that motivated it was inside OUR
    lifted body, where the harness's own per-row budget (which rides on side A's coverage counter) is
    never reached. Whatever the chunk managed to print before it was killed is returned, so the entries
    it had already graded are not thrown away.

    `rows` restricts which rows of the ALREADY-LINKED table execute (cowdiff --rows). It exists because a
    chunk that hangs is re-run with the culprit removed, and recompiling 400 instrumented originals to
    drop one row cost minutes per hang; with the filter the same exe is reused and only the run repeats.
    """
    dll, game_dir = retail_paths()
    cmd = [exe, dll, game_dir, "--table", "--states", str(states),
           "--seed", str(seed), "--args", str(nargs)]
    if JUDGE >= 2:
        cmd += judge2.judge_flags()
    if self_check:
        cmd += ["--self"]          # the original against itself: a FAIL here is the harness, not the unit
    if rows:
        cmd += ["--rows", ",".join(rows)]
    p = subprocess.Popen(cmd, cwd=ROOT, stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                         text=True, encoding="utf-8", errors="replace", env=_row_budget_env())
    lines, last = [], [time.time()]

    def reader():
        for ln in p.stdout:
            lines.append(ln)
            last[0] = time.time()

    t = threading.Thread(target=reader, daemon=True)
    t.start()
    deadline = time.time() + hard_secs
    while p.poll() is None:
        if time.time() - last[0] > idle_secs:
            p.kill()
            t.join(5)
            raise ChunkTimeout("".join(lines))
        if time.time() > deadline:
            p.kill()
            t.join(5)
            raise ChunkTimeout("".join(lines))
        time.sleep(2)
    t.join(15)
    err = ""
    try:
        err = p.stderr.read() or ""
    except Exception:
        pass
    return "".join(lines), err


def record_results(out, results):
    """Turn a chunk's COWDIFF lines into verdicts. Returns how many passed.

    Split out of the chunk loop because the same harvest has to happen when a chunk is KILLED partway:
    the rows it finished before it hung are real proofs and must not be thrown away with the rest.
    """
    n_pass = 0
    for line in out.splitlines():
        m = PASS_RE.match(line)
        if m:
            if JUDGE >= 2:
                # `pass` is True ONLY for gold. A PASS that ran too few clean states, or left instruction
                # sites unreached, agreed where it looked and looked at too little: it is recorded with its
                # tier (silver / weak) and every reader that counts `pass` now counts proven units only.
                results[m.group(1)] = _v2_record(m.group(1), judge2.parse_line(line))
                n_pass += 1 if results[m.group(1)]["pass"] else 0
                continue
            results[m.group(1)] = {"pass": True, "why": "", "states": int(m.group(2)),
                                   "blocks": "%s/%s" % (m.group(3), m.group(4))}
            n_pass += 1
            continue
        m = FAIL_RE.match(line)
        if m:
            why, detail = classify_failure(m.group(2))
            # `detail` is the folded pattern (what the groups are keyed on); `raw` is the harness's line
            # with its numbers intact, which is what a diagnostic pass reads when it needs to know whether
            # the differing word was 0 on our side and a pointer on theirs. Without it, the values that
            # separate one pattern from the next are erased before anything can look at them.
            results[m.group(1)] = {"pass": False, "why": why, "detail": detail, "raw": m.group(2).strip()}
            if JUDGE >= 2:
                rec = _v2_record(m.group(1), judge2.parse_line(line))
                rec.update(why=why, detail=detail, raw=m.group(2).strip())
                results[m.group(1)] = rec
    return n_pass


def _v2_record(entry, res):
    """One row's judge-2 record: the verdict, its tier, and what it is valid for (this file, this judge)."""
    src = os.path.join(LIFTED_DIR, "cow_%s.c" % entry)
    sha = judge2.file_sha(src) if os.path.isfile(src) else ""
    label, why = CONTRACT_OF.get(entry, ("strict", ""))
    return judge2.make_record(res, sha, JUDGE_ID, label, why)


# verdicts that are "the machinery did not answer", not "the unit is wrong"
NO_ANSWER = ("link_error", "compile_blocked", "build_exception", "no_row_output", "harness_timeout",
             "no_adapter", "no_generated_body", "awaiting_solo")
REAL_MISMATCH = ("eax", "edx", "esp", "memory", "callee-saved register", "st0", "fault", "call count",
                 "call args", "out-of-region write", "out-of-region overflow", "direction flag",
                 "fpu control word")


def self_control(results, entries, exe_of, a):
    """Ask the harness to judge the ORIGINAL AGAINST ITSELF for every row that failed, and re-label the
    ones where it disagrees with itself.

    A differential that cannot reproduce its own side A on some unit has nothing to say about anybody's
    side B for that unit: the failure is the harness's (state it does not restore between the two runs),
    not the conversion's. Those rows become tier `noisy` - never a pass, never work for anyone to "fix" in
    the unit, and counted on their own line so the size of the harness's blind spot is a number.
    """
    fails = [e for e in entries
             if results.get(e) and not results[e].get("pass") and results[e].get("why") in REAL_MISMATCH
             and results[e].get("verdict") == "fail" and exe_of.get(e) and os.path.isfile(exe_of[e])]
    by_exe = collections.defaultdict(list)
    for e in fails:
        by_exe[exe_of[e]].append(e)
    noisy = 0
    for exe, rows in by_exe.items():
        try:
            # 300 states are enough to see a harness that cannot repeat itself (the cluster showed at state
            # 0), and the control must not cost as much as the proof it is a control for
            out, _err = run_chunk(exe, str(min(int(a.states), 300)), a.seed, a.nargs, rows=rows,
                                  idle_secs=a.idle_secs, self_check=True)
        except ChunkTimeout as exc:
            out = exc.partial
        for line in out.splitlines():
            m = FAIL_RE.match(line)
            if m and m.group(1) in results and m.group(1) in rows:
                why, _detail = classify_failure(m.group(2))
                if why not in REAL_MISMATCH:
                    continue        # `no clean state`, a timeout: not a disagreement of the harness with itself
                r = results[m.group(1)]
                r["tier"] = "noisy"
                r["self"] = why
                noisy += 1
    if fails:
        print("self control: %d failing row(s) re-run against themselves, %d are harness noise"
              % (len(fails), noisy), flush=True)
    return noisy


# ---------------------------------------------------------------- driver

def load_entries(args):
    if args.entries:
        return [x.strip().lower().replace("0x", "") for x in args.entries.split(",") if x.strip()]
    if args.list:
        with open(args.list, encoding="utf-8") as fh:
            return [ln.strip().lower().replace("0x", "") for ln in fh if ln.strip() and not ln.startswith("#")]
    # default: whatever src/lifted holds
    if os.path.isdir(LIFTED_DIR):
        out = []
        for f in sorted(os.listdir(LIFTED_DIR)):
            m = re.match(r"cow_([0-9a-f]{8})\.c$", f)
            if m:
                out.append(m.group(1))
        return out
    return []


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--list", default="", help="file of entries, one per line")
    ap.add_argument("--entries", default="", help="comma-separated entries")
    ap.add_argument("--judge", type=int, default=2, choices=(1, 2),
                    help="2 (default): judge v2 - the contract comparison, clean-state counting, the richer "
                         "states; the only judge whose PASS is booked. 1: the legacy comparison, for "
                         "measurement only")
    ap.add_argument("--states", default="",
                    help="default: judge2.STATES_MAX under --judge 2 (a row stops early once it has enough "
                         "clean states and full coverage), 400 under --judge 1")
    ap.add_argument("--seed", default="12345")
    ap.add_argument("--args", dest="nargs", default="",
                    help="stack argument words to fuzz (default: judge2.FUZZ_ARGS under --judge 2, else 4)")
    ap.add_argument("--no-self", action="store_true",
                    help="skip the self control (failing rows re-run original-against-original)")
    ap.add_argument("--chunk", type=int, default=400, help="entries per executable")
    ap.add_argument("--idle-secs", type=int, default=120,
                    help="kill a chunk after this much silence (it is still printing = it is still working)")
    ap.add_argument("--solo-idle-secs", type=int, default=12,
                    help="silence allowed for a row run by itself in the final pass; a 300-state row that "
                         "is merely slow reports in well under this, so exceeding it means it is stuck")
    ap.add_argument("--requeue-idle-secs", type=int, default=40,
                    help="the same patience for a chunk already known to hold a hang; the bisect pays this "
                         "wait once per hang, so it is the difference between minutes and half an hour")
    ap.add_argument("--retries", type=int, default=4,
                    help="passes a chunk's unreported remainder gets after an idle-timeout before its "
                         "entries are booked harness_timeout")
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--only-chunk", type=int, default=-1)
    ap.add_argument("--rerun", action="store_true",
                    help="re-prove entries that already have a verdict in --out (default: skip them)")
    ap.add_argument("--retry-why",
                    default="harness_timeout,compile_blocked,build_exception,link_error,no_row_output",
                    help="comma-separated reasons that do NOT count as graded (they are 'no answer', "
                         "not 'failed', and skipping them forever would quietly shrink the population)")
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--out", default=PROOF)
    a = ap.parse_args()

    global JUDGE, JUDGE_ID, RETUSE
    JUDGE = a.judge
    a.states = a.states or (str(judge2.STATES_MAX) if JUDGE >= 2 else "400")
    a.nargs = a.nargs or (str(judge2.FUZZ_ARGS) if JUDGE >= 2 else "4")
    if JUDGE >= 2:
        JUDGE_ID = judge2.judge_id(ROOT)
        RETUSE = judge2.load_retuse(ROOT)
        # a row may legitimately be silent for its whole wall budget; a fuse shorter than the budget turns
        # slow rows into `hang`
        a.solo_idle_secs = max(a.solo_idle_secs, judge2.ROW_WALL_SECS + 15)
        a.requeue_idle_secs = max(a.requeue_idle_secs, judge2.ROW_WALL_SECS + 15)
        a.idle_secs = max(a.idle_secs, 2 * judge2.ROW_WALL_SECS + 30)
        print("judge 2  id %s  retuse rows %d  states<=%s  clean target %d"
              % (JUDGE_ID, len(RETUSE), a.states, judge2.CLEAN_TARGET), flush=True)
        if not RETUSE:
            print("  NOTE: cow/retuse.json is missing - every unit is compared in full. Build it once with\n"
                  "        python tools/cow/judge2.py --retuse <functions_all.jsonl>", flush=True)

    entries = load_entries(a)

    # The hand record and the lifted record are DIFFERENT ledgers, and --out has defaulted to the hand one
    # (PROOF) the whole time - so every lifted batch run silently signed the hand ledger. A unit that lives
    # under LIFTED_DIR and has no row in ledger/functions.csv is not a hand unit, so refuse to write it
    # there and name the --out that is correct. This fails BEFORE the build: finding it out after a
    # 250-second proof is how it happened twice.
    #
    # THE GUARD NOW READS THE RESOLVED LIST, NOT THE FLAG. The first version looked only at a.entries, so
    # the ordinary way a lifted batch is invoked - `--list build/lift/entries.txt` - walked straight past it
    # and wrote 54 lifted verdicts into the hand ledger anyway. A safety check that inspects how you were
    # ASKED rather than what you are ABOUT TO DO is not a safety check; whatever route load_entries took,
    # this is the list that would be signed.
    if os.path.abspath(a.out) == os.path.abspath(PROOF):
        # A HAND unit is one the ledger says is `done`. The first draft of this compared against every row
        # in the ledger, which is useless: `lift.py --apply` files the units it emits as `todo`, so every
        # lifted unit HAS a row and nothing would ever look like a stray. Status is the distinction, and it
        # is the one the gate itself reads.
        hand = set()
        csv_path = os.path.join(ROOT, "ledger", "functions.csv")
        if os.path.exists(csv_path):
            with open(csv_path, encoding="utf-8", newline="") as fh:
                for row in csv.DictReader(fh):
                    e = str(row.get("entry", "")).strip().lower().replace("0x", "")
                    if e and str(row.get("status", "")).strip().lower() == "done":
                        hand.add(e)
        _strays = [e for e in entries
                   if os.path.isfile(os.path.join(LIFTED_DIR, "cow_%s.c" % e)) and e not in hand]
        if _strays:
            print("REFUSING to write %d lifted entries into the HAND proof record (%s):"
                  % (len(_strays), os.path.relpath(PROOF, ROOT)))
            print("  they have a file under src/lifted and the ledger does not say `done`, so they are"
                  " machine-lifted: %s%s"
                  % (", ".join(_strays[:5]), " ..." if len(_strays) > 5 else ""))
            print("  pass --out cow/lift_proof_all.json for the lifted tree")
            return 2
    if a.limit:
        entries = entries[:a.limit]
    if not entries:
        print("nothing to prove: no entries (lift.py --apply first, or pass --list/--entries)")
        return 2

    os.makedirs(BUILD_DIR, exist_ok=True)
    results = {}
    if os.path.isfile(a.out):                       # keep prior chunks' verdicts on a partial rerun
        try:
            results = json.load(open(a.out, encoding="utf-8"))
        except ValueError:
            results = {}
    # A population run is hours long and dies for reasons that have nothing to do with the units (a
    # machine reboot, a row that spun, a tool fix). Re-proving the thousands of entries already graded
    # to add one more chunk is not progress, so previously verdicted entries are skipped unless --rerun.
    if a.rerun:
        # Ask the question again, and forget the old answer first. The booking below uses setdefault, which
        # is the wrong verb against an entry whose verdict is still in the dict: the row keeps what it used
        # to say, is never re-booked as awaiting_solo, and the solo pass - built from awaiting_solo - walks
        # past it. That is how 149 rows sat at a stale `link_error` across three runs reporting "0/162".
        selected = {e.lower() for e in entries}
        for k in [k for k in results if k.lower() in selected]:
            del results[k]
    if not a.rerun and results:
        retry = set(x.strip() for x in a.retry_why.split(",") if x.strip())

        def already(e):
            r = results.get(e)
            if not r:
                return False
            if JUDGE >= 2:
                # a verdict made by another judge, or about another version of the file, is not a verdict
                # about this one - so a judge change re-proves the population without anyone asking
                src = os.path.join(LIFTED_DIR, "cow_%s.c" % e)
                if not judge2.is_valid(r, judge2.file_sha(src) if os.path.isfile(src) else "", JUDGE_ID):
                    return False
            # a verdict we asked to retry is not a verdict: harness_timeout and the blocked buckets are
            # "we never got an answer", and skipping them forever would quietly shrink the population
            return not (retry and r.get("why") in retry)

        todo = [e for e in entries if not already(e)]
        if todo != entries:
            print("skipping %d already-graded entries (pass --rerun to prove them again)"
                  % (len(entries) - len(todo)))
        entries = todo
        if not entries:
            print("everything in the list is already graded")

    global OWNED
    OWNED = set(entries)

    # ---- phase 1: does each file even compile? Blame is per file, so a single bad construct degrades one
    # entry's verdict and not the whole chunk's.
    t0 = time.time()
    bad = syntax_check(entries)
    print("syntax check: %d/%d files with compile errors (%.0fs)" % (len(bad), len(entries), time.time() - t0))
    for e, errs in bad.items():
        # one pattern per file: the FIRST error, because MSVC cascades and the rest are its echo
        results[e] = {"pass": False, "why": "compile:" + errs[0].split(":")[0],
                      "detail": " | ".join(errs[:3])}
    clean = [e for e in entries if e not in bad]

    # Chunks are a WORK QUEUE, not a fixed list. When a chunk is killed by the idle watchdog, the rows
    # after the culprit never reported - and because the hang is deterministic, re-running the remainder
    # grades everything up to the next hang. Each pass therefore makes progress, and after `--retries`
    # passes the surviving stragglers are booked as harness_timeout rather than retried forever. Without
    # this, one hung entry cost ~150 real verdicts per chunk: 295 unknowns in the first population run.
    chunks = collections.deque((i, clean[i:i + a.chunk], 0, None)
                               for i in range(0, len(clean), a.chunk))
    t_all = time.time()
    compile_fail = {}
    # ci -> entries booked as the head-of-chunk hang while getting that chunk through. A chunk that
    # EVENTUALLY completes every other row proves those entries were the only hangers, so they are
    # upgraded to `hang`: a genuine infinite loop in the unit (a pure-register spin, which touches no
    # memory and so outruns even the memory-op watchdog) is a property of the unit, not "the harness
    # could not be finished", and it must not be re-paid at 120s of silence on every future run.
    # `hang` is deliberately absent from --retry-why.
    head_suspects = collections.defaultdict(list)
    exe_of = {}             # entry -> the linked exe that can run it, for the solo pass
    while chunks:
        ci, chunk, attempt, exe_carry = chunks.popleft()
        if a.only_chunk >= 0 and ci != a.only_chunk:
            continue
        name = CHUNK_TAG + "c%03d" % ci + ("r%d" % attempt if attempt else "")
        t0 = time.time()
        try:
            if exe_carry and os.path.isfile(exe_carry):
                # Requeue of a chunk we already built: the exe is unchanged, only the set of rows it may
                # run differs, and cowdiff --rows says which.
                exe, missing, no_adapter = exe_carry, [], []
                reused = True
            else:
                exe, missing, no_adapter = build_chunk(chunk, name)
                reused = False
                if exe is None:
                    # Nothing in this chunk had a source file - every entry was booked as no_adapter by
                    # build_chunk, so there is no exe to run and no verdict to invent.
                    for e in chunk:
                        results.setdefault(e, {"pass": False, "why": "no_adapter",
                                               "detail": "no src/lifted file for this entry"})
                    continue
        except LinkError as exc:
            print("chunk %s: LINK FAIL -> %s" % (name, exc.log))
            print("   " + "\n   ".join(exc.stdout.splitlines()[:12]))
            for e in chunk:
                results[e] = {"pass": False, "why": "link_error", "detail": exc.log}
            continue
        except CompileError as exc:
            print("chunk %s (%d entries): COMPILE FAIL -> %s" % (name, len(chunk), exc.log))
            blamed = set()
            for m in CL_ERR_RE.finditer(exc.stdout or ""):
                blamed.add(m.group(2))
            for e in chunk:
                if e in blamed:
                    results[e] = {"pass": False, "why": "compile_error", "detail": exc.log}
                else:
                    results[e] = {"pass": False, "why": "compile_blocked",
                                  "detail": "not named by the compiler; a sibling in this chunk failed"}
            continue
        except Exception as exc:
            print("chunk %s: BUILD ERROR %s" % (name, exc))
            for e in chunk:
                results[e] = {"pass": False, "why": "build_exception", "detail": str(exc)[:200]}
            continue
        # Snapshot the verdicts this chunk arrives with. `record_results` assigns a NEW dict per row it
        # grades, so identity tells us exactly which rows reported THIS pass - which `e not in results`
        # cannot, and the difference was real: a chunk whose entries were pre-booked harness_timeout by an
        # earlier run reported "105 silent" out of 400, quietly refusing to retry the other 295 forever.
        # which linked exe can run this row - the solo pass reuses it rather than rebuilding
        for e in chunk:
            exe_of[e] = exe
        before = {e: results.get(e) for e in chunk}
        # A REQUEUE is a chunk already known to contain a hang, so the patience that protects a first pass
        # (a legitimately slow chunk that is still printing) buys nothing here: the silence means "stuck",
        # and the row budgets catch anything that is merely slow. The bisect that removes hangs one at a
        # time pays this wait per hang, and the hangs come in families at adjacent addresses - 120s each
        # turned a dozen of them into half an hour.
        idle = a.idle_secs if attempt == 0 else min(a.idle_secs, a.requeue_idle_secs)
        try:
            out, err = run_chunk(exe, a.states, a.seed, a.nargs, rows=chunk, idle_secs=idle)
        except ChunkTimeout as exc:
            # The chunk stopped reporting. Keep every verdict it had already printed - those are real
            # proofs - and put the rows that never reported back on the queue, because the hang is
            # deterministic and a rerun of the remainder grades up to the next culprit. Only after
            # `--retries` passes does an entry get booked as harness_timeout: that is "the harness could
            # not be finished for you", not "your conversion is wrong", and the two must never share a
            # bucket.
            out, err = exc.partial, "killed after the chunk stopped reporting"
            n = record_results(out, results)
            with open(os.path.join(BUILD_DIR, "run_%s.log" % name), "w", encoding="utf-8") as fh:
                fh.write(out + "\n--stderr--\n" + err)
            silent = [e for e in chunk if results.get(e) is before.get(e)]
            if silent and attempt < a.retries:
                if n == 0 and attempt >= 2:
                    # Two full-length head bisects and still nothing at all reported: this is not one bad
                    # row among 400 good ones (the case the head trick is built for - it clears that in a
                    # single kill and grades the rest), this is a chunk whose rows hang in numbers, and
                    # continuing to guess at 40s a guess is just a slow way of doing what the solo pass does
                    # at 12s with a certain answer. Hand the whole remainder over.
                    for e in silent:
                        results[e] = {"pass": False, "why": "awaiting_solo",
                                      "detail": "chunk reported nothing on %d passes" % attempt}
                    print("chunk %s: TIMEOUT with nothing graded twice -> %d rows handed to the solo pass"
                          % (name, len(silent)))
                    sys.stdout.flush()
                    write_results(a.out, results)
                    continue
                if n == 0:
                    # NOTHING reported: the first row of the chunk is the culprit, and re-running the
                    # identical list hangs identically - which would burn every retry and then lose all
                    # 400 entries to a single bad one. Book the head as the hang and requeue the rest,
                    # so one hung entry costs one verdict instead of a chunk.
                    culprit = silent[0]
                    # `awaiting_solo`, not a verdict: the head of the chunk is a SUSPECT, not a found
                    # culprit - the row that would have been next is indistinguishable from it until it has
                    # been run by itself. The solo pass below is what turns the suspicion into an answer.
                    results[culprit] = {"pass": False, "why": "awaiting_solo",
                                        "detail": "first row of the chunk never returned"}
                    head_suspects[ci].append(culprit)
                    with open(os.path.join(BUILD_DIR, "hang_%s.txt" % name), "w", encoding="utf-8") as fh:
                        fh.write(culprit + "\n")
                    print("chunk %s: TIMEOUT with nothing graded -> 0x%s is the hang; requeueing %d"
                          % (name, culprit, len(silent) - 1))
                    chunks.append((ci, silent[1:], attempt + 1, exe))
                    sys.stdout.flush()
                    write_results(a.out, results)
                    continue
                if n > 0 and silent:
                    # SOME rows reported and then the table went quiet. The rows run in table order, so the
                    # first silent one is the hanger - the same inference as the nothing-graded case above,
                    # which was only ever applied when n == 0. Without it a chunk with five hangers re-runs
                    # its whole remainder five times to find them one at a time, and every one of those
                    # passes pays the full idle wait: 120s x 5 x 5 instead of 40s x 5.
                    culprit = silent[0]
                    results[culprit] = {"pass": False, "why": "awaiting_solo",
                                        "detail": "first row after the last report never returned"}
                    head_suspects[ci].append(culprit)
                    with open(os.path.join(BUILD_DIR, "hang_%s.txt" % name), "w",
                              encoding="utf-8") as fh:
                        fh.write(culprit + "\n")
                    print("chunk %s: TIMEOUT after %d graded -> 0x%s is the hang; requeueing %d for pass %d"
                          % (name, n, culprit, len(silent) - 1, attempt + 1))
                    sys.stdout.flush()
                    write_results(a.out, results)
                    chunks.append((ci, silent[1:], attempt + 1, exe))
                    continue
                with open(os.path.join(BUILD_DIR, "hang_%s.txt" % name), "w", encoding="utf-8") as fh:
                    fh.write("\n".join(silent) + "\n")
                print("chunk %s: TIMEOUT after %d graded; requeueing %d for pass %d"
                      % (name, n, len(silent), attempt + 1))
                sys.stdout.flush()
                # Persist before requeueing. The rows graded before the hang are real proofs, and a
                # result that lives only in this process's memory is a result that a later kill throws
                # away - the first version of the requeue path `continue`d without saving and lost every
                # verdict the hung chunk had managed.
                write_results(a.out, results)
                chunks.append((ci, silent, attempt + 1, exe))
                continue
            for e in silent:
                # Not booked as harness_timeout yet: the solo pass below gives each of these a process of
                # its own with a short fuse, which is both cheaper and more honest than condemning a row for
                # what its neighbours did.
                # assignment, not setdefault: with --rerun the old verdict is gone anyway, and if this
                # path is ever reached without it, "nobody answered for this row" is the truth about NOW,
                # not about whatever the last run decided.
                results[e] = {"pass": False, "why": "awaiting_solo",
                              "detail": "silent in every chunk pass; to be run alone"}
            print("chunk %s: TIMEOUT after %d graded, %d queued for the solo pass"
                  % (name, n, len(silent)))
            sys.stdout.flush()
            write_results(a.out, results)
            continue
        with open(os.path.join(BUILD_DIR, "run_%s.log" % name), "w", encoding="utf-8") as fh:
            fh.write(out + "\n--stderr--\n" + err)
        n_pass = record_results(out, results)
        # A row that printed NOTHING is not "not yet graded" - the process came back, so nothing more is
        # coming. 168 entries vanished this way: the first one called a guest ExitThread, the runtime
        # called exit(), and every row queued behind it was neither passed, failed, nor even recorded.
        # Silence from a live process is a verdict, and it has to be written down as one.
        for e in chunk:
            if results.get(e) is before.get(e):
                results[e] = {"pass": False, "why": "no_row_output",
                              "detail": "the chunk process returned without ever reporting this row"}
        # This chunk ran to completion, so every row it reported graded and the entries earlier taken as
        # its hangers were really that: hang them, and stop re-paying their 120 seconds to every future
        # proof. (If a suspect somehow did report - a flaky rather than a hung loop - its real verdict,
        # just recorded, is kept instead.)
        for e in head_suspects.pop(ci, []):
            if results.get(e, {}).get("detail") == "first row of the chunk never returned":
                results[e] = {"pass": False, "why": "hang",
                              "detail": "spins without returning; every other row of its chunk graded"}
        for e in missing:
            results[e] = {"pass": False, "why": "no_generated_body", "detail": ""}
        for e in no_adapter:
            results[e] = {"pass": False, "why": "no_adapter", "detail": "src/lifted file missing"}
        print("chunk %s: %d/%d pass  (%.0fs)" % (name, n_pass, len(chunk), time.time() - t0))
        # Persist after EVERY chunk. A full-image proof is an hour of work, and a tool that writes its
        # verdicts only at the end loses all of them to one bad chunk - and shows the operator nothing
        # to watch while it runs.
        sys.stdout.flush()
        write_results(a.out, results)

    # ---- the solo pass: every row still without a verdict runs ALONE, with a short fuse
    # A chunk is a throughput device - 400 rows in one process, one link, printed as it goes - and that is
    # also what makes a hang expensive, because finding it means removing rows and re-running at whatever
    # patience the watchdog has. By now the culprits are known individually: the rows that stayed silent on
    # every pass of their chunk. Run each one by itself against the exe that is already linked for it
    # (`--rows`, no rebuild), and the question stops being "which of these 400 is it" - it is the one we are
    # running, and 12 seconds of silence from it is an answer: `hang`, a property of the unit, not
    # harness_timeout, which is a property of us. The cost stops being patience x hangs-in-a-chunk and
    # becomes patience x hangs, which is the best this problem allows: these loops are parked inside a host
    # API that a shim called, so no in-process budget can ever see them - clock() does not run, no guest
    # memory is touched, and cow_tick is on the other side.
    solo = [e for e, r in results.items() if r.get("why") == "awaiting_solo"]
    if solo:
        print("\nsolo pass: %d row(s), one process and %ds of silence each"
              % (len(solo), a.solo_idle_secs))
        sys.stdout.flush()
        for k, e in enumerate(solo, 1):
            exe = exe_of.get(e)
            if not exe or not os.path.isfile(exe):
                results[e] = {"pass": False, "why": "harness_timeout",
                              "detail": "silent, and no linked exe left to run it alone"}
                continue
            try:
                out, _err = run_chunk(exe, a.states, a.seed, a.nargs, rows=[e],
                                      idle_secs=a.solo_idle_secs,
                                      hard_secs=a.solo_idle_secs * 4)
                record_results(out, results)
                if results.get(e, {}).get("why") == "awaiting_solo":
                    # the process returned without ever reporting this row
                    results[e] = {"pass": False, "why": "hang",
                                  "detail": "run alone; never reported"}
            except ChunkTimeout:
                results[e] = {"pass": False, "why": "hang",
                              "detail": "run alone; silent for %ds (parked in a host call or a "
                                        "register-only loop - no in-process budget can reach it)"
                                        % a.solo_idle_secs}
            if k % 20 == 0 or k == len(solo):
                print("  solo: %d/%d  (%d pass so far)"
                      % (k, len(solo), sum(1 for v in results.values() if v.get("pass"))), flush=True)
                write_results(a.out, results)

    for e, r in list(results.items()):
        if r.get("why") == "awaiting_solo":          # a solo row that was never even attempted
            results[e] = {"pass": False, "why": "harness_timeout",
                          "detail": "silent in every chunk pass; the solo pass did not run it"}

    if JUDGE >= 2:
        # every verdict of this run says which judge made it and which file it is about - including the
        # ones that never reached the harness (compile errors, hangs), so a stale one can be told apart
        for e in entries:
            r = results.get(e)
            if r is None:
                continue
            src = os.path.join(LIFTED_DIR, "cow_%s.c" % e)
            r.setdefault("judge", JUDGE_ID)
            r.setdefault("src", judge2.file_sha(src) if os.path.isfile(src) else "")
            w = str(r.get("why", ""))
            r.setdefault("tier", "nocompile" if w.startswith("compile") else "hang" if w == "hang"
                         else "error" if w in NO_ANSWER else "fail")
            r.setdefault("verdict", "none")
        if not a.no_self:
            self_control(results, entries, exe_of, a)

    write_results(a.out, results)

    # ---- the report the whole tool exists for
    groups = collections.Counter()
    for e, r in results.items():
        if e in set(entries) and not r.get("pass"):
            groups[r.get("why", "?")] += 1
    total = len(entries)
    npass = sum(1 for e in entries if results.get(e, {}).get("pass"))
    tiers = collections.Counter(results.get(e, {}).get("tier", "none") for e in entries)
    if JUDGE >= 2 and not a.json:
        print("\nTIERS  " + "  ".join("%s %d" % (k, tiers[k]) for k in
                                      ("gold", "silver", "weak", "fail", "noisy", "nocompile", "hang", "timeout",
                                       "error", "none") if tiers.get(k)))
    if a.json:
        print(json.dumps({"total": total, "pass": npass, "tiers": dict(tiers),
                          "groups": dict(groups.most_common())}, indent=1))
    else:
        print("\nLIFT PROOF  %d/%d pass (%.1f%%)  in %.0fs   -> %s"
              % (npass, total, 100.0 * npass / max(1, total), time.time() - t_all,
                 os.path.relpath(a.out, ROOT)))
        print("\nfailures by pattern:")
        for k, v in groups.most_common(25):
            print("  %-32s %5d" % (k, v))
        example = collections.defaultdict(list)
        for e, r in results.items():
            if e in set(entries) and not r.get("pass"):
                example[r.get("why", "?")].append((e, r.get("detail", "")))
        print("\none example per pattern:")
        for k, _v in groups.most_common(12):
            e, d = example[k][0]
            print("  %-28s %s  %s" % (k, "0x" + e, (d or "")[:120]))
    return 0 if npass == total else 1


if __name__ == "__main__":
    sys.exit(main())
