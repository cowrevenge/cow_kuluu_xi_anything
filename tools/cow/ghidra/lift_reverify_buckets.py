"""lift_reverify_buckets.py - what the halt's 394 failures actually ARE, parsed from the judge's line.

The halt rests on one number ("independent re-verify FAILED: 394 of 6405 claimed-proven unit(s) do not
pass cowdiff") and it has been carried as a single undifferentiated pile. It is not a pile: every row
carries `first_failing_line`, which is cowdiff's own verdict text -

    COWDIFF FAIL 10010350 1 mismatch(es), first at state 0 (memory) fault 0/0 @00993b60 10313417/00000000 x11 stack

The parenthesised token after `first at state N` is the CAUSE, and N itself is the most useful column on
the page: a unit that first diverges at STATE 0 has a structural defect on its main path, while one that
survives 900 states is an edge case in the seeding. Those are different jobs, and the pile does not say
so unless the line is parsed.

Two mistakes this file exists not to repeat, both made by its predecessor within the hour:

  * bucketing on `"fault" in line`, which matches `fault 0/0` - present in EVERY line - and produced a
    "383 fault units" bucket. A substring that cannot be absent is not a predicate. (Raw counts put the
    real `(fault)` figure at 52.)
  * labelling a counter `recorded pass=True` while computing `is not True`, which printed 0 and read as
    "the map already knows these fail". The truth is the opposite and it IS the halt: 392 of 394 are
    recorded pass=True in the official map and fail the audit.

So the script asserts its own parse against a by-eye exemplar before printing anything: if `0x10010350`
does not come out as memory-at-state-0 with region 00993b60 and our value 10313417 - which is what I
read in the file with my own eyes - it refuses to produce buckets at all.

Run:  python tools/cow/ghidra/lift_reverify_buckets.py [--reverify cow/reverify.json]
          [--census build/scratch/regarg-census.json] [--out build/scratch/reverify-394-buckets.json]
"""
import argparse
import io
import json
import os
import re
import sys
from collections import Counter, defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, HERE)

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

import lift_proof_map as lpm

LINE_RE = re.compile(r"first at state\s+(\d+)\s*\(([^)]+)\)")
REGION_RE = re.compile(r"@([0-9a-fA-F]{6,8})")
PAIR_RE = re.compile(r"@([0-9a-fA-F]{6,8})\s+([0-9a-fA-F]{8})/([0-9a-fA-F]{8})")
# The unit this box read by eye, and what the read produced. If the parser disagrees, the parser is wrong.
EXEMPLAR = ("10010350", "memory", 0, "00993b60", "10313417")


