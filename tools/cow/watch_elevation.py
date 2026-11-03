"""Catch the launcher's children the moment they start and read their elevation token.

The stand-in dies within seconds (a guest AV), so a check run after the fact finds nothing - and
'no UAC' has to be *observed*, not assumed. This polls every 0.2 s for any process of the launcher
chain to appear, and for each one reads OpenProcessToken/GetTokenInformation(TokenElevation) right
away, together with its parent, so we see whether Ashita-cli.exe and the loader it spawns are now
started as the invoking user.

  python tools/cow/watch_elevation.py                # wait for PLAY to spawn something
  python tools/cow/watch_elevation.py --secs 90
"""
import argparse
import os
import subprocess
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from elevation_check import token_of, PROCESS_QUERY_LIMITED_INFORMATION, NAMES  # noqa: E402
import ctypes  # noqa: E402

k32 = ctypes.windll.kernel32


def snapshot():
    flt = ' or '.join("Name='%s.exe'" % n for n in NAMES)
    q = ('Get-CimInstance Win32_Process -Filter "%s" | '
         'ForEach-Object { "$($_.ProcessId)`t$($_.ParentProcessId)`t$($_.Name)" }' % flt)
    r = subprocess.run(['pwsh', '-NoProfile', '-Command', q], capture_output=True, text=True)
    rows = []
    for line in r.stdout.splitlines():
        parts = line.split('\t')
        if len(parts) == 3:
            try:
                rows.append((int(parts[0]), int(parts[1]), parts[2]))
            except ValueError:
                pass
    return rows


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--secs', type=int, default=75)
    ap.add_argument('--press', metavar='PID', type=int,
                    help='after 3 s, press the launcher PLAY button on this pid (unattended run)')
    args = ap.parse_args()
    if args.press:
        time.sleep(3)
        here = os.path.dirname(os.path.abspath(__file__))
        r = subprocess.run(['pwsh', '-NoProfile', '-File', os.path.join(here, 'phoenix_uia.ps1'),
                            '-Press', 'PLAY', '-ProcId', str(args.press)],
                           capture_output=True, text=True)
        print('PLAY: %s' % ' '.join(r.stdout.split()) or r.stderr, flush=True)
    deadline = time.time() + args.secs
    seen = set()
    hits = 0
    while time.time() < deadline:
        for pid, ppid, name in snapshot():
            if pid in seen:
                continue
            seen.add(pid)
            h = k32.OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, False, pid)
            if not h:
                print('  pid %-8d %-20s parent=%-8s (handle denied)' % (pid, name, ppid), flush=True)
                continue
            elevated, info = token_of(ctypes.c_void_p(h))
            k32.CloseHandle(ctypes.c_void_p(h))
            verdict = 'ELEVATED  <- UAC still in play' if elevated else 'as invoker  <- no UAC'
            print('  pid %-8d %-20s parent=%-8s %-30s (%s)' % (pid, name, ppid, verdict, info), flush=True)
            hits += 1
            if elevated:
                return 1
        time.sleep(0.2)
    print('\nsaw %d chain process(es); none elevated' % hits)
    return 0 if hits else 2


if __name__ == '__main__':
    sys.exit(main())
