"""Drop verdicts whose lifted file no longer exists.

Population is the files on disk, not the rows in the record. When the syntax gate prunes a file that does
not compile, its verdict becomes a row describing something that does not exist - it would be counted in a
denominator, quoted in a report, and re-tried forever. This removes exactly those rows and nothing else:
entries whose file is present are never touched, so a prune can never silently delete real evidence.

Read-only by default. Pass --apply to write.
"""
import argparse
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))          # <root>/tools/cow/ghidra
# three climbs from the DIRECTORY, not from the file - see the same note in lift_record_check.py
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")
LIFTED = os.path.join(ROOT, "src", "lifted")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true", help="write the pruned record (default: report only)")
    a = ap.parse_args()

    with open(RECORD, encoding="utf-8") as fh:
        d = json.load(fh)
    results = d.get("results", d)
    have = {f[4:-2] for f in os.listdir(LIFTED) if f.startswith("cow_") and f.endswith(".c")}

    stray = sorted(k for k in results if k.lower() not in have)
    kept_proven = sum(1 for k, v in results.items()
                      if k.lower() in have and v.get("pass") is True)

    print("verdicts        : %d" % len(results))
    print("files on disk   : %d" % len(have))
    print("stray rows      : %d" % len(stray))
    print("after prune     : %d verdicts / %d proven (%.1f%%)"
          % (len(have), kept_proven, 100.0 * kept_proven / max(1, len(have))))
    if stray:
        print("  removing: %s%s" % (", ".join(stray[:8]), " ..." if len(stray) > 8 else ""))

    if not a.apply:
        print("\nreport only - pass --apply to write")
        return 0
    if not stray:
        print("\nnothing to do")
        return 0

    for k in stray:
        del results[k]
    tmp = RECORD + ".tmp"
    with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
        json.dump(d, fh, indent=1, ensure_ascii=False, sort_keys=True)
        fh.write("\n")
    os.replace(tmp, RECORD)          # atomic, so an interruption cannot leave the record half-written
    print("\npruned %d row(s)" % len(stray))
    return 0


if __name__ == "__main__":
    sys.exit(main())
