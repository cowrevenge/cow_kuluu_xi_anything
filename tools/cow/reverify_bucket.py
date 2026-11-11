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


def classify(entry, line, checked_states, why=None):
    """(bucket, why) for one failing row. Order matters: the most specific cause wins."""
    # MASKED DETAIL IS NOT EVIDENCE. lift_proof masks the values in its per-row detail ("@# #/#",
    # "fault -#/-#") so that rows of the same SHAPE group - which is right for its table and fatal for this
    # classifier: without the words and addresses, every row falls through to contract-violation and the tool
    # reports "248 genuine conversion bugs" off a record that cannot say. So a masked row is bucketed by the
    # runner's own `why`, and told, not dressed up. To get a cause for those units, re-measure one with
    # `cowdiff.py --json`, which prints the unmasked per-state line.
    if "#" in line and ("@#" in line or "/#" in line or "-#" in line):
        return ("masked-detail(%s)" % (why or "unknown")), \
               "detail values are masked by the batch runner; grouped by its own why=%s - re-measure one with " \
               "cowdiff --json for a cause" % (why or "?")
    st = STATE_RE.search(line)
    state = int(st.group(1)) if st else -1
    fm = FAULT_RE.search(line)
    a_fault, b_fault = (fm.group(1), fm.group(2)) if fm else (None, None)
    wm = WORD_RE.search(line)
    n = line.split(" mismatch")[0].split()[-1] if " mismatch" in line else "?"

    # No mismatch COUNT means no comparison ever completed - that is a hang, a timeout, or a row the chunk
    # never reported, not a verdict about behaviour. Labelling these contract-violation would invent a
    # judgement the runner never made, which is the one thing this tool must not do.
    if n == "?" or (why or "").lower() in ("hang", "timeout", "no_row_output"):
        return ("no-verdict(%s)" % (why or "unreported")), \
               "the runner never compared this unit (%s) - no conclusion about the lift is available" % (
                   why or "no row")
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
        # NO esp claim here. The reverify record stores only the flat `COWDIFF FAIL ...` line, which has no
        # esp field, so an ESP_RE search against it matched nothing and the ", below the final esp" note this
        # branch used to append could never fire - a decoration that read like a checked fact. Whether the
        # word is below the entry's final esp is answered by tools/cow/cowdiff_deadstack_probe.py, which asks
        # the judge for its --json per-state line (that one does carry esp); it measured 3/3 of this family
        # below the final esp with both sides' esp agreeing.
        region = ""
        rm = re.search(r"x\d+\s+(\w+)", line)
        if rm:
            region = " region=%s" % rm.group(1)
        if a != "00000000" and b == "00000000":
            return ("dead-stack-residue",
                    "one word, ours zero at @%s%s (below-esp not established from this record - run "
                    "cowdiff_deadstack_probe)" % (wm.group(1), region))
        if a == "00000000" and b != "00000000":
            return ("extra-our-write", "one word, only we wrote @%s%s" % (wm.group(1), region))
        return ("value-mismatch", "one word, both nonzero: %s/%s at @%s%s"
                % (a, b, wm.group(1), region))
    kind = KIND_RE.search(line)
    return ("contract-violation",
            "%s mismatch(es)%s%s" % (n, (" on %s" % kind.group(1)) if kind else "",
                                     " at state %d" % state if state >= 0 else ""))


# --------------------------------------------------------------------------------------------- exemplars
# Units whose bucket was established by something OTHER than this classifier, so they can test it.
# The dead-stack six were measured 2026-11-11 by tools/cow/cowdiff_deadstack_probe.py: 6/6 came back with
# esp AGREEING on both sides (0x00993be4/0x00993be4), the differing single word BELOW the entry's final
# esp, and blocks covered - which is what makes this bucket a fact rather than a guess. The classifier
# cannot see esp at all (the audit record stores the flat FAIL line, which has no esp field), so without
# these exemplars a silent regex rot would relabel the whole family as `contract-violation` - the
# fall-through bucket - and 137 harness-scope rows would read like conversion bugs.
EXEMPLARS = [
    ("10010350", "dead-stack-residue"),
    ("10014c90", "dead-stack-residue"),
    ("100298d0", "dead-stack-residue"),
    ("100298f0", "dead-stack-residue"),
    ("10029930", "dead-stack-residue"),
    ("103134c6", "dead-stack-residue"),
    ("10010120", "depth-only"),
]

# How many exemplars must actually be present for a run to count as verified. Below this the
# check is vacuous, and a vacuous check is the failure mode this file keeps re-meeting.
EXEMPLARS_MIN_CHECKED = 4


