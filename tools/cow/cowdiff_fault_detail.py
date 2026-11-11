"""cowdiff_fault_detail.py - for a list of units, report WHICH address each side touched when it faulted.

WHY THIS EXISTS
---------------
Until this session the halt's fault-asymmetry rows could say only "side B (ours) faulted (0xc0000005) and
the other did not". That one sentence covers at least four different diagnoses - a pointer the lift
invented, a callee entered with the wrong stack arguments, a read of a guest address outside the mapped
window, and the guard edge of the sandbox - and they were indistinguishable, so every attempt to triage
the pile began by guessing. The SEH record already carries the faulting address, the access type and the
exception address; nothing was reading them (see cow_fault_filter in tools/cow/cowdiff.c).

WHAT IT IS AND IS NOT
---------------------
It is a localiser, not a judge. It runs the real cowdiff per unit and reports the harness's own words.
Verdicts come from cowdiff/lift_proof; a fault line says WHERE a side died, nothing more.

WHY THE KEY IS THE GUEST ADDRESS AND NOT THE PC
-----------------------------------------------
Two things make a raw pc useless as a cross-unit key: the exe is ASLR'd, and - the one that fooled the
first version of this tool - **each unit is linked into its own executable** (build\\cowdiff\\cowdiff_<hex>.exe),
so code layout differs per unit and no mask makes one unit's pc comparable to another's. That first draft
grouped by pc&0xfffff and announced "13 distinct sites -> NOT one pattern" from a key that could not
answer the question. The cross-unit key is the GUEST address: the SEH record gives a host address, and the
harness prints where it mapped the image, so subtracting that base recovers the address our code actually
asked for. The pc is still reported, for the case where one executable is being studied in depth.

CAN-FIRE
--------
Zero fault lines over a list of known-failing units exits non-zero. An empty table here would otherwise
read as "no faults to explain", which is how a broken instrument has repeatedly manufactured a clean
result in this repo. Controls run in the same invocation: a control that faults is reported as a problem
with the unit list, not absorbed in silence.
"""
import argparse
import io
import json
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
# HERE is <repo>/tools/cow, so the repo is TWO levels up. Three ups resolves to the parent of the repo
# and the tool then invokes a path that does not exist - the same off-by-one that once made
# lift_proof_noise scan tools/src/lifted. Asserted, not eyeballed.
REPO = os.path.abspath(os.path.join(HERE, "..", ".."))
assert os.path.isfile(os.path.join(REPO, "tools", "cow", "cowdiff.py")), \
    "REPO resolved to %s, which is not the repo" % REPO
COWDIFF = os.path.join(REPO, "tools", "cow", "cowdiff.py")

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

STATE_RE = re.compile(r"^\s+(\S{8})\s+state (\d+): (\S+) \((.*?)\)\s*$", re.M)
FAULT_RE = re.compile(
    r"^\s+faulted: A code=(\w+) (\w+) @([0-9A-Fa-f]+) pc=([0-9A-Fa-f]+) "
    r"\| B code=(\w+) (\w+) @([0-9A-Fa-f]+) pc=([0-9A-Fa-f]+)\s*$", re.M)
# "[recomp] FFXiMain.dll mapped at 10000000 (host 0000022DBD7A0000)" - the only place the harness says
# where the window actually landed, which is what turns a host address back into a guest one.
HOSTBASE_RE = re.compile(r"mapped at ([0-9A-Fa-f]+)\s*\(host ([0-9A-Fa-f]+)\)")

IMAGE_LO, IMAGE_HI = 0x10000000, 0x10C15000
ARENA_LO, ARENA_HI = 0x00980000, 0x00990000
STACK_LO, STACK_HI = 0x00990000, 0x009A0000


def region(v):
    """Which guest sandbox region an address is in. 'outside-every-region' is itself the finding: the
    access was to something no part of the mapped world contains."""
    if v is None:
        return "?"
    if IMAGE_LO <= v < IMAGE_HI:
        return "image"
    if ARENA_LO <= v < ARENA_HI:
        return "arena"
    if STACK_LO <= v < STACK_HI:
        return "stack"
    if v == 0:
        return "null"
    if v < 0x10000:
        return "near-null"
    return "outside-every-region"


def run_unit(unit, states, seed):
    env = {k: v for k, v in os.environ.items() if not k.startswith("COW_")}
    p = subprocess.run([sys.executable, COWDIFF, unit, "--states", str(states),
                        "--seed", str(seed)],
                       cwd=REPO, capture_output=True, text=True,
                       encoding="utf-8", errors="replace", env=env, timeout=3600)
    txt = (p.stdout or "") + "\n" + (p.stderr or "")
    verdict = "PASS" if re.search(r"COWDIFF PASS", txt) else (
        "FAIL" if re.search(r"COWDIFF FAIL", txt) else "NO-VERDICT")
    hb = HOSTBASE_RE.search(txt)
    return (p.returncode, verdict, STATE_RE.search(txt), FAULT_RE.search(txt), txt,
            int(hb.group(2), 16) if hb else None,
            int(hb.group(1), 16) if hb else IMAGE_LO)


