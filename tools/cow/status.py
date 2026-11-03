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


def find_definition(repo, name, kind):
    """Where an identifier is *written down*, as path:line. A fix-up list that points at a use site is
    worse than no list, so layout/ is searched first for layout kinds and src/ first for code kinds."""
    if not name:
        return ""
    layout_first = kind in ("struct", "field", "enum", "global", "table", "typedef", "call")
    roots = ["layout", "src", "runtime/cow"] if layout_first else ["src", "layout", "runtime/cow"]
    pattern = re.compile(r"\b%s\b" % re.escape(name))
    for top in roots:
        base = os.path.join(repo, top)
        if not os.path.isdir(base):
            continue
        for dirpath, dirs, files in os.walk(base):
            dirs.sort()
            for f in sorted(files):
                if not f.endswith((".c", ".h")):
                    continue
                p = os.path.join(dirpath, f)
                try:
                    with open(p, encoding="utf-8", errors="replace") as fh:
                        for n, line in enumerate(fh, 1):
                            if pattern.search(line):
                                return "%s:%d" % (os.path.relpath(p, repo).replace("\\", "/"), n)
                except OSError:
                    continue
    return ""


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
    for n in open_items:                                  # any kind we did not anticipate
        if n.get("kind") not in by_kind:
            by_kind.setdefault(n.get("kind") or "(no kind)", []).append(n)

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
    real = total - counts["thunk"]
    done = counts["done"]
    pct = (100.0 * done / real) if real else 0.0

    buckets = ["0", "1", "2", "3+"]
    per = {b: {"done": 0, "total": 0} for b in buckets}
    cyc = {"done": 0, "total": 0}
    for r in rows:
        if r["status"] == "thunk":
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
    completed = [r for r in rows if r["status"] == "done"]

    since = datetime.now(timezone.utc) - timedelta(hours=24)
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
    verified = sum(1 for r in completed if (r.get("verified") or "") == "true")
    ret_family = sum(1 for r in completed if (r.get("file") or "").endswith("_ret.c"))
    hand = done - ret_family
    oracle_cited = sum(1 for r in completed if (r.get("oracle_refs") or "").strip())
    # Who calls it? That is the no-stub rule: every trivial body has to name its owner in the ledger.
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
         "out, per-instruction coverage) **and** `gate.ps1` 18 checks - verified %d of %d" % (verified, done),
         "> our own C: **%s lines** in %d file(s) under `src/` + `layout/` - %d virtual method(s), "
         "%d called leaf(s), %d table entry(s), %d hand-written function(s); %d of %d cite an owner"
         % ("{:,}".format(src_loc), src_files, n_vf, n_called, n_data, hand, n_vf + n_called + n_data, done),
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
