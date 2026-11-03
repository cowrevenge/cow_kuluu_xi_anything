"""Probe the CDN's URL scheme before spending the credential.

The launcher's manifests are content addressed: object_root='objects', archives live under
'archives/<version>/<name>.zip', file manifests under 'archive-manifests/<version>.json'. This
tries those patterns anonymously for a handful of SMALL entries (plus the polcore.dll we want)
and reports status/size only, so we learn whether gamefiles.phoenix-xi.com needs the stored
credential at all and what the object path really looks like.

  python tools/cow/cdn_probe.py
"""
import json
import os
import urllib.error
import urllib.request

UA = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) phoenix-launcher',
      'Accept': '*/*'}
BASE = 'https://gamefiles.phoenix-xi.com'
LOCAL = os.path.join(os.environ['LOCALAPPDATA'], 'com.phoenixxi.launcher')


def load(name):
    return json.load(open(os.path.join(LOCAL, name), encoding='utf-8'))


def req(url, headers=None, method='GET', nbytes=64):
    h = dict(UA)
    h.update(headers or {})
    r = urllib.request.Request(url, headers=h, method=method)
    try:
        with urllib.request.urlopen(r, timeout=30) as resp:
            body = resp.read(nbytes) if method == 'GET' else b''
            return resp.status, dict(resp.headers), len(body)
    except urllib.error.HTTPError as e:
        return e.code, dict(e.headers or {}), 0
    except Exception as e:
        return type(e).__name__, {}, 0


def main():
    game = load('manifest-game.json')
    print('game manifest: version=%s object_root=%s archive=%s'
          % (game.get('version'), game.get('object_root'), game.get('archive')))

    targets = []
    for path, e in game['files'].items():
        if path.endswith('viewer/com/polcore.dll'):
            targets.append(('polcore', path, e))
        elif e.get('size', 1 << 30) < 400 and len(targets) < 3 and path.endswith(('.pml', '.png')):
            targets.append(('tiny', path, e))

    for kind, path, e in targets:
        sha = e['sha256']
        cands = [
            '%s/objects/%s' % (BASE, sha),
            '%s/objects/%s/%s' % (BASE, sha[:2], sha),
            '%s/%s/objects/%s' % (BASE, game.get('object_root'), sha),
            '%s/objects/%s/%s' % (BASE, sha[:2], sha[2:]),
        ]
        print('\n%s  %s  size=%s' % (kind, path, e['size']))
        for url in cands:
            st, hdr, n = req(url, nbytes=64)
            print('   %-4d %-64s len=%s type=%s' % (
                st, url.replace(BASE, ''), hdr.get('Content-Length', '-'),
                hdr.get('Content-Type', '-')))
            if st == 200 and n:
                break


if __name__ == '__main__':
    main()
