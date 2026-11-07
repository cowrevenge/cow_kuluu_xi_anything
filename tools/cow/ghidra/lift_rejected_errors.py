"""What does the syntax gate's compiler ACTUALLY say about the lifted files it rejected?

lift.py's gate books a refusal as `does_not_compile_C2065` and throws the message away. The message is the
fix. C2065 says `'uRam104569fc' : undeclared identifier`, and the token names the parser to widen (`SYM_RE`
knows `DAT_` but not Ghidra's `Ram`-labelled spelling of the same image dword); C2198 says
`'void wr32(uint32_t,uint32_t)': too few arguments for call`, which is one arity bug in one pass, not two
hundred unrelated broken bodies. The ledger keeps the code; this reads the identifier.

So: compile the files the gate already rejected, with the gate's own flags, and histogram the messages with
their quoted identifiers canonicalised - which groups `uRam104569fc` and `uRam10456a28` as one kind of bug
instead of two dozen entries in a list nobody can act on.

`build/lift/rejected/` is the output of the LAST `lift.py --apply`, so this tool describes the lifter that
is in the tree, and it says nothing at all after a run with a different one.

    python tools/cow/ghidra/lift_rejected_errors.py            # all rejects
    python tools/cow/ghidra/lift_rejected_errors.py --n 200    # the first 200, for a quick look
"""
import argparse
import collections
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

REJ = os.path.join(ROOT, "build", "lift", "rejected")


def canon(msg):
    """The message with its identifier replaced, so one bug per KIND rather than one per instance."""
    return re.sub(r"'[^']*'", "'X'", msg).strip()[:80]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=0, help="compile only the first N rejects")
    ap.add_argument("--dir", default=REJ)
    ap.add_argument("--batch", type=int, default=100)
    a = ap.parse_args()

    if not os.path.isdir(a.dir):
        print("no rejected directory at %s - run `python tools/cow/ghidra/lift.py --apply` first" % a.dir)
        return 1
    files = sorted(f for f in os.listdir(a.dir) if f.endswith(".c"))
    if not files:
        print("%s is empty: the last --apply run had nothing to reject" % a.dir)
        return 0
    # The same guard the refusal snapshot has. This directory used to only ever gain files, so it held
    # rejects from every run since it was created and a census of it described a lifter that no longer
    # exists; lift.py's gate now prunes it, and this says so when the prune has not run.
    LIFTER = [os.path.join(ROOT, "tools", "cow", "ghidra", f)
              for f in ("lift.py", "gen_model.py", "ghidra_c.py")]
    lifter_new = max(os.path.getmtime(f) for f in LIFTER if os.path.exists(f))
    newest = max(os.path.getmtime(os.path.join(a.dir, f)) for f in files)
    if newest < lifter_new:
        print("WARNING: every file here is older than the lifter (%.0f min) - these rejects describe an "
              "OLDER lifter. Re-run `python tools/cow/ghidra/lift.py --apply` before believing any number "
              "below." % ((lifter_new - newest) / 60.0))
    if a.n:
        files = files[:a.n]

    import build as upstream              # the upstream driver, for the same msvc_env the gate uses
    env = upstream.msvc_env("x64")
    codes = collections.Counter()
    msgs = collections.Counter()
    toks = collections.Counter()
    ex = collections.defaultdict(list)
    for i in range(0, len(files), a.batch):
        batch = [os.path.join(a.dir, f) for f in files[i:i + a.batch]]
        # the gate's own command line, copied rather than called: the gate returns a dict and deletes its
        # evidence, and re-running the lift to ask a question about its output costs nine minutes.
        cmd = (["cl", "/c", "/Zs", "/nologo", "/O1", "/MT", "/W3", "/std:c11", "/bigobj",
                "/DRT_GUEST_WINDOW",
                "/I", "runtime", "/I", "runtime\\portable", "/I", "generated",
                "/I", "generated\\all", "/I", "layout"] + batch)
        p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                           encoding="utf-8", errors="replace", env=env)
        text = (p.stdout or "") + "\n" + (p.stderr or "")
        for m in re.finditer(r"cow_([0-9a-f]{8})\.c(?:\(\d+\))?\s*:\s*(?:fatal\s+)?error\s+(C\d+)\s*:\s*(.*)",
                             text):
            code, msg = m.group(2), m.group(3).strip()
            codes[code] += 1
            msgs[(code, canon(msg))] += 1
            q = re.match(r"'([^']*)'\s*:\s*(.*)", msg)
            if q:
                t = re.sub(r"[0-9a-f]{5,}", "H", q.group(1))
                toks["%s %s: %s" % (code, t, q.group(2)[:40])] += 1
                if len(ex[(code, canon(msg))]) < 3:
                    ex[(code, canon(msg))].append((m.group(1), q.group(1)))

    print("compiled %d rejected files from %s" % (len(files), a.dir))
    print("\n-- error codes --")
    for k, v in codes.most_common(12):
        print("  %7d  %s" % (v, k))
    print("\n-- messages, identifier canonicalised (one line = one kind of bug) --")
    for (code, m), v in msgs.most_common(18):
        print("  %7d  %s %s" % (v, code, m))
        for ad, tok in ex[(code, m)]:
            print("              0x%s  %s" % (ad, tok[:64]))
    print("\n-- identifier kinds (the token the parser could not resolve) --")
    for k, v in toks.most_common(24):
        print("  %7d  %s" % (v, k))
    return 0


if __name__ == "__main__":
    sys.exit(main())
