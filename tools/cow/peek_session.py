"""Look at what the launcher stores locally, without printing secret values.

Lists the launcher's own state files under Local/Roaming app data, then prints the JSON
*shape* (keys, types, string lengths) of each small file so we can see which one carries the
credential the CDN accepts. Values are masked unless they are obviously not secret (short
strings like version numbers or paths).

  pwsh: python tools/cow/peek_session.py
"""
import json
import os

KEYISH = ('token', 'jwt', 'auth', 'bearer', 'key', 'secret', 'password', 'pass', 'cookie',
          'session', 'signature', 'sig', 'device', 'id', 'hash', 'otp', 'code')


def mask(path, val):
    leaf = path.rsplit('.', 1)[-1].lower()
    if any(t in leaf for t in KEYISH) and len(val) > 8:
        return '<hidden len=%d prefix=%s…>' % (len(val), val[:4])
    if len(val) > 60:
        return '<string len=%d>' % len(val)
    return repr(val)


def walk(o, path=''):
    if isinstance(o, dict):
        for k, v in o.items():
            walk(v, '%s.%s' % (path, k) if path else k)
    elif isinstance(o, list):
        print('%s = [array x%d]' % (path, len(o)))
        for i, x in enumerate(o[:3]):
            walk(x, '%s[%d]' % (path, i))
    elif isinstance(o, str):
        print('  %-52s : String  %s' % (path, mask(path, o)))
    else:
        print('  %-52s : %s  %r' % (path, type(o).__name__, o))


def main():
    roots = [os.path.join(os.environ.get(k, ''), 'com.phoenixxi.launcher')
             for k in ('LOCALAPPDATA', 'APPDATA')]
    for root in roots:
        if not os.path.isdir(root):
            print('== %s (missing)' % root)
            continue
        print('== %s' % root)
        for dirpath, dirnames, filenames in os.walk(root):
            rel = os.path.relpath(dirpath, root)
            for f in sorted(filenames):
                p = os.path.join(dirpath, f)
                size = os.path.getsize(p)
                print('  %-70s %10d B' % (os.path.join(rel, f) if rel != '.' else f, size))
                if size and size < 200000 and f.lower().endswith(('.json', '.txt', '.cfg', '.ini')):
                    print('    ---- shape of %s ----' % f)
                    try:
                        walk(json.load(open(p, encoding='utf-8')))
                    except Exception as e:
                        print('    (not JSON: %s)' % type(e).__name__)
            if rel != '.' and dirnames:
                pass


if __name__ == '__main__':
    main()
