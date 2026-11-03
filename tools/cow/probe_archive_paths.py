"""Find the CDN's real path layout by probing the archive URLs the manifest advertises.

manifest-game.json gives relative URLs ('archives/f4836cc942d6/game-client-v1.zip',
'archive-manifests/f4836cc942d6.json') and the launcher binary contains channel roots
('/stable', '/v2/stable', '/internal_testing', '/v2/internal_testing'). Only the combination is
unknown. This issues ranged GETs (first 16 bytes) so probing the 8 GB archive costs nothing, and
prints status, Content-Range and the Server header for anonymous + bearer attempts.

  python tools/cow/probe_archive_paths.py
"""
import json
import os
import sys
import urllib.error
import urllib.request

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from fetch_polcore import dpapi_unprotect, locate, UA

BASE = 'https://gamefiles.phoenix-xi.com'
VER = 'f4836cc942d6'


def bearer_headers():
    s = json.load(open(locate('session.json'), encoding='utf-8'))
    t = dpapi_unprotect(bytes(s['accounts'][0]['token'])).decode('utf-8', 'ignore').strip('\x00').strip()
    h = {'User-Agent': UA, 'Accept': '*/*', 'Authorization': 'Bearer ' + t}
    if s.get('device_id'):
        h['X-Phoenix-Device-Id'] = s['device_id']
    return h


def try_url(url, headers):
    h = dict(headers)
    h['Range'] = 'bytes=0-15'
    req = urllib.request.Request(url, headers=h)
    try:
        with urllib.request.urlopen(req, timeout=45) as r:
            return r.status, r.headers.get('Content-Range') or r.headers.get('Content-Length', '-'), \
                r.headers.get('Server', '-')
    except urllib.error.HTTPError as e:
        return e.code, '-', e.headers.get('Server', '-')
    except Exception as e:
        return type(e).__name__, '-', '-'


def main():
    auth = bearer_headers()
    anon = {'User-Agent': UA, 'Accept': '*/*'}
    rels = [
        'archives/%s/game-client-v1.zip' % VER,
        'archives/%s/game-client.zip' % VER,
        'archive-manifests/%s.json' % VER,
        'archives/game-client-v1.zip',
    ]
    prefixes = ['', '/', 'stable/', 'v2/stable/', 'internal_testing/', 'v2/internal_testing/',
                'v2/', 'beta/', 'live/', 'game/']
    for label, headers in (('anon', anon), ('bearer', auth)):
        for p in prefixes:
            for rel in rels:
                url = '%s/%s%s' % (BASE, p, rel)
                st, extra, server = try_url(url, headers)
                if st != 404:
                    print('%-6s %-4d %-28s %-58s server=%s' % (label, st, str(extra)[:28], '/' + p + rel, server))
        print('-- %s pass done' % label)


if __name__ == '__main__':
    main()
