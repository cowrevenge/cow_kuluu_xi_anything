"""Read the launcher's cached game manifest for the polcore.dll entry and show the URL scheme.

The launcher stores content-addressed manifests locally; those tell us both where a file lives
on the CDN (object_root / archive url patterns) and what bytes we must get (sha256 + size). This
prints the manifest's top-level keys (except the huge file table) and the polcore entry, plus the
sha256 of every entry whose path mentions polcore/polstd. No credential is used or printed.

  python tools/cow/manifest_probe.py
"""
import json
import os

for d in [os.path.join(os.environ['LOCALAPPDATA'], 'com.phoenixxi.launcher'),
          os.path.join(os.environ['APPDATA'], 'com.phoenixxi.launcher')]:
    p = os.path.join(d, 'manifest-game.json')
    if os.path.isfile(p):
        break
else:
    raise SystemExit('manifest-game.json not found')

print(p, os.path.getsize(p), 'bytes')
m = json.load(open(p, encoding='utf-8'))
for k, v in m.items():
    if k == 'files':
        print('  files: [%d entries]' % len(v))
    elif isinstance(v, (str, int, float, bool)) and len(str(v)) < 200:
        print('  %-28s = %s' % (k, v))
    else:
        print('  %-28s = %s' % (k, type(v).__name__))

for path, e in m['files'].items():
    if 'polcore' in path.lower() or 'polstd' in path.lower() or 'playonline' in path.lower():
        print('  %-90s %10s  %s' % (path, e.get('size'), e.get('sha256')))
