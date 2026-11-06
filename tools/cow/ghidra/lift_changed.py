"""Entries whose lifted source changed since the last proof - the honest re-proof set.

lift_proof caches a verdict per entry, and an unchanged unit cannot change its own verdict: the inputs to
the proof are the file on disk, the generated original and the harness. So after a lift.py change the
re-proof set is the set of FILES THAT CHANGED, not the whole population, and the pass rate that comes out
is comparable line-for-line with the previous one. Deleted files drop out; new ones come in.

    python tools/cow/ghidra/lift_changed.py [outfile]
    python tools/cow/ghidra/lift_changed.py build/lift/entries_re.txt --also-why memory,fault

`--also-why` adds entries whose BYTES did not change but whose REPORTING did: when the harness starts
saying something new about a failure, the rows proved before it have nothing to group on.
"""
import json
import os
import subprocess
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
SRC = os.path.join(ROOT, "src", "lifted")
JSON = os.path.join(ROOT, "cow", "lift_proof_all.json")


def git(*a):
    return subprocess.run(["git"] + list(a), cwd=ROOT, capture_output=True, text=True,
                          encoding="utf-8", errors="replace").stdout


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    out = args[0] if args else os.path.join(ROOT, "build", "lift", "entries_changed.txt")
    changed = set()

    # modified / deleted / untracked, straight off the index-vs-worktree comparison
    for ln in git("status", "--porcelain", "--", "src/lifted").splitlines():
        tag, path = ln[:2].strip(), ln[3:].strip().strip('"')
        entry = os.path.basename(path)[len("cow_"):-len(".c")]
        if tag == "??":
            changed.add(entry.lower())          # a unit that did not exist before: prove it fresh
        elif tag == "D":
            changed.discard(entry.lower())
        else:
            changed.add(entry.lower())           # M: the bytes changed, so the verdict may have

    # and drop the ones whose bytes are actually identical (line-ending churn is not a change)
    real = []
    for e in sorted(changed):
        p = os.path.join(SRC, "cow_%s.c" % e)
        if not os.path.exists(p):
            continue
        head = git("show", "HEAD:src/lifted/cow_%s.c" % e)
        disk = open(p, encoding="utf-8", errors="replace").read()
        if head.strip() != disk.strip():
            real.append(e)

    # every entry that has a file but NO verdict yet (a fresh lift, or a population change)
    results = {}
    if os.path.exists(JSON):
        results = json.load(open(JSON, encoding="utf-8"))
    on_disk = {f[len("cow_"):-len(".c")].lower() for f in os.listdir(SRC) if f.endswith(".c")}
    missing = sorted(on_disk - set(k.lower() for k in results))

    # --also-why: entries in a group whose REPORTING changed, even though their bytes did not. The harness
    # line that names the differing word is new, so a memory failure proved last week has no tail to group
    # on; re-proving that group is what turns the bucket into patterns.
    extra = []
    if "--also-why" in sys.argv:
        want = sys.argv[sys.argv.index("--also-why") + 1].split(",")
        extra = [k.lower() for k, v in results.items()
                 if not v.get("pass") and (v.get("why") or "") in want and k.lower() in on_disk]

    allset = sorted(set(real) | set(missing) | set(extra))
    os.makedirs(os.path.dirname(out), exist_ok=True)
    with open(out, "w") as fh:
        fh.write("\n".join(allset) + ("\n" if allset else ""))
    print("changed bytes  : %d" % len(real))
    print("no verdict yet : %d" % len(missing))
    print("re-reported why: %d" % len(extra))
    print("re-proof set   : %d -> %s" % (len(allset), out))
    # the file list lift_proof wants is 0x-prefixed
    with open(out, "w") as fh:
        fh.write("\n".join("0x" + e for e in allset) + ("\n" if allset else ""))


if __name__ == "__main__":
    main()
