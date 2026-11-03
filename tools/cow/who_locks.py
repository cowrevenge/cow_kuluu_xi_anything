"""Who is holding a file open? (Windows, no admin needed.)

The game folder's FFXiMain.dll refuses a copy: 'being used by another process'. Before blaming the
game, ask Windows who has it. Two sources, because neither one is enough on its own:

  * Restart Manager (rstrtmgr.dll) names the owning application, but it is a *service*: RmSvc is
    Manual-start and depends on SessionEnv (Remote Desktop Configuration). With SessionEnv stopped
    RmStartSession/RmRegisterResources still succeed, the sizing RmGetList still reports a count,
    and the fetch then returns ERROR_MORE_DATA forever, whatever the buffer size - a silent
    "nobody". So we check the service state and say so instead of reporting an empty list.
  * a Toolhelp module scan of every process finds anything that is *loaded* - exactly the case that
    matters for a DLL - and needs no service at all.

  python tools/cow/who_locks.py [path]
  python tools/cow/who_locks.py --path C:\\somewhere\\file.dll --json
  python tools/cow/who_locks.py --no-modules        # Restart Manager only

Four traps this file has already taught us:
  * the Restart Manager library is rstrtmgr.dll - there is no rgmgr.dll to LoadLibrary;
  * the RM_PROCESS_INFO field list must be copied from the header. An earlier version dropped
    strServiceShortName and invented Process/Session/UniqueProcess/RebootReason, which printed
    ApplicationType and ApplicationStatus as if they were a pid: plausible-looking nonsense;
  * RmGetList wants a real lpdwRebootReasons;
  * every kernel32/rstrtmgr entry point needs argtypes AND a restype. CreateToolhelp32Snapshot
    returns a 64-bit HANDLE; left at ctypes' default c_int the handle is truncated and
    Process32FirstW fails, so running_processes() quietly returned [].
Proof that the answer is real, not just empty: python tools/cow/who_locks_selftest.py
"""
import argparse
import ctypes
import ctypes.wintypes as w
import json
import os
import sys

DEFAULT = r'C:\PhoenixXI\SquareEnix\FINAL FANTASY XI\FFXiMain.dll'
S_OK = 0
ERROR_MORE_DATA = 234
MAX_APP_NAME = 255
MAX_SERVICE_SHORT_NAME = 63
INVALID_FILE_ATTRIBUTES = 0xFFFFFFFF
INVALID_HANDLE_VALUE = ctypes.c_void_p(-1).value

TH32CS_SNAPPROCESS = 0x2
TH32CS_SNAPMODULE = 0x8
TH32CS_SNAPMODULE32 = 0x10

SC_MANAGER_CONNECT = 0x0001
SERVICE_QUERY_STATUS = 0x0004
SERVICE_STOPPED = 1
SERVICE_START_PENDING = 2
SERVICE_STOP_PENDING = 3
SERVICE_RUNNING = 4
SERVICE_CONTINUE_PENDING = 5
SERVICE_PAUSE_PENDING = 6
SERVICE_PAUSED = 7

APP_TYPE = {
    0: 'Unknown', 1: 'Application', 2: 'ServiceProvider', 3: 'SecurityApplication',
    4: 'SecurityServiceProvider', 5: 'WindowsInstaller', 6: 'CriticalUpdate',
    7: 'WindowsApplication', 8: 'Hibernation', 9: 'UnknownLongRunningApplication',
}
SERVICE_STATE = {SERVICE_STOPPED: 'Stopped', SERVICE_START_PENDING: 'StartPending',
                 SERVICE_STOP_PENDING: 'StopPending', SERVICE_RUNNING: 'Running',
                 SERVICE_CONTINUE_PENDING: 'ContinuePending', SERVICE_PAUSE_PENDING: 'PausePending',
                 SERVICE_PAUSED: 'Paused'}


class RM_PROCESS_INFO(ctypes.Structure):
    """rstrtmgr.h RM_PROCESS_INFO, in declaration order and nothing else."""
    _fields_ = [
        ('strAppName', w.WCHAR * (MAX_APP_NAME + 1)),
        ('strServiceShortName', w.WCHAR * (MAX_SERVICE_SHORT_NAME + 1)),
        ('ApplicationType', w.DWORD),
        ('ApplicationStatus', w.DWORD),
        ('TSSessionId', w.DWORD),
        ('Restartable', w.BOOL),
    ]


