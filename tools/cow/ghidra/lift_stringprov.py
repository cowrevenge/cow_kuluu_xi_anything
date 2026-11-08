"""Where does a `rep` string operation's destination actually come from? The question that prices this
family, after the frame story turned out to be shakier than the note claimed.

`lift_stringframe.py` reported 57% "frame-bound", and on that number the queue's action says to build the
frame-aliasing model before writing any rep loop. But its own docstring admits the other 43% came back
`other` from an operand walk too crude to price them, and a first look at real units says most of them
declare NO Ghidra locals at all - which is not what a deleted frame looks like.

So classify each `rep` by the PROVENANCE of the three registers the x86 string ops read (esi source, edi
destination, ecx count), following only instructions the generated body shows executing, and only as far as
it can go without guessing:

  const        an immediate (`mov ecx, 0x25`)
  param        the entry's own argument register (`mov edi, ecx` where ecx arrived populated)
  never-written  a register the body never writes, so g->reg at the call IS the guest's value
  load         written by a memory read (`mov edi, [eax+4]`) - nameable only by the frame model
  stack        written from esp/ebp (`lea edi,[esp+0xc]`) - THE FRAME-BOUND CLASS
  derived      an arithmetic combination of the above (`add edi, eax`)
  unnameable   anything else

`stack` and `load` are the frame model's; `const`/`param`/`never-written`/`derived` over them are liftable
TODAY by a loop built from x86 facts (width from the mnemonic, direction from df). If the first set is small
and the second large, the queue's action is wrong and the loop should be written first - which is the kind
of reversal this repo has needed three times this week, each time found by a measurement that disagreed with
a plausible story.

Read-only.

    python tools/cow/ghidra/lift_stringprov.py
    python tools/cow/ghidra/lift_stringprov.py --n 400 --seed 7
"""
import argparse
import collections
import json
import os
import random
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")
REGS = ("esi", "edi", "ecx")

# Which registers each string mnemonic actually READS, from the x86 ISA - not from the oracle's rendering.
# Asking about esi on a `scas` (which uses only edi/eax/ecx) scores a unit load-bound for a register the
# instruction never touches, and asking about the wrong set on `movs` hides one. The set is what makes the
# class trustworthy; guessing it is how the 57% figure got believed for a day.
USES = {
    "stos": ("edi", "ecx", "eax"), "stosb": ("edi", "ecx", "eax"),
    "stosd": ("edi", "ecx", "eax"), "stosw": ("edi", "ecx", "eax"),
    "lodsb": ("esi", "ecx", "edi"), "lodsd": ("esi", "ecx", "edi"), "lodsw": ("esi", "ecx", "edi"),
    "scas": ("edi", "ecx", "eax"), "scasb": ("edi", "ecx", "eax"),
    "scasd": ("edi", "ecx", "eax"), "scasw": ("edi", "ecx", "eax"),
    "movs": ("esi", "edi", "ecx"), "movsb": ("esi", "edi", "ecx"),
    "movsd": ("esi", "edi", "ecx"), "movsw": ("esi", "edi", "ecx"),
    "cmps": ("esi", "edi", "ecx"), "cmpsb": ("esi", "edi", "ecx"),
    "cmpsd": ("esi", "edi", "ecx"), "cmpsw": ("esi", "edi", "ecx"),
}


def string_regs(c):
    """The registers this rep form actually reads. Falls back to all three when the text does not name a
    mnemonic we can map - pessimistic, because a wrong `liftable` is the dangerous direction."""
    t = ((c.get("text") or "") + " " + (c.get("mnem") or "")).lower()
    hits = [r for m, rs in USES.items()
            if re.search(r"\b" + m + r"\b", t) for r in rs]
    return tuple(sorted(set(hits))) or REGS


