"""Build and run tools/cow/cowdiff.c against one entry - the behaviour proof the gate depends on.

    python tools/cow/cowdiff.py 0x100083b0
    python tools/cow/cowdiff.py 0x100035a0 --states 500 --json
    python tools/cow/cowdiff.py 0x100083b0 --write-unreached --reason 'the SEH handler needs a raise'

What it does:

  1. finds the generated body of f_<hex> (or f_<hex>_body when the entry is already wrapped) in
     generated/all/funcs_*.c and copies it verbatim into build/cowdiff/cowdiff_target.c, inserting
     `++cow_cov[k]` before every `/* 100083b4: test byte ptr ... */` comment. That gives honest
     per-instruction coverage - and an unreached list that quotes the instruction - without editing
     recomp.py;
  2. binds side A to that copy and side B to cow_adapter_<hex> from src/ (or reports that there is
     no adapter yet);
  3. compiles with upstream's own tools/build.py machinery (imported, never edited): the whole-image
     objects are shared with build\\all64 and the two cowdiff files go to build\\cowdiff, which is
     what makes tools/cow/cow_build.py add src/**, layout/** and runtime/cow/ to the link;
  4. runs build\\cowdiff\\cowdiff.exe with the retail image and the game folder from meta/builds.json.

Coverage is not a loop-stopper: a short list goes into cow/unreached/<hex>.txt with a code-reading
reason and shows up in docs/cow/STATUS.md.
"""
import argparse
import hashlib
import io
import json
import os
import re
import subprocess
import sys
import time as _time

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
GEN = os.path.join(ROOT, 'generated', 'all')
COWDIR = os.path.join(ROOT, 'build', 'cowdiff')
SITE_RE = re.compile(r'^\s*/\* ([0-9a-f]{8}): (.*?)\s*\*/\s*$')
OUR_SRC = ('src', 'layout')


def find_generated_source(entry):
    """(path, kind, lines) for f_<entry> or its _body, whichever the generator produced."""
    for name in sorted(os.listdir(GEN)):
        if not name.endswith('.c') or name == 'table.c':
            continue
        path = os.path.join(GEN, name)
        with open(path, encoding='utf-8', errors='replace') as fh:
            lines = fh.read().splitlines()
        for kind in ('_body', ''):
            head = 'void f_%s%s(Guest* g)' % (entry, kind)
            for i, line in enumerate(lines):
                if line == head:
                    j = i + 1
                    while j < len(lines) and lines[j] != '}':
                        j += 1
                    return path, kind, lines[i:j + 1]
    return None, None, None


TABLE_DEF = os.path.join(ROOT, 'src', 'tables', 'cow_trivial_rows.def')


def table_row(entry):
    """The row for <entry> in src/tables/cow_trivial_rows.def, or None.

    The trivial entries have no file each: their adapter is minted by a macro over the table, so the
    literal text `void cow_adapter_<hex>(Guest* g)` exists nowhere and the only honest answer to "is
    there a side B for this entry?" is "the table has a row for it"."""
    if not os.path.isfile(TABLE_DEF):
        return None
    with open(TABLE_DEF, encoding='utf-8', errors='replace') as fh:
        for line in fh:
            if line.startswith('COW_TRIVIAL_ROW(%s,' % entry):
                return line.strip()
    return None


def has_adapter(entry):
    for top in OUR_SRC:
        base = os.path.join(ROOT, top)
        for dirpath, dirs, files in os.walk(base):
            dirs.sort()
            for f in sorted(files):
                if not f.endswith('.c'):
                    continue
                with open(os.path.join(dirpath, f), encoding='utf-8', errors='replace') as fh:
                    if re.search(r'\bvoid\s+cow_adapter_%s\s*\(\s*Guest\s*\*\s*g\s*\)' % entry, fh.read()):
                        return os.path.relpath(os.path.join(dirpath, f), ROOT).replace('\\', '/')
    if table_row(entry):
        return os.path.relpath(TABLE_DEF, ROOT).replace('\\', '/')
    return None


