"""Price COW_MODEL_PARAM_BIND_MEASURE through the real lifter, off vs on, on its OWN population.

Follows lift_npush_price.py's shape for one reason: the environment must be scrubbed of every COW_*
variable for BOTH arms and then have exactly one knob set for the on-arm, or an inherited knob from the
shell makes the comparison meaningless. A knob's price is measured through lift.py's own report path - not
through a re-implementation of the decision - because the thing under test is the pipeline, not my model
of it.

Refusals that MOVED are reported separately from units that started emitting: a unit that stopped being
param_address_escapes and became argcount_mismatch is not a win, and the histogram below says which is
which. Nothing here writes anything (report-only), and --apply under this knob is refused in lift.py.
"""
import io
import json
import os
import re
import subprocess
import sys
from collections import Counter

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
LIFT = os.path.join(ROOT, "tools", "cow", "ghidra", "lift.py")
POP = os.path.join(ROOT, "cow", "wip", "frame-binding-pop.txt")
DUMP = "D:/projects/ghidra/ghidra_out/functions_all.jsonl"


def read_units():
    with open(POP, encoding="utf-8") as fh:
        return [ln.strip() for ln in fh if ln.strip()]


def run(units, knob):
    env = dict(os.environ)
    for k in [k for k in list(env) if k.startswith("COW_")]:
        env.pop(k)                                   # scrubbed, then exactly one knob set below
    if knob:
        env["COW_MODEL_PARAM_BIND_MEASURE"] = "1"
    p = subprocess.run([sys.executable, LIFT, "--entries", ",".join(units), "--verbose"],
                       cwd=ROOT, capture_output=True, text=True, encoding="utf-8",
                       errors="replace", env=env)
    out = (p.stdout or "") + "\n" + (p.stderr or "")
    lifted, reasons = set(), {}
    for ln in out.splitlines():
        s = ln.strip()
        if s.startswith("refuse "):
            parts = s.split(" ", 2)
            if len(parts) == 3:
                # lift.py prints `refuse 0x1001ac50: reason` - the key MUST be normalised to match the
                # population's own spelling. With the colon left in, `allu - set(reasons)` subtracted
                # nothing and this tool reported "lifted: 107" while the same run's histogram said 53 were
                # refused. The partition assert below is what makes that impossible a second time.
                reasons[parts[1].rstrip(":").lower()] = parts[2].split()[0]
    allu = set(u.lower() for u in units)
    lifted = allu - set(reasons)
    if len(lifted) + len(reasons) != len(allu):
        sys.exit("REFUSING: %d lifted + %d refused != %d units - the refuse-line key does not match the"
                 " population spelling, so every count in this report would be fiction."
                 % (len(lifted), len(reasons), len(allu)))
    return lifted, reasons, out


def main():
    units = read_units()
    if len(units) < 20:
        sys.exit("REFUSING: population of %d is too small to price a knob - the list may be stale or"
                 " empty." % len(units))
    off_lift, off_why, _ = run(units, knob=False)
    on_lift, on_why, on_out = run(units, knob=True)

    # Capability tripwire: this population is defined by refusing on an escape. If the OFF arm refuses on
    # nothing of that kind, the list is stale and any "gain" below is a population that moved elsewhere.
    esc_off = [a for a, r in off_why.items() if "address_escapes" in r]
    if not esc_off:
        sys.exit("REFUSING: the OFF arm refuses on no escape at all (%s). The population no longer tests"
                 " this knob - re-derive it with lift_escape_binding_census.py rather than quoting a gain."
                 % Counter(off_why.values()).most_common(3))

    gained = sorted(a for a in on_lift if a not in off_lift)
    regressed = sorted(a for a in off_lift if a not in on_lift)
    moved = sorted(a for a in on_why if a in off_why and on_why[a] != off_why[a])

    print("population                : %d units (both escape families)" % len(units))
    print("lifted with the knob OFF  : %d" % len(off_lift))
    print("lifted with the knob ON   : %d" % len(on_lift))
    print("NEWLY LIFTABLE            : %d" % len(gained))
    print("regressions               : %d  %s" % (len(regressed), regressed[:6]))
    print("moved to another gate     : %d  (NOT a win)" % len(moved))
    if moved:
        c = Counter("%s -> %s" % (off_why[a], on_why[a]) for a in moved)
        for k, v in c.most_common(8):
            print("    %-70s %d" % (k, v))
    still = Counter(v for k, v in on_why.items() if k not in gained)
    if still:
        print("still refused, by reason:")
        for k, v in still.most_common(8):
            print("    %-70s %d" % (k, v))

    # For the param units the knob did NOT release, print the INGREDIENTS of the decision rather than a
    # re-decision: which registers arrive, what type Ghidra gave each param, and whether the body assigns
    # to the addressed one. The next reader can see why each was excluded without me forking the rule in
    # this report tool and then quoting the fork.
    stuck = sorted(a for a, r in on_why.items() if r == "param_address_escapes")
    if stuck:
        sys.path.insert(0, os.path.join(ROOT, "tools", "cow"))
        sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
        import gen_model                                # noqa: E402
        import trivial_audit                            # noqa: E402
        bodies = trivial_audit.body_index()
        want = {a if a.startswith("0x") else "0x" + a for a in stuck}
        cs = {}
        with io.open(DUMP, encoding="utf-8", errors="replace") as fh:
            for line in fh:
                line = line.strip()
                if not line:
                    continue
                try:
                    rec = json.loads(line)
                except ValueError:
                    continue
                ad = (rec.get("addr") or "").lower()
                if ad in want:
                    cs[ad] = rec.get("c") or ""
                if len(cs) == len(want):
                    break
        print("\nnot released (the inputs to the exclusion, not my re-decision):")
        for a in sorted(want):
            hex8 = a[2:]
            bl = bodies.get(hex8) or []
            m = gen_model.model_generated(bl) if bl else {}
            types = gen_model.param_types(cs.get(a, ""))
            addressed = sorted({int(x) for x in re.findall(r"&\s*param_(\d+)", cs.get(a, ""))})
            assigned = sorted({int(x) for x in re.findall(r"(?<![=!<>+\-*/&|^])\bparam_(\d+)\s*=[^=]",
                                                           cs.get(a, ""))})
            print("  %-12s reg_args=%-8s addressed=%-10s assigned=%-8s types=%s"
                  % (a, ",".join(m.get("reg_args") or []) or "-", addressed, assigned or "-",
                     json.dumps({str(k): v for k, v in sorted(types.items())}, sort_keys=True)[:70]))
    if not gained and not moved and not regressed:
        print("\nTHE Knob DID NOTHING on its own population - which is a result, not a bug to hide."
              " Check that the units still refuse on the escape name before believing the mechanism works.")
    if regressed:
        print("\nREPORTED, NEVER DELETED: units that lifted before the knob and do not now.")


if __name__ == "__main__":
    main()
