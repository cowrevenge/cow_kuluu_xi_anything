"""The decision step after a measured re-lift - written BEFORE the re-lift, so nothing is improvised.

The sequence LOOP.md ends with is "prove, commit what newly passes". The prove step produces a scratch
verdict record from `lift_proof.py`; this turns it into the four buckets that decide what happens next,
and it refuses to be cheerful about any of them:

  NEWLY PASSING   the payoff sentence, and the only thing that can justify booking
  NEWLY FAILING   a regression caused by the fix - reported by name, never deleted or un-proved quietly
  STILL PASSING   the fix did not break what already worked
  STILL FAILING   the fix did not help; the `why` distribution here is the NEXT pattern to fix
  NO VERDICT      units with no row at all (a killed chunk, a harness timeout). A run with these is not
                  complete, and calling it complete is how a partial sweep becomes a confident number.

Guards that exist because of things that already happened in this loop:
  * the proof DEPTH of both sides is printed and compared - "passes at 2000 vs booked at 400" is the
    vacuous-test mistake (the 204-unit group that was "explained" by a class defined as diverging
    beyond 400 and then tested at 400);
  * an optional CONTROL list (units the pricing proved byte-identical) is bucketed separately: a control
    that starts failing is the fix breaking something unrelated, and that is an alarm, not a statistic;
  * this tool WRITES NOTHING. It reads the ledger and the scratch record and prints. Booking stays a
    separate deliberate commit.

`--selftest` runs the bucketing over two synthetic records so the tool's ability to see a regression and
to see a gain are both demonstrated - a verdict tool that always reports "no change" would be worse than
none, and that is exactly the dead-predicate failure this repo keeps meeting.
"""
import argparse
import io
import json
import os
import sys
from collections import Counter

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
LEDGER = os.path.join(ROOT, "cow", "lift_proof_all.json")


def load(path):
    with io.open(path, encoding="utf-8", errors="replace") as fh:
        return json.load(fh)


def rows(rec):
    """Normalise the two record shapes (flat {hex: verdict}, or wrapped in {"results": ...})."""
    if isinstance(rec, dict) and "results" in rec and isinstance(rec["results"], dict):
        rec = rec["results"]
    out = {}
    for k, v in rec.items():
        a = k.lower().replace("0x", "")
        if isinstance(v, dict):
            out[a] = v
    return out


def bucket(units, scratch, before, controls=()):
    """Classify each unit against what the ledger claimed and what the fresh run said."""
    b = {"NEWLY PASSING": [], "NEWLY FAILING": [], "STILL PASSING": [], "STILL FAILING": [],
         "NO VERDICT": [], "NOT IN LEDGER (new unit)": [], "CONTROLS BROKEN": [],
         "CONTROLS OK": []}
    controls = {c.lower().replace("0x", "") for c in controls}
    for a in units:
        a = a.lower().replace("0x", "")
        s = scratch.get(a)
        if s is None:
            b["NO VERDICT"].append((a, "no row in the scratch record"))
            continue
        was = before.get(a)
        now = bool(s.get("pass"))
        if was is None:
            key = "NOT IN LEDGER (new unit)"
        elif now and not was.get("pass"):
            key = "NEWLY PASSING"
        elif (not now) and was.get("pass"):
            key = "NEWLY FAILING"
        elif now:
            key = "STILL PASSING"
        else:
            key = "STILL FAILING"
        if a in controls:
            # a control that fails is ALSO in its real bucket above - intentional double listing
            if key in ("NEWLY FAILING", "STILL FAILING") and was and was.get("pass"):
                b["CONTROLS BROKEN"].append((a, s.get("why") or s.get("raw", "")))
            else:
                b["CONTROLS OK"].append(a)
        b[key].append((a, s.get("why") or ""))
    return b


ORDER = ["NEWLY PASSING", "NEWLY FAILING", "CONTROLS BROKEN", "STILL PASSING", "STILL FAILING",
         "NOT IN LEDGER (new unit)", "CONTROLS OK", "NO VERDICT"]


def report(b, scratch, before, units, label):
    print("=" * 76)
    print(label)
    print("=" * 76)
    for k in ORDER:
        v = b.get(k) or []
        if not v:
            continue
        print("  %-24s %4d" % (k, len(v)))
        if k in ("NEWLY PASSING", "NEWLY FAILING", "CONTROLS BROKEN", "NO VERDICT"):
            print("      %s" % ", ".join(a for a, _w in v[:10]))
    # the depth comparison, because a pass at the wrong depth is not the same pass
    asked = Counter(int(v.get("states") or 0) for v in scratch.values() if v.get("pass"))
    booked = Counter(int((before.get(a) or {}).get("states") or 0) for a, _ in
                     b.get("NEWLY PASSING", []))
    print()
    print("  proof depth of the fresh run : %s" % dict(asked))
    print("  booked depth of the gainers  : %s" % dict(booked))
    if asked and booked and set(asked) != set(booked):
        print("  WARNING: the two sides were run at DIFFERENT state counts. A unit booked at 400 that now")
        print("  passes at 2000 has not been re-proven at the standard it was booked at - and the reverse")
        print("  flatters the fix. Fix the comparison before quoting the gain.")
    fails = Counter(w for _a, w in b.get("STILL FAILING", []))
    if fails:
        print()
        print("  still-failing reasons (the next pattern to work on):")
        for w, n in fails.most_common(8):
            print("     %4d  %s" % (n, w or "(no reason recorded)"))
    return b


