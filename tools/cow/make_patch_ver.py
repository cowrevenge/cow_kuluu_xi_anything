"""make_patch_ver.py - generate the patch.ver the game insists on for this build.

The guest reads patch.ver from its folder at startup and exits if it is not there
(host64.c: "The game reads patch.ver from its folder and will not start without it";
the trace shows CreateFileA("patch.ver") -> ERROR_FILE_NOT_FOUND, then UnregisterClassA
"FFXiClass"). host64 makes one for installs that lack it; the 32-bit host/stand-in
path has no equivalent yet.

This mirrors runtime/portable/gamecore_files.c exactly:
  gamecore_make_patch_ver(): zeros, version at 0x18, 0x118 at 0x118
  core_encrypt(): uint32 sum of plain[off]+plain[off+4] over all but the last block
                  -> stored at n-4; per block: rol32 halves, ^K, ^tweak, +K, then the
                     byte stage c = ((x + S + 0x40) ^ d), d = c
  core_key(1): key64 = seed 0 + product 1 (retail's no-registry fallback)

Every generated file is decrypted back with tools/newbuild.py's own
patch_ver_version() before it is offered, so a wrong key schedule cannot slip through.

  python tools/make_patch_ver.py                  # show what it would write
  python tools/make_patch_ver.py --write          # write into the game folder
  python tools/make_patch_ver.py --out FILE       # write FILE instead
"""
import argparse
import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import newbuild  # reuse the project's own patch.ver decryptor for verification

M64 = (1 << 64) - 1
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def _tweak(ctr):
    t = ctr
    for _ in range(3):
        t = ((t << 10) | ctr) & M64
    return (t + 0xA1652347) & M64


def core_key(key64):
    lo = key64 & 0xFFFFFFFF
    hi = (key64 >> 32) & 0xFFFFFFFF
    ror32 = lambda x, n: ((x >> n) | (x << (32 - n))) & 0xFFFFFFFF
    rol32 = lambda x, n: ((x << n) | (x >> (32 - n))) & 0xFFFFFFFF
    a = ror32(hi, 16)
    b = rol32(lo, 8)
    s = list(a.to_bytes(4, 'little')) + list(b.to_bytes(4, 'little'))
    s[0] = (s[0] + 0x45) & 0xFF
    for i in range(1, 8):
        c = (s[i] + s[i - 1] - 0x2C) & 0xFF
        s[i] = ((s[i - 1] << 2) ^ c ^ 0x45) & 0xFF
    k = int.from_bytes(bytes(s), 'little')
    K = []
    for _ in range(32):
        K.append(k)
        k = (k * 5) & M64
    S = [sum((kk >> (8 * i)) & 0xFF for i in range(8)) & 0xFF for kk in K]
    return K, S


def make_patch_ver(version, key64=1):
    n = 0x120
    v = version.encode('ascii')
    if len(v) >= 0x100:
        raise SystemExit('version string too long: %r' % version)
    plain = bytearray(n)
    plain[0x18:0x18 + len(v)] = v                      # version at 0x18
    plain[0x118:0x11C] = (0x118).to_bytes(4, 'little')  # payload length
    total = 0
    off = 0
    while off + 8 < n:                                  # checksum, filled at n-4
        total = (total + plain[off] + plain[off + 4]) & 0xFFFFFFFF
        off += 8
    plain[0x11C:0x120] = total.to_bytes(4, 'little')

    K, S = core_key(key64)
    out = bytearray(n)
    for off in range(0, n, 8):
        idx = (off >> 3) & 31
        val = int.from_bytes(plain[off:off + 8], 'little')
        val = ((val >> 32) | (val << 32)) & M64
        val ^= K[idx]
        val ^= _tweak(off)
        val = (val + K[idx]) & M64
        x = list(val.to_bytes(8, 'little'))
        d = ((off >> 3) ^ 0x45) & 0xFF
        for k in range(8):
            c = ((x[k] + S[idx] + 0x40) & 0xFF) ^ d
            out[off + k] = c
            d = c
    return bytes(out)


def build_version():
    """FFXI_VERSION for the build prepare.py chose, from meta/builds.json."""
    gj = os.path.join(ROOT, 'generated', 'build.json')
    build = json.load(open(gj))['build']
    known = json.load(open(os.path.join(ROOT, 'meta', 'builds.json')))
    entry = known[build] if build in known else known.get('builds', {}).get(build)
    if entry is None:
        raise SystemExit('build %s not in meta/builds.json' % build)
    return build, entry['version']


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--write', action='store_true', help='write <game>\\patch.ver')
    ap.add_argument('--out', help='write to this path instead')
    ap.add_argument('--game', help='game folder (default: generated/build.json)')
    a = ap.parse_args()

    build, version = build_version()
    game = a.game or json.load(open(os.path.join(ROOT, 'generated', 'build.json')))['game']
    print('build   : %s' % build)
    print('version : %s' % version)
    print('game    : %s' % game)

    blob = make_patch_ver(version)
    print('bytes   : %d' % len(blob))

    tmp = os.path.join(ROOT, 'generated', 'patch.ver.probe')
    open(tmp, 'wb').write(blob)
    back = newbuild.patch_ver_version(tmp)
    os.remove(tmp)
    print('round-trip decrypt (tools/newbuild.py): %r' % back)
    if back != version:
        raise SystemExit('FAIL: round trip did not reproduce %r - key schedule is wrong' % version)
    print('PASS: our decryptor reads back the version we wrote')

    if a.out:
        open(a.out, 'wb').write(blob)
        print('wrote %s' % a.out)
    elif a.write:
        dest = os.path.join(game, 'patch.ver')
        if os.path.exists(dest):
            print('%s already exists - not overwriting' % dest)
        else:
            open(dest, 'wb').write(blob)
            print('WROTE %s' % dest)
    else:
        print('(dry run: pass --write to put patch.ver in the game folder)')


if __name__ == '__main__':
    main()
