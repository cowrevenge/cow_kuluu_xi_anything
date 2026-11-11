"""How much of `argcount_mismatch` (2,943 - the binding constraint) would the frame-binding design free?

The ranking has moved. `lift-notes.md`'s frozen table and last week's censuses treated the string family as
a target; `string-gate-was-masking-argcount.md` measured it and found 394 units clear that gate but only 36
lift, because **241 were waiting behind `argcount_mismatch`, now 2,943 units (14.2%)**. That class is the
real constraint, and `cow/skip_patterns.txt` parks it after three killed `g->reg` widenings - so the
question is not "can we name registers at push time" (three measured NOs) but:

    for the pushes that today come out `unnameable`, WHAT PRODUCED the register?

The 2026-11-07 census recorded one line that has never been followed up: `lea <r>,[esp+IMM] ~180` - a
pushed register whose value is a **frame-relative constant**. That is the same object the string family's
85% slice is, and it is nameable the moment the adapter binds the locals region it already reserves. If a
meaningful share of argcount's refusals is that shape, the frame-binding design pays across TWO classes,
and its true yield is ~36 (string) + whatever this measures - not either number alone.

Unit level, because this loop has already been fooled twice by site counts: a unit lifts only when EVERY
unnameable push at EVERY site is nameable. `lift_push_operand_census.py` said 319 sites looked salvageable
and the honest unit-level answer was 82; `lift_frame_read_feasibility.py` then said 82, and the price run
said 36. So this tool counts UNITS and refuses to print a site-level headline.

Tripwires: the population must be non-empty; the classifier must produce at least two verdicts; and the
shape the parked census named (`lea ecx,[esp+0x10]` feeding `push ecx`) must classify as frame-nameable,
built through the real parser.
"""
import collections
import io
import json
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
os.environ.pop("COW_MODEL_NPUSH_FRAME_AWARE", None)
os.environ.pop("COW_MODEL_STR_PROV_MEASURE", None)
import gen_model  # noqa: E402
import lift_frame_predicates as FP  # noqa: E402
import lift_strprov_shapes as SH  # noqa: E402  (root_shape / shape_of_producer - one definition each)
import trivial_audit  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
LIFT = os.path.join(ROOT, "tools", "cow", "ghidra", "lift.py")
DUMP = "D:/projects/ghidra/ghidra_out/functions_all.jsonl"
CACHE = os.path.join(ROOT, "build", "lift", "argcount-units.txt")
REGS = ("eax", "ecx", "edx", "ebx", "esi", "edi", "ebp", "esp")


def argcount_units(refresh=False):
    """Units refused with an argcount_mismatch reason, from a real report-only run (cached)."""
    if not refresh and os.path.exists(CACHE):
        out = [l.strip() for l in io.open(CACHE, encoding="utf-8") if l.strip()]
        if out:
            return out
    env = {k: v for k, v in os.environ.items() if not k.startswith("COW_")}
    p = subprocess.run([sys.executable, LIFT, "--dump", DUMP, "--verbose"],
                       cwd=ROOT, env=env, capture_output=True, text=True, timeout=5400)
    hits = set()
    for line in (p.stdout or "").splitlines():
        m = re.match(r"^\s*refuse\s+0x([0-9a-f]{8}):\s+argcount_mismatch", line)
        if m:
            hits.add(m.group(1))
    if not hits:
        sys.exit("REFUSING: no argcount_mismatch refusals parsed from a live report-only run - the "
                 "population is empty and every percentage would be an artefact")
    os.makedirs(os.path.dirname(CACHE), exist_ok=True)
    with io.open(CACHE, "w", encoding="utf-8", newline="\n") as fh:
        for a in sorted(hits):
            fh.write(a + "\n")
    return sorted(hits)


