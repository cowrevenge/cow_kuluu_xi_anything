"""lift_regarg_census.py - who is affected by the register-argument veto, and can the count be trusted?

`gen_model._reads_before_write` decides whether ecx/edx arrive as arguments. Its write test

    pat_write = re.compile(r"(?m)^\\s*%s\\s*=\\s*\\(uint32_t\\)\\(" % reg)

recognises an assignment only when it OPENS a line, but the recompiler lowers many instructions into a
block whose first line already carries other statements, so `w` is None and the loop falls through to
`return True`. The register the entry only ever WRITES becomes an incoming argument, and the adapter
binds `param_1 = g->ecx` where the guest read `[esp+4]`.

This tool measures that population. It does NOT decide anything: it is the membership list that
`lift_regarg_gate.py` prices and `lift_relift_run.py` proves.

CAN THE ZERO BE TRUSTED? The classifier is tested before its count is printed, in both directions
(the standing rule on this box: never quote a number from a predicate not proven capable of firing):
READ cases must classify as read, WRITE cases as write-only, and if the classifier gets any of them
wrong the census refuses to print a population at all.

Run:  python tools/cow/ghidra/lift_regarg_census.py [--out build/scratch/regarg-census.json]
"""
import argparse
import glob
import io
import json
import os
import re
import sys
import time
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, HERE)

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

import gen_model as gm

BODY_RE = re.compile(r"^void\s+f_(10[0-9a-f]{6})\s*\(\s*Guest\s*\*\s*g\s*\)\s*$")


def occurrences(stmt, reg):
    """Every mention of `reg` with whether it is an l-value assignment target.

    Deliberately stricter than `gen_model.reg_never_read` needs to be, in the SAME direction: a mention
    this cannot classify as a clean assignment is a read. If the two ever disagree it is because this
    one said "read" and the veto stayed out of the way.
    """
    out = []
    for mm in re.finditer(r"\b%s\b" % reg, stmt):
        before = stmt[:mm.start()].rstrip()
        after = stmt[mm.end():]
        if before.endswith("->"):
            out.append(("read", mm.start()))
            continue
        if re.match(r"\s*=(?!=)", after) and not re.search(r"[+\-*/&|^%<>]$", before[-1:] or ""):
            out.append(("write", mm.start()))
        else:
            out.append(("read", mm.start()))
    return out


def classify_reg(stmts, reg):
    """'read' | 'write-only' | 'never-mentioned' for a register across a body's lowered statements."""
    mentions = 0
    for stmt in stmts:
        for kind, _ in occurrences(stmt, reg):
            mentions += 1
            if kind == "read":
                return "read", mentions
    return ("write-only" if mentions else "never-mentioned"), mentions


# ---------------------------------------------------------------- the classifier's own contract
CLASSIFY_CASES = [
    ("pop lowers to a mid-line assignment", ['{ uint32_t v = rd32(esp); esp += 4; ecx = (uint32_t)(v); }'], "ecx", "write-only"),
    ("plain mov into ecx", ['{ ecx = (uint32_t)(eax); }'], "ecx", "write-only"),
    ("mov FROM ecx is a read", ['{ eax = (uint32_t)(ecx); }'], "ecx", "read"),
    ("g->ecx is a read", ['    cow_bridge_x(g, g->ecx, 0u);'], "ecx", "read"),
    ("imul writes edx high half only", ['{ int64_t p = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;'
                                        ' eax = (uint32_t)p; edx = (uint32_t)((uint64_t)p >> 32); }'], "edx", "write-only"),
    ("lea into ecx is a write", ['{ ecx = (uint32_t)((esp + 0x10u)); }'], "ecx", "write-only"),
    ("cmp reads ecx", ['{ uint32_t a = ecx; uint32_t b = 4u; uint32_t r = (uint32_t)(a - b); }'], "ecx", "read"),
    ("self-modifying assign reads", ['{ ecx = (uint32_t)(ecx + 4u); }'], "ecx", "read"),
    ("unmentioned", ['{ eax = (uint32_t)(1u); }'], "ecx", "never-mentioned"),
    ("read AFTER a write is still a read", ['{ ecx = (uint32_t)(1u); }', '{ eax = (uint32_t)(ecx); }'], "ecx", "read"),
]


