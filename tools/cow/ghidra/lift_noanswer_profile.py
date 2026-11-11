"""Characterise the 331 rows that produced NO ANSWER (hang / no_row_output), against a baseline.

`hang` (211) and `no_row_output` (120) are not failures of the lift - the harness never returned a verdict,
so the population has 331 units whose proof is simply missing, and lift_proof itself refuses to count
them as graded. They are the third-largest group in the failing record and the only one where the fix
might not be in the lifter at all (a row budget, a stub, a state that spins).

The mistake to avoid is describing the hang group and calling it a cause: if 100% of hangs contain a loop
and 95% of everything does, "loops" explains nothing. So every feature is reported as a LIFT RATIO
against the whole machine-lifted population, and the tool says out loud that a ratio is not a mechanism.
"""
import io
import json
import os
import re
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_frame_predicates as FP  # noqa: E402
import lift_clobber_predicate_blindness as T  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

FEATURES = {
    "loop": re.compile(r"\bwhile\s*\(|\bfor\s*\(|\bdo\s*\{", re.I),
    "backward goto": re.compile(r"\bgoto\s+L_[0-9a-f]+;", re.I),
    "string op (rep)": re.compile(r":\s*rep(e|z)?\s+(movs|stos|scas)", re.I),
    "x87": re.compile(r":\s(fld|fst|fist|fadd|fmul|fsub|fcom|fstp|push[df]|pop[df])\b", re.I),
    "indirect call": re.compile(r":\s*call\s+dword", re.I),
    "indirect jmp": re.compile(r":\s*jmp\s+dword", re.I),
    "division": re.compile(r":\s(idiv|div)\b", re.I),
    ">40 instructions": None,          # computed
    ">=8 calls": None,                 # computed
    "read from [esp] args": re.compile(r"rd32\(\s*\(\s*uint32_t\s*\)\s*\(\s*esp\s*\+", re.I),
}


def features_of(a):
    bl = T.blines(a)
    if not bl:
        return None
    g = "\n".join(bl)
    out = set()
    for name, rx in FEATURES.items():
        if rx is not None and rx.search(g):
            out.add(name)
    n_ins = len(re.findall(r"/\*\s*[0-9a-f]{8}:", g))
    n_calls = len(re.findall(r":\s*call\s+", g))
    if n_ins > 40:
        out.add(">40 instructions")
    if n_calls >= 8:
        out.add(">=8 calls")
    out.add("size:%s" % ("big" if n_ins > 120 else "med" if n_ins > 40 else "small"))
    return out


def main():
    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    if len(d) < 5000:
        sys.exit("REFUSING: %d rows" % len(d))
    noanswer = sorted(k for k, v in d.items()
                      if not v.get("pass") and (v.get("why") or "") in ("hang", "no_row_output"))
    timeouts = sorted(k for k, v in d.items()
                      if not v.get("pass") and (v.get("why") or "") == "timeout")
    if not noanswer:
        sys.exit("REFUSING: no hang/no_row_output rows - the record changed shape, so any conclusion "
                 "here would be about a population that does not exist")
    machine = [a for a in FP.lifted_units() if "machine-lifted" in FP.read_unit(a)]

    def profile(units, label, limit=None):
        seen = Counter()
        judged = 0
        for a in (units[:limit] if limit else units):
            f = features_of(a)
            if f is None:
                continue
            judged += 1
            for k in f:
                seen[k] += 1
        return seen, judged

    print("=" * 78)
    print("the %d rows with NO VERDICT:  hang + no_row_output (%d timeouts reported separately)"
          % (len(noanswer), len(timeouts)))
    print("=" * 78)
    na_seen, na_n = profile(noanswer, "noanswer")
    base_seen, base_n = profile(machine, "baseline", limit=1200)
    print("  profiled: %d no-answer units, %d baseline units" % (na_n, base_n))
    if na_n == 0 or base_n == 0:
        sys.exit("REFUSING: nothing was profiled - the feature probe is blind")
    print()
    print("  %-22s %8s %8s %8s" % ("feature", "no-answer", "baseline", "lift"))
    keys = [k for k in FEATURES if k != ">40 instructions"] + [">40 instructions", ">=8 calls",
                                                               "size:big", "size:med", "size:small"]
    for k in sorted(set(keys), key=lambda x: -(na_seen[x] / max(1, na_n))):
        pa = na_seen[k] / max(1, na_n)
        pb = base_seen[k] / max(1, base_n)
        lift = (pa / pb) if pb else float("inf")
        flag = "  <<" if lift >= 2.0 or (pb and lift <= 0.5) else ""
        print("  %-22s %7.0f%% %7.0f%% %7.2f%s" % (k, 100 * pa, 100 * pb, lift, flag))
    print()
    print("  A LIFT RATIO is a lead, not a mechanism. `<<` marks anything at >=2x or <=0.5x the")
    print("  population rate; the honest next step is to take three units from the top ratio and read")
    print("  their bodies - a hang that turns out to be one stubbed import answering differently is a")
    print("  harness fix, and a hang that is a fuzzed counter spinning 2^32 times is a state-generation")
    print("  fix. Neither is a lifter fix, and that distinction is the whole value of this table.")
    print()
    print("  no-answer units (first 10): %s" % ", ".join("0x" + a for a in noanswer[:10]))


if __name__ == "__main__":
    main()
