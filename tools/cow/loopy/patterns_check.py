"""Integrity check for the lift pattern queue (tools/cow/loopy/patterns.py).

    python tools/cow/loopy/patterns_check.py

WHY THIS FILE EXISTS. Every number in the queue is hand-maintained prose, and the queue is what decides
where the next turn of the loop is spent. Two failures have already happened and both were invisible to
the interpreter:

  * A replaced action string left the REPLACED text's tail behind as an adjacent string literal. Python
    concatenates adjacent literals, so the module imported fine, the entry looked updated, and a future
    session would have been told to do the old, disproved thing after the new one. Detecting that needs a
    RETIRED list, because nothing about the file is malformed when it happens.
  * A key that does not match any refusal reason or failure group is dead text: it reads as research that
    shipped, and no one ever sees it because `family_of` never returns it. So reachability is checked
    against the live snapshots, not against the file.

Every case here increments `failed`, so the "N/N" line cannot be earned by a suite that asserts nothing.
"""
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)

# `import patterns` is deliberately NOT here. This file once had it at module scope, and that made the very
# check below unreachable: if patterns.py does not parse, the import raises before main() runs, so the run
# dies with a traceback and no clause reports anything - it exits non-zero by accident, not by judgement,
# and says nothing about which artifact is broken. The source is compiled FIRST, then imported inside main().
#
# The stale-__pycache__ story I first wrote here was also wrong, and the verification said so: Python
# invalidates a .pyc by source mtime/size, so a broken file is recompiled and the import raises. The way a
# broken patterns.py actually reached origin was that the SyntaxError DID appear - in the output of my own
# probe command - and I read it as a PowerShell quoting artifact instead of as a verdict about the file. A
# traceback that names the target file is a finding about the file, never about my shell.

EXPECTED_ENTRIES = 15

# Sentences that were replaced by better measurements. Each must appear NOWHERE in the queue. The rule for
# anyone editing an action: put the clause you are retiring in this list in the same commit. Adjacent
# literals make a stale tail invisible to Python, so this list is the only thing that sees it.
RETIRED = [
    # replaced 2026-11-09 by the measured intra-body-tail-call action
    "names the call sites that fell through every bridge rule",
    # removed 2026-11-09: the number came from a different census and was never verified against the
    # units that actually go through TAIL_ADAPTER_TMPL
    "557 units through it",
]

failed = []
ran = [0]


def check(what, cond, detail=""):
    ran[0] += 1
    if not cond:
        failed.append("%s%s" % (what, (" - " + detail) if detail else ""))


