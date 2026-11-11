"""reverify - judge the loop's work with a check that trusts nothing the loop wrote.

WHY THIS EXISTS

The loop grades its own homework, and that has already hidden failures here: detectors that silently matched
nothing and reported a confident zero, a queue file that was committed and pushed while it did not even parse,
and (found the hard way on 2026-11-10) a unit the proof record called PROVEN whose file on disk has not
changed since and does NOT pass - reproducibly, in a pristine checkout of the same commit. A verdict that was
written down once is a claim, not a fact. This tool re-derives the fact.

WHAT MAKES IT INDEPENDENT, PRECISELY

  1. Its inputs are read from **HEAD**, with `git show HEAD:<path>`, not from the working tree. So an
     uncommitted edit cannot be blessed, and what it certifies is the commit, which is what the loop pushes.
  2. For every unit it then checks that the side-A source file on disk is **byte-identical to the committed
     blob**. If it is not, the run would be measuring something other than HEAD, so the unit is reported
     failed rather than quietly re-verified against different code.
  3. It reads no verdict, cache, log, phase mark, or summary the loop produced. It does not open
     `cow/loop_state.json`, `loop.log`, `build/phases.jsonl`, or any prior `reverify.json`. The only inputs
     are the three proof ledgers (to learn WHO claims to be proven) and the harness.
  4. The verdict comes from `tools/cow/cowdiff.py`, run as a **fresh subprocess per unit** - the same tool
     the gate uses, so this adds an independent witness rather than a second, divergent implementation of
     the differential. Reimplementing the comparison here would be the classic mistake: two checkers, two
     bugs, and whichever one you run last becomes the truth.

IT MAY NOT MAKE PROOF WEAKER

Default `--states 2000` is the gate's own setting, not the 300/400 recorded in the lift/table ledgers, and the
default `--seed 12345` is cowdiff's. So a unit that passes here passed under at least as strict a comparison
as the authoritative check applies, and nothing in this file can turn a FAIL into a PASS. A unit that fails
here is a real finding: report it. Do NOT "fix" it by editing a proof file to un-prove it - that is exactly
the quiet bookkeeping change this tool exists to catch.

THE COUNT GUARD

`checked` must equal the number of units the inputs actually claim are proven, and must not be zero. Without
it, a tool that selected nothing, crashed on every unit, or pointed at the wrong file would exit 0 and look
like a clean bill of health - which is the failure mode this loop has now been bitten by six times. A check
that checks nothing has to fail, loudly.

  python tools/cow/reverify.py                          # full run over everything claimed proven
  python tools/cow/reverify.py --track lift             # one track
  python tools/cow/reverify.py --units 0x100083b0,0x100279b0
  python tools/cow/reverify.py --jobs 8                 # parallel; the cost is subprocesses, so threads fit
"""
import argparse
import concurrent.futures
import json
import os
import subprocess
import sys
import threading
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
COWDIFF = os.path.join(ROOT, "tools", "cow", "cowdiff.py")

LIFT_LEDGER = "cow/lift_proof_all.json"
TABLE_LEDGER = "cow/table_proof.json"
LEDGER = "ledger/functions.csv"
OUT = os.path.join(ROOT, "cow", "reverify.json")

# A full run is ~6,400 cowdiffs - measured at ~13 h when it shares the machine with the loop. Without this
# file the loop cannot tell "an audit is running" from "nobody has ever audited us", and its due-check hands
# the operator the same run command on every `loopy next` while the real one is in flight, which stalls
# conversion for the whole duration. So a run announces itself here, and loopy stands down while the
# heartbeat is warm and its pid is alive.
INFLIGHT = os.path.join(ROOT, "build", "reverify.inflight")
BEAT_STALE_SECONDS = 90 * 60

# How many units this run has settled, for the heartbeat. The full audit is ~6,400 cowdiffs and, priced on
# this box with the conversion loop running alongside at roughly a cowdiff a second amortised over the pool,
# that is not minutes but HOURS - long enough that "is it working or is it convoyed on the build lock?"
# became an unanswerable question, because everything this tool prints is buffered by the redirection and
# arrives only at the end. `lift_proof.py` learned this lesson already ("a long job has to keep talking, or
# the operator cannot tell slow from dead and starts killing things") and reverify had not. A live count makes
# slow distinguishable from stuck, and a stuck run is visible as a count that stops moving while the beat
# stays warm.
PROGRESS = {"done": 0, "total": 0, "passed": 0, "failed": 0}
_PROGRESS_LOCK = threading.Lock()