def selftest():
    """Prove the bucketing can see a gain, a regression, a broken control, and a missing row."""
    before = {"a1": {"pass": False, "states": 400}, "a2": {"pass": True, "states": 400},
              "a3": {"pass": True, "states": 400}, "a4": {"pass": False, "states": 400},
              "c1": {"pass": True, "states": 400}}
    scratch = {"a1": {"pass": True, "states": 400, "blocks": "4/4"},
               "a2": {"pass": False, "why": "register", "raw": "first at state 3 (register)"},
               "a3": {"pass": True, "states": 400, "blocks": "4/4"},
               "a4": {"pass": False, "why": "memory", "raw": "first at state 9 (memory)"},
               "c1": {"pass": False, "why": "esp", "raw": "first at state 1 (esp)"}}
    b = bucket(["a1", "a2", "a3", "a4", "a5", "c1"], scratch, before, controls=["c1"])
    # buckets are VIEWS, not a partition: c1 is a genuine regression AND a broken control, and it must
    # appear in both. The first version of this test demanded disjoint sets, which would have let a
    # broken control vanish from the regression count.
    checks = [("NEWLY PASSING", ["a1"]), ("NEWLY FAILING", ["a2", "c1"]),
              ("STILL PASSING", ["a3"]), ("STILL FAILING", ["a4"]),
              ("NO VERDICT", ["a5"]), ("CONTROLS BROKEN", ["c1"])]
    bad = []
    for k, want in checks:
        got = sorted(a for a, _w in b.get(k, []))
        if got != sorted(want):
            bad.append("%s: got %r want %r" % (k, got, want))
    print("=" * 76)
    print("selftest: can the verdict tool see the four outcomes that matter?")
    print("=" * 76)
    for k, want in checks:
        ok = sorted(a for a, _w in b.get(k, [])) == sorted(want)
        print("  %s %-18s %s" % ("ok  " if ok else "FAIL", k, b.get(k)))
    if bad:
        for x in bad:
            print("  - %s" % x)
        sys.exit("REFUSING: the verdict bucketing is wrong, so its real output would be fiction")
    print("\nRESULT: the bucketing distinguishes gain, regression, no-help and no-verdict, and a"
          "\n        broken control is counted as both a regression and an alarm")
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--scratch", default=os.path.join(ROOT, "cow", "wip", "relift-proof.json"))
    ap.add_argument("--list", default=os.path.join(ROOT, "cow", "wip", "relift-accepted.txt"))
    ap.add_argument("--ledger", default=LEDGER)
    ap.add_argument("--controls", default="")
    ap.add_argument("--selftest", action="store_true")
    a = ap.parse_args()
    if a.selftest:
        return selftest()

    for p in (a.scratch, a.list):
        if not os.path.exists(p):
            sys.exit("REFUSING: %s does not exist - has the re-lift actually been proved yet? "
                     "This tool reads verdicts; it does not conjure them." % p)
    with io.open(a.list, encoding="utf-8", errors="replace") as fh:
        units = [l.strip().lower().replace("0x", "") for l in fh if l.strip()]
    scratch = rows(load(a.scratch))
    if not scratch:
        sys.exit("REFUSING: the scratch proof record is empty - nothing was proved")
    before = rows(load(a.ledger))
    if len(before) < 5000:
        sys.exit("REFUSING: the ledger record has %d rows; this comparison needs the population"
                 % len(before))
    controls = []
    if a.controls and os.path.exists(a.controls):
        with io.open(a.controls, encoding="utf-8", errors="replace") as fh:
            controls = [l.strip() for l in fh if l.strip()]

    b = bucket(units, scratch, before, controls)
    report(b, scratch, before, units,
           "re-lift verdict: %d units, fresh proof vs the ledger's claim" % len(units))

    gain = len(b["NEWLY PASSING"])
    reg = len(b["NEWLY FAILING"])
    print()
    if not gain:
        print("  NO PROVEN GAIN. The fix changed %d file(s) and made nothing new pass. That is a result,"
              % len(units))
        print("  not a failure to hide: the knobs stay off and the diagnosis goes back on the table.")
    else:
        print("  PROVEN GAIN: %d unit(s) the ledger does not currently book as pass, passing a fresh"
              % gain)
        print("  cowdiff. %d regression(s). Nothing has been written by this tool - booking is the next,"
              % reg)
        print("  separate, deliberate step, and a regression is reported, never deleted.")
    if b["CONTROLS BROKEN"]:
        print("\n  ALARM: %d control unit(s) - files the pricing proved BYTE-IDENTICAL - now fail. The"
              % len(b["CONTROLS BROKEN"]))
        print("  fix is not inert, and the re-lift must not be booked until that is explained.")
        return 1
    if b["NO VERDICT"]:
        print("\n  INCOMPLETE: %d unit(s) produced no verdict at all. Do not call this sweep done; re-run"
              % len(b["NO VERDICT"]))
        print("  those entries (lift_proof --rerun) before quoting the gain as the whole result.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
