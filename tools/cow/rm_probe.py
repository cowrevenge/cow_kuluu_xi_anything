"""Raw Restart Manager probe: print exactly what RmGetList returns at every step.

who_locks.py kept getting ERROR_MORE_DATA back from a fetch whose buffer was sized by the API's own
answer, which should not happen. Rather than guess at the calling convention, this walks the
documented sequence and prints the return code, pnProcInfoNeeded and pnProcInfo for every call,
trying the variations that could explain a refusal to fill the array:

  --argtypes     declare the prototypes (default) instead of letting ctypes pass arguments untyped
  --mode keep    pass pnProcInfoNeeded through from the sizing call
  --mode cap     declare the array capacity (elements) on the fetch
  --mode zero    reset both count DWORDs first, the shape of the MSDN sample loop
  --mode bytes   declare the capacity in BYTES (the ambiguity in the old docs)
  --mode twice   call the fetch, ignore the answer, call again in the same session
  --reboot-array N   pass an N-DWORD reboot-reasons array instead of one DWORD

  python tools/cow/rm_probe.py <path>
  python tools/cow/rm_probe.py <path> --sizes 1,2,16 --mode keep,cap,zero,bytes,twice --reboot-array 16
"""
import argparse
import ctypes
import ctypes.wintypes as w
import os
import sys

S_OK = 0
ERROR_MORE_DATA = 234
MAX_APP_NAME = 255
MAX_SERVICE_SHORT_NAME = 63
SLOTS = (1, 2, 4, 16, 64)


class RM_PROCESS_INFO(ctypes.Structure):
    _fields_ = [
        ('strAppName', w.WCHAR * (MAX_APP_NAME + 1)),
        ('strServiceShortName', w.WCHAR * (MAX_SERVICE_SHORT_NAME + 1)),
        ('ApplicationType', w.DWORD),
        ('ApplicationStatus', w.DWORD),
        ('TSSessionId', w.DWORD),
        ('Restartable', w.BOOL),
    ]


NAME = ctypes.WinDLL('rstrtmgr.dll')
ARRAY = ctypes.ARRAY


def declare_prototypes():
    """Give ctypes the real signatures; without these pointer arguments are passed untyped."""
    NAME.RmStartSession.argtypes = [ctypes.POINTER(w.DWORD), w.DWORD, ARRAY(w.WCHAR, 256)]
    NAME.RmStartSession.restype = ctypes.c_long
    NAME.RmRegisterResources.argtypes = [w.DWORD, w.UINT, ctypes.POINTER(w.LPWSTR),
                                         w.UINT, ctypes.c_void_p, w.UINT, ctypes.c_void_p]
    NAME.RmRegisterResources.restype = ctypes.c_long
    NAME.RmGetList.argtypes = [w.DWORD, ctypes.POINTER(w.UINT), ctypes.POINTER(w.UINT),
                               ctypes.POINTER(RM_PROCESS_INFO), ctypes.POINTER(w.DWORD)]
    NAME.RmGetList.restype = ctypes.c_long
    NAME.RmEndSession.argtypes = [w.DWORD]
    NAME.RmEndSession.restype = ctypes.c_long


def reboot_slot(n):
    """(pointer, getter) for pdwRebootReasons: one DWORD by default, an array on request."""
    if n > 1:
        arr = (w.DWORD * n)()
        return ctypes.cast(arr, ctypes.POINTER(w.DWORD)), (lambda: arr[0])
    single = w.DWORD(0)
    return ctypes.byref(single), (lambda: single.value)


def call(sess, buf, needed, processed, rptr, rget, tag):
    rc = NAME.RmGetList(sess, ctypes.byref(needed), ctypes.byref(processed), buf, rptr)
    print('  %-26s rc=%-4d needed=%-4d processed=%-4d reboot=0x%x slots=%s'
          % (tag, rc, needed.value, processed.value, rget(),
             'NULL' if buf is None else len(buf)))
    return rc


def one_session(path, slots, mode, reboot_n):
    """Open a fresh RM session, register path, and try one fetch with `slots` buffer slots."""
    sess = w.DWORD()
    key = ctypes.create_unicode_buffer(256)
    rc = NAME.RmStartSession(ctypes.byref(sess), 0, key)
    if rc != S_OK:
        print('  RmStartSession rc=%d (getlasterror=%d)' % (rc, ctypes.GetLastError()))
        return 1
    try:
        arr = (w.LPWSTR * 1)(path)
        rc = NAME.RmRegisterResources(sess, 1, arr, 0, None, 0, None)
        if rc != S_OK:
            print('  RmRegisterResources rc=%d' % rc)
            return 1

        needed, processed = w.DWORD(0), w.DWORD(0)
        rptr, rget = reboot_slot(reboot_n)
        rc = call(sess, None, needed, processed, rptr, rget, 'size')
        if rc not in (S_OK, ERROR_MORE_DATA):
            return 1
        if not needed.value:
            print('  -> nobody holds it')
            return 0
        buf = (RM_PROCESS_INFO * slots)()
        if mode in ('cap', 'bytes', 'twice'):
            needed = w.DWORD(slots * ctypes.sizeof(RM_PROCESS_INFO) if mode == 'bytes' else slots)
        elif mode == 'zero':
            needed = w.DWORD(0)
        processed = w.DWORD(0)
        rptr, rget = reboot_slot(reboot_n)
        if mode == 'twice':
            call(sess, buf, w.DWORD(slots), w.DWORD(0), rptr, rget, 'fetch-warmup')
            needed, processed = w.DWORD(slots), w.DWORD(0)
            rptr, rget = reboot_slot(reboot_n)
        rc = call(sess, buf, needed, processed, rptr, rget, 'fetch(slots=%d,%s,rq=%d)'
                  % (slots, mode, reboot_n))
        for i in range(processed.value):
            info = buf[i]
            print('    [%d] app=%r svc=%r type=%d status=0x%x session=%d restartable=%d'
                  % (i, info.strAppName, info.strServiceShortName, info.ApplicationType,
                     info.ApplicationStatus, info.TSSessionId, info.Restartable))
        return 0 if rc == S_OK and processed.value else 2
    finally:
        NAME.RmEndSession(sess)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('path')
    ap.add_argument('--sizes', default=','.join(str(s) for s in SLOTS), help='buffer slot counts')
    ap.add_argument('--mode', default='cap', help='keep | cap | zero | bytes | twice (comma list)')
    ap.add_argument('--reboot-array', type=int, default=1, help='DWORDs to pass for pdwRebootReasons')
    ap.add_argument('--no-argtypes', dest='argtypes', action='store_false',
                    help='do not declare prototypes (the way who_locks.py used to call RM)')
    args = ap.parse_args()

    path = os.path.abspath(args.path)
    print('probing %s (exists=%s, sizeof(RM_PROCESS_INFO)=%d, argtypes=%s)'
          % (path, os.path.isfile(path), ctypes.sizeof(RM_PROCESS_INFO), args.argtypes))
    if args.argtypes:
        declare_prototypes()

    modes = [m.strip() for m in args.mode.split(',') if m.strip()]
    best = 1
    for slots in [int(s) for s in args.sizes.split(',') if s.strip()]:
        for mode in modes:
            if one_session(path, slots, mode, max(1, args.reboot_array)) == 0:
                best = 0
    print('RM_PROBE verdict: %s'
          % ('a fetch filled the buffer' if best == 0 else 'NO call filled a buffer'))
    return best


if __name__ == '__main__':
    sys.exit(main())
