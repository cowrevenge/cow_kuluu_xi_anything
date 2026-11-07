"""Is `no_ret_in_body` one pattern or several? Census before any lifter change.

gen_model books `no_ret_in_body` when the generated body contains no reachable `ret` to transcribe, and
it is currently the single largest refusal family (1,601). The action text says nothing more than what
the code does, which is exactly the situation that has cost this loop turns before now: three of the last
"obvious" families turned out to be something other than their name.

What a body without a `ret` could actually be, and what each one costs:

  * a TAIL JUMP - `jmp FUN_x` or `jmp dword ptr[...]`: the guest never returns here, it becomes the other
    function. The lift needs tail-call semantics (jump through the bridge, no return of our own), not a
    ret - one fix clears the whole subgroup.
  * an INFINITE loop / no fallthrough at all: genuinely has no return; probably a thread body or a thunk
    that never comes back. Nothing to lift.
  * a body whose last instruction is a CALL with fallthrough: the recompiler's translation ended at the
    call, so the `ret` is simply further along than the model looked - a MODEL bug, and the cheapest fix
    of all if this subgroup is big.
  * something else, which is what this script exists to find out.

Also records what Ghidra's C says for each subgroup, because the fix has to be expressible in what the
decompiler gives us: a unit whose C returns a value can be lifted; one whose C is `while(true)` cannot.

Read-only.

    python tools/cow/ghidra/lift_noret_diag.py                 # 250 refused units
    python tools/cow/ghidra/lift_noret_diag.py --n 600 --seed 3
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
DUMP = os.environ.get("COW_LIFT_DUMP", "C:/ghidra_out/functions_all.jsonl")


def classify(m):
    """(subgroup, last_mnemonic, extra) for a body with no reachable ret."""
    ins = m.get("ins") or []
    if not ins:
        return "empty_body", "-", "-"
    last = ins[-1]
    lm = (last.get("mnem") or "").lower()
    text = (last.get("text") or "").lower()
    mnems = [(c.get("mnem") or "").lower() for c in ins]
    jmps = [c for c in ins if (c.get("mnem") or "").lower().startswith("jmp")]
    if lm == "call" or "call" in mnems[-2:]:
        # body ends AT a call: the recompiler's translation stops there, so a ret may exist beyond it
        return "ends_at_call", lm, text[:40]
    if jmps:
        j = jmps[-1]
        jt = (j.get("text") or "").lower()
        if re.search(r"jmp\s+(0x[0-9a-f]+|l_)", jt):
            return "tail_jump_static", lm, jt[:40]
        return "tail_jump_indirect", lm, jt[:40]
    if lm in ("hlt", "int3", "ud2"):
        return "trap", lm, text[:40]
    # a backward jump with no jmp at the end is a loop whose exit the translator never reached
    if any(mm in ("jne", "je", "jb", "jbe", "ja", "jae", "jg", "jle", "loop", "jc", "jnc") for mm in mnems):
        return "conditional_jump_only", lm, text[:40]
    return "other", lm, text[:40]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=250)
    ap.add_argument("--seed", type=int, default=7)
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--show", type=int, default=3)
    a = ap.parse_args()
    globals()["DUMP"] = a.dump

    if not os.path.exists(REFUSALS):
        print("no refusal snapshot at %s" % REFUSALS)
        return 2
    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k for k, v in refusals.items() if str(v).startswith("no_ret_in_body")]
    random.Random(a.seed).shuffle(addrs)
    addrs = [x.lower().replace("0x", "") for x in addrs[:a.n]]
    if not addrs:
        print("no no_ret_in_body refusals")
        return 2

    want = set(addrs)
    entries = {}
    with open(a.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not line.strip():
                continue
            try:
                e = json.loads(line)
            except ValueError:
                continue
            ad = str(e.get("addr", "")).lower().replace("0x", "")
            if ad in want:
                entries[ad] = e

    bodies = trivial_audit.body_index()
    groups = collections.Counter()
    lastmnem = collections.Counter()
    size_hist = collections.Counter()
    ghidra_ret = collections.Counter()
    per_group_last = collections.defaultdict(collections.Counter)
    examples = collections.defaultdict(list)
    checked = 0

    for key in addrs:
        body = bodies.get(key)
        e = entries.get(key)
        if not body:
            groups["<no generated body>"] += 1
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            groups["<model not ok>"] += 1
            continue
        if not m.get("no_ret"):
            # the snapshot disagrees with the CURRENT model - stale row, worth knowing about
            groups["<current model finds a ret - stale snapshot>"] += 1
            continue
        checked += 1
        g, lm, extra = classify(m)
        groups[g] += 1
        lastmnem[lm] += 1
        per_group_last[g][lm] += 1
        size_hist[min(len(m["ins"]), 60)] += 1
        c = (e or {}).get("c") or ""
        if "return" in c:
            if re.search(r"\breturn\s+\w", c):
                ghidra_ret["%s | Ghidra returns a value" % g] += 1
            else:
                ghidra_ret["%s | Ghidra bare return" % g] += 1
        elif "while" in c or "for" in c:
            ghidra_ret["%s | Ghidra loops, no return" % g] += 1
        else:
            ghidra_ret["%s | Ghidra no return/loop" % g] += 1
        if len(examples[g]) < a.show:
            examples[g].append((key, lm, extra, len(m["ins"])))

    print("sampled %d   classified %d" % (len(addrs), checked))
    print("\n== subgroups ==")
    for k, v in groups.most_common():
        print("  %6d  %s" % (v, k))
    print("\n== last mnemonic in the body ==")
    for k, v in lastmnem.most_common(12):
        print("  %6d  %s" % (v, k))
    print("\n== per subgroup: last mnemonic ==")
    for g, cnt in sorted(per_group_last.items(), key=lambda kv: -sum(kv[1].values())):
        print("  %-24s %s" % (g, ", ".join("%s x%d" % (k, v) for k, v in cnt.most_common(5))))
    print("\n== body size (instructions, capped at 60) ==")
    for k in sorted(size_hist):
        print("  %s%s : %d" % (k, "+" if k == 60 else "", size_hist[k]))
    print("\n== what Ghidra gives us, per subgroup ==")
    for k, v in ghidra_ret.most_common(14):
        print("  %6d  %s" % (v, k))
    print("\n== examples ==")
    for g, ex in examples.items():
        for key, lm, extra, n in ex:
            print("  %-24s 0x%s  last=%s %-40s (%d ins)" % (g, key, lm, extra, n))
    return 0


if __name__ == "__main__":
    sys.exit(main())
