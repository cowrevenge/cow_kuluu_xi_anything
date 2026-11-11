"""Find and clear ORPHANED cowdiff processes - rows whose launcher died and whose .exe kept spinning.

Why this exists, with the two lines that make it a bug and not bad luck:

  tools/cow/reverify.py:471-477   runs `python tools/cow/cowdiff.py 0x<hex> ...` with
                                 `subprocess.run(..., timeout=1800)`. On TimeoutExpired,
                                 subprocess.run kills ITS DIRECT CHILD - the python launcher.
  tools/cow/cowdiff.py:570        runs the actual `build/cowdiff/cowdiff_<hex>.exe` with
                                 `subprocess.run(cmd, ...)` and NO timeout at all.

So the process that can hang forever is the grandchild, and the timeout kills the parent. The .exe is
orphaned and never terminated. It does not exit on its own either: the row budgets inside cowdiff.c
(25 CPU-s / 60 s wall by default) are checked at tick points, and a row stuck inside a BRIDGED
generated original never reaches one - which is exactly the case docs/cow and the runtime's
COW_TICK_MEMORY comment say the tick cannot bound. Each leaked row therefore permanently owns a core.

That is not cosmetic - but read the claim carefully, because I over-claimed it the first time (see
cow/wip/leaked-cowdiff-processes.md): the leak wastes cores and will eventually take all eight, and that is
measured. That it was THE reason a given audit ran slowly is a separate claim, and the audit's own heartbeat
(`build/reverify.inflight`: 5,677 of 7,441 units settled with a nine-second-old beat) showed it advancing
while these were alive. So: ten orphaned `cowdiff_*.exe`, five at 37,452 / 41,416 / 43,471 / 52,239 /
66,253 CPU-SECONDS each (~67 core-hours), every recorded parent gone, all older than the audit - a real
waste, and a starvation RISK, not a proven cause of slowness.

And starvation contaminates verdicts, which is the part that matters for the grind: cowdiff's row budget
has a WALL half (`COWDIFF_ROW_WALL_SECS`, default 60) as well as a CPU half. A healthy row on a box with
five cores pinned can blow the wall half without ever being slow. So 'hang' and 'timeout' rows recorded
while the box was saturated - the f_10316337 no-answer family, the timeout unit class, and any part of
the 394-unit re-verify that ran under contention - are suspect until re-measured on a free box.

Killing is gated, because this tool terminates processes:
  * the audit must be running (its pid is discovered, not hard-coded, or passed with --audit);
  * a target's recorded parent must be GONE (a live parent means the row is legitimately in flight);
  * a target created AFTER the audit started is refused outright - on Windows ParentProcessId records
    the creator and there is no reparenting, so "older than the audit" is a sound proof of
    non-descendance, and anything newer is protected however dead its parent looks;
  * by default only CPU-hungry orphans (> --threshold CPU-seconds, default 300) are killed: a parked
    orphan costs nothing and killing it would be an unnecessary risk. Pass --all-orphans to sweep.
  * evidence (pids, CPU-seconds, creation times, command lines) is written BEFORE anything dies.

Usage:
    python tools/cow/clear_orphan_cowdiff.py            # report only
    python tools/cow/clear_orphan_cowdiff.py --apply    # kill the CPU-hungry orphans
    python tools/cow/clear_orphan_cowdiff.py --apply --all-orphans
"""
import argparse
import io
import json
import os
import subprocess
import sys
from datetime import datetime, timezone

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
EVIDENCE_DIR = os.path.join(ROOT, "cow", "wip")


def evidence_path():
    # NOT a fixed filename. The first version wrote one `orphaned-cowdiff-evidence.json`, and a routine
    # report-only run overwrote the capture that proved the 2026-11-11 incident (ten orphans, five over
    # 37,000 CPU-seconds each) with an EMPTY record. Evidence must survive the next look.
    stamp = datetime.now(timezone.utc).strftime("%Y%m%dT%H%M%SZ")
    return os.path.join(EVIDENCE_DIR, "orphaned-cowdiff-evidence-%s.json" % stamp)


def ps(cmd):
    p = subprocess.run(["powershell", "-NoProfile", "-Command", cmd], capture_output=True,
                       text=True, encoding="utf-8", errors="replace")
    return p.stdout.strip()


def procs():
    out = ps("Get-CimInstance Win32_Process | Select-Object ProcessId,ParentProcessId,Name,"
             "CreationDate,CommandLine | ConvertTo-Json -Compress")
    if not out:
        sys.exit("REFUSING: could not enumerate processes; nothing will be killed.")
    data = json.loads(out)
    return [data] if isinstance(data, dict) else data


def parse_dt(s):
    # ConvertTo-Json does NOT give the ISO string Get-CimInstance prints in a table - it serialises
    # WMI datetimes as '/Date(1794371097261)/' (epoch milliseconds). A parser written against the
    # pretty output dies on the real payload. It gates a kill, so unknown formats are refused, not
    # guessed.
    if isinstance(s, str) and s.startswith("/Date("):
        ms = int(s[len("/Date("):].split(")")[0])
        return datetime.fromtimestamp(ms / 1000.0, timezone.utc)
    try:
        return datetime.fromisoformat(s)
    except ValueError:
        sys.exit("REFUSING: cannot parse CreationDate %r - will not decide kill eligibility on a guess."
                 % (s,))


def cpu_seconds(pid):
    try:
        return float(ps("(Get-Process -Id %d -ErrorAction SilentlyContinue).CPU" % pid) or "nan")
    except ValueError:
        return None


