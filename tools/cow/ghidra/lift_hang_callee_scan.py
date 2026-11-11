"""Do the genuinely-spinning no-answer units share a callee?

The chunk-of-one experiment left 6 units that do not return even alone. Three sit at 0x10327840 /
0x10327c58 / 0x103280b8, and 0x10327850 is already booked as one of the 9 `timeout` rows - several spins
with three inside ~800 bytes of each other next to a sixth slow unit is not six unrelated loops, that is
the shape of a shared callee: one bridge into not-yet-lifted code that every one of them parks in.

This is the cheap test before the expensive one (running a unit under a trace). It reads what each unit
CALLS from two places: our lifted file (`cow_bridge_tail_<addr>` / `cow_bridge_call_<addr>`, what
lift.py emits for a jump or call into not-yet-lifted code) and the generated original
(`{ REGS_STORE; f_10316337(g); return; }` thunks and plain `f_<addr>(g)` calls). A target common to the
spinners but NOT to control units that answer fine is the suspect.

Two dead filters taught the shape of this file. The first run used `cow_bridge_call_` only, so the tail
spelling was invisible and every unit appeared to call nothing; its `cow_lift_<addr>(` alternative
matched the unit's own definition, so each unit "called itself" and the intersection was vacuously
empty - and the tool still printed "NO SHARED CALLEE", which reads exactly like a finding. The second
run scanned generated/ per unit with a hand-written definition regex that never entered a body, again
reporting silence as absence. So: one corpus pass with the regex the census already proves, targets
required to be NON-EMPTY across the population before any "nothing shared" may be printed, and
`CALL-FREE` named as its own honest outcome - a unit that calls nothing cannot share a callee, it
spins in its own body, and that is a different defect with a different owner.
"""
import collections
import glob
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_frame_predicates as FP  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
GEN = os.path.join(ROOT, "generated", "all")
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

# the census's proven definition regex (generated/all uses `void f_<addr>(Guest* g)`)
FUNC_RE = re.compile(r"^\s*(?:void|unsigned|int|char|float|double|CowU32|CowU8|CowU16)\s+f_([0-9a-f]{8})\s*\(")
GEN_CALL = re.compile(r"\bf_([0-9a-f]{8})\s*\(\s*g\s*\)")
OURS_CALL = re.compile(r"cow_bridge(?:_tail|_call|_import)?_([0-9a-f]{8})")

SPINNERS = ["10327840", "10327c58", "103280b8", "100eab80", "10260af0", "102ef252"]
KNOWN_TAIL_TARGET = "10316337"   # read off src/lifted/cow_10327840.c by eye: cow_bridge_tail_10316337


def gen_targets():
    """addr -> set of f_<hex>(g) targets, one pass over generated/all/funcs_*.c."""
    out = collections.defaultdict(set)
    for path in sorted(glob.glob(os.path.join(GEN, "funcs_*.c"))):
        cur = None
        with io.open(path, encoding="utf-8", errors="replace") as fh:
            for line in fh:
                m = FUNC_RE.match(line)
                if m:
                    cur = m.group(1)
                    continue
                if cur is not None:
                    for x in GEN_CALL.findall(line):
                        if x != cur:
                            out[cur].add(x)
    return out