def instrument(body_lines, entry, cov='cow_cov', stubs=()):
    """The generated body with a coverage counter before each instruction comment.

    `cov` names the array to bump: a single-entry build has one global, the table build has one array per
    row - and a counter that lands in the wrong array silently reports "0/N instruction sites", which is
    the difference between a proof and a shrug.

    `stubs` are the targets this state stubs (cow/seeds/<hex>.json "stubs"): a direct call to one of them
    in the generated body is rewritten to cow_stub_call(), which asks the harness's one stub table before
    running the callee - the same table side B reaches through rt_set_call_stub. Without the rewrite the
    two sides would disagree about whether the callee ran, which is worse than the blind spot it closes.
    """
    out, sites, k = [], ['%s: entry' % entry], 1
    for line in body_lines:
        m = SITE_RE.match(line)
        if m:
            out.append('    ++%s[%d];' % (cov, k))
            sites.append('%s: %s' % (m.group(1), m.group(2)))
            k += 1
        if stubs:
            for t in stubs:
                line = line.replace('f_%s(g)' % t, 'cow_stub_call(g, 0x%su, f_%s)' % (t, t))
        out.append(line)
        if 'REGS_LOAD;' in line and k == 1:
            out.insert(len(out) - 1, '    ++%s[0];' % cov)
    return out, sites


def render(entry, body_lines, adapter, stubs=()):
    body, sites = instrument(body_lines, entry, stubs=stubs)
    n = len(sites)
    L = ['/* generated by tools/cow/cowdiff.py from generated/all - do not edit, do not commit */',
         '#include "funcs.h"',
         '#include "cowdiff_batch.h"',
         '#if defined(_MSC_VER)',
         '#pragma warning(disable: 4102 4189 4101 4702)',
         '#endif',
         '',
         '/* the harness answers a stubbed callee on both sides; see tools/cow/cowdiff.c --stub */',
         'void cow_stub_call(Guest* g, unsigned target, GuestFn real);',
         '',
         '/* a single-entry build has no table: the harness reads these and loops once */',
         'const CowBatchRow* cow_batch_rows = 0;',
         'const unsigned cow_batch_count = 0u;',
         '',
         'unsigned cow_cov[%d];' % n,
         'const unsigned cow_cov_count = %du;' % n,
         'const char* cow_target_entry = "%s";' % entry,
         'const char* const cow_cov_sites[%d] = {' % n]
    for s in sites:
        L.append('    "%s",' % s.replace('\\', '\\\\').replace('"', "'"))
    L += ['};', '', '/* side A: the generated translation, instrumented */',
          'static void cow_target_instrumented(Guest* g)']
    # body[0] is the generated `void f_<hex>(Guest* g)` header line: we name the copy ourselves
    L += body[1:]
    L += ['', 'GuestFn cow_side_a = cow_target_instrumented;', '']
    if adapter:
        L += ['/* side B: our code, through the adapter in %s */' % adapter,
              'void cow_adapter_%s(Guest* g);' % entry,
              'GuestFn cow_side_b = cow_adapter_%s;' % entry,
              'int cow_has_adapter = 1;']
    else:
        L += ['/* side B: nothing to compare yet - src/ has no cow_adapter_%s */' % entry,
              'static void cow_missing_adapter(Guest* g) { (void)g; }',
              'GuestFn cow_side_b = cow_missing_adapter;',
              'int cow_has_adapter = 0;']
    return '\n'.join(L) + '\n'


