"""Cluster the failing LIFTED population by what the harness actually said, to pick the next pattern.

LOOP's priority order is "fix the biggest lift pattern, then the lifted-but-failing groups". Choosing
between them needs the failure population grouped by something more useful than `why`, and the
information is already on disk: every failing row in `cow/lift_proof_all.json` carries `detail`, the
folded harness line, which contains the compared REGION (image/stack/arena/-), the STORE verdict
(value/missing/extra), whether BOTH sides faulted, and the first failing state. Grouping on those
turns "1319 memory" into things like "image store=value while both sides faulted", which is a shape a
lifter fix can address - or a shape that proves the bucket is not one defect at all.

Tripwired on purpose: the parser is checked against a row I have read by eye, because a regex that
matches nothing reports a clean empty histogram and an empty histogram reads like "no pattern found".
"""
import io
import json
import os
import re
import sys
from collections import Counter, defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")
# `detail` is the FOLDED line: the address and both values are masked to `#` (that folding is what
# makes it groupable, and it is what made a hex-only regex match nothing - 100% "(unparsed)" reads as
# "no pattern exists" unless a tripwire says otherwise). Accept either form, and prefer `raw` when it
# exists so the values survive for the by-eye read.
HEXOR = r"(?:[0-9a-f]{8}|#{1,8}|-#)"
FAULT = r"(?:-?\d+|-#|\d+)"
DETAIL_RE = re.compile(
    r"first at state (?P<state>\d+) \((?P<kind>[\w -]+?)\)\s*fault (?P<fa>" + FAULT + r")/"
    r"(?P<fb>" + FAULT + r")\s*@" + HEXOR + r"\s+(?P<va>" + HEXOR + r")/(?P<vb>" + HEXOR + r")\s*"
    r"x(?P<n>\d+)\s*(?P<region>[\w-]+)\s+store=(?P<store>\w+)"
    # the register clause: for eax/edx/callee-saved/esp rows THESE are the compared values, while
    # the @addr pair above is memory-diff bookkeeping (usually 0/0). Reading the wrong pair
    # produced a "100% of rows have both sides zero" finding that could not have been true.
    r"")

REGISTER_KINDS = ("eax", "edx", "esp", "callee-saved register", "st0")
# Its own search over the whole line: between `store=<x>` and `reg=<name> A/B` the harness prints
# `A:... B:...`, so an optional clause appended to DETAIL_RE matches empty and the row silently
# falls back to the memory-diff pair. Separate search, explicit absence.
REG_RE = re.compile(r"reg=(?P<reg>[\w-]+)\s+(?P<ra>" + HEXOR + r")/(?P<rb>" + HEXOR + r")")


def compared_pair(g, kind, line):
    """The two values the harness actually compared for this row.

    A register kind takes them from the `reg=` clause; a memory kind from the address pair. When a
    register row has no usable clause it says so instead of quietly measuring the wrong fields.
    """
    if kind in REGISTER_KINDS:
        m = REG_RE.search(line)
        if m:
            return m.group("ra"), m.group("rb"), "reg=%s" % m.group("reg")
        return None, None, "NO reg= clause"
    return g["va"], g["vb"], "address"


def line_of(v):
    """The line to parse: the unfolded one if we kept it, the folded one otherwise."""
    return v.get("raw") or v.get("detail") or ""


def load(path):
    with io.open(path, encoding="utf-8", errors="replace") as fh:
        return json.load(fh)


def group(v):
    m = DETAIL_RE.search(line_of(v))
    if not m:
        # do not invent a comparison shape for a row that never produced one: hang / no_row_output /
        # timeout / st0-without-a-store clause are DIFFERENT problems, and one "(unparsed)" bucket
        # would let a hang be counted as a memory bug
        return (v.get("why") or "(no line, no why)", "-", "-", "-", "-")
    g = m.groupdict()
    both_fault = (g["fa"] == g["fb"] and g["fa"] not in ("0", ""))
    return (g["kind"], g["region"], g["store"],
            "both-fault" if both_fault else "no-fault",
            "state0" if g["state"] == "0" else "later")


def which_side_zero(va, vb):
    if va is None or vb is None:
        return "no value clause for this kind"
    if va.startswith("#") or vb.startswith("#"):
        return "values-folded"
    if va == "00000000" and vb != "00000000":
        return "ours=0, theirs!=0"
    if vb == "00000000" and va != "00000000":
        return "theirs=0, ours!=0"
    if va == vb:
        return "equal??(folded/other)"
    return "both non-zero, differ"


def value_kind(v):
    """What KIND of thing the reference side is holding - the thing that separates mechanisms."""
    if v.startswith("#") or not re.match(r"^[0-9a-f]{8}$", v):
        return "unknown"
    n = int(v, 16)
    if n == 0:
        return "zero"
    if n < 0x1000:
        return "small-constant"
    if 0x0098_0000 <= n < 0x009A_0000:
        return "harness-stack/arena"
    if 0x1000_0000 <= n < 0x1100_0000:
        return "image"
    if 0x6000_0000 <= n:
        return "heap-ish"
    return "other:%s" % v[:2]


