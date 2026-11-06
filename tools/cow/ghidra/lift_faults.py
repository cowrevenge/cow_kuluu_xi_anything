"""Group the `fault` failures by what the harness actually printed, not by the bucket name.

`fault 246` in the histogram says only that one side raised an exception the other did not. The harness
already prints the codes and the address (`fault -1073741819/0 @0099393...`) and the runtime prints its
own reason (`[recomp] FATAL at ...: indirect call/jump to an address with no translation`). The grouping
that decides what to build next is in THOSE strings, and they are already on disk in build/lift/run_c*.log -
reading them is free, while theorising about the group costs an hour of the wrong work.
"""
import glob
import os
import re
import sys
from collections import Counter

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

STATE = re.compile(r"state \d+: fault \(eax ([0-9a-f]+)/([0-9a-f]+) edx ([0-9a-f]+)/([0-9a-f]+) "
                   r"esp ([0-9a-f]+)/([0-9a-f]+) fault (-?\d+)/(-?\d+) @([0-9a-f]+)")
# the table line, which is the only per-row output a batch produces
FAIL = re.compile(r"COWDIFF FAIL (\w+) \d+ mismatch\(es\), first at state \d+ \(fault\) "
                  r"fault (-?\d+)/(-?\d+) @([0-9a-f]{8})")
NAMES = {-1073741819: "0xC0000005 access-violation", -1073741811: "0xC000000D invalid-parameter",
         -1073740791: "0xC0000409 stack-buffer-overrun", 0: "no-fault"}
FATAL = re.compile(r"\[recomp\] FATAL at ([0-9A-Fa-f]+): (.+?)\\?n?$")

shapes = Counter()
reasons = Counter()
examples = {}
for path in glob.glob(os.path.join("build", "lift", "run_c*.log")):
    for line in open(path, encoding="utf-8", errors="replace"):
        m = STATE.search(line)
        if m:
            fa, fb = m.group(7), m.group(8)
            key = "A=%s B=%s @%s" % (fa, fb, "entry" if m.group(9) == "00000000" else "elsewhere")
            shapes[key] += 1
            examples.setdefault(key, line.strip()[:180])
        f = FATAL.search(line.strip())
        if f:
            reasons[f.group(2).strip()] += 1
            examples.setdefault("FATAL:" + f.group(2)[:40], line.strip()[:180])

rows = Counter()
row_examples = {}
for path in glob.glob(os.path.join("build", "lift", "run_c*.log")):
    for line in open(path, encoding="utf-8", errors="replace"):
        m = FAIL.search(line)
        if not m:
            continue
        fa, fb, addr = int(m.group(2)), int(m.group(3)), m.group(4)
        key = "A=%s | B=%s | @%s" % (NAMES.get(fa, hex(fa & 0xFFFFFFFF)),
                                     NAMES.get(fb, hex(fb & 0xFFFFFFFF)),
                                     "0 (the runtime's no-translation trap)" if addr == "00000000"
                                     else "elsewhere")
        rows[key] += 1
        row_examples.setdefault(key, line.strip()[:170])

print("=== fault rows, by what each side raised ===")
for k, n in rows.most_common(12):
    print("  %-62s %4d" % (k[:62], n))
    print("        %s" % row_examples[k])
print()

print("=== fault state shapes (which side raised, and where) ===")
for k, n in shapes.most_common(12):
    print("  %-34s %6d" % (k, n))
    print("        %s" % examples[k])

print("\n=== runtime FATAL reasons (what the unit reached that has no answer) ===")
for k, n in reasons.most_common(15):
    print("  %-62s %6d" % (k[:62], n))
