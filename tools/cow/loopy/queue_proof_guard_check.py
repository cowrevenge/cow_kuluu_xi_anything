"""queue_proof_guard_check.py - does the queue really refuse to rank when the verdict record is unreadable?

    python tools/cow/loopy/queue_proof_guard_check.py

WHY THIS FILE EXISTS. `patterns()` had a guard for an unreadable REFUSAL snapshot (it hands out the
regeneration instead of ranking half a population) and NO guard for the other half. If `load_proof` returns
`({}, "unreadable")` - which is what happens when a reader arrives while a multi-hour `lift_proof` run is
rewriting `cow/lift_proof_all.json` between chunks, because the writes were not atomic - then every failure
group silently disappears, `lifted_proven` reports 0, and `usable` stayed True on the strength of the refusal
rows alone. "Nothing is failing" and "I could not look" produced the same output, and the loop would have
acted on the difference.

A guard that has never been seen to fire is a hypothesis, so this drives the module three ways:

  control  a readable record must rank normally and NOT block - an over-refusing guard gets deleted rather
           than fixed, which is how the last one failed;
  torn     a file that exists but does not parse must BLOCK and must rank no failure groups at all;
  absent   a missing record while src/lifted is full must BLOCK, not report a clean tree.

It never touches the live ledger: patterns.PROOF_ALL is repointed at a temp file for the duration. The real
record is being written by a running proof batch, and "let me corrupt the file to test the handling" against
a file somebody else is publishing is how verdicts get destroyed.
"""
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))                    # tools/cow/loopy
# THREE levels up, not two: HERE is tools/cow/loopy, so dirname(dirname(HERE)) is <repo>\tools and
# `src/lifted` under it does not exist. The first version of this file did exactly that, printed
# "lifted files on disk: 0", and its absent-record case then skipped both assertions as vacuous and the
# whole check reported OK while testing nothing. A green line from a check whose own counter reads 0 is the
# failure this loop has been bitten by repeatedly - when a case is guarded by "only if we found some", the
# count is part of the verdict, so assert it below rather than trusting the exit code.
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import patterns                                                       # noqa: E402

REAL = patterns.PROOF_ALL
TMP = os.path.join(ROOT, "build", "queue_proof_guard_fixture.json")
LIFTED = os.path.join(ROOT, "src", "lifted")


def _run(setup):
    setup()
    patterns.PROOF_ALL = TMP
    try:
        return patterns.patterns()
    finally:
        patterns.PROOF_ALL = REAL


def _good():
    with open(TMP, "w", encoding="utf-8") as fh:
        json.dump({"results": {"100083b0": {"pass": True},
                               "10004d80": {"pass": False, "why": "memory"},
                               "100013c0": {"pass": False, "why": "memory"}}}, fh)


def _torn():
    # exactly what a reader sees arriving mid-json.dump: the file is there and it is not a document
    with open(TMP, "w", encoding="utf-8") as fh:
        fh.write('{"results": {"100083b0": {"pass": tr')


def _gone():
    if os.path.exists(TMP):
        os.remove(TMP)


def main():
    problems = []
    try:
        r = _run(_good)
        memory = [p for p in r["patterns"] if p.get("pattern") == "memory"]
        if r["blocker"] is not None:
            problems.append("readable record BLOCKED (%s): a guard that over-refuses gets deleted"
                            % r["blocker"].get("kind"))
        if not memory:
            problems.append("readable record ranked no `memory` group although the fixture has 2 rows")
        if not r["usable"]:
            problems.append("readable record reported usable=False")
        print("control (readable): usable=%s blocker=%s memory_rows=%d proven=%d"
              % (r["usable"], r["blocker"], len(memory), r["lifted_proven"]))

        r2 = _run(_torn)
        print("torn record:        usable=%s blocker=%s"
              % (r2["usable"], (r2["blocker"] or {}).get("kind")))
        if [p for p in r2["patterns"] if p.get("kind") == "failure"]:
            problems.append("torn record still ranked failure groups - the empty-list lie survived")
        if r2["usable"]:
            problems.append("TORN RECORD STILL USABLE - the guard is decorative")
        if (r2["blocker"] or {}).get("kind") != "wait-for-proof":
            problems.append("torn record produced no wait-for-proof blocker (got %r)" % r2["blocker"])

        lifted = len([f for f in os.listdir(LIFTED) if f.endswith(".c")]) if os.path.isdir(LIFTED) else 0
        r3 = _run(_gone)
        print("absent record:      usable=%s blocker=%s (lifted files on disk: %d)"
              % (r3["usable"], (r3["blocker"] or {}).get("kind"), lifted))
        # ZERO lifted files is not a pass, it is this check losing its own footing (a wrong ROOT does it).
        # Guarding the assertions with "only if we found some" is what let a mispathed ROOT turn this case
        # into a no-op that still printed OK, so the count is asserted, not merely used.
        if lifted == 0:
            problems.append("found 0 lifted files under %s - the absent-record case cannot prove anything "
                            "from here, so it is not a pass" % LIFTED)
        if lifted and r3["usable"]:
            problems.append("record absent while %d lifted files exist, yet usable=True" % lifted)
        if lifted and (r3["blocker"] or {}).get("kind") != "wait-for-proof":
            problems.append("absent record with lifted files on disk did not block")
    finally:
        patterns.PROOF_ALL = REAL
        if os.path.exists(TMP):
            os.remove(TMP)

    if problems:
        for p in problems:
            print("FAIL: " + p)
        return 1
    print("\nOK: readable ranks, torn blocks, absent-with-files blocks - the guard fires when it should and "
          "stays out of the way when it should not.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
