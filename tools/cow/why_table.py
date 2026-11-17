#!/usr/bin/env python3
"""WHY NOT GOLD: one row for every function on the scoreboard that is not proven, with the reason, and a
summary of the reasons by code bytes. Written by the cycle (tools/cow/cycle.py, before it publishes) to

    docs/cow/WHY.csv   entry, bytes, state, reason, detail - every function that is not gold
    docs/cow/WHY.md    the reasons, largest first, by bytes and by functions

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
    with open(OUT_MD, "w", encoding="utf-8", newline="\n") as fh:
        fh.write(text)
    print("why_table: %d functions not gold, %d reasons -> docs/cow/WHY.md, docs/cow/WHY.csv" % (len(out), len(summ)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