def parse(row):
    line = str(row.get("first_failing_line") or "")
    m = LINE_RE.search(line)
    why = m.group(2).strip().lower() if m else "(unparsed)"
    state = int(m.group(1)) if m else -1
    reg = REGION_RE.search(line)
    pair = PAIR_RE.search(line)
    return (why, state, (reg.group(1).lower() if reg else ""),
            (pair.group(2).lower() if pair else ""), line)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--reverify", default=os.path.join(ROOT, "cow", "reverify.json"))
    ap.add_argument("--census", default=os.path.join(ROOT, "build", "scratch", "regarg-census.json"))
    ap.add_argument("--out", default=os.path.join(ROOT, "build", "scratch",
                                                  "reverify-394-buckets.json"))
    a = ap.parse_args()
    if not os.path.isfile(a.reverify):
        sys.exit("REFUSING: %s missing - the halt's evidence, not a cache" % a.reverify)
    with io.open(a.reverify, encoding="utf-8") as fh:
        rv = json.load(fh)
    failed = rv.get("failed") or []
    if not failed:
        sys.exit("REFUSING: empty failed list next to a halt that names 394 - this file is not the"
                 " artifact the buckets describe")
    proof = lpm.load_map()
    lpm.can_fire(proof)

    ex = [r for r in failed if lpm.strip0x(r.get("unit", "")) == EXEMPLAR[0]]
    if not ex:
        sys.exit("REFUSING: the by-eye exemplar 0x%s is not in the list. The buckets below were"
                 " validated against it, so without it they are guesses with numbers on them."
                 % EXEMPLAR[0])
    e_why, e_state, e_reg, e_val, e_line = parse(ex[0])
    print("exemplar 0x%s -> why=%r state=%d region=%r our_value=%r"
          % (EXEMPLAR[0], e_why, e_state, e_reg, e_val))
    print("           line: %s" % e_line[:150])
    if (e_why, e_state, e_reg, e_val) != EXEMPLAR[1:]:
        sys.exit("REFUSING: the exemplar I read by eye (memory at state 0, region 00993b60, our value"
                 " 10313417) parsed as (%r, %d, %r, %r) - the parser is wrong, so no bucket from it"
                 " means anything" % (e_why, e_state, e_reg, e_val))

    census = {}
    if os.path.isfile(a.census):
        with io.open(a.census, encoding="utf-8") as fh:
            census = json.load(fh)
        print("census: %d entries (%s)" % (len(census), os.path.basename(a.census)))
    else:
        print("census: none at %s - that bucket will read 0 and MEANS NOTHING, not 'no overlap'"
              % a.census)
        census = None

    why_hist, state_hist = Counter(), Counter()
    buckets = defaultdict(list)
    unparsed, map_passing = [], 0
    for row in failed:
        u = lpm.strip0x(row.get("unit") or "")
        if not u:
            continue
        why, state, reg, val, line = parse(row)
        why_hist[why] += 1
        state_hist["state 0 (structural, main path)" if state == 0 else
                   "state 1-99" if 0 < state < 100 else
                   "state 100-499" if state < 500 else
                   "state 500+" if state >= 500 else "no state parsed"] += 1
        if why == "(unparsed)":
            unparsed.append((u, line[:120]))
        r = lpm.lookup(proof, u)
        if r and r.get("pass") is True:
            map_passing += 1
        if reg.startswith(("00993b", "00993c")):
            buckets["frame window 00993bxx/00993cxx"].append(u)
        if val == "10313417":
            buckets["the cluster word 10313417"].append(u)
        if census is not None and u in census:
            buckets["write-only register argument cohort"].append(u)
        if "LNK1104" in line or "LNK2019" in line or "cannot open file" in line:
            buckets["link/harness artefact (not a unit defect)"].append(u)
        if "did not return within" in line:
            buckets["harness timeout (not a unit defect)"].append(u)

    print("\nre-verify: claimed %s, failed %d, commit %s, when %s"
          % (rv.get("claimed"), len(failed), str(rv.get("commit"))[:10], rv.get("when")))
    print("recorded pass=True in the official map AND failing in the audit: %d of %d"
          "  <-- this is the halt" % (map_passing, len(failed)))
    print("\n---- cause token, parsed from `(why)` ----")
    for w, c in why_hist.most_common(14):
        print("%6d  %s" % (c, w))
    print("\n---- how deep before it diverges ----")
    for s, c in state_hist.most_common():
        print("%6d  %s" % (c, s))
    print("\n---- overlapping shapes (a unit can be in several) ----")
    for k in sorted(buckets, key=lambda b: -len(buckets[b])):
        print("%6d  %-44s e.g. %s" % (len(buckets[k]), k, " ".join(buckets[k][:4])))
    if unparsed:
        print("\nUNPARSED %d (harness artefacts, listed so they are not counted as unit defects):"
              % len(unparsed))
        for u, l in unparsed[:5]:
            print("   %s %s" % (u, l))
    if a.out:
        parent = os.path.dirname(a.out)
        if parent:
            os.makedirs(parent, exist_ok=True)
        with io.open(a.out, "w", encoding="utf-8") as fh:
            json.dump({k: v for k, v in buckets.items()}, fh, indent=1)
        print("\nwrote %s" % a.out)
    print("\nRead at least one unit from any bucket you intend to quote. The buckets say where to look,"
          " not what is wrong.")


if __name__ == "__main__":
    main()
