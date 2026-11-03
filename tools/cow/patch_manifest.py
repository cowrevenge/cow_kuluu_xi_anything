r"""Take requireAdministrator out of an exe's embedded manifest (no admin, reversible).

Why this and not the registry: HKCU\...\AppCompatFlags\Layers with '~ RUNASINVOKER' is the polite
per-user way, and it is set for Ashita-cli.exe on this machine - yet the process the launcher spawns
still comes back ELEVATED (tools/cow/elevation_check2.py reads the token). With the AppCompat engine
not honouring the layer, the only remaining knob that does not need admin is the manifest itself:
Windows elevates because RT_MANIFEST (#24) says requestedExecutionLevel='requireAdministrator'.

So: read the resource, swap that one word, write it back with BeginUpdateResource/UpdateResource/
EndUpdateResource. Everything else in the file ( Authenticode aside, it is unsigned) is untouched,
the original is kept next to the tool as a .orig copy, and --restore puts it back byte for byte.

  python tools/cow/patch_manifest.py "C:\PhoenixXI\Ashita-cli.exe"          # patch to asInvoker
  python tools/cow/patch_manifest.py "C:\PhoenixXI\Ashita-cli.exe" --show   # just read it
  python tools/cow/patch_manifest.py "C:\PhoenixXI\Ashita-cli.exe" --restore
"""
import ctypes
import ctypes.wintypes as w
import hashlib
import os
import shutil
import struct
import sys

RT_MANIFEST = 24
CREATE_PROCESS_MANIFEST = 1
kernel32 = ctypes.windll.kernel32

kernel32.LoadLibraryExW.restype = w.HMODULE
kernel32.LoadLibraryExW.argtypes = [w.LPCWSTR, w.HANDLE, w.DWORD]
kernel32.FindResourceExW.restype = w.HRSRC
kernel32.FindResourceExW.argtypes = [w.HMODULE, w.LPVOID, w.LPVOID, w.WORD]
kernel32.SizeofResource.restype = w.DWORD
kernel32.SizeofResource.argtypes = [w.HMODULE, w.HRSRC]
kernel32.LoadResource.restype = w.HGLOBAL
kernel32.LoadResource.argtypes = [w.HMODULE, w.HRSRC]
kernel32.LockResource.restype = w.LPVOID
kernel32.LockResource.argtypes = [w.HGLOBAL]
kernel32.FreeLibrary.argtypes = [w.HMODULE]
kernel32.BeginUpdateResourceW.restype = w.HANDLE
kernel32.BeginUpdateResourceW.argtypes = [w.LPCWSTR, w.BOOL]
# kernel32 exports the wide names only: UpdateResourceW (a plain 'UpdateResource' is not exported)
_update = getattr(kernel32, 'UpdateResourceW', None) or getattr(kernel32, 'UpdateResourceExW')
_update.restype = w.BOOL
_update.argtypes = [w.HANDLE, w.LPVOID, w.LPVOID, w.WORD, w.LPVOID, w.DWORD]
kernel32.EndUpdateResourceW.restype = w.BOOL
kernel32.EndUpdateResourceW.argtypes = [w.HANDLE, w.BOOL]

LANGS = [0x0409, 0x0809, 0x0404, 0]


def read_manifest(path):
    """(bytes, resource_id, language) of the exe's manifest, or (None, None, None)."""
    h = kernel32.LoadLibraryExW(path, None, 0x00000002 | 0x00000010)  # AS_DATA | AS_IMAGE_RESOURCE
    if not h:
        raise OSError('LoadLibraryEx failed: %d' % ctypes.GetLastError())
    try:
        for rid in (CREATE_PROCESS_MANIFEST, 2, 3):
            for lang in LANGS:
                hr = kernel32.FindResourceExW(h, ctypes.c_void_p(RT_MANIFEST), ctypes.c_void_p(rid), lang)
                if not hr:
                    continue
                size = kernel32.SizeofResource(h, hr)
                if not size:
                    continue
                res = kernel32.LoadResource(h, hr)
                addr = kernel32.LockResource(res)
                if not addr:
                    continue
                return ctypes.string_at(addr, size), rid, lang
    finally:
        kernel32.FreeLibrary(h)
    return None, None, None


def write_manifest(path, data, rid, lang):
    up = kernel32.BeginUpdateResourceW(path, False)
    if not up:
        raise OSError('BeginUpdateResource failed: %d' % ctypes.GetLastError())
    buf = ctypes.create_string_buffer(data, len(data))
    if not _update(up, ctypes.c_void_p(RT_MANIFEST), ctypes.c_void_p(rid),
                    lang, buf, len(data)):
        kernel32.EndUpdateResourceW(up, False)
        raise OSError('UpdateResource failed: %d' % ctypes.GetLastError())
    if not kernel32.EndUpdateResourceW(up, False):  # False writes; True is fDISCARD
        raise OSError('EndUpdateResource failed: %d' % ctypes.GetLastError())


def backup_path(path):
    d = os.path.join(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))), 'build', 'exe-backup')
    os.makedirs(d, exist_ok=True)
    return os.path.join(d, os.path.basename(path) + '.orig')


def main():
    path = sys.argv[1]
    if not os.path.isfile(path):
        raise SystemExit('no such file: %s' % path)
    bak = backup_path(path)
    data, rid, lang = read_manifest(path)
    if data is None:
        raise SystemExit('%s has no RT_MANIFEST - it does not demand elevation' % path)

    if '--restore' in sys.argv:
        if not os.path.isfile(bak):
            raise SystemExit('no backup at %s' % bak)
        shutil.copy2(bak, path)
        print('restored %s from %s (sha256 %s)'
              % (path, bak, hashlib.sha256(open(path, 'rb').read()).hexdigest()[:12]))
        return 0

    print('%s: manifest rid=%d lang=0x%X, %d bytes' % (path, rid, lang, len(data)))
    for line in data.decode('utf-8', 'ignore').splitlines():
        if 'requestedExecutionLevel' in line or 'trustInfo' in line:
            print('   ', line.strip())

    if '--show' in sys.argv:
        return 0

    if b'requireAdministrator' not in data:
        print('already asInvoker; nothing to do')
        return 0

    if not os.path.isfile(bak):
        shutil.copy2(path, bak)
        print('kept the original at %s (sha256 %s)'
              % (bak, hashlib.sha256(open(bak, 'rb').read()).hexdigest()[:12]))

    new = data.replace(b'requireAdministrator', b'asInvoker')
    if b'uiAccess' in new:
        new = re_uiaccess(new)
    write_manifest(path, new, rid, lang)
    after, _, _ = read_manifest(path)
    ok = after is not None and b'requireAdministrator' not in after and b'asInvoker' in after
    print('rewrote manifest: %s' % ('OK, now asInvoker' if ok else 'FAILED - restore with --restore'))
    size = os.path.getsize(path)
    print('%s is %d bytes; size changed by %d bytes vs the original'
          % (os.path.basename(path), size, size - os.path.getsize(bak)))
    return 0 if ok else 1


def re_uiaccess(data):
    import re
    return re.sub(rb'uiAccess\s*=\s*"true"', b'uiAccess="false"', data)


if __name__ == '__main__':
    sys.exit(main())