def build(entry):
    """Compile and link the harness for ONE entry.

    Per-entry target file and executable: two cowdiff runs in flight (the gate on one unit while I am
    checking another) used to share build/cowdiff/cowdiff_target.c and cowdiff.exe, so one could link
    against the other's half-written object and report a cowdiff FAIL that was really a race. Object
    files stay shared - compile_stale() names them after the basename, and cowdiff_target_<hex> is
    unique per entry.
    """
    import build as upstream                                   # tools/build.py, imported not edited
    env = upstream.msvc_env('x64')
    buildinfo = __import__('buildinfo')
    b = buildinfo.current()
    target = os.path.join('build', 'cowdiff', 'cowdiff_target_%s.c' % entry)
    exe = os.path.join('build', 'cowdiff', 'cowdiff_%s.exe' % entry)
    with harness_lock():                                        # one cl/link over shared objects at a time
        stale_dependencies()          # #included data (the table rows) does not bump a .c mtime
        import build_cached                             # noqa: E402  the same cached path as build_check
        build_cached.ensure(upstream, 'generated/all', ['--all'])
        gen = ['generated\\all\\' + f for f in sorted(os.listdir(GEN)) if f.endswith('.c')]
        objs_a = upstream.compile_stale(env, gen + upstream.PORTABLE, 'build\\all64',
                                        ['/I', 'generated\\all'], upstream.CFLAGS64)
        os.makedirs(COWDIR, exist_ok=True)
        objs_b = upstream.compile_stale(env, ['tools\\cow\\cowdiff.c', target.replace('\\', '/')],
                                        'build\\cowdiff', ['/I', 'generated\\all', '/I', 'tools\\cow'],
                                        upstream.CFLAGS64)
        # compile_stale() adds src/**, layout/** and runtime/cow/ to BOTH calls above (the first one is a
        # whole-image build, the second is ours by objdir), so the same .obj can arrive twice. Linking a
        # file twice is LNK2005, so the second list keeps only what the first does not already have.
        have = {os.path.basename(o).lower() for o in objs_a}
        objs_b = [o for o in objs_b if os.path.basename(o).lower() not in have]
        stamp_dependencies()   # the objects that exist now were built from THIS table data
        args = ['/nologo', '/OUT:%s' % exe, '/MACHINE:X64', 'synchronization.lib'] + objs_a + objs_b
        if sum(len(a) + 3 for a in args) > 24000:
            # The obj list now outgrows the Windows command-line limit (WinError 206). link reads @file
            # happily, so when the list is long the arguments go into a response file instead.
            rsp = exe.replace('.exe', '.rsp')
            with open(rsp, 'w', encoding='utf-8') as fh:
                for a in args:
                    fh.write(('"%s"' % a if ' ' in a else a) + '\n')
            upstream.run(['link', '@%s' % rsp], env)
        else:
            upstream.run(['link'] + args, env)
    return exe, b


class _Lock:
    """Release-on-exit guard for the shared build; also survives a crashed owner."""

    def __init__(self, path):
        self.path = path
        self.is_dir = False

    def __enter__(self):
        return self

    def __exit__(self, *exc):
        try:
            if self.is_dir:
                import shutil
                shutil.rmtree(self.path, ignore_errors=True)
            else:
                os.remove(self.path)
        except OSError:
            pass
        return False


def _table_data_hash():
    """sha1 of the #included table data - what cow_trivial.obj was really compiled from."""
    h = hashlib.sha1()
    for rel in ('src/tables/cow_trivial_rows.def',):
        p = os.path.join(ROOT, rel.replace('/', os.sep))
        h.update(rel.encode())
        if os.path.isfile(p):
            with open(p, 'rb') as fh:
                h.update(fh.read())
        else:
            h.update(b'<missing>')
    return h.hexdigest()


def stale_dependencies():
    """Drop cow_trivial.obj unless it was compiled from the CURRENT table data.

    compile_stale() compares a .c against its .obj, which is right for C and wrong for the table: the rows
    in src/tables/cow_trivial_rows.def are #included by src/tables/cow_trivial.c, so a row edit changes
    what that file compiles to without changing its mtime - and RESTORING a file (git checkout, or a copy
    back after a mutation test) can leave an mtime OLDER than the object built from the edited version.
    Both bit inside an hour: a mutated row reported PASS, a restored row failed. So the object carries a
    hash of the data it saw, not a timestamp.
    """
    want = _table_data_hash()
    for d in ('build/cowdiff', 'build/all64'):
        obj = os.path.join(ROOT, d.replace('/', os.sep), 'cow_trivial.obj')
        if not os.path.isfile(obj):
            continue
        stamp = obj + '.datasha'
        have = None
        if os.path.isfile(stamp):
            with io.open(stamp, encoding='ascii') as fh:
                have = fh.read().strip()
        if have != want:
            try:
                os.remove(obj)
                if have is not None:
                    os.remove(stamp)
                print('stale: removed %s (built from a different cow_trivial_rows.def)'
                      % os.path.relpath(obj, ROOT).replace('\\', '/'))
            except OSError:
                pass