def drill(d, kind):
    """Split one comparison kind by which side is zero and what the other side holds."""
    from collections import Counter
    rows = [(k, v) for k, v in d.items()
            if not v.get("pass") and group(v)[0] == kind]
    if not rows:
        sys.exit("REFUSING: no rows of kind %r - the drill would print a confident nothing" % kind)
    shapes = Counter()
    members = {}
    for k, v in rows:
        m = DETAIL_RE.search(line_of(v))
        if not m:
            shapes[("no line",)] += 1
            continue
        g = m.groupdict()
        va, vb, src = compared_pair(g, kind, line_of(v))
        key = (which_side_zero(va, vb), value_kind(vb), value_kind(va), src)
        shapes[key] += 1
        members.setdefault(key, []).append(k)
    print()
    print("=" * 78)
    print("drill into kind=%r : %d rows, split by value shape" % (kind, len(rows)))
    print("=" * 78)
    print("  %6s  %-22s %-20s %-18s %s"
          % ("count", "which side is zero", "theirs holds", "ours holds", "values from"))
    for key in sorted(shapes, key=lambda x: -shapes[x])[:14]:
        key = tuple(key) if not isinstance(key, str) else (key,)
        key = key + ("",) * (4 - len(key))
        print("  %6d  %-22s %-20s %-18s %s"
              % (shapes[tuple(key)], key[0], key[1], key[2], key[3]))
        print("         e.g. %s" % ", ".join("0x" + a for a in sorted(members.get(key, []))[:5]))
    print()
    print("  A shape that dominates (ours=0 while the reference holds a stack/arena word) is ONE")
    print("  mechanism worth a lifter fix. Ten shapes of 40 each is not a pattern - it is the whole")
    print("  population failing for the usual ten reasons, and it should not be sold as a finding.")
    # name the dominant shape, or say there is none
    # a shape that says "both sides are equal" cannot explain a reported mismatch: the parse is
    # reading the wrong field, and the histogram would be fiction
    bogus = [k for k in shapes if isinstance(k, tuple) and k and "equal??" in str(k[0])]
    if bogus and sum(shapes[k] for k in bogus) == len(rows):
        sys.exit("REFUSING: every %r row parsed as BOTH SIDES EQUAL - not a pattern, the wrong "
                 "field. Fix compared_pair() before believing anything here." % kind)
    if bogus:
        print("  (note: %d rows parsed as both-sides-equal - no usable value clause)"
              % sum(shapes[k] for k in bogus))
    top = max(shapes, key=lambda x: shapes[x])
    share = 100.0 * shapes[top] / len(rows)
    print("  dominant shape: %r = %d/%d (%.0f%%)" % (tuple(top), shapes[top], len(rows), share))
    if share < 30.0:
        print("  -> NO dominant shape. Do not write one fix for this kind; read three rows first.")
    return 0


def main():
    if len(sys.argv) > 2 and sys.argv[1] == "--drill":
        return drill(load(RECORD), sys.argv[2])
    d = load(RECORD)
    if len(d) < 5000:
        sys.exit("REFUSING: %d rows - this is not the population" % len(d))
    fails = {k: v for k, v in d.items() if not v.get("pass")}
    groups = defaultdict(list)
    unparsed = 0
    for k, v in fails.items():
        g = group(v)
        groups[g].append(k)
        if g[1] == "-":
            unparsed += 1

    print("=" * 78)
    print("the %d failing lifted rows, grouped by what the harness compared and what it found" % len(fails))
    print("=" * 78)
    print("  %6s  %-22s %-8s %-9s %-10s %s"
          % ("count", "kind", "region", "store", "fault", "state"))
    for g in sorted(groups, key=lambda x: -len(groups[x]))[:20]:
        print("  %6d  %-22s %-8s %-9s %-10s %s"
              % (len(groups[g]), g[0], g[1], g[2], g[3], g[4]))
    print()
    print("  rows with no comparison line (hang / no_row_output / timeout / st0 / refused): %d  (%.1f%%)"
          % (unparsed, 100.0 * unparsed / max(1, len(fails))))
    if unparsed:
        whyc = Counter(g[0] for g in groups if g[1] == "-")
        print("     as: %s" % ", ".join("%s=%d" % (w, n) for w, n in whyc.most_common(6)))
        if all(w == "(no line, no why)" for w in whyc):
            sys.exit("REFUSING: rows exist with neither a line nor a reason - the record is not what "
                     "this tool understands")

    # tripwire: a specific row I have read by eye must land in a specific group, or the parser is a lie
    probe = "10002460"
    if probe in d:
        got = group(d[probe])
        want = ("memory", "image", "value", "no-fault", "state0")
        ok = got == want
        print()
        print("  %s tripwire 0x%s -> %s (want %s)" % ("ok  " if ok else "FAIL", probe, got, want))
        if not ok:
            sys.exit("REFUSING: the parser mis-grouped the row it was validated against; the "
                     "histogram above is meaningless")
    else:
        sys.exit("REFUSING: tripwire row 0x%s is gone from the record - the record changed shape" % probe)

    # the top group, with examples: this is the one a fix is written against
    top = max(groups, key=lambda x: len(groups[x]))
    members = sorted(groups[top])
    print()
    print("=" * 78)
    print("biggest single group: %d rows" % len(members))
    print("  %s / region=%s store=%s fault=%s state=%s" % top)
    print("  examples: %s" % ", ".join("0x" + a for a in members[:10]))
    print()
    print("  Before a fix is written against this group, ask what ELSE could explain it: a store=missing")
    print("  on a both-fault state is the harness comparing memory its own fault skipped, and a")
    print("  region=image store=value is a constant the lifter translated wrong - two different jobs.")
    print("  Read three of them before choosing. The histogram picks the candidate; the by-eye read")
    print("  decides whether it is one defect at all.")


if __name__ == "__main__":
    main()
