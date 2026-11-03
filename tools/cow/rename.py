"""Rename an identifier properly: code, names.csv, the registration TU, the build, the gate, status.

A name is a guess until it has evidence, and the loop must never stall on one - so the rename is a
single command that leaves the repo consistent:

  python tools/cow/rename.py unk_fn_100083b0 cow_incr_counter_if_active
  python tools/cow/rename.py cow_incr_counter_if_active actor_bump_counter --confirm
  python tools/cow/rename.py flags_1c tracking_flags --dry-run

What it does, in order: rewrite whole-word occurrences in src/ and layout/ (nothing else is touched,
and generated/ + build/ are never edited); update that identifier's row in cow/names.csv (with
--confirm, confidence becomes 'confirmed' - the evidence column keeps what it had, so the reason the
name is trusted is never lost); regenerate runtime/cow/cow_wraps.c; rebuild host, difftest and boot64;
run tools/cow/gate.ps1 for every entry the rename touches; run status.py; commit, fetch and push.

If the build or the gate fails, everything it changed is restored from HEAD (the same
`git checkout HEAD -- <paths>` the loop uses to back out a failed unit) and it exits non-zero. Wrap
keys (`cow_<entry hex>` in cow/wraps.json and rt_wrap_*) are derived from the entry address and are
never renamed, so a live host's registration cannot be orphaned mid-rename.
"""
import argparse
import csv
import os
import re
import subprocess
import sys
from datetime import datetime, timezone

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
NAMES = os.path.join(ROOT, 'cow', 'names.csv')
EDIT_DIRS = ('src', 'layout')
ID_RE = re.compile(r'^[A-Za-z_][A-Za-z0-9_]{0,127}$')


def run(cmd, capture=False):
    print('>', ' '.join(cmd))
    out = subprocess.run(cmd, cwd=ROOT, capture_output=capture, text=True,
                         encoding='utf-8', errors='replace')
    if capture:
        return out.returncode, (out.stdout or '') + (out.stderr or '')
    return out.returncode, ''


def load_names():
    if not os.path.isfile(NAMES):
        raise SystemExit('no cow/names.csv - the names workflow needs it')
    with open(NAMES, newline='', encoding='utf-8') as fh:
        reader = csv.DictReader(fh)
        return list(reader), reader.fieldnames


def save_names(rows, fields):
    with open(NAMES, 'w', newline='\n', encoding='utf-8') as fh:
        w = csv.DictWriter(fh, fieldnames=fields, lineterminator='\n')
        w.writeheader()
        w.writerows(rows)


def edit_files(old, new, dry):
    """Whole-word replace across src/ and layout/. Returns the paths changed."""
    pattern = re.compile(r'\b%s\b' % re.escape(old))
    changed = []
    for top in EDIT_DIRS:
        base = os.path.join(ROOT, top)
        if not os.path.isdir(base):
            continue
        for dirpath, dirs, files in os.walk(base):
            dirs.sort()
            for f in sorted(files):
                if not f.endswith(('.c', '.h')):
                    continue
                p = os.path.join(dirpath, f)
                with open(p, encoding='utf-8', errors='replace') as fh:
                    text = fh.read()
                hit = pattern.sub(new, text)
                if hit != text:
                    rel = os.path.relpath(p, ROOT).replace('\\', '/')
                    changed.append(rel)
                    print('  %-50s %d occurrence(s)' % (rel, len(pattern.findall(text))))
                    if not dry:
                        with open(p, 'w', newline='', encoding='utf-8') as fh:
                            fh.write(hit)
    return changed


