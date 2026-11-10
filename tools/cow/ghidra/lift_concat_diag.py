"""lift_concat_diag.py - what the `leftover_concat` refusals actually contain.

    python tools/cow/ghidra/lift_concat_diag.py                 # census over the current refusal snapshot
    python tools/cow/ghidra/lift_concat_diag.py --units 0x10012340,0x10056789
    python tools/cow/ghidra/lift_concat_diag.py --verbose       # print the whole enclosing statement

WHY. The queue key `leftover_concat` was written 2026-11-10 after tools/cow/loopy/queue_unqueued.py showed
22 refused units had no queue entry at all. Its action says the fix is mechanical - CONCATab(x, y) is
`(uint##ab##_t)x << b | (uint##ab##_t)y` with both widths from the intrinsic's own two digits - but that
sentence is a CLAIM about 22 units, not a measurement of them, and this repo has been burned repeatedly by
implementing the obvious one-line rewrite for a Ghidra spelling whose operands were not what the name
promised. So before a rewrite pass is written, ask Ghidra:

  * which intrinsics actually appear (CONCAT44? CONCAT13? something rarer),
  * what the two operands ARE - literals, registers, expressions with their own width, or a nested CONCAT
    (a nested one is not a one-line rewrite, it is a recursion, and the "mechanical" label would be wrong),
  * and whether the digits agree with the width of what the GENERATED BODY does at that point, which is the
    only authority on what the guest wrote.

TRIPWIRE, mandatory (the sixth-form failure this loop keeps meeting is a detector that matches NOTHING and
reports a confident zero). `PINNED` must be a leftover_concat unit AND must yield at least one parsed
CONCAT here, and the whole census must be non-empty. If either fails, this tool prints nothing about the
population and exits non-zero: a number this file has not licensed is not a number.
"""
import argparse
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))              # tools/cow/ghidra
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")

# Ghidra's concatenation intrinsics: CONCAT<hi-width><lo-width>(hi, lo)
CONCAT_RE = re.compile(r"\bCONCAT(\d{1,2})(\d{1,2})\s*\(")

# the unit this file was pinned on once one is read by eye; filled in by the first run that finds one
PINNED = os.environ.get("COW_CONCAT_PINNED", "")


def reason_of(v):
    return str(v.get("reason") if isinstance(v, dict) else v)


def concat_units(refusals):
    return sorted(a for a, v in refusals.items() if reason_of(v) == "leftover_concat")