def stamp_dependencies():
    """Record, after a build, the table data the objects were compiled against."""
    want = _table_data_hash()
    for d in ('build/cowdiff', 'build/all64'):
        obj = os.path.join(ROOT, d.replace('/', os.sep), 'cow_trivial.obj')
        if os.path.isfile(obj):
            try:
                with io.open(obj + '.datasha', 'w', encoding='ascii') as fh:
                    fh.write(want)
            except OSError:
                pass


def harness_lock(timeout=1800):
    """One compile/link at a time, across EVERY tool that touches the shared tree.

    Every harness shares build\\all64's objects, and tools/build.py rewrites generated/all while it
    runs. A cowdiff link that races a build_check build sees half-written .obj files and reports
    `unresolved external` - a FAIL that is really a race (it cost two units earlier today). So cowdiff
    takes the SAME lock as tools/cow/build_check.ps1: build\\.build.lock, a directory lock with a
    stale-owner takeover.
    """
    os.makedirs(COWDIR, exist_ok=True)
    path = os.path.join(ROOT, 'build', '.build.lock')
    os.makedirs(os.path.dirname(path), exist_ok=True)
    deadline = _time.time() + timeout
    while True:
        try:
            os.mkdir(path)
            with open(os.path.join(path, 'owner.txt'), 'w', encoding='utf-8') as fh:
                fh.write('pid=%d cowdiff %s\n' % (os.getpid(), _time.strftime('%Y-%m-%dT%H:%M:%S')))
            lock = _Lock(path)
            lock.is_dir = True
            return lock
        except FileExistsError:
            try:
                if _time.time() - os.path.getmtime(path) > timeout / 2.0:
                    import shutil
                    shutil.rmtree(path, ignore_errors=True)   # a dead owner must not wedge the loop
                    continue
            except OSError:
                pass
            if _time.time() > deadline:
                raise SystemExit('another cowdiff run still holds %s' % path)
            _time.sleep(2)



def stamp_phase(phase, cluster, note=''):
    """Append a phase mark for a cluster, if the loop is timing one.

    Done here rather than by the model remembering to call phase.py: every cluster so far has lost at
    least one boundary because the marks were stamped in a batch after the fact. Silent when there is
    no open cluster (a table row, a probe run, a --count), so it cannot invent timing for work that was
    never handed out.
    """
    try:
        import json as _json
        log = os.path.join(ROOT, 'build', 'phases.jsonl')
        if not os.path.isfile(log):
            return
        key = cluster.lower().replace('0x', '')
        for line in open(log, encoding='utf-8', errors='replace'):
            try:
                rec = _json.loads(line)
            except ValueError:
                continue
            if str(rec.get('cluster', '')).lower().replace('0x', '').split(',')[0] == key:
                cmd = [sys.executable, os.path.join(ROOT, 'tools', 'cow', 'phase.py'),
                       'mark', phase, '--cluster', '0x' + key]
                if note:
                    cmd += ['--note', note]
                try:
                    subprocess.run(cmd, cwd=ROOT, capture_output=True, timeout=60)
                except Exception:
                    pass
                return
    except Exception:
        pass