def beat():
    """Stamp this process as the running audit. Best-effort: a failed heartbeat must not kill a good run."""
    try:
        os.makedirs(os.path.dirname(INFLIGHT), exist_ok=True)
        with open(INFLIGHT, "w", encoding="utf-8", newline="\n") as fh:
            with _PROGRESS_LOCK:
                prog = dict(PROGRESS)
            json.dump({"pid": os.getpid(),
                       "beat": time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime()),
                       "done": prog["done"], "total": prog["total"],
                       "passed": prog["passed"], "failed": prog["failed"]}, fh)
    except OSError:
        pass


def clear_beat():
    try:
        os.remove(INFLIGHT)
    except OSError:
        pass


def start_beat_thread(interval=20):
    """Keep the heartbeat warm on a CLOCK, not on a completion count.

    Beating every N units looked fine until the file was deleted between two boundaries: with a slow link
    the gap outlived N units, loopy saw no heartbeat, and it re-offered a 13-hour run that was already
    running - which is the exact stall this file exists to prevent. A daemon thread beats whatever the
    workers are doing, and stops beating the instant the process dies, so a killed run cannot keep the loop
    standing down (its file goes stale and the pid check fails).
    """
    def loop():
        while True:
            beat()
            time.sleep(interval)

    t = threading.Thread(target=loop, daemon=True)
    t.start()
    return t

# The gate's own comparison settings (see tools/cow/gate.ps1 / cowdiff defaults). Kept here rather than
# re-reading gate.ps1 so the harness has one place that says what a strict run is.
DEFAULT_STATES = "2000"
DEFAULT_SEED = "12345"
DEFAULT_ARGS = "4"


def git(*cmd):
    p = subprocess.run(["git"] + list(cmd), cwd=ROOT, capture_output=True,
                       text=True, encoding="utf-8", errors="replace")
    return p.returncode, (p.stdout or "")


def head_commit():
    return git("rev-parse", "HEAD")[1].strip()


# The commit this run judges. Resolved ONCE and used everywhere, because the whole point of
# an independent re-verify is that it certifies ONE immutable tree. Reading `"HEAD:"` per
# unit does not do that: a full sweep takes hours, and on 2026-11-11 nineteen commits landed
# during one, so units verified at 03:00 and at 10:00 judged different trees while the report
# carried a single SHA - an attributable-looking verdict that was an average of nineteen trees.
PIN = None


def pin():
    """Resolve and freeze the commit to judge. Call once, before any reading."""
    global PIN
    if PIN is None:
        PIN = head_commit()
    return PIN


def ref():
    return PIN if PIN else "HEAD"


def show_head(path):
    """The committed BYTES of `path` at the pinned commit, or None if it has no such file.

    Its own subprocess call, deliberately not routed through `git()`: these bytes are what the sha256
    comparison below is computed over, so text decoding, newline translation and error-replacement must not
    touch them. A dual-mode helper is where that kind of corruption hides.
    """
    p = subprocess.run(["git", "show", ref() + ":" + path], cwd=ROOT,
                       capture_output=True)
    return p.stdout if p.returncode == 0 else None


def read_csv_rows(text):
    import csv
    import io
    return list(csv.DictReader(io.StringIO(text)))


# ---------------------------------------------------------------- the claimed-proven sets

