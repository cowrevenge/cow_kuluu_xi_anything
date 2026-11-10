"""queue_unqueued.py - name the refusal reasons the pattern queue CANNOT see.

    python tools/cow/loopy/queue_unqueued.py                 # unqueued families over the refusal snapshot
    python tools/cow/loopy/queue_unqueued.py --all           # include the per-address accident families
    python tools/cow/loopy/queue_unqueued.py --selftest      # the detector must fail on a planted blind spot

WHY THIS EXISTS. On 2026-11-10 the queue's own `memory` action admitted, in prose, that five families had
no entry at all - `goto` 413, `unresolved_register_or_overlay` 395, `thunk` 313, `leftover_odd_width_type`
262 and the two address-escape reasons 257, about 1,640 refusals. The loop decides where its next turn is
spent by reading `patterns.FAMILIES`, so a reason with no key there is not ranked, never gets a sample
address handed out, and no session is ever pointed at it. The research existed; the wiring did not.

That state was discovered by a human noticing a sentence, which does not scale and does not repeat. This
tool makes it a number that can be demanded on demand, and `--min` turns it into a gate: it exits non-zero
when a family above the threshold is invisible, so "the queue cannot see the second largest thing in the
repo" becomes a build failure rather than a footnote.

WHAT `family_of` ACTUALLY DOES, and so what "queued" means here. It walks FAMILIES in order and returns the
first key the reason STARTS WITH. Two consequences this tool checks rather than assumes:

  * order matters - a key can be shadowed by an earlier key that is a prefix of it, which makes the later
    entry dead text that `patterns_check.py`'s reachability clause still passes (it tests "some reason
    starts with this key", not "this key is the one that wins"). Shadowing is reported separately.
  * `argcount_mismatch_10029038` and friends are per-address accidents folded together by `patterns.py`;
    they are excluded from the headline by default because a one-unit reason is not a family nobody has
    triaged, it is noise. `--all` shows them.

THE SELFTEST is the reason to trust a zero. The failure this loop has met repeatedly is a detector that
matches nothing and reports a confident nothing, so the selftest plants a reason that no key covers and
insists the tool CALLS IT OUT. A run that cannot detect a planted blind spot is broken, not clean.
"""
import argparse
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))          # tools/cow/loopy
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)

import patterns                                             # noqa: E402

# Per-address accident families: one reason per address, so they are individually small and individually
# meaningless. Matched the way patterns.py folds them, on a hex tail.
ACCIDENT_RE = re.compile(r"_[0-9a-f]{6,8}(_|$)")


def reason_of(value):
    if isinstance(value, dict):
        return str(value.get("reason") or value)
    return str(value)


def winning_key(reason, fams):
    """The key `family_of` would actually return - first prefix match in list order."""
    for key, _action in fams:
        if reason.startswith(key):
            return key
    return None


def analyse(refusals, fams, include_accidents=False, min_count=1):
    """(queued_counts, unqueued_counts, shadowed) over a refusal snapshot dict {addr: reason}."""
    counts = collections.Counter()
    for value in refusals.values():
        counts[reason_of(value)] += 1

    queued = collections.Counter()
    unqueued = collections.Counter()
    shadowed = {}
    for reason, n in counts.items():
        winner = winning_key(reason, fams)
        if winner is None:
            unqueued[reason] += n
            continue
        queued[winner] += n
        # a key that exists further down and is the FIRST match for this reason, but is not the reason's own
        # exact key: record which earlier key swallowed it, so dead prose is visible
        for key, _a in fams:
            if key != winner and reason.startswith(key):
                shadowed.setdefault(key, (winner, reason[:60]))
                break

    if not include_accidents:
        unqueued = collections.Counter({r: n for r, n in unqueued.items()
                                        if not ACCIDENT_RE.search(r)})
    big_unqueued = collections.Counter({r: n for r, n in unqueued.items() if n >= min_count})
    return queued, big_unqueued, shadowed


