#!/usr/bin/env python3
"""Render the public state of the conversion: README progress block, STATUS.md, NAMES_TODO.md.

Everything here is generated from the repo's own state and is never hand-edited:

    ledger/functions.csv   what is converted (status, name, file, verified, leaf_rank, cycle, note)
    cow/names.csv          what every identifier is called, with confidence and evidence
    loop.log               one line per unit the loop finished, failed or checkpointed
    cow/unreached/<hex>.txt units whose cowdiff coverage is short, with the code-reading reason
    docs/cow/LOOP_HALT.md   present while the loop is stopped, and why

Three outputs:

    README.md            only the text between <!-- COW-STATUS:BEGIN --> and <!-- COW-STATUS:END -->
    docs/cow/STATUS.md   pie, per-leaf_rank progress, last 10 done, failures, unreached lists, names
    docs/cow/NAMES_TODO.md  every guess and placeholder, grouped by kind, with file:line + evidence

Run it before every push (the standing rule) and commit the result: the GitHub page must always show
current progress. Its own outputs are excluded from the dirty check, and it describes the commit being
made (--describe), not its parent.

    python tools/cow/status.py
    python tools/cow/status.py --describe 'cow: 0x100083b0 cow_incr_counter_if_active [guess]'
    python tools/cow/status.py --check     # exit 1 if any output is stale (the gate calls this)
"""

import argparse
import collections
import csv
import json
import os
import re
import subprocess
import sys
from datetime import datetime, timedelta, timezone

BEGIN = "<!-- COW-STATUS:BEGIN -->"
END = "<!-- COW-STATUS:END -->"
STATUSES = ["todo", "in_progress", "done", "failed", "thunk"]
CONFIDENCES = ["confirmed", "guess", "placeholder"]
OUR_OUTPUTS = ("README.md", "docs/cow/STATUS.md", "docs/cow/NAMES_TODO.md")


def repo_root():
    return os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def git(repo, *args):
    try:
        out = subprocess.run(["git", "-C", repo] + list(args), capture_output=True, text=True,
                             timeout=30, encoding="utf-8", errors="replace")
        if out.returncode == 0:
            return out.stdout.strip()
    except Exception:                                             # noqa: BLE001
        pass
    return ""


def stable(text):
    """A generated document with its volatile lines removed. The stamp and the commit line change on
    every run by design, so --check must ask whether the CONTENT moved, not whether time passed."""
    if text is None:
        return None
    return "\n".join(l for l in text.split("\n")
                     if not l.startswith("- Last updated:")
                     and not l.startswith("- Commit being made:")
                     and not l.startswith("- Repo:")
                     and not l.startswith("> updated "))


def read_csv(path):
    if not os.path.isfile(path):
        return []
    with open(path, newline="", encoding="utf-8") as fh:
        return list(csv.DictReader(fh))


def bar(fraction, width=28):
    fraction = 0.0 if fraction != fraction else max(0.0, min(1.0, fraction))  # NaN guard
    filled = int(round(fraction * width))
    return "[" + "#" * filled + "-" * (width - filled) + "]"


