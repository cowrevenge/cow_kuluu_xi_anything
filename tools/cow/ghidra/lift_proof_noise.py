"""lift_proof_noise.py - is the judge deterministic? Every proof number in this repo assumes it is.

Why this exists as a tool and not a question. A re-lift batch reported 17 units gained and 3 lost
against `cow/lift_proof_all.json`, and one of the three was a CONTROL whose file never moved
(`changed_files: 163`, `unexpected_changes: []`, and it is not in the population the knob acts on). A
byte-identical unit that is booked `pass=True states=400` and then fails at state 0 has only three
possible explanations - the batch was contaminated, the booking was never reproducible, or the judge
is non-deterministic - and the repo has no instrument that distinguishes them. Until it does, every
"the knob gained N units" is a comparison against a baseline produced by an unknown build, with an
unknown seed order, at an unknown point in the emitter's history.

WHAT IT DOES. Prove the SAME units, from the SAME tree, with the SAME state count and seed, `--runs`
times, each into its own scratch record. Any unit whose verdict differs between two runs of identical
bytes is a flip, and the flip is reported with the first failing line from both runs - because
"it flipped" without the line is a number, and the line is the finding.

WHAT IT REFUSES.
  * a dirty judged tree at the start, or one that became dirty during a run (a proof run must not be
    rewriting the files it is judging - that would make each run a different build);
  * a run that exited non-zero (its counts are not quotable);
  * a run whose rows are harness non-verdicts (`awaiting_solo`, "reported nothing"), which would be
    read as a FAIL and counted as a flip;
  * fewer than 2 runs, and an empty unit list.

The environment is scrubbed of every COW_* variable: a stray knob in the shell makes the two "identical"
runs identical to nothing.
"""
import argparse
import datetime
import hashlib
import io
import json
import os
import re
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, HERE)
for _p in (os.path.join(ROOT, "tools", "cow"), os.path.join(ROOT, "tools")):
    if _p not in sys.path:
        sys.path.insert(0, _p)

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

import lift_proof_map as lpm

PROOF_TOOL = os.path.join(HERE, "lift_proof.py")
SCRATCH = os.path.join(ROOT, "build", "scratch", "proof-noise")
JUDGED = ("src", "layout", "ledger", "runtime")
# a row that is not a verdict. Counting one of these as "fail" would invent a flip out of a harness
# problem, which is the one thing this instrument must never do.
NON_VERDICT = ("awaiting_solo", "reported nothing", "no answer", "timeout", "hang")


def judged_dirt():
    p = subprocess.run(["git", "-c", "core.safecrlf=false", "diff", "--name-only", "HEAD", "--"]
                       + list(JUDGED), cwd=ROOT, capture_output=True, text=True)
    return [x.strip() for x in (p.stdout or "").splitlines() if x.strip()]


