"""Which knob changed a file, and which model field decided it?

Two questions this answers, because they are asked together every time a knob is claimed "ready":

  1. BISECT - run the units with each candidate knob ALONE plus a NO-KNOB baseline, and report which arms
     change the emitted bytes. The baseline is not a formality: without it, lifter drift since a file was
     booked looks exactly like a knob, and the fix gets sent to the wrong file.
  2. WHY - for a unit that differs, diff model_generated() key by key and then call_sites field by field,
     and print the guest instructions involved. The NPUSH_FRAME_AWARE case was found this way: `pushes`,
     `npush` and `pushed` were IDENTICAL, and only `push_values`/`push_values_why` differed - the knob had
     turned a correct BAIL (`push_values=None, why='pending-vs-pushed'`) into an ASSERTION of a value that
     dropped the image rebase and read a partially-written register as a whole one.

Usage:
  python tools/cow/ghidra/lift_knob_bisect.py --units 0x100142b0,0x10014200 \
      --knobs COW_LIFT_EPILOGUE_MATCH_PUSHES,COW_MODEL_NPUSH_FRAME_AWARE
  python tools/cow/ghidra/lift_knob_bisect.py --units 0x100142b0 --why COW_MODEL_NPUSH_FRAME_AWARE
"""
import argparse
import os
import shutil
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
LIFT = os.path.join(HERE, "lift.py")
SCRATCH = os.path.join(ROOT, "build", "scratch", "knobbisect")


def read_list(spec, path):
    """Units from a comma list, or from a file of them."""
    if spec:
        return [u.strip().lower() if u.strip().startswith("0x") else "0x" + u.strip()
                for u in spec.split(",") if u.strip()]
    with open(path, encoding="utf-8", errors="replace") as fh:
        return ["0x" + l.strip().lower().replace("0x", "") for l in fh if l.strip()]


def emit(units, knobs, tag):
    """One report-only lift into build/scratch; returns {unit: text or None}."""
    for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
        os.environ.pop(_k)
    env = {k: "1" for k in knobs}
    env.update({k: v for k, v in os.environ.items() if not k.startswith("COW_")})
    d = os.path.join(SCRATCH, tag)
    if os.path.isdir(d):
        shutil.rmtree(d)
    rel = os.path.relpath(d, ROOT)
    p = subprocess.run([sys.executable, LIFT, "--entries", ",".join(units), "--dump-c", rel],
                       cwd=ROOT, capture_output=True, text=True, encoding="utf-8",
                       errors="replace", env=env, timeout=7200)
    if p.returncode != 0:
        print("   !! lift exited %d: %s" % (p.returncode, (p.stdout or "").strip()[-300:]))
    out = {}
    for u in units:
        f = os.path.join(d, "cow_%s.c" % u[2:])
        out[u] = open(f, encoding="utf-8", errors="replace").read() if os.path.isfile(f) else None
    return out


def committed(u):
    f = os.path.join(ROOT, "src", "lifted", "cow_%s.c" % u[2:])
    return open(f, encoding="utf-8", errors="replace").read() if os.path.isfile(f) else None


def bisect(units, knobs):
    print("=== baseline: NO knobs (anything differing here is drift, not a knob) ===")
    base = emit(units, [], "baseline")
    drift = [u for u in units if base[u] != committed(u)]
    for u in drift:
        print("   %s differs WITHOUT any knob - do not blame a knob for this" % u)
    if not drift:
        print("   all %d units reproduce their committed bytes" % len(units))

    guilty = []
    for k in knobs:
        arm = emit(units, [k], k)
        changed = [u for u in units if arm[u] != committed(u) and u not in drift]
        print("\n=== %s ===" % k)
        print("   %s" % ("unchanged - not this knob" if not changed
                         else "CHANGED %d unit(s): %s" % (len(changed), changed[:8])))
        if changed:
            guilty.append(k)
    if len(knobs) > 1:
        arm = emit(units, knobs, "all")
        changed = [u for u in units if arm[u] != committed(u) and u not in drift]
        print("\n=== all %d together ===" % len(knobs))
        print("   CHANGED %d unit(s)%s" % (len(changed), (": " + str(changed[:8])) if changed else ""))
    print("\nGUILTY KNobs: %s" % (guilty or "none - the units move with no knob at all, i.e. drift"))
    return guilty


def why(unit, knob):
    """Which model field does `knob` change for this unit?

    One import, and the knob's own module constant flipped on the module object: gen_model reads COW_* into
    constants AT IMPORT, so a re-import is the easy way to get an arm that silently ran with the other arm's
    setting. Flipping the attribute after import is what the pricing tools already do for this reason.
    """
    for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
        os.environ.pop(_k)
    sys.path.insert(0, HERE)
    import gen_model                                                # noqa: E402
    import trivial_audit                                            # noqa: E402
    body = trivial_audit.body_index()[unit[2:]]
    const = knob.replace("COW_", "").replace("MODEL_", "")          # COW_MODEL_X -> X

    def model(on):
        if not hasattr(gen_model, const):
            sys.exit("REFUSING: gen_model has no constant %r for knob %s - the bisect would measure nothing."
                     % (const, knob))
        setattr(gen_model, const, bool(on))
        try:
            return gen_model.model_generated(body)
        finally:
            setattr(gen_model, const, False)

    a, b = model(False), model(True)
    print("unit %s  knob %s (gen_model.%s)" % (unit, knob, const))
    diff = [k for k in sorted(set(a) | set(b)) if a.get(k) != b.get(k)]
    if not diff:
        print("  model identical across all %d keys - the difference is decided inside lift.py" % len(a))
        print("  (which is itself the answer: grep %s in lift.py)" % knob)
        return
    for k in diff:
        print("  *** %s" % k)
        if k == "call_sites" and a.get(k) and b.get(k):
            for f in sorted(set(a[k][0]) | set(b[k][0])):
                if a[k][0].get(f) != b[k][0].get(f):
                    print("        %-18s off=%r" % (f, str(a[k][0].get(f))[:120]))
                    print("        %-18s on =%r" % ("", str(b[k][0].get(f))[:120]))
        else:
            print("        off=%r" % str(a.get(k))[:140])
            print("        on =%r" % str(b.get(k))[:140])
    print("  guest instructions:")
    for r in gen_model.parse_instructions(body)[:8]:
        print("     %08x  %-6s %-28s %s" % (r["addr"], r["mnem"], (r["text"] or "")[:28],
                                            (r.get("stmt") or "").replace("\n", " ")[:56]))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--units", default="")
    ap.add_argument("--units-file", default="")
    ap.add_argument("--knobs", default="")
    ap.add_argument("--why", default="", help="diff the model off/on for this one knob")
    a = ap.parse_args()
    units = read_list(a.units, a.units_file) if (a.units or a.units_file) else []
    if not units:
        sys.exit("REFUSING: no units. Name the units the knob is supposed to act on - that is the sample.")
    if a.why:
        for u in units:
            why(u, a.why)
        return 0
    knobs = [k.strip() for k in (a.knobs or "").split(",") if k.strip()]
    if not knobs:
        sys.exit("REFUSING: no knobs named. Nothing to bisect.")
    guilty = bisect(units, knobs)
    return 1 if guilty else 0


if __name__ == "__main__":
    sys.exit(main())