def selftest():
    """The detector must call out a planted blind spot, or it is worthless."""
    problems = []
    fams = [("memory", "x"), ("string_op_not_modelled", "y")]

    # planted: a reason no key covers, at a count that clears the floor
    ref = {"0001": "memory", "0002": "memory", "0003": "brand_new_shape", "0004": "brand_new_shape"}
    _q, u, _s = analyse(ref, fams, min_count=2)
    if u.get("brand_new_shape") != 2:
        problems.append("planted blind spot NOT detected: unqueued=%s" % dict(u))

    # and the same run must NOT invent a blind spot for a covered reason
    if "memory" in u:
        problems.append("covered reason reported as unqueued: %s" % dict(u))

    # shadowing: a later key that can never win must be reported, not passed as reachable
    shadow_fams = [("go", "x"), ("goto", "y")]
    _q2, _u2, sh = analyse({"0001": "goto"}, shadow_fams)
    if "goto" not in sh:
        problems.append("shadowed key NOT reported: shadowed=%s" % sh)

    # per-address accidents must be hidden by default and shown with --all
    acc = {"0001": "argcount_mismatch_10029038_ghidra3_push1"}
    _q3, u3, _s3 = analyse(acc, fams, include_accidents=False)
    if "argcount_mismatch_10029038_ghidra3_push1" in u3:
        problems.append("per-address accident leaked into the headline census")
    _q4, u4, _s4 = analyse(acc, fams, include_accidents=True)
    if "argcount_mismatch_10029038_ghidra3_push1" not in u4:
        problems.append("--all failed to show the per-address accident")

    if problems:
        for p in problems:
            print("SELFTEST FAIL: " + p)
        return 1
    print("selftest OK: planted blind spot detected, covered reason not invented, shadowing reported, "
          "accidents gated")
    return 0


def main():
    ap = argparse.ArgumentParser(description="name refusal reasons the pattern queue cannot see")
    ap.add_argument("--refusals", default=patterns.REFUSALS)
    ap.add_argument("--min", type=int, default=20,
                    help="ignore unqueued reasons below this count (default 20)")
    ap.add_argument("--all", action="store_true",
                    help="include per-address accident families in the census")
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--selftest", action="store_true")
    a = ap.parse_args()

    if a.selftest:
        return selftest()

    if not os.path.exists(a.refusals):
        print("REFUSALS snapshot absent (%s) - run lift.py --reasons-out first. Refusing to report an "
              "empty unqueued census as 'the queue sees everything'." % a.refusals)
        return 3
    with open(a.refusals, encoding="utf-8") as fh:
        refusals = json.load(fh)

    fams = patterns.FAMILIES
    queued, unqueued, shadowed = analyse(refusals, fams,
                                         include_accidents=a.all, min_count=a.min)

    total_refused = sum(1 for _ in refusals)
    unqueued_total = sum(unqueued.values())
    if a.json:
        print(json.dumps({"refusals": total_refused, "unqueued_units": unqueued_total,
                          "unqueued": dict(unqueued.most_common()),
                          "shadowed": {k: list(v) for k, v in shadowed.items()}}, indent=1))
    else:
        print("snapshot %s: %d refused units, %d of them under a reason the queue cannot rank "
              "(floor --min=%d)" % (os.path.relpath(a.refusals, ROOT).replace("\\", "/"),
                                    total_refused, unqueued_total, a.min))
        for reason, n in unqueued.most_common(20):
            print("  UNQUEUED %5d  %s" % (n, reason))
        for key, (winner, sample) in shadowed.items():
            print("  SHADOWED   '%s' never wins - '%s' matches first (e.g. %s)" % (key, winner, sample))
        if not unqueued and not shadowed:
            print("  nothing above the floor is invisible to the queue")
    # A gate, not a report: an invisible family above the floor is a queue bug.
    return 1 if unqueued else 0


if __name__ == "__main__":
    sys.exit(main())