def rollback(paths):
    if not paths:
        return
    subprocess.run(['git', 'checkout', 'HEAD', '--'] + paths, cwd=ROOT, check=False)
    print('restored from HEAD: %s' % ', '.join(paths))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('old')
    ap.add_argument('new')
    ap.add_argument('--confirm', action='store_true', help='set confidence=confirmed')
    ap.add_argument('--dry-run', action='store_true')
    ap.add_argument('--no-build', action='store_true')
    ap.add_argument('--no-commit', action='store_true')
    args = ap.parse_args()

    if args.old == args.new:
        raise SystemExit('old and new are the same')
    if not ID_RE.match(args.new):
        raise SystemExit('%r is not a C identifier' % args.new)
    if args.new.startswith('cow_') and not args.new.startswith('cow_adapter_') and not args.new.startswith('cow_call'):
        if re.match(r'^cow_[0-9a-f]{8}$', args.new):
            raise SystemExit('%r looks like a wrap key; those never change' % args.new)

    rows, fields = load_names()
    hits = [r for r in rows if r.get('name') == args.old]
    if not hits:
        near = [r['name'] for r in rows if args.old.lower()[:6] in (r.get('name') or '').lower()][:6]
        raise SystemExit('cow/names.csv has no identifier named %s%s'
                         % (args.old, '; closest: ' + ', '.join(near) if near else ''))
    entries = sorted({r['id'] for r in hits if re.match(r'^0x[0-9a-f]{8}$', r.get('id') or '')})
    print('renaming %s -> %s across %d names.csv row(s), %d entry/entries affected: %s'
          % (args.old, args.new, len(hits), len(entries), ', '.join(entries) or '-'))

    paths = edit_files(args.old, args.new, args.dry_run)
    if not paths:
        print('warning: no .c/.h file mentions %s (renaming names.csv only)' % args.old)
    if args.dry_run:
        print('dry run; nothing written')
        return 0

    now = datetime.now(timezone.utc).strftime('%Y-%m-%d')
    for r in hits:
        r['name'] = args.new
        if args.confirm:
            r['confidence'] = 'confirmed'
        note = 'renamed from %s on %s' % (args.old, now)
        if args.confirm:
            note += ' with evidence confirmed'
        r['evidence'] = ((r.get('evidence') or '') + ' | ' + note).strip(' |')
    save_names(rows, fields)
    paths = sorted(set(paths + ['cow/names.csv']))

    rc, _ = run([sys.executable, os.path.join('tools', 'cow', 'genwraps.py')])
    if rc:
        rollback(paths)
        raise SystemExit('genwraps.py failed')

    if not args.no_build:
        rc, tail = run(['pwsh', '-NoProfile', '-File', os.path.join('tools', 'cow', 'build_check.ps1'),
                        '-Log', os.path.join('build', 'rename-check.log')], capture=True)
        print(tail.strip()[-1200:] or '(no output)')
        if rc:
            rollback(paths)
            raise SystemExit('build failed after the rename - changes rolled back')

    gate = os.path.join(ROOT, 'tools', 'cow', 'gate.ps1')
    if os.path.isfile(gate):
        for entry in entries:
            rc, tail = run(['pwsh', '-NoProfile', '-File', gate, entry], capture=True)
            print(tail.strip()[-1500:] or '(no output)')
            if rc:
                rollback(paths)
                raise SystemExit('gate failed for %s after the rename - changes rolled back' % entry)
    else:
        print('note: tools/cow/gate.ps1 not present yet; skipping the gate step')

    run([sys.executable, os.path.join('tools', 'cow', 'status.py'), '--describe',
         'cow: rename %s -> %s%s' % (args.old, args.new, ' (confirmed)' if args.confirm else '')])

    if args.no_commit:
        print('--no-commit: leaving %s staged for you to check' % ', '.join(paths))
        return 0

    message = 'cow: rename %s -> %s%s' % (args.old, args.new, ' [confirmed]' if args.confirm else '')
    subprocess.run(['git', 'add', 'cow/names.csv', 'runtime/cow', 'src', 'layout', 'README.md',
                    'docs/cow/STATUS.md', 'docs/cow/NAMES_TODO.md'], cwd=ROOT, check=True)
    rc, _ = run(['git', 'commit', '-q', '-m', message])
    if rc:
        raise SystemExit('git commit failed')
    run(['git', 'fetch', 'origin'])
    if subprocess.run(['git', 'merge-base', '--is-ancestor', 'origin/main', 'HEAD'], cwd=ROOT).returncode:
        raise SystemExit('STOP: origin/main moved under us and this push would not be a fast-forward')
    rc, _ = run(['git', 'push', 'origin', 'main'])
    if rc:
        raise SystemExit('STOP: the push was rejected')
    print('RENAMED OK: %s' % message)
    return 0


if __name__ == '__main__':
    sys.exit(main())
