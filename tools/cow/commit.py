"""ONE script, run ONCE per commit. It does the bookkeeping and commits; nothing else writes bookkeeping.

    python tools/cow/commit.py --cluster 0x100dbeb0 --subject 'cow: 0x100dbeb0 ... [guess]'
    python tools/cow/commit.py --cluster 0x100dbeb0,0x100dc250 --subject '...' [--dry-run]
    python tools/cow/commit.py --subject 'cow: machinery ...' --machinery

Before this, bookkeeping was four things you had to remember (setstatus, genwraps, status.py, git add)
and the failure mode was visible in the log: a unit committed its .c but not the layout/addresses.h it
needed, HEAD did not build, and the fix arrived as a second "machinery" commit - which made "one commit
per unit" false and made the gate's clean-tree precheck complain about a tree the loop itself dirtied.

What it does, in order, every time:
  1. regenerate the ledger-derived artifacts: genwraps (cow/wraps.json + runtime/cow/cow_wraps.c), then
     status.py --describe (README block, docs/cow/STATUS.md, docs/cow/NAMES_TODO.md);
  2. if the trivial table is implicated, require cow/table_proof.py --check to pass rather than trusting
     a stale proof;
  3. stage the WHOLE area a unit is allowed to change (src, layout, cow, ledger, runtime/cow, docs/cow,
     README, loop.log) - directories, so deletions ride along - and refuse to proceed if anything outside
     it is dirty;
  4. commit, and push with loopy's fast-forward/merge/retry logic (imported, not reimplemented).

Hand-editing README/STATUS/NAMES_TODO is therefore pointless: they are regenerated at step 1 and any
manual change is overwritten. A tool or harness change goes with --machinery, which is the same script
with the tools/ area allowed - and per LOOP.md that is a between-clusters act, never mid-unit.
"""
import argparse
import json
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))          # tools/cow/x.py -> repo root, not tools/
sys.path.insert(0, os.path.join(HERE, 'loopy'))

import loopy                                     # noqa: E402  commit_and_push, sh, dirty_paths

PY = sys.executable

# What a unit may change. Anything else in the tree is somebody else's business and stops the commit.
UNIT_DIRS = ['src', 'layout', 'cow', 'ledger', 'runtime/cow', 'docs/cow']
UNIT_FILES = ['README.md', 'loop.log']
# Extra, only for --machinery (and only between clusters, per LOOP.md)
TOOL_DIRS = ['tools/cow', 'runtime/portable', 'tests']
# tools/build.py is upstream's, with one exception LOOP.md documents: the `# COW:` hook lines (search
# `# COW:`) that put our sources, our wraps, and the two response-file re-spellings into the build. Those
# lines are ours to commit, so machinery mode owns the file - otherwise a legitimate hook edit is reported
# as "dirty outside the loop's areas" and the loop cannot land the build fix it depends on.
# runtime/guest.h is upstream's too, with the same exception: the COW_MEM_TICK watchdog block, which is
# the lift proof's only way to bound a guest loop that spins inside a BRIDGED callee (those are generated
# originals, so cow_tick never runs in them). It is compiled out unless -DCOW_TICK_MEMORY is passed, which
# nothing but lift_proof does, but it still lives in a shipped header - so machinery mode owns the file the
# same way it owns build.py, instead of reporting a legitimate harness change as dirt outside the loop.
# runtime/runtime.c and runtime.h are upstream's too, with the same exception: rt_note_process_exit, the
# hook the differential harness arms so that a guest ExitThread ends the ROW instead of the process. It
# lives in a shipped runtime file, so machinery mode owns those two the way it owns build.py and guest.h -
# otherwise a harness fix that has to touch the runtime is reported as dirt outside the loop.
TOOL_FILES = ['tools/build.py', 'runtime/guest.h', 'runtime/runtime.c', 'runtime/runtime.h']


def run(*argv, **kw):
    p = subprocess.run(list(argv), cwd=ROOT, capture_output=True, text=True,
                       encoding='utf-8', errors='replace', timeout=kw.get('timeout', 1800))
    return p.returncode, ((p.stdout or '') + (p.stderr or '')).strip()


