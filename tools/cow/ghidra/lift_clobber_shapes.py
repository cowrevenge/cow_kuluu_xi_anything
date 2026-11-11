"""Cluster the OPEN clobber candidates by epilogue shape, so I read the common case first.

168 units clobber a callee-saved register and do NOT have the `pop <r>; add esp, N; ret` fingerprint
that b34fb597 fixed. Reading them one at a time is how a group label hides three distinct bugs - the
queue's own warning. So: bucket by the shape of the epilogue around the register's pop, and report
which shapes dominate. Then read one unit from the biggest bucket.

Static: reads generated/all + src/lifted only; the audit owns build/.
"""
import os
import re
import sys
from collections import Counter, defaultdict

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


def clobber_reg(a, t, ours):
    for r in REGS:
        g_writes = bool(re.search(r"\b%s\s*=\s*" % r, t)) or bool(re.search(r":\s*(?:lea|mov)\s+%s\b" % r, t))
        g_saves = bool(re.search(r":\s*push\s+%s\b" % r, t))
        g_restores = bool(re.search(r":\s*pop\s+%s\b" % r, t))
        o_writes = bool(re.search(r"g->%s\s*=\s*[^=]" % r, ours))
        if not (g_writes and g_saves and g_restores and o_writes):
            continue
        if re.search(r"g->%s\s*=\s*\(uint32_t\)\(v\)" % r, ours) or \
           re.search(r"g->%s\s*=\s*v\b" % r, ours) or \
           re.search(r"/\*\s*pop\s+%s\s*\*/" % r, ours):
            continue
        return r
    return None


def shape(t, r):
    """The instruction mnemonics from the register's pop to the end, as a signature."""
    m = list(re.finditer(r"/\*\s*[0-9a-f]{8}:\s*([a-z][a-z0-9]*)\s*([^*/]*)\*/", t))
    if not m:
        return "no-instruction-comments"
    start = None
    for i, mm in enumerate(m):
        if mm.group(1) == "pop" and mm.group(2).strip() == r:
            start = i
            break
    if start is None:
        return "pop-not-in-comments"
    tail = [mm.group(1) for mm in m[start:start + 6]]
    return " -> ".join(tail)


# Self-contained classification. Deliberately NOT calling into lift_saved_regs_inventory, whose
# classify()/body() are nested inside main() and therefore not importable - an earlier draft
# guarded those calls with hasattr() and would have silently analysed zero units and reported
# "no open candidates", which is a false negative dressed up as a result.
def classify_open(a):
    t = body(a)
    if not t:
        return None, ""
    ours = open(os.path.join(LIFT, "cow_%s.c" % a), encoding="utf-8", errors="replace").read()
    r = clobber_reg(a, t, ours)
    if not r:
        return None, t
    if re.search(r":\s*pop\s+%s\b.*?:\s*add\s+esp,\s*(?:0x[0-9a-f]+|\d+)\b.*?:\s*ret\b" % r, t, re.S):
        return "epilogue-bug", t        # already explained; not our business here
    return "open", t


buckets = Counter()
by_shape = defaultdict(list)
n = 0
# tripwire: the by-eye unit must classify as explained, never as open, or this whole scan is a lie
tw = classify_open("1015e910")
if tw[0] not in (None, "epilogue-bug"):
    sys.exit("TRIPWIRE FAILED: 0x1015e910 (read by eye as the add-esp case) classified %r" % tw[0])
print("tripwire ok: 0x1015e910 is not counted as open")

for a in sorted(f[4:12].lower() for f in os.listdir(LIFT) if f.startswith("cow_") and f.endswith(".c")):
    kind, t = classify_open(a)
    if kind != "open":
        continue
    ours = open(os.path.join(LIFT, "cow_%s.c" % a), encoding="utf-8", errors="replace").read()
    r = clobber_reg(a, t, ours)
    if not r:
        continue
    n += 1
    sh = shape(t, r)
    buckets[sh] += 1
    by_shape[sh].append((a, r))

if n == 0:
    sys.exit("REFUSING: zero open candidates analysed - either the filter or the index is broken; "
             "the shipped inventory measured 168, so a zero here is a bug in THIS script")

print("open candidates analysed: %d" % n)
print()
print("=== epilogue shapes, most common first ===")
for sh, cnt in buckets.most_common(10):
    ex = ", ".join("0x%s(%s)" % x for x in by_shape[sh][:3])
    print("  %4d  %-58s  e.g. %s" % (cnt, sh[:58], ex))
print()
print("Read the biggest bucket first - if one shape owns the list, there is one bug, not 168.")
