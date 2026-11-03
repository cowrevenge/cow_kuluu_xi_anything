"""Read the response bodies - the 404 text tells us what the origin is looking for.

/manifest.json answers 206 with the bearer token on every prefix, so the auth and host are right
and only the object route is unknown. This prints the manifest's first bytes (to confirm the
shape) and the full 404 body + headers for candidate object routes, which is how we find the real
key layout instead of guessing blind.

  python tools/cow/probe_object_route.py
"""
import json
import os
import sys
import urllib.error
import urllib.request

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from fetch_polcore import dpapi_unprotect, locate, UA, SHA

HOST = 'https://gamefiles.phoenix-xi.com'


def hdrs():
    s = json.load(open(locate('session.json'), encoding='utf-8'))
    t = dpapi_unprotect(bytes(s['accounts'][0]['token'])).decode('utf-8', 'ignore').strip('\x00').strip()
    h = {'User-Agent': UA, 'Accept': '*/*', 'Authorization': 'Bearer ' + t}
    if s.get('device_id'):
        h['X-Phoenix-Device-Id'] = s['device_id']
    return h


def show(url, h, nbytes=400):
    try:
        with urllib.request.urlopen(urllib.request.Request(url, headers=h), timeout=30) as r:
            body = r.read(nbytes)
            print('  %-58s %s' % (url.replace(HOST, ''), r.status))
            print('     headers: %s' % {k: v for k, v in r.headers.items()
                                        if k.lower() in ('content-type', 'content-length', 'etag', 'server', 'cache-control')})
            print('     body[:%d]: %r' % (len(body), body[:nbytes]))
            return body
    except urllib.error.HTTPError as e:
        body = e.read(300)
        print('  %-58s %s  body=%r' % (url.replace(HOST, ''), e.code, body))
        return b''
    except Exception as e:
        print('  %-58s %s' % (url.replace(HOST, ''), type(e).__name__))
        return b''


def main():
    h = hdrs()
    print('manifest.json:')
    show(HOST + '/manifest.json', h, 300)
    print('\nobject route candidates:')
    for u in ['/objects/%s' % SHA,
              '/objects/%s.dll' % SHA,
              '/object/%s' % SHA,
              '/files/%s' % SHA,
              '/blob/%s' % SHA,
              '/%s' % SHA,
              '/objects/%s/%s' % (SHA[:2], SHA),
              '/stable/objects/%s' % SHA,
              '/v2/stable/objects/%s' % SHA]:
        show(HOST + u, h, 200)


if __name__ == '__main__':
    main()