def main():
    # ---- clause 0: does the FILE parse? Read it, compile it, do not trust `import`.
    #
    # This clause exists because a broken patterns.py was COMMITTED AND PUSHED. The SyntaxError did surface -
    # in the output of a probe command of mine - and I filed it as "PowerShell quoting is being annoying"
    # instead of reading it as a verdict about the file, then went on to commit. So: nothing in this check is
    # allowed to interpret the queue before this line has compiled the bytes on disk and said out loud which
    # file it judged.
    src_path = os.path.join(HERE, "patterns.py")
    with open(src_path, encoding="utf-8") as fh:
        source = fh.read()
    try:
        compile(source, src_path, "exec")
        check("patterns.py compiles from source", True)
    except SyntaxError as exc:
        check("patterns.py compiles from source", False,
              "line %s: %s" % (exc.lineno, (exc.text or "").strip()[:70]))
        print("\nFAILED: the queue file does not even parse (line %s). Nothing else here can be trusted: "
              "read the traceback as a verdict about THIS file, not as noise from the command that ran it."
              % exc.lineno)
        return 1

    # Only now is the artifact safe to import: it has been compiled from the bytes on disk, so nothing below
    # can be answered by a module loaded from a different version of this file.
    import patterns                                     # noqa: E402
    ROOT = patterns.ROOT

    fams = patterns.FAMILIES
    keys = [k for k, _ in fams]

    # ---- clause 1: shape. The count is pinned so a silently-duplicated or dropped entry is a finding.
    check("FAMILIES has %d entries" % EXPECTED_ENTRIES, len(fams) == EXPECTED_ENTRIES, str(len(fams)))
    check("keys are unique", len(set(keys)) == len(keys),
          str([k for k in keys if keys.count(k) > 1]))

    # ---- clause 2: every action is one line of prose that says where to look. The word "file" is
    # deliberately loose: the queue's own vocabulary is module names WITHOUT suffixes (`gen_model`,
    # `ghidra_c`, `the bridges`), which an extension-only regex called unactionable - a check that fails
    # the queue for its own narrowness trains people to delete the clause.
    WHERERE = re.compile(r"[\w/]+\.(?:py|c|h)\b|\b(?:gen_model|ghidra_c|lift|cowdiff|lift_proof|bridges?"
                         r"|adapter|runtime|cow_bridge\w*|_callee_read|tail_jump_of|return_values|"
                         r"ADAPTER_TMPL|string_shape|_push_values)\b")
    for k, v in fams:
        check("%s: action is a str" % k, isinstance(v, str), type(v).__name__)
        if isinstance(v, str):
            check("%s: action is single-line" % k, "\n" not in v)
            check("%s: action is not empty" % k, len(v.strip()) > 40, "%d chars" % len(v.strip()))
            check("%s: action says where to look" % k, WHERERE.search(v) is not None,
                  "names no file or module - an action nobody can start from")

    # ---- clause 3: no two actions are the same. Identical text is copy-paste, and copy-paste in a queue
    # is how a measurement meant for one family gets believed about another.
    seen = {}
    for k, v in fams:
        if isinstance(v, str):
            check("%s: action is not shared with %s" % (k, seen.get(v, "?")), v not in seen,
                  seen.get(v, ""))
            seen.setdefault(v, k)

    # ---- clause 4: retired prose must be gone, see RETIRED above.
    for bad in RETIRED:
        hits = [k for k, v in fams if isinstance(v, str) and bad in v]
        check("retired sentence absent: %r" % bad[:48], not hits, str(hits))

    # ---- clause 5: reachability. A key that matches nothing is dead research. Checked against the live
    # snapshots; if a snapshot is absent that half is skipped and SAYS SO rather than passing quietly.
    reasons, skipped = [], []
    if os.path.exists(patterns.REFUSALS):
        with open(patterns.REFUSALS, encoding="utf-8") as fh:
            for reason in json.load(fh).values():
                if isinstance(reason, dict):
                    reason = reason.get("reason") or str(reason)
                reasons.append(str(reason))
    else:
        skipped.append("refusals snapshot absent")
    if os.path.exists(patterns.PROOF_ALL):
        try:
            with open(patterns.PROOF_ALL, encoding="utf-8") as fh:
                d = json.load(fh)
            for v in (d.get("results", d) or {}).values():
                if v.get("pass") is not True:
                    reasons.append(str(v.get("why") or "ungrouped"))
        except (ValueError, OSError) as exc:
            skipped.append("proof unreadable (%s)" % exc)
    else:
        skipped.append("proof record absent")

    if reasons:
        # A key that matches nothing is dead research UNLESS the code can still produce that name: families
        # legitimately go to zero when they are fixed (`doubled_accessor` 32 -> 0 the day before this was
        # written), and deleting their prose on every zero would throw away the measurement. So the test is
        # "reachable in the snapshot, OR spelled in the lifter/proof sources", not "nonzero today".
        vocab = ""
        for rel in list(patterns.LIFTER_FILES) + ["tools/cow/ghidra/lift_proof.py",
                                                  "tools/cow/ghidra/lift_run.py"]:
            p = os.path.join(ROOT, rel)
            if os.path.exists(p):
                with open(p, encoding="utf-8", errors="replace") as fh:
                    vocab += fh.read()
        # whole-word, so a key like `eax` cannot be made to look reachable by the substring inside `eax_in`
        dead = [k for k in keys
                if not any(r.startswith(k) for r in reasons)
                and not re.search(r"\b%s\b" % re.escape(k), vocab)]
        check("every queue key is reachable or spelled in the sources", not dead, str(dead))
    for s in skipped:
        print("note: reachability half-skipped: %s" % s)

    if failed:
        print("\nFAILED %d of %d cases:" % (len(failed), ran[0]))
        for f in failed:
            print("  - " + f)
        return 1
    print("OK: %d/%d queue integrity cases pass (%d entries)" % (ran[0], ran[0], len(fams)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
