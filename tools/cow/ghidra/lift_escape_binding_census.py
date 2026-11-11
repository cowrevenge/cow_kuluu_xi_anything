"""Census the frame-binding design on the population it is actually meant to convert.

Context: `lift_unit_read.py` read one `param_address_escapes` and one `local_address_escapes` unit end to
end and produced a split, not a design:

  * `&param_k` is `sp0 + 4u + 4k` - an address fixed by the calling convention, nameable WITHOUT tracking
    esp through the body. lift.py:1114 already builds that exact expression for the *value* read.
  * `&local_X` is an address relative to the **dynamic** guest esp, and Ghidra's name is not a formula for
    it (in f_10002c30 `&local_c` is the slot the guest reached as `[esp+4]` *after* one push). Naming it
    needs the guest `lea`s as the source of truth, plus esp tracking.

Both exemplars reported `esp_delta_reliable = false`, which is either a coincidence that misleads the
design or the real obstacle. A single shared field value across two units is not a population statistic -
so this asks the question of the whole family, and prints the field's fire-rate on a control sample so a
`0` here cannot be a zero from a predicate that never had a chance to fire.

Refusals come from the LIVE pipeline (classify + emit, the same calls lift.py's loop makes), never from a
stale reasons file - the candidate list is only a set of addresses to look at.

Usage:
    python tools/cow/ghidra/lift_escape_binding_census.py                     # live families + stats
    python tools/cow/ghidra/lift_escape_binding_census.py --list-out cow/wip/frame-binding-pop.txt
"""
import argparse
import collections
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for _p in (HERE, os.path.join(ROOT, "tools", "cow")):
    if _p not in sys.path:
        sys.path.insert(0, _p)

for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)                              # a census is a read: no inherited knobs

import gen_model                                     # noqa: E402
import lift                                          # noqa: E402  the real pipeline
import trivial_audit                                 # noqa: E402

DUMP_DEFAULT = "D:/projects/ghidra/ghidra_out/functions_all.jsonl"
STALE_REASONS = os.path.join(ROOT, "build", "lift", "reasons_all.json")
ESCAPE_TAGS = ("param_address_escapes", "local_address_escapes")


