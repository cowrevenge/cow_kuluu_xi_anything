"""lift_frame_escape.py - name the class where a Ghidra frame LOCAL becomes host memory that guest code is
handed a pointer to.

    python tools/cow/ghidra/lift_frame_escape.py                  # all memory rows
    python tools/cow/ghidra/lift_frame_escape.py --list FILE      # one shape from lift_frameshift.py
    python tools/cow/ghidra/lift_frame_escape.py --proven         # the units cowdiff calls PROVEN
    python tools/cow/ghidra/lift_frame_escape.py --selftest       # the detector must find the case read by eye

THE BUG, found by reading 0x1000b3f0 with its generated body beside it. The guest said:

    1000b3f4  sub esp, 0x10        ; sixteen bytes of guest stack locals
    1000b3fb  lea ecx, [esp + 8]   ; a POINTER INTO ITS OWN FRAME
    1000b3ff  call 0x100397a0      ; and pushed ecx

Ghidra turns that frame into a local, the lift keeps the local as a host C array (`CowU8 auStack_10[16];`),
and the array NAME then reaches a bridge argument list - so the callee is handed the HOST address of a C
array where the guest's stack address belongs. The original's callee writes 16 guest bytes; ours writes
somewhere in the process.

WHY PROOF DOES NOT CATCH IT: the differential compares guest memory. If the callee does not write through
the pointer in the states that get exercised - or is an import the harness answers without looking - both
sides agree on guest memory and the row passes. Measured: 15 `memory` rows carry an escape AND **6 units the
record calls proven** carry one too, so "it passed cowdiff" is not evidence about this class. It is the same
position the image-rebase bug was in (the harness maps at the preferred base, RD == 0): a correctness
dimension with no coverage, fixable only by matching what the guest did and pinning it with contract cases.

WHY IT IS A REFUSAL CANDIDATE AND NOT YET ONE: the honest fix is to bind such a local to the guest stack
address the adapter already reserves (`g->esp -= 0x10u; /* locals */`), which is per-frame-offset work - the
same problem the string family parks under `operand_stack_frame` (431 refused). Refusing instead would pull
6 proven units out of the population, so the decision needs the fix in hand, not a reflex. This tool exists
so whoever picks it up starts from a measured count instead of a hunch.

FIFTH MEETING OF THE SAME TOOLING FAILURE, and the reason --selftest is mandatory here: the first version's
bridge pattern required `const CowU32 *)` when the real spelling is `const CowU32[])`. It matched NOTHING and
reported 0 escapes across 196 units - including the one whose escape had just been read on a screen a moment
earlier. A census that reports zero for a bug you have seen is a bug in the census.
"""
import argparse
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
PROOF_ALL = os.path.join(ROOT, "cow", "lift_proof_all.json")
LIFTED = os.path.join(ROOT, "src", "lifted")

# a host array standing in for a piece of the guest frame
ARR = re.compile(r"^\s*(?:CowU8|CowU16|CowU32|CowU64|uint8_t|uint32_t|char|int)\s+(\w+)\s*\[\s*(\d+)\s*\]\s*;",
                 re.M)
# the bridge's pushed-argument list: (const CowU32[]){ a, b, ... }
BRIDGE_ARGS = re.compile(
    r"cow_bridge_\w+\([^;]*?\bconst\s+CowU32\s*(?:\[\s*\]|\*)\s*\)\s*\{([^}]*)\}", re.S)
ACCESS_OPEN = re.compile(r"\b(?:rd|wr)f?(?:8|16|32|64)\s*\(")

# the unit this whole file exists because of (read by eye, 2026-11-09)
CASE_UNIT = "1000b3f0"
CASE_NAME = "auStack_10"


def access_first_args(code):
    """Text of the first argument of every rd*/wr* call - the position that must be a GUEST address."""
    out = []
    for m in ACCESS_OPEN.finditer(code):
        i, depth, start = m.end(), 1, m.end()
        while i < len(code) and depth:
            if code[i] == "(":
                depth += 1
            elif code[i] == ")":
                depth -= 1
                if depth == 0:
                    break
            i += 1
        inner = code[start:i]
        d, j = 0, 0
        while j < len(inner):
            ch = inner[j]
            if ch == "(":
                d += 1
            elif ch == ")":
                d -= 1
            elif ch == "," and d == 0:
                break
            j += 1
        out.append(inner[:j])
    return out


def escapes(text):
    """[(kind, name)] for every host-array name that reaches a guest-facing position in this lifted body."""
    body = text.split("COW_LIFTED BEGIN")[-1].split("COW_LIFTED END")[0]
    code = re.sub(r"/\*.*?\*/", " ", body, flags=re.S)
    names = [n for n, _sz in ARR.findall(code)]
    if not names:
        return []
    found = []
    for arg in access_first_args(code):
        for n in names:
            if re.search(r"\b%s\b" % re.escape(n), arg):
                found.append(("access-address", n))
    for m in BRIDGE_ARGS.finditer(code):
        for n in names:
            if re.search(r"\b%s\b" % re.escape(n), m.group(1)):
                found.append(("pushed-argument", n))
    # order-stable de-duplication: a name used twice is one escape of that kind, not two rows
    seen, out = set(), []
    for item in found:
        if item not in seen:
            seen.add(item)
            out.append(item)
    return out


