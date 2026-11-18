#!/usr/bin/env python3
"""WHY NOT GOLD: one row for every function on the scoreboard that is not proven, with the reason, and a
summary of the reasons by code bytes. Written by the cycle (tools/cow/cycle.py, before it publishes) to

    docs/cow/WHY.csv   entry, bytes, state, reason, detail - every function that is not gold
    docs/cow/SITES.csv entry, reason, sites, addresses - for every weak and silver unit, each instruction site
                       the judge never reached in a clean state, grouped by why no state reaches it
                       (tools/cow/aim.py: build/aim/sites, and seek's per-block reasons in build/aim/why)
    docs/cow/WHY.md    the reasons, largest first, by bytes and by functions, and the sites by reason

The universe, the states and the judge are the scoreboard's own (conveyor.load_functions, state_of). The
reasons come from:
  * a unit's verdict in the ledger: a FAIL's `why`; for weak and silver, how much of it the states ran
    (blocks reached of all, clean states) - what keeps it from gold is coverage;
  * no unit: what rise said when the cycle lifted it (build/cycle/rise_report.json): the refusal, or, when
    it did lift, what the judge said about the lift (build/cycle/rise_verdicts.json) - a lift is only kept
    when it ranks above nothing;
  * parked: the conveyor's reason.
    python tools/cow/why_table.py            write both files
    python tools/cow/why_table.py --print    the summary only, on stdout
"""
import csv
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
import conveyor as C  # noqa: E402
import judge2  # noqa: E402

WORK = os.path.join(ROOT, "build", "cycle")
OUT_CSV = os.path.join(ROOT, "docs", "cow", "WHY.csv")
OUT_MD = os.path.join(ROOT, "docs", "cow", "WHY.md")
OUT_SITES = os.path.join(ROOT, "docs", "cow", "SITES.csv")
AIM = os.path.join(ROOT, "build", "aim")


def _json(path):
    try:
        with open(path, encoding="utf-8") as fh:
            return json.load(fh)
    except (OSError, ValueError):
        return {}


def _norm(text):
    """a reason without its addresses and numbers, so the same cause groups together"""
    t = re.sub(r"\(-?\d+( vs -?\d+)?\)", "", text or "")
    t = re.sub(r"0x[0-9a-fA-F]+", "N", t)
    t = re.sub(r"\b[0-9a-fA-F]{5,}\b", "X", t)
    return re.sub(r"\s+", " ", t).strip()


def coverage(rec):
    try:
        a, t = (int(x) for x in str(rec.get("blocks") or "0/1").split("/"))
    except ValueError:
        a, t = 0, 1
    t = max(t, 1)
    share = a / t
    band = ("under 30%" if share < 0.3 else "30-70%" if share < 0.7 else "70-99%" if a < t else "all")
    if int(rec.get("clean") or 0) < 30:
        return "too few clean states (the original faults in most)", "blocks %d/%d, clean %s" % (a, t, rec.get("clean"))
    return "states reach %s of its blocks" % band, "blocks %d/%d, clean %s" % (a, t, rec.get("clean"))


def rows():
    funcs = C.load_functions()
    proof, jid = C.load_proof(), judge2.judge_id(ROOT)
    parked = C.load_parked()
    rise = _json(os.path.join(WORK, "rise_report.json"))
    lifted = _json(os.path.join(WORK, "rise_verdicts.json"))
    out = []
    for f in funcs:
        e = f["entry"]
        if f["hand"]:
            if f["done"]:
                continue
            out.append((e, f["size"], "hand unit in progress", "a hand unit, not finished", ""))
            continue
        st = C.state_of(e, proof, jid)
        if st == "gold":
            continue
        rec = proof.get(e) or {}
        if st in ("weak", "silver"):
            why, detail = coverage(rec)
            out.append((e, f["size"], st, why, detail))
        elif st in ("fail", "timeout"):
            out.append((e, f["size"], st, "%s: %s" % (st, _norm(rec.get("why") or "?")),
                        (rec.get("raw") or rec.get("why") or "")[:200]))
        elif st == "stale":
            out.append((e, f["size"], st, "not judged by this judge yet", ""))
        else:
            r = rise.get(e)
            if r is None:
                why, detail = "rise has not tried it", ""
            elif r == "ok":
                v = lifted.get(e) or {}
                why = "lifts; judge: %s" % _norm(v.get("why") or v.get("tier") or "not judged")
                detail = (v.get("raw") or "")[:200]
            else:
                why, detail = "rise: %s" % _norm(r.replace("refused: ", "")), r
            if e in parked and r is None:
                why, detail = "parked: %s" % _norm(parked[e]["reason"]), parked[e]["reason"]
            out.append((e, f["size"], "parked (no unit)" if e in parked else "no unit yet", why, detail))
    total = sum(f["size"] for f in funcs)
    return out, total, jid