def site_verdicts(ins, site):
    """For one call site, how would each unnameable PUSHED REGISTER be produced?"""
    why = str(site.get("push_values_why") or "")
    if not why.startswith("unnameable:"):
        return []
    call_addr = site["addr"]
    out = []
    for word in (site.get("pushed") or []):
        w = str(word).strip().lower()
        if w not in REGS:
            continue                       # memory operand: a different tool's problem
        # index of the push that pushed this register, nearest below the call
        idx = None
        for i, c in enumerate(ins):
            if c["mnem"] == "push" and c["addr"] < call_addr and str(c["op"]).strip().lower() == w:
                idx = i
        if idx is None:
            out.append("push-not-found")
            continue
        root, _trail = SH.root_shape(ins, w, idx)
        if root.startswith("never-written"):
            # Distinguish before the crowd moves in. "No writer at or before the push" is NOT the rule
            # the graveyard entries were measured under. skip_patterns.txt priced "never written ANYWHERE
            # in the body" (sound, and nearly empty: 837 -> 833), and the loop then killed the weaker
            # "not written at any addr < call" at 5 of 58 = 8.6% pass, dominated by `memory` and
            # `callee-saved register`. A register written only AFTER the push passes my walk and would
            # have been booked here as a 466-unit discovery while being the third variant of an idea
            # that already failed. Split the two and let the numbers argue.
            written_anywhere = any(
                gen_model._writes_reg(c["mnem"], c["op"]) and gen_model._dst_reg(c["op"]) == w
                for c in ins)
            out.append("written-after-push (the 8.6%% variant)" if written_anywhere
                       else "never-written-anywhere (the sound-but-empty variant)")
            continue
        out.append(root)
    return out


def selftest():
    lines = ["/* 01000010: lea ecx, [esp + 0x10] */", "  { ecx = esp + 0x10u; }",
             "/* 01000014: push ecx */", "  { esp -= 4; wr32(esp, ecx); }",
             "/* 01000016: call 0x01000200 */", "  { f_01000200(g); }"]
    ins = gen_model.parse_instructions(lines)
    if len(ins) != 3:
        sys.exit("SELFTEST FAILED: fixture parsed to %d instructions (want 3)" % len(ins))
    root, _t = SH.root_shape(ins, "ecx", 1)
    if not root.startswith("CONSTANT-FRAME"):
        sys.exit("SELFTEST FAILED: `lea ecx,[esp+0x10]` feeding `push ecx` classified as %r - the exact "
                 "shape cow/skip_patterns.txt recorded as ~180 sites is invisible to this tool" % root)
    idx_lines = ["/* 01000010: lea ecx, [esp + edx] */", "  { ecx = esp + edx; }",
                 "/* 01000014: push ecx */", "  { esp -= 4; wr32(esp, ecx); }",
                 "/* 01000016: call 0x01000200 */", "  { f_01000200(g); }"]
    ins2 = gen_model.parse_instructions(idx_lines)
    root2, _t2 = SH.root_shape(ins2, "ecx", 1)
    if root2.startswith("CONSTANT-FRAME"):
        sys.exit("SELFTEST FAILED: an INDEXED root counted as frame-nameable - the payoff would be inflated")
    print("selftest: lea [esp+0x10] -> push ecx is frame-nameable; lea [esp+edx] is not")


