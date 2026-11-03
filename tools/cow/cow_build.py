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
    whole = any(s.replace('/', '\\').lower() == WHOLE_IMAGE for s in sources)
    cowdiff = objdir.replace('/', '\\').lower().startswith(COWDIFF_OBJDIR)
    if not (whole or cowdiff):
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


def main():
    if hasattr(sys.stdout, 'reconfigure'):
        sys.stdout.reconfigure(encoding='utf-8', errors='replace')
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