def _runs(addrs):
    """'1000a010 1000a01c-1000a030': sorted addresses, consecutive sites of one block as a range"""
    out, i = [], 0
    while i < len(addrs):
        j = i
        while j + 1 < len(addrs) and addrs[j + 1] - addrs[j] <= 16:
            j += 1
        out.append("%08x" % addrs[i] if i == j else "%08x-%08x" % (addrs[i], addrs[j]))
        i = j + 1
    return " ".join(out)


def site_rows(out, jid):
    """(entry, reason, n, addresses): every unreached site of every weak/silver unit, by why"""
    rows_ = []
    for e, _size, state, _why, _d in out:
        if state not in ("weak", "silver"):
            continue
        try:
            with open(os.path.join(AIM, "sites", e + ".txt"), encoding="utf-8") as fh:
                lines = fh.read().splitlines()
        except OSError:
            rows_.append((e, "no site list yet (judged before the aim)", 0, ""))
            continue
        if not lines or not lines[0].startswith("# ") or lines[0][2:].split("/")[0] != jid:
            rows_.append((e, "no site list from this judge yet", 0, ""))
            continue
        sites = sorted(int(x, 16) for x in lines[1:] if x.strip())
        if not sites:
            rows_.append((e, "every site reached; too few clean states (the grind's)", 0, ""))
            continue
        why = _json(os.path.join(AIM, "why", e + ".why.json"))
        blocked = {int(k, 16): v for k, v in (why.get("blocked") or {}).items()}
        starts = sorted(int(b, 16) for b in (why.get("blocks") or []))
        by = {}
        for a in sites:
            k = None
            if starts:
                lo, hi = 0, len(starts)
                while lo < hi:                      # the block this site is in: the last start at or below it
                    mid = (lo + hi) // 2
                    if starts[mid] <= a:
                        lo = mid + 1
                    else:
                        hi = mid
                k = starts[lo - 1] if lo else None
            if not starts:
                reason = "seek has not looked at it yet"
            elif k in blocked:
                reason = "seek: " + _norm(blocked[k])
            else:
                reason = "seek made a state for it; the judge's run went elsewhere"
            by.setdefault(reason, []).append(a)
        for reason, addrs in sorted(by.items()):
            rows_.append((e, reason, len(addrs), _runs(addrs)))
    return rows_


def summary(out, total):
    by = {}
    for _e, size, state, why, _d in out:
        k = (state, why)
        b = by.setdefault(k, [0, 0])
        b[0] += 1
        b[1] += size
    return sorted(by.items(), key=lambda kv: -kv[1][1])


def main():
    out, total, jid = rows()
    summ = summary(out, total)
    lines = ["# Why not gold", "",
             "<!-- written by tools/cow/why_table.py (cycle step 8) - do not edit -->", "",
             "Judge `%s`. Every function on the scoreboard that is not proven, by reason; %d functions, "
             "%.2f%% of the code bytes. One row per function: [WHY.csv](WHY.csv)." % (
                 jid, len(out), 100.0 * sum(r[1] for r in out) / max(total, 1)), "",
             "| state | reason | functions | % of code bytes |", "| --- | --- | ---: | ---: |"]
    for (state, why), (n, b) in summ:
        lines.append("| %s | %s | %d | %.2f%% |" % (state, why.replace("|", "/"), n, 100.0 * b / max(total, 1)))
    srows = site_rows(out, jid)
    by_site = {}
    for e, reason, n, _a in srows:
        d = by_site.setdefault(reason, [0, set()])
        d[0] += n
        d[1].add(e)
    lines += ["", "## The sites weak and silver units miss, by why", "",
              "Every instruction site a weak or silver unit never reached in a clean state, grouped by why no state "
              "reaches it (seek's own words, from tools/cow/aim.py). One row per unit and reason, with the "
              "addresses: [SITES.csv](SITES.csv).", "",
              "| why | sites | units |", "| --- | ---: | ---: |"]
    for reason, (n, ents) in sorted(by_site.items(), key=lambda kv: -kv[1][0]):
        lines.append("| %s | %d | %d |" % (reason.replace("|", "/"), n, len(ents)))
    text = "\n".join(lines) + "\n"
    if "--print" in sys.argv:
        print(text)
        return 0
    os.makedirs(os.path.dirname(OUT_CSV), exist_ok=True)
    with open(OUT_CSV, "w", encoding="utf-8", newline="\n") as fh:
        w = csv.writer(fh, lineterminator="\n")
        w.writerow(["entry", "bytes", "state", "reason", "detail"])
        for r in sorted(out, key=lambda r: -r[1]):
            w.writerow(r)
    with open(OUT_SITES, "w", encoding="utf-8", newline="\n") as fh:
        w = csv.writer(fh, lineterminator="\n")
        w.writerow(["entry", "reason", "sites", "addresses"])
        for r in sorted(srows, key=lambda r: (-r[2], r[0])):
            w.writerow(r)
    with open(OUT_MD, "w", encoding="utf-8", newline="\n") as fh:
        fh.write(text)
    print("why_table: %d functions not gold, %d reasons -> docs/cow/WHY.md, docs/cow/WHY.csv" % (len(out), len(summ)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
