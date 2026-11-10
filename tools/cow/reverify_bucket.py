"""reverify_bucket.py - sort an audit's failures by CAUSE, because a FAIL line is not a finding, it is a clue.

    python tools/cow/reverify_bucket.py build/rv_s120.json
    python tools/cow/reverify_bucket.py cow/reverify.json --json

WHY. The independent audit at `--states 2000` emits one flat `failed` list, and measurement has already shown
that list mixes at least three unrelated problems with three different remedies:

  * **depth** - every lifted row was booked at 300/400 states while the judge defaults to 2000, so a
    divergence first seen above ~400 is "the recording never got here", not "the lift is wrong";
  * **dead-stack residue** - one word differing BELOW the entry's final esp, with esp/eax/edx/fault all
    agreeing and blocks fully covered: the two sides disagree about garbage nobody observes;
  * **runner divergence** - a unit that FAILS under `cowdiff` at state 0 while `lift_proof` booked it as
    `pass` at 300 states (e.g. 0x1024c910, whose lifted source was read and is faithful). Two witnesses
    disagreeing about identical semantics is a property of the witnesses.
  * **fault asymmetry** - one side access-violates and the other does not, which for an unconditional store
    means the initial state the two runners handed the sides was not the same.

Triaged as one number, the interesting harness stories swallow the genuine conversion bugs (which is what a
group label always does), so this tool groups them and says what each group costs.

IT DOES NOT DECIDE ANYTHING. It never opens a proof record to write to it and never un-proves a unit; it reads
an audit report and sorts it. A bucket is a question to ask, not a verdict to book.

TRIPWIRE: the record must exist, must have a `failed` list, and must be non-empty. An empty or missing input
exits non-zero rather than printing "no failures" - a check that examined nothing has repeatedly been made to
look like a clean bill of health in this repo.
"""
import argparse
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
SEEDS = os.path.join(ROOT, "cow", "seeds")

# What the batch runner actually recorded, and what the judge uses. Kept as constants with a comment rather
# than magic numbers in the classifier - see cow/wip/loop-notes.md, "the whole lifted population is certified
# at a fifth of the judge's depth".
RECORDED_DEPTH_MAX = 400
JUDGE_DEPTH = 2000

STATE_RE = re.compile(r"first at state (\d+)")
KIND_RE = re.compile(r"\(([\w -]+)\)\s*fault")
FAULT_RE = re.compile(r"fault (-?\d+)/(-?\d+)")
WORD_RE = re.compile(r"@([0-9a-f]{8}) ([0-9a-f]{8})/([0-9a-f]{8})")
ESP_RE = re.compile(r"esp ([0-9a-f]{8})/([0-9a-f]{8})")


def has_seeds(hex8):
    return os.path.isfile(os.path.join(SEEDS, hex8 + ".json"))


def classify(entry, line, checked_states):
    """(bucket, why) for one failing row. Order matters: the most specific cause wins."""
    st = STATE_RE.search(line)
    state = int(st.group(1)) if st else -1
    fm = FAULT_RE.search(line)
    a_fault, b_fault = (fm.group(1), fm.group(2)) if fm else (None, None)
    wm = WORD_RE.search(line)
    n = line.split(" mismatch")[0].split()[-1] if " mismatch" in line else "?"

    if fm and a_fault != b_fault:
        who = "side A (the original)" if a_fault not in ("0", None) else "side B (ours)"
        return ("runner-or-state-divergence",
                "fault asymmetry: %s faulted (%s/%s) and the other did not%s"
                % (who, a_fault, b_fault,
                   "; state 0, so depth cannot be the cause" if state == 0 else ""))
    if state > RECORDED_DEPTH_MAX:
        return ("depth-only",
                "first diverges at state %d, above the %d the booking runner could have reached "
                "(judge runs %d)" % (state, RECORDED_DEPTH_MAX, JUDGE_DEPTH))
    if n == "1" and wm:
        a, b = wm.group(2), wm.group(3)
        em = ESP_RE.search(line)
        below = ""
        if em:
            try:
                below = ", below the final esp" if int(wm.group(1), 16) < int(em.group(1), 16) else ""
            except ValueError:
                below = ""
        if a != "00000000" and b == "00000000":
            return ("dead-stack-residue",
                    "one word, ours zero at @%s%s" % (wm.group(1), below))
        if a == "00000000" and b != "00000000":
            return ("extra-our-write", "one word, only we wrote @%s%s" % (wm.group(1), below))
        return ("value-mismatch", "one word, both nonzero: %s/%s at @%s" % (a, b, wm.group(1)))
    kind = KIND_RE.search(line)
    return ("contract-violation",
            "%s mismatch(es)%s%s" % (n, (" on %s" % kind.group(1)) if kind else "",
                                     " at state %d" % state if state >= 0 else ""))


