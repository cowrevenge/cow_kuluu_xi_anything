"""Price COW_MODEL_LOCAL_BIND_MEASURE on the population it exists for, off vs on, through the real lifter.

Both arms carry the two knobs that expose the population (string witness + npush frame walk) - the
population is defined by "with those two on, the unit refuses on local_address_escapes", which is a
statement about the gate BEHIND the one under test, so it does not smuggle the experiment into the
definition. What differs between the arms is exactly one knob.

Guards, all learned the hard way this session:
  * every COW_* scrubbed from the environment and re-set explicitly, so an inherited knob cannot move the
    comparison;
  * the refuse-line key is normalised (a colon left on the key once made "lifted" equal the whole
    population while the histogram said most of it was refused);
  * a partition assertion: lifted + refused must equal the population, or nothing here is quoted;
  * a capability tripwire: with the binding OFF every unit must refuse on local_address_escapes. If they do
    not, this is not the population and a "gain" would be fiction.
"""
import os
import subprocess
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for _p in (HERE, os.path.join(ROOT, "tools", "cow")):
    if _p not in sys.path:
        sys.path.insert(0, _p)
for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)                              # scrub BEFORE importing the modules under test

import gen_model                                     # noqa: E402
import ghidra_c                                      # noqa: E402
import lift                                          # noqa: E402
import trivial_audit                                 # noqa: E402
import lift_string_frame_witness as S                # noqa: E402

LIFT = os.path.join(ROOT, "tools", "cow", "ghidra", "lift.py")
EXPOSE = {"COW_MODEL_STR_WITNESS_MEASURE": "1", "COW_MODEL_NPUSH_FRAME_AWARE": "1"}
BIND = "COW_MODEL_LOCAL_BIND_MEASURE"


def population():
    """Units that, with the exposing knobs ON, refuse on local_address_escapes."""
    # MEMBERSHIP IS COMPUTED WITH EVERY KNOB OFF. `S.condemned()` asks the module for provenance == "stack";
    # with STR_WITNESS_MEASURE already flipped, the witnessed ones answer "stack-witnessed" instead, so
    # condemned() returns nothing and the population silently becomes 0 - which is exactly what the first
    # version of this tool did. The exposing knobs are flipped AFTER membership is fixed, for the refusal
    # check only, because that check is the experiment's context and not its definition.
    bodies = trivial_audit.body_index()
    out = []
    for addr, bl in sorted(bodies.items()):
        try:
            m = gen_model.model_generated(bl)
        except Exception:                              # noqa: BLE001
            continue
        ins = m.get("ins") or []
        if gen_model.string_shape(ins).get("why") != "operand_stack_frame":
            continue
        hits = S.condemned(ins)
        if not hits or not S.classify_unit(ins, hits).get("WITNESSED-PREFIX"):
            continue
        out.append("0x" + addr)

    # ---- the experiment's context, flipped only now, for the refusal check ----
    gen_model.STR_WITNESS_MEASURE = True
    gen_model.NPUSH_FRAME_AWARE = True
    lift.gen_model.STR_WITNESS_MEASURE = True
    lift.gen_model.NPUSH_FRAME_AWARE = True
    ctx = lift.Ctx("D:/projects/ghidra/ghidra_out/functions_all.jsonl", "12.2")
    # the refusal check needs the real dump record; do it in one pass rather than per unit
    recs = {}
    want = set(out)
    import json                                        # noqa: E402
    with open("D:/projects/ghidra/ghidra_out/functions_all.jsonl", encoding="utf-8",
              errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                r = json.loads(line)
            except ValueError:
                continue
            a = (r.get("addr") or "").lower()
            if a in want:
                recs[a] = r
    keep = []
    for a in sorted(want):
        r = recs.get(a)
        if not r:
            continue
        ctx.problems = []
        ok, _ = lift.classify(r)
        if not ok:
            continue
        text, why = lift.emit(r, ctx)
        if text is None and why == "local_address_escapes":
            keep.append(a)
    return keep


def run(units, knobs):
    env = dict(os.environ)
    for k in [k for k in list(env) if k.startswith("COW_")]:
        env.pop(k)
    env.update(knobs)
    p = subprocess.run([sys.executable, LIFT, "--entries", ",".join(units), "--verbose"],
                       cwd=ROOT, capture_output=True, text=True, encoding="utf-8",
                       errors="replace", env=env, timeout=3600)
    out = (p.stdout or "") + "\n" + (p.stderr or "")
    reasons = {}
    for ln in out.splitlines():
        s = ln.strip()
        if s.startswith("refuse "):
            parts = s.split(" ", 2)
            if len(parts) == 3:
                reasons[parts[1].rstrip(":").lower()] = parts[2].split()[0]
    allu = {u.lower() for u in units}
    lifted = allu - set(reasons)
    if len(lifted) + len(reasons) != len(allu):
        sys.exit("REFUSING: %d lifted + %d refused != %d - key mismatch, nothing here is quotable."
                 % (len(lifted), len(reasons), len(allu)))
    return lifted, reasons


def main():
    units = population()
    if len(units) < 40:
        sys.exit("REFUSING: population %d (expected ~65) - re-check the exposing knobs." % len(units))
    print("population (refuses on local_address_escapes with string+npush on): %d" % len(units))

    off_lift, off_why = run(units, EXPOSE)
    on_lift, on_why = run(units, dict(EXPOSE, **{BIND: "1"}))

    if not all(v == "local_address_escapes" for v in off_why.values()) or off_lift:
        sys.exit("REFUSING: the OFF arm does not refuse the whole population on local_address_escapes"
                 " (lifted=%d, reasons=%s). The population is not what this knob acts on."
                 % (len(off_lift), Counter(off_why.values()).most_common(3)))

    gained = sorted(u for u in on_lift if u not in off_lift)
    regressed = sorted(u for u in off_lift if u not in on_lift)
    moved = sorted(u for u in on_why if u in off_why and on_why[u] != off_why[u])
    print("lifted OFF : %d      lifted ON : %d" % (len(off_lift), len(on_lift)))
    print("NEWLY LIFTABLE : %d" % len(gained))
    print("regressions    : %d  %s" % (len(regressed), regressed[:6]))
    print("moved gate     : %d  (NOT a win)" % len(moved))
    if moved:
        for k, v in Counter("%s -> %s" % (off_why[u], on_why[u]) for u in moved).most_common(8):
            print("    %-64s %d" % (k, v))
    still = Counter(v for u, v in on_why.items() if u not in gained)
    if still:
        print("still refused:")
        for k, v in still.most_common(8):
            print("    %-64s %d" % (k, v))
    if not gained:
        print("\nTHE KNOB RELEASED NOTHING. That is a result, not a bug to hide: look at what the units moved"
              "\nto before assuming the conversion is wrong - the guard may be refusing them, which is the"
              "\nconversion working.")


if __name__ == "__main__":
    main()
