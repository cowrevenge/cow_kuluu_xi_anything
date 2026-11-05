"""ghidra_compare.py - resolve the gap between Ghidra's function set and ledger/functions.csv.

The count gap (auto-analysis found 14,248; the ledger has 21,761 rows) is not evidence of anything on
its own: the two numbers answer different questions. What settles it is CowLedgerForce.java, which
pushes a function start at every ledger address and records what Ghidra did, plus this script, which
joins that report against both sides and groups the disagreement by REASON.

  python tools/cow/ghidra/ghidra_compare.py \
      --ledger ledger/functions.csv \
      --force  C:/ghidra_out/ledger_force.jsonl \
      --dump   C:/ghidra_out/functions_all.jsonl \
      --auto   C:/ghidra_out/functions_auto14k.jsonl \
      --ask 0x102d9502

Answers, in order:
  1. where every ledger entry went (already / created / taken out of a container / refused), grouped
  2. the refusals and container-eaten entries, grouped by the exception or the container that held them
  3. the Ghidra functions the ledger has no row for, grouped by what they look like
  4. --ask: what Ghidra believes contains one address, for the case-by-case questions
"""
import argparse
import csv
import json
import os
import sys
from collections import Counter, defaultdict

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")


def load_jsonl(path):
    out = []
    if not path or not os.path.exists(path):
        return out
    with open(path, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                out.append(json.loads(line))
            except ValueError:
                continue
    return out


def norm(a):
    if a is None:
        return ""
    a = str(a).strip().lower()
    if not a.startswith("0x"):
        return ""
    try:
        return "0x%x" % int(a, 16)
    except ValueError:
        return ""


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--ledger", default="ledger/functions.csv")
    ap.add_argument("--force", default=r"C:\ghidra_out\ledger_force.jsonl")
    ap.add_argument("--dump", default=r"C:\ghidra_out\functions_all.jsonl")
    ap.add_argument("--auto", default=r"C:\ghidra_out\functions_auto14k.jsonl")
    ap.add_argument("--ask", action="append", default=[], help="report one address in detail (repeatable)")
    ap.add_argument("--top", type=int, default=12)
    args = ap.parse_args()

    with open(args.ledger, encoding="utf-8", newline="") as fh:
        ledger = list(csv.DictReader(fh))
    led_by_addr = {}
    for r in ledger:
        a = norm(r.get("entry"))
        if a:
            led_by_addr[a] = r

    force = load_jsonl(args.force)
    force_by_addr = {norm(f.get("addr")): f for f in force if norm(f.get("addr"))}
    dump = load_jsonl(args.dump)
    dump_by_addr = {norm(d.get("addr")): d for d in dump if norm(d.get("addr"))}
    auto = load_jsonl(args.auto)
    auto_addrs = {norm(d.get("addr")) for d in auto if norm(d.get("addr"))}

    print("=== sizes ===")
    print("  ledger rows                 : %d" % len(ledger))
    print("  force records               : %d" % len(force))
    print("  dumped functions (after)    : %d" % len(dump_by_addr))
    print("  auto-analysis functions     : %d" % len(auto_addrs))

    print("\n=== 1. where each ledger entry went ===")
    acts = Counter(f.get("action", "?") for f in force)
    for k, v in acts.most_common():
        print("  %-28s %6d" % (k, v))
    missing_force = [a for a in led_by_addr if a not in force_by_addr]
    if missing_force:
        print("  %-28s %6d  (in the ledger, no force record - check the reader)"
              % ("NO_FORCE_RECORD", len(missing_force)))

    print("\n=== 2. the disagreements that need a human ===")
    # Refused, grouped by the reason Ghidra gave.
    refused = defaultdict(list)
    for f in force:
        if f.get("action") in ("refused", "inside_other_refused"):
            err = (f.get("error") or "").split(":")[0].strip() or "(empty)"
            refused[err].append(f)
    print("  refused / could-not-be-created, by reason:")
    for reason, items in sorted(refused.items(), key=lambda kv: -len(kv[1]))[:args.top]:
        print("    %-46s %5d   e.g. %s" % (reason[:46], len(items), items[0].get("addr")))

    # Ledger addresses that auto-analysis had placed INSIDE another function.
    eaten = [f for f in force if f.get("container") not in (None, "")]
    by_container = Counter()
    for f in eaten:
        by_container[(f.get("container"), f.get("container_name"))] += 1
    print("\n  ledger addresses auto-analysis had swallowed into another function: %d" % len(eaten))
    print("  grouped by the container that held them (top %d):" % args.top)
    for (ce, cn), n in by_container.most_common(args.top):
        c = force_by_addr.get(norm(ce)) or {}
        print("    %-12s %-22s holds %3d   container span %s..%s%s"
              % (ce, (cn or "")[:22], n, c.get("container_body_min", "?"),
                 c.get("container_body_max", "?"),
                 "" if not c.get("ledger_status") else "  [container ledger status=%s]" % c["ledger_status"]))

    # Size/boundary disagreement for entries BOTH sides have.
    span_mismatch = []
    for a, r in led_by_addr.items():
        d = dump_by_addr.get(a)
        if not d:
            continue
        lend = norm(r.get("end"))
        if not lend:
            continue
        gmax = norm(d.get("body_max"))
        if not gmax:
            continue
        ledger_last = int(lend, 16) - 1
        if int(gmax, 16) != ledger_last:
            span_mismatch.append((a, ledger_last, int(gmax, 16), r, d))
    print("\n  boundary disagreements where BOTH sides have the entry: %d" % len(span_mismatch))
    big = [m for m in span_mismatch if abs(m[2] - m[1]) > 2000]
    print("    of those, |difference| > 2000 bytes (the suspicious ones): %d" % len(big))
    for a, ll, gl, r, d in sorted(big, key=lambda m: -abs(m[2] - m[1]))[:args.top]:
        print("    %-12s ledger_end=0x%x ghidra_max=0x%x  diff=%+d  size=%s status=%s name=%s"
              % (a, ll + 1, gl, gl - ll, r.get("size"), r.get("status"), (r.get("name") or "")[:28]))

    print("\n=== 3. Ghidra functions the ledger has no row for ===")
    orphan = [a for a in dump_by_addr if a not in led_by_addr]
    print("  count: %d" % len(orphan))
    buckets = Counter()
    for a in orphan:
        d = dump_by_addr[a]
        if d.get("is_thunk"):
            buckets["thunk"] += 1
        elif not d.get("decompiled"):
            buckets["decompile_failed"] += 1
        elif d.get("body_count", 0) <= 1:
            buckets["single_instruction"] += 1
        elif not d.get("callees"):
            buckets["no_callees_leaf"] += 1
        else:
            buckets["normal_body_with_calls"] += 1
    for k, v in buckets.most_common():
        print("    %-24s %5d" % (k, v))
    ex = [a for a in orphan if not dump_by_addr[a].get("is_thunk")][:args.top]
    if ex:
        print("    examples: " + ", ".join(ex[:args.top]))

    print("\n=== 4. specific addresses ===")
    for a in args.ask:
        a = norm(a)
        if not a:
            continue
        print("  --- %s ---" % a)
        r = led_by_addr.get(a)
        print("    ledger      : %s" % ("MISSING" if not r else
              "end=%s size=%s status=%s thunk=%s name=%s callees=%s"
              % (r.get("end"), r.get("size"), r.get("status"), r.get("thunk"),
                 (r.get("name") or "")[:40], (r.get("callees") or "")[:40])))
        f = force_by_addr.get(a)
        print("    force       : %s" % ("no record" if not f else
              "action=%s container=%s(%s) final=%s..%s count=%s err=%s"
              % (f.get("action"), f.get("container"), (f.get("container_name") or "")[:24],
                 f.get("final_body_min"), f.get("final_body_max"), f.get("final_body_count"),
                 (f.get("error") or "")[:60])))
        d = dump_by_addr.get(a)
        if d:
            body = (d.get("c") or "").replace("\r\n", "\n")
            print("    decompiled: yes  sig=%s" % (d.get("signature") or "")[:100])
            print("      body_min=%s body_max=%s count=%s insns=%s thunk=%s callees=%s"
                  % (d.get("body_min"), d.get("body_max"), d.get("body_count"), d.get("insns"),
                     d.get("is_thunk"), (d.get("callees") or "")[:60]))
            lines = body.splitlines()
            print("      C head:")
            for ln in lines[:14]:
                print("        " + ln)
        else:
            print("    decompiled: NO function at this entry in the dump")
        # Who claims to contain it?
        v = int(a, 16)
        holders = [dd for dd in dump_by_addr.values()
                   if dd.get("body_min") and dd.get("body_max")
                   and int(dd["body_min"], 16) <= v <= int(dd["body_max"], 16)
                   and norm(dd.get("addr")) != a]
        if holders:
            print("    contained in %d dumped function(s):" % len(holders))
            for h in holders[:5]:
                print("      %s %s span %s..%s callees=%s"
                      % (h.get("addr"), h.get("ghidra_name"), h.get("body_min"), h.get("body_max"),
                         (h.get("callees") or "")[:50]))
        else:
            print("    contained in: nothing (no dumped function spans it)")
        print("    in auto-analysis set: %s" % ("yes" if a in auto_addrs else "no"))


if __name__ == "__main__":
    main()