def load_seeds(entry):
    """cow/seeds/<hex>.json -> the harness's --pin arguments.

      {"states":[{"note": "...", "args": ["arena", "stack+0x20"],
                  "mem": [{"where": "arena", "off": "0x1c", "bytes": "01"}]}]}

    Hand-written states run before the fuzzed ones, so a branch that random bytes will never reach
    (here: the flag bit that lets the counter move) is still tested. `where` is arena | stack | image
    or an absolute address; the harness resolves the tokens because only it knows where gwin_alloc put
    the sandbox.

    `on_call` has the same shape and is applied by the harness's *pinned import* (cowdiff.c
    g_pinned_imports) at the moment it answers - which is how a state says "the callee replaced this
    global while we were away", and turns a unit's decision to reload a pointer into something cowdiff
    can see instead of something we take on faith.

    `"answers": ["0x2000"]` names what that pinned import ANSWERS in eax. Without it the answer is
    drawn from the state's own stream - identical on both sides, but not predictable from here - so a
    unit that compares something in memory against the clock's answer reaches that branch only by
    luck. Naming the answer is how a clock-dependent branch is covered on purpose.

    `"stubs": [{"target": "0x1015e350", "eax": "0x1", "pop": "0xc"}]` ANSWERS a guest callee instead of
    running it, on both sides from one table (docs/cow/REFERENCE.md P4). Use it when the path you must
    prove ends in a call into state the launcher never initialised: without it both sides fault at the
    same place and the instructions after the call are unverified.
    """
    path = os.path.join(ROOT, 'cow', 'seeds', entry + '.json')
    if not os.path.isfile(path):
        return []
    with open(path, encoding='utf-8') as fh:
        doc = json.load(fh)
    out = []
    for st in doc.get('states', []):
        args = [str(a) for a in st.get('args', [])][:8]
        while len(args) < 4:
            args.append('0')
        cmd = ['--pin-args', ','.join(args)]
        for a in st.get('answers', []):
            cmd += ['--pin-answer', str(a)]
        for s in st.get('stubs', []):
            cmd += ['--stub', '%s=%s,%s' % (str(s['target']), str(s.get('eax', '0')),
                                            str(s.get('pop', '0')))]
        for key, flag in (('mem', '--pin-mem'), ('on_call', '--pin-call')):
            for w in st.get(key, []):
                where = str(w.get('where', 'arena'))
                off = str(w.get('off', '0'))
                spot = '%s+%s' % (where, off) if off not in ('0', '') else where
                cmd += [flag, '@%s=%s' % (spot, str(w.get('bytes', '')))]
        out.append((st.get('note', ''), cmd))
    return out