def claimed(commit=None):
    """(units, problems) where units is {hex8: track}. Read from HEAD, never from the working tree.

    The three tracks are disjoint by construction in this repo: lift-proven entries are machine-lifted and
    stay `todo` in the ledger; table rows are `done` with a file under src/tables/; hand units are the
    remaining `done` rows. The disjointness is asserted, not assumed - if a unit turns up in two tracks the
    count guard below would silently accept the smaller set, so it is reported instead.
    """
    problems = []
    units = {}

    raw = show_head(LIFT_LEDGER)
    if raw is None:
        problems.append("missing %s at HEAD" % LIFT_LEDGER)
        lift = {}
    else:
        try:
            lift = json.loads(raw.decode("utf-8", "replace"))
        except ValueError as exc:
            problems.append("%s at HEAD is not JSON: %s" % (LIFT_LEDGER, exc))
            lift = {}
    if not isinstance(lift, dict):
        problems.append("%s at HEAD is not an object" % LIFT_LEDGER)
        lift = {}
    # lift_proof_all is a flat {hex: verdict}; older files wrapped it in {"results": ...}, so accept both
    # the way the other readers do rather than inventing a third shape here.
    if "results" in lift and isinstance(lift["results"], dict) and len(lift) <= 6:
        lift = lift["results"]
    lift_proven = {k.lower().replace("0x", "") for k, v in lift.items()
                   if isinstance(v, dict) and v.get("pass") is True}

    raw = show_head(TABLE_LEDGER)
    table_proven = set()
    if raw is None:
        problems.append("missing %s at HEAD" % TABLE_LEDGER)
    else:
        try:
            t = json.loads(raw.decode("utf-8", "replace"))
            rows = t.get("rows") if isinstance(t, dict) else None
            if isinstance(rows, dict):
                table_proven = {k.lower().replace("0x", "") for k, v in rows.items()
                                if isinstance(v, dict) and v.get("pass") is True}
        except ValueError as exc:
            problems.append("%s at HEAD is not JSON: %s" % (TABLE_LEDGER, exc))

    raw = show_head(LEDGER)
    hand = set()
    if raw is None:
        problems.append("missing %s at HEAD" % LEDGER)
    else:
        for r in read_csv_rows(raw.decode("utf-8", "replace")):
            if (r.get("status") or "") != "done":
                continue
            ent = (r.get("entry") or "").lower().replace("0x", "")
            if not ent:
                continue
            # src/tables/ is the claim that the bytes are a compiler shape rather than a function somebody
            # read - the same predicate status.py applies to the same column. Anything else that is `done`
            # is hand work and belongs to the hand track.
            if (r.get("file") or "").replace("\\", "/").startswith("src/tables/"):
                continue
            hand.add(ent)

    for ent in lift_proven:
        units[ent] = "lift"
    for ent in table_proven:
        if ent in units:
            problems.append("0x%s claimed proven in both the lift and table tracks" % ent)
            continue
        units[ent] = "table"
    for ent in hand:
        if ent in units:
            problems.append("0x%s claimed proven in two tracks" % ent)
            continue
        units[ent] = "hand"
    return units, {"lift": len(lift_proven), "table": len(table_proven), "hand": len(hand)}, problems


# ---------------------------------------------------------------- source identity

SOURCE_CACHE = {}


def side_a_sources(hex8, track):
    """The files that decide this unit's side A - the ones reverify must see exactly as HEAD has them."""
    if track == "lift":
        return ["src/lifted/cow_%s.c" % hex8]
    # table and hand units live where the ledger says they do
    if "ledger_files" not in SOURCE_CACHE:
        raw = show_head(LEDGER)
        rows = read_csv_rows(raw.decode("utf-8", "replace")) if raw else []
        SOURCE_CACHE["ledger_files"] = {(r.get("entry") or "").lower().replace("0x", ""):
                                        (r.get("file") or "").replace("\\", "/") for r in rows}
    f = SOURCE_CACHE["ledger_files"].get(hex8, "")
    return [f] if f else []


def source_mismatch(hex8, track):
    """First source path that is not exactly as HEAD has it, else None.

    cowdiff reads the DISK, so without this the tool would certify a commit while actually testing
    somebody's uncommitted edit - the exact substitution an "independent" check must refuse to make.

    It asks **git** rather than comparing bytes, because this checkout has CRLF in the working tree and LF in
    the blobs (git says so on every checkout: "LF will be replaced by CRLF the next time Git touches it").
    Hashing `git show HEAD:<path>` against the file on disk therefore reports EVERY file as modified, which
    would make this check fail 100% of units and be worthless. `git diff --quiet HEAD -- <path>` applies the
    same smudge/clean filters both sides, so it answers the real question: is the file I am about to build
    the file HEAD says it is.
    """
    tracked, changed = head_inventory()
    for rel in side_a_sources(hex8, track):
        if not os.path.isfile(os.path.join(ROOT, rel)):
            return rel + " (missing from the working tree)"
        if tracked is None:
            # bulk query failed: answer for this one unit the slow way rather than not answer it
            if subprocess.run(["git", "cat-file", "-e", ref() + ":" + rel], cwd=ROOT,
                              capture_output=True).returncode != 0:
                return rel + " (not in HEAD)"
            if subprocess.run(["git", "diff", "--quiet", "HEAD", "--", rel], cwd=ROOT,
                              capture_output=True).returncode != 0:
                return rel + " (differs from HEAD)"
            continue
        if rel not in tracked:
            return rel + " (not in HEAD)"
        if rel in changed:
            return rel + " (differs from HEAD)"
    return None


