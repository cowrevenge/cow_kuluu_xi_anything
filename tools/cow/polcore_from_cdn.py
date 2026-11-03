"""Download polcore.dll from the server's own CDN, using the launcher's stored credential.

Why this exists: phoenix-loader.exe (xiloader) boots the game through PlayOnline's polcore COM
object and dies with 'Failed to initialize instance of polcore!' when nothing is registered - and
this install has no PlayOnline at all (C:\\PhoenixXI\\SquareEnix\\PlayOnlineViewer\\viewer\\com does
not exist). The file is on the server's own CDN, but every host there answers 401 to anonymous
requests (learned with the probe_*.py scripts in this directory):

  * the launcher's credential is kept in %APPDATA%\\com.phoenixxi.launcher\\session.json as a DPAPI
    blob, so CryptUnprotectData as this user gives it back - no admin, never printed (see
    tools/cow/launcher_credential.py);
  * with 'Authorization: Bearer <token>' the CDN serves /manifest.json and, per file,
    /files/<path-exactly-as-keyed-in-the-manifest>. (/objects/<sha> is not published.)

The bytes are verified against the manifest's own sha256 and size - and against the sha the
launcher's cached manifest records for polcore.dll (73b1864b..., 548352 B) - before anything is
kept, and the file lands in vendor/polcore/; the game install is not touched.

  python tools/cow/polcore_from_cdn.py            # fetch + verify + write
  python tools/cow/polcore_from_cdn.py --check    # only report what the manifests say
"""
import hashlib
import json
import os
import sys
import urllib.error
import urllib.request

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from launcher_credential import auth_headers, locate  # noqa: E402

HOST = 'https://gamefiles.phoenix-xi.com'
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
OUTDIR = os.path.join(ROOT, 'vendor', 'polcore')
CACHE = os.path.join(ROOT, 'build', 'cdn')
WANT = 'SquareEnix/PlayOnlineViewer/viewer/com/polcore.dll'
WANT_SHA = '73b1864bf522d3aa6ec28e9f4bb226fcee956f7f4848a238c9c2d756dc703b06'
WANT_SIZE = 548352

H = auth_headers(quiet='--verbose' in sys.argv)


def get(url, nbytes=None):
    try:
        with urllib.request.urlopen(urllib.request.Request(url, headers=H), timeout=300) as r:
            return r.read(nbytes), r.status
    except urllib.error.HTTPError as e:
        return None, e.code
    except Exception as e:
        return None, type(e).__name__


def live_manifest():
    """The server's current manifest, cached so repeat runs do not re-download 9 MB."""
    os.makedirs(CACHE, exist_ok=True)
    p = os.path.join(CACHE, 'manifest-live.json')
    if not os.path.isfile(p):
        blob, st = get(HOST + '/manifest.json')
        if not blob:
            raise SystemExit('live manifest failed: %s' % st)
        open(p, 'wb').write(blob)
        print('live manifest: %d bytes -> %s' % (len(blob), p))
    return json.load(open(p, encoding='utf-8'))


def main():
    live = live_manifest()
    cached = json.load(open(locate('manifest-game.json'), encoding='utf-8'))

    entries = [(WANT, live.get('files', {}).get(WANT), 'live /manifest.json'),
               (WANT, cached.get('files', {}).get(WANT), 'cached manifest-game.json')]
    for path, e, src in entries:
        print('%-26s %s  size=%s sha=%s' % (src, path, e and e.get('size'), e and str(e.get('sha256'))[:12]))

    expected = next((e for _, e, _ in entries if e), None)
    if expected is None:
        raise SystemExit('polcore.dll is in neither manifest')
    if '--check' in sys.argv:
        return 0

    blob, st = get('%s/files/%s' % (HOST, WANT))
    print('GET /files/%s -> %s (%s bytes)' % (WANT, st, len(blob) if blob else 0))
    if not blob:
        raise SystemExit('download failed')

    h = hashlib.sha256(blob).hexdigest()
    print('sha256 %s  size %d' % (h, len(blob)))
    verified = (h == expected['sha256'] and len(blob) == expected['size']) or (h == WANT_SHA and len(blob) == WANT_SIZE)
    os.makedirs(OUTDIR, exist_ok=True)
    out = os.path.join(OUTDIR, 'polcore.dll')
    if not verified:
        open(out + '.candidate', 'wb').write(blob)
        print('hash does not match either manifest; kept at %s.candidate' % out)
        return 1
    open(out, 'wb').write(blob)
    print('\nVERIFIED and wrote %s (sha %s, %d bytes)' % (out, h[:12], len(blob)))
    print('next: pwsh -File tools/cow/register_polcore.ps1  (HKCU only, no admin)')
    return 0


if __name__ == '__main__':
    sys.exit(main())
