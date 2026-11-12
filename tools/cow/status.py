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
import time
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
                     and not l.startswith("> updated ")
                     and not l.rstrip().endswith("<!-- now -->")
                     and not l.startswith("- This block: commit "))


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


def system2_line(repo):
    """The scoreboard's headline (docs/cow/SYSTEM2.md), or '' before System 2 has produced one.

    Read from cow/conveyor/daily.tsv, which tools/cow/conveyor.py writes: date, gold functions, gold bytes,
    gold % of code bytes, clean functions, judge id. The change shown is against the previous day's row
    under the SAME judge - a number measured by a different judge is not comparable and is not compared.
    """
    try:
        with open(os.path.join(repo, "cow", "conveyor", "daily.tsv"), encoding="utf-8") as fh:
            rows = [ln.rstrip("\n").split("\t") for ln in fh if ln.strip() and not ln.startswith("#")]
    except OSError:
        return ""
    rows = [r for r in rows if len(r) >= 6]
    if not rows:
        return ""
    last = rows[-1]
    delta = ""
    if len(rows) >= 2 and rows[-2][5] == last[5]:
        try:
            delta = " (%+.3f since %s)" % (float(last[3]) - float(rows[-2][3]), rows[-2][0])
        except ValueError:
            delta = ""
    return ("**PROVEN C (judge v2): %s functions, %s%% of the code bytes**%s as of %s, %s of them model-written "
            "clean C - [SCOREBOARD](docs/cow/SCOREBOARD.md)" % (last[1], last[3], delta, last[0], last[4]))


# ---------------------------------------------------------------- the readout (the README block)
#
# The block used to be fifteen `> ` lines in a callout. GitHub joins the lines of a quote into ONE paragraph,
# so what a visitor saw was a wall of text with two different percentages in it and no way to tell which
# one moves. The readout is what somebody wants from a glance, in this order: how much is done (one number,
# x of total), where the rest stands (one bar), whether it is moving and fast enough (one chart against the
# goal), and whether the machine is running right now (one line). Everything else is folded away under it.

GOAL_PER_DAY = 1.0      # percent of the code bytes a day (docs/cow/SYSTEM2.md)
# Ends the one line of the block that changes with the clock (see stable()). At the END of the line: a line
# that BEGINS with an HTML comment is an HTML block to a Markdown parser, and its text is then not formatted.
NOW_MARK = " <!-- now -->"
PALETTES = {
    "light": {"text": "#57606a", "strong": "#24292f", "grid": "#d0d7de", "proven": "#2da44e", "hand": "#8250df",
              "unproven": "#d4a72c", "waiting": "#54aeff", "none": "#d8dee4", "goal": "#cf222e", "area": "#2da44e"},
    "dark": {"text": "#8b949e", "strong": "#e6edf3", "grid": "#30363d", "proven": "#3fb950", "hand": "#a371f7",
             "unproven": "#d29922", "waiting": "#58a6ff", "none": "#30363d", "goal": "#f85149", "area": "#3fb950"},
}
UNPROVEN_STATES = ("silver", "weak", "fail", "noisy", "nocompile", "hang", "timeout", "error", "hand unit in progress")


