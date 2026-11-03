"""Find every exe in the launcher chain that demands elevation, and whether a shim covers it.

The launcher's PLAY spawns Ashita-cli.exe -> phoenix-loader.exe. If ANY of them carries
requestedExecutionLevel='requireAdministrator', Windows puts a consent prompt on the secure desktop,
nobody presses it, and the launcher reports 'UAC cancelled (1223)' after ~123 s. An HKCU
AppCompatFlags/Layers '~ RUNASINVOKER' entry suppresses that - but only for the exact path string the
process is started with, so this lists the exes, what their manifest asks for, and which paths are
already layered. Nothing is written; run tools/cow/unrequire_elevation.ps1 to apply.

  python tools/cow/scan_elevation.py [root]
"""
import os
import re
import sys
import winreg

DEFAULT_ROOTS = [r'C:\PhoenixXI', r'C:\Users\Owner\AppData\Local\Phoenix Launcher']
LAYER_KEY = r'Software\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers'
MANIFEST = re.compile(rb'requestedExecutionLevel[^/>]{0,120}')


def manifest_wants(path):
    """Ask Windows itself what the exe's manifest says, falling back to a byte scan."""
    try:
        from ctypes import wintypes
        import ctypes
        k32 = ctypes.windll.kernel32
        k32.LoadLibraryExW.restype = wintypes.HMODULE
        k32.LoadLibraryExW.argtypes = [wintypes.LPCWSTR, wintypes.HANDLE, wintypes.DWORD]
        h = k32.LoadLibraryExW(path, None, 0x00000002 | 0x00000010)  # AS_DATA | AS_IMAGE_RESOURCE
        if h:
            rt = 24  # RT_MANIFEST
            found = []
            for lang in (0, 0x409):
                for name in (1, 2, 3):
                    try:
                        hr = ctypes.windll.kernel32.FindResourceExW(h, rt, name, lang)
                        if not hr:
                            continue
                        size = ctypes.windll.kernel32.SizeofResource(h, hr)
                        res = ctypes.windll.kernel32.LoadResource(h, hr)
                        data = ctypes.string_at(ctypes.windll.kernel32.LockResource(res), size)
                        for m in MANIFEST.finditer(data):
                            found.append(m.group().decode('ascii', 'ignore'))
                    except Exception:
                        pass
            k32.FreeLibrary(h)
            if found:
                return found
    except Exception:
        pass
    data = open(path, 'rb').read()
    hits = {m.group().decode('ascii', 'ignore') for m in MANIFEST.finditer(data)}
    wide = data.decode('utf-16-le', 'ignore').encode('latin-1', 'ignore')
    hits |= {m.group().decode('ascii', 'ignore') for m in MANIFEST.finditer(wide)}
    return sorted(hits)


def layered_paths():
    out = {}
    try:
        with winreg.OpenKey(winreg.HKEY_CURRENT_USER, LAYER_KEY) as k:
            i = 0
            while True:
                try:
                    n, v, _ = winreg.EnumValue(k, i)
                except OSError:
                    break
                out[n.lower()] = v
                i += 1
    except OSError:
        pass
    return out


def main():
    roots = sys.argv[1:] or DEFAULT_ROOTS
    layered = layered_paths()
    print('HKCU AppCompat Layers entries: %d' % len(layered))
    problems = []
    for root in roots:
        if not os.path.isdir(root):
            continue
        for dirpath, dirnames, filenames in os.walk(root):
            if dirnames and dirpath.count(os.sep) - root.count(os.sep) > 3:
                dirnames[:] = []
            for f in filenames:
                if not f.lower().endswith('.exe'):
                    continue
                p = os.path.join(dirpath, f)
                try:
                    hits = manifest_wants(p)
                except Exception as e:
                    print('  ? %s (%s)' % (p, type(e).__name__))
                    continue
                if not hits:
                    continue
                req = [h for h in hits if 'requireAdministrator' in h]
                layer = layered.get(p.lower())
                tag = 'ADMIN' if req else 'ok'
                if req:
                    problems.append(p)
                print('  [%-5s] %-70s layer=%s' % (tag, p, layer or '-'))
                for h in hits[:2]:
                    print('           %s' % h[:110])
    print('\nneed elevation: %d' % len(problems))
    for p in problems:
        print('   %s   (layered: %s)' % (p, bool(layered.get(p.lower()))))


if __name__ == '__main__':
    main()
