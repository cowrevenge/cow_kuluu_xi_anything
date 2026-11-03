"""Look inside the two candidate archives and try path-keyed object routes.

Two archives are advertised: the live /manifest.json points at 'archive/game-client-v1.zip'
(5.99 GB) while the launcher's cached manifest points at 'archives/<ver>/game-client-v1.zip'
(8.16 GB). This opens each remotely (Range requests only) and reports how many members it has and
whether PlayOnlineViewer/polcore members are inside. It also tries object routes keyed by the
manifest path rather than the sha256, since /objects/<sha> 404s.

  python tools/cow/probe_zip.py [needle]
"""
import io
import json
import os
import sys
import urllib.error
import urllib.request
import zipfile

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from fetch_polcore import dpapi_unprotect, locate, UA

HOST = 'https://gamefiles.phoenix-xi.com'
SHA = '73b1864bf522d3aa6ec28e9f4bb226fcee956f7f4848a238c9c2d756dc703b06'
BLOCK = 1 << 20


def H():
    s = json.load(open(locate('session.json'), encoding='utf-8'))
    t = dpapi_unprotect(bytes(s['accounts'][0]['token'])).decode('utf-8', 'ignore').strip('\x00').strip()
    h = {'User-Agent': UA, 'Accept': '*/*', 'Authorization': 'Bearer ' + t}
    if s.get('device_id'):
        h['X-Phoenix-Device-Id'] = s['device_id']
    return h


HDRS = H()


def req(url, rng=None):
    h = dict(HDRS)
    if rng:
        h['Range'] = rng
    return urllib.request.urlopen(urllib.request.Request(url, headers=h), timeout=180)


class RangeFile(io.IOBase):
    def __init__(self, url):
        self.url, self.pos, self._size, self._cache = url, 0, None, {}

    @property
    def size(self):
        if self._size is None:
            with req(self.url, 'bytes=0-0') as r:
                cr = r.headers.get('Content-Range')
                r.read(2)
            if not cr or '/' not in cr:
                raise OSError('no Range support: %s' % cr)
            self._size = int(cr.rsplit('/', 1)[1])
        return self._size

    def seekable(self):
        return True

    def readable(self):
        return True

    def seek(self, off, w=0):
        self.pos = off if w == 0 else (self.pos + off if w == 1 else self.size + off)
        return self.pos

    def tell(self):
        return self.pos

    def read(self, n=-1):
        if n is None or n < 0:
            n = self.size - self.pos
        if n <= 0:
            return b''
        end = self.pos + n - 1
        out = bytearray()
        while self.pos <= end:
            blk = self.pos // BLOCK
            b = min((blk + 1) * BLOCK - 1, end, self.size - 1)
            data = self._cache.get(blk)
            if data is None:
                with req(self.url, 'bytes=%d-%d' % (blk * BLOCK, b)) as r:
                    data = r.read()
                self._cache = {blk: data}
            off = self.pos - blk * BLOCK
            take = min(len(data) - off, end - self.pos + 1)
            out += data[off:off + take]
            self.pos += take
        return bytes(out)


def inspect_zip(url, needle):
    print('\n--- %s' % url.replace(HOST, ''))
    try:
        rf = RangeFile(url)
        print('    size %d bytes' % rf.size)
        z = zipfile.ZipFile(rf)
        names = z.namelist()
        print('    members: %d' % len(names))
        top = {}
        for n in names:
            t = n.replace('\\', '/').split('/')[0]
            top[t] = top.get(t, 0) + 1
        print('    top-level: %s' % sorted(top.items(), key=lambda kv: -kv[1])[:6])
        hits = [n for n in names if needle in n.lower()]
        print('    members matching %r: %d' % (needle, len(hits)))
        for n in hits[:12]:
            print('       %10d  %s' % (z.getinfo(n).file_size, n))
        return z, hits
    except Exception as e:
        print('    failed: %s: %s' % (type(e).__name__, e))
        return None, []


def status(url):
    try:
        with req(url, 'bytes=0-0') as r:
            return r.status
    except urllib.error.HTTPError as e:
        return e.code
    except Exception as e:
        return type(e).__name__


def main():
    needle = sys.argv[1] if len(sys.argv) > 1 else 'polcore'
    live = json.load(open(os.path.join(ROOT, 'build', 'cdn', 'manifest-live.json'), encoding='utf-8')) \
        if False else None
    for url in ['%s/archive/game-client-v1.zip' % HOST]:
        inspect_zip(url, needle)
        inspect_zip(url, 'playonlineviewer')

    cached = json.load(open(locate('manifest-game.json'), encoding='utf-8'))
    inspect_zip(HOST + '/' + cached['archive']['url'], needle)
    inspect_zip(HOST + '/' + cached['archive']['url'], 'playonlineviewer')

    print('\n--- path-keyed object routes')
    path = 'SquareEnix/PlayOnlineViewer/viewer/com/polcore.dll'
    cands = ['/objects/%s' % path,
             '/objects/%s/%s' % (cached['version'], path),
             '/files/%s' % path,
             '/game/%s' % path,
             '/objects/%s' % urllib.parse.quote(path),
             '/objects/sha256/%s' % SHA,
             '/v2/objects/%s' % path,
             '/patchfiles/%s' % path]
    for c in cands:
        print('   %-6s %s' % (status(HOST + c), c))


ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
import urllib.parse  # noqa: E402  (used by the route list above)

if __name__ == '__main__':
    main()