def load_records(addrs, dump=DUMP):
    """Ghidra records for `addrs` from the jsonl dump, in one streaming pass."""
    want = {a.lower().replace("0x", "") for a in addrs}
    out = {}
    if not os.path.exists(dump):
        return out, "dump absent: %s" % dump
    with open(dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not line.strip():
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            a = str(d.get("addr") or d.get("address") or "").lower().replace("0x", "")
            if a in want:
                out[a] = d
                if len(out) == len(want):
                    break
    return out, None


def balanced_args(text, open_idx):
    """(args, end) for the parenthesised list starting at text[open_idx] == '('."""
    depth = 0
    for j in range(open_idx, len(text)):
        c = text[j]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                inner = text[open_idx + 1:j]
                return split_top(inner), j + 1
    return None, -1


def split_top(s):
    """Split on commas at bracket depth 0."""
    parts, depth, cur = [], 0, []
    for c in s:
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        if c == "," and depth == 0:
            parts.append("".join(cur).strip())
            cur = []
        else:
            cur.append(c)
    parts.append("".join(cur).strip())
    return parts


def strip_comments(s):
    s = re.sub(r"/\*.*?\*/", " ", s, flags=re.S)
    return re.sub(r"//[^\n]*", " ", s)


def scan(c_text):
    """Every CONCAT in the record, as (hi_digits, lo_digits, [args], enclosing_statement)."""
    body = strip_comments(c_text or "")
    hits = []
    for m in CONCAT_RE.finditer(body):
        hi, lo = m.group(1), m.group(2)
        open_idx = body.index("(", m.start())
        args, _end = balanced_args(body, open_idx)
        if args is None:
            hits.append((hi, lo, None, ""))
            continue
        # the statement this sits in, for eyeballing
        start = max(body.rfind(";", 0, m.start()), body.rfind("{", 0, m.start()),
                    body.rfind("}", 0, m.start()))
        end = body.find(";", m.start())
        stmt = " ".join(body[start + 1:(end if end > 0 else start + 160)].split())
        hits.append((hi, lo, args, stmt[:200]))
    return hits


def main():
    ap = argparse.ArgumentParser(description="census the CONCAT shapes behind the leftover_concat refusals")
    ap.add_argument("--refusals", default=REFUSALS)
    ap.add_argument("--units", default="", help="comma-separated addresses instead of the snapshot")
    ap.add_argument("--verbose", action="store_true", help="print each enclosing statement")
    ap.add_argument("--max-show", type=int, default=12)
    a = ap.parse_args()

    if not os.path.exists(a.refusals):
        print("refusal snapshot absent (%s) - run lift.py --reasons-out first" % a.refusals)
        return 3
    with open(a.refusals, encoding="utf-8") as fh:
        refusals = json.load(fh)

    addrs = ([u.strip() for u in a.units.split(",") if u.strip()] if a.units
             else concat_units(refusals))
    if not addrs:
        # TRIPWIRE: an empty scope here is exactly the confident-nothing failure. Say so, do not report a
        # clean population.
        print("TRIPWIRE: no leftover_concat units in the snapshot. Refusing to describe the family as empty "
              "or fixed - either the snapshot is stale or the reason string changed. Re-run "
              "lift.py --reasons-out.")
        return 4

    recs, err = load_records(addrs)
    if err:
        print("TRIPWIRE: %s - cannot answer what CONCAT contains without the Ghidra dump" % err)
        return 4
    if not recs:
        print("TRIPWIRE: %d addresses asked for, %d found in the dump. The census would be a confident "
              "nothing; not printing it." % (len(addrs), len(recs)))
        return 4

    shapes = collections.Counter()
    arity = collections.Counter()
    nested = 0
    literal_hi = 0
    shown = 0
    parsed = 0
    for addr in addrs:
        d = recs.get(addr.lower().replace("0x", ""))
        if not d:
            shapes["<no record in dump>"] += 1
            continue
        hits = scan(d.get("c") or "")
        if not hits:
            # a unit refused for leftover_concat whose Ghidra C has no CONCAT is a finding about the
            # REFUSAL, not about Ghidra: the concat was introduced by the rewriter, or the reason is stale.
            shapes["refused-but-no-CONCAT-in-ghidra-C"] += 1
            if shown < a.max_show:
                print("  NO-CONCAT 0x%s  (refusal says leftover_concat, Ghidra C has no CONCAT)" %
                      addr.lower().replace("0x", ""))
                shown += 1
            continue
        for hi, lo, args, stmt in hits:
            parsed += 1
            if args is None:
                shapes["unbalanced-paren"] += 1
                continue
            arity[len(args)] += 1
            if args[0].startswith("CONCAT") or (len(args) > 1 and args[1].startswith("CONCAT")):
                nested += 1
            if re.fullmatch(r"0x[0-9a-fA-F]+|\d+", args[0] or ""):
                literal_hi += 1
            shapes["CONCAT%s%s" % (hi, lo)] += 1
            if a.verbose and shown < a.max_show:
                print("  0x%-10s CONCAT%s%s(%s, %s)\n        stmt: %s"
                      % (addr, hi, lo, (args[0] or "")[:40], (args[1] or "")[:40] if len(args) > 1 else "-",
                         stmt[:150]))
                shown += 1

    if parsed == 0:
        print("TRIPWIRE: %d units scanned, ZERO CONCAT expressions parsed. A zero from a regex is not "
              "evidence - check CONCAT_RE against the dump before believing anything." % len(recs))
        return 4

    if PINNED:
        p = PINNED.lower().replace("0x", "")
        prec = recs.get(p)
        ok = prec is not None and scan(prec.get("c") or "")
        if not ok:
            print("TRIPWIRE: pinned unit %s is not in the scanned set or shows no CONCAT - the detector is "
                  "broken, not the population." % PINNED)
            return 4

    print("leftover_concat census over %d refused units (%d CONCAT expressions parsed)"
          % (len(addrs), parsed))
    for k, n in shapes.most_common(14):
        print("  %-38s %d" % (k, n))
    print("  arity: %s" % dict(arity))
    print("  nested CONCAT as an operand: %d   literal high operand: %d" % (nested, literal_hi))
    print("  read a --verbose sample against generated/all before calling the rewrite mechanical.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