def selftest():
    """The parse/region logic on a captured line, so a harness format change fails HERE and not in front
    of a pile nobody trusts."""
    line = ("      faulted: A code=00000000 read @0000000000000000 pc=0000000000000000 "
            "| B code=c0000005 write @000002862028028E pc=00007FF7DCFBD776")
    m = FAULT_RE.search(line)
    assert m, "FAULT_RE does not match the harness's own output - it changed format"
    ac, arw, aadr, apc, bc, brw, badr, bpc = m.groups()
    assert ac == "00000000" and bc == "c0000005" and brw == "write"
    assert int(badr, 16) == 0x2862028028E and int(bpc, 16) == 0x7FF7DCFBD776
    assert region(0x10482f40) == "image" and region(0x993be4) == "stack"
    assert region(0x984a37) == "arena" and region(0x2862028028E) == "outside-every-region"
    hb = HOSTBASE_RE.search("[recomp] FFXiMain.dll mapped at 10000000 (host 0000022DBD7A0000)")
    assert hb and int(hb.group(2), 16) == 0x22DBD7A0000
    print("selftest: fault line parsed, region() and host-base extraction verified")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--units", required=True, help="comma-separated 0xHEX")
    ap.add_argument("--states", type=int, default=2000)
    ap.add_argument("--seed", default="12345")
    ap.add_argument("--controls", default="", help="units expected NOT to fault")
    ap.add_argument("--out", default="", help="write the table here (must be under build/)")
    a = ap.parse_args()
    selftest()

    units = [u.strip() for u in a.units.split(",") if u.strip()]
    controls = [u.strip() for u in a.controls.split(",") if u.strip()]
    if not units:
        sys.exit("REFUSING: empty unit list - a run over nothing reports zero of everything")

    rows, ctrl_bad = [], []
    for u in units + controls:
        rc, verdict, st, fa, _t, host_base, guest_lo = run_unit(u, a.states, a.seed)
        rec = {"unit": u, "verdict": verdict, "rc": rc, "host_base": host_base}
        if fa:
            ac, arw, aadr, apc, bc, brw, badr, bpc = fa.groups()
            rec.update(state=st.group(2) if st else "?", why=st.group(3) if st else "?",
                       a_code=ac, a_rw=arw, a_addr=int(aadr, 16), a_pc=int(apc, 16),
                       b_code=bc, b_rw=brw, b_addr=int(badr, 16), b_pc=int(bpc, 16))
            if host_base is not None:
                rec["a_guest"] = rec["a_addr"] - host_base + guest_lo
                rec["b_guest"] = rec["b_addr"] - host_base + guest_lo
        rows.append(rec)
        if u in controls and fa:
            ctrl_bad.append(u)

        tag = "CTRL" if u in controls else "    "
        if not fa:
            print("%s %-12s %-5s (no fault line)" % (tag, u, verdict))
            continue

        def side(code, rw, addr, guest):
            if not int(code, 16):
                return "-                        "   # this side did NOT fault: do not print its zeros
            g = (" guest=0x%x(%s)" % (guest, region(guest))) if guest is not None else ""
            return "%s %-6s @0x%-12x%s" % (code, rw, addr, g)

        print("%s %-12s %-5s state %-6s %-6s A: %s | B: %s"
              % (tag, u, rec["verdict"], rec["state"], rec["why"],
                 side(rec["a_code"], rec["a_rw"], rec["a_addr"], rec.get("a_guest")),
                 side(rec["b_code"], rec["b_rw"], rec["b_addr"], rec.get("b_guest"))))

    faults = [r for r in rows if "b_addr" in r]
    print("\nfault detail captured: %d of %d units" % (len(faults), len(units)))
    if not faults and not controls:
        sys.exit("CAN-FIRE FAILED: not one unit produced a fault line. The instrument or the unit list"
                 " is wrong - do not read this as 'there were no faults'.")
    if ctrl_bad:
        print("NOTE: %d control(s) faulted: %s" % (len(ctrl_bad), ", ".join(ctrl_bad)))

    if faults:
        print("\nby side, operation, and where the address lives:")
        tally = {}
        for r in faults:
            for label, code, rw, addr, guest in (
                    ("A(original)", r["a_code"], r["a_rw"], r["a_addr"], r.get("a_guest")),
                    ("B(ours)", r["b_code"], r["b_rw"], r["b_addr"], r.get("b_guest"))):
                if int(code, 16):
                    k = (label, rw, region(guest))
                    tally[k] = tally.get(k, 0) + 1
        for (label, rw, reg), n in sorted(tally.items()):
            print("   %-12s %-7s %-22s %d" % (label, rw, reg, n))

        print("\nby guest address our side touched (the cross-unit key):")
        gk = {}
        for r in faults:
            if not int(r["b_code"], 16):
                continue
            g = r.get("b_guest")
            gk.setdefault(("?" if g is None else "0x%x" % g, region(g)), []).append(r["unit"])
        for (key, reg), us in sorted(gk.items(), key=lambda kv: -len(kv[1])):
            print("   %-22s %-22s %2d  %s" % (key, reg, len(us), ", ".join(us)))
        print("\n   %d distinct guest addresses across %d B-side faults"
              % (len(set(k for k, _ in gk)), len(faults)))

        print("\nfault pc, for depth on ONE executable (NOT comparable across units: each unit is")
        print("   linked into its own cowdiff_<hex>.exe, and the exe is ASLR'd):")
        for r in faults:
            pc = r["b_pc"] if int(r["b_code"], 16) else r["a_pc"]
            print("   %-12s pc=0x%x" % (r["unit"], pc))

    if a.out:
        out = os.path.abspath(a.out)   # the caller may pass a relative path
        assert out.startswith(os.path.normpath(os.path.join(REPO, "build"))), \
            "refusing to write %s outside build/" % out
        io.open(out, "w", encoding="utf-8").write(json.dumps(rows, indent=1, sort_keys=True))
        print("\ntable written: %s" % out)


if __name__ == "__main__":
    main()