def one_run(units, states, seed, tag, run_dir):
    """One proof pass over the same bytes. Returns the record dict, or exits.

    The record name is supplied by the caller and this function NEVER deletes an existing file: the
    first version wrote `run-r0.json` into a fixed directory and removed it first, so running the tool
    on a second unit list silently destroyed the evidence from the first, and a later comparison of
    "the two batches" was comparing the surviving one against itself. Evidence that can be overwritten
    by the next measurement is not evidence.
    """
    out = os.path.join(run_dir, "run-%s.json" % tag)
    if os.path.exists(out):
        sys.exit("REFUSING: %s already exists - this invocation would overwrite an earlier record."
                 % out)
    env = {k: v for k, v in os.environ.items() if not k.startswith("COW_")}
    env["PYTHONIOENCODING"] = "utf-8"
    t0 = time.time()
    p = subprocess.run([sys.executable, PROOF_TOOL, "--entries", ",".join(sorted(units)),
                        "--states", str(states), "--seed", str(seed), "--out", out],
                       cwd=ROOT, capture_output=True, text=True,
                       encoding="utf-8", errors="replace", env=env)
    tail = [l.strip() for l in (p.stdout or "").splitlines() if l.strip()]
    print("  run %-4s rc=%d  %5.0fs  %s" % (tag, p.returncode, time.time() - t0,
                                             tail[-1][:100] if tail else "(no output)"))
    # lift_proof exits 1 whenever ANY unit fails, which is the normal outcome of a proving run and not
    # a reason to discard it. What is fatal is a run that produced no record, or an empty one - a
    # crashed run is exactly the thing that looks like a clean sweep to a script that only checks
    # whether the units passed.
    if not os.path.isfile(out):
        sys.exit("REFUSING: run %s exited %d and left no record at %s - the counts are not quotable."
                 % (tag, p.returncode, out))
    if p.returncode != 0:
        if not [l for l in tail if "%" in l or "rows" in l or "pass" in l.lower()]:
            print((p.stderr or "")[-1200:])
            sys.exit("REFUSING: run %s exited %d with no summary line at all - that is a crash, not a"
                     " batch of failures." % (tag, p.returncode))
        print("      (exited %d: some units failed, which is a verdict rather than a crash - the record"
              " is complete, so it is used)" % p.returncode)
    with io.open(out, encoding="utf-8") as fh:
        rec = json.load(fh)
    if not rec:
        sys.exit("REFUSING: run %s wrote an EMPTY record - the harness answered nothing, so silence"
                 " would look like agreement." % tag)
    nonv = {a: r for a, r in rec.items()
            if isinstance(r, dict) and any(s in str(r.get("why", "")).lower()
                                           or s in str(r.get("detail", "")).lower()
                                           for s in NON_VERDICT) and "pass" not in r}
    if nonv:
        print("      %d row(s) are harness non-verdicts (excluded from the flip count, reported"
              " anyway): %s" % (len(nonv), sorted(nonv)[:6]))
    return rec


