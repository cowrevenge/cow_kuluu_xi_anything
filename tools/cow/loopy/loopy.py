"""loopy - the harness that owns the conversion loop, so the model only writes conversions.

    python tools/cow/loopy/loopy.py next
    python tools/cow/loopy/loopy.py submit 0x1012ac40 --name unk_return_noop --confidence placeholder \
        --file src/unsorted/cow_1012ac40_ret.c --oracle 'generated/all: single ret'
    python tools/cow/loopy/loopy.py checkpoint 0x1012ac40 --note 'reading the body'
    python tools/cow/loopy/loopy.py status

It is the same code as the MCP server (server.py) so the loop can be driven either as tools or as a
CLI. What it takes off the model's hands: picking the unit, marking in_progress, running the gate,
writing the ledger row, regenerating wraps and the status docs, one commit per unit, fetch and
fast-forward push, the attempt counter, the fail bookkeeping, the halt conditions, and the next unit in
the same result - so "this unit is done" is always a tool call and a summary cannot end the loop.

State it owns (all in the repo): ledger/functions.csv, cow/wraps.json, runtime/cow/cow_wraps.c,
cow/names.csv, cow/wip/<hex>/, cow/loop_state.json, loop.log, README progress block, docs/cow/*.
"""
import argparse
import json
import os
import subprocess
import sys
import time
from datetime import datetime, timezone

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, os.path.join(ROOT, 'tools', 'cow'))
LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
STATE = os.path.join(ROOT, 'cow', 'loop_state.json')
WIP = os.path.join(ROOT, 'cow', 'wip')
STOP = os.path.join(ROOT, 'STOP')
HALT = os.path.join(ROOT, 'docs', 'cow', 'LOOP_HALT.md')
LOG = os.path.join(ROOT, 'loop.log')
MAX_ATTEMPTS = 3
FAIL_STREAK_HALT = 10
FORBIDDEN = ('generated/', 'build/', '.dll', '.dat', '.exe', '.unpacked.')
STYLE_HINT = ('one user function + a COW_ADAPTER block; no 0x10xxxxxx outside layout/; no rd*/wr* with '
              'numeric offsets; no goto; no f_<hex>/rt_orig_ in user code; names go in cow/names.csv '
              'with evidence; see docs/cow/STYLE.md')


def sh(cmd, capture=True):
    p = subprocess.run(cmd, cwd=ROOT, capture_output=capture, text=True,
                       encoding='utf-8', errors='replace')
    out = ((p.stdout or '') + (p.stderr or '')) if capture else ''
    return p.returncode, out


def now_utc():
    return datetime.now(timezone.utc).strftime('%Y-%m-%dT%H:%M:%SZ')


def load_state():
    if os.path.isfile(STATE):
        try:
            with open(STATE, encoding='utf-8') as fh:
                return json.load(fh)
        except (ValueError, OSError):
            pass
    return {'attempts': {}, 'fail_streak': 0, 'halted': None, 'done_since_review': 0}


def save_state(s):
    os.makedirs(os.path.dirname(STATE), exist_ok=True)
    with open(STATE, 'w', encoding='utf-8', newline='\n') as fh:
        json.dump(s, fh, indent=1, sort_keys=True)
        fh.write('\n')


def rows():
    import csv
    with open(LEDGER, newline='', encoding='utf-8') as fh:
        return list(csv.DictReader(fh))


def halt(reason):
    s = load_state()
    s['halted'] = reason
    save_state(s)
    os.makedirs(os.path.dirname(HALT), exist_ok=True)
    with open(HALT, 'w', encoding='utf-8', newline='\n') as fh:
        fh.write('# Loop halted\n\n%s\n\nRecorded %s\n' % (reason, now_utc()))
    sh([sys.executable, os.path.join('tools', 'cow', 'status.py'), '--describe', 'cow: halted'])
    return 'STOP: %s - end your turn now' % reason


def precheck():
    """Halt conditions the harness can see before handing out work."""
    if os.path.isfile(STOP):
        return 'STOP file in the repo root'
    if load_state().get('halted'):
        return 'already halted: %s' % load_state()['halted']
    if load_state().get('fail_streak', 0) >= FAIL_STREAK_HALT:
        return '%d consecutive failures' % load_state()['fail_streak']
    code, out = sh(['git', 'status', '--porcelain'])
    # The loop dirties its own state on purpose: it just marked a unit in_progress, and the unit's own
    # file is being written. Only dirt OUTSIDE our area is unexpected.
    ours = ('ledger/', 'cow/', 'docs/cow/', 'src/', 'layout/', 'runtime/cow/', 'README.md',
            'tools/cow/', 'loop.log', 'STOP')
    dirty = [l[3:].strip().strip('"').replace('\\', '/') for l in out.splitlines() if l.strip()]
    surprise = [p for p in dirty if not p.startswith(ours)]
    if surprise:
        return 'unexpectedly dirty tree: %s' % ', '.join(surprise[:5])
    code, out = sh(['git', 'rev-parse', 'HEAD'])
    code2, out2 = sh(['git', 'rev-parse', 'origin/main'])
    if out.strip() != out2.strip():
        return 'HEAD is not origin/main (%s vs %s)' % (out.strip()[:7], out2.strip()[:7])
    return None


