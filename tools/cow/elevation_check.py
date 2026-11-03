"""Definitive elevation check for the launcher chain, without admin.

OpenProcess(PROCESS_QUERY_INFORMATION) is denied on a higher-integrity process, so a plain 'denied'
is ambiguous between 'elevated' and 'already exited'. This first asks the process list whether the
pid is even alive (and who its parent is), then opens it with
PROCESS_QUERY_LIMITED_INFORMATION - which succeeds across integrity levels - and reads
TokenElevation/TokenElevationType so the answer is the token itself, not our rights.

  python tools/cow/elevation_check.py            # launcher chain by name
  python tools/cow/elevation_check.py 1234 5678  # specific pids
"""
import ctypes
import ctypes.wintypes as w
import subprocess
import sys

PROCESS_QUERY_LIMITED_INFORMATION = 0x1000
TOKEN_QUERY = 0x0008
TokenElevation = 20
TokenElevationType = 18
NAMES = ['phoenix-launcher', 'Ashita-cli', 'phoenix-loader', 'xiloader', 'pol', 'polcfg', 'FFxiMain']

k32 = ctypes.windll.kernel32
adv = ctypes.windll.advapi32
k32.OpenProcess.restype = w.HANDLE
k32.OpenProcess.argtypes = [w.DWORD, w.BOOL, w.DWORD]
adv.OpenProcessToken.argtypes = [w.HANDLE, w.DWORD, ctypes.POINTER(w.HANDLE)]
adv.GetTokenInformation.argtypes = [w.HANDLE, ctypes.c_int, ctypes.c_void_p, w.DWORD, ctypes.POINTER(w.DWORD)]


class ELEV(ctypes.Structure):
    _fields_ = [('TokenIsElevated', w.DWORD)]


class ELEVTYPE(ctypes.Structure):
    _fields_ = [('ElevationType', w.DWORD)]


def live_rows(pids=None):
    if pids:
        flt = 'ProcessId=%s' % ','.join(str(p) for p in pids)
    else:
        flt = ' or '.join("Name='%s.exe'" % n for n in NAMES)
    q = 'Get-CimInstance Win32_Process -Filter "%s" | ForEach-Object { "{0}|{1}|{2}|{3}" -f $_.ProcessId,$.ParentProcessId.replace($_,$.ProcessId),$_.Name,$_.ExecutablePath }' % flt
    # keep it simple and robust: ask for the fields we want directly
    q = ('Get-CimInstance Win32_Process -Filter "%s" | ForEach-Object { "$($_.ProcessId)`t$($_.ParentProcessId)`t$($_.Name)`t$($_.ExecutablePath)" }' % flt)
    r = subprocess.run(['pwsh', '-NoProfile', '-Command', q], capture_output=True, text=True)
    rows = []
    for line in r.stdout.splitlines():
        parts = line.split('\t')
        if len(parts) >= 3:
            try:
                rows.append((int(parts[0]), int(parts[1]), parts[2], parts[3] if len(parts) > 3 else ''))
            except ValueError:
                pass
    return rows


def token_of(h):
    tok = w.HANDLE()
    if not adv.OpenProcessToken(h, TOKEN_QUERY, ctypes.byref(tok)):
        return None, 'OpenProcessToken err %d' % ctypes.GetLastError()
    el, sz = ELEV(), w.DWORD(ctypes.sizeof(ELEV))
    if not adv.GetTokenInformation(tok, TokenElevation, ctypes.byref(el), sz, ctypes.byref(sz)):
        return None, 'TokenElevation err %d' % ctypes.GetLastError()
    et, sz2 = ELEVTYPE(), w.DWORD(ctypes.sizeof(ELEVTYPE))
    adv.GetTokenInformation(tok, TokenElevationType, ctypes.byref(et), sz2, ctypes.byref(sz2))
    k32.CloseHandle(tok)
    types = {1: 'Default', 2: 'Split', 3: 'Full'}
    return bool(el.TokenIsElevated), types.get(et.ElevationType, str(et.ElevationType))


def main():
    pids = [int(a) for a in sys.argv[1:]] or None
    rows = live_rows(pids)
    if not rows:
        print('nothing from the launcher chain is running')
        return 0
    bad = 0
    for pid, ppid, name, path in rows:
        h = k32.OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, False, pid)
        if not h:
            print('  pid %-8d %-18s parent=%-8s handle denied (%d)' % (pid, name, ppid, ctypes.GetLastError()))
            continue
        elevated, info = token_of(w.HANDLE(h))
        if h:
            k32.CloseHandle(w.HANDLE(h))
        if elevated is None:
            print('  pid %-8d %-18s parent=%-8s token: %s' % (pid, name, ppid, info))
            continue
        print('  pid %-8d %-18s parent=%-8s %s  (%s)  %s'
              % (pid, name, ppid, 'ELEVATED' if elevated else 'as invoker', info, path or ''))
        if elevated:
            bad += 1
    print('\nelevated in the chain: %d' % bad)
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