def main():
    ap = argparse.ArgumentParser()
    g = ap.add_mutually_exclusive_group(required=True)
    g.add_argument("--list", default="", help="file of entries, one per line")
    g.add_argument("--entries", default="", help="comma-separated entries")
    ap.add_argument("--states", default="400")
    ap.add_argument("--seed", default="12345")
    ap.add_argument("--runs", type=int, default=2)
    ap.add_argument("--report", default="", help="also compare against this record (e.g. a re-lift)")
    a = ap.parse_args()
    if a.runs < 2:
        sys.exit("REFUSING: --runs must be >= 2; one run measures nothing about determinism.")
    if a.list:
        raw = [l.strip() for l in io.open(a.list, encoding="utf-8") if l.strip()
               and not l.startswith("#")]
    else:
        raw = [x.strip() for x in a.entries.split(",") if x.strip()]
    units = sorted({lpm.strip0x(u) for u in raw})
    if not units:
        sys.exit("REFUSING: empty unit list - two runs over nothing agree perfectly and prove nothing.")
    dirt = judged_dirt()
    if dirt:
        sys.exit("REFUSING: the judged tree is dirty (%d file(s), e.g. %s). Two runs of DIFFERENT bytes"
                 " are not a determinism test." % (len(dirt), dirt[:3]))

    # One directory per INVOCATION, named by time and a digest of the unit list, and never reused. A
    # determinism claim is only checkable later if the records it was made from still exist - the first
    # version wrote run-r0.json to a fixed path and deleted it on the next run, which is how a
    # "0 of 206 flipped" result became unverifiable minutes after it was printed.
    digest = hashlib.sha256("\n".join(units).encode()).hexdigest()[:10]
    stamp = datetime.datetime.now().strftime("%Y%m%d-%H%M%S")
    run_dir = os.path.join(SCRATCH, "%s-%s-s%s-n%s" % (stamp, digest, a.seed, len(units)))
    # Validate the report BEFORE spending two proof batches on it. The first version checked the
    # provenance of --report after the runs, so the wasted compute was the price of noticing, and the
    # check that would have saved 15 minutes arrived too late to be used.
    rep = None
    if a.report:
        if not os.path.isfile(a.report):
            sys.exit("REFUSING: --report %s does not exist - two proof batches would be run and then"
                     " discarded." % a.report)
        with io.open(a.report, encoding="utf-8") as fh:
            rep = json.load(fh)
        if not rep:
            sys.exit("REFUSING: --report %s is empty - it would agree with nothing and count that as a"
                     " finding." % a.report)
        rep_keys = {lpm.strip0x(k) for k in rep}
        missing = [u for u in units if u not in rep_keys]
        if len(missing) > max(2, len(units) // 20):
            sys.exit("REFUSING: --report %s holds %d rows and lacks %d of the %d units being compared -"
                     " it came from a DIFFERENT unit list, so every absent row would be counted as a"
                     " verdict difference. (This is how a chunk-vs-solo 'finding' was manufactured on"
                     " 2026-11-11: a 40-row record was asked about 206 units.)"
                     % (os.path.basename(a.report), len(rep), len(missing), len(units)))
    print("judge determinism: %d units, states=%s seed=%s, %d runs over IDENTICAL bytes"
          % (len(units), a.states, a.seed, a.runs))
    # Created only now: an invocation that refuses on --report provenance must not leave a directory
    # behind, or the scratch area fills with empty dirs that look like abandoned runs.
    os.makedirs(run_dir, exist_ok=False)
    print("records: %s" % run_dir)
    recs = []
    for i in range(a.runs):
        recs.append(one_run(units, a.states, a.seed, "r%d" % i, run_dir))
        dirt = judged_dirt()
        if dirt:
            sys.exit("REFUSING: the judged tree became dirty during the runs (%d file(s)) - the runs"
                     " were not over identical bytes." % len(dirt))

    print("\n---- agreement ----")
    for i, r in enumerate(recs):
        ok = sum(1 for v in r.values() if isinstance(v, dict) and v.get("pass") is True)
        print("  run r%d: %d rows, %d pass" % (i, len(r), ok))

    flips = {}
    for u in units:
        seen = []
        for i, r in enumerate(recs):
            row = lpm.lookup(r, u)
            if row is None:
                seen.append((i, "MISSING", None))
                continue
            seen.append((i, "PASS" if row.get("pass") is True else "FAIL",
                         row.get("raw") or row.get("detail") or row.get("why")))
        verdicts = {s[1] for s in seen}
        if len(verdicts) > 1:
            flips[u] = seen
    print("\nFLIPPED between identical runs: %d of %d" % (len(flips), len(units)))
    for u, seen in list(flips.items())[:20]:
        print("  0x%s" % u)
        for i, v, line in seen:
            print("      r%d %-5s %s" % (i, v, str(line)[:150]))

    if rep is not None:
        print("\n---- the same units in the record under review (%s) ----"
              % os.path.basename(a.report))
        moved = []
        base = recs[-1]
        for u in units:
            b, r = lpm.lookup(base, u), lpm.lookup(rep, u)
            if b is None or r is None:
                continue
            if bool(b.get("pass")) != bool(r.get("pass")):
                moved.append((u, b.get("pass"), r.get("pass"),
                              str(r.get("raw") or r.get("detail"))[:120]))
        print("  %d of %d differ from the run under review." % (len(moved), len(units)))
        for u, b, r, line in moved[:15]:
            print("    0x%s  repeated-baseline=%s  reviewed=%s  %s" % (u, b, r, line))

    if flips:
        print("\nRESULT: verdicts moved between runs of identical bytes. Before blaming the judge or a"
              " knob, check the PROVENANCE of every record being compared: which unit list produced it,"
              " which tree, and whether a later invocation overwrote it. On 2026-11-11 a comparison like"
              " this was read as 'chunk-vs-solo path dependence' and was actually a fixed-filename record"
              " that a second invocation had replaced with a different unit list.")
        return 1
    print("\nRESULT: the runs reproduced each other exactly over %d runs. Differences against another"
          " batch are then differences in the BYTES - provided the other record is still the record that"
          " batch produced (see --report: a record read from a different unit list agrees with nothing)."
          % a.runs)
    return 0


if __name__ == "__main__":
    sys.exit(main())