def find_audit(explicit):
    """The audit is the live `reverify.py` process. Discovered rather than hard-coded so the guard
    cannot go stale and 'protect' a pid that is now something else entirely."""
    out = ps("(Get-CimInstance Win32_Process -Filter \"Name='python.exe'\" | "
             "Where-Object { $_.CommandLine -match 'reverify\\.py' } | "
             "Select-Object -ExpandProperty ProcessId) -join ','")
    pids = [int(x) for x in out.split(",") if x.strip().isdigit()]
    if explicit:
        if explicit not in pids:
            sys.exit("REFUSING: --audit %d is not a running reverify.py (found: %s)." % (explicit, pids))
        return explicit
    if not pids:
        sys.exit("REFUSING: no running reverify.py found. This tool's safety rule is 'never touch a"
                 " process that could be the audit's own row', which needs an audit to compare against."
                 " With none running, sweep freely by hand or pass --audit.")
    if len(pids) > 1:
        sys.exit("REFUSING: %d reverify.py processes (%s) - ambiguous, pass --audit." % (len(pids), pids))
    return pids[0]


def main():
    ap = argparse.ArgumentParser(prog="clear_orphan_cowdiff.py")
    ap.add_argument("--apply", action="store_true", help="actually kill (default: report only)")
    ap.add_argument("--all-orphans", action="store_true",
                    help="also kill parked orphans below the CPU threshold")
    ap.add_argument("--threshold", type=float, default=300.0,
                    help="CPU-seconds above which an orphan counts as eating a core (default 300)")
    ap.add_argument("--audit", type=int, default=0, help="audit pid (default: discover reverify.py)")
    a = ap.parse_args()

    audit_pid = find_audit(a.audit)
    allp = procs()
    by_pid = {int(p["ProcessId"]) for p in allp}
    if audit_pid not in by_pid:
        sys.exit("REFUSING: audit pid %d vanished mid-enumeration." % audit_pid)
    audit_start = parse_dt(next(p["CreationDate"] for p in allp if int(p["ProcessId"]) == audit_pid))

    targets, parked, refused = [], [], []
    for p in allp:
        name = p.get("Name") or ""
        if not name.lower().startswith("cowdiff_"):
            continue
        pid = int(p["ProcessId"])
        rec = {"pid": pid, "name": name, "parent": p.get("ParentProcessId"),
               "parent_gone": int(p.get("ParentProcessId") or 0) not in by_pid,
               "created": parse_dt(p["CreationDate"]).isoformat(),
               "cpu_seconds": cpu_seconds(pid), "command": (p.get("CommandLine") or "")[:200]}
        if parse_dt(p["CreationDate"]) >= audit_start:
            rec["refuse_reason"] = "created after the audit started - could be its descendant"
            refused.append(rec)
        elif not rec["parent_gone"]:
            rec["refuse_reason"] = "parent still alive - row legitimately in flight"
            refused.append(rec)
        elif (rec["cpu_seconds"] or 0) > a.threshold:
            targets.append(rec)
        else:
            parked.append(rec)

    print("audit: pid %d started %s" % (audit_pid, audit_start.isoformat()))
    print("cores: %d" % (os.cpu_count() or 0))
    for r in refused:
        print("  in-flight/protected  pid %-6s %-26s cpu=%-9.1f %s"
              % (r["pid"], r["name"], r["cpu_seconds"] or -1, r["refuse_reason"]))
    for t in sorted(parked, key=lambda r: -(r["cpu_seconds"] or 0)):
        print("  parked orphan        pid %-6s %-26s cpu=%-9.1f (below threshold %g%s)"
              % (t["pid"], t["name"], t["cpu_seconds"] or -1, a.threshold,
                 "" if not a.all_orphans else " - WILL KILL"))
    total = 0.0
    for t in sorted(targets, key=lambda r: -(r["cpu_seconds"] or 0)):
        total += t["cpu_seconds"] or 0
        print("  CORE-EATING ORPHAN   pid %-6s %-26s cpu=%-9.1f parent gone, older than the audit"
              % (t["pid"], t["name"], t["cpu_seconds"] or -1))
    print("orphans that eat a core: %d, %.0f CPU-seconds burned between them (%.1f core-hours)"
          % (len(targets), total, total / 3600.0))

    kill = targets + (parked if a.all_orphans else [])
    # Evidence is written when there is something to evidence. The first version wrote a JSON on EVERY
    # invocation, so a routine "is the box clean?" check littered cow/wip with empty captures - and the
    # reason the filename is timestamped at all is that a routine run once OVERWROTE the one capture that
    # mattered. Both problems go away the same way: record incidents, not checks.
    if kill or refused:
        out = evidence_path()
        with io.open(out, "w", encoding="utf-8", newline="\n") as fh:
            json.dump({"captured_utc": datetime.now(timezone.utc).isoformat(),
                       "audit": {"pid": audit_pid, "started": audit_start.isoformat()},
                       "logical_cores": os.cpu_count(), "threshold_cpu_secs": a.threshold,
                       "killed_or_would_kill": kill, "refused_in_flight": refused}, fh, indent=1)
        print("evidence: %s" % os.path.relpath(out, ROOT))
    else:
        print("evidence: none written - nothing orphaned and nothing protected; the box is clean")

    if not kill:
        print("nothing to clear - no CPU-eating orphan outside the audit's own rows.")
        return 0
    if not a.apply:
        print("\nDRY RUN - %d process(es) would be killed. Re-run with --apply." % len(kill))
        return 0
    for t in kill:
        subprocess.run(["taskkill", "/PID", str(t["pid"]), "/T", "/F"], capture_output=True, text=True)
        print("killed %s (%s, %.0f CPU-s)" % (t["pid"], t["name"], t["cpu_seconds"] or 0))
    left = [p for p in procs() if (p.get("Name") or "").lower().startswith("cowdiff_")]
    print("cowdiff processes remaining: %d" % len(left))
    return 0


if __name__ == "__main__":
    sys.exit(main())
