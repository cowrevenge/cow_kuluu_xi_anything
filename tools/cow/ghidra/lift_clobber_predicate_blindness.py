"""How many of the 168 "open clobbers" are false positives of my own predicate?

Reading two of them by eye showed the predicate's blind spots: it asks whether the lifted file
contains a `pop <r>` restore, which assumes the guest has ONE epilogue. Real bodies do not:
  * TAIL-CALL bodies end in `jmp`, not `ret`; their restores belong to the tail path and are handled
    by separate machinery, so the absence of an epilogue pop proves nothing.
  * MULTI-EXIT bodies have a restore per return path; a backwards "epilogue run" can only ever see
    the last one, so other paths' pops look missing.
Counting these is the difference between "147 units clobber callee-saved registers" (a claim about
the lift) and "147 units my predicate cannot yet judge" (a claim about the predicate).

Static. No builds, no cowdiff.
"""
import os
import re
import sys

ROOT = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything"
GEN = os.path.join(ROOT, "generated", "all")
LIFT = os.path.join(ROOT, "src", "lifted")
FUNC_RE = re.compile(r"^void f_([0-9a-f]{8})\(Guest\* g\)")
REGS = ("esi", "edi", "ebx", "ebp")

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
if len(idx) < 15000:
    sys.exit("REFUSING: incomplete index (%d)" % len(idx))


def blines(a):
    t = idx.get(a)
    if not t:
        return []
    p, s, e = t
    with open(p, encoding="utf-8", errors="replace") as fh:
        return fh.read().splitlines()[s:e]


def classify(a):
    t = "\n".join(blines(a))
    if not t:
        return None
    ours = open(os.path.join(LIFT, "cow_%s.c" % a), encoding="utf-8", errors="replace").read()
    for r in REGS:
        if not (re.search(r"\b%s\s*=\s*" % r, t) or re.search(r":\s*(?:lea|mov)\s+%s\b" % r, t)):
            continue
        if not (re.search(r":\s*push\s+%s\b" % r, t) and re.search(r":\s*pop\s+%s\b" % r, t)):
            continue
        if not re.search(r"g->%s\s*=\s*[^=]" % r, ours):
            continue
        if re.search(r"g->%s\s*=\s*\(uint32_t\)\(v\)" % r, ours) or \
           re.search(r"g->%s\s*=\s*v\b" % r, ours) or \
           re.search(r"/\*\s*pop\s+%s\s*\*/" % r, ours):
            continue
        if re.search(r":\s*pop\s+%s\b.*?:\s*add\s+esp,\s*(?:0x[0-9a-f]+|\d+)\b.*?:\s*ret\b" % r,
                     t, re.S):
            return (a, r, "epilogue-bug")
        return (a, r, "open")
    return None


tw = classify("1015e910")
if not tw or tw[2] != "epilogue-bug":
    sys.exit("REFUSING: by-eye unit classifies as %r" % (tw and tw[2]))

buckets = {}
examples = {}
for a in sorted(f[4:12].lower() for f in os.listdir(LIFT)
                if f.startswith("cow_") and f.endswith(".c")):
    c = classify(a)
    if not c or c[2] != "open":
        continue
    a, r, _ = c
    bl = blines(a)
    t = "\n".join(bl)
    rets = len(re.findall(r":\s*ret\b", t))
    has_jmp_tail = bool(re.search(r":\s*jmp\b", t)) and rets == 0
    ours = open(os.path.join(LIFT, "cow_%s.c" % a), encoding="utf-8", errors="replace").read()
    tail_call = "no return (tail call)" in ours

    if tail_call or has_jmp_tail:
        k = "tail-call (restores belong to the tail path) - predicate cannot judge"
    elif rets > 1:
        k = "multi-exit (%d returns) - one epilogue run cannot see them all" % rets
    elif t.count("pop %s" % r) > t.count("push %s" % r):
        k = "pop/push count mismatch for this register - suspect shape, not confirmed clobber"
    else:
        k = "SINGLE-EXIT, clean shape - the credible clobber population"
    buckets[k] = buckets.get(k, 0) + 1
    examples.setdefault(k, []).append("0x%s(%s)" % (a, r))

print()
print("=" * 72)
print("the 168 'open clobbers', re-classified by whether my predicate can judge them at all")
print("=" * 72)
for k in sorted(buckets, key=lambda x: -buckets[x]):
    print("  %4d  %s" % (buckets[k], k))
    print("         e.g. %s" % ", ".join(examples[k][:4]))
cred = sum(v for k, v in buckets.items() if k.startswith("SINGLE-EXIT"))
print()
print("  credible clobbers after removing classes the predicate cannot judge : %d" % cred)
print("  NOT credible - predicate blind spots                                 : %d" % (168 - cred))
print()
print("Report the first number. The second is a limitation of the tool, and calling those units")
print("clobbers would be exactly the kind of confident-but-unvalidated figure this session has had")
print("to retract twice already.")