def load_proof():
    with open(PROOF_ALL, encoding="utf-8") as fh:
        d = json.load(fh)
    return d.get("results", d)


def scan(addrs):
    hits = []
    with_arrays = 0
    for k in addrs:
        path = os.path.join(LIFTED, "cow_%s.c" % k)
        if not os.path.exists(path):
            continue
        with open(path, encoding="utf-8", errors="replace") as fh:
            txt = fh.read()
        names = [n for n, _ in ARR.findall(re.sub(r"/\*.*?\*/", " ",
                                                  txt.split("COW_LIFTED BEGIN")[-1]
                                                  .split("COW_LIFTED END")[0], flags=re.S))]
        if names:
            with_arrays += 1
        e = escapes(txt)
        if e:
            hits.append((k, e))
    return with_arrays, hits


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--list", default="", help="file of entries (e.g. from lift_frameshift --list SHAPE)")
    ap.add_argument("--proven", action="store_true", help="scan the PROVEN population instead")
    ap.add_argument("--why", default="memory", help="failure group to scan (ignored with --list/--proven)")
    ap.add_argument("--all-failing", action="store_true")
    ap.add_argument("--out", default="")
    ap.add_argument("--selftest", action="store_true")
    a = ap.parse_args()

    if a.selftest:
        path = os.path.join(LIFTED, "cow_%s.c" % CASE_UNIT)
        if not os.path.exists(path):
            print("SELFTEST: %s has no lifted file today; the case it pins is gone with the unit" % CASE_UNIT)
            return 0
        with open(path, encoding="utf-8", errors="replace") as fh:
            e = escapes(fh.read())
        if not any(n == CASE_NAME for _kind, n in e):
            print("SELFTEST FAILED: 0x%s is the unit this detector was written FROM and it does not see %s "
                  "(found %r). The pattern has drifted - do not trust any count from it."
                  % (CASE_UNIT, CASE_NAME, e))
            return 1
        print("SELFTEST ok: 0x%s -> %r" % (CASE_UNIT, e))
        return 0

    proof = load_proof()
    if a.list:
        addrs = [l.strip().lower().replace("0x", "") for l in open(a.list) if l.strip()]
        scope = "list %s" % os.path.basename(a.list)
    elif a.proven:
        addrs = [k for k, v in proof.items() if v.get("pass") is True]
        scope = "PROVEN population"
    elif a.all_failing:
        addrs = [k for k, v in proof.items() if v.get("pass") is not True]
        scope = "all failing rows"
    else:
        addrs = [k for k, v in proof.items()
                 if v.get("pass") is not True and str(v.get("why")) == a.why]
        scope = "why=%s" % a.why

    if not addrs:
        print("nothing to scan for scope %r" % scope)
        return 2

    # TRIPWIRE, run before any number is printed. The case this detector was written from must still be
    # visible to it; a dead pattern that reports 0 across the whole population is exactly how a real class
    # gets written off (it happened here on the first attempt, with `const CowU32 *)` instead of `[]`). If the
    # unit ever stops being lifted, that is said out loud rather than silently removing the guard.
    pinned_path = os.path.join(LIFTED, "cow_%s.c" % CASE_UNIT)
    if os.path.exists(pinned_path):
        with open(pinned_path, encoding="utf-8", errors="replace") as fh:
            pinned = escapes(fh.read())
        if not any(n == CASE_NAME for _kind, n in pinned):
            print("REFUSING to report: the pinned case 0x%s (%s) is NOT detected (%r). The pattern has "
                  "drifted from the code it describes; fix the detector before believing a count."
                  % (CASE_UNIT, CASE_NAME, pinned))
            return 2
    else:
        print("note: the pinned case 0x%s has no lifted file today, so this run has NO tripwire against a "
              "dead pattern (it was refused or re-rolled since the detector was written)" % CASE_UNIT)

    with_arrays, hits = scan(addrs)
    kinds = collections.Counter(tuple(sorted({kind for kind, _n in e})) for _k, e in hits)
    print("scope: %s  (%d units scanned)" % (scope, len(addrs)))
    print("  declare a host array standing in for the frame : %d" % with_arrays)
    print("  ... whose address reaches a guest-facing spot  : %d" % len(hits))
    for ks, c in kinds.most_common(5):
        print("      %-32s %d" % ("+".join(ks), c))
    for k, e in hits[:12]:
        print("   0x%s   %s" % (k, "; ".join("%s:%s" % it for it in e)[:80]))
    if a.out:
        with open(a.out, "w", encoding="utf-8") as fh:
            for k, _e in hits:
                fh.write("0x%s\n" % k)
        print("wrote %d -> %s" % (len(hits), a.out))
    return 0


if __name__ == "__main__":
    sys.exit(main())