def pick():
    """Resume an in_progress unit, else the lowest leaf_rank then smallest size."""
    rs = rows()
    live = [r for r in rs if r['status'] == 'in_progress']
    if live:
        r = sorted(live, key=lambda r: r['entry'])[0]
        return r, 'resume'
    todo = [r for r in rs if r['status'] == 'todo' and r['thunk'].lower() != 'true']
    if not todo:
        return None, 'none'
    r = sorted(todo, key=lambda r: (int(r['leaf_rank']), int(r['size']), r['entry']))[0]
    return r, 'new'


def body_location(hex8):
    code, out = sh([sys.executable, os.path.join('tools', 'cow', 'cowdiff.py'), '0x' + hex8, '--count'])
    if code == 0 and 'SITES=' in out:
        line = [l for l in out.splitlines() if 'SITES=' in l][0]
        return line.strip()
    return 'SITES=? (generated/all/funcs_*.c)'


def callee_report(hex8):
    rs = {r['entry'].lower(): r for r in rows()}
    code, out = sh([sys.executable, os.path.join('tools', 'cow', 'callers_of.py'), '0x' + hex8])
    del rs, out, code
    return ''


def mark_in_progress(hex8, note):
    sh([sys.executable, os.path.join('tools', 'cow', 'setstatus.py'), '0x' + hex8,
        '--status', 'in_progress', '--note', note])


def job():
    bad = precheck()
    if bad:
        # A dirty tree or an unpushed commit is transient (the loop itself causes it): say STOP for
        # this turn but do not write LOOP_HALT.md, or the next turn would be locked out by a condition
        # that fixes itself on the next submit.
        transient = bad.startswith('unexpectedly dirty') or bad.startswith('HEAD is not origin/main')
        if transient:
            return 'STOP: %s - end your turn now' % bad
        return halt(bad)
    r, kind = pick()
    if r is None:
        return halt('nothing left to convert')
    hex8 = r['entry'].lower().replace('0x', '')
    if kind == 'new':
        mark_in_progress(hex8, 'loopy handed out %s' % now_utc())
    attempts = load_state()['attempts'].get(hex8, 0)
    callees = sh([sys.executable, os.path.join('tools', 'cow', 'refs_to.py'), '0x' + hex8])[1].strip()
    return {
        'entry': '0x' + hex8, 'size': r['size'], 'leaf_rank': r['leaf_rank'], 'cycle': r['cycle'],
        'callees': r['callees'], 'kind': kind, 'attempts_used': attempts,
        'attempts_left': max(0, MAX_ATTEMPTS - attempts),
        'generated': body_location(hex8),
        'calls_in_from': (callees.splitlines() or [''])[0][:120],
        'style': STYLE_HINT,
        'next': 'write the conversion, then call loopy_submit(%s)' % ('0x' + hex8),
    }


def dirty_paths():
    code, out = sh(['git', 'status', '--porcelain'])
    return [l[3:].strip().strip('"').replace('\\', '/') for l in out.splitlines() if l.strip()]


def assert_clean_to_commit(paths):
    for p in paths:
        low = p.lower()
        for bad in FORBIDDEN:
            if low.startswith(bad.rstrip('/')) or low.endswith(bad):
                if not (low.startswith('build/') or low.startswith('generated/')):
                    continue
                return 'refusing to commit %r (game data / machine output)' % p
    return None