def stale_candidates():
    """Addresses the OLD run refused on an escape. Only a pointer set: every verdict below is recomputed."""
    if not os.path.isfile(STALE_REASONS):
        return []
    with io.open(STALE_REASONS, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    return [k for k, v in d.items() if v in ESCAPE_TAGS]


def main():
    ap = argparse.ArgumentParser(prog="lift_escape_binding_census.py")
    ap.add_argument("--dump", default=DUMP_DEFAULT)
    ap.add_argument("--entries", default="", help="comma-separated addresses (default: the stale family)")
    ap.add_argument("--control", type=int, default=300,
                    help="how many ordinary units to sample to prove esp_delta_reliable CAN be true")
    ap.add_argument("--list-out", default="")
    a = ap.parse_args()

    want = {lift.norm(x) for x in a.entries.split(",") if x.strip()} if a.entries else \
           {lift.norm(x) for x in stale_candidates()}
    if not want:
        sys.exit("REFUSING: no candidate addresses at all - the census has no population, so any count"
                 " it printed would be a hallucination.")
    print("candidates to verify live: %d (from %s)"
          % (len(want), "--entries" if a.entries else os.path.basename(STALE_REASONS)))

    bodies = trivial_audit.body_index()
    recs = {}
    seen = 0
    with io.open(a.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            seen += 1
            n = lift.norm(d.get("addr"))
            if n in want:
                recs[n] = d
            if len(recs) == len(want):
                break
    missing = sorted(want - set(recs))
    if not recs:
        sys.exit("REFUSING: none of the %d candidates is in %s (%d records scanned)."
                 % (len(want), a.dump, seen))
    if missing:
        print("note: %d candidate(s) absent from the dump: %s%s"
              % (len(missing), ", ".join(missing[:5]), " ..." if len(missing) > 5 else ""))

    ctx = lift.Ctx(a.dump, "12.2")
    fam = collections.defaultdict(list)
    moved = collections.Counter()
    for n, d in sorted(recs.items()):
        ctx.problems = []
        ok, why = lift.classify(d)
        if not ok:
            moved["classify:" + why] += 1
            continue
        text, why2 = lift.emit(d, ctx)
        reason = why2 if text is None else "lifted(now)"
        if reason not in ESCAPE_TAGS:
            moved[reason] += 1
            continue
        hex8 = n[2:]
        bl = bodies.get(hex8) or []
        m = gen_model.model_generated(bl) if bl else {}
        fam[reason].append({"entry": n,
                            "esp_delta_reliable": m.get("esp_delta_reliable"),
                            "prologue_len": m.get("prologue_len"),
                            "locals": m.get("locals"),
                            "purge": m.get("purge"),
                            "frame_pointer": m.get("frame_pointer"),
                            "has_call": m.get("has_call"),
                            "reg_args": m.get("reg_args") or [],
                            "size_insns": len(bl and m.get("ins") or [])})

    if not any(fam.values()):
        sys.exit("REFUSING: no candidate is refused on an escape TODAY (moved: %s). The families have"
                 " moved under me - report that, do not census a population that is not there."
                 % dict(moved))

    for tag in ESCAPE_TAGS:
        rows = fam[tag]
        if not rows:
            print("\n%s: 0 unit(s) live" % tag)
            continue
        rel = sum(1 for r in rows if r["esp_delta_reliable"])
        loc = sum(1 for r in rows if (r["locals"] or 0) > 0)
        fp = sum(1 for r in rows if r["frame_pointer"])
        print("\n%s: %d unit(s) live" % (tag, len(rows)))
        print("  esp_delta_reliable TRUE : %d / %d" % (rel, len(rows)))
        print("  locals reserved (>0)    : %d / %d" % (loc, len(rows)))
        print("  frame_pointer used      : %d / %d" % (fp, len(rows)))
        print("  example                 : %s" % json.dumps(rows[0]))

    # Can the predicate be true at all? If this control sample cannot make esp_delta_reliable fire, then
    # the zeros above mean nothing and I must say so rather than design around them.
    ctrl = list(bodies.keys())[:a.control]
    fires = 0
    for hex8 in ctrl:
        m = gen_model.model_generated(bodies[hex8])
        if m.get("esp_delta_reliable"):
            fires += 1
    print("\ncontrol: esp_delta_reliable fires on %d / %d sampled bodies" % (fires, len(ctrl)))
    if fires == 0:
        print("  THE PREDICATE NEVER FIRES in the control - so every '0' above is uninformative and no"
              " design decision may be taken from it.")
    else:
        print("  predicate can fire, so the family counts above are measurements, not dead filters.")

    # ---- the measurement the design actually turns on, for the param family
    #
    # `&param_k` is nameable as sp0+4+4k ONLY if param_k is a STACK argument. With a thiscall, ecx (and
    # sometimes edx) arrive in registers, and Ghidra still numbers them param_1.. - taking the address of a
    # register argument needs a SPILL slot, which is a different mechanism with different risks. So the
    # 64 split into "one line of arithmetic" and "not that", and nobody may say "64" without knowing which.
    if fam.get("param_address_escapes"):
        m_regargs = {r["entry"]: r["reg_args"] for r in fam["param_address_escapes"]}
        stack_only, reg_involved, ambiguous = [], [], []
        for r in fam["param_address_escapes"]:
            d = recs[r["entry"]]
            c = d.get("c") or ""
            ns = sorted({int(x) for x in re.findall(r"&\s*param_(\d+)", c)})
            if not ns:
                ambiguous.append(r["entry"])            # the token the rule condemned, unlocatable here
                continue
            nreg = len(m_regargs.get(r["entry"], []))
            (reg_involved if any(n - 1 < nreg for n in ns) else stack_only).append(r["entry"])
        print("\nparam family, split by whether the taken address is a STACK slot:")
        print("  sp0+4+4k nameable (all &param_k are stack args) : %d" % len(stack_only))
        print("  needs a spill slot (a register arg is taken)    : %d" % len(reg_involved))
        print("  no &param_N found in the Ghidra C               : %d" % len(ambiguous))
        # tripwire both ways: if every unit landed in one bucket, the classifier is not reading anything
        if not stack_only or not reg_involved:
            print("  WARNING: one bucket is EMPTY - the split predicate may not be able to fire. Before"
                  " quoting either number, check `reg_args` on a unit of the empty kind by eye.")

    if moved:
        print("\nno longer an escape refusal (live, this run):")
        for k, v in moved.most_common(12):
            print("  %-42s %d" % (k, v))

    if a.list_out:
        with io.open(os.path.join(ROOT, a.list_out), "w", encoding="utf-8", newline="\n") as fh:
            for tag in ESCAPE_TAGS:
                for r in fam[tag]:
                    fh.write("%s\n" % r["entry"])
        print("\nwrote %s" % a.list_out)


if __name__ == "__main__":
    main()