def main():
    if "--callers" in sys.argv:
        # who jumps into a given address, corpus-wide: the number that turns "a suspect" into "how
        # many rows does fixing this actually move"
        t = sys.argv[sys.argv.index("--callers") + 1].lower().replace("0x", "")
        gt = gen_targets()
        if not gt:
            sys.exit("REFUSING: the generated scan found no call targets anywhere")
        callers = sorted(a for a, s in gt.items() if t in s)
        with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
            d = json.load(fh)
        rows = [a for a in callers if a in d]
        print("f_%s is called by %d unit(s) in generated/all; %d of them have a ledger row"
              % (t, len(callers), len(rows)))
        tally = collections.Counter(("PASS" if d[a].get("pass") else (d[a].get("why") or "?")) for a in rows)
        print("  their ledger verdicts: %s" % (dict(tally.most_common()) or "-"))
        lifted_here = [a for a in callers if FP.read_unit(a)]
        print("  callers that are themselves machine-lifted: %d" % len(lifted_here))
        print("  is f_%s itself lifted? %s" % (t, "yes" if FP.read_unit(t) else "NO"))
        print("  e.g. %s" % ", ".join("0x" + a for a in callers[:10]))
        return

    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    gt = gen_targets()
    if not gt:
        sys.exit("REFUSING: the generated scan found no call targets anywhere - the predicate is dead, "
                 "and 'nothing shared' from it would be a lie")

    neighbours = sorted(k for k in d if k.startswith("1032") and k not in set(SPINNERS))[:30]
    if len(neighbours) < 5:
        sys.exit("REFUSING: no control units near the spinners - 'shared' would be meaningless")

    print("=" * 100)
    print("do the real spinners share a callee?")
    print("=" * 100)

    per = {}
    for a in SPINNERS:
        ours = set(x for x in OURS_CALL.findall(FP.read_unit(a)) if x != a)
        gen = set(gt.get(a) or ())
        per[a] = ours | gen
        print("  0x%s   ours->%s  gen->%s" % (a, sorted(ours) or "-", sorted(gen) or "-"))

    # capability: the exemplar somebody read by eye must be visible, or the scan proves nothing
    if KNOWN_TAIL_TARGET not in per.get("10327840", set()):
        sys.exit("REFUSING: %s does not show cow_bridge_tail_%s for 0x10327840, which is in the file "
                 "and was read by eye - the target predicates are dead" % ("the scan", KNOWN_TAIL_TARGET))
    print("tripwire: 0x10327840 -> f_%s seen through both spellings - the scan can fire" % KNOWN_TAIL_TARGET)

    call_free = [a for a in SPINNERS if not per[a]]
    if len(call_free) == len(SPINNERS):
        sys.exit("REFUSING: every spinner is call-free AND the generated scan is proven able to fire - "
                 "impossible; go read a file")
    if call_free:
        print("  CALL-FREE (spin in their own body, cannot share a callee): %s"
              % ", ".join("0x" + a for a in call_free))

    ctrl = collections.Counter()
    for a in neighbours:
        for x in (set(gt.get(a) or ()) | set(x for x in OURS_CALL.findall(FP.read_unit(a)) if x != a)):
            ctrl[x] += 1

    active = [a for a in SPINNERS if per[a]]
    common = set.intersection(*[per[a] for a in active]) if active else set()
    pair = collections.Counter()
    for i, a in enumerate(active):
        for b in active[i + 1:]:
            for x in per[a] & per[b]:
                pair[x] += 1

    print()
    print("  common to ALL call-bearing spinners (%d): %s"
          % (len(active), sorted(common) or "nothing"))
    print("  pairwise shares (>=2 of the %d pairs):" % (len(active) * (len(active) - 1) // 2))
    shared = [(x, c) for x, c in pair.most_common(12) if c >= 2]
    if not shared:
        print("    nothing")
    thresh = max(2, int(0.6 * len(neighbours)))
    for x, c in shared:
        n_ctrl = ctrl.get(x, 0)
        tag = "   <-- also in %d/%d control units: the weather, not a lead" % (n_ctrl, len(neighbours)) \
            if n_ctrl >= thresh else ""
        print("    f_%s  in %d pair(s), control: %d%s" % (x, c, n_ctrl, tag))

    leads = [(x, c) for x, c in shared if ctrl.get(x, 0) < thresh]
    print()
    if leads:
        for x, c in leads:
            verdict = d.get(x) or {}
            print("  SUSPECT f_%s: shared by %d pair(s) of spinners, called by only %d/%d control units."
                  % (x, c, ctrl.get(x, 0), len(neighbours)))
            print("     its own ledger row: %s"
                  % ("ABSENT (not lifted/proven)" if not verdict else
                     ("PASS" if verdict.get("pass") else "fail: " + str(verdict.get("why")))))
        print("  That is the shared-callee answer: these are not six independent loops. Read what f_%s"
              % leads[0][0])
        print("  does (its lifted file and its generated body) before anything else on this group.")
    else:
        print("  NO SHARED CALLEE once control-called helpers are excluded and the scan is proven able")
        print("  to fire. The shared-callee idea is dead for this sample: separate spins, and the group")
        print("  needs the expensive test (one unit under a trace), not this cheap one.")


if __name__ == "__main__":
    main()
