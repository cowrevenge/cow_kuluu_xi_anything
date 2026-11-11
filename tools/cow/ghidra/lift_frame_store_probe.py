"""The shape says it all once the labels are right: the reference side WROTE, our side left ZERO.

Correcting the swapped A/B label turned an ambiguous table into a one-sided one: the dominant shapes are
all `A(theirs)=<value> / B(ours)=00000000` inside the frame window - a small constant, an image pointer,
a stack pointer - and the histogram's store verdict for those rows is `missing`, i.e. our side never
wrote that address at all. That is not harness unfairness; it is a store the guest performed and the
lift did not reproduce.

The prime suspect is the one cowdiff.c itself names: *"on the STACK it is the frame - and a frame
difference is almost always the guest's own push slots, which is exactly where the lift's local_NN model
lives"*. The guest wrote `[esp+N]`; Ghidra rendered that as a C local; the lift emitted no store.

Testable statically, and here: does the generated body contain esp-relative writes that the shipped file
does not reproduce? A unit that has guest `[esp+N]` stores and no counterpart in our file is the
mechanism; a unit with none is something else, and gets counted separately instead of assumed.
"""
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_failure_patterns as L  # noqa: E402
import lift_frame_predicates as FP  # noqa: E402
import lift_clobber_predicate_blindness as T  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

# The GUEST writing a stack slot: a memory destination operand relative to esp, as the recompiler
# wrote it in the instruction comment. (`wr32((uint32_t)(esp ...)`, which the first version of this
# regex demanded, is a spelling the generator never produces - a dead filter, and it reported
# "hypothesis dead" for 748 units.)
GUEST_STACK_WRITE = re.compile(
    # the recompiler puts the size keyword and `ptr` between the mnemonic and the operand:
    #   /* 10002e69: mov dword ptr [esp + 4], eax */
    # requiring `[esp` right after the mnemonic is what made the first two versions of this filter
    # dead - and the can-fire tripwire below is what stopped a dead filter becoming a conclusion.
    r"/\*\s*[0-9a-f]{8}:\s*(?:mov|movdqa?|movaps?|lea|and|or|xor|sub|add|shl|shr|rol|ror|neg|not|"
    r"inc|dec|movbe|cvtsi2s[dx]|movss|movsd|movups)\s+"
    r"(?:(?:byte|word|dword|fword|qword|tbyte)\s+ptr\s+)?"
    r"\[\s*esp\s*[-+]\s*(?:0x[0-9a-f]+|\d+)\s*\]",
    re.I)
# What our lift does instead: a C local. The ONLY way a stack slot survives into memory is an explicit
# esp-relative write, which the adapter emits for pushes and nothing else.
OURS_STACK_WRITE = re.compile(r"wr(8|16|32|64)\(\s*(?:g->)?esp\b|wr(8|16|32|64)\(\s*\(\s*uint32_t\s*\)\s*\(\s*(?:g->)?esp\b")

# can-fire tripwire: a unit whose generated body demonstrably writes [esp+N] must be detected, or the
# whole measurement below is a zero from a filter that cannot see its input.
# Verified by scanning generated bodies for a destination operand at [esp+N]:
#   0x10002e60 has `/* 10002e69: mov dword ptr [esp + 4], ... */` - a WRITE.
# The two earlier candidates were both wrong: 0x10004d80 only READS [esp+4] (`mov edx, dword ptr
# [esp + 4]`), and 0x1002f130 was never checked. A tripwire has to be an exemplar someone looked at.
TRIPWIRE = "10002e60"
TRIPWIRE_EXPECT_TRUE = True


def main():
    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    unpaired = set(FP.unpaired_population())
    overpop = {a for a in FP.lifted_units() if FP.adapter_overpops(FP.read_unit(a))}
    fam = [a for a, v in d.items()
           if not v.get("pass") and L.group(v)[:2] == ("memory", "stack")
           and L.group(v)[3] == "both-fault" and a not in unpaired and a not in overpop]
    if not fam:
        sys.exit("REFUSING: no clean family members - the population or the join changed")

    # prove the predicate can fire BEFORE trusting any count built from it
    tw = "\n".join(T.blines(TRIPWIRE) or [])
    if not tw:
        sys.exit("REFUSING: tripwire unit 0x%s is not in the generated index" % TRIPWIRE)
    fired = bool(GUEST_STACK_WRITE.search(tw))
    print("  predicate can-fire: 0x%s guest [esp+N] write detected = %s (expected %s)"
          % (TRIPWIRE, fired, TRIPWIRE_EXPECT_TRUE))
    if fired != TRIPWIRE_EXPECT_TRUE:
        sys.exit("REFUSING: the stack-write predicate cannot see the unit it was written against - "
                 "every count below would be a zero from a blind filter")

    has_guest, we_reproduce, we_dont, no_record = 0, 0, 0, 0
    examples = []
    for a in fam:
        bl = T.blines(a)
        if not bl:
            no_record += 1
            continue
        g = "\n".join(bl)
        n_guest = len(GUEST_STACK_WRITE.findall(g))
        if not n_guest:
            continue
        has_guest += 1
        t = FP.read_unit(a)
        n_ours = len(OURS_STACK_WRITE.findall(t))
        if n_ours:
            we_reproduce += 1
        else:
            we_dont += 1
            if len(examples) < 8:
                m = GUEST_STACK_WRITE.search(g)
                addr = m.group(0)[:52] if m else "?"
                examples.append("0x%-10s guest writes %d esp slot(s), ours %d   e.g. %s"
                                % (a, n_guest, n_ours, addr))

    print("=" * 76)
    print("the frame-store hypothesis, on the %d family members the three predicates do NOT explain"
          % len(fam))
    print("=" * 76)
    print("  generated body writes [esp+N] at all        : %d" % has_guest)
    print("  ... and OUR file reproduces an esp-relative write : %d" % we_reproduce)
    print("  ... and OUR file has NONE                     : %d  <- the mechanism, if it dominates"
          % we_dont)
    print("  no generated record (cannot judge)            : %d" % no_record)
    if has_guest == 0:
        print("\n  The hypothesis is DEAD as stated: none of these units has an esp-relative store in the")
        print("  reference at all. The missing writes are somewhere else, and 'locals not reproduced'")
        print("  must not be quoted as the cause.")
    else:
        print("\n  e.g.:")
        for e in examples:
            print("    " + e)
        share = 100.0 * we_dont / max(1, has_guest)
        print("\n  %.0f%% of the units that DO have guest esp-slot stores reproduce none of them." % share)
        print("  Still not a verdict: this counts WRITES, not whether the compared word is one of them.")
        print("  The honest next step is one unit read end to end - generated body, our file, and the")
        print("  address the harness named - before a fix is written against 748 rows.")


if __name__ == "__main__":
    main()
