"""Matrix probe: which (base prefix, relative path) combination does the CDN actually serve?

Anonymous requests 401 everywhere, and requests with the stored bearer token 404 everywhere we
guessed - so the auth is fine and only the URL shape is unknown. This walks a small matrix of
channel prefixes x the relative paths the manifests name (manifest.json, manifest-*.json,
archives/<ver>/*.zip, archive-manifests/<ver>.json, objects/<sha>) on both the game and ashita
hosts, using 'Range: bytes=0-0' so a hit costs 1 byte.

  python tools/cow/probe_matrix.py
"""
import json
import os
import sys
import urllib.error
import urllib.request

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from fetch_polcore import dpapi_unprotect, locate, UA

LOCAL = os.path.join(os.environ['LOCALAPPDATA'], 'com.phoenixxi.launcher')


def headers():
    s = json.load(open(locate('session.json'), encoding='utf-8'))
    t = dpapi_unprotect(bytes(s['accounts'][0]['token'])).decode('utf-8', 'ignore').strip('\x00').strip()
    h = {'User-Agent': UA, 'Accept': '*/*', 'Authorization': 'Bearer ' + t, 'Range': 'bytes=0-0'}
    if s.get('device_id'):
        h['X-Phoenix-Device-Id'] = s['device_id']
    return h


def one(url, hdrs):
    try:
        with urllib.request.urlopen(urllib.request.Request(url, headers=hdrs), timeout=30) as r:
            r.read(4)
            return r.status
    except urllib.error.HTTPError as e:
        return e.code
    except Exception as e:
        return type(e).__name__


def rels_for(name):
    m = json.load(open(os.path.join(LOCAL, name), encoding='utf-8'))
    root = m.get('object_root', 'objects')
    arc = m.get('archive') or {}
    sha = None
    for k, v in m['files'].items():
        if 1000 < v.get('size', 0) < 200000:
            sha = v['sha256']
            break
    out = ['manifest.json', name]
    if arc.get('url'):
        out.append(arc['url'])
    if arc.get('files_manifest_url'):
        out.append(arc['files_manifest_url'])
    if sha:
        out += ['%s/%s' % (root, sha), '%s/%s/%s' % (root, sha[:2], sha), '%s/%s/%s' % (root, sha[:2], sha[2:])]
    return out, sha


def main():
    hdrs = headers()
    prefixes = ['', 'stable', 'v2/stable', 'v2', 'v1', 'internal_testing', 'v2/internal_testing',
                'beta', 'game', 'client', 'phoenix', 'live']
    targets = [('https://gamefiles.phoenix-xi.com', 'manifest-game.json'),
               ('https://ashita.phoenix-xi.com', 'manifest-ashita.json')]
    for host, name in targets:
        rels, sha = rels_for(name)
        print('\n=== %s  (%s)  sample sha=%s' % (host, name, (sha or '')[:12]))
        for p in prefixes:
            for rel in rels:
                url = host + ('/' + p if p else '') + '/' + rel
                st = one(url, hdrs)
                if str(st) != '404':
                    print('   %-6s %s' % (st, url.replace(host, '') or '/'))
        # also try the host root and a bare objects path
        for rel in ['objects', 'health', 'version', '']:
            st = one(host + ('/' + rel if rel else '/'), hdrs)
            if str(st) != '404':
                print('   %-6s %s/%s' % (st, host.replace('https://', ''), rel))


if __name__ == '__main__':
    main()
