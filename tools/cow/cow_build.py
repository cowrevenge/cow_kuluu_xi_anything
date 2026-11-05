"""The cow build hook: the only thing upstream's tools/build.py knows about our code.

build.py references this module in three marked lines (search for `# COW:`):

  1. import         `import cow_build as cow` (tools are on sys.path already, this adds tools/cow)
  2. recomp()       `+ cow.wraps()`            merges cow/wraps.json into recomp.py --wraps
  3. compile_stale() `+ cow.sources_for(...)`  adds our translation units to the whole-image builds

Nothing else upstream changes: no upstream file under recomp/, meta/ or tests/ is touched, and our
sources are discovered from the tree, so adding src/foo/bar.c needs no build.py edit at all.

Why sources are added only to some targets: our user functions call generated entry points
(f_<hex>) and each other by name, which exist only where the whole image was translated
(generated\\all). The CRT slice (tests/difftest.c, generated\\slice) must stay a pristine
comparison of upstream's translation, and the gfx/uwp targets do not link the translation at all.

  python tools/cow/cow_build.py            # what the hook would add, and the wraps it would pass
"""
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
WRAPS_JSON = os.path.join(ROOT, 'cow', 'wraps.json')
REGISTRATION = os.path.join('runtime', 'cow', 'cow_wraps.c')
USER_DIRS = ('src', 'layout')          # all our C lives here; layout/ holds only headers + a .c or two
WHOLE_IMAGE = 'generated\\all\\table.c'  # the marker of "the whole DLL is translated in this build"
COWDIFF_OBJDIR = 'build\\cowdiff'


def link_args(cmd):
    """COW: re-spell a link command whose argument list outgrew CreateProcess' limit (WinError 206).

    With every converted unit linked in, boot64's obj list passed the ~32K command-line ceiling.
    link.exe reads @response files, so the arguments move to a file next to the output when they get
    long and the command becomes `link @file.rsp` - the same link, the same flags, spelled shorter."""
    if not cmd or not os.path.basename(cmd[0]).lower().startswith('link'):
        return cmd
    if sum(len(c) + 3 for c in cmd) <= 24000:
        return cmd
    out = next((c[5:] for c in cmd if c.startswith('/OUT:')), 'build\\link.rsp')
    rsp = out + '.rsp'
    os.makedirs(os.path.dirname(os.path.join(ROOT, rsp)) or '.', exist_ok=True)
    with open(os.path.join(ROOT, rsp), 'w', encoding='utf-8') as fh:
        for arg in cmd[1:]:
            fh.write(('"%s"' % arg if ' ' in arg else arg) + '\n')
    return [cmd[0], '@%s' % rsp]


def compile_args(cmd):
    """COW: re-spell a cl command whose SOURCE list outgrew CreateProcess' limit (WinError 206).

    `link_args` already does this for the link and the ceiling is the same one - but the compile reaches
    it first, because this hook adds `src/**` to every whole-image build and the machine lift put 5,458
    drafted units in src/lifted. Not hypothetical: with them present `cl` could not be started at all,
    which silently breaks every per-entry proof (tools/cow/cowdiff.py) and with it the gate
    (tools/cow/gate.ps1) that decides whether a unit is done. A checker that cannot run is worse than a
    strict one, because it reads as a pass.

    cl reads @response files, so when the argument list gets long it moves into a file beside the object
    directory: the same compile, the same flags, spelled shorter. Short command lines come back untouched,
    so ordinary builds keep the command lines they have always had."""
    if not cmd or not os.path.basename(cmd[0]).lower().startswith('cl'):
        return cmd
    if sum(len(c) + 3 for c in cmd) <= 24000:
        return cmd
    fo = next((c for c in cmd if c.lower().startswith('/fo')), None)
    objdir = (fo.split(':', 1)[-1] if fo else 'build\\cl').strip('"').strip('\\') or 'build'
    rsp = os.path.join(objdir, 'cl_args.rsp')
    os.makedirs(os.path.join(ROOT, objdir), exist_ok=True)
    # A response file separates arguments by NEWLINE, and cl will not read `/I` and its directory from
    # two lines (D8004: '/I' requires an argument). The command line carries them as two tokens, so they
    # have to be glued back into `/Idir` on the way in - the same thing the compiler accepts on a command
    # line, spelled the way a file needs it.
    with open(os.path.join(ROOT, rsp), 'w', encoding='utf-8') as fh:
        args = cmd[1:]
        i = 0
        while i < len(args):
            a = args[i]
            if a.lower() in ('/i', '/include') and i + 1 < len(args):
                a = "%s\"%s\"" % (a, args[i + 1]) if ' ' in args[i + 1] else a + args[i + 1]
                i += 1
            fh.write(('"%s"' % a if (' ' in a and not a.startswith('/I"')) else a) + '\n')
            i += 1
    return [cmd[0], '@%s' % rsp]