def verify_exemplars(failed):
    """Refuse to proceed unless classify() reproduces every externally-established bucket."""
    by_unit = {}
    for row in failed:
        u = str(row.get("unit") or "").lower()
        by_unit[u[2:] if u.startswith("0x") else u] = row
    bad, checked, absent = [], 0, []
    for unit, want in EXEMPLARS:
        row = by_unit.get(unit)
        if row is None:
            absent.append(unit)
            continue
        checked += 1
        got, whytxt = classify(unit, row.get("first_failing_line") or "", None, row.get("why"))
        if got != want:
            bad.append("0x%s classified as %r (%s), expected %r"
                       % (unit, got, str(whytxt)[:70], want))
    if checked < EXEMPLARS_MIN_CHECKED:
        sys.exit("REFUSING: only %d of %d exemplars are present in this record (need >= %d), and %s. This"
                 " record is not one the tripwire can validate, so the buckets below would be unverified -"
                 " which is exactly the vacuous pass this tool exists to prevent. Run it against a record"
                 " that contains these units (a lift audit, cow/reverify.json)."
                 % (checked, len(EXEMPLARS), EXEMPLARS_MIN_CHECKED,
                    ("absent: " + ", ".join("0x" + u for u in absent)) if absent else "none absent"))
    if bad:
        for b in bad:
            print("EXEMPLAR FAILURE: %s" % b)
        sys.exit("REFUSING: %d exemplar(s) did not classify as established. Until that is fixed, every"
                 " bucket count this tool prints is suspect - a classifier that stopped matching falls"
                 " through to contract-violation, which looks exactly like a finding." % len(bad))
    print("exemplars: %d/%d present and classified as established by probe/by-eye"
          " evidence (%d absent from this record: %s)"
          % (checked, len(EXEMPLARS), len(absent),
             ", ".join("0x" + u for u in absent) or "-"))


def normalise(d):
    """Return (checked, passed, [ {unit, track, first_failing_line} ]) for EITHER record shape.

    Two tools write two shapes and both hold verdicts worth sorting:
      * `reverify.py`        -> {"checked":n,"passed":n,"failed":[{"unit","track","first_failing_line"}]}
      * `lift_proof.py`      -> {"<hex>": {"pass":bool,"why":str,"detail"/"raw":str}, ...} - a flat map, the
        shape that books the lifted population, and the one a released family's failures actually live in.
    Accepting only the first meant the tool could not answer the most common question ("what kind of failure
    is this batch?") without a hand-rolled probe each time, and hand-rolled probes are where miscounts hide.
    """
    if isinstance(d, dict) and "failed" in d:
        return d.get("checked"), d.get("passed"), [
            {"unit": f.get("unit"), "track": f.get("track") or "lift",
             "first_failing_line": f.get("first_failing_line") or ""} for f in (d["failed"] or [])]
    if isinstance(d, dict):
        inner = d.get("results") if isinstance(d.get("results"), dict) else d
        rows = [(k, v) for k, v in inner.items()
                if isinstance(v, dict) and "pass" in v]
        if not rows:
            return None, None, None
        failed = [{"unit": "0x" + k, "track": "lift",
                   "why": v.get("why") or "",
                   "first_failing_line": (v.get("detail") or v.get("raw") or v.get("why") or "")}
                  for k, v in rows if v.get("pass") is not True]
        return len(rows), len(rows) - len(failed), failed
    return None, None, None


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
    checked, passed, failed = normalise(d)
    if failed is None:
        print("TRIPWIRE: %s is neither a reverify record (needs 'failed') nor a lift_proof record (needs "
              "per-hex rows with 'pass'). Refusing to report a bucket census off an unknown shape." % a.record)
        return 3
    if not failed:
        # Legitimate outcome, but say loudly what was examined so an empty list means what it should.
        print("no failures in the record - but it examined checked=%s; if that is 0 the run checked nothing."
              % checked)
        return 0 if checked else 1

    # Before any bucket is printed: the classifier must still reproduce the buckets that were established
    # by measurement outside this file.
    verify_exemplars(failed)

    buckets = collections.OrderedDict()
    rows = []
    for f in failed:
        unit = (f.get("unit") or "").lower().replace("0x", "")
        line = f.get("first_failing_line") or ""
        b, why = classify(unit, line, d.get("checked"), why=f.get("why"))
        rows.append((b, unit, f.get("track"), why, has_seeds(unit)))
        buckets.setdefault(b, []).append(rows[-1])

    if a.json:
        print(json.dumps({"checked": d.get("checked"), "passed": d.get("passed"),
                          "buckets": {k: [r[1] for r in v] for k, v in buckets.items()}}, indent=1))
        return 0

    print("record %s: checked=%s passed=%s failed=%d (commit %s)"
          % (os.path.relpath(a.record, ROOT).replace("\\", "/"), checked, passed,
             len(failed), str(d.get("commit"))[:8] if d.get("commit") else "-"))
    ORDER = ["contract-violation", "value-mismatch", "extra-our-write", "runner-or-state-divergence",
             "dead-stack-residue", "depth-only"]
    # ORDER first (the causes that mean something for a reverify record), then everything else BY SIZE - the
    # masked-detail buckets from a lift_proof record land here, and printing them in arbitrary row order made
    # the dominant mechanism hard to see, which is the whole reason to bucket.
    rest = sorted((k for k in buckets if k not in ORDER), key=lambda k: -len(buckets[k]))
    for b in ORDER + rest:
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