def stub_targets(entry):
    """The callees this entry's seeds stub - side A's body must be rewritten for them, so the set has to
    be known before the target file is rendered, not only when the command line is built."""
    path = os.path.join(ROOT, 'cow', 'seeds', entry + '.json')
    if not os.path.isfile(path):
        return ()
    with open(path, encoding='utf-8') as fh:
        doc = json.load(fh)
    out = []
    for st in doc.get('states', []):
        for s in st.get('stubs', []):
            t = str(s.get('target', '')).lower().replace('0x', '')
            if t and t not in out:
                out.append(t)
    return tuple(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('entry', nargs='?', help='0x100083b0')
    ap.add_argument('--stale-deps', action='store_true',
                    help='drop objects whose #included data (the table rows) is newer, then stop - '
                         'build_check.ps1 calls this so a row edit cannot be linked in from an old .obj')
    ap.add_argument('--states', default='2000')
    ap.add_argument('--seed', default='12345')
    ap.add_argument('--args', dest='nargs', default='4')
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--no-build', action='store_true')
    ap.add_argument('--build-only', action='store_true')
    ap.add_argument('--count', action='store_true',
                    help='print SITES=<n> for the generated body (how many instruction sites it has) and stop')
    ap.add_argument('--write-unreached', action='store_true')
    ap.add_argument('--reason', default='', help='why an unreached instruction is unreachable')
    args = ap.parse_args()

    if args.stale_deps:
        stale_dependencies()
        print('STALE_DEPS OK')
        return 0
    if not args.entry:
        raise SystemExit('give an entry (0x100083b0), or --stale-deps')
    entry = args.entry.lower()
    if entry.startswith('0x'):
        entry = entry[2:]
    if len(entry) != 8 or any(c not in '0123456789abcdef' for c in entry):
        raise SystemExit('bad entry %r' % args.entry)

    path, kind, body = find_generated_source(entry)
    if body is None:
        raise SystemExit('no generated f_%s in generated/all - run python tools/build.py host' % entry)
    if args.count:
        sites = sum(1 for line in body if SITE_RE.match(line))
        print('SITES=%d file=%s%s' % (sites + 1, os.path.basename(path), ' as _body' if kind else ''))
        return 0
    adapter = has_adapter(entry)
    os.makedirs(COWDIR, exist_ok=True)
    target = os.path.join(COWDIR, 'cowdiff_target_%s.c' % entry)
    text = render(entry, body, adapter, stubs=stub_targets(entry))
    if not os.path.isfile(target) or open(target, encoding='utf-8').read() != text:
        with open(target, 'w', encoding='utf-8', newline='\n') as fh:
            fh.write(text)
        print('wrote %s (side A from %s%s, side B %s)'
              % (os.path.relpath(target, ROOT).replace('\\', '/'), os.path.basename(path),
                 ' as _body' if kind else '', adapter or 'MISSING'))

    if args.no_build:
        # Previously parsed and then ignored: every `cowdiff --no-build` still ran the whole build,
        # which is what made the harness look like a 20s tool when the exe itself answers in 0.02s.
        exe = os.path.join('build', 'cowdiff', 'cowdiff_%s.exe' % entry)
        if not os.path.isfile(os.path.join(ROOT, exe)):
            raise SystemExit('--no-build asked for, but %s does not exist - build it first' % exe)
        b = __import__('buildinfo').current()
    else:
        exe, b = build(entry)
    if args.build_only:
        print('COWDIFF BUILD OK %s' % exe)
        return 0
    if not adapter:
        print('COWDIFF FAIL %s no cow_adapter_%s in src/' % (entry, entry))
        return 1

    cmd = [exe, os.path.join(ROOT, 'generated', 'FFXiMain.retail.dll'), b['game'],
           '--entry', '0x' + entry, '--states', args.states, '--seed', args.seed,
           '--args', args.nargs]
    seeds = load_seeds(entry)
    for _note, pins in seeds:
        cmd += pins
    if seeds and not args.json:
        print('seeds: %d hand-written state(s) from cow/seeds/%s.json: %s'
              % (len(seeds), entry, '; '.join(n or '(no note)' for n, _ in seeds)))
    if args.json:
        cmd += ['--json']
    elif args.write_unreached:
        # --write-unreached reads the harness's JSON to decide whether to write or remove the note;
        # without --json that read found nothing and the flag silently did nothing, which is how a
        # unit with an unreached `ret` ended up gated with no note and no explanation.
        cmd += ['--json']
    proc = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                          encoding='utf-8', errors='replace')
    payload = (proc.stdout or '') + (proc.stderr or '')
    print(payload.rstrip())

    if args.write_unreached and proc.returncode == 0:
        js = None
        for line in payload.splitlines():
            line = line.strip()
            if line.startswith('{'):
                js = json.loads(line)
                break
        if js and js.get('blocks', 0) != js.get('blocks_total', 0):
            out = os.path.join(ROOT, 'cow', 'unreached', entry + '.txt')
            os.makedirs(os.path.dirname(out), exist_ok=True)
            with open(out, 'w', encoding='utf-8', newline='\n') as fh:
                fh.write('# %s: %d of %d instruction sites never reached by cowdiff\n'
                         % (entry, js['blocks_total'] - js['blocks'], js['blocks_total']))
                fh.write('# reason: %s\n' % (args.reason or 'NOT EXPLAINED - give a code-reading reason'))
                for u in js.get('unreached', []):
                    fh.write('  /* %s */\n' % u)
            print('wrote %s' % os.path.relpath(out, ROOT).replace('\\', '/'))
        elif os.path.isfile(os.path.join(ROOT, 'cow', 'unreached', entry + '.txt')):
            os.remove(os.path.join(ROOT, 'cow', 'unreached', entry + '.txt'))
            print('removed cow/unreached/%s.txt (now at full coverage)' % entry)
    if args.entry and not getattr(args, 'count', False):
        stamp_phase('cowdiff_done', args.entry,
                    ('PASS' if proc.returncode == 0 else 'FAIL'))
    return proc.returncode


if __name__ == '__main__':
    sys.exit(main())
