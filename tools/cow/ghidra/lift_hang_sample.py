"""Pick a sample of no-answer units that are NOT explained by an unimplemented opcode.

The census showed 26 of the 331 no-answer rows carry RT_UNIMPL on the reference side - those have
their own explanation (the oracle cannot execute them) and would confound any test of the rest. The
remaining ~305 are booked `hang` on the strength of one measurement: 12 seconds of silence from a
solo run against an ALREADY-LINKED exe. The comment in lift_proof.py calls them "parked in a host
call or a register-only loop", but that parenthetical is an interpretation, and the body-feature
profile found nothing that separates them from units that answer fine.

So the question worth money is whether the silence belongs to the unit or to the harness shape: a
chunk packs 400 instrumented originals into one process, and a row that never prints in that company
is not necessarily a row that never prints alone. lift_proof has a `--chunk` knob, so `--chunk 1`
answers it directly - one exe, one row, no neighbours to blame.

This tool only SELECTS. It refuses to emit a sample if the SSE exclusion cannot fire, because a
filter that cannot judge its input hands back a "clean" sample that is actually the whole population.
"""
import io
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_unimpl_census as C  # noqa: E402  (reuses THE mnemonic parser, not a copy of it)

SSE = ("movups", "movaps", "shufps", "mulps", "addps", "movlps", "movhlps", "movhps", "movss",
       "movsd", "subps", "addss", "andps", "orps", "xorps", "cvtps", "comiss", "ucomiss",
       "unpcklps", "unpckhps", "pand", "pxor", "prefetchnta")


def main():
    n_want = int(sys.argv[1]) if len(sys.argv) > 1 else 10
    with io.open(C.RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    per_unit = C.scan_generated()

    # can the exclusion predicate fire at all? the exemplar the census was built around must be
    # recognisable as SSE, or the "non-SSE" sample below is really "whatever the filter missed".
    ex = per_unit.get(C.EXEMPLAR) or []
    if not any(s in t.lower() for _a, t in ex for s in SSE):
        sys.exit("REFUSING: %s is not recognisable as an SSE unit - the exclusion filter cannot fire, "
                 "so the sample would be unfiltered." % C.EXEMPLAR)
    print("tripwire: %s (a booked hang) is recognised as SSE-blocked -> the exclusion can fire"
          % C.EXEMPLAR)

    noanswer = sorted(k for k, v in d.items() if not v.get("pass")
                      and (v.get("why") or "") in ("hang", "no_row_output"))
    clean = [a for a in noanswer if not per_unit.get(a)]
    sse = [a for a in noanswer if per_unit.get(a)]
    print("no-answer rows: %d   SSE-blocked: %d   neither (the population under test): %d"
          % (len(noanswer), len(sse), len(clean)))
    if len(clean) < n_want:
        sys.exit("REFUSING: only %d unexplained no-answer rows" % len(clean))

    # deterministic stride, so the sample does not drift with ledger ordering or favour one module
    step = max(1, len(clean) // n_want)
    sample = clean[::step][:n_want]
    print("\nsample (%d), one exe per row via --chunk 1:" % len(sample))
    for a in sample:
        w = d[a].get("why")
        print("  0x%s  %s" % (a, w))
    print("\ncommand:")
    print("  python tools/cow/ghidra/lift_proof.py --entries %s --chunk 1 --states 400 "
          "--solo-idle-secs 60 --idle-secs 240 --rerun --out build/lift/hang-chunk1.json"
          % ",".join("0x" + a for a in sample))
    print("\nDECISION TABLE")
    print("  answers now (pass OR a compared fail) -> the silence was the CHUNK, not the unit: the")
    print("     331 are unverified rows, not defects, and the fix is patience/harness shape, not code")
    print("  silent again at 60s -> it is the unit: `hang` stands, and the honest label for the group")
    print("     stays 'needs a run to see where it spins' (a debugger/trace job, not a lift job)")
    print("  mixed -> the group is two groups; split it and count each")


if __name__ == "__main__":
    main()