def selftest():
    bad = []
    fired = 0
    for label, stmts, reg, want in CLASSIFY_CASES:
        got, n = classify_reg(stmts, reg)
        if got != want:
            bad.append("%s: wanted %s got %s (%d mentions)" % (label, want, got, n))
        if want == "write-only" and got == "write-only":
            fired += 1
    if not fired:
        bad.append("the classifier never said write-only for any WRITE case: it CANNOT FIRE, so a"
                   " population of 0 would mean nothing")
    if bad:
        sys.exit("REFUSING: the classifier itself is wrong, so no count from it is quotable:\n  "
                 + "\n  ".join(bad))
    return len(CLASSIFY_CASES)


def bodies_in(path):
    with io.open(path, "r", encoding="utf-8", errors="replace") as fh:
        lines = fh.read().split("\n")
    i = 0
    while i < len(lines):
        mm = BODY_RE.match(lines[i])
        if mm:
            out, j = [], i + 1
            while j < len(lines) and lines[j] != "}":
                out.append(lines[j])
                j += 1
            yield mm.group(1), out
            i = j
        i += 1


def population():
    """{addr: [reg, ...]} - entries whose claimed ecx/edx argument the body never reads."""
    n = selftest()
    print("classifier self-test: %d/%d (the write-only verdict is reachable)" % (n, n))
    files = sorted(glob.glob(os.path.join(ROOT, "generated", "all", "funcs_*.c")))
    buckets = Counter()
    suspect = {}
    seen = 0
    t0 = time.time()
    for p in files:
        for addr, body in bodies_in(p):
            seen += 1
            m = gm.model_generated(body)
            claimed = list(m.get("reg_args") or []) if m.get("ok") else []
            stmts = [c["stmt"] for c in m.get("ins", [])]
            for reg in ("ecx", "edx"):
                verdict, _n = classify_reg(stmts, reg) if stmts else ("no-body", 0)
                buckets["%s/%s%s" % (reg, verdict,
                                     "-CLAIMED" if reg in claimed else "")] += 1
                if reg in claimed and verdict == "write-only":
                    suspect.setdefault(addr, []).append(reg)
    print("bodies: %d in %.1fs" % (seen, time.time() - t0))
    for k, v in sorted(buckets.items(), key=lambda kv: -kv[1]):
        print("%8d  %s" % (v, k))
    if not suspect:
        sys.exit("REFUSING: zero suspects over %d bodies, yet the classifier fires on the hand cases -"
                 " the two paths must have diverged, and a census that cannot see the shape it names is"
                 " worse than no census." % seen)
    return suspect


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=os.path.join(ROOT, "build", "scratch", "regarg-census.json"))
    a = ap.parse_args()
    suspect = population()
    lifted = {os.path.basename(f)[4:-2] for f in glob.glob(os.path.join(ROOT, "src", "lifted", "cow_*.c"))}
    # The pass/fail question goes through lift_proof_map, which refuses to answer unless it has first
    # retrieved a row for a unit it KNOWS is in the map. The first version of this line was
    # `proof.get("0x" + x)`, and because the map is keyed by BARE hex it returned None for all 21,891
    # lookups - a perfect zero that was really a key-format bug, and the number this tool used to argue
    # that the change was safe to attempt.
    import lift_proof_map as lpm
    proof = lpm.load_map()
    hits = [x for x in suspect if x in lifted]
    passing = [x for x in suspect if lpm.is_pass(proof, x)]
    print("\nSUSPECT entries (adapter invents a register argument the body only writes): %d"
          % len(suspect))
    print("  lifted today      : %d" % len(hits))
    print("  recorded pass=True in the map: %d" % len(passing))
    print("  (that count is NOT the safety argument. The map is a stack of bookings accumulated over")
    print("   many builds - 394 of its claimed-proven rows do not pass cowdiff today, which is the")
    print("   reason the loop is halted - and the first version of this line reported 0 for all 366")
    print('   because it looked up "0x"+a in a bare-hex map. Safety comes from proving the cohort twice')
    print("   in ONE build: the veto arm and a committed-bytes baseline, with byte-identical controls")
    print("   whose flips are the noise floor. See tools/cow/ghidra/lift_proof_noise.py.")
    parent = os.path.dirname(a.out)
    if parent:
        os.makedirs(parent, exist_ok=True)
    with io.open(a.out, "w", encoding="utf-8") as fh:
        json.dump({k: v for k, v in sorted(suspect.items())}, fh, indent=1)
    print("wrote %s" % a.out)
    print("\nnext: python tools/cow/ghidra/lift_regarg_gate.py --population %s" % a.out)


if __name__ == "__main__":
    main()
