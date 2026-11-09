"""Do the loop's memory failures differ because a body is wrong, or because the two frames are shifted?

The loop's largest failure group is `memory` (858 rows), 683 of them in the STACK region. "Side A and side B
left different words at this stack address" has at least two causes with opposite fixes: a translation that
really writes the wrong value, or the two sides arriving at the compared address with a DIFFERENT esp - in
which case the same nominal address is a different frame slot and the content difference is a consequence,
not a bug. The first needs a lifter change; the second belongs to the push/cleanup/argcount families.

cowdiff now prints `esp=%08x/%08x` on the FAIL line (added 2026-11-09, additive: it decides nothing about
PASS), and lift_proof keeps the whole line verbatim in `raw`. This tool reads that.

Rows proven BEFORE the field existed have no esp in `raw` and are counted separately, never guessed.

    python tools/cow/ghidra/lift_frameshift.py                      # the live record
    python tools/cow/ghidra/lift_frameshift.py --proof build/lift/proof_sample40.json
    python tools/cow/ghidra/lift_frameshift.py --why memory --samples 5
"""
import argparse
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
DEFAULT = os.path.join(ROOT, "cow", "lift_proof_all.json")

ESP_RE = re.compile(r"esp=([0-9a-fA-F]{8})/([0-9a-fA-F]{8})")
REG_RE = re.compile(r"\b(stack|image|arena|other)\b")
STORE_RE = re.compile(r"store=(\w+)")
STATE_RE = re.compile(r"first at state (\d+)")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--proof", default=DEFAULT)
    ap.add_argument("--why", default="memory")
    ap.add_argument("--samples", type=int, default=6)
    ap.add_argument("--list", default="", dest="list_shape",
                    help="write the entries of one shape (e.g. \"value|stack|state0|esp-equal\") to a file, "
                         "one per line, for lift_proof --list. Sampling six tells you what a shape looks "
                         "like; the loop needs all of it to price a fix or hand it to a proof run.")
    a = ap.parse_args()

    if not os.path.exists(a.proof):
        print("no proof record at %s" % a.proof)
        return 1
    p = json.load(open(a.proof, encoding="utf-8"))
    rows = [(k, v) for k, v in p.items() if v.get("pass") is not True
            and str(v.get("why")) == a.why]
    if not rows:
        print("no rows with why=%s in %s" % (a.why, a.proof))
        return 0

    same = 0
    shifted = 0
    unknown = 0
    buckets = collections.Counter()
    combos = collections.Counter()
    members = collections.defaultdict(list)   # shape -> entries, so --list can hand a shape to a proof run
    ex_shift = []
    ex_same = []
    for k, v in rows:
        raw = str(v.get("raw") or "")
        m = ESP_RE.search(raw)
        region = REG_RE.search(raw)
        region = region.group(1) if region else "?"
        st = STORE_RE.search(raw)
        st = st.group(1) if st else "?"
        s0 = STATE_RE.search(raw)
        state = "state0" if (s0 and s0.group(1) == "0") else "later"
        if not m:
            unknown += 1
            combos["%s|%s|%s|no-esp-field" % (st, region, state)] += 1
            members["%s|%s|%s|no-esp-field" % (st, region, state)].append(k)
            continue
        ea, eb = int(m.group(1), 16), int(m.group(2), 16)
        if ea == eb:
            same += 1
            combos["%s|%s|%s|esp-equal" % (st, region, state)] += 1
            members["%s|%s|%s|esp-equal" % (st, region, state)].append(k)
            if len(ex_same) < a.samples:
                ex_same.append((k, raw[:150]))
        else:
            shifted += 1
            d = ea - eb
            # buckets by magnitude: a small multiple of 4 is a push/cleanup count, a large or unaligned
            # difference is something else entirely (a wrong pointer, a bad frame base).
            if abs(d) <= 64 and d % 4 == 0:
                b = "small-multiple-of-4 (%+d)" % d
            elif d % 4 == 0:
                b = "larger-multiple-of-4"
            else:
                b = "NOT-a-word-multiple (%+d)" % d
            buckets[b] += 1
            combos["%s|%s|%s|esp-shifted" % (st, region, state)] += 1
            members["%s|%s|%s|esp-shifted" % (st, region, state)].append(k)
            if len(ex_shift) < a.samples:
                ex_shift.append((k, raw[:150]))

    print("rows with why=%s: %d   (esp known for %d, missing for %d - rows proven before the "
          "field existed)" % (a.why, len(rows), same + shifted, unknown))
    print("\n-- the split this tool exists to answer --")
    print("  esp EQUAL at the first mismatch    : %4d   (a real content difference - lifter's problem)" % same)
    print("  esp DIFFERS at the first mismatch  : %4d   (frames shifted - push/cleanup's problem)" % shifted)
    if buckets:
        print("\n-- how far apart the frames are --")
        for b, c in buckets.most_common(8):
            print("  %5d  %s" % (c, b))
    print("\n-- shape x esp-outcome --")
    for s, c in combos.most_common(12):
        print("  %5d  %s" % (c, s))
    if a.list_shape:
        want = a.list_shape.strip()
        if want not in members:
            print("\n--list %r matches NOTHING. Shapes present: %s"
                  % (want, ", ".join(s for s, _ in combos.most_common(12))))
            return 2
        path = os.path.join(ROOT, "build", "lift", "entries_%s.txt" % re.sub(r"\W+", "_", want))
        open(path, "w", encoding="utf-8").write("\n".join(sorted(members[want])) + "\n")
        print("\n--list %s -> %d entries written to %s" % (want, len(members[want]), path))

    if ex_shift:
        print("\n-- samples: frames shifted (fix the push/cleanup family, not the body) --")
        for k, d in ex_shift:
            print("  0x%s  %s" % (k, re.sub(r"\s+", " ", d)))
    if ex_same:
        print("\n-- samples: esp equal (these ARE wrong stores - read them) --")
        for k, d in ex_same:
            print("  0x%s  %s" % (k, re.sub(r"\s+", " ", d)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