def commit_and_push(message, extra=()):
    # Stage exactly the loop's own paths - never `git add -A`, which swept unrelated edits into a
    # unit's commit and made "one commit per unit" a lie about what the commit contained.
    paths = ['ledger/functions.csv', 'cow/names.csv', 'cow/wraps.json', 'cow/loop_state.json',
             'runtime/cow/cow_wraps.c', 'loop.log', 'README.md', 'docs/cow/STATUS.md',
             'docs/cow/NAMES_TODO.md']
    paths += [p for p in extra if p]
    # whole directories, so a deletion inside them (cow/wip/<hex>/ removed on finish, or a stale
    # cow/unreached/<hex>.txt) is staged too - `git add <missing path>` would just error
    paths += [d for d in ('cow/wip', 'cow/unreached') if os.path.isdir(os.path.join(ROOT, d))]
    paths = [p for p in dict.fromkeys(paths) if os.path.exists(os.path.join(ROOT, p))]
    if not paths:
        return False, 'nothing to stage'
    sh(['git', 'add', '-A', '--'] + paths)
    staged = dirty_paths()
    problem = assert_clean_to_commit(staged)
    if problem:
        return False, problem
    code, out = sh(['git', 'commit', '-q', '-m', message])
    if code:
        return False, 'git commit failed: %s' % out.strip()[-300:]
    sh(['git', 'fetch', 'origin'])
    code, _ = sh(['git', 'merge-base', '--is-ancestor', 'origin/main', 'HEAD'])
    if code:
        return False, 'push would not be a fast-forward'
    code, out = sh(['git', 'push', 'origin', 'main'])
    if code:
        return False, 'push rejected: %s' % out.strip()[-300:]
    return True, out.strip().splitlines()[-1] if out.strip() else 'pushed'


def gate(hex8, full=False):
    cmd = ['pwsh', '-NoProfile', '-File', os.path.join(ROOT, 'tools', 'cow', 'gate.ps1'), '0x' + hex8]
    if not full:
        cmd += ['-SkipBuild']
    code, out = sh(cmd)
    lines = [l for l in out.splitlines() if l.startswith('GATE ')]
    return code, lines


def bookkeep_done(hex8, name, confidence, fpath, oracle, verified):
    sh([sys.executable, os.path.join('tools', 'cow', 'setstatus.py'), '0x' + hex8, '--status', 'done',
        '--name', name, '--file', fpath, '--oracle', oracle, '--verified', 'true' if verified else 'false'])
    with open(os.path.join(ROOT, 'cow', 'names.csv'), 'a', encoding='utf-8', newline='\n') as fh:
        fh.write('function,0x%s,%s,%s,"%s",%s\n' % (hex8, name, confidence,
                                                    oracle.replace('"', "'"),
                                                    sh(['git', 'rev-parse', '--short', 'HEAD'])[1].strip()))
    sh([sys.executable, os.path.join('tools', 'cow', 'genwraps.py')])
    with open(LOG, 'a', encoding='utf-8', newline='\n') as fh:
        fh.write('%s 0x%s %s %s done 0.8\n' % (now_utc(), hex8, name, confidence))
    s = load_state()
    s['attempts'].pop('0x' + hex8, None)
    s['fail_streak'] = 0
    s['done_since_review'] = s.get('done_since_review', 0) + 1
    save_state(s)
    for d in (os.path.join(WIP, hex8), os.path.join(WIP, '0x' + hex8)):
        if os.path.isdir(d):
            import shutil
            shutil.rmtree(d)


def submit(hex8, name, confidence, fpath, oracle, full=False, verified=True):
    hex8 = hex8.lower().replace('0x', '')
    s = load_state()
    key = '0x' + hex8
    if not os.path.isfile(os.path.join(ROOT, fpath)):
        return {'entry': key, 'verdict': 'FAIL', 'why': 'the file you named does not exist: %s' % fpath,
                'attempts_left': s['attempts'].get(key, 0)}
    # Pre-gate, in code: the gate reads the ledger row (it must name an existing file) and refuses to
    # pass while the generated docs are stale - both of which the model used to have to remember. So
    # point the row at the file you wrote, then regenerate the status docs, then let the gate judge.
    sh([sys.executable, os.path.join('tools', 'cow', 'setstatus.py'), '0x' + hex8,
        '--status', 'in_progress', '--name', name, '--file', fpath, '--note', 'submitted, gating'])
    sh([sys.executable, os.path.join('tools', 'cow', 'status.py'), '--describe',
        'cow: %s %s [%s]' % ('0x' + hex8, name, confidence)])
    code, lines = gate(hex8, full=full)
    if code == 0:
        bookkeep_done(hex8, name, confidence, fpath, oracle, verified)
        sh([sys.executable, os.path.join('tools', 'cow', 'status.py'), '--describe',
            'cow: %s %s [%s]' % (key, name, confidence)])
        ok, note = commit_and_push('cow: %s %s [%s]' % (key, name, confidence),
                                   extra=[fpath, os.path.join('cow', 'wip', hex8),
                                          os.path.join('cow', 'unreached', hex8 + '.txt')])
        if not ok:
            return {'entry': key, 'verdict': 'HALT', 'why': note}
        nxt = job()
        return {'entry': key, 'verdict': 'DONE', 'pushed': note, 'gate': lines[-1], 'next_unit': nxt}
    s['attempts'][key] = s['attempts'].get(key, 0) + 1
    save_state(s)
    left = max(0, MAX_ATTEMPTS - s['attempts'][key])
    if left == 0:
        sh([sys.executable, os.path.join('tools', 'cow', 'setstatus.py'), key, '--status', 'failed',
            '--note', 'gate: ' + '; '.join(l for l in lines if 'FAIL' in l)[:180]])
        s['fail_streak'] = s.get('fail_streak', 0) + 1
        s['attempts'].pop(key, None)
        save_state(s)
        with open(LOG, 'a', encoding='utf-8', newline='\n') as fh:
            fh.write('%s %s %s %s failed 0.8\n' % (now_utc(), key, name, confidence))
        for d in (os.path.join(WIP, hex8),):
            if os.path.isdir(d):
                import shutil
                shutil.rmtree(d)
        ok, note = commit_and_push('cow: %s failed: gate' % key)
        return {'entry': key, 'verdict': 'FAILED', 'pushed': note, 'gate': [l for l in lines if 'FAIL' in l],
                'next_unit': job()}
    return {'entry': key, 'verdict': 'FAIL', 'attempts_left': left,
            'gate': [l for l in lines if 'FAIL' in l] or lines[-1:],
            'next': 'fix and call loopy_submit(%s) again, or loopy_checkpoint' % key}


