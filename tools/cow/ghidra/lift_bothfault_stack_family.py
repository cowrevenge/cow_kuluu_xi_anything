"""The 828-row `memory / stack / both-fault` family: whose stack word is it?

`regions_equal` (cowdiff.c ~717) compares side A's saved snapshot against side B's live region word by
word, and it is NOT gated on faulting - so a state where both sides raised the same exception still has
its stack compared. That is usually right and occasionally brutal: the two sides get to the same fault by
different machinery (side B through `cow_bridge_*`, side A by calling the generated original directly),
and the frames they leave below esp differ - a return-address sentinel on one side, a bare push on the
other. If the differing word is that kind of word, the failure is a HARNESS fairness problem, not a lift
bug, and the 828 rows should not be sold as lift defects.

The cluster's signature (`ours=10313417 theirs=0` in a stack slot) is exactly that shape, so this is
worth measuring before anything is fixed. Buckets the family by what each side is holding.
"""
import io
import json
import os
import re
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_failure_patterns as L  # noqa: E402  (one parser, imported not copied)

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

WANT = ("memory", "stack", "both-fault")


def main():
    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    if len(d) < 5000:
        sys.exit("REFUSING: %d rows" % len(d))

    fam, shapes, examples, addrs = [], Counter(), {}, Counter()
    for a, v in d.items():
        if v.get("pass"):
            continue
        g = L.group(v)
        if not (g[0] == "memory" and g[1] == "stack" and g[3] == "both-fault"):
            continue
        fam.append(a)
        m = L.DETAIL_RE.search(L.line_of(v))
        if not m:
            shapes[("no line", "")] += 1
            continue
        x = m.groupdict()
        key = (L.value_kind(x["va"]), L.value_kind(x["vb"]))
        shapes[key] += 1
        # the address is display-only here; the shared parser does not owe this tool a group
        am = re.search(r"@([0-9a-f#]{1,8})\s", L.line_of(v) or "")
        addr = am.group(1) if am else "?"
        if re.match(r"^[0-9a-f]{8}$", addr):
            n = int(addr, 16)
            addrs["frame window (0x993b00-0x993c40)"
                  if 0x0099_3b00 <= n < 0x0099_3c40 else
                  "0x%x..." % (n & 0xffff_f000)] += 1
        else:
            addrs["folded/unparsed"] += 1
        examples.setdefault(key, []).append(
            (a, addr, x["va"], x["vb"], x["fa"]))

    if not fam:
        sys.exit("REFUSING: the family is empty - the group key changed or the record moved on; a "
                 "zero here must not be read as 'the family is explained'")
    print("=" * 78)
    print("memory / stack / both-fault : %d rows" % len(fam))
    print("=" * 78)
    print("  %6s  %-22s %s" % ("count", "theirs holds", "ours holds"))
    for key in sorted(shapes, key=lambda x: -shapes[x])[:10]:
        print("  %6d  %-22s %s" % (shapes[key], key[0], key[1]))
        for a, addr, va, vb, fa in examples.get(key, [])[:3]:
            # va is SIDE A (the generated reference), vb is SIDE B (our lift). Printing them the other
            # way round tells a reader to go fix the wrong program.
            print("          0x%-10s @%s  A(theirs)=%s B(ours)=%s fault=%s"
                  % (a, addr, va, vb, fa))
    print()
    print("  WHERE in the stack the compared word lives:")
    for k in sorted(addrs, key=lambda x: -addrs[x])[:8]:
        print("    %6d  %s" % (addrs[k], k))
    win = addrs.get("frame window (0x993b00-0x993c40)", 0)
    print("    -> %.0f%% of the family differs inside the frame-bookkeeping window"
          % (100.0 * win / len(fam)))
    if win * 2 < len(fam):
        print("     NOT a frame-bookkeeping artifact: most of the family differs elsewhere, and the")
        print("     lift is the honest suspect for the bulk of it.")
    else:
        print("     Majority in the window where saved pointers and return addresses live - the two")
        print("     sides build those with different machinery, so part of this family is a harness")
        print("     fairness question, not a lift bug. Quote it as a share, not as the whole 828.")

    print()
    top = max(shapes, key=lambda x: shapes[x])
    share = 100.0 * shapes[top] / len(fam)
    print("  dominant shape: %r = %d/%d (%.0f%%)" % (top, shapes[top], len(fam), share))
    print()
    print("  If the word one side holds is a return-address-shaped IMAGE value while the other holds 0,")
    print("  the comparison is not measuring the same thing on the two sides and the family belongs to")
    print("  the harness, not the lift. If both sides hold data-shaped values, it is a real store")
    print("  difference and the lift is the suspect. This table is the difference between those two")
    print("  sentences - do not pick one before reading it.")


if __name__ == "__main__":
    main()