class PROCESSENTRY32W(ctypes.Structure):
    _fields_ = [
        ('dwSize', w.DWORD),
        ('cntUsage', w.DWORD),
        ('th32ProcessID', w.DWORD),
        ('th32DefaultHeapID', ctypes.c_size_t),
        ('th32ModuleID', w.DWORD),
        ('cntThreads', w.DWORD),
        ('th32ParentProcessID', w.DWORD),
        ('pcPriClassBase', ctypes.c_long),
        ('dwFlags', w.DWORD),
        ('szExeFile', w.WCHAR * 260),
    ]


class MODULEENTRY32W(ctypes.Structure):
    _fields_ = [
        ('dwSize', w.DWORD),
        ('th32ModuleID', w.DWORD),
        ('th32ProcessID', w.DWORD),
        ('glbcntUsage', w.DWORD),
        ('proccntUsage', w.DWORD),
        ('modBaseAddr', ctypes.c_void_p),
        ('modBaseSize', w.DWORD),
        ('hModule', w.HANDLE),
        ('szModule', w.WCHAR * 256),
        ('szExePath', w.WCHAR * 260),
    ]


class SERVICE_STATUS_EX(ctypes.Structure):
    _fields_ = [
        ('dwServiceType', w.DWORD),
        ('dwCurrentState', w.DWORD),
        ('dwControlsAccepted', w.DWORD),
        ('dwWin32ExitCode', w.DWORD),
        ('dwServiceSpecificExitCode', w.DWORD),
        ('dwCheckPoint', w.DWORD),
        ('dwWaitHint', w.DWORD),
        ('dwProcessId', w.DWORD),
        ('dwServiceFlags', w.DWORD),
    ]


K32 = ctypes.windll.kernel32
K32.CreateToolhelp32Snapshot.argtypes = [w.DWORD, w.DWORD]
K32.CreateToolhelp32Snapshot.restype = w.HANDLE
K32.CloseHandle.argtypes = [w.HANDLE]
K32.CloseHandle.restype = w.BOOL
K32.Process32FirstW.argtypes = [w.HANDLE, ctypes.POINTER(PROCESSENTRY32W)]
K32.Process32FirstW.restype = w.BOOL
K32.Process32NextW.argtypes = [w.HANDLE, ctypes.POINTER(PROCESSENTRY32W)]
K32.Process32NextW.restype = w.BOOL
K32.Module32FirstW.argtypes = [w.HANDLE, ctypes.POINTER(MODULEENTRY32W)]
K32.Module32FirstW.restype = w.BOOL
K32.Module32NextW.argtypes = [w.HANDLE, ctypes.POINTER(MODULEENTRY32W)]
K32.Module32NextW.restype = w.BOOL
K32.GetFileAttributesW.argtypes = [w.LPCWSTR]
K32.GetFileAttributesW.restype = w.DWORD

_RM = None


def rm_dll():
    """Load rstrtmgr.dll once and give it real prototypes, or None."""
    global _RM
    if _RM is None:
        try:
            lib = ctypes.windll.LoadLibrary('rstrtmgr.dll')
        except OSError:
            return None
        ARRAY = ctypes.ARRAY
        lib.RmStartSession.argtypes = [ctypes.POINTER(w.DWORD), w.DWORD, ARRAY(w.WCHAR, 256)]
        lib.RmStartSession.restype = ctypes.c_long
        lib.RmRegisterResources.argtypes = [w.DWORD, w.UINT, ctypes.POINTER(w.LPWSTR),
                                            w.UINT, ctypes.c_void_p, w.UINT, ctypes.c_void_p]
        lib.RmRegisterResources.restype = ctypes.c_long
        lib.RmGetList.argtypes = [w.DWORD, ctypes.POINTER(w.UINT), ctypes.POINTER(w.UINT),
                                  ctypes.POINTER(RM_PROCESS_INFO), ctypes.POINTER(w.DWORD)]
        lib.RmGetList.restype = ctypes.c_long
        lib.RmEndSession.argtypes = [w.DWORD]
        lib.RmEndSession.restype = ctypes.c_long
        _RM = lib
    return _RM