def checkpoint(hex8, note):
    hex8 = hex8.lower().replace('0x', '')
    dst = os.path.join(WIP, hex8)
    os.makedirs(dst, exist_ok=True)
    row = [r for r in rows() if r['entry'].lower() == '0x' + hex8]
    src = row[0]['file'] if row and row[0]['file'] else ''
    if src and os.path.isfile(os.path.join(ROOT, src)):
        import shutil
        shutil.copyfile(os.path.join(ROOT, src), os.path.join(dst, os.path.basename(src)))
    with open(os.path.join(dst, 'NOTE.md'), 'w', encoding='utf-8', newline='\n') as fh:
        fh.write('# wip %s\n\n%s\n\n%s\n' % (hex8, note, now_utc()))
    sh([sys.executable, os.path.join('tools', 'cow', 'setstatus.py'), '0x' + hex8,
        '--status', 'in_progress', '--note', note[:180]])
    sh([sys.executable, os.path.join('tools', 'cow', 'status.py'), '--describe',
        'cow: checkpoint 0x%s: %s' % (hex8, note)])
    ok, note2 = commit_and_push('cow: checkpoint 0x%s: %s' % (hex8, note))
    return {'entry': '0x' + hex8, 'verdict': 'CHECKPOINTED' if ok else 'HALT', 'pushed': note2}


def main():
    if hasattr(sys.stdout, 'reconfigure'):
        sys.stdout.reconfigure(encoding='utf-8', errors='replace')
    ap = argparse.ArgumentParser(prog='loopy')
    sub = ap.add_subparsers(dest='cmd', required=True)
    sub.add_parser('next')
    p = sub.add_parser('submit')
    p.add_argument('entry')
    p.add_argument('--name', required=True)
    p.add_argument('--confidence', default='guess', choices=('confirmed', 'guess', 'placeholder'))
    p.add_argument('--file', required=True)
    p.add_argument('--oracle', default='')
    p.add_argument('--full-build', action='store_true')
    p.add_argument('--unverified', action='store_true')
    p = sub.add_parser('checkpoint')
    p.add_argument('entry')
    p.add_argument('--note', required=True)
    sub.add_parser('status')
    cl = sub.add_parser('clear')
    cl.add_argument('--because', default='operator cleared the halt')

    a = ap.parse_args()
    if a.cmd == 'clear':
        s = load_state()
        s['halted'] = None
        s['fail_streak'] = 0
        save_state(s)
        if os.path.isfile(HALT):
            os.remove(HALT)
        print(json.dumps({'cleared': a.because}))
        return 0
    if a.cmd == 'next':
        out = job()
    elif a.cmd == 'submit':
        out = submit(a.entry, a.name, a.confidence, a.file, a.oracle, full=a.full_build,
                     verified=not a.unverified)
    elif a.cmd == 'checkpoint':
        out = checkpoint(a.entry, a.note)
    else:
        s = load_state()
        rs = rows()
        out = {'halted': s.get('halted'), 'fail_streak': s.get('fail_streak', 0),
               'in_progress': [r['entry'] for r in rs if r['status'] == 'in_progress'],
               'counts': {k: sum(1 for r in rs if r['status'] == k)
                          for k in ('todo', 'in_progress', 'done', 'failed', 'thunk')}}
    print(json.dumps(out, indent=1, ensure_ascii=False))
    return 0


if __name__ == '__main__':
    sys.exit(main())
