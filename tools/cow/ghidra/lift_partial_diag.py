"""Why do the remaining partial_register_write units fail to ALIGN?

lift.apply_partial_widths matches the k-th write to R in the generated instruction list against the k-th
assignment to g->R in the emitted C, and refuses when the two counts disagree for any register the body
writes partially. ~2,184 units sit behind that refusal. Before writing an alignment algorithm, this asks
what the disagreement actually IS, because the shape of the mismatch names the fix:

    n_C > n_G   the C has assignments the generated list does not count as writes
                (prime suspect: the return stamp, which turns `return expr` into
                 `g->eax = (CowU32)(expr); return;` - a second g->eax assignment for a write the body
                 already performed, so every function that returns a value could look misaligned)
    n_C < n_G   Ghidra dropped writes (dead-store elimination, or merged al/ah pairs into one assignment)

Read-only: it emits no files and changes nothing. It reuses the same functions the real pipeline uses
(gen_model.partial_write_sequence, ghidra_c.Rewriter, lift._REG_ASSIGN) so the counts mean what the
refusal saw, with the caveat below.

CAVEAT: this runs the Rewriter directly rather than the whole of lift.py's emit path, so transformations
that lift.py applies around it (return stamping included) are reproduced here only by the explicit
`n_C minus returns` column - which is the point: if that column is where the agreement appears, the
return stamp is the cause.

    python tools/cow/ghidra/lift_partial_diag.py                 # 150 refused units
    python tools/cow/ghidra/lift_partial_diag.py --n 400 --seed 3
"""
import argparse
import collections
import json
import os
import random
import sys

HERE = os.path.dirname(os.path.abspath(__file__))          # <root>/tools/cow/ghidra
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import ghidra_c           # noqa: E402
import lift               # noqa: E402
import trivial_audit      # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "C:/ghidra_out/functions_all.jsonl")
TRACKED = ("eax", "ecx", "edx", "ebx", "esi", "edi", "ebp")


def refused_addresses(limit, seed):
    if not os.path.exists(REFUSALS):
        return []
    with open(REFUSALS, encoding="utf-8") as fh:
        d = json.load(fh)
    addrs = [k for k, v in d.items() if str(v).startswith("partial_register_write")]
    random.Random(seed).shuffle(addrs)
    return addrs[:limit]


def load_entries(want):
    """One pass over the dump for just the addresses we need."""
    out = {}
    want = {w.lower().replace("0x", "") for w in want}
    with open(DUMP, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not line.strip():
                continue
            try:
                e = json.loads(line)
            except ValueError:
                continue
            a = str(e.get("addr", "")).lower().replace("0x", "")
            if a in want:
                out[a] = e
                if len(out) == len(want):
                    break
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=150)
    ap.add_argument("--seed", type=int, default=11)
    ap.add_argument("--dump", default=DUMP)
    a = ap.parse_args()
    globals()["DUMP"] = a.dump

    addrs = refused_addresses(a.n, a.seed)
    if not addrs:
        print("no refusal snapshot at %s - run lift.py --reasons-out first" % REFUSALS)
        return 2
    entries = load_entries(addrs)
    bodies = trivial_audit.body_index()

    shape = collections.Counter()
    detail = collections.Counter()
    examples = {}
    checked = 0

    for raw in addrs:
        key = raw.lower().replace("0x", "")
        e = entries.get(key)
        body = bodies.get(key)
        if not e or not body:
            shape["no-data"] += 1
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            shape["model-not-ok"] += 1
            continue
        seq = gen_model.partial_write_sequence(m.get("ins") or [])
        partials = {r for r, ks in seq.items() if any(k != "full" for k in ks)}
        if not partials:
            shape["no-partials-anymore"] += 1
            continue

        r = ghidra_c.Rewriter({})
        try:
            c = r.rewrite(e.get("c") or "", e.get("signature") or "")
        except Exception as exc:                       # a crash is itself a finding
            shape["rewriter-crash"] += 1
            detail["crash:%s" % type(exc).__name__] += 1
            continue

        n_ret = c.count("return")
        counts = collections.Counter()
        for mm in lift._REG_ASSIGN.finditer(c):
            counts[mm.group(1)] += 1

        checked += 1
        worst = None
        for reg in sorted(partials):
            n_g = len(seq[reg])
            n_c = counts.get(reg, 0)
            if n_c == n_g:
                continue
            if n_c == n_g - n_ret and n_ret > 0:
                kind = "extra==returns(%d)" % n_ret
            elif n_c > n_g:
                kind = "extra"
            else:
                kind = "missing"
            shape["reg-%s:%s" % (kind.split("(")[0], reg)] += 1
            worst = kind
            detail["%s|%s|nG=%d,nC=%d,ret=%d" % (kind.split("(")[0], reg, n_g, n_c, n_ret)] += 1
        shape["unit-" + ("misaligned" if worst else "aligned-ok")] += 1
        if worst and len(examples) < 6:
            examples[key] = (worst, sorted(partials),
                             {g: (len(seq[g]), counts.get(g, 0)) for g in sorted(partials)})

    print("refused sampled: %d   rewriter-ran: %d" % (len(addrs), checked))
    print("\n== shapes ==")
    for k, v in shape.most_common(20):
        print("  %5d  %s" % (v, k))
    print("\n== most common mismatches ==")
    for k, v in detail.most_common(12):
        print("  %5d  %s" % (v, k))
    if examples:
        print("\n== examples ==")
        for k, (w, p, d) in examples.items():
            print("  0x%s  %s  partials=%s  (nG,nC)=%s" % (k, w, p, d))
    return 0


if __name__ == "__main__":
    sys.exit(main())