def running_processes():
    """[(pid, exe_name)] via CreateToolhelp32Snapshot; [] on any failure."""
    snap = K32.CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0)
    if not snap or snap == INVALID_HANDLE_VALUE:
        return []
    out = []
    try:
        entry = PROCESSENTRY32W()
        entry.dwSize = ctypes.sizeof(PROCESSENTRY32W)
        ok = K32.Process32FirstW(snap, ctypes.byref(entry))
        while ok:
            out.append((int(entry.th32ProcessID), entry.szExeFile))
            entry.dwSize = ctypes.sizeof(PROCESSENTRY32W)
            ok = K32.Process32NextW(snap, ctypes.byref(entry))
    finally:
        K32.CloseHandle(snap)
    return out


def service_state(name):
    """QUERY_STATUS_EX for a service without shelling out; None when it cannot be read."""
    adv = ctypes.windll.advapi32
    adv.OpenSCManagerW.argtypes = [w.LPCWSTR, w.LPCWSTR, w.DWORD]
    adv.OpenSCManagerW.restype = w.HANDLE
    adv.OpenServiceW.argtypes = [w.HANDLE, w.LPCWSTR, w.DWORD]
    adv.OpenServiceW.restype = w.HANDLE
    adv.QueryServiceStatusEx.argtypes = [w.HANDLE, w.DWORD, ctypes.POINTER(SERVICE_STATUS_EX),
                                         w.DWORD, ctypes.POINTER(w.DWORD)]
    adv.QueryServiceStatusEx.restype = w.BOOL
    adv.CloseServiceHandle.argtypes = [w.HANDLE]
    adv.CloseServiceHandle.restype = w.BOOL
    sc = adv.OpenSCManagerW(None, None, SC_MANAGER_CONNECT)
    if not sc:
        return None
    try:
        svc = adv.OpenServiceW(sc, name, SERVICE_QUERY_STATUS)
        if not svc:
            return None
        try:
            st = SERVICE_STATUS_EX()
            need = w.DWORD(0)
            if not adv.QueryServiceStatusEx(svc, 0, ctypes.byref(st), ctypes.sizeof(st),
                                            ctypes.byref(need)):
                return None
            return {'name': name, 'state': SERVICE_STATE.get(int(st.dwCurrentState),
                                                             '?%d' % st.dwCurrentState),
                    'pid': int(st.dwProcessId)}
        finally:
            adv.CloseServiceHandle(svc)
    finally:
        adv.CloseServiceHandle(sc)


def rm_holders(path):
    """(error, [holder dicts], reported_count) from the Restart Manager."""
    rm = rm_dll()
    if rm is None:
        return 'cannot load rstrtmgr.dll', [], 0
    sess = w.DWORD()
    key = ctypes.create_unicode_buffer(256)
    rc = rm.RmStartSession(ctypes.byref(sess), 0, key)
    if rc != S_OK:
        return 'RmStartSession failed (%d)' % rc, [], 0
    try:
        arr = (w.LPWSTR * 1)(path)
        rc = rm.RmRegisterResources(sess, 1, arr, 0, None, 0, None)
        if rc != S_OK:
            return 'RmRegisterResources failed (%d)' % rc, [], 0

        buf, processed, reboot = None, w.DWORD(0), w.DWORD(0)
        needed, reported = w.DWORD(0), 0
        for attempt in range(8):
            needed = w.DWORD(0)
            processed = w.DWORD(0)
            rc = rm.RmGetList(sess, ctypes.byref(needed), ctypes.byref(processed), buf,
                              ctypes.byref(reboot))
            reported = max(reported, int(needed.value))
            if rc == S_OK:
                break
            if rc != ERROR_MORE_DATA:
                return 'RmGetList failed (%d) on attempt %d' % (rc, attempt), [], reported
            want = max(int(needed.value), 1)
            if buf is not None and want <= len(buf):
                return ('RmGetList returned ERROR_MORE_DATA for %d slot(s) even though the buffer '
                        'is big enough' % want), [], reported
            buf = (RM_PROCESS_INFO * want)()
        else:
            return 'RmGetList never stopped asking for more data', [], reported

        procs = running_processes()
        out = []
        for i in range(min(int(processed.value), len(buf) if buf else 0)):
            info = buf[i]
            app = info.strAppName or ''
            stem = os.path.splitext(os.path.basename(app))[0].lower()
            pids = sorted(pid for pid, name in procs
                          if stem and os.path.splitext(name)[0].lower() == stem)
            out.append({
                'source': 'rm',
                'pids': pids,
                'app_name': app,
                'service_short_name': info.strServiceShortName or '',
                'application_type': APP_TYPE.get(int(info.ApplicationType),
                                                 '?%d' % info.ApplicationType),
                'application_status': int(info.ApplicationStatus),
                'ts_session_id': int(info.TSSessionId),
                'restartable': bool(info.Restartable),
            })
        return None, out, reported
    finally:
        rm.RmEndSession(sess)


