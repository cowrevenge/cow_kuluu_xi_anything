"""Walk candidate URL shapes on gamefiles.phoenix-xi.com with the launcher's credential.

Anonymous requests 401; requests with 'Authorization: Bearer <stored token>' pass the gate, so the
remaining unknown is the path shape. This probes the manifest and object paths the launcher's
binary hints at (channel prefixes, object_root, archives/, archive-manifests/) and prints status,
Content-Length and the first bytes of the content type - downloading at most a few hundred bytes
per attempt. The token is never printed.

  python tools/cow/probe_paths.py
"""
import json
import os
import sys
import urllib.error
import urllib.request

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from fetch_polcore import dpapi_unprotect, locate, UA, SHA  # reuse the DPAPI helper

BASE = 'https://gamefiles.phoenix-xi.com'


def token():
    s = json.load(open(locate('session.json'), encoding='utf-8'))
    d = s.get('device_id', '')
    t = dpapi_unprotect(bytes(s['accounts'][0]['token'])).decode('utf-8', 'ignore').strip('\x00')
    return t.strip(), d


def head(url, headers):
    req = urllib.request.Request(url, headers=headers)
    try:
        with urllib.request.urlopen(req, timeout=45) as r:
            blob = r.read(96)
            return r.status, r.headers.get('Content-Length', '-'), r.headers.get('Content-Type', '-'), blob[:40]
    except urllib.error.HTTPError as e:
        return e.code, '-', '-', b''
    except Exception as e:
        return type(e).__name__, '-', '-', b''


def main():
    t, device = token()
    hdrs = {'User-Agent': UA, 'Accept': '*/*', 'Authorization': 'Bearer ' + t}
    if device:
        hdrs['X-Phoenix-Device-Id'] = device

    prefixes = ['', '/', 'stable/', 'v2/', 'v2/stable/', 'internal_testing/',
                'v2/internal_testing/', 'beta/', 'v1/']
    tails = [
        'manifest-game.json',
        'archive-manifests/f4836cc942d6.json',
        'objects/%s' % SHA,
        'objects/%s.dll' % SHA,
        'objects/%s/%s' % (SHA[:2], SHA),
        'objects/%s/%s' % (SHA[:2], SHA[2:]),
        'files/%s' % SHA,
        '%s' % SHA,
    ]
    hits = []
    for p in prefixes:
        for q in tails:
            url = '%s/%s%s' % (BASE, p, q)
            st, clen, ctype, blob = head(url, hdrs)
            flag = '' if st == 404 else '   <<<'
            print('%-5s %-14s %-30s %s%s' % (st, str(clen)[:14], '/' + p + q, str(ctype)[:30], flag))
            if st == 200:
                hits.append(url)
    print('\n200s:')
    for h in hits:
        print(' ', h)


if __name__ == '__main__':
    main()
