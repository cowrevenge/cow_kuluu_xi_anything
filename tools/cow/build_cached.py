"""Recomp caching: regenerate the translation only when its inputs actually changed.

    python tools/cow/build_cached.py host,difftest,boot64      # what build_check.ps1 calls
    import recomp_cache; recomp_cache.install(build)           # or patch it in, as cowdiff.py does

Measured on 2026-11-05, warm tree, one unit:

    recomp('generated/all', ['--all'])            18.28s   <- every one of these
    compile_stale whole image (90 files)            0.12s
    compile_stale harness + target                  0.00s
    the harness exe, 300 states                     0.02s

`tools/build.py`'s host() and boot64() EACH call recomp() before compiling anything, so build_check paid
it twice (~36s of its 42s) and every cowdiff run paid it once (~18s of its 20.6s) - to regenerate
21,891 function bodies from an image and meta that had not changed since the last time. The loop's
per-unit cost was dominated by re-deriving a file set nobody had invalidated.

The key is everything recomp() actually reads: the image's sha (buildinfo gives it for free), the meta
file, generated/patches.json, cow/wraps.json (recomp is passed --wraps, so booking a unit legitimately
invalidates), the hooks/wraps strings it would pass, and every recomp/*.py source. When all of those are
unchanged and generated/all is still there, the regeneration is skipped.

Safety, because a stale generated/all would silently test a translation that is not the current one:
  * the stamp lives INSIDE generated/ (generated/.recomp.stamp), so `rm -r generated` invalidates it;
  * the stamp records the file COUNT and the newest source mtime as well as the hash, and a missing or
    short generated/all forces a rebuild;
  * COW_RECOMP_FORCE=1, --force-recomp, or recomp_cache.invalidate() all bypass it;
  * the first thing a forced rebuild does is delete the stamp, so an interrupted recomp cannot be
    resumed into by the next run.
"""
import glob
import hashlib
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
GEN = os.path.join(ROOT, 'generated', 'all')
STAMP = os.path.join(ROOT, 'generated', '.recomp.stamp')


def _read_hash(h, path):
    try:
        with open(path, 'rb') as fh:
            for chunk in iter(lambda: fh.read(1 << 20), b''):
                h.update(chunk)
    except OSError:
        h.update(b'<missing:%s>' % path.encode('utf-8', 'replace'))


def key(build_mod, out, extra):
    """What recomp() would read. Anything not in here cannot change its output."""
    h = hashlib.sha1()
    b = build_mod.BUILD
    h.update(('key=2|%s|%s\n' % (b.get('build'), b.get('ffximain_sha'))).encode())
    for name in ('ffximain_meta', 'ffxi_meta'):
        p = b.get(name)
        if p:
            _read_hash(h, p)
    _read_hash(h, os.path.join(ROOT, 'generated', 'patches.json'))
    _read_hash(h, os.path.join(ROOT, 'cow', 'wraps.json'))
    for p in sorted(glob.glob(os.path.join(ROOT, 'recomp', '**', '*.py'), recursive=True)):
        h.update(b'\n--%s--' % os.path.basename(p).encode())
        _read_hash(h, p)
    # the arguments recomp() builds from BUILD: hooks, wraps (incl. ours), patches, and the caller's extras
    h.update(('\nhooks=%s' % ','.join('%s=%s' % kv for kv in b.get('hooks', {}).items())).encode())
    h.update(('\nwraps=%s' % ','.join('%s=%s' % kv for kv in b.get('wraps', {}).items())).encode())
    try:
        h.update(('\ncow_wraps=%s' % ','.join(build_mod.cow.wraps())).encode())
    except Exception:
        h.update(b'\ncow_wraps=<none>')
    h.update(('\nout=%s\nextra=%s' % (out, sorted(extra or []))).encode())
    return h.hexdigest()


def _fresh(want):
    if not os.path.isfile(STAMP):
        return False
    try:
        rec = json.load(open(STAMP, encoding='utf-8'))
    except (OSError, ValueError):
        return False
    if rec.get('key') != want:
        return False
    files = glob.glob(os.path.join(GEN, '*.c'))
    if len(files) != rec.get('count'):
        return False
    if not files:
        return False
    # a hand-edited or half-written generated/all must not be trusted on the hash alone
    return max(os.path.getmtime(f) for f in files) >= rec.get('gen_mtime', 0) - 1


def ensure(build_mod, out='generated/all', extra=(), force=False):
    """Regenerate `out` unless nothing it reads has changed. Returns True if recomp ran."""
    if os.environ.get('COW_RECOMP_FORCE') or force:
        _rm_stamp()
    else:
        k = key(build_mod, out, list(extra or ()))
        if _fresh(k):
            return False
    k = key(build_mod, out, list(extra or ()))
    _rm_stamp()                        # an interrupted rebuild must never be treated as fresh
    # ensure() may be called directly (cowdiff.py) or through install()'s patch; either way the
    # unpatched recomp must be reachable, and it must not be the cached wrapper itself.
    real = getattr(build_mod, '_cow_real_recomp', None) or build_mod.recomp
    real(out, list(extra or ()))
    files = glob.glob(os.path.join(GEN, '*.c'))
    rec = {'key': k, 'count': len(files), 'when': _now(),
           'gen_mtime': max([os.path.getmtime(f) for f in files] or [0])}
    try:
        os.makedirs(os.path.dirname(STAMP), exist_ok=True)
        with open(STAMP, 'w', encoding='utf-8', newline='\n') as fh:
            json.dump(rec, fh, indent=1, sort_keys=True)
    except OSError:
        pass
    return True


def install(build_mod):
    """Replace build_mod.recomp with the cached one, keeping the original reachable."""
    if getattr(build_mod.recomp, '_cow_cached', False):
        return build_mod
    build_mod._cow_real_recomp = build_mod.recomp

    def cached(out, extra):
        return ensure(build_mod, out, extra)

    cached._cow_cached = True
    build_mod.recomp = cached
    return build_mod


def invalidate():
    _rm_stamp()


def _rm_stamp():
    try:
        if os.path.isfile(STAMP):
            os.remove(STAMP)
    except OSError:
        pass


def _now():
    import datetime
    return datetime.datetime.now(datetime.timezone.utc).strftime('%Y-%m-%dT%H:%M:%SZ')


def main(argv):
    """python tools/cow/build_cached.py host,difftest,boot64 [--force-recomp]"""
    targets = [t.strip() for t in (argv[0] if argv else 'host').split(',') if t.strip()]
    force = '--force-recomp' in argv
    sys.path.insert(0, ROOT)
    # tools/ must be on the path: `import build` is tools/build.py, and without it Python finds the
    # unrelated `build` package from the venv and every attribute lookup below fails.
    sys.path.insert(0, os.path.join(ROOT, 'tools'))
    import build as upstream  # noqa: E402
    if force:
        invalidate()
    install(upstream)
    failed = []
    for t in targets:
        fn = getattr(upstream, t, None)
        if fn is None:
            print('BUILD_CACHED FAIL unknown target %s' % t)
            failed.append(t)
            continue
        env = upstream.msvc_env('x64' if t in ('boot64', 'cowdiff64') else 'x86')
        try:
            fn(env)
            print('BUILD_CACHED OK %s' % t)
        except Exception as e:                       # upstream signals failure by raising/exiting
            print('BUILD_CACHED FAIL %s: %s' % (t, e))
            failed.append(t)
    return 1 if failed else 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
