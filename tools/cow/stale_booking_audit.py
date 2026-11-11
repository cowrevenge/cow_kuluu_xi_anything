"""Standing integrity check: claimed-proven rows whose source postdates their booking.

Why this exists. Chasing the 2026-11-11 re-verify failures I found 62 units whose `pass` was
booked BEFORE their source was last rewritten. Widening it to the whole population gave
2,045 of 5,431 (37.7%) - so the lift can rewrite a unit without invalidating its recorded
verdict. Most of those still pass (1,880 of 2,045), which means the usual case is an
undocumented re-proof rather than a wrong verdict; the dangerous residue is the ones that are
stale AND failing (165), because those rows certify bytes that no longer exist.

Read-only. It un-proves nothing and edits nothing - it is a report, because the standing rule is
to report findings rather than quietly delete them.

THE PERMANENT FIX (not this script): give each ledger row the hash of the source it was judged
on (`src_sha`), written by the proofer. Then staleness is a comparison against a fact recorded at
proof time, not an inference from git - and it survives the case that makes this script only an
approximation: if a re-proof yields an identical verdict, the JSON does not change, git records
nothing, and this tool reports the row as stale when it was in fact re-checked.

Run:  python tools/cow/stale_booking_audit.py
"""
import json
import os
import subprocess
import sys
from collections import Counter

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
LEDGER = "cow/lift_proof_all.json"
OUT = os.path.join(ROOT, "cow", "wip", "stale-booking-audit.json")


def sh(*a):
    p = subprocess.run(["git"] + list(a), cwd=ROOT, capture_output=True, text=True,
                       errors="replace")
    if p.returncode != 0:
        sys.exit("git %s failed: %s" % (" ".join(a), (p.stderr or "")[:200]))
    return p.stdout


def main():
    head = sh("rev-parse", "HEAD").strip()[:8]
    ledger = json.loads(sh("show", "HEAD:" + LEDGER))
    proven = sorted(k for k, v in ledger.items() if isinstance(v, dict) and v.get("pass"))
    print("HEAD %s: claimed-proven rows = %d" % (head, len(proven)))
    if not proven:
        sys.exit("REFUSING: HEAD claims nothing proven - nothing to audit")

    # first time each row appeared with pass=True (oldest -> newest walk)
    booked, remaining = {}, set(proven)
    for entry in reversed(sh("log", "--format=%H|%aI", "--", LEDGER).split()):
        sha, when = entry.split("|")
        try:
            d = json.loads(sh("show", "%s:%s" % (sha, LEDGER)))
        except Exception:
            continue
        ts = when[:16].replace("T", " ")          # MINUTE precision: day granularity mislabelled 62
        for k in list(remaining):
            v = d.get(k)                            # ledger keys are BARE hex8, not 0x...
            if isinstance(v, dict) and v.get("pass"):
                booked[k] = ts
                remaining.discard(k)
        if not remaining:
            break
    print("  first booking resolved for %d/%d" % (len(booked), len(proven)))
    if not booked:
        sys.exit("REFUSING: no bookings resolved - ledger lookup broken (check the key form)")

    # last time each source file's CONTENT changed (git omits unchanged files, so no false hits)
    last, cur = {}, None
    for line in sh("log", "--reverse", "--format=C|%aI", "--name-only", "--", "src/lifted").splitlines():
        if line.startswith("C|"):
            cur = line[2:][:16].replace("T", " ")
        elif line.strip().endswith(".c") and cur:
            f = line.strip().replace("\\", "/").rsplit("/", 1)[-1]
            if f.startswith("cow_") and len(f) > 12:
                last[f[4:12].lower()] = cur

    # tripwire: a row verified stale by eye must still read stale, or the report is decoration
    probe = "100298f0"
    if probe in booked and probe in last and not booked[probe] < last[probe]:
        sys.exit("TRIPWIRE FAILED: 0x%s is known-stale but reads clean (booked %s, source %s)"
                 % (probe, booked[probe], last[probe]))

    stale = [(k, booked[k], last[k]) for k in proven
             if k in booked and k in last and booked[k] < last[k]]
    unaud = [k for k in proven if k not in booked or k not in last]

    print()
    print("=" * 66)
    print("  claimed-proven : %d" % len(proven))
    print("  STALE          : %d  (%.1f%%)" % (len(stale), 100.0 * len(stale) / len(proven)))
    print("  current        : %d" % (len(proven) - len(stale) - len(unaud)))
    print("  not auditable  : %d" % len(unaud))
    if unaud:
        print("    e.g. %s" % ", ".join("0x" + k for k in unaud[:6]))
    print("\n  sources rewritten after the pass, by commit time:")
    for w, n in Counter(s[2] for s in stale).most_common(6):
        print("    %s : %d" % (w, n))

    # cross-read against the last re-verify so the number becomes actionable
    rv_path = os.path.join(ROOT, "cow", "reverify.json")
    if os.path.exists(rv_path):
        failed = {f["unit"].lower().replace("0x", "") for f in json.load(open(rv_path))["failed"]}
        s = {x[0] for x in stale}
        print("\n  cross-read with cow/reverify.json:")
        print("    stale AND failing : %d   <- rows certifying bytes that no longer exist" % len(s & failed))
        print("    stale but passing : %d   <- bookkeeping only, verdict still holds" % len(s - failed))
        print("    fresh AND failing : %d   <- genuine current-source failures" % len(failed - s))

    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    json.dump({"head": head, "proven": len(proven), "stale": [x[0] for x in stale],
               "unauditable": unaud}, open(OUT, "w", encoding="utf-8", newline="\n"), indent=1)
    print("\nwrote %s" % os.path.relpath(OUT, ROOT).replace("\\", "/"))
    return 1 if len(stale) * 4 > len(proven) else 0   # non-zero past 25% staleness


if __name__ == "__main__":
    sys.exit(main())
