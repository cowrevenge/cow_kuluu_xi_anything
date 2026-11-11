"""Before anyone writes the `rdf32(frame+N)` push naming: is the assumption even true?

`push-operand-wall.md` found 319 units whose ONLY push-naming gap is a frame/stack-relative operand,
including f_10316337, the callee behind 116 `hang` rows. The proposal: name such an operand by reading the
guest memory the guest itself read. Three widenings of `_push_values` have already been released and
killed at the proof (10%, "sound but empty", 8.6%), so the next one earns its keep only if the shape of
the problem is checked FIRST, not assumed.

Two quite different operands hide behind `[ebp+N]`, and only one is a memory read:

  [ebp+8] and above   - the caller's stack arguments, in the region the adapter already models (it emits
                        `uint32_t sp0 = g->esp;` for exactly this). A read is plausible.
  [ebp-4], [ebp-0x14] - the callee's OWN locals. In f_10316337 that is `mov dword ptr [ebp - 4], eax` at
                        10316341, which Ghidra turned into a C LOCAL. Our lifted body never writes that
                        stack slot, so `rdf32(ebp-4)` would read whatever the harness left there: a
                        confident, wrong value, and a unit that then fails at `memory` and looks like a
                        lifting bug rather than a naming bug.

If the 319 are mostly the second kind, the feature is not "read the frame" but "keep the frame slot
alive" - a different and much larger job. So classify EVERY frame/stack push at EVERY site of a unit, not
just the first bail `_push_values` happened to report: a unit whose first bail is an innocent `[ebp+8]`
can still be hiding a `[ebp-0x14]` behind it, and a design judged on the first bail alone would be built
for a case that then fails on the second.

And the hazard that makes ANY deferred read unsound: the guest read the word at the PUSH address P, our
bridge evaluates at the CALL address C. A memory write - or a write to ebp - in (P, C) means the two are
not reading the same moment, so such sites are excluded regardless of kind.

Tripwires: (a) the exemplar f_10316337 must classify as an arg-slot read WITH frame setup and NO hazard -
that is the claim on the table, read off the file by eye, and if the tool disagrees with the file the tool
is wrong; (b) the classifier must be able to produce a LOCAL-SLOT verdict at all, or "0 units need the
hard case" is a dead-filter result and not a finding.
"""
import collections
import io
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
os.environ["COW_MODEL_NPUSH_FRAME_AWARE"] = "1"   # measure the population the walk fix produced
import gen_model  # noqa: E402
import trivial_audit  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
CAND = os.path.join(ROOT, "cow", "wip", "frame-naming-candidates.txt")

EX_UNIT = "10316337"
OFF_RE = re.compile(r"^dwordptr\[(ebp|esp)(?:([-+])(0x[0-9a-f]+|\d+))?\]$")


def parse_op(op):
    """(base, signed offset). The SIGN comes from its own group - reading only the digits made
    [ebp-4] parse as +4, which hid every local slot behind OFFSET-LOW and made '0 units need the hard
    case' look true. A sign that is parsed and then thrown away is the quietest dead filter there is."""
    m = OFF_RE.match(str(op or "").strip().lower().replace(" ", ""))
    if not m:
        return None
    sign, digits = m.group(2), m.group(3)
    val = int(digits, 0) if digits else 0
    return m.group(1), (-val if sign == "-" else val)


def pushes_before_call(ins, call_addr, k):
    """The k push instructions nearest below the call, in push order (oldest first)."""
    got = [c for c in ins if c["mnem"] == "push" and c["addr"] < call_addr]
    return got[-k:] if k and len(got) >= k else got


def writes_between(ins, lo, hi, ignore=frozenset()):
    """A real memory write strictly between lo and hi.

    `ignore` MUST carry the call's own argument pushes. `_writes_memory` is true for a push - a push
    writes memory, that is its job - so without this the eight pushes of one call are each other's
    "hazard", every push except the last is declared UNSAFE, and the classification collapses: the first
    version of this tool reported 116 unsafe units and ZERO local-slots, while the exemplar visibly
    pushes [ebp-4]. A hazard has to be a write that is NOT part of the push run whose value we are
    trying to name.
    """
    for c in ins:
        if lo < c["addr"] < hi and c["addr"] not in ignore:
            if gen_model._writes_memory(c):
                return "mem-write:%s" % c["mnem"]
            if c["mnem"] == "mov" and (c["op"] or "").startswith("ebp,"):
                return "ebp-write"
    return None


def classify_unit(a, bl):
    """Set of verdicts this unit needs. Every frame/stack push at every site - not just the first bail."""
    try:
        m = gen_model.model_generated(bl)
    except Exception:
        return {"model-failed"}, {}
    ins = m.get("ins") or []
    has_frame = any(c["mnem"] == "mov" and re.match(r"^ebp,\s*esp$", c["op"] or "") for c in ins)
    cats, detail = set(), []
    for s in (m.get("call_sites") or []):
        why = str(s.get("push_values_why") or "")
        if not why.startswith("unnameable:"):
            continue                       # this unit's gap is elsewhere; the 319 filter says it isn't
        pushed = s.get("pushed") or []
        if not pushed:
            cats.add("no-pushed-record")
            continue
        call_addr = s["addr"]
        ops = pushes_before_call(ins, call_addr, len(pushed))
        own = frozenset(c["addr"] for c in ops)      # the call's own pushes are not a hazard to each other
        for c in ops:
            parsed = parse_op(c["op"])
            if not parsed:
                continue                   # a plain register or something else: not this feature's case
                # (the 319 filter already guarantees no plain-register bail; noted, not counted here)
            base, off = parsed
            haz = writes_between(ins, c["addr"], call_addr, own)
            if haz:
                cats.add("UNSAFE:%s" % haz)
                detail.append((a, hex(c["addr"]), haz))
            elif base == "esp":
                cats.add("ESP-SLOT")
            elif off >= 8:
                cats.add("ARG-SLOT" if has_frame else "ARG-SLOT-NO-FRAME")
            elif off < 0:
                cats.add("LOCAL-SLOT")
                detail.append((a, hex(c["addr"]), "local %d" % off))
            else:
                cats.add("OFFSET-LOW")
    return cats, detail


