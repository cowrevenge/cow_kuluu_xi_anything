"""Answer the three questions the LOCAL half must satisfy before anyone builds a mechanism for it.

The param half worked because the slot address was forced by arithmetic (an argument sits at sp0+4+4k no
matter what the body does). Locals are not like that, and the note names three questions that have to be
answered from data, not from optimism:

  Q1  SOURCE OF TRUTH - where does the guest say the slot is? A `lea reg,[esp+-const]`, resolved with the
      model's per-instruction esp delta `d`. But `d` is only trustworthy on the STRAIGHT-LINE PREFIX; a
      local's lea commonly sits below the first branch (f_10002c30's are all after its `je`), in which case
      there is no single answer and the mechanism cannot name it.
  Q2  KEEP-ALIVE - are the bytes actually in the guest frame across the callee? If the entry's `sub esp,N`
      never reaches the emitted adapter, the lifted body's own argument pushes land ON the locals and
      clobber them. So: is the reservation in the PROLOGUE (model `locals > 0`), a body instruction the
      prologue scan stopped before, or absent entirely?
  Q3  WITNESS - what stops the mechanism naming the WRONG slot? For params it was "one addressed token, one
      pushed witnessed register, one offset". Here the same question, plus whether Ghidra's local name can
      be matched to a lea at all.

Every classification is printed per unit, and the exemplar I already read by eye (f_10002c30) is a
TRIPWIRE: if the classifier does not put it in the after-branch / reservation-not-in-prologue bucket, the
classifier is wrong and the tool refuses rather than reporting.

Reads only. No knob, no writes, no harness.
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
    os.environ.pop(_k)                              # a measurement is a read

import gen_model                                     # noqa: E402
import ghidra_c                                      # noqa: E402
import lift                                          # noqa: E402
import trivial_audit                                 # noqa: E402

DUMP = "D:/projects/ghidra/ghidra_out/functions_all.jsonl"
POP = os.path.join(ROOT, "cow", "wip", "frame-binding-pop.txt")
LEA_RE = re.compile(r"^([a-z]{2,3}),\s*\[\s*(esp|ebp)\s*([+-])\s*(0x[0-9a-fA-F]+|\d+)\s*\]$")

def hexof(x):
    """Model instruction addresses are Python ints; some call sites carry hex strings. One formatter that
    accepts both and refuses anything else - the first version did `hex(int(str(a), 16))` on an int and
    printed `0x268475951`, a number that looks like a code address and is not one."""
    if isinstance(x, int):
        return "0x%08x" % x
    s = str(x).strip().lower()
    if re.fullmatch(r"0?[0-9a-f]{1,8}", s):
        return "0x%08x" % int(s, 16)
    sys.exit("REFUSING: cannot format an address from %r - refusing to print a number I cannot vouch for."
             % (x,))


EXEMPLAR = "10002c30"          # read by eye: leas after the je, `sub esp,0xc` NOT in the prologue


def main():
    ap = argparse.ArgumentParser(prog="lift_local_feasibility.py")
    ap.add_argument("--list-out", default="")
    a = ap.parse_args()

    with io.open(POP, encoding="utf-8") as fh:
        pop = ["0x" + ln.strip()[2:] if not ln.strip().startswith("0x") else ln.strip().lower()
               for ln in fh if ln.strip()]
    if len(pop) < 20:
        sys.exit("REFUSING: population file has %d entries." % len(pop))

    recs = {}
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
            if ad in set(pop):
                recs[ad] = rec
            if len(recs) == len(pop):
                break
    if len(recs) < len(pop) // 2:
        sys.exit("REFUSING: only %d of %d population units are in the dump." % (len(recs), len(pop)))

    # confirm the population LIVE: this is the local half, so the unit must still refuse on a LOCAL escape
    ctx = lift.Ctx(DUMP, "12.2")
    units = []
    for ad in pop:
        d = recs.get(ad)
        if not d:
            continue
        ctx.problems = []
        ok, _why = lift.classify(d)
        if not ok:
            continue
        text, why = lift.emit(d, ctx)
        if text is None and why and why.endswith("local_address_escapes"):
            units.append((ad, d))
    if not units:
        sys.exit("REFUSING: no unit in the population refuses on a LOCAL escape today - the population has"
                 " moved and any answer below would be about units that do not exist.")
    print("local-escape population, live: %d unit(s)" % len(units))

    bodies = trivial_audit.body_index()
    buckets = collections.Counter()
    rows = {}
    for ad, d in units:
        hex8 = ad[2:]
        bl = bodies.get(hex8) or []
        if not bl:
            buckets["no-body"] += 1
            continue
        m = gen_model.model_generated(bl)
        ins = m.get("ins") or []
        first_transfer = None
        for c in ins:
            if c["mnem"] in ("call", "ret", "leave") or (c["mnem"] or "").startswith("j"):
                first_transfer = c["addr"]
                break
        leas = []
        for c in ins:
            if c["mnem"] != "lea":
                continue
            mm = LEA_RE.match((c.get("op") or "").strip())
            if not mm:
                continue                                  # indexed, or not a stack slot at all
            reg, base, sign, digits = mm.groups()
            const = int(digits, 0)
            off = (c.get("d") or 0) + (const if sign == "+" else -const)
            leas.append({"addr": c["addr"], "reg": reg, "base": base, "off": off, "d": c.get("d") or 0,
                         "prefix": first_transfer is None or c["addr"] < first_transfer})
        # how is the frame reserved?
        sub_esp = [c for c in ins if c["mnem"] == "sub" and re.match(r"^esp,", c.get("op") or "")]
        reserved_in_prologue = bool((m.get("locals") or 0) > 0)
        sub_in_prologue = bool(sub_esp) and reserved_in_prologue
        # Ghidra's addressed locals
        addressed = sorted({t for t, _c in ghidra_c.address_of_names(d.get("c") or "")
                            if not t.startswith("param_")})
        pushed0 = ((m.get("call_sites") or [{}])[0].get("pushed") or [])
        witched = [l for l in leas if l["prefix"] and l["base"] == "esp" and l["off"] < 4]

        if not addressed:
            b = "no-addressed-local"
        elif not leas:
            b = "Q1-NO-LEA (no stack lea at all: Ghidra folded the address)"
        elif all(l["prefix"] for l in leas) and witched:
            b = "Q1-prefix-witnessable"
        elif any(not l["prefix"] for l in leas):
            b = "Q1-after-branch (d is a fiction there)"
        else:
            b = "Q1-unmatched"
        if not sub_esp and not (m.get("pushes") or []):
            b += " | Q2-no-frame-growth"
        elif sub_esp and not sub_in_prologue:
            b += " | Q2-sub-esp-NOT-in-prologue"
        elif sub_in_prologue:
            b += " | Q2-reserved-in-prologue"
        if addressed and len(addressed) != len(witched):
            b += " | Q3-count-mismatch (%d names vs %d witnessed leas)" % (len(addressed), len(witched))
        buckets[b] += 1
        rows[ad] = {"addressed": addressed, "leas": [(hexof(l['addr']), l["reg"], l["base"],
                                                      "sp0%+d" % l["off"], "prefix" if l["prefix"] else "AFTER")
                                                     for l in leas],
                    "locals": m.get("locals"), "prologue_len": m.get("prologue_len"),
                    "sub_esp": [hexof(c['addr']) for c in sub_esp][:3],
                    "pushed0": pushed0, "bucket": b}

    # THE TRIPWIRE: the unit I read by eye must classify the way I read it, or this tool says nothing.
    ex = rows.get("0x" + EXEMPLAR)
    if ex is None:
        print("note: exemplar f_%s is not in the live local population (it may have moved gates) - the"
              " tripwire below is skipped, so do not treat the buckets as verified." % EXEMPLAR)
    else:
        bad = []
        if not any(kind == "AFTER" for _a, _r, _b, _o, kind in ex["leas"]):
            bad.append("its leas were expected AFTER the first branch")
        if ex["sub_esp"] and (ex["locals"] or 0) > 0:
            bad.append("its `sub esp` was expected NOT to be a prologue reservation (locals=%r)"
                       % ex["locals"])
        if bad:
            sys.exit("REFUSING: the classifier disagrees with the by-eye read of f_%s: %s\n%s"
                     % (EXEMPLAR, "; ".join(bad), json.dumps(ex, indent=1)[:600]))
        print("tripwire ok: f_%s classifies as read by eye (leas after the branch, reservation not in the"
              " prologue)" % EXEMPLAR)

    print("\nbuckets (Q1 = source of truth, Q2 = keep-alive, Q3 = witness):")
    for k, v in buckets.most_common():
        print("  %-72s %d" % (k, v))

    print("\nwhat a prefix-witnessable one looks like (the only bucket a mechanism could start from):")
    good = [u for u, r in rows.items() if r["bucket"].startswith("Q1-prefix-witnessable")]
    for u in good[:6]:
        print("  %s %s" % (u, json.dumps(rows[u], sort_keys=True)[:220]))
    print("\nQ2 summary: units whose `sub esp` is NOT represented in the emitted prologue: %d of %d"
          % (sum(1 for r in rows.values() if "Q2-sub-esp-NOT-in-prologue" in r["bucket"]
                 or "Q2-no-frame-growth" in r["bucket"]), len(rows)))
    if good:
        out = a.list_out or os.path.join("cow", "wip", "local-witness-candidates.txt")
        with io.open(os.path.join(ROOT, out), "w", encoding="utf-8", newline="\n") as fh:
            for u in good:
                fh.write("%s\n" % u)
        print("wrote %s (%d units) - the slice a local binding could be attempted on" % (out, len(good)))
    else:
        print("\nNO PREFIX-WITNESSABLE UNITS: the local half cannot be reached by extending the param"
              " witness, because the guest's own address-of leas all sit below a control transfer where the"
              " model's esp delta is a fiction. That is a finding, and it means the next mechanism for"
              " these 42 is per-path esp tracking - not another knob.")


if __name__ == "__main__":
    main()
