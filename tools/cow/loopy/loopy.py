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
# Below this many units a "pattern" is not worth a turn over hand work - it is an accident with a
# prefix. Tuned against the current census, whose real families are all in the hundreds or thousands.
MIN_PATTERN_COUNT = 50
FAIL_STREAK_HALT = 10
TRIVIAL_MAX_BYTES = 8   # <= this, and the row is a stub, not a conversion: see trivial()
REAL_MIN_BYTES = 12     # the queue prefers rows at least this big ...
REAL_MIN_CALLEES = 1    # ... that reach at least one other function: see real_logic()
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
        # Being AHEAD is the loop's own doing - it died between a commit and its push. That is not a
        # halt condition, it is bookkeeping the harness owns: push and carry on. Divergence is.
        code3, _ = sh(['git', 'merge-base', '--is-ancestor', out2.strip(), out.strip()])
        if code3 == 0:
            sh(['git', 'fetch', 'origin', 'main'])
            code4, push_out = sh(['git', 'push', 'origin', 'main'])
            if code4 == 0:
                return None
            # GitHub has outage windows where every push returns 'Internal Server Error' or
            # 'fatal error in commit_refs'. The commits are made and a fast-forward was verified, so the
            # work is safe locally and the next submit retries: that is not a reason to halt the loop for
            # hours. Only an unfamiliar rejection halts.
            text = push_out or ''
            if any(k in text for k in ('Internal Server Error', 'commit_refs', 'Could not read from the',
                                       'The requested URL returned error: 5', 'timed out', 'early EOF',
                                       'RPC failed', 'unable to access')):
                return None
            return 'push of the loop\'s own commits failed: %s' % text.strip()[-200:]
        return 'HEAD is not origin/main (%s vs %s)' % (out.strip()[:7], out2.strip()[:7])
    return None


def skip_list():
    """Entries the loop has parked (cow/skip.txt): a body that has to be written by hand, or one the
    proof has not accepted yet. They are OUT of the queue - both the resume path and the new-unit path -
    or the loop hands the same parked unit out forever and never moves.
    """
    path = os.path.join(ROOT, 'cow', 'skip.txt')
    if not os.path.isfile(path):
        return set()
    with open(path, encoding='utf-8', errors='replace') as fh:
        return {l.strip().lower() for l in fh if l.strip() and not l.startswith('#')}


def trivial(r):
    """Is this row one of the <=8-byte stubs the queue is not supposed to hand out any more?

    The 2026-11-05 audit: of 944 booked units 943 were bodies of 1-6 bytes (`ret`, `mov eax, imm`,
    `mov al, [global]`). Those are not conversions, they are ROWS - they belong in src/tables/ against
    one shared adapter, and every turn the loop spends writing another 12-line file for `mov eax, 1` is
    a turn not spent on the game. So the queue skips them; docs/cow/LOOP.md's "a noop is a stub" rule
    says the same thing from the other end. Set COW_LOOPY_TRIVIAL=1 to hand them out again (the table
    migration in the rework plan will, and only that, book them in bulk).
    """
    if os.environ.get('COW_LOOPY_TRIVIAL') == '1':
        return False
    try:
        return int(r['size']) <= TRIVIAL_MAX_BYTES
    except (TypeError, ValueError, KeyError):
        return False


def real_logic(r):
    """Does this row look like a function with control flow and a call, rather than another accessor?

    The queue prefers these. A unit with no callee is almost always one of the accessor shapes the
    generators already do better (and the 2026-11-05 audit was 943 of 944 booked units being exactly
    that), so the loop spends its turns on bodies that have something to read. When the real-logic
    queue is drained the caller falls back to the plain order, so the loop never lies about being out
    of work.
    """
    try:
        return int(r['size']) >= REAL_MIN_BYTES and int(r['callees']) >= REAL_MIN_CALLEES
    except (TypeError, ValueError, KeyError):
        return False


