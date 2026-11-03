"""Learn the CDN URL shape from the PUBLIC manifests (ashita/eradats) instead of guessing.

The launcher ships three content-addressed manifests (game, ashita, eradats) with the same code
path: base URL + channel + object_root/<sha256>, plus archive.url and files_manifest_url stored
relative. The ashita/eradats hosts are likely open, so probing them reveals the exact shape for
free; we then apply the identical shape to gamefiles.phoenix-xi.com with the stored credential.

  python tools/cow/probe_public_cdn.py
"""
import json
import os
import urllib.error
import urllib.request

LOCAL = os.path.join(os.environ['LOCALAPPDATA'], 'com.phoenixxi.launcher')
UA = {'User-Agent': 'PhoenixXI-Launcher/0.0.118', 'Accept': '*/*'}


def get(url, nbytes=64):
    req = urllib.request.Request(url, headers=UA)
    try:
        with urllib.request.urlopen(req, timeout=30) as r:
            return r.status, r.headers.get('Content-Length', '-'), r.headers.get('Content-Type', '-'), r.read(nbytes)[:16]
    except urllib.error.HTTPError as e:
        return e.code, '-', e.headers.get('Server', '-'), b''
    except Exception as e:
        return type(e).__name__, '-', '-', b''


def main():
    for name, host in (('manifest-ashita.json', 'https://ashita.phoenix-xi.com'),
                       ('manifest-eradats.json', 'https://eradats.phoenix-xi.com'),
                       ('manifest-game.json', 'https://gamefiles.phoenix-xi.com')):
        p = os.path.join(LOCAL, name)
        if not os.path.isfile(p):
            continue
        m = json.load(open(p, encoding='utf-8'))
        root = m.get('object_root', 'objects')
        arc = m.get('archive') or {}
        sha = None
        for k, v in m['files'].items():
            if v.get('size', 1 << 30) < 500:
                sha = v['sha256']
                break
        cands = []
        for pre in ('', '/stable', '/v2/stable', '/internal_testing', '/v2/internal_testing'):
            cands.append(host + pre + '/' + name)
            if arc.get('url'):
                cands.append(host + pre + '/' + arc['url'])
            if arc.get('files_manifest_url'):
                cands.append(host + pre + '/' + arc['files_manifest_url'])
            if sha:
                cands.append(host + pre + '/%s/%s' % (root, sha))
        print('\n=== %s (%d files, object_root=%s) ===' % (name, len(m['files']), root))
        for url in cands:
            st, clen, ctype, blob = get(url)
            mark = '  <<<' if st == 200 else ''
            print('  %-4d %-12s %-58s%s' % (st, str(clen)[:12], url.replace(host, ''), mark))
            if st == 200 and url.endswith(name):
                print('        MANIFEST URL WORKS -> base is %r' % url.replace('/' + name, ''))
                break


if __name__ == '__main__':
    main()