def main():
    if not os.path.exists(CAND):
        sys.exit("REFUSING: %s missing - run lift_push_operand_census.py --unit-yield --list-out first"
                 % CAND)
    units = [l.strip().lower().replace("0x", "") for l in io.open(CAND, encoding="utf-8") if l.strip()]
    if not units or EX_UNIT not in units:
        sys.exit("REFUSING: candidate list missing or the exemplar is not in it")
    bodies = trivial_audit.body_index()

    per_unit = {}
    detail = []
    site_tally = collections.Counter()
    for a in units:
        bl = bodies.get(a)
        if not bl:
            per_unit[a] = {"no-body"}
            continue
        cats, det = classify_unit(a, bl)
        per_unit[a] = cats
        detail += det
        for k in cats:
            site_tally[k] += 1

    print("=" * 100)
    print("is `rdf32(frame+N)` a real feature or a wrong-value generator?  (%d candidate units)" % len(units))
    print("=" * 100)
    print("  units needing each verdict (a unit can need more than one):")
    for k, n in site_tally.most_common():
        print("    %-28s %5d" % (k, n))

    def only(*pred):
        return [a for a, ks in per_unit.items() if ks and all(any(p(k) for p in pred) for k in ks)]

    buildable = only(lambda k: k == "ARG-SLOT")
    needs_hard = [a for a, ks in per_unit.items() if "LOCAL-SLOT" in ks]
    esp_only = [a for a, ks in per_unit.items() if ks == {"ESP-SLOT"}]
    no_frame = [a for a, ks in per_unit.items() if ks and all(k in ("ARG-SLOT-NO-FRAME",) for k in ks)]
    unsafe = [a for a, ks in per_unit.items() if any(k.startswith("UNSAFE") for k in ks)]

    print()
    print("  DECISION TABLE")
    print("    clean arg-slot read, frame present, no hazard      : %4d  <- the only sound case" % len(buildable))
    print("    arg-slot but NO frame setup (ebp is the caller's)  : %4d  <- different address model" % len(no_frame))
    print("    needs a LOCAL-SLOT kept alive (not a memory read)  : %4d  <- the hard job" % len(needs_hard))
    print("    esp-relative only                                  : %4d" % len(esp_only))
    print("    unsafe (a write lands between push and call)       : %4d" % len(unsafe))
    print("    unclassifiable / no gap seen                       : %4d"
          % (len(units) - len(set(buildable) | set(needs_hard) | set(esp_only) | set(no_frame) | set(unsafe)))
          )
    if detail[:8]:
        print("\n  examples:")
        for a, addr, what in detail[:8]:
            print("    f_%s  push@%s  %s" % (a, addr, what))

    if "--list-out" in sys.argv:
        # the number is the argument, the list is the work: a future turn should not have to re-derive
        # which 82 units survived the filter
        path = sys.argv[sys.argv.index("--list-out") + 1]
        with io.open(os.path.join(ROOT, path), "w", encoding="utf-8", newline="\n") as fh:
            for a in sorted(buildable):
                fh.write("0x%s\n" % a)
        print("\n  wrote %d clean arg-slot units -> %s" % (len(buildable), path))
        path2 = path.replace(".txt", "-needs-local.txt")
        with io.open(os.path.join(ROOT, path2), "w", encoding="utf-8", newline="\n") as fh:
            for a in sorted(needs_hard):
                fh.write("0x%s\n" % a)
        print("  wrote %d local-slot units -> %s   (NOT reachable by a memory read)" % (len(needs_hard), path2))

    # --- tripwire (a): the exemplar, as read by eye off funcs_052.c
    ex = per_unit.get(EX_UNIT) or set()
    if not ex:
        sys.exit("REFUSING: the exemplar f_%s classified into NOTHING - the classifier cannot see the "
                 "site that motivated this thread" % EX_UNIT)
    print("\n  exemplar f_%s -> %s" % (EX_UNIT, ", ".join(sorted(ex))))
    ok = ("ARG-SLOT" in ex and "LOCAL-SLOT" not in ex
          and not any(k.startswith("UNSAFE") for k in ex) and "ARG-SLOT-NO-FRAME" not in ex)
    if ok:
        print("  tripwire OK: the 116-row prize is a clean arg-slot read with frame setup and no hazard.")
    else:
        print("  TRIPWIRE FAILS: the exemplar is NOT the clean arg-slot case the design assumes")
        print("  (f_10316337 has `push ebp; mov ebp, esp` and pushes [ebp+8] immediately before the call).")
        print("  Read the tool before the file: a verdict that disagrees with the bytes is a bug here.")

    # --- tripwire (b): can LOCAL-SLOT ever fire? "0 units need the hard case" must be earned
    if "LOCAL-SLOT" not in site_tally:
        print("\n  WARNING: LOCAL-SLOT never fired across %d units. That is either true or a dead filter;"
              % len(units))
        print("  do not conclude 'locals are not the problem' from it without checking a unit that has")
        print("  a [ebp-N] push by eye (f_10316337 itself pushes [ebp-4]).")
    else:
        print("\n  LOCAL-SLOT fires (%d unit(s)) - the hard-case count above is a measurement, not an"
              % site_tally["LOCAL-SLOT"])
        print("  absence of evidence.")


if __name__ == "__main__":
    main()