def pattern_task():
    """The ranked LIFT PATTERN to work now, or None when the queue has nothing to say.

    This is priority (a) of docs/cow/LOOP.md made structural. Before it, `next` only knew how to hand
    out a ledger unit, so the loop's default activity was hand conversion - and it duly spent a turn on
    a 771-line switch/goto oracle that belongs in the lifter. A turn spent writing by hand a body the
    lifter could be taught to emit is a turn not spent on the thousands of units refused for one shared
    reason, which is where the volume is.

    Falls through to the ledger (hand work, priority (c)) when: the queue will not import, every pattern
    is parked (cow/skip_patterns.txt - an unfixable top pattern must not starve the loop forever), the
    top pattern is below MIN_PATTERN_COUNT, or COW_LOOPY_PATTERNS=0 / COW_LOOPY_HAND_FIRST=1.

    An unusable queue is itself a task, not a silence: if nobody has asked the CURRENT lifter what it
    refuses, the biggest pattern is unmeasured, and the right instruction is to go measure it.
    """
    if os.environ.get('COW_LOOPY_PATTERNS') == '0' or os.environ.get('COW_LOOPY_HAND_FIRST') == '1':
        return None
    try:
        sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
        import patterns as _patterns
        d = _patterns.patterns(limit=10)
    except Exception as exc:
        # A broken queue used to be a SILENCE: `return None` fell through to the ledger, so a SyntaxError in
        # patterns.py (one I shipped myself, in a queue-action edit, on 2026-11-07) had the loop handing hand
        # units for an hour while the population said four patterns of 1,200+ units each were live. The
        # priority order at the top of docs/cow/LOOP.md is the whole point of this file, and degrading it
        # quietly is worse than stopping: the loop did the LOWEST-value work while believing it was doing the
        # highest. So name the breakage as the job. The escape hatches above still mean silence, because
        # those are a choice; this one is a fault.
        return {"kind": "lift-pattern", "pattern": "pattern-queue-broken", "count": 0,
                "queue": "broken", "sample": None,
                "action": "tools/cow/loopy/patterns.py will not import or run: %r. Fix it - until it runs, "
                          "the loop cannot rank anything and must not fall through to hand work." % (exc,),
                "next": "fix the queue, then loopy next again"}
    parked = set()
    pp = os.path.join(ROOT, 'cow', 'skip_patterns.txt')
    if os.path.isfile(pp):
        with open(pp, encoding='utf-8', errors='replace') as fh:
            parked = {l.strip().lower() for l in fh if l.strip() and not l.startswith('#')}
    if not d.get('usable'):
        b = d.get('blocker')
        if not b:
            return None
        b = dict(b)
        b['kind'] = 'lift-pattern'
        b['queue'] = 'needs-measurement'
        b['next'] = 'run the command in "action", then loopy next again'
        return b
    live = [p for p in (d.get('patterns') or []) if p['pattern'].lower() not in parked]
    if not live or live[0]['count'] < MIN_PATTERN_COUNT:
        return None
    p = dict(live[0])
    p['kind'] = 'lift-pattern'
    p['population'] = '%d of %d lifted proven; refusal snapshot %s; %d parked pattern(s)' % (
        d['lifted_proven'], d['lifted_total'], d['refusals'], len(parked))
    p['ranked'] = [(q['pattern'], q['count']) for q in live[:6]]
    p['next'] = ('fix this PATTERN in tools/cow/ghidra (lift.py / gen_model.py / ghidra_c.py / the '
                 'bridges), MEASURE it on a sample of its own units before any full run, rerun the lift, '
                 'prove, and commit what newly passes. Hand units are priority (c) - only for an address '
                 'the lift refuses AND no pattern fix is in reach.')
    return p


def live_unit():
    """The in-flight hand unit to resume, or None.

    Split out of pick() so `next` can ask this BEFORE the pattern queue. Started hand work has to be
    finished or parked - it cannot be left `in_progress` behind an endless stream of patterns, which is
    what the first version of the ordering did (patterns were consulted before pick()'s resume path, so
    a claimed unit with notes in cow/wip/ was simply never handed back).
    """
    try:
        rs = rows()
        skip = skip_list()
    except Exception:
        return None
    live = [r for r in rs if r['status'] == 'in_progress' and r['entry'].lower() not in skip
            and not trivial(r)]
    return sorted(live, key=lambda r: r['entry'])[0] if live else None