def head_inventory():
    """(paths committed at HEAD, paths whose worktree content differs from HEAD), each ONE git call.

    Per-unit `git cat-file` + `git diff` meant ~13,000 subprocesses to walk 6,400 units, which made the
    fidelity pass - not the compiling - the slow part of a full run. Same questions, same smudge/clean
    filters, two processes. Returns (None, None) if either query fails, and callers drop back to asking
    per unit: a slow check beats one that quietly reports everything as faithful.
    """
    if "tracked" not in SOURCE_CACHE:
        t = subprocess.run(["git", "ls-tree", "-r", "--name-only", "HEAD"], cwd=ROOT,
                           capture_output=True, text=True)
        d = subprocess.run(["git", "diff", "--name-only", "HEAD"], cwd=ROOT,
                           capture_output=True, text=True)
        if t.returncode != 0 or d.returncode != 0:
            SOURCE_CACHE["tracked"], SOURCE_CACHE["changed"] = None, None
        else:
            SOURCE_CACHE["tracked"] = {l.strip().replace("\\", "/")
                                       for l in t.stdout.splitlines() if l.strip()}
            SOURCE_CACHE["changed"] = {l.strip().replace("\\", "/")
                                       for l in d.stdout.splitlines() if l.strip()}
    return SOURCE_CACHE["tracked"], SOURCE_CACHE["changed"]


# ---------------------------------------------------------------- the run

# Ordered by how much the line actually explains, and matched in tiers rather than as one bag of substrings.
# A flat substring list is what got this wrong on the first try: the harness output contains a compiler
# WARNING in an unrelated file ("src\lifted\cow_1002b3f0.c: warning C4018: signed/unsigned mismatch") and the
# word "mismatch" matched it, so the field a human triages from named the wrong file for a real failure.
# The verdict line is authoritative; harness mismatch rows come next; compile/link errors after that; and a
# `warning C` line is deliberately NOT a candidate unless nothing else exists, because warnings are normal
# output from neighbouring files in a batch build.
VERDICT_MARK = ("COWDIFF FAIL", "no cow_adapter_")
DETAIL_MARK = ("mismatches=", "MISMATCH", "fault ", "TIMEOUT", "timed out")
BUILD_MARK = ("error C", "fatal error", "LINK : fatal", "LNK", "cannot open")


def first_failing_line(payload):
    lines = [l.strip() for l in payload.splitlines() if l.strip()]
    for marks in (VERDICT_MARK, DETAIL_MARK, BUILD_MARK):
        for s in lines:
            if "warning C" in s:
                continue
            if any(m in s for m in marks):
                return s[:300]
    # Nothing matched any tier. Fall back to the last few lines rather than the first: the harness and the
    # compiler both narrate progress first and put the failure near the end, so line 0 is usually a banner.
    tail = [s for s in lines if "warning C" not in s]
    return (tail[-1] if tail else (lines[-1] if lines else ""))[:300]


def touch_sources(hex8, track):
    """Force the unit's own source to be recompiled, without changing a byte of it.

    WHY THIS IS NOT OPTIONAL. Found on the first use of this tool: `0x100dc1f0` (ledger status=done, hand
    track) has a committed source that writes `clock->cleared_before_tick`, a member that exists NOWHERE in
    the repository - and `reverify` reported PASS on it, while a fresh checkout of the same commit fails to
    compile it with error C2039. The only difference is the warm `build/` cache: the cached .obj is older
    than the mistake, so the compiler was never asked. That is a pass which means "we did not look", and an
    independent check that inherits the cache is not independent.

    mtime is bumped, content is not, so `git status` stays clean and the HEAD-fidelity guard above still
    holds - this makes the build honest without making the tree dirty.
    """
    for rel in side_a_sources(hex8, track):
        p = os.path.join(ROOT, rel)
        try:
            os.utime(p, None)
        except OSError:
            pass


def run_one(hex8, track, states, seed, nargs):
    """(ok, first_failing_line, detail). One cowdiff per unit, in a fresh process, no shared state."""
    bad = source_mismatch(hex8, track)
    if bad:
        return False, "source at HEAD does not match the working tree: %s" % bad, "source"
    touch_sources(hex8, track)
    cmd = [sys.executable, COWDIFF, "0x" + hex8, "--states", str(states),
           "--seed", str(seed), "--args", str(nargs)]
    try:
        p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                           encoding="utf-8", errors="replace", timeout=1800)
    except subprocess.TimeoutExpired:
        return False, "reverify: cowdiff did not return within 1800s", "timeout"
    except OSError as exc:
        return False, "reverify: could not run cowdiff: %s" % exc, "spawn"
    payload = ((p.stdout or "") + "\n" + (p.stderr or "")).strip()
    if p.returncode == 0:
        return True, "", ""
    return False, first_failing_line(payload) or ("exit %d, no output" % p.returncode), "cowdiff"


