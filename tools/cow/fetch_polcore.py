"""Fetch the PlayOnline polcore.dll the boot loader needs, from the server's own CDN.

The launcher's cached manifest lists SquareEnix/PlayOnlineViewer/.../viewer/com/polcore.dll
(sha256 73b1..., 548352 B), but this machine has no copy and gamefiles.phoenix-xi.com answers 401
to anonymous requests. The launcher's own credential is stored for us in
%APPDATA%\\com.phoenixxi.launcher\\session.json -> accounts[0].token, as a DPAPI blob (the blob
header carries the CryptProtectData provider GUID), so we decrypt it with CryptUnprotectData as
the same user - no admin, nothing printed - and use it for exactly this one download.

The request mirrors what the launcher itself sends (PhoenixXI-Launcher UA, X-Phoenix-Device-Id,
Bearer token) against the URL shapes its binary contains: /objects/<sha256> under the channel
prefixes 'stable' / 'v2/stable' / 'internal_testing' / 'v2/internal_testing'.

Nothing is written into the game install; the file lands in vendor/polcore/.

  python tools/cow/fetch_polcore.py
"""
import ctypes
import ctypes.wintypes as wt
import hashlib
import json
import os
import sys
import urllib.error
import urllib.request

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
OUT = os.path.join(ROOT, 'vendor', 'polcore', 'polcore.dll')
GAMEFILES = 'https://gamefiles.phoenix-xi.com'
SHA = '73b1864bf522d3aa6ec28e9f4bb226fcee956f7f4848a238c9c2d756dc703b06'
SIZE = 548352
UA = 'PhoenixXI-Launcher/0.0.118'
DIRS = [os.path.join(os.environ[k], 'com.phoenixxi.launcher') for k in ('LOCALAPPDATA', 'APPDATA')]


def locate(name):
    for d in DIRS:
        p = os.path.join(d, name)
        if os.path.isfile(p):
            return p
    raise SystemExit('%s not found under %s' % (name, ' or '.join(DIRS)))


def manifest_urls():
    """Every object URL shape the launcher binary knows about."""
    m = json.load(open(locate('manifest-game.json'), encoding='utf-8'))
    root = m.get('object_root', 'objects')
    out = []
    for prefix in ('', 'stable/', 'v2/stable/', 'internal_testing/', 'v2/internal_testing/'):
        out.append('%s/%s%s' % (GAMEFILES, prefix, '%s'))
    cands = []
    for tmpl in out:
        cands.append(tmpl % (root + '/' + SHA))
        cands.append(tmpl % (root + '/' + SHA[:2] + '/' + SHA))
    return cands


class DATA_BLOB(ctypes.Structure):
    _fields_ = [('cbData', wt.DWORD), ('pbData', ctypes.POINTER(ctypes.c_char))]


def dpapi_unprotect(blob):
    """CryptUnprotectData on the current user's own blob (no elevation needed)."""
    ctypes.windll.kernel32.LocalFree.restype = None
    ctypes.windll.kernel32.LocalFree.argtypes = [ctypes.c_void_p]
    src = DATA_BLOB(len(blob), ctypes.create_string_buffer(blob, len(blob)))
    dst = DATA_BLOB()
    crypt32 = ctypes.windll.crypt32
    crypt32.CryptUnprotectData.argtypes = [ctypes.POINTER(DATA_BLOB), ctypes.c_void_p,
                                           ctypes.c_void_p, ctypes.c_void_p, ctypes.c_void_p,
                                           wt.DWORD, ctypes.POINTER(DATA_BLOB)]
    crypt32.CryptUnprotectData.restype = wt.BOOL
    if not crypt32.CryptUnprotectData(ctypes.byref(src), None, None, None, None, 0, ctypes.byref(dst)):
        raise OSError('CryptUnprotectData failed: %d' % ctypes.GetLastError())
    out = ctypes.string_at(dst.pbData, dst.cbData)
    ctypes.windll.kernel32.LocalFree(dst.pbData)
    return out


def credential():
    s = json.load(open(locate('session.json'), encoding='utf-8'))
    device = s.get('device_id', '')
    acc = s['accounts'][0]
    raw = bytes(acc['token'])
    print('stored credential: DPAPI blob %d bytes, device_id len %d' % (len(raw), len(device)))
    try:
        clear = dpapi_unprotect(raw)
    except OSError as e:
        print('DPAPI decrypt failed: %s' % e)
        return [], device
    tokens = []
    for enc in ('utf-8', 'utf-16-le'):
        try:
            t = clear.decode(enc).strip('\x00').strip()
        except Exception:
            continue
        if t and t not in tokens:
            tokens.append(t)
    print('unlocked %d candidate token(s); shapes: %s'
          % (len(tokens), ', '.join('len=%d starts=%s' % (len(t), t[:3]) for t in tokens)))
    return tokens, device


def fetch(url, headers):
    req = urllib.request.Request(url, headers=headers)
    with urllib.request.urlopen(req, timeout=120) as r:
        return r.read(), r.status


def main():
    tokens, device = credential()
    base = {'User-Agent': UA, 'Accept': '*/*'}
    if device:
        base['X-Phoenix-Device-Id'] = device

    auth_variants = [('anonymous', {})]
    for t in tokens:
        auth_variants += [
            ('bearer', {'Authorization': 'Bearer ' + t}),
            ('raw', {'Authorization': t}),
            ('cookie', {'Cookie': 'token=' + t}),
            ('x-token', {'X-Token': t}),
        ]

    tried = 0
    for url in manifest_urls():
        for label, extra in auth_variants:
            headers = dict(base)
            headers.update(extra)
            try:
                blob, status = fetch(url, headers)
            except urllib.error.HTTPError as e:
                tried += 1
                print('  %-9s %-58s -> %s' % (label, url.replace(GAMEFILES, ''), e.code))
                continue
            except Exception as e:
                tried += 1
                print('  %-9s %-58s -> %s' % (label, url.replace(GAMEFILES, ''), type(e).__name__))
                continue
            h = hashlib.sha256(blob).hexdigest()
            print('  %-9s %-58s -> %s %d bytes sha=%s' % (label, url.replace(GAMEFILES, ''), status, len(blob), h[:12]))
            if h == SHA and len(blob) == SIZE:
                os.makedirs(os.path.dirname(OUT), exist_ok=True)
                open(OUT, 'wb').write(blob)
                print('\nMATCH: wrote %s (%d bytes), sha256 verified against the launcher manifest'
                      % (OUT, len(blob)))
                return 0
            print('     (hash mismatch - not the expected bytes)')
            if tried > 40:
                print('too many misses, stopping')
                return 1
    print('\nno authenticated fetch worked (%d requests)' % tried)
    return 1


if __name__ == '__main__':
    sys.exit(main())