def pick():
    """Resume an in_progress unit, else the lowest leaf_rank then smallest size. Parked and trivial
    (<=8-byte stub) entries are skipped - see trivial(). Owned entries are preferred over ones nothing
    in the image enters - see owner_index.py."""
    rs = rows()
    skip = skip_list()
    r = live_unit()
    if r is not None:
        return r, 'resume'
    todo = [r for r in rs if r['status'] == 'todo' and r['thunk'].lower() != 'true'
            and r['entry'].lower() not in skip and not trivial(r)]
    if not todo:
        return None, 'none'
    refs = {}
    try:
        sys.path.insert(0, os.path.join(ROOT, 'tools', 'cow'))
        import owner_index                       # noqa: E402  cache only; never scans mid-loop
        refs = owner_index.load(build_if_stale=False) or {}
    except Exception:
        refs = {}                                # no index: queue runs as it did before, no filter
    order = lambda rows_: sorted(
        rows_, key=lambda r: (0 if refs.get(r['entry'].lower().replace('0x', ''), 0) else 1,
                              int(r['leaf_rank']), int(r['size']), r['entry']))
    real = [r for r in todo if real_logic(r)]
    r = order(real)[0] if real else order(todo)[0]
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

    # The cluster's clock starts when the work is handed out, not when the model remembers to
    # start it: three clusters lost their phase boundaries to marks made in batches after the fact.
    sh([sys.executable, os.path.join('tools', 'cow', 'phase.py'), 'mark', 'start',
        '--cluster', '0x' + hex8, '--note', 'handed out'])


def job(entry=''):
    bad = precheck()
    if bad:
        # A dirty tree or an unpushed commit is transient (the loop itself causes it): say STOP for
        # this turn but do not write LOOP_HALT.md, or the next turn would be locked out by a condition
        # that fixes itself on the next submit.
        transient = bad.startswith('unexpectedly dirty') or bad.startswith('HEAD is not origin/main')
        if transient:
            return 'STOP: %s - end your turn now' % bad
        return halt(bad)
    if entry:
        hex8 = entry.lower().replace('0x', '')
        found = [r for r in rows() if r['entry'].lower().replace('0x', '') == hex8]
        if not found:
            return halt('%s is not a ledger entry' % entry)
        r = found[0]
        if r['status'] == 'done':
            return halt('%s is already done' % entry)
        kind = 'resume' if r['status'] == 'in_progress' else 'new'
    else:
        # Priority (a) of LOOP.md: the lift pattern queue comes before the ledger. In-flight hand work
        # still comes before THAT - a claimed unit with notes in cow/wip/ must come back, not sit
        # stranded behind an endless stream of patterns. An explicit --entry still means "work this
        # address" (that is how cluster-driven loops drive it).
        if live_unit() is None:
            task = pattern_task()
            if task is not None:
                return task
        r, kind = pick()
        if r is None:
            return halt('nothing left to convert')
        hex8 = r['entry'].lower().replace('0x', '')
    if kind == 'new':
        mark_in_progress(hex8, 'loopy handed out %s' % now_utc())
    # Handing work out changes the state the docs publish (the unit in progress), so refresh them here.
    # Otherwise the next gate run sees docs that predate its own unit and fails on "stale" - which is
    # exactly what happened after a FINISH commit: the docs were correct for HEAD, then `next` marked a
    # new in_progress unit and made them out of date through no fault of the unit being gated.
    sh([sys.executable, os.path.join('tools', 'cow', 'status.py'), '--describe',
        'cow: %s in progress' % ('0x' + hex8)])
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


def commit_and_push(message, extra=(), stage_only=None):
    # Stage exactly the loop's own paths - never `git add -A`, which swept unrelated edits into a
    # unit's commit and made "one commit per unit" a lie about what the commit contained.
    #
    # "the loop's own paths" means every path a unit is ALLOWED to change (LOOP.md): the unit source,
    # the layout it needs, the names it registers, its seeds and mutations, the wraps and status docs
    # its booking produces. A unit that touched layout/addresses.h and whose commit carried only the
    # .c file left HEAD not building, and the fix had to come as a second "machinery" commit - which
    # is how 0x103165a8 ended up merged from its unit and its layout in two places. One unit, one
    # commit, and the commit is the whole unit.
    # `stage_only` is the escape hatch commit.py should have had from the start: when a caller says
    # exactly which paths this commit may contain, the hardcoded list below is not consulted. Without it,
    # a `--machinery` commit - whose whole purpose is to carry ONLY harness/tool changes - still staged
    # 'src', 'layout' and the derived progress docs, so tool commits went out carrying thousands of
    # generated lifted files and a README line that claimed progress the tool change had nothing to do
    # with. commit.py had already worked out the right set and printed a note saying the rest was left
    # unstaged; the note was false, because staging happened here.
    if stage_only is not None:
        paths = [p for p in dict.fromkeys(stage_only) if os.path.exists(os.path.join(ROOT, p))]
        if not paths:
            return False, 'nothing to stage'
        return _stage_commit_push(paths, message)
    paths = ['ledger/functions.csv', 'cow/names.csv', 'cow/wraps.json', 'cow/loop_state.json',
             'runtime/cow/cow_wraps.c', 'loop.log', 'README.md', 'docs/cow/STATUS.md',
             'docs/cow/NAMES_TODO.md']
    paths += [p for p in extra if p]
    # whole directories, so a deletion inside them (cow/wip/<hex>/ removed on finish, a stale
    # cow/unreached/<hex>.txt, or a stub file the table collapse deleted) is staged too -
    # `git add <missing path>` would just error
    paths += [d for d in ('cow/wip', 'cow/unreached', 'cow/seeds', 'cow/mutations',
                          'layout', 'src', 'docs/cow')
              if os.path.isdir(os.path.join(ROOT, d))]
    paths = [p for p in dict.fromkeys(paths) if os.path.exists(os.path.join(ROOT, p))]
    return _stage_commit_push(paths, message)


