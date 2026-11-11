"""Aggregate a fresh `lift.py` report-only histogram into CLASSES.

`lift.py` prints one line per distinct reason string, and the big classes are parameterised with an
address - `argcount_mismatch_10255260_ghidra2_push4`, `calls_unknown_symbol_SetEnvironmentVariableA`,
`cleanup_mismatch_100a1770` - so the raw table shows hundreds of `1`s and hides the pattern the queue is
supposed to rank. `lift-notes.md`'s whole-image table has exactly this problem in frozen form: it still
lists `does_not_compile_C2100 1295` long after the stranded-deref-star fix took C2100 from 749 to 15
(lift-notes.md:415, :557). Choosing a target off a stale histogram costs a turn, so this regenerates it.

Stripping is name-based, not hex-based: a symbol like `SetEnvironmentVariableA` has no hex in it and must
still collapse into `calls_unknown_symbol`, while `indirect_call_via_code_ptr` has no suffix at all.
"""
import collections
import io
import re
import sys

# known reason families, longest-first so `argcount_mismatch_indirect_...` does not fold into the plain one
FAMILIES = [
    "argcount_mismatch_indirect", "argcount_mismatch", "cleanup_mismatch", "calls_unknown_symbol",
    "indirect_call_via_code_ptr", "indirect_call_not_modelled", "string_op_not_modelled",
    "goto_or_labels", "x87_not_modelled", "no_ret_in_body", "leftover_unbridged_call",
    "bare_deref_width_unknown", "leftover_odd_width_type", "partial_register_write",
    "local_address_escapes", "leftover_overlay", "does_not_compile", "volatile_stack_write",
    "frame_asymmetry_unrestored", "no_adapter", "register_write_not_expressible",
]
LINE_RE = re.compile(r"^\s{2}(\S+)\s+(\d+)\s*$")


def family(reason):
    r = reason.lower()
    for f in FAMILIES:
        if r.startswith(f.lower()):
            return f
    # fall back: peel a trailing _<hex8>... / _<symbol> so one-off parameters do not fragment the class
    m = re.match(r"^([a-z_]+?)(?:_[0-9a-f]{6,}|_[A-Za-z][A-Za-z0-9_]*)$", r)
    return m.group(1) if m else r


def class_detail(raw, want):
    """Every distinct reason inside one class, biggest first.

    A class is only worth attacking when one MEMBER dominates it - 'argcount_mismatch: 2,702' is a
    landscape, 'string_op_not_modelled_operand_stack_frame: 480 of 512' is a job. This prints which one
    it is, so the next turn picks a cause and not a category.
    """
    agg = collections.Counter()
    for r, n in raw.items():
        if family(r) == want:
            agg[r] = n
    total = sum(agg.values())
    if not total:
        sys.exit("REFUSING: class %r has no members in this log" % want)
    print("  class %r: %d units across %d reason string(s)" % (want, total, len(agg)))
    for r, n in agg.most_common(20):
        print("    %6d (%5.1f%%)  %s" % (n, 100.0 * n / total, r))
    if len(agg) > 20:
        print("    ... %d more" % (len(agg) - 20))
    top = agg.most_common(1)[0]
    print()
    if top[1] >= 0.6 * total:
        print("  VERDICT: ONE cause owns this class (%.0f%%). That is a job, not a landscape."
              % (100.0 * top[1] / total))
    else:
        print("  VERDICT: spread across %d causes with the top at %.0f%%. Attacking it needs a slice, not"
              % (len(agg), 100.0 * top[1] / total))
        print("  a fix - expect the frame-walk pattern (one sub-shape, measured, priced) rather than a")
        print("  single edit.")


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else r"build/lift/refusals-fresh.log"
    lines = io.open(path, encoding="utf-8", errors="replace").read().splitlines()
    head = [l for l in lines if l.startswith("candidates:")]
    raw = {}
    for l in lines:
        m = LINE_RE.match(l)
        if m and not m.group(1).startswith(("candidates", "by")):
            raw[m.group(1)] = int(m.group(2))
    if not raw:
        sys.exit("REFUSING: no reason lines parsed from %s - check the run actually finished" % path)

    if "--class" in sys.argv:
        class_detail(raw, sys.argv[sys.argv.index("--class") + 1])
        return

    agg = collections.Counter()
    members = collections.defaultdict(list)
    for r, n in raw.items():
        f = family(r)
        agg[f] += n
        members[f].append((r, n))

    total = sum(agg.values())
    print("=" * 100)
    print("REFUSAL CLASSES, regenerated from a live report-only run (never from the frozen table)")
    print("=" * 100)
    if head:
        print("  %s" % head[0].strip())
    print("  distinct reason strings: %d   total refusals: %d" % (len(raw), total))
    print()
    print("  %-34s %8s %7s   %s" % ("class", "units", "share", "largest member"))
    print("  " + "-" * 92)
    for f, n in agg.most_common(18):
        top = max(members[f], key=lambda t: t[1])
        print("  %-34s %8d %6.1f%%   %s%s"
              % (f, n, 100.0 * n / total, top[0][:44],
                 "" if len(members[f]) == 1 else "  (+%d variants)" % (len(members[f]) - 1)))

    print()
    print("  WHY THIS EXISTS: the frozen table in lift-notes.md:167 still says `does_not_compile_C2100")
    print("  1295`, but that class was fixed at the emitter (lift-notes.md:415, :557 took C2100 from 749")
    print("  to 15). A stale histogram sends the next turn chasing a bug that is already gone.")


if __name__ == "__main__":
    main()