def coblockers(units, per_unit):
    """For the units that need the frame binding AND something else: what IS the something else?

    831 units cleared every unnameable push except one or two. If a single co-cause dominates them, the
    actionable target is not 'the frame binding' (17 units on its own) and not 'the class' (2,884) - it is
    'frame + that one thing', and the number of units THAT frees is what decides whether anyone builds it.

    Costs are ranked by how many units they are the LAST obstacle for, and each is tagged with whether it
    already has a graveyard in front of it: a co-cause that is a fourth form of a killed experiment is not
    a cheap second half of a feature, it is a dead end with a friendly name.
    """
    DEAD_HINTS = ("written-after-push",)          # measured at 5 of 58 = 8.6% already
    # What the live co-blockers actually ARE, so a shape name is not mistaken for an unexplored idea.
    IDENTITY = {
        "not-lea:mov": "the register was LOADED from memory - this is the load/deref-width wall "
                       "(_operand_expr refuses loads; the indirect family records 1,051 of 1,051 refusing "
                       "sites as a two-load chain), not a fresh second half",
        "INDEXED lea": "depends on a register the body rewrites - no frame binding reaches it, ever",
        "not-lea:pop": "the value came from a pop - frame-shaped, but the pop is the adapter's business",
    }
    frame_ok = lambda k: k.startswith("CONSTANT-FRAME") or k.startswith("never-written-anywhere")

    others = collections.defaultdict(list)
    for a, ks in per_unit.items():
        if not ks or ks == {"no-unnameable-register-push"} or ks in ({"no-body"}, {"model-failed"}):
            continue
        if all(frame_ok(k) for k in ks):
            continue                              # the 17 - the frame binding alone finishes these
        blockers = [k for k in ks if not frame_ok(k)]
        if not any(frame_ok(k) for k in ks):
            continue                              # graveyard: the frame binding buys nothing here
        for k in blockers:
            others[k].append(a)

    total_partial = len(set(a for v in others.values() for a in v))
    print()
    print("=" * 100)
    print("the 831: what ELSE stands in the way, ranked by how many units it is the LAST obstacle for")
    print("=" * 100)
    rows = []
    for k, arr in others.items():
        # units whose ONLY non-frame blocker is this one -> frame + this = freed
        solo = [a for a in arr if len([x for x in per_unit[a] if not frame_ok(x)]) == 1]
        rows.append((k, len(arr), len(solo)))
    rows.sort(key=lambda t: -t[2])
    print("  %-46s %8s %10s   %s" % ("co-blocker", "appears", "LAST ONLY", "verdict"))
    print("  " + "-" * 96)
    for k, n_appear, n_solo in rows[:14]:
        if k.startswith(DEAD_HINTS):
            tag = "DEAD (8.6% pass, measured) - shown, never TARGETED"
        elif n_solo >= 10:
            tag = "candidate second half"
        else:
            tag = "small; not worth a design of its own"
        print("  %-46s %8d %10d   %s" % (k[:46].replace("%%", "%"), n_appear, n_solo, tag))

    # The TARGET must come from the LIVE causes only. The first version ranked the dead
    # `written-after-push` first and printed it as the recommendation while labelling it ALREADY DEAD
    # two columns earlier - a tool that contradicts itself in one screen is how a killed experiment
    # gets re-run by someone trusting the headline.
    live = [r for r in rows if not r[0].startswith(DEAD_HINTS)]
    best = live[0] if live else None
    print()
    if best and best[2] >= 10:
        print("  BEST LIVE TARGET: frame binding + '%s' would free %d units the frame binding alone "
              "cannot." % (best[0][:44].replace("%%", "%"), best[2]))
        for key, note in IDENTITY.items():
            if best[0].startswith(key):
                print("  ...but know what you are targeting: %s" % note)
        print("  Against the design's solo yield of 17, that is the comparison that decides the work - and")
        print("  'free' here still means the emitter produces a body. Proof is the only thing that books.")
    elif best:
        print("  No LIVE co-cause is the last obstacle for >=10 units. The 831 are gated by a long tail,")
        print("  and the two biggest names on it are already answered: the 8.6% written-after-push variant")
        print("  and the load/deref-width wall. So 'frame + one more thing' is NOT a plan - judge the frame")
        print("  binding on its own 17 (plus the string side's 36) and record the 831 as gated behind")
        print("  causes this loop has already measured.")
    else:
        print("  No live co-blockers recorded - check the partition above; that would mean every unit was")
        print("  cleared by the frame binding alone, which the table contradicts.")