def module_holders(path):
    """Processes that have `path` loaded as a module. The case that locks a DLL."""
    target = os.path.normcase(os.path.abspath(path))
    out = []
    for pid, name in running_processes():
        snap = K32.CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, pid)
        if not snap or snap == INVALID_HANDLE_VALUE:
            continue
        try:
            entry = MODULEENTRY32W()
            entry.dwSize = ctypes.sizeof(MODULEENTRY32W)
            ok = K32.Module32FirstW(snap, ctypes.byref(entry))
            while ok:
                if os.path.normcase(entry.szExePath or '') == target:
                    out.append({'source': 'module', 'pids': [pid], 'exe_name': name,
                                'module': entry.szModule, 'path': entry.szExePath,
                                'base': '0x%x' % (entry.modBaseAddr or 0),
                                'size': int(entry.modBaseSize)})
                    break
                entry.dwSize = ctypes.sizeof(MODULEENTRY32W)
                ok = K32.Module32NextW(snap, ctypes.byref(entry))
        finally:
            K32.CloseHandle(snap)
    return out


def scan(path, use_modules=True):
    """{'path','error','holders','diagnostics'} - the whole answer, both sources merged."""
    path = os.path.abspath(path)
    diag = []
    if not os.path.isfile(path):
        return {'path': path, 'error': 'no such file', 'holders': [], 'diagnostics': diag}
    if K32.GetFileAttributesW(path) == INVALID_FILE_ATTRIBUTES:
        return {'path': path, 'error': 'GetFileAttributesW failed', 'holders': [], 'diagnostics': diag}

    err, holders, reported = rm_holders(path)
    if err:
        diag.append('restart manager: %s (reported %d holder(s))' % (err, reported))
        sess = service_state('SessionEnv')
        rmsvc = service_state('RmSvc')
        diag.append('services: RmSvc=%s SessionEnv=%s - Restart Manager cannot enumerate while '
                    'SessionEnv is not running' % ((rmsvc or {}).get('state', '?'),
                                                   (sess or {}).get('state', '?')))
    else:
        diag.append('restart manager: %d holder(s) enumerated' % len(holders))

    if use_modules:
        mods = module_holders(path)
        seen = {tuple(h['pids']) for h in holders}
        added = [m for m in mods if tuple(m['pids']) not in seen]
        holders.extend(added)
        diag.append('module scan: %d process(es) have it loaded (%d new)'
                    % (len(mods), len(added)))
    return {'path': path, 'error': None, 'holders': holders, 'diagnostics': diag}


def main():
    ap = argparse.ArgumentParser(description='name the processes holding a file open')
    ap.add_argument('path_pos', nargs='?', help='file to check (positional form of --path)')
    ap.add_argument('--path', dest='path', help='file to check (default: the game DLL)')
    ap.add_argument('--json', action='store_true', help='machine-readable output')
    ap.add_argument('--no-modules', dest='modules', action='store_false',
                    help='Restart Manager only, skip the Toolhelp module scan')
    args = ap.parse_args()

    result = scan(args.path or args.path_pos or DEFAULT, use_modules=args.modules)
    if args.json:
        print(json.dumps(result, indent=1))
        return 1 if result['error'] else 0

    print('%s -> %d holder(s)' % (result['path'], len(result['holders'])))
    if result['error']:
        print('   %s' % result['error'])
        return 1
    for h in result['holders']:
        if h['source'] == 'rm':
            who = h['app_name'] or h['service_short_name'] or '(unnamed)'
            print('   rm     pid=%-12s %-38s type=%-22s status=0x%08x session=%d restartable=%s'
                  % (','.join(str(p) for p in h['pids']) or '?', who[:38], h['application_type'],
                     h['application_status'], h['ts_session_id'], h['restartable']))
        else:
            print('   module pid=%-12s %-38s base=%s size=%d'
                  % (h['pids'][0], (h['exe_name'] or '')[:38], h['base'], h['size']))
    for line in result['diagnostics']:
        print('   . %s' % line)
    return 0


if __name__ == '__main__':
    sys.exit(main())