def parse_loop_log(path):
    """`2026-11-03T11:20:05Z 0x100083b0 name guess done 7.5` per line; blank/# lines ignored."""
    out = []
    if not os.path.isfile(path):
        return out
    with open(path, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            parts = line.split()
            if len(parts) < 5:
                continue
            try:
                when = datetime.strptime(parts[0], "%Y-%m-%dT%H:%M:%SZ").replace(tzinfo=timezone.utc)
            except ValueError:
                continue
            out.append({"when": when, "entry": parts[1], "name": parts[2], "confidence": parts[3],
                        "result": parts[4], "minutes": parts[5] if len(parts) > 5 else ""})
    return out


_IDENT_RE = re.compile(r"[A-Za-z_][A-Za-z0-9_]*")
_INDEX_CACHE = {}          # (repo, roots) -> {identifier: "path:line"}


def _identifier_index(repo, roots):
    """{identifier: first path:line that mentions it}, from ONE walk of the given roots in priority order.

    `find_definition` used to re-walk the tree for every name it was asked about - ~740 NAMES_TODO entries
    against 5,290 lifted units, which is the same bytes read several hundred times over and turned a commit
    into a ten-minute detour. The answer is the same: a word-boundary search for `name` is exactly "is name
    one of the identifier tokens on this line", and the first line that contains it is the first line whose
    token set contains it.
    """
    key = (repo, tuple(roots))
    hit = _INDEX_CACHE.get(key)
    if hit is not None:
        return hit
    index = {}
    for top in roots:
        base = os.path.join(repo, top)
        if not os.path.isdir(base):
            continue
        for dirpath, dirs, files in os.walk(base):
            dirs.sort()
            for f in sorted(files):
                if not f.endswith((".c", ".h")):
                    continue
                pth = os.path.join(dirpath, f)
                rel = os.path.relpath(pth, repo).replace("\\", "/")
                try:
                    with open(pth, encoding="utf-8", errors="replace") as fh:
                        for n, line in enumerate(fh, 1):
                            for tok in _IDENT_RE.findall(line):
                                if tok not in index:
                                    index[tok] = "%s:%d" % (rel, n)
                except OSError:
                    continue
    _INDEX_CACHE[key] = index
    return index


def find_definition(repo, name, kind):
    """Where an identifier is *written down*, as path:line. A fix-up list that points at a use site is
    worse than no list, so layout/ is searched first for layout kinds and src/ first for code kinds."""
    if not name:
        return ""
    layout_first = kind in ("struct", "field", "enum", "global", "table", "typedef", "call")
    roots = ["layout", "src", "runtime/cow"] if layout_first else ["src", "layout", "runtime/cow"]
    return _identifier_index(repo, roots).get(name or "", "")


def source_shape(repo):
    """How much of OUR C exists. Counted from the tree, so it can never be inflated by hand."""
    files = loc = 0
    for top in ("src", "layout"):
        base = os.path.join(repo, top)
        if not os.path.isdir(base):
            continue
        for dirpath, dirs, fs in os.walk(base):
            dirs.sort()
            for f in sorted(fs):
                if not f.endswith((".c", ".h")):
                    continue
                files += 1
                try:
                    with open(os.path.join(dirpath, f), encoding="utf-8", errors="replace") as fh:
                        loc += sum(1 for _ in fh)
                except OSError:
                    continue
    return loc, files


def names_section(repo, names):
    """(markdown lines for NAMES_TODO.md, counts by confidence)."""
    counts = collections.Counter(n.get("confidence", "") for n in names)
    lines = ["# Names to confirm", "",
             "<!-- Generated by tools/cow/status.py from cow/names.csv - do not edit by hand. -->",
             "",
             "Every identifier the conversion invented is here until it is backed by evidence and run",
             "through `python tools/cow/rename.py <old> <new> --confirm`. A guess or a placeholder never",
             "blocks the loop; it only means the name is not proven yet.",
             "",
             "- identifiers: **%d** (%s)" % (
                 len(names), ", ".join("%s **%d**" % (c, counts.get(c, 0)) for c in CONFIDENCES)),
             ""]
    open_items = [n for n in names if n.get("confidence") in ("guess", "placeholder")]
    by_kind = collections.OrderedDict()
    for kind in ("function", "adapter", "call", "struct", "field", "enum", "global", "table", "typedef"):
        group = [n for n in open_items if n.get("kind") == kind]
        if group:
            by_kind[kind] = group
    for n in open_items:                                  # any kind we did not anticipate - a previous
        kind = n.get("kind") or "(no kind)"               # setdefault-and-append-once kept only the first
        if kind not in by_kind:                           # row of each new kind and dropped the rest, so
            by_kind[kind] = []                            # the gate blamed the unit for the generator's loss
        by_kind[kind].append(n)

    if not open_items:
        lines.append("_Nothing unconfirmed._")
    for kind, group in by_kind.items():
        lines += ["## %s (%d)" % (kind, len(group)), "",
                  "| id | name | confidence | where | evidence |", "| --- | --- | --- | --- | --- |"]
        for n in group:
            lines.append("| `%s` | `%s` | %s | %s | %s |"
                         % (n.get("id", ""), n.get("name", ""), n.get("confidence", ""),
                            find_definition(repo, n.get("name", ""), kind) or "_not found_",
                            (n.get("evidence") or "").replace("|", "\\|")[:160] or "_none recorded_"))
        lines.append("")
    return lines, counts


def reverify_line(repo):
    """One sentence on the last INDEPENDENT re-verify, or why there is not one to show.

    Red in exactly the two cases that make the number untrustworthy: a failed run, and a run so old that
    everything since it has been graded only by the loop itself. Both are stated as facts with the count, so
    the block cannot be read as "green, therefore fine" by somebody who has not looked at what was checked.
    """
    path = os.path.join(repo, "cow", "reverify.json")
    try:
        with open(path, encoding="utf-8") as fh:
            rv = json.load(fh)
    except (OSError, ValueError):
        return ("**re-verify: never run** - every verdict in the numbers above was produced by the loop "
                "itself; run `python tools/cow/reverify.py`", False)
    checked, passed = rv.get("checked", 0), rv.get("passed", 0)
    failed = rv.get("failed") or []
    commit = (rv.get("commit") or "?")[:10]
    when = rv.get("when") or "?"
    if not checked:
        return ("**re-verify: FAILED - checked 0**, so the run verified nothing (see "
                "`tools/cow/reverify.py`)", True)
    # 48 h on the recorded UTC stamp, not on the file's mtime: a checkout resets mtime, which would make a
    # stale run look fresh the moment anybody clones or pulls.
    age_h = None
    try:
        then = datetime.strptime(when, "%Y-%m-%dT%H:%M:%SZ").replace(tzinfo=timezone.utc)
        age_h = (datetime.now(timezone.utc) - then).total_seconds() / 3600.0
    except (TypeError, ValueError):
        pass
    stale = age_h is None or age_h > 48.0
    bad = bool(failed) or passed != checked
    if bad:
        names = ", ".join("`%s`" % f.get("unit") for f in failed[:6])
        more = "" if len(failed) <= 6 else " (+%d more)" % (len(failed) - 6)
        return ("**re-verify: FAILED - %d of %d unit(s) the records call proven do not pass cowdiff**: "
                "%s%s - reported, not un-proved" % (len(failed), checked, names, more)), True
    age = "%.0f h" % age_h if age_h is not None else "unknown age"
    txt = "re-verified %d of %d at `%s`, %s (%s old)" % (passed, checked, commit, when, age)
    return ("**" + txt + " - STALE, older than 48 h; run `python tools/cow/reverify.py`**"
            if stale else txt), stale


def main():
    ap = argparse.ArgumentParser(description="render the cow progress block, STATUS.md and NAMES_TODO.md")
    ap.add_argument("--repo", default=repo_root())
    ap.add_argument("--ledger", default=None)
    ap.add_argument("--names", default=None)
    ap.add_argument("--loop-log", default=None)
    ap.add_argument("--describe", default=None, help="the commit being made (default: HEAD's subject)")
    ap.add_argument("--check", action="store_true", help="exit 1 if a generated file is out of date")
    ap.add_argument("--no-readme", action="store_true")
    args = ap.parse_args()

    repo = args.repo
    ledger_path = args.ledger or os.path.join(repo, "ledger", "functions.csv")
    rows = read_csv(ledger_path)
    if not rows:
        sys.exit("error: %s missing or empty - run python tools/cow/ledger.py first" % ledger_path)
    names = read_csv(args.names or os.path.join(repo, "cow", "names.csv"))
    events = parse_loop_log(args.loop_log or os.path.join(repo, "loop.log"))

    counts = {s: 0 for s in STATUSES}
    for r in rows:
        counts[r["status"]] = counts.get(r["status"], 0) + 1
    total = len(rows)
    # What "done" means. A <=8-byte entry is a compiler shape, not a function somebody wrote, and it lives
    # in src/tables/ as a row (layout/trivial.h says what the shapes are). Counting those as converted
    # claimed 948 functions when 5 had been read; so `done` is REAL functions only - the denominator
    # excludes thunks AND the tabled shapes, which get their own line, exactly like thunks do.
    TRIVIAL_MAX_BYTES = 8
    def is_tabled(r):
        # the table decides, not the size: mktable.py re-derived kind/value/pop from generated/all for
        # every row it accepted, so `file` under src/tables/ is the claim that the bytes are a shape.
        # Ledger `size` is the meta's guess at where an entry ends and is wrong often enough (a 27-site
        # loop reported as 8 bytes) that using it here would hide real units.
        return (r.get("file") or "").replace("\\", "/").startswith("src/tables/")
    def is_trivial_size(r):
        try:
            return int(r["size"]) <= TRIVIAL_MAX_BYTES
        except (TypeError, ValueError):
            return False
    # How many checks does the gate actually run? Counted out of gate.ps1 rather than hardcoded: the
    # number sat at "18 checks" in the README long after the check set changed, which is the kind of
    # stale figure that makes a status line untrustworthy.
    gate_checks = 0
    try:
        with open(os.path.join(repo, "tools", "cow", "gate.ps1"), encoding="utf-8",
                  errors="replace") as fh:
            gate_checks = len(set(re.findall(r"Add-GateResult\s+\$\w+\s+'([^']+)'", fh.read())))
    except OSError:
        gate_checks = 0
    gate_txt = ("%d named checks" % gate_checks) if gate_checks else "its named checks"

    done_rows_all = [r for r in rows if r["status"] == "done"]
    tabled_keys = {r["entry"].lower() for r in done_rows_all if is_tabled(r)}
    tabled = [r for r in done_rows_all if r["entry"].lower() in tabled_keys]
    real_done = [r for r in done_rows_all if r["entry"].lower() not in tabled_keys]
    # Entries the ledger calls <=8 bytes that have NO row yet: the same kind of compiler shape, just not
    # proven/classified. They are not conversion work either, so they leave the denominator - but they get
    # their own line below so the number cannot quietly swallow unfinished work if a `size` is wrong.
    trivial_pending = [r for r in rows
                       if r["status"] != "done" and r["status"] != "thunk"
                       and is_trivial_size(r) and r["entry"].lower() not in tabled_keys]
    pending_keys = {r["entry"].lower() for r in trivial_pending}
    real = total - counts["thunk"] - len(tabled) - len(trivial_pending)
    done = len(real_done)
    pct = (100.0 * done / real) if real else 0.0

    # the table's own proof, so the number that replaces "948 done" cannot outrun what was checked
    proof_path = os.path.join(repo, "cow", "table_proof.json")
    table_proven = 0
    try:
        with open(proof_path, encoding="utf-8") as fh:
            table_proven = sum(1 for v in json.load(fh).get("rows", {}).values() if v.get("pass"))
    except (OSError, ValueError):
        table_proven = 0

    buckets = ["0", "1", "2", "3+"]
    per = {b: {"done": 0, "total": 0} for b in buckets}
    cyc = {"done": 0, "total": 0}
    for r in rows:
        if r["status"] == "thunk" or r["entry"].lower() in tabled_keys \
                or r["entry"].lower() in pending_keys:
            continue
        key = r["leaf_rank"] if r["leaf_rank"] in ("0", "1", "2") else "3+"
        per[key]["total"] += 1
        if r["cycle"] == "true":
            cyc["total"] += 1
        if r["status"] == "done":
            per[key]["done"] += 1
            if r["cycle"] == "true":
                cyc["done"] += 1

    current_rank = next((b for b in buckets if per[b]["done"] < per[b]["total"]), None)
    in_progress = [r for r in rows if r["status"] == "in_progress"]
    failed = [r for r in rows if r["status"] == "failed"]
    completed = real_done

    # The 24 h window is anchored to the newest event in loop.log, not to the wall clock: a figure that
    # moves between "generate the docs" and "are the docs current?" makes status.py --check fail a unit
    # for nothing (the README line "last 24 h: N unit(s) done" differs by one event between the two runs
    # whenever a unit finishes in between - which, in a loop, is always).
    newest = max((e["when"] for e in events), default=None)
    since = (newest - timedelta(hours=24)) if newest else (datetime.now(timezone.utc) - timedelta(hours=24))
    last24 = [e for e in events if e["when"] >= since]
    done24 = [e for e in last24 if e["result"] == "done"]
    per_hour = ("%.2f" % (len(done24) / 24.0)) if done24 else "0.00"

    halt_path = os.path.join(repo, "docs", "cow", "LOOP_HALT.md")
    halt = ""
    if os.path.isfile(halt_path):
        with open(halt_path, encoding="utf-8", errors="replace") as fh:
            halt = " ".join(l.strip() for l in fh if l.strip() and not l.startswith("#"))[:220]

    stamp = datetime.now(timezone.utc).strftime("%Y-%m-%d %H:%M:%S UTC")
    head = git(repo, "rev-parse", "--short", "HEAD") or "unknown"
    head_subject = git(repo, "log", "-1", "--format=%s") or "unknown"
    branch = git(repo, "rev-parse", "--abbrev-ref", "HEAD") or "unknown"
    describe = args.describe or ("%s (HEAD; nothing staged to describe)" % head_subject)
    dirty = [l for l in git(repo, "status", "--porcelain").splitlines()
             if l.strip() and not l[3:].strip().strip('"') in OUR_OUTPUTS]

    unreached_dir = os.path.join(repo, "cow", "unreached")
    unreached = sorted(f[:-4] for f in os.listdir(unreached_dir)
                       if f.endswith(".txt")) if os.path.isdir(unreached_dir) else []

    # ---------------- README block ----------------
    unit = "none"
    if in_progress:
        r = in_progress[0]
        unit = "`%s` %s (%s)" % (r["entry"], r["name"] or "unnamed", (r.get("note") or "")[:60])
    elif events:
        unit = "last: `%s` %s" % (events[-1]["entry"], events[-1]["result"])
    rank_txt = ("rank %s, %d of %d done" % (current_rank, per[current_rank]["done"],
                                            per[current_rank]["total"])) if current_rank else "all ranks complete"
    src_loc, src_files = source_shape(repo)
    # ---- the machine lift, counted SEPARATELY from the line above.
    # Phase B counts lifted+proven functions as progress, and the only defensible way to do that is to print
    # the number with its definition attached. A lift is Ghidra's decompilation put into cow's shape by
    # tools/cow/ghidra/lift.py; its whole warrant is cowdiff against the generated original; it carries no
    # name, no owner citation and no Evidence block, and it is deliberately not human-readable. Folding it
    # into "converted to HUMAN-readable C" would be exactly the kind of number this README has a sentence
    # apologising for, so it gets its own line and its own denominator.
    lift_n = lift_pass = 0
    lift_dir = os.path.join(repo, "src", "lifted")
    on_disk = set()
    if os.path.isdir(lift_dir):
        on_disk = {f[4:-2] for f in os.listdir(lift_dir) if f.startswith("cow_") and f.endswith(".c")}
        lift_n = len(on_disk)
    # Bound before the try: the size-band table below reads it, and a missing proof file must yield "nothing
    # proven" rather than an UnboundLocalError deep in the status renderer.
    verdicts = {}
    try:
        with open(os.path.join(repo, "cow", "lift_proof_all.json"), encoding="utf-8") as fh:
            verdicts = json.load(fh)
        # Intersect with what is actually in src/lifted. The proof file is a cache that outlives entries a
        # later re-lift refused or pruned, and a PASS verdict for a unit that no longer exists is a pass
        # nobody can build, run or re-check - which is precisely how a progress number drifts away from the
        # tree without anything ever being wrong on purpose.
        lift_pass = sum(1 for e, v in verdicts.items() if v.get("pass") and e in on_disk)
    except (OSError, ValueError):
        pass                       # no proof file yet: report 0 proven, not a crash
    verified = sum(1 for r in completed if (r.get("verified") or "") == "true")
    ret_family = sum(1 for r in completed if (r.get("file") or "").endswith("_ret.c"))
    hand = done - ret_family
    oracle_cited = sum(1 for r in completed if (r.get("oracle_refs") or "").strip())
    # Who calls it? That is the no-stub rule: every row and every body has to name its owner.
    tabled_txt = ("**trivial (tabled): %d row(s)** in `src/tables/` - entries whose whole body is one or two "
                  "instructions (a bare `ret`, a getter, a constant). One shared runner, one row each, %d "
                  "proven by cowdiff in `cow/table_proof.json`. Not counted as converted, the way thunks "
                  "are not." % (len(tabled), table_proven))
    pending_txt = ("**trivial (awaiting a row): %d** more entries the meta calls <=8 bytes, still `todo`: same "
                   "kind of shape, not yet classified by `tools/cow/mktable.py`. Kept out of the %s so the "
                   "denominator is only functions with logic; listed here so they stay visible."
                   % (len(trivial_pending), "{:,}".format(real)))
    owned = lambda *needles: sum(1 for r in completed
                                 if any(n in (r.get("oracle_refs") or "") for n in needles))
    n_vf = owned('a virtual method')
    n_called = owned('called from')
    n_data = owned('data reference')
    unowned = done - n_vf - n_called - n_data
    last5 = completed[-5:][::-1]
    last5_txt = "; ".join("`%s` %s" % (r["entry"], r["name"] or "_unnamed_") for r in last5) or "_none yet_"
    R = [BEGIN, "> [!NOTE]",
         "> **Cow fork: conversion status** - %s of %s functions converted to HUMAN-readable C (%.1f%%)"
         % (done, "{:,}".format(real), pct),
         "> %s `%s%%`  %s" % (bar(pct / 100.0), "%.1f" % pct, rank_txt),
         "> proof per unit: `cowdiff` PASS (return registers, callee-saved, `esp`, memory writes, calls "
         "out, per-instruction coverage) **and** `gate.ps1`'s %s - verified %d of %d" % (gate_txt, verified, done),
         "> %s" % tabled_txt,
         "> %s" % pending_txt,
         "> our own C: **%s lines** in %d file(s) under `src/` + `layout/` - %d virtual method(s), "
         "%d called leaf(s), %d table entry(s), %d hand-written function(s); %d of %d cite an owner"
         % ("{:,}".format(src_loc), src_files, n_vf, n_called, n_data, hand, n_vf + n_called + n_data, done),
         "> machine lift (Phase B): **{lift:,} lifted · {proof:,} cowdiff-proven** ({pct:.1f}% of the lifted "
         "tree) - generated by `tools/cow/ghidra/lift.py` from Ghidra + the recompiler's own translation, "
         "proven only against the generated original, no names and no Evidence blocks, and **not** counted "
         "in the human-readable figure above".format(lift=lift_n, proof=lift_pass,
                                                     pct=100.0 * lift_pass / max(1, lift_n)),
         # The independent witness, next to the numbers it audits rather than buried in a doc: a progress
         # figure that only the loop ever graded is a claim, and this is the line that says whether anyone
         # else has checked it and how long ago.
         "> %s" % reverify_line(repo)[0],
         "> last 5 converted: %s" % last5_txt,
         "> done %d · in progress %d · failed %d · todo %d · thunks %d (not conversion work)"
         % (done, len(in_progress), counts["failed"], counts["todo"], counts["thunk"]),
         "> last 24 h: %d unit(s) done (%s/h) · unit: %s" % (len(done24), per_hour, unit),
         "> names: %d confirmed · %d guess · %d placeholder"
         % tuple((collections.Counter(n.get("confidence", "") for n in names).get(c, 0)
                  for c in CONFIDENCES)),
         "> updated %s · commit `%s` · %s" % (stamp, head, describe),
         "> [STATUS](docs/cow/STATUS.md) · [NAMES_TODO](docs/cow/NAMES_TODO.md) · "
         "[LOOP](docs/cow/LOOP.md) · [STYLE](docs/cow/STYLE.md) · [MACHINERY](docs/cow/MACHINERY.md) · "
         "[SETUP](docs/cow/SETUP_REPORT.md)"
         + (" · **HALTED: %s**" % halt if halt else ""),
         END]

    # ---------------- STATUS.md ----------------
    L = ["# Conversion status", "",
         "<!-- Generated by tools/cow/status.py - do not edit by hand. Rerun: python tools/cow/status.py -->",
         "",
         "- Last updated: %s" % stamp,
         "- Commit being made: %s" % describe,
         "- Repo: `%s` on `%s`, %d uncommitted change(s) excluding this file's own outputs"
         % (head, branch, len(dirty)),
         "- Inputs: ledger %d rows · names %d · loop.log %d event(s) · unreached %d unit(s)"
         % (total, len(names), len(events), len(unreached)),
         "- %s" % reverify_line(repo)[0],
         ""]
    if halt:
        L += ["> [!WARNING]", "> **HALTED** - %s" % halt, ""]
    L += ["## Progress", "",
          "`done %d of %d (%.1f%%) %s`" % (done, real, pct, bar(pct / 100.0)), "",
          "_Thunks (%d) are excluded from the denominator: 5-byte `jmp rel32` stubs, not work._"
          % counts["thunk"], "", "## Status counts", "", "```mermaid", "pie showData",
          "    title FFXiMain functions by conversion status"]
    for s in STATUSES:
        L.append('    "%s" : %d' % (s, counts.get(s, 0)))
    L += ["```", "", "## Progress by leaf_rank", "",
          "Conversion runs leaves first: rank 0 calls no other FFXiMain function.", "",
          "| leaf_rank | done | total | % |", "| --- | --- | --- | --- |"]
    for b in buckets:
        t, d = per[b]["total"], per[b]["done"]
        L.append("| %s | %d | %d | %s |" % (("* **%s**" % b) if b == current_rank else b, d, t,
                                            ("%.1f%%" % (100.0 * d / t)) if t else "-"))
    L.append("| cycle | %d | %d | %s |" % (cyc["done"], cyc["total"],
                                           ("%.1f%%" % (100.0 * cyc["done"] / cyc["total"]))
                                           if cyc["total"] else "-"))
    # ---------------- size bands ----------------
    # The queue has always sorted by size; this only says which band a unit is in, so "the next 20" can be
    # read as twenty stubs or four real functions. Band names come from next.py, the single definition, so
    # this table and the queue can never disagree about what `small` means.
    try:
        sys.path.insert(0, os.path.join(repo, "tools", "cow"))
        import next as _next_mod
        band_of, BAND_NAMES = _next_mod.band, [b for b, _ in _next_mod.BANDS]
    except Exception:                                          # noqa: BLE001
        band_of, BAND_NAMES = (lambda s: "unknown"), ["unknown"]
    lift_pass_keys = {e for e, v in verdicts.items()
                      if isinstance(v, dict) and v.get("pass") and e in on_disk}
    tabled_done_keys = {r["entry"].lower().replace("0x", "") for r in rows
                        if r["status"] == "done" and is_tabled(r)}
    bstat = collections.OrderedDict()
    for b in BAND_NAMES + ["unknown"]:
        bstat[b] = {"readable": 0, "liftpass": 0, "liftfail": 0, "notlifted": 0, "total": 0}
    for r in rows:
        if (r.get("status") or "") == "thunk":
            continue
        ent = (r.get("entry") or "").lower().replace("0x", "")
        if ent in tabled_done_keys:
            continue          # a compiler shape, not conversion work; it has its own section below
        b = band_of(r.get("size"))
        row_stat = bstat.setdefault(b, {"readable": 0, "liftpass": 0, "liftfail": 0,
                                        "notlifted": 0, "total": 0})
        row_stat["total"] += 1
        if r["status"] == "done":
            row_stat["readable"] += 1
        elif ent in lift_pass_keys:
            row_stat["liftpass"] += 1
        elif ent in on_disk:
            row_stat["liftfail"] += 1
        else:
            row_stat["notlifted"] += 1
    shown = [b for b in bstat if bstat[b]["total"]]
    L += ["", "## Progress by size band", "",
          "_Bands are byte size, defined once in `tools/cow/next.py` (`tiny<=32`, `small<=128`, "
          "`medium<=512`, `large<=2048`, `huge>2048`). They make the existing queue order visible and do not "
          "change it. Thunks and the tabled trivial shapes are excluded, exactly as they are from the "
          "progress figure above - a 3-byte `ret` is not conversion work whoever counts it._", "",
          "| band | readable done | lift proven | lifted, not proven | not lifted | total |",
          "| --- | ---: | ---: | ---: | ---: | ---: |"]
    for b in shown:
        d = bstat[b]
        L.append("| %s | %d | %d | %d | %d | %d |"
                 % (b, d["readable"], d["liftpass"], d["liftfail"], d["notlifted"], d["total"]))
    tot = {k: sum(bstat[b][k] for b in shown) for k in
           ("readable", "liftpass", "liftfail", "notlifted", "total")}
    L.append("| **all** | **%d** | **%d** | **%d** | **%d** | **%d** |"
             % (tot["readable"], tot["liftpass"], tot["liftfail"], tot["notlifted"], tot["total"]))

    L += ["", "_`cycle` is an overlay: a function in a call cycle also sits in one rank bucket._", "",
          "## Last completed", ""]
    if not completed:
        L.append("_None yet._")
    else:
        L += ["| entry | name | file | verified | oracle evidence |",
              "| --- | --- | --- | --- | --- |"]
        for r in completed[-20:][::-1]:
            L.append("| `%s` | %s | %s | %s | %s |"
                     % (r["entry"], r["name"] or "_unnamed_", r["file"] or "-", r["verified"],
                        (r.get("oracle_refs") or "-")[:110]))
        L += ["", "### The last five, as source", "",
              "Read them; they are the standard every unit is held to.", ""]
        for r in completed[-5:][::-1]:
            L.append("- `%s` -> [%s](../../%s)" % (r["entry"], r["name"] or "_unnamed_",
                                                   r["file"] or ""))
    L += ["", "## Trivial shapes (the table)", "", tabled_txt, "", pending_txt, ""]
    if tabled:
        kinds = collections.Counter((r.get("oracle_refs") or "").split(" ")[0] for r in tabled)
        L += ["| shape | rows |", "| --- | --- |"]
        for k, n in kinds.most_common():
            L.append("| `%s` | %d |" % (k, n))
        L += ["", "Rows are generated by `python tools/cow/mktable.py --write` out of `generated/all` and "
              "`ledger/functions.csv`; `--check 0x<hex>` re-derives one from the bytes, and "
              "`tools/cow/gate.ps1` requires it. The runner is `src/tables/cow_trivial.c`; the vocabulary "
              "is `layout/trivial.h`.", ""]

    L += ["", "## Failed units", ""]
    if not failed:
        L.append("_None._")
    else:
        L += ["| entry | name | reason |", "| --- | --- | --- |"]
        for r in failed:
            L.append("| `%s` | %s | %s |" % (r["entry"], r["name"] or "-",
                                             (r.get("note") or "_no reason recorded_")[:200]))
    L += ["", "## Units with unreached blocks", ""]
    if not unreached:
        L.append("_Every converted unit reached 100% of its generated basic blocks, or has no cowdiff yet._")
    else:
        L.append("Each list is in `cow/unreached/<hex>.txt` with the code-reading reason for the block; "
                 "they do not stop the loop.")
        for e in unreached:
            reason = ""
            with open(os.path.join(unreached_dir, e + ".txt"), encoding="utf-8", errors="replace") as fh:
                reason = fh.read().strip().replace("\n", " ")[:200]
            L.append("- `%s` - %s" % (e, reason or "_no reason recorded_"))
    name_counts = collections.Counter(n.get("confidence", "") for n in names)
    L += ["", "## Names by confidence", "",
          "| confidence | count |", "| --- | --- |"]
    for c in CONFIDENCES + [""]:
        if name_counts.get(c, 0):
            L.append("| %s | %d |" % (c or "_blank_", name_counts[c]))
    L += ["", "_The fix-up list is [docs/cow/NAMES_TODO.md](NAMES_TODO.md)._", ""]

    names_lines, _ = names_section(repo, names)

    targets = [(os.path.join(repo, "docs", "cow", "STATUS.md"), "\n".join(L)),
               (os.path.join(repo, "docs", "cow", "NAMES_TODO.md"), "\n".join(names_lines))]
    readme_path = os.path.join(repo, "README.md")
    if not args.no_readme and os.path.isfile(readme_path):
        with open(readme_path, encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        if BEGIN in text and END in text:
            pre, rest = text.split(BEGIN, 1)
            _, post = rest.split(END, 1)
            targets.append((readme_path, pre + "\n".join(R) + post))
        else:
            print("warning: README.md has no %s / %s markers - progress block not written" % (BEGIN, END))

    stale = []
    for path, text in targets:
        current = open(path, encoding="utf-8").read() if os.path.isfile(path) else None
        if stable(current) != stable(text):
            stale.append(os.path.relpath(path, repo).replace("\\", "/"))
        if not args.check:
            os.makedirs(os.path.dirname(path), exist_ok=True)
            with open(path, "w", newline="\n", encoding="utf-8") as fh:
                fh.write(text)
            print("wrote %s" % os.path.relpath(path, repo).replace("\\", "/"))
    if args.check:
        print("STATUS %s" % ("STALE: " + ", ".join(stale) if stale else "OK (all outputs current)"))
        return 1 if stale else 0
    print("done %d of %d (%.1f%%) | ranks 0/1/2/3+ = %d/%d/%d/%d | current %s | names c/g/p %d/%d/%d | 24h %d"
          % (done, real, pct, per["0"]["total"], per["1"]["total"], per["2"]["total"], per["3+"]["total"],
             current_rank or "-", name_counts.get("confirmed", 0), name_counts.get("guess", 0),
             name_counts.get("placeholder", 0), len(done24)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
