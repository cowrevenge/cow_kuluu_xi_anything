"""Where can we get polcore.dll without a download?

Searches the local Phoenix/PlayOnline trees and any zips in them (the user keeps 2022 backups) for
polcore/polstd, and reports the embedded requestedExecutionLevel of the exes involved in the
launcher chain so we know which one forces the UAC prompt.

  python tools/cow/find_polcore_and_manifests.py
"""
import os
import re
import zipfile

ROOTS = [r'C:\PhoenixXI', r'D:\PhoenixXI', os.path.expandvars(r'%LOCALAPPDATA%\Phoenix Launcher'),
         os.path.expandvars(r'%LOCALAPPDATA%\com.phoenixxi.launcher'),
         os.path.expandvars(r'%USERPROFILE%\Downloads')]
NEEDLES = (b'polcore', b'polstd', b'polupdat', b'playonline', b'pol-')
EXES = [r'C:\PhoenixXI\bootloader\phoenix-loader.exe',
        r'C:\PhoenixXI\bootloader\Ashita-cli.exe',
        r'C:\PhoenixXI\Ashita-cli.exe',
        r'C:\PhoenixXI\SquareEnix\FINAL FANTASY XI\Ashita-cli.exe',
        r'C:\PhoenixXI\SquareEnix\FINAL FANTASY XI\launcher.exe',
        r'C:\PhoenixXI\launcher.exe',
        r'C:\PhoenixXI\pol.exe',
        r'C:\PhoenixXI\bootloader\pol.exe']


def scan_zip(p):
    try:
        with zipfile.ZipFile(p) as z:
            hits = [n for n in z.namelist() if any(x in n.lower().encode() for x in NEEDLES)]
    except Exception as e:
        return
    if hits:
        print('  ZIP %s' % p)
        for h in hits[:15]:
            print('      ', h)


def main():
    print('== files/zip members matching polcore/polstd/playonline ==')
    for root in ROOTS:
        if not os.path.isdir(root):
            continue
        for dirpath, dirnames, filenames in os.walk(root):
            depth = os.path.relpath(dirpath, root).count(os.sep)
            if depth > 6:
                dirnames[:] = []
                continue
            for f in filenames:
                low = f.lower()
                if any(n.decode() in low for n in NEEDLES):
                    p = os.path.join(dirpath, f)
                    print('  FILE %s  %d B' % (p, os.path.getsize(p)))
                elif low.endswith('.zip') and os.path.getsize(os.path.join(dirpath, f)) < 40 * 1024 * 1024 * 1024:
                    scan_zip(os.path.join(dirpath, f))

    print('\n== embedded execution level ==')
    for p in EXES:
        if not os.path.isfile(p):
            continue
        data = open(p, 'rb').read()
        hits = set(re.findall(rb'requestedExecutionLevel[^>]{0,120}', data))
        print('  %-60s %s' % (os.path.basename(p),
                              '; '.join(h.decode('ascii', 'ignore')[:110] for h in hits) or 'no manifest string'))
        print('     size=%d mtime=%s' % (len(data), __import__('time').ctime(os.path.getmtime(p))))


if __name__ == '__main__':
    main()