def wraps():
    """['cow_100083b0=0x100083b0', ...] for recomp.py --wraps, from the generated cow/wraps.json."""
    if not os.path.isfile(WRAPS_JSON):
        return []
    with open(WRAPS_JSON, encoding='utf-8') as fh:
        data = json.load(fh)
    out = []
    for name, addr in sorted(data.items()):
        if not name.startswith('cow_'):
            raise SystemExit('cow/wraps.json: %r is not a cow_<hex> wrap key' % name)
        out.append('%s=%s' % (name, addr))
    return out


def _c_files():
    out = []
    for top in USER_DIRS:
        base = os.path.join(ROOT, top)
        if not os.path.isdir(base):
            continue
        for dirpath, dirs, files in os.walk(base):
            dirs.sort()
            for f in sorted(files):
                if f.endswith('.c'):
                    out.append(os.path.relpath(os.path.join(dirpath, f), ROOT).replace('/', '\\'))
    return out


def sources_for(objdir, sources):
    """Our .c files, or [] for a build that must stay upstream-only."""
    ours = _ours(objdir, sources)
    if not ours:
        return []
    out = _c_files()
    if os.path.isfile(os.path.join(ROOT, REGISTRATION)):
        out.append(REGISTRATION)
    names = [os.path.basename(p).lower() for p in out]
    dupes = sorted({n for n in names if names.count(n) > 1})
    if dupes:
        # compile_stale() names objects after the basename: two foo.c would silently overwrite each other.
        raise SystemExit('cow: duplicate source basenames would collide in %s: %s'
                         % (objdir, ', '.join(dupes)))
    return out


def includes_for(objdir, sources):
    """/I flags for the same builds sources_for() feeds. `layout/` is not on cl's path by default, and
    our .c files include "cow.h" by name - the whole point of layout/ is that user code never spells
    a relative path to it."""
    return ['/I', 'layout'] if _ours(objdir, sources) else []


def _ours(objdir, sources):
    """True when this build is one of ours: a whole-image translation, or the cowdiff harness."""
    whole = any(s.replace('/', '\\').lower() == WHOLE_IMAGE for s in sources)
    cowdiff = objdir.replace('/', '\\').lower().startswith(COWDIFF_OBJDIR)
    return whole or cowdiff