def provenance(ins, reg, limit=40, upto=None):
    """Follow REG back through the executed instructions until it is explained or we stop. Depth-bounded,
    and it never guesses: an unexplained register is reported as such, not assumed to be a parameter.

    `upto` is the index of the rep instruction, and the walk may only look at instructions BEFORE it. That
    matters more than it sounds: without it a register written by a load AFTER the string operation makes the
    unit look load-bound when the value at the rep was a constant (and the reverse - a stale value from the
    top of the body - is even worse, because it is optimistic). Provenance is a property of a POINT in the
    program, not of a register name.
    """
    end = len(ins) if upto is None else upto
    seen, depth = set(), 0
    for k in range(end - 1, -1, -1):
        c = ins[k]
        if depth > limit:
            return "walk-too-long"
        mnem, op = c["mnem"], (c["op"] or "")
        if not op or not op.startswith(reg + ","):
            if not (mnem in ("mov", "lea", "xor", "add", "sub", "and", "or") and op.startswith(reg + ",")):
                continue
        depth += 1
        src = op.partition(",")[2].strip()
        if mnem == "lea":
            if "esp" in src or "ebp" in src:
                return "stack"
            return "derived"
        if mnem == "xor" and src == reg:
            return "const"
        if src.startswith("0x") or src.isdigit():
            return "const"
        if "ptr" in src or "[" in src:
            return "load"
        if src in REGS and src != reg:
            if src in seen:
                return "cycle"
            seen.add(src)
            if depth >= 3:
                return "derived"
            return provenance(ins, src, limit, upto=k)
        if src == reg:
            return "derived"
        return "unnameable:" + src[:14]
    return "never-written"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=300)
    ap.add_argument("--seed", type=int, default=7)
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--show", type=int, default=6)
    a = ap.parse_args()

    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k.lower().replace("0x", "") for k, v in refusals.items()
             if str(v).startswith("string_op_not_modelled")]
    random.Random(a.seed).shuffle(addrs)
    addrs = addrs[:a.n]
    bodies = trivial_audit.body_index()

    per_reg = collections.defaultdict(collections.Counter)   # registers come from the ISA table, not a fixed trio
    unit_class = collections.Counter()
    ops_seen = collections.Counter()
    ex = collections.defaultdict(list)
    n_units = 0
    for key in sorted(addrs):
        gbody = bodies.get(key)
        if not gbody:
            continue
        m = gen_model.model_generated(gbody)
        if not m:
            continue
        ins = m["ins"]
        reps = [(i, c) for i, c in enumerate(ins) if (c["mnem"] or "").startswith("rep")
                or c["mnem"] in ("movs", "stos", "scas", "cmps", "movsd", "movsb", "stosd", "stosb",
                                 "lodsb", "lodsd")]
        if not reps:
            unit_class["no rep instruction seen at all"] += 1
            continue
        n_units += 1
        for _i, c in reps:
            ops_seen[(c.get("mnem") or "?")[:12]] += 1
        # classify EVERY rep in the unit and take the WORST: a unit is lifted only if all of its string
        # operations are liftable, so pricing the unit on its first rep (or on the body as a whole) would
        # overstate whatever the emitter could actually accept.
        worst_rank, cls, relevant = 0, {}, set()
        for i, c in reps:
            for r in string_regs(c):
                relevant.add(r)
                p = provenance(ins, r, upto=i)      # the value AT THIS rep, not anywhere in the body
                per_reg[r][p] += 1
                rank = 4 if p == "stack" else 3 if p == "load" else 2 if (
                    p.startswith("unnameable") or p in ("walk-too-long", "cycle")) else 1
                if rank > worst_rank:
                    worst_rank, cls = rank, {r: p}
                elif rank == worst_rank:
                    cls[r] = p
        regs = tuple(sorted(relevant)) or REGS
        stacky = [r for r in regs if cls.get(r) == "stack"]
        loady = [r for r in regs if cls.get(r) == "load"]
        hard = [r for r in regs if str(cls.get(r, "")).startswith("unnameable")
                or cls.get(r) in ("walk-too-long", "cycle")]
        if stacky:
            label = "FRAME-BOUND (stack-provenance in %s)" % ",".join(stacky)
        elif loady:
            label = "load-bound (%s) - needs a named value, not the frame" % ",".join(loady)
        elif hard:
            label = "unnameable (%s)" % ",".join(hard)
        else:
            label = "LIFTABLE TODAY: all of esi/edi/ecx explained without the frame"
        # bucket the example by THIS unit's own class. The first version used `unit_class.most_common(1)`,
        # i.e. whatever class happened to be leading the counter at that moment, so a load-bound unit was
        # printed under [FRAME-BOUND] and a reader would have concluded the frame was the blocker for it.
        unit_class[label] += 1
        top = label.split(" (")[0]
        if len(ex[top]) < a.show:
            ex[top].append((key, cls))

    print("sampled %d units of string_op_not_modelled; %d have a rep form" % (len(addrs), n_units))
    print("\n-- rep mnemonics seen --")
    for k, v in ops_seen.most_common(8):
        print("  %6d  %s" % (v, k))
    print("\n-- per-register provenance --")
    for r in sorted(per_reg):
        line = ", ".join("%s=%d" % (k, v) for k, v in per_reg[r].most_common(6))
        print("  %-4s %s" % (r, line))
    print("\n-- per unit: what would have to be modelled --")
    for k, v in unit_class.most_common(10):
        print("  %6d  %s" % (v, k))
    # Grouped, from the same counter the per-unit classes came from. Reading ten rows and adding them up in
    # one's head (or in a shell one-liner, which I tried and which silently reported 0) is how a number gets
    # into a queue action without anyone being able to point at where it came from.
    print("\n-- grouped (this is the decision table) --")
    tot = sum(unit_class.values())
    grp = collections.Counter()
    for k, v in unit_class.items():
        head = k.split(" (")[0]
        grp["liftable without a new model" if head.startswith("LIFTABLE") else
            "frame-bound (needs the frame model)" if head.startswith("FRAME") else
            "load-bound (needs named loads; shared with indirect)" if head.startswith("load") else
            "unnameable / walk gave up" if head.startswith("unnameable") else head] += v
    for k, v in grp.most_common():
        print("  %6d  %5.1f%%  %s" % (v, 100.0 * v / tot, k))
    print("\n-- examples --")
    for g, rows in list(ex.items())[:5]:
        print(" [%s]" % g)
        for key, cls in rows[:a.show]:
            print("  0x%s  %s" % (key, cls))
    return 0


if __name__ == "__main__":
    sys.exit(main())