def main():
    selftest()
    units = argcount_units()
    print("argcount_mismatch units from a live report-only run: %d" % len(units))
    bodies = trivial_audit.body_index()

    per_unit = {}
    verdict_tally = collections.Counter()
    for a in units:
        bl = bodies.get(a)
        if not bl:
            per_unit[a] = {"no-body"}
            continue
        try:
            m = gen_model.model_generated(bl)
        except Exception:
            per_unit[a] = {"model-failed"}
            continue
        ins = m.get("ins") or []
        vs = []
        for s in (m.get("call_sites") or []):
            vs += site_verdicts(ins, s)
        if not vs:
            # refused on argcount but no unnameable PUSHED REGISTER: the bail is a memory operand or a
            # different reason entirely - counted, never folded into the frame story
            per_unit[a] = {"no-unnameable-register-push"}
        else:
            per_unit[a] = set(vs)
            for v in vs:
                verdict_tally[v] += 1

    def frameable(ks):
        return bool(ks) and all(k.startswith("CONSTANT-FRAME") for k in ks)

    def never_written_only(ks):
        # NOT the graveyard. gen_model's own rule treats a register the body never writes as provably
        # still the incoming value (`g->R`), and the narrow fallback built on exactly that argument was
        # measured as "sound but almost empty: 837 -> 833". If this population disagrees, the
        # disagreement IS the finding - so it is its own named bucket, never folded into either side.
        return bool(ks) and all(k.startswith("CONSTANT-FRAME") or k.startswith("never-written")
                                for k in ks)

    def has_frame(ks):
        return bool(ks) and any(k.startswith("CONSTANT-FRAME") for k in ks)

    def has_nw(ks):
        return bool(ks) and any(k.startswith("never-written") for k in ks)

    SKIP = ({"no-body"}, {"model-failed"}, {"no-unnameable-register-push"})
    real = {a: ks for a, ks in per_unit.items() if ks not in SKIP}
    no_push = [a for a, ks in per_unit.items() if ks == {"no-unnameable-register-push"}]
    unscanned = [a for a, ks in per_unit.items() if ks in ({"no-body"}, {"model-failed"})]

    # An explicit PARTITION, evaluated most-specific first. The first version let the "no unnameable
    # push" units fall into `blocked` too, and the remainder printed -196: arithmetic announcing its
    # own double count. Assert instead of noticing.
    free = [a for a, ks in real.items() if frameable(ks)]
    nw_only = [a for a, ks in real.items() if never_written_only(ks) and a not in free]
    partial = [a for a, ks in real.items()
               if (has_frame(ks) or has_nw(ks)) and a not in free and a not in nw_only]
    graveyard = [a for a, ks in real.items()
                 if a not in free and a not in nw_only and a not in partial]
    assert len(free) + len(nw_only) + len(partial) + len(graveyard) == len(real), "not a partition"
    assert len(real) + len(no_push) + len(unscanned) == len(units), "units unaccounted for"

    print()
    print("=" * 100)
    print("argcount_mismatch: what produced the register that today comes out unnameable")
    print("=" * 100)
    for k, n in verdict_tally.most_common(12):
        print("    %-46s %5d" % (k, n))
    print()
    print("  DECISION TABLE (units, not sites - an asserted partition)")
    print("    every unnameable push frame-nameable     : %4d  <- the frame binding alone clears these"
          % len(free))
    print("    + never-written (provable incoming reg)  : %4d  <- the second nameable case" % len(nw_only))
    print("    some are, at least one is not            : %4d  <- needs this AND something else"
          % len(partial))
    print("    none are                                 : %4d  <- graveyard (loads, chains, pop, movsx)"
          % len(graveyard))
    print("    no unnameable REGISTER push at all       : %4d  <- a different bail; not this design"
          % len(no_push))
    print("    unscanned (no body / model failed)       : %4d" % len(unscanned))
    print("    " + "-" * 60)
    print("    total                                    : %4d  (must equal %d)"
          % (len(free) + len(nw_only) + len(partial) + len(graveyard) + len(no_push) + len(unscanned),
             len(units)))
    print()
    print("  READ THE FIRST TWO LINES TOGETHER: the frame-binding design's argcount yield is %d units"
          % len(free))
    print("  on its own, %d counting the never-written case, and %d more need it PLUS something else."
          % (len(free) + len(nw_only), len(partial)))
    print("  Its string yield was 36 (string-gate-was-masking-argcount.md). Quoting one figure understates")
    print("  the design; quoting the SITE counts above would overstate it, because a unit clears only when")
    print("  EVERY unnameable push at EVERY site is nameable - the 319-to-82 lesson, already unlearned")
    print("  twice. And 'clears' means 'the emitter produces a body', never 'passes cowdiff'.")
    if free:
        print("\n  frame-only candidates: %s" % ", ".join("0x" + a for a in free[:10]))
    if nw_only:
        print("  never-written candidates: %s" % ", ".join("0x" + a for a in nw_only[:10]))

    if "--coblockers" in sys.argv:
        coblockers(units, per_unit)


if __name__ == "__main__":
    main()