def _stage_commit_push(paths, message):
    """Add exactly these paths, verify a fast-forward, commit and push.

    Split out of commit_and_push so a caller that has already decided what its commit contains (the
    `stage_only` path) goes through the SAME safety checks - nothing stages straight to a push.
    """
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
        # GitHub fails a push transiently ("fatal error in commit_refs", timeouts). The commit is already
        # made and a fast-forward was verified, so retry a few times before treating it as a halt - the
        # loop dying here for 2 hours was exactly this error once.
        import time
        for attempt in range(3):
            time.sleep(5 * (attempt + 1))
            sh(['git', 'fetch', 'origin', 'main'])
            code_a, _ = sh(['git', 'merge-base', '--is-ancestor', 'origin/main', 'HEAD'])
            if code_a:
                # Another writer (a human, or me fixing a tool) landed a commit on main while this unit
                # was being gated. The unit's commit is real and ours is a fast-forward away from it once
                # we take theirs in: a merge commit, never a rebase, never a force.
                code_m, merge_out = sh(['git', 'pull', '--no-rebase', '--no-edit', 'origin', 'main'])
                if code_m:
                    return False, 'push retry: merge of origin/main failed: %s' % merge_out.strip()[-200:]
                sh(['git', 'fetch', 'origin', 'main'])
                code_a2, _ = sh(['git', 'merge-base', '--is-ancestor', 'origin/main', 'HEAD'])
                if code_a2:
                    return False, 'push retry: still not a fast-forward after merging'
            code, out = sh(['git', 'push', 'origin', 'main'])
            if code == 0:
                break
    if code:
        text = out or ''
        if any(k in text for k in ('Internal Server Error', 'commit_refs', 'Could not read from the',
                                   'The requested URL returned error: 5', 'timed out', 'early EOF',
                                   'RPC failed', 'unable to access')):
            # The unit is committed and the fast-forward was verified; GitHub is having a bad minute.
            # Keep the loop moving - the next submit, and precheck, both retry the push.
            return True, 'push pending (GitHub transient): ' + text.strip().splitlines()[-1][:120]
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
    row = [r for r in rows() if r['entry'].lower() == key]
    if row and row[0]['status'] == 'done':
        return {'entry': key, 'verdict': 'ALREADY-DONE',
                'why': 'the ledger says this unit is done; refusing to double-submit',
                'next_unit': job()}
    if not os.path.isfile(os.path.join(ROOT, fpath)):
        return {'entry': key, 'verdict': 'FAIL', 'why': 'the file you named does not exist: %s' % fpath,
                'attempts_left': s['attempts'].get(key, 0)}
    # Pre-gate, in code: the gate reads the ledger row (it must name an existing file) and refuses to
    # pass while the generated docs are stale - both of which the model used to have to remember. So
    # point the row at the file you wrote, then regenerate the status docs, then let the gate judge.
    sh([sys.executable, os.path.join('tools', 'cow', 'setstatus.py'), '0x' + hex8,
        '--status', 'in_progress', '--name', name, '--file', fpath,
        '--oracle', oracle or '', '--note', 'submitted, gating'])
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
    p = sub.add_parser('next')
    p.add_argument('--entry', default='',
                   help='claim this entry instead of the queue pick (cluster-driven loop)')
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
        out = job(getattr(a, 'entry', ''))
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