def main():
    ap = argparse.ArgumentParser(prog='commit.py')
    ap.add_argument('--cluster', default='', help='comma-separated entries this commit belongs to')
    ap.add_argument('--subject', required=True, help='the commit subject (also what status.py records)')
    ap.add_argument('--body', default='', help='optional commit body appended after the subject')
    ap.add_argument('--machinery', action='store_true',
                    help='a tools/harness commit, made between clusters (LOOP.md), not a unit commit')
    ap.add_argument('--dry-run', action='store_true', help='regenerate and report; do not commit')
    ap.add_argument('--no-push', action='store_true')
    a = ap.parse_args()

    entries = [e.strip().lower() for e in a.cluster.split(',') if e.strip()]

    # ---- 1. regenerate everything that is derived, never hand-written ----------------------------
    # Unit mode only: a machinery commit does not change the ledger, and regenerating here would dirty
    # README/STATUS/NAMES_TODO from a ledger whose unit rows are not in HEAD yet - publishing a count
    # the committed ledger does not support.
    if not a.machinery:
        rc, out = run(PY, 'tools/cow/genwraps.py')
        if rc:
            print('COMMIT BLOCKED: genwraps failed\n%s' % out[-800:])
            return 1
        rc, out = run(PY, 'tools/cow/status.py', '--describe', a.subject)
        if rc:
            print('COMMIT BLOCKED: status.py failed\n%s' % out[-800:])
            return 1
        print('regenerated: wraps, README block, STATUS.md, NAMES_TODO.md')

    # ---- 2. the table's proof has to cover the table as it now stands -----------------------------
    staged_def = subprocess.run(['git', 'status', '--porcelain', 'src/tables/cow_trivial_rows.def'],
                                cwd=ROOT, capture_output=True, text=True).stdout.strip()
    if staged_def:
        rc, out = run(PY, 'tools/cow/table_proof.py', '--check')
        print(out.splitlines()[-1] if out else 'table_proof --check: no output')
        if rc:
            print('COMMIT BLOCKED: the table changed and its proof does not cover it '
                  '(run python tools/cow/table_proof.py)')
            return 1

    # ---- 3. stage the whole area, and complain loudly about anything outside it -------------------
    # The two modes are DISJOINT, not nested. A machinery commit carries harness/tool changes and
    # nothing of the unit's; a unit commit carries the unit and no tools. If --machinery also allowed
    # the unit dirs (it did), one dirty tree would sweep the half-finished conversion into the tool
    # commit and "one commit per cluster" would be false again - which is the exact failure the
    # between-clusters rule exists to prevent.
    allow = list(TOOL_DIRS) + ['docs/cow'] if a.machinery else list(UNIT_DIRS)
    other = list(UNIT_DIRS) if a.machinery else list(TOOL_DIRS)
    # README/STATUS/NAMES_TODO are DERIVED from the ledger, so only a unit commit may carry them: a
    # machinery commit made while unit bookings are uncommitted would publish a "done N" that HEAD's
    # ledger does not support.
    #
    # They are excluded from the docs/cow allowance explicitly, not left to the directory rule. A tool
    # commit today that also carried STATUS.md would be publishing a progress line derived from a ledger
    # row that is NOT in that commit - the same class of lie as a README claiming a unit is done, and the
    # reason this was flagged as a between-clusters fix rather than something to keep hand-`checkout`ing
    # before every machinery commit.
    # README.md belongs in this list for the same reason its two siblings do: the cow block is generated
    # from the ledger and from what is under src/, so a re-lift dirties it without any hand edit. Excluding
    # it from `in_area` alone was not enough - README.md is not under a UNIT_DIR, so it also fell through
    # to `surprise` and BLOCKED the machinery commit outright, which is how a tool fix got held hostage to
    # a progress line. Machinery mode now tolerates the derived trio in the tree and reports them, exactly
    # as it does the other mode's territory.
    derived = ['README.md', 'docs/cow/STATUS.md', 'docs/cow/NAMES_TODO.md']
    files_ok = (['loop.log'] + TOOL_FILES if a.machinery else list(UNIT_FILES))
    code, status = loopy.sh(['git', 'status', '--porcelain'])
    dirty = [l[3:].strip().strip('"').replace('\\', '/') for l in status.splitlines() if l.strip()]
    in_area = [p for p in dirty
               if (any(p == f for f in files_ok) or any(p.startswith(d + '/') for d in allow))
               and not (a.machinery and p in derived)]
    # The other mode's territory is left in the tree, unstaged, and reported: a unit commit does not
    # swallow a tool edit, and a tool commit does not swallow a half-finished conversion. Something
    # outside BOTH areas is nobody's business and stops the commit outright.
    foreign = [p for p in dirty
               if p not in in_area and any(p.startswith(d + '/') for d in other)]
    tolerated = set(foreign) | ({p for p in derived} if a.machinery else set())
    surprise = [p for p in dirty if p not in in_area and p not in tolerated]
    if surprise:
        print('COMMIT BLOCKED: dirty outside the loop\'s areas: %s' % ', '.join(surprise[:6]))
        return 1
    if foreign:
        print('note: %d path(s) from the other kind of commit left unstaged here: %s'
              % (len(foreign), ', '.join(foreign[:4])))
    left = [p for p in dirty if a.machinery and p in derived]
    if left:
        print('note: derived progress file(s) left in the tree, not carried by a machinery commit: %s'
              % ', '.join(left))
    # ---- 2b. a commit that CLAIMS units proven must be looked at by the independent witness first -----
    # The subject is the claim, so the claim is what is policed. Scoped deliberately: a machinery commit that
    # only reports a measured number ("the knob released 2,858, proof passed 5 of 58") is honest reporting of
    # an experiment and is not booking anything, so it is not required to re-verify; a commit that carries
    # unit sources under src/ IS the booking, and that is where an unverified PASS becomes a published fact.
    claim = re.search(r'(\d+)\s+(?:newly\s+)?proven', a.subject, re.I)
    books_units = any(p.startswith('src/') for p in in_area)
    if claim and books_units and not a.dry_run:
        want = [e.replace('0x', '') for e in entries]
        if not want:
            print('COMMIT BLOCKED: the subject claims %s proven but --cluster names no units, so there is '
                  'nothing for the independent re-verify to check. Pass --cluster <the entries you are '
                  'booking>.' % claim.group(0))
            return 1
        print('re-verify before commit: %d unit(s) claimed proven ...' % len(want))
        ok_r, rlines = loopy.reverify_units(want, jobs=min(8, max(1, len(want))))
        if not ok_r:
            print('COMMIT BLOCKED: tools/cow/reverify.py rejected unit(s) this commit claims are proven:')
            for l in rlines:
                print('  %s' % l)
            print('Report it; do not un-prove the units by editing a proof record to make this pass.')
            return 1
        print('re-verify OK: %d unit(s) pass cowdiff in a fresh process' % len(want))

    if not in_area:
        print('nothing to commit in the %s area' % ('machinery' if a.machinery else 'unit'))
        return 0

    paths = [d for d in allow if os.path.isdir(os.path.join(ROOT, d))]
    paths += [f for f in files_ok if os.path.exists(os.path.join(ROOT, f))]
    dirty = in_area
    if a.dry_run:
        print('DRY RUN would stage %d path(s):\n  %s' % (len(dirty), '\n  '.join(dirty[:20])))
        return 0

    # ---- 4. commit + push, on the path loopy already proved out ----------------------------------
    message = a.subject if not a.body else '%s\n\n%s' % (a.subject, a.body)
    # A machinery commit stages EXACTLY the paths this function already vetted and reported. loopy's
    # default list is right for a unit commit - one unit, one commit, everything the unit owns including
    # the ledger row and the derived progress docs - but it also contains 'src', 'layout' and those docs,
    # so a tool commit built on it swept in whatever lifted files happened to be dirty plus a README line
    # describing progress the tool change had nothing to do with. `in_area` is the honest answer to "what
    # is this commit", so it is what gets staged.
    ok, note = loopy.commit_and_push(message, extra=paths,
                                     stage_only=(in_area if a.machinery else None))
    if not ok:
        print('COMMIT FAILED: %s' % note)
        return 1
    if entries:
        # Key the timing on the SEED (the first entry), which is what cluster.py and the loop's marks
        # use. Keying it on the full member list meant `committed` landed under a different cluster
        # string than its own marks and the report showed every phase as unmeasured.
        loopy.sh([PY, 'tools/cow/phase.py', 'mark', 'committed',
                  '--cluster', entries[0]])
    print('COMMIT OK %s  (%s)' % (loopy.sh(['git', 'rev-parse', '--short', 'HEAD'])[1].strip(), note))
    print(json.dumps({'subject': a.subject, 'cluster': entries, 'staged': len(dirty)}))
    return 0


if __name__ == '__main__':
    sys.exit(main())
