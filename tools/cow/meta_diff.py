"""Compare two FFXiMain meta.json files (or one against a git revision) entry by entry.

The meta file is single-line JSON of ~21k function records, so `git diff` is useless: it reports the
whole file as one changed line. This compares the structures instead and prints what actually moved:
top level scalar/list fields that differ, and the function records that were added or removed
keyed by (entry, sorted ranges).

  python tools/cow/meta_diff.py --left upstream/main --right HEAD meta/FFXiMain.2026-10-05.meta.json
  python tools/cow/meta_diff.py --a build/meta_a.json --b meta/FFXiMain.2026-10-05.meta.json
  python tools/cow/meta_diff.py --left HEAD --right WORKING --limit 40

--left/--right take a git revision ('HEAD', 'upstream/main', ...) and --path gives the blob path;
the revision WORKING reads the file from the working tree.
"""
import argparse
import json
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def load_side(rev, path):
    """Return the parsed meta dict for `path` at revision `rev` (or from the working tree)."""
    full = path if os.path.isabs(path) else os.path.join(ROOT, path)
    if rev in ('WORKING', 'WORKTREE', None, ''):
        with open(full, 'r', encoding='utf-8') as fh:
            return json.load(fh)
    rel = os.path.relpath(full, ROOT).replace('\\', '/')
    raw = subprocess.check_output(['git', '--no-pager', 'show', '%s:%s' % (rev, rel)],
                                  cwd=ROOT, shell=False)
    return json.loads(raw.decode('utf-8'))


def key_of(fn):
    return (fn.get('entry'), tuple(tuple(r) for r in fn.get('ranges', [])), bool(fn.get('thunk')))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--left', required=True, help='git revision, or WORKING')
    ap.add_argument('--right', required=True, help='git revision, or WORKING')
    ap.add_argument('--path', default='meta/FFXiMain.2026-10-05.meta.json')
    ap.add_argument('--limit', type=int, default=25, help='max added/removed entries to print')
    args = ap.parse_args()

    left = load_side(args.left, args.path)
    right = load_side(args.right, args.path)

    print('meta_diff  %s  vs  %s   (%s)' % (args.left, args.right, args.path))

    lkeys, rkeys = set(left), set(right)
    for k in sorted(lkeys | rkeys):
        if k == 'functions':
            continue
        lv, rv = left.get(k, '<absent>'), right.get(k, '<absent>')
        if lv != rv:
            print('  FIELD %-18s %s -> %s' % (k, str(lv)[:70], str(rv)[:70]))

    lf, rf = left['functions'], right['functions']
    lk = {key_of(f) for f in lf}
    rk = {key_of(f) for f in rf}
    added = sorted(rk - lk, key=lambda t: (t[0] or 0, t[1]))
    removed = sorted(lk - rk, key=lambda t: (t[0] or 0, t[1]))
    print('  functions: left=%d right=%d  added=%d removed=%d' %
          (len(lf), len(rf), len(added), len(removed)))
    for t in added[:args.limit]:
        print('    + %08X ranges=%s thunk=%s' %
              (t[0], ['%08X-%08X' % (lo, hi) for lo, hi in t[1]], t[2]))
    if len(added) > args.limit:
        print('    ... %d more added' % (len(added) - args.limit))
    for t in removed[:args.limit]:
        print('    - %08X ranges=%s thunk=%s' %
              (t[0], ['%08X-%08X' % (lo, hi) for lo, hi in t[1]], t[2]))
    if len(removed) > args.limit:
        print('    ... %d more removed' % (len(removed) - args.limit))

    same = not added and not removed
    print('VERDICT: %s' % ('IDENTICAL function sets' if same else 'DIFFERENT'))
    return 0


if __name__ == '__main__':
    sys.exit(main())
