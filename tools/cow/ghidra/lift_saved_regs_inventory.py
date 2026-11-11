"""lift_saved_regs_inventory.py - who clobbers a callee-saved register, and what explains it.

Read-only inventory of the population. It answers two questions the loop keeps needing:

  1. which lifted units write a callee-saved register that the guest saved and restored, with no
     restore anywhere in the lift (a real clobber: the caller gets back a corrupted register, and
     because the push's slot was never reserved, our esp is misaligned against the guest's);
  2. how many of those are the signature of the epilogue bug fixed in b34fb597 (`pop <r>;
     add esp, N; ret` - a constant esp cleanup between the restores and the return, which the old
     epilogue_pop_run treated as a run-breaker, so no pops were reported and the prologue could not
     pair the push), versus how many are something else entirely.

Why (2) is separated deliberately: without it, "found the bug, fixed the bug" quietly becomes
"the bug explains everything". It does not - see the measured split this tool prints.

Static by design: it reads generated/all and src/lifted and never builds, so it can run while the
population audit owns build/.

Tripwire: 0x1015e910 was read by hand and MUST classify as explained-by-the-epilogue-bug. If it
stops doing so, the classifier is broken and every number above it is fiction.

Run:  python tools/cow/ghidra/lift_saved_regs_inventory.py [--json]
"""
import json
import os
import re
import sys
from collections import Counter

# this file sits at ROOT/tools/cow/ghidra/x.py, so four dirnames reach ROOT - three lands in
# tools/ and the tool then looks for tools/generated/all and dies on a missing path.
ROOT = os.path.dirname(os.path.dirname(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
GEN = os.path.join(ROOT, "generated", "all")
LIFT = os.path.join(ROOT, "src", "lifted")
FUNC_RE = re.compile(r"^void f_([0-9a-f]{8})\(Guest\* g\)")
REGS = ("esi", "edi", "ebx", "ebp")
PINNED = ("1015e910", "esi")          # verified by eye against funcs_025.c:37247


def index_bodies():
    idx = {}
    for fn in sorted(os.listdir(GEN)):
        if not fn.endswith(".c") or fn == "table.c":
            continue
        p = os.path.join(GEN, fn)
        with open(p, encoding="utf-8", errors="replace") as fh:
            lines = fh.read().splitlines()
        starts = [(i, FUNC_RE.match(l).group(1)) for i, l in enumerate(lines) if FUNC_RE.match(l)]
        for n, (i, a) in enumerate(starts):
            idx.setdefault(a, (p, i, starts[n + 1][0] if n + 1 < len(starts) else len(lines)))
    return idx


def main():
    idx = index_bodies()
    lifted = sorted(f[4:12].lower() for f in os.listdir(LIFT)
                    if f.startswith("cow_") and f.endswith(".c"))
    print("%d lifted units; %d indexed generated bodies" % (len(lifted), len(idx)))
    # A partial index would report a confident low count. Refuse instead.
    if len(idx) < 15000:
        sys.exit("REFUSING: only %d bodies indexed - an incomplete graph invents a small number"
                 % len(idx))
    if not lifted:
        sys.exit("REFUSING: no lifted units found")

    CACHE = {}

    def body(a):
        t = idx.get(a)
        if not t:
            return ""
        p, s, e = t
        if p not in CACHE:
            if len(CACHE) > 4:
                CACHE.clear()
            with open(p, encoding="utf-8", errors="replace") as fh:
                CACHE[p] = fh.read().splitlines()
        return "\n".join(CACHE[p][s:e])

    def classify(a):
        """None if not a candidate, else 'epilogue-bug' or 'open'."""
        t = body(a)
        if not t:
            return None
        ours = open(os.path.join(LIFT, "cow_%s.c" % a), encoding="utf-8", errors="replace").read()
        for r in REGS:
            g_writes = bool(re.search(r"\b%s\s*=\s*" % r, t)) or \
                bool(re.search(r":\s*(?:lea|mov)\s+%s\b" % r, t))
            g_saves = bool(re.search(r":\s*push\s+%s\b" % r, t))
            g_restores = bool(re.search(r":\s*pop\s+%s\b" % r, t))
            o_writes = bool(re.search(r"g->%s\s*=\s*[^=]" % r, ours))
            if not (g_writes and g_saves and g_restores and o_writes):
                continue
            # a restore in ANY recognised spelling clears it - including the bare `= v` form that an
            # earlier predicate missed, which is why the count is not simply "no comment present".
            if re.search(r"g->%s\s*=\s*\(uint32_t\)\(v\)" % r, ours) or \
               re.search(r"g->%s\s*=\s*v\b" % r, ours) or \
               re.search(r"/\*\s*pop\s+%s\s*\*/" % r, ours):
                continue
            if re.search(r":\s*pop\s+%s\b.*?:\s*add\s+esp,\s*(?:0x[0-9a-f]+|\d+)\b.*?:\s*ret\b" % r,
                         t, re.S):
                return "epilogue-bug"
            return "open"
        return None

    buckets = Counter()
    by_reg = Counter()
    open_list = []
    for a in lifted:
        c = classify(a)
        if not c:
            continue
        buckets[c] += 1
        t = body(a)
        ours = open(os.path.join(LIFT, "cow_%s.c" % a), encoding="utf-8", errors="replace").read()
        for r in REGS:
            if re.search(r"g->%s\s*=\s*[^=]" % r, ours) and \
               re.search(r":\s*push\s+%s\b" % r, t) and re.search(r":\s*pop\s+%s\b" % r, t):
                by_reg[r] += 1
        if c == "open":
            open_list.append(a)

    # ---- tripwire on the unit read by eye
    got = classify(PINNED[0])
    if got != "epilogue-bug":
        sys.exit("TRIPWIRE FAILED: 0x%s (%s) was verified by eye as the add-esp epilogue case but "
                 "classifies as %r. The classifier is broken; the counts above are worthless."
                 % (PINNED[0], PINNED[1], got))
    print("tripwire ok: 0x%s classifies as epilogue-bug, as read by hand" % PINNED[0])

    tot = sum(buckets.values())
    print()
    print("=" * 68)
    print("clobber candidates                : %d" % tot)
    print("  explained by the epilogue bug   : %d  (%.0f%% - a re-lift should clear these)"
          % (buckets["epilogue-bug"], 100.0 * buckets["epilogue-bug"] / max(1, tot)))
    print("  NOT explained - genuinely open   : %d" % buckets["open"])
    print("  by register (guest-side save/restore seen among candidates; a unit may appear under")
    print("  more than one register, so these do not sum to the total): "
          + ", ".join("%s %d" % kv for kv in by_reg.most_common()))
    print()
    print("The split is the point: the one committed fix covers %.0f%% of this list, not all of it."
          % (100.0 * buckets["epilogue-bug"] / max(1, tot)))
    print("Start with the OPEN units, e.g. " + ", ".join("0x" + a for a in sorted(open_list)[:6]))
    if "--json" in sys.argv:
        json.dump({"total": tot, "buckets": dict(buckets), "by_reg": dict(by_reg),
                   "open": sorted(open_list)},
                  open(os.path.join(ROOT, "cow", "wip", "saved-regs-inventory.json"), "w",
                       encoding="utf-8", newline="\n"), indent=1)
        print("wrote cow/wip/saved-regs-inventory.json")
    return 0


if __name__ == "__main__":
    sys.exit(main())