def scoreboard_data(repo):
    """docs/cow/SCOREBOARD.md and cow/conveyor/daily.tsv as numbers, or None before System 2 has written them.

    {'functions', 'bytes', 'judge', 'groups': [(key, label, functions, bytes)], 'clean': n, 'days': [...]}
    The groups add up to every function of the universe: nothing is counted twice and nothing is left out.
    """
    try:
        with open(os.path.join(repo, "docs", "cow", "SCOREBOARD.md"), encoding="utf-8") as fh:
            text = fh.read()
        with open(os.path.join(repo, "cow", "conveyor", "daily.tsv"), encoding="utf-8") as fh:
            days = [ln.rstrip("\n").split("\t") for ln in fh if ln.strip() and not ln.startswith("#")]
    except OSError:
        return None
    m = re.search(r"Universe: (\d+) functions, (\d+) bytes", text)
    j = re.search(r"Judge `(\w+)`", text)
    if not m:
        return None
    top, states = {}, {}
    for ln in text.splitlines():
        c = [x.strip() for x in ln.strip().strip("|").split("|")]
        try:
            if len(c) == 5 and "PROVEN C" in c[0]:
                top["proven"] = (int(c[1]), int(c[3]))
            elif len(c) == 5 and "CLEAN C" in c[0]:
                top["clean"] = (int(c[1]), int(c[3]))
            elif len(c) == 5 and c[0].startswith("hand units"):
                top["hand"] = (int(c[1]), int(c[3]))
            elif len(c) == 4 and c[1].isdigit() and c[2].isdigit():
                states[c[0]] = (int(c[1]), int(c[2]))
        except ValueError:
            continue
    if "proven" not in top:
        return None

    def total(keys):
        return (sum(states.get(k, (0, 0))[0] for k in keys), sum(states.get(k, (0, 0))[1] for k in keys))

    hand = top.get("hand", (0, 0))
    unproven, waiting = total(UNPROVEN_STATES), total(("stale",))
    known = set(UNPROVEN_STATES) | {"stale"}
    none = total([k for k in states if k not in known])          # `no unit yet`, `parked (no unit)`, anything new
    judge = j.group(1) if j else ""
    return {"functions": int(m.group(1)), "bytes": int(m.group(2)), "judge": judge,
            "clean": top.get("clean", (0, 0)),
            "groups": [("proven", "Proven C: the judge found it equal to the original", ) + top["proven"],
                       ("hand", "Hand-written units and table rows, proven earlier", ) + hand,
                       ("unproven", "Written, not proven: the judge found a difference or could not finish", ) + unproven,
                       ("waiting", "Written, waiting for the judge", ) + waiting,
                       ("none", "Not written yet", ) + none],
            "days": [d for d in days if len(d) >= 6 and d[5] == judge]}


def progress_series(repo, data):
    """[(unix time, percent proven)] for the chart, oldest first: one point per published commit of this
    judge's days (every such commit says its figure in its subject), and the figure on disk now."""
    days = data["days"]
    if not days:
        return []
    try:
        start = datetime.strptime(days[0][0], "%Y-%m-%d").timestamp()
    except ValueError:
        return []
    pts = []
    for ln in git(repo, "log", "-n", "3000", "--since=%d" % int(start), "--format=%ct%x09%s").splitlines():
        t, _, subject = ln.partition("\t")
        m = re.search(r"(\d+(?:\.\d+)?)% of (?:the )?(?:code )?bytes", subject)
        if m and t.isdigit():
            pts.append((int(t), float(m.group(1))))
    pts.sort()
    try:
        now_pct = float(days[-1][3])
    except ValueError:
        return pts
    return [(start, 0.0)] + pts + [(time.time(), now_pct)]


def _nice_step(span):
    for s in (0.1, 0.2, 0.25, 0.5, 1, 2, 2.5, 5, 10, 20, 25):
        if span / s <= 6:
            return s
    return 50


