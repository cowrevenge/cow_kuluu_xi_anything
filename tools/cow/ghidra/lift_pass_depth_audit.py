"""How shallow is `pass`, population-wide? And does shallowness predict the reverify failures?

The 39 realised-clobber rows that sit in the ledger as `pass` are ALL partial-block-coverage (lowest
5/103). That is only an explanation if partial coverage is common enough to matter - and it is the
same question the 394 reverify failures raise: a row booked at 400 states that fails at 2000 was
proven against a path, not against the unit. So measure the ledger's own honesty:

  1. among booked-pass rows, the distribution of blocks reached / blocks total;
  2. whether the reverify-failing rows are concentrated in the low-coverage band.

RESULT OF (2), measured: NO. The gradient is inverted (6.6% at full coverage vs 2.5% under 20% on the
tree at commit 00e3b981 - the tool prints live figures, this line is a dated record), so "shallowness
explains the 394" is retracted in this file rather than left as a plausible story. What (1) does
establish, independently: 971 booked passes covered under half the unit - the right context for a
realised clobber sitting in the ledger, and a booking-standard question for the user.
Static: reads cow/lift_proof_all.json and cow/reverify.json only.
"""
import io
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
LEDGER = os.path.join(ROOT, "cow", "lift_proof_all.json")
REVERIFY = os.path.join(ROOT, "cow", "reverify.json")
BLOCKS_RE = re.compile(r"^(\d+)/(\d+)$")


def load(path):
    with io.open(path, encoding="utf-8", errors="replace") as fh:
        return json.load(fh)


def main():
    ledger = load(LEDGER)
    if len(ledger) < 5000:
        sys.exit("REFUSING: ledger has %d rows" % len(ledger))
    rev = None
    if os.path.exists(REVERIFY):
        try:
            rev = load(REVERIFY)
        except ValueError:
            rev = None

    passes = {a: r for a, r in ledger.items() if r.get("pass")}
    if not passes:
        sys.exit("REFUSING: no booked-pass rows - the ledger is not what this tool expects")

    bands = {"full (n/n)": 0, ">=80%": 0, "50-79%": 0, "20-49%": 0, "<20%": 0, "unparsable": 0}
    band_members = {k: [] for k in bands}
    for a, r in sorted(passes.items()):
        m = BLOCKS_RE.match(str(r.get("blocks", "")))
        if not m:
            k = "unparsable"
        else:
            got, tot = int(m.group(1)), int(m.group(2))
            frac = 1.0 if tot == 0 else float(got) / tot
            k = ("full (n/n)" if got == tot else
                 ">=80%" if frac >= 0.8 else
                 "50-79%" if frac >= 0.5 else
                 "20-49%" if frac >= 0.2 else "<20%")
        bands[k] += 1
        band_members[k].append(a)

    print()
    print("=" * 76)
    print("what `pass` actually covered  (%d booked-pass rows)" % len(passes))
    print("=" * 76)
    for k in ("full (n/n)", ">=80%", "50-79%", "20-49%", "<20%", "unparsable"):
        print("  %-12s : %5d  (%4.1f%%)" % (k, bands[k], 100.0 * bands[k] / len(passes)))
    shallow = bands["20-49%"] + bands["<20%"]
    print()
    print("  passes that covered under half the unit : %d" % shallow)

    if rev and rev.get("failed"):
        failed = {f["unit"].lower().replace("0x", "") for f in rev["failed"]}
        print()
        print("=" * 76)
        print("does shallowness predict the independent re-verify failure?")
        print("  (the prediction this file was written to confirm - it did not survive the numbers)")
        print("=" * 76)
        print("  reverify: checked=%s passed=%s failed=%d"
              % (rev.get("checked"), rev.get("passed"), len(failed)))
        for k in ("full (n/n)", ">=80%", "50-79%", "20-49%", "<20%"):
            mem = band_members[k]
            if not mem:
                continue
            hit = sum(1 for a in mem if a in failed)
            print("  %-12s : %5d rows, %4d reverified-fail  (%5.1f%%)"
                  % (k, len(mem), hit, 100.0 * hit / len(mem)))
        def rate(k):
            mem = band_members[k]
            return (100.0 * sum(1 for a in mem if a in failed) / len(mem)) if mem else None
        rf, rs = rate("full (n/n)"), rate("<20%")
        shallow = bands["20-49%"] + bands["<20%"]
        print()
        if rf is None or rs is None:
            print("  cannot judge: a band is empty")
        elif rf > rs:
            print("  FALSIFIED: fail rate {:.1f}% at full coverage vs {:.1f}% under 20%.".format(rf, rs))
            print("  Better-covered units fail MORE, because more of the unit is exercised, so the")
            print("  shallow-pass theory of the 394 is RETRACTED here rather than kept as a story.")
            print("  What the chart DOES establish is independent of that: {} booked passes covered".format(shallow))
            print("  less than half the unit - not regressions, but PROOFS OF LESS THAN THE UNIT,")
            print("  which is how a realised clobber can sit in the ledger unnoticed.")
        else:
            print("  SUPPORTED: fail rate rises as coverage falls ({:.1f}% full vs {:.1f}% under 20%)."
                  .format(rf, rs))
        print()
        print("  Either way: no re-booking on the strength of this chart, and the state floor stays")
        print("  the user's decision rather than a consequence of a measurement I wanted to be true.")
    else:
        print("\n  (no cow/reverify.json yet - the failure-prediction half of this check is unread)")


if __name__ == "__main__":
    main()