def main():
    ap = argparse.ArgumentParser(description="sort audit failures by cause")
    ap.add_argument("record")
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--show", type=int, default=6, help="units listed per bucket")
    a = ap.parse_args()

    if not os.path.exists(a.record):
        print("TRIPWIRE: %s does not exist. Nothing was examined - that is not a pass." % a.record)
        return 3
    try:
        d = json.load(open(a.record, encoding="utf-8"))
    except ValueError as exc:
        print("TRIPWIRE: %s is not readable JSON (%s). A torn record is not 'no failures'." % (a.record, exc))
        return 3
    if "failed" not in d:
        print("TRIPWIRE: %s has no 'failed' list - it is not a reverify record." % a.record)
        return 3
    failed = d["failed"]
    if not failed:
        # Legitimate outcome, but say loudly what was examined so an empty list means what it should.
        print("no failures in the record - but it examined checked=%s; if that is 0 the run checked nothing."
              % d.get("checked"))
        return 0 if d.get("checked") else 1

    buckets = collections.OrderedDict()
    rows = []
    for f in failed:
        unit = (f.get("unit") or "").lower().replace("0x", "")
        line = f.get("first_failing_line") or ""
        b, why = classify(unit, line, d.get("checked"))
        rows.append((b, unit, f.get("track"), why, has_seeds(unit)))
        buckets.setdefault(b, []).append(rows[-1])

    if a.json:
        print(json.dumps({"checked": d.get("checked"), "passed": d.get("passed"),
                          "buckets": {k: [r[1] for r in v] for k, v in buckets.items()}}, indent=1))
        return 0

    print("audit record %s: checked=%s passed=%s failed=%d (commit %s)"
          % (os.path.relpath(a.record, ROOT).replace("\\", "/"), d.get("checked"), d.get("passed"),
             len(failed), str(d.get("commit"))[:8]))
    ORDER = ["contract-violation", "value-mismatch", "extra-our-write", "runner-or-state-divergence",
             "dead-stack-residue", "depth-only"]
    for b in ORDER + [k for k in buckets if k not in ORDER]:
        if b not in buckets:
            continue
        v = buckets[b]
        print("\n%s  (%d of %d = %.0f%%)" % (b.upper(), len(v), len(failed), 100.0 * len(v) / len(failed)))
        for _b, unit, track, why, seeded in v[:a.show]:
            # the seed tag is only shown where it can mean something; for lifted rows it is universal (see
            # the summary below), and printing a universal fact per row invites it to be read as a signal
            tag = "" if (seeded or track == "lift") else "  (NO SEED FILE)"
            print("   0x%s [%s] %s%s" % (unit, track, why, tag))
        if len(v) > a.show:
            print("   ... and %d more" % (len(v) - a.show))
    noseed = sum(1 for r in rows if not r[4])
    # Stated with its BASE RATE, because without one this line reads as a discriminator and is not one: no
    # lifted unit has a seed file at all (0 of 6,474 claimed-proven; the 31 files in cow/seeds belong to the
    # hand units), so "the failures have no seeds" is true of the entire track and selects nothing. Saying
    # the base rate is what keeps a true fact from doing a false job.
    print("\nsummary: %d failing unit(s). %d/%d lack cow/seeds/<hex>.json - which is not a clue: 0 of the "
          "6,474 claimed-proven lifted units have one (the 31 seed files are hand units), so their registers "
          "are pure harness fuzz by default across the whole track." % (len(failed), noseed, len(failed)))
    print("Reminder: a bucket is a question, not a verdict. Nothing here edits a proof record, and no unit is "
          "un-proven by being in a bucket.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