def main():
    ap = argparse.ArgumentParser(description="re-run cowdiff on everything claimed proven, trusting no verdict on disk")
    ap.add_argument("--units", default="", help="comma-separated entries to re-verify (default: all claimed)")
    ap.add_argument("--track", default="", choices=["", "lift", "table", "hand"])
    ap.add_argument("--jobs", type=int, default=1)
    ap.add_argument("--states", default=DEFAULT_STATES)
    ap.add_argument("--seed", default=DEFAULT_SEED)
    ap.add_argument("--args", dest="nargs", default=DEFAULT_ARGS)
    ap.add_argument("--out", default=OUT)
    ap.add_argument("--no-write", action="store_true", help="report only; do not write cow/reverify.json")
    ap.add_argument("--sample", type=int, default=0,
                    help="verify a deterministic N-unit subset and report it; refuses to write the default "
                         "record, because a sample must never satisfy the loop's 'full audit happened' check")
    ap.add_argument("--every", type=int, default=50,
                    help="print a progress line every N settled units (default 50)")
    a = ap.parse_args()

    t0 = time.time()
    commit = pin()              # frozen HERE, before any ledger or source is read
    units, counts, problems = claimed()
    if problems:
        for p in problems:
            print("PROBLEM: %s" % p)

    selected = {k: v for k, v in units.items() if not a.track or v == a.track}
    if a.units:
        want = {u.strip().lower().replace("0x", "") for u in a.units.split(",") if u.strip()}
        unknown = sorted(want - set(selected))
        selected = {k: v for k, v in selected.items() if k in want}
        # Naming a unit that is NOT claimed proven is not the same as verifying it - it is checking
        # something nobody asserted, which inflates `checked` and lets a real gap slip past.
        if unknown:
            print("NOT CLAIMED PROVEN at HEAD (refusing to count them): %s"
                  % ", ".join("0x" + u for u in unknown[:12]))
            return 4

    # A SAMPLE, and the discipline that goes with it. The full pass is hours on a busy box, which made the
    # loop's real choice "wait a day" or "no independent witness at all" - so an early signal was never
    # available. Sampling fixes that ONLY if a sample can never be mistaken for a full audit: loopy's
    # due-check reads cow/reverify.json's claimed.total to decide whether the population has moved enough to
    # need another pass, and a record written from 200 units would silently satisfy it while 6,200 went
    # unexamined. So a sampled run REFUSES to write the default record and must be told where to put its
    # report. The selection is deterministic in --seed, so "re-run the same sample" is reproducible.
    if a.sample:
        if a.sample <= 0:
            print("VERDICT: --sample %d selects nothing; a check that checks nothing is a failure." % a.sample)
            return 1
        import random
        keys = sorted(selected)
        if a.sample < len(keys):
            keep = set(random.Random(a.seed).sample(keys, a.sample))
            selected = {k: v for k, v in selected.items() if k in keep}
            if os.path.abspath(a.out) == os.path.abspath(OUT) and not a.no_write:
                print("REFUSING to write the DEFAULT record (%s) from a %d-of-%d sample: the loop reads that "
                      "file to decide whether a full audit happened, and a sample must not be able to answer "
                      "yes to it. Pass --out build/reverify_sample.json (or --no-write) to report it."
                      % (os.path.relpath(OUT, ROOT).replace("\\", "/"), len(selected), len(keys)))
                return 5

    expected = len(selected)
    print("reverify at %s: claimed proven lift=%d table=%d hand=%d ; selected=%d%s%s"
          % (commit[:10], counts["lift"], counts["table"], counts["hand"], expected,
             (" track=" + a.track) if a.track else "",
             (" SAMPLE=%d" % a.sample) if a.sample else ""))
    sys.stdout.flush()

    results = []
    if expected:
        def work(item):
            hex8, track = item
            ok, line, detail = run_one(hex8, track, a.states, a.seed, a.nargs)
            # Keep talking: the count moves, so an operator can tell a slow audit from a dead one, and can
            # see a failure appear at unit 12 instead of at the end of hour nine.
            with _PROGRESS_LOCK:
                PROGRESS["done"] += 1
                PROGRESS["passed" if ok else "failed"] += 1
                done, fails = PROGRESS["done"], PROGRESS["failed"]
            if a.every and done % a.every == 0:
                print("  ... %d/%d settled, %d failed (elapsed %.0fs)"
                      % (done, expected, fails, time.time() - t0))
                sys.stdout.flush()
            return {"unit": "0x" + hex8, "track": track, "ok": ok,
                    "first_failing_line": line, "detail": detail}

        with _PROGRESS_LOCK:
            PROGRESS["total"] = expected

        jobs = max(1, a.jobs)
        start_beat_thread()      # announce the run: loopy's due-check stands down while this is warm
        try:
            items = sorted(selected.items())
            if jobs == 1:
                results = [work(i) for i in items]
            else:
                with concurrent.futures.ThreadPoolExecutor(max_workers=jobs) as ex:
                    futs = [ex.submit(work, i) for i in items]
                    results = [f.result() for f in concurrent.futures.as_completed(futs)]
        finally:
            clear_beat()

    failed = [r for r in results if not r["ok"]]
    passed = len(results) - len(failed)
    seconds = round(time.time() - t0, 1)
    checked = len(results)

    # `when` is an addition to the brief's field list, and it is needed: status.py must show the date of the
    # last full run and turn it RED past 48 h, and a file that records only `seconds` cannot answer "when".
    # A commit stamp is not enough either - the run happens after the commit it verifies.
    # `claimed` is what makes the loop's "every 500 newly proven" rule measurable without a second counter
    # that can drift from the ledgers: the run records how many units the inputs asserted were proven at the
    # time, and the next due-check is simply (current total - that). A counter incremented by hand would have
    # to be fed by every route that books a pass, and the lift batches do not go through the hand bookkeeper.
    # HEAD moved mid-run => this report is NOT attributable to one commit, and must not be read as
    # if it were. Recording the fact is the minimum; the run also exits non-zero so the loop cannot
    # bank it as the audit it is not.
    end_commit = head_commit()
    rec = {"commit": commit, "when": time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime()),
           "claimed": dict(counts, total=len(units)),
           "checked": checked, "passed": passed,
           "failed": [{"unit": r["unit"], "track": r["track"],
                       "first_failing_line": r["first_failing_line"]} for r in failed],
           "seconds": seconds,
           "head_at_end": end_commit,
           "head_moved": end_commit != commit}
    if rec["head_moved"]:
        print("HEAD MOVED during the run: %s -> %s. This sweep judged a mixture of trees; "
              "its per-unit verdicts are signals, not a certification of either commit."
              % (commit[:8], end_commit[:8]))
    if not a.no_write:
        os.makedirs(os.path.dirname(a.out), exist_ok=True)
        with open(a.out, "w", encoding="utf-8", newline="\n") as fh:
            json.dump(rec, fh, indent=1, sort_keys=True)
            fh.write("\n")
        try:
            shown = os.path.relpath(a.out, ROOT).replace("\\", "/")
        except ValueError:
            # relpath refuses to cross drives (a --out under C:\Temp while the repo is on D:).
            # A cosmetic label must not kill a completed run with a traceback.
            shown = a.out
        print("wrote %s" % shown)

    print("REVERIFY %s: checked=%d passed=%d failed=%d in %.1fs"
          % ("PASS" if (not failed and checked == expected and checked) else "FAIL",
             checked, passed, len(failed), seconds))
    for r in failed[:40]:
        print("  FAIL %s [%s] %s" % (r["unit"], r["track"], r["first_failing_line"]))
    if len(failed) > 40:
        print("  ... and %d more" % (len(failed) - 40))

    # Four ways this run is not allowed to report success.
    if rec["head_moved"]:
        print("VERDICT: HEAD moved mid-run, so no single commit was certified. Re-run against a quiet "
              "tree; until then this is a lead list, not an audit.")
        return 1
    if failed:
        print("VERDICT: %d unit(s) the record calls proven do not pass cowdiff. Report them; do not "
              "un-prove them by editing a ledger." % len(failed))
        return 1
    if checked == 0:
        print("VERDICT: checked 0 - the inputs claim nothing proven, or the filter matched nothing. "
              "A check that checked nothing is a failure, not a pass.")
        return 1
    if checked != expected:
        print("VERDICT: ran %d of %d claimed units - something was skipped. Not a pass."
              % (checked, expected))
        return 1
    if problems:
        print("VERDICT: the inputs themselves are inconsistent (%d problem(s)). Not a pass." % len(problems))
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