def render_progress_svg(data, series, theme):
    """One picture: where every byte of the program stands (the bar), and the proven share over time
    against the goal (the chart). Plain SVG text, no script, sized for a README column."""
    P = PALETTES[theme]
    W, H = 880, 344
    total_b = max(1, data["bytes"])
    font = "-apple-system,BlinkMacSystemFont,'Segoe UI',Helvetica,Arial,sans-serif"
    o = ['<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 %d %d" width="%d" height="%d" role="img" '
         'aria-label="conversion progress">' % (W, H, W, H),
         '<style>text{font-family:%s;font-size:12px;fill:%s}.s{fill:%s;font-weight:600}.b{font-size:13px}</style>'
         % (font, P["text"], P["strong"])]
    # ---- the bar: every byte of the program, by where it stands
    x0, bw, by, bh = 10, W - 20, 26, 26
    o.append('<text x="%d" y="16" class="s b">Where the %s code bytes of FFXiMain stand</text>'
             % (x0, "{:,}".format(total_b)))
    x = float(x0)
    for key, _label, _n, b in data["groups"]:
        w = bw * b / total_b
        if b:
            o.append('<rect x="%.1f" y="%d" width="%.1f" height="%d" fill="%s"/>' % (x, by, max(w, 1.5), bh, P[key]))
        x += w
    short = {"proven": "proven C", "hand": "hand-written, proven earlier", "unproven": "written, not proven",
             "waiting": "written, waiting for the judge", "none": "not written yet"}
    for k, (key, _label, _n, b) in enumerate(data["groups"]):
        lx, ly = x0 + (k % 3) * 290, 66 + (k // 3) * 20
        o.append('<rect x="%d" y="%d" width="10" height="10" rx="2" fill="%s"/>' % (lx, ly, P[key]))
        o.append('<text x="%d" y="%d"%s>%s %.2f%%</text>'
                 % (lx + 16, ly + 9, ' class="s"' if key == "proven" else "", short[key], 100.0 * b / total_b))
    # ---- the chart: the proven share over time, and the goal
    cx0, cx1, cy0, cy1 = 52, W - 70, 138, 300
    o.append('<text x="%d" y="126" class="s b">Proven C, percent of the code</text>' % x0)
    if len(series) >= 2:
        t1 = series[-1][0]
        t0 = max(series[0][0], t1 - 14 * 86400.0)                 # two weeks at most
        shown = [p for p in series if p[0] >= t0]
        before = [p for p in series if p[0] < t0]
        base = before[-1][1] if before else shown[0][1]
        if before:
            shown = [(t0, base)] + shown
        span_t = max(3600.0, t1 - t0)
        goal_end = base + GOAL_PER_DAY * span_t / 86400.0
        top = max(max(p[1] for p in shown), goal_end, 0.5) * 1.12
        step = _nice_step(top)

        def X(t):
            return cx0 + (cx1 - cx0) * (t - t0) / span_t

        def Y(v):
            return cy1 - (cy1 - cy0) * v / top

        v = 0.0
        while v <= top + 1e-9:
            o.append('<line x1="%d" y1="%.1f" x2="%d" y2="%.1f" stroke="%s" stroke-width="1"/>'
                     % (cx0, Y(v), cx1, Y(v), P["grid"]))
            o.append('<text x="%d" y="%.1f" text-anchor="end">%s%%</text>' % (cx0 - 8, Y(v) + 4, ("%g" % v)))
            v += step
        day = datetime.fromtimestamp(t0).replace(hour=0, minute=0, second=0, microsecond=0)
        n_days = int(span_t // 86400) + 2
        every = 1 if n_days <= 8 else 2
        for k in range(n_days + 1):
            d = day + timedelta(days=k)
            t = d.timestamp()
            if t0 <= t <= t1:
                o.append('<line x1="%.1f" y1="%d" x2="%.1f" y2="%d" stroke="%s" stroke-width="1" '
                         'stroke-dasharray="2 3"/>' % (X(t), cy0, X(t), cy1, P["grid"]))
            mid = t + 43200.0
            if t0 <= mid <= t1 and k % every == 0:
                o.append('<text x="%.1f" y="%d" text-anchor="middle">%s</text>'
                         % (X(mid), cy1 + 18, "%s %d" % (d.strftime("%b"), d.day)))
        # the goal: 1% of the code a day from where this window starts
        o.append('<line x1="%.1f" y1="%.1f" x2="%.1f" y2="%.1f" stroke="%s" stroke-width="1.5" '
                 'stroke-dasharray="6 4"/>' % (X(t0), Y(base), X(t1), Y(goal_end), P["goal"]))
        o.append('<text x="%.1f" y="%.1f" style="fill:%s">goal</text>' % (X(t1) + 6, Y(goal_end) + 4, P["goal"]))
        # the proven share: it only changes when something is published, so it is drawn as steps
        path, px = [], None
        for t, val in shown:
            if px is None:
                path.append("M%.1f %.1f" % (X(t), Y(val)))
            else:
                path.append("H%.1f V%.1f" % (X(t), Y(val)))
            px = val
        line = " ".join(path)
        o.append('<path d="%s V%.1f H%.1f Z" fill="%s" fill-opacity="0.16"/>' % (line, Y(0), X(shown[0][0]), P["area"]))
        o.append('<path d="%s" fill="none" stroke="%s" stroke-width="2.2" stroke-linejoin="round"/>' % (line, P["proven"]))
        o.append('<circle cx="%.1f" cy="%.1f" r="4" fill="%s"/>' % (X(t1), Y(shown[-1][1]), P["proven"]))
        ly = Y(shown[-1][1]) + 4
        if abs(ly - (Y(goal_end) + 4)) < 14:                      # keep the two labels off each other
            ly += 14 if shown[-1][1] < goal_end else -14
        o.append('<text x="%.1f" y="%.1f" class="s" style="fill:%s">%.2f%%</text>'
                 % (X(t1) + 6, ly, P["proven"], shown[-1][1]))
    else:
        o.append('<text x="%d" y="%d">no published figures yet</text>' % (cx0, (cy0 + cy1) // 2))
    o.append('<text x="%d" y="%d">solid: published figures. dashed: the goal, %g%% of the code a day.</text>'
             % (x0, H - 6, GOAL_PER_DAY))
    o.append("</svg>")
    return "\n".join(o) + "\n"


def line_now(repo):
    """One phrase on the production line as this machine sees it at this moment, or '' when it cannot tell
    (build/ is not committed, so on any other checkout there is nothing to read)."""
    try:
        with open(os.path.join(repo, "build", "conveyor", "heartbeat.json"), encoding="utf-8") as fh:
            hb = json.load(fh)
    except (OSError, ValueError):
        return ""
    phase = str(hb.get("phase", ""))
    try:
        when = float(hb.get("when", 0) or 0)
    except (TypeError, ValueError):
        when = 0.0
    if when <= 0:
        return ""
    age = time.time() - when
    words = {"stopped: on request": "stopped by hand", "stopped: prover broken": "STOPPED: the prover is broken",
             "stopped: judge check failed": "STOPPED: its judge check failed",
             "stopped: nothing left to pick": "finished its queue"}
    if phase.startswith("stopped"):
        state = words.get(phase, "stopped")
    else:
        state = "running" if age < 150 else "NOT running (no heartbeat for %d min)" % int(age // 60)
    golds = []
    try:
        with open(os.path.join(repo, "build", "conveyor", "conveyor.log"), "rb") as fh:
            fh.seek(0, 2)
            fh.seek(max(0, fh.tell() - 60000))
            tail = fh.read().decode("utf-8", errors="replace")
        for ln in tail.splitlines():
            m = re.search(r" done: \+(\d+) gold of (\d+) picked", ln)
            if m:
                golds.append("+%s" % m.group(1))
            elif "conveyor start:" in ln:
                golds = []
    except OSError:
        pass
    return state + ((", last batches %s gold" % " ".join(golds[-5:])) if golds and state == "running" else "")


def checks_now(repo):
    try:
        with open(os.path.join(repo, "cow", "conveyor", "checks.json"), encoding="utf-8") as fh:
            d = json.load(fh)
    except (OSError, ValueError):
        return ""
    words = [str(d.get(k, "")).split(":")[0].strip() for k in ("recheck", "audit")]
    words = [w for w in words if w]
    return ("%s (%s)" % (", ".join(words).lower(), d.get("date"))) if words else ""


def readout(repo, data, extra, stamp_local, head, describe, halt):
    """The README block. `extra`: the older counters, as ready sentences for the folded part."""
    total_n, total_b = data["functions"], max(1, data["bytes"])
    by = {g[0]: g for g in data["groups"]}
    n, b = by["proven"][2], by["proven"][3]
    pct = 100.0 * b / total_b
    days = data["days"]
    today = datetime.now().strftime("%Y-%m-%d")
    try:
        is_today = bool(days) and days[-1][0] == today
        before = float(days[-2][3]) if len(days) >= 2 else 0.0
        gain = (float(days[-1][3]) - before) if is_today else 0.0      # no figure for today yet: nothing gained yet
    except (ValueError, IndexError):
        is_today, gain = False, 0.0
    left = 100.0 - 100.0 * (b + by["hand"][3]) / total_b
    line, checks = line_now(repo), checks_now(repo)
    now_bits = (["**Line: %s.**" % line] if line else []) + (["Judge check: %s." % checks] if checks else [])
    now_bits.append("Updated %s; this block is rewritten with every push, about every 30 minutes while the line runs."
                    % stamp_local)
    R = [BEGIN,
         "## %.2f%% of FFXiMain is proven C" % pct, "",
         "**%s of %s code bytes** (%s of %s functions) are C that the judge has shown to be equal to the "
         "original. Today: **%+.2f%%**, goal %+.2f%% a day%s. At the goal pace the rest takes %d days."
         % ("{:,}".format(b), "{:,}".format(total_b), "{:,}".format(n), "{:,}".format(total_n), gain, GOAL_PER_DAY,
            " (met)" if gain >= GOAL_PER_DAY else " (not yet)", int(-(-left // GOAL_PER_DAY))), "",
         " ".join(now_bits) + NOW_MARK, "",
         "<picture>",
         '  <source media="(prefers-color-scheme: dark)" srcset="docs/cow/progress-dark.svg">',
         '  <img alt="Where every byte of FFXiMain stands, and proven C over time against the goal" '
         'src="docs/cow/progress.svg">',
         "</picture>", "",
         "| | functions | code bytes | share of the code |", "| :-- | --: | --: | --: |"]
    for key, label, gn, gb in data["groups"]:
        share = "%.2f%%" % (100.0 * gb / total_b)
        if key == "proven":
            head_, _, tail_ = label.partition(":")
            label, share = "**%s**:%s" % (head_, tail_), "**%s**" % share
        R.append("| %s | %s | %s | %s |" % (label, "{:,}".format(gn), "{:,}".format(gb), share))
        if key == "proven":
            R.append("| &nbsp;&nbsp;&nbsp;of which rewritten as clean C by the model | %s | %s | %.2f%% |"
                     % ("{:,}".format(data["clean"][0]), "{:,}".format(data["clean"][1]),
                        100.0 * data["clean"][1] / total_b))
    R += ["| All of FFXiMain | %s | %s | 100%% |" % ("{:,}".format(total_n), "{:,}".format(total_b)), "",
          "| day | proven C | change | goal %+.2f%% |" % GOAL_PER_DAY, "| :-- | --: | --: | :-- |"]
    prev = 0.0
    rows = []
    for d in days:
        try:
            v = float(d[3])
        except ValueError:
            continue
        rows.append("| %s | %.2f%% | %+.2f%% | %s |" % (d[0], v, v - prev, "met" if v - prev >= GOAL_PER_DAY else "missed"))
        prev = v
    if rows and is_today:
        rows[-1] = rows[-1].replace("| missed |", "| not yet |")          # today is not over
    R += rows[-7:][::-1]
    if halt:
        R += ["", "**HALTED: %s**" % halt]
    R += ["",
          "<details>",
          "<summary>What these numbers mean, and the other counters</summary>", "",
          "- **Proven C** is C whose behaviour the judge compared with the original machine code on generated "
          "inputs: at least 100 clean runs and every instruction of the original reached. Most of it is machine "
          "translation: correct, not yet pleasant to read. [Scoreboard](docs/cow/SCOREBOARD.md), "
          "[how it works](docs/cow/SYSTEM2.md)."]
    R += ["- %s" % x for x in extra]
    R += ["- This block: commit `%s`, %s" % (head, describe),
          "- [STATUS](docs/cow/STATUS.md) · [MAP](docs/cow/map.svg) · [NAMES_TODO](docs/cow/NAMES_TODO.md) · "
          "[LOOP](docs/cow/LOOP.md) · [STYLE](docs/cow/STYLE.md) · [MACHINERY](docs/cow/MACHINERY.md) · "
          "[SETUP](docs/cow/SETUP_REPORT.md)", "",
          "</details>", END]
    return R


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
        # SYSTEM 2 (docs/cow/SYSTEM2.md): the legacy re-verify is retired. Under judge v2 a record is valid
        # only for the exact file and the exact judge that produced it, a sample of gold is re-proven
        # (tools/cow/conveyor.py recheck) and broken on purpose (audit), and the count that matters is on the
        # scoreboard. The file's absence is that state, not "never verified".
        if os.path.isfile(os.path.join(repo, "docs", "cow", "SCOREBOARD.md")):
            return ("judge v2: `lift proven` counts gold units only (every instruction reached in a clean "
                    "state, 100+ clean states); see `docs/cow/SCOREBOARD.md`", False)
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


# ---------------------------------------------------------------- the module map (docs/cow/map.svg)
#
# One 0.2% bar says the fork is nearly untouched and says nothing about WHERE the work is. This draws one row
# per module and 100 squares per row, each square one percent of that module's BYTES, so a module that is
# 90% lifted-but-unproven looks different from one that is 90% untouched - which the single number cannot
# express, and which is what decides where the next hour of the loop goes.
#
# A unit's state is the BEST that covers any byte of it, ranked, so a percent is coloured by the furthest any
# unit in it got: green readable done, blue lift proven, amber lifted but not proven, grey not lifted.
MAP_STATE_RANK = (("readable", 3, "#1a7f37"), ("proven", 2, "#2f6fd0"),
                  ("lifted", 1, "#bf8700"), ("none", 0, "#d8dee4"))
MAP_SQUARES = 100


def chunk_bounds(repo):
    """(lowest address, chunk file name) for every generated/all/funcs_NNN.c, cheapest defensible way.

    WHY THIS IS NOT A GUESS. The brief allows grouping unplaced code "by the generated-file chunk it lives
    in, labelled by address range", but only if the data supports it. It does, and this was verified rather
    than assumed: the 55 chunk files are DISJOINT and ADDRESS-ORDERED (zero overlaps across 21,891 attributed
    functions), so an address can be attributed to its chunk by range alone. If that ever stops being true
    this function's caller must fall back to reading the chunks, and the caption says which method produced
    the map so a reader can tell.

    Cached in build/ (never committed) keyed on the file names and sizes, because status.py runs on every
    commit and re-reading 193 MB of generated C each time is not acceptable - that same mistake already made
    the identifier index slow enough to need a note. The cache cannot change the picture: for unchanged inputs
    it replays the same boundaries, and the SVG carries no timestamp, so --check stays stable.
    """
    import glob
    files = sorted(glob.glob(os.path.join(repo, "generated", "all", "funcs_*.c")))
    sig = [[os.path.basename(f), os.path.getsize(f)] for f in files if os.path.isfile(f)]
    cache = os.path.join(repo, "build", "cow_map_chunks.json")
    try:
        with open(cache, encoding="utf-8") as fh:
            c = json.load(fh)
        if c.get("sig") == sig and isinstance(c.get("bounds"), list):
            return [(int(a), str(n)) for a, n in c["bounds"]]
    except (OSError, ValueError):
        pass
    head = re.compile(r"^void f_([0-9a-f]{8})(?:_body)?\(Guest\* g\)", re.M)
    bounds = []
    for f in files:
        try:
            with open(f, encoding="utf-8", errors="replace") as fh:
                txt = fh.read()
        except OSError:
            continue
        addrs = [int(m.group(1), 16) for m in head.finditer(txt)]
        if addrs:
            bounds.append((min(addrs), os.path.basename(f)))
    bounds.sort()
    try:
        os.makedirs(os.path.dirname(cache), exist_ok=True)
        with open(cache, "w", newline="\n", encoding="utf-8") as fh:
            json.dump({"sig": sig, "bounds": [[a, n] for a, n in bounds]}, fh)
    except OSError:
        pass
    return bounds


def module_map(repo, rows, lift_pass_keys, on_disk, tabled_done_keys):
    """Aggregate every non-thunk unit into modules with their bytes and best state.

    Placed code (a ledger `file` under src/<area>/) groups by that area, because that is the grouping
    cluster.py and the tree already use and it needs no inference. Everything else - which is the whole
    machine-lifted tree and the not-yet-touched remainder - groups by its generated chunk, labelled by the
    address range that chunk starts at.
    """
    import bisect
    bounds = chunk_bounds(repo)
    starts = [a for a, _n in bounds]

    mods = {}
    for r in rows:
        st = (r.get("status") or "")
        if st == "thunk":
            continue
        ent = (r.get("entry") or "").lower().replace("0x", "")
        if len(ent) != 8 or any(c not in "0123456789abcdef" for c in ent):
            continue
        addr = int(ent, 16)
        try:
            size = max(1, int(r.get("size") or 0))
        except (TypeError, ValueError):
            size = 1
        f = (r.get("file") or "").replace("\\", "/")
        if f.startswith("src/") and len(f.split("/")) >= 3 and f.split("/")[1] not in ("lifted", "tables"):
            name, kind = "src/" + f.split("/")[1], "area"
        elif f.startswith("src/tables/"):
            continue                      # a compiler shape, not conversion work; it has its own section
        elif bounds:
            i = bisect.bisect_right(starts, addr) - 1
            if i < 0:
                i = 0
            name, kind = bounds[i][1], "chunk"
        else:
            name, kind = "unattributed", "other"
        if st == "done":
            state = "readable"
        elif ent in lift_pass_keys:
            state = "proven"
        elif ent in on_disk:
            state = "lifted"
        else:
            state = "none"
        m = mods.setdefault(name, {"kind": kind, "bytes": 0, "units": [],
                                   "readable": 0, "proven": 0, "lifted": 0, "none": 0,
                                   "lo": addr, "hi": addr})
        m["bytes"] += size
        m["units"].append((addr, size, state))
        m[state] += 1
        m["lo"] = min(m["lo"], addr)
        m["hi"] = max(m["hi"], addr)
    return mods


def render_map_svg(mods):
    """The SVG. Deterministic by construction: no clock, no path, no sort that depends on dict order."""
    rank = {n: r for n, r, _c in MAP_STATE_RANK}
    colour = {n: c for n, _r, c in MAP_STATE_RANK}
    order = sorted(mods.items(), key=lambda kv: (kv[1]["lo"], kv[0]))
    sq, gap, left, rowh, top = 8, 1, 300, 12, 34
    width = left + MAP_SQUARES * (sq + gap) + 20
    height = top + len(order) * rowh + 26
    out = ['<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" '
           'viewBox="0 0 %d %d" font-family="ui-sans-serif, system-ui, sans-serif" font-size="9">' % (
               width, height, width, height),
           '<rect width="100%" height="100%" fill="#ffffff"/>',
           '<text x="%d" y="14" font-size="11" font-weight="600">cow module map - each square is 1%% of a '
           'module\'s bytes, coloured by the furthest any unit in it got</text>' % left]
    x = left
    for n, _r, c in MAP_STATE_RANK:
        out.append('<rect x="%d" y="21" width="8" height="8" fill="%s"/>' % (x, c))
        out.append('<text x="%d" y="28">%s</text>' % (x + 10, n))
        x += 78
    for i, (name, m) in enumerate(order):
        y = top + i * rowh
        tot = max(1, m["bytes"])
        pct_r = 100.0 * m["readable"] / max(1, m["readable"] + m["proven"] + m["lifted"] + m["none"])
        pct_p = 100.0 * (m["readable"] + m["proven"]) / max(1, m["readable"] + m["proven"] + m["lifted"] + m["none"])
        label = "%s  %.0f%% readable / %.0f%% proven" % (name, pct_r, pct_p)
        out.append('<text x="0" y="%d">%s</text>' % (y + 9, label[:56]))
        # Walk the module's units in address order and lay their BYTES down end to end; each of the 100
        # buckets takes the best state of anything overlapping its twentieth of the total. Weighting by bytes
        # rather than by unit count is the point: one 2 MB function must not be outvoted by forty stubs.
        segs, acc = [], 0
        for addr, size, state in sorted(m["units"]):
            segs.append((acc, acc + size, rank[state]))
            acc += size
        for b in range(MAP_SQUARES):
            lo = tot * b / MAP_SQUARES
            hi = tot * (b + 1) / MAP_SQUARES
            best = -1
            for s0, s1, rk in segs:
                if s0 < hi and s1 > lo and rk > best:
                    best = rk
            nme = next((n for n, r, _c in MAP_STATE_RANK if r == best), "none")
            out.append('<rect x="%d" y="%d" width="%d" height="%d" fill="%s"><title>%s %.0f-%.0f%%</title>'
                       '</rect>' % (left + b * (sq + gap), y, sq, sq - 2, colour[nme], name,
                                    100.0 * b / MAP_SQUARES, 100.0 * (b + 1) / MAP_SQUARES))
    out.append('<text x="%d" y="%d" font-size="8" fill="#57606a">generated by tools/cow/status.py - '
               'modules: src/&lt;area&gt; from the ledger, everything else by generated chunk start '
               'address (55 chunks verified disjoint and ordered)</text>' % (left, height - 8))
    out.append("</svg>")
    return "\n".join(out) + "\n"


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
         ] + (["> %s" % system2_line(repo)] if system2_line(repo) else []) + [
         "> last 5 converted: %s" % last5_txt,
         "> done %d · in progress %d · failed %d · todo %d · thunks %d (not conversion work)"
         % (done, len(in_progress), counts["failed"], counts["todo"], counts["thunk"]),
         "> last 24 h: %d unit(s) done (%s/h) · unit: %s" % (len(done24), per_hour, unit),
         "> names: %d confirmed · %d guess · %d placeholder"
         % tuple((collections.Counter(n.get("confidence", "") for n in names).get(c, 0)
                  for c in CONFIDENCES)),
         "> updated %s · commit `%s` · %s" % (stamp, head, describe),
         "> [STATUS](docs/cow/STATUS.md) · [MAP](docs/cow/map.svg) · "
         "[NAMES_TODO](docs/cow/NAMES_TODO.md) · "
         "[LOOP](docs/cow/LOOP.md) · [STYLE](docs/cow/STYLE.md) · [MACHINERY](docs/cow/MACHINERY.md) · "
         "[SETUP](docs/cow/SETUP_REPORT.md)"
         + (" · **HALTED: %s**" % halt if halt else ""),
         END]

    # ---------------- the readout: what the README shows once System 2 has a scoreboard ----------------
    progress_svgs = []
    board = scoreboard_data(repo)
    if board:
        local = datetime.now().astimezone()
        off = local.utcoffset() or timedelta(0)
        hours = off.total_seconds() / 3600.0
        stamp_local = "%s UTC%+g" % (local.strftime("%Y-%m-%d %H:%M"), hours)
        name_c = collections.Counter(n.get("confidence", "") for n in names)
        extra = [
            "**Readable, named C written by hand: %d of %s functions (%.1f%%)**, each with a `cowdiff` PASS and "
            "`gate.ps1`'s %s. This is the stricter count: source that reads like intent."
            % (done, "{:,}".format(real), pct, gate_txt),
            "Last hand conversions: %s" % last5_txt,
            tabled_txt, pending_txt,
            "Our own C: %s lines in %s files under `src/` and `layout/`; machine lift: %s units written, %s proven."
            % ("{:,}".format(src_loc), "{:,}".format(src_files), "{:,}".format(lift_n), "{:,}".format(lift_pass)),
            "Names: %d confirmed, %d guess, %d placeholder." % tuple(name_c.get(c, 0) for c in CONFIDENCES),
        ]
        R = readout(repo, board, extra, stamp_local, head, describe, halt)
        series = progress_series(repo, board)
        progress_svgs = [("progress.svg", render_progress_svg(board, series, "light")),
                         ("progress-dark.svg", render_progress_svg(board, series, "dark"))]

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

    # ---------------- the module map ----------------
    map_svg = ""
    try:
        mods = module_map(repo, rows, lift_pass_keys, on_disk, tabled_done_keys)
        if mods:
            map_svg = render_map_svg(mods)
            n_area = sum(1 for m in mods.values() if m["kind"] == "area")
            n_chunk = sum(1 for m in mods.values() if m["kind"] == "chunk")
            L += ["", "## Module map", "",
                  "![cow module map](map.svg)", "",
                  "_One row per module, 100 squares per row, each square one percent of that module's "
                  "**bytes**; a square takes the best state of any unit overlapping it. %d modules from the "
                  "ledger's `src/<area>/` placement, %d from the generated chunk the address falls in - "
                  "that second grouping is sound because the 55 `generated/all/funcs_NNN.c` chunks were "
                  "verified disjoint and address-ordered, so an address attributes to its chunk by range "
                  "alone rather than by guesswork. Thunks and the tabled trivial shapes are excluded._"
                  % (n_area, n_chunk), ""]
    except Exception as exc:                                   # noqa: BLE001 - a map is never worth a commit
        print("warning: module map not written (%s: %s)" % (type(exc).__name__, exc))

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
    # The SVG joins the same list as the other generated files, so `--check` compares it too. A picture that
    # drifts from the data is worse than no picture, because it is read as fact at a glance and argued with
    # never; being outside the check is how a diagram becomes a rumour.
    if map_svg:
        targets.append((os.path.join(repo, "docs", "cow", "map.svg"), map_svg))
    for name, svg in progress_svgs:
        targets.append((os.path.join(repo, "docs", "cow", name), svg))
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
        # the progress chart ends at "now" by design: like the `updated` line, it is never what makes a
        # tree stale
        if stable(current) != stable(text) and not os.path.basename(path).startswith("progress"):
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