def selftest():
    """Check the two command-line-shortening hooks without starting a compiler.

    These are the lines that decide whether a build can even be LAUNCHED, and getting them wrong does not
    produce a failure - it produces a checker that silently never ran. That is worth a test that costs
    nothing and runs before anyone trusts a PASS."""
    ok = True

    # short commands must be left completely alone, or every ordinary build would start writing rsp files
    short = ['cl', '/c', '/MP', '/O2', 'a.c']
    if compile_args(short) != short:
        print('FAIL compile_args rewrote a short command line')
        ok = False

    # a long one must come back short, and the response file must carry every argument
    # The fixture carries `/I dir` as TWO tokens, because that is how build.py spells it and it is the
    # shape that broke: a response file separates arguments by newline, and cl refuses `/I` on a line of
    # its own (D8004). A fixture made only of single-token arguments passed against that bug.
    many = (['cl', '/c', '/MP', '/O2'] + ['/I', 'runtime', '/I', 'runtime\\portable', '/I', 'layout']
            + ['src\\lifted\\cow_%08x.c' % i for i in range(4000)] + ['/Fo:build\\probe\\'])
    before = sum(len(c) + 3 for c in many)
    after = compile_args(many)
    if before <= 24000:
        print('FAIL the fixture is not long enough to test anything (%d bytes)' % before)
        return 1
    if sum(len(c) + 3 for c in after) > 24000:
        print('FAIL compile_args left the command line at %d bytes' % sum(len(c) + 3 for c in after))
        ok = False
    if not (len(after) == 2 and after[0] == 'cl' and after[1].startswith('@')):
        print('FAIL compile_args did not produce `cl @file`: %r' % after[:2])
        ok = False
    else:
        rsp = os.path.join(ROOT, after[1][1:])
        lines = open(rsp, encoding='utf-8').read().splitlines()
        if not lines or lines[0] != '/c':
            print('FAIL the response file does not start with the flags')
            ok = False
        if any(ln.strip().lower() in ('/i', '/include') for ln in lines):
            print('FAIL a bare /I sits on its own line - cl would answer D8004')
            ok = False
        if not any(ln.lower().startswith('/iruntime') or ln.lower().startswith('/i"runtime') for ln in lines):
            print('FAIL the /I directories did not survive into the response file')
            ok = False
        if not any(ln.startswith('/Fo') for ln in lines):
            print('FAIL the /Fo argument did not survive into the response file')
            ok = False
        # every source must still be compiled: the count of .c lines is the whole point
        nsrc = sum(1 for ln in lines if ln.lower().endswith('.c'))
        if nsrc != 4000:
            print('FAIL the response file lists %d sources, expected 4000' % nsrc)
            ok = False

    lmany = ['link', '/nologo', '/OUT:build\\probe\\x.exe'] + ['build\\all64\\f%04d.obj' % i for i in range(3000)]
    lafter = link_args(lmany)
    if sum(len(c) + 3 for c in lafter) > 24000 or not lafter[1].startswith('@'):
        print('FAIL link_args did not shorten a long link (%d bytes)' % sum(len(c) + 3 for c in lafter))
        ok = False

    # The build lock's dead-owner takeover depends on _pid_alive. If it reports a LIVE owner as dead,
    # another run steals the lock mid-build and sees half-written .obj files - the exact race the lock
    # exists to prevent, and one that reads as an `unresolved external` FAIL. So both directions are
    # asserted, and only if we are the only process that can answer for our own pid.
    try:
        import cowdiff
    except Exception as exc:
        print('note: cowdiff not importable, skipped the lock-liveness assertions (%s)' % exc)
    else:
        if not cowdiff._pid_alive(os.getpid()):
            print('FAIL _pid_alive says THIS process is dead - it would steal our own lock')
            ok = False
        # a pid that cannot exist on this machine
        if cowdiff._pid_alive(0x7FFFFFFF):
            print('FAIL _pid_alive says an impossible pid is alive - takeover would never happen')
            ok = False

    print('COW_BUILD SELFTEST %s' % ('PASS' if ok else 'FAIL'))
    return 0 if ok else 1


def main():
    if hasattr(sys.stdout, 'reconfigure'):
        sys.stdout.reconfigure(encoding='utf-8', errors='replace')
    if '--selftest' in sys.argv:
        return selftest()
    print('cow/wraps.json: %d wrap(s)' % len(wraps()))
    for w in wraps()[:10]:
        print('  %s' % w)
    for kind, marker in (('whole image', [WHOLE_IMAGE]), ('cowdiff', ['tests\\cowdiff.c']),
                         ('slice (must add nothing)', ['generated\\slice\\table.c'])):
        objdir = COWDIFF_OBJDIR if kind == 'cowdiff' else 'build\\probe'
        added = sources_for(objdir, marker)
        print('%-24s -> %d source(s)%s' % (kind, len(added),
                                           (': ' + ', '.join(added[:6]) + (' ...' if len(added) > 6 else ''))
                                           if added else ''))
    return 0


if __name__ == '__main__':
    sys.exit(main())
