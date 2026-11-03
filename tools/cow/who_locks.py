"""Who is holding a file open? (Restart Manager, no admin needed.)

The game folder's FFXiMain.dll refuses a copy: 'being used by another process'. Before blaming the
game, ask Windows who has it: RmGetList names the processes holding the handle, so we can decide
between 'the client is still running' and 'one of our watchers leaked a handle'.

  python tools/cow/who_locks.py [path]
"""
import ctypes
import ctypes.wintypes as w
import sys

DEFAULT = r'C:\PhoenixXI\SquareEnix\FINAL FANTASY XI\FFXiMain.dll'


class RM_PROCESS_INFO(ctypes.Structure):
    _fields_ = [('strAppName', w.WCHAR * 256),
                ('Process', w.DWORD * 2),
                ('Session', w.DWORD),
                ('UniqueProcess', w.DWORD),
                ('ProcessStatus', w.DWORD),
                ('RebootReason', w.DWORD)]


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else DEFAULT
    rm = ctypes.windll.LoadLibrary('rstrtmgr.dll')
    sess = w.DWORD()
    key = ctypes.create_unicode_buffer(256)
    if rm.RmStartSession(ctypes.byref(sess), 0, ctypes.byref(key)) != 0:
        raise SystemExit('RmStartSession failed')
    try:
        arr = (w.LPWSTR * 1)(path)
        if rm.RmRegisterResources(sess, 1, arr, 0, None, 0, None) != 0:
            raise SystemExit('RmRegisterResources failed')
        needed, processed = w.DWORD(0), w.DWORD(0)
        rm.RmGetList(sess, ctypes.byref(needed), ctypes.byref(processed), None, None)
        print('%s -> %d holder(s) reported' % (path, needed.value))
        if not needed.value:
            return
        buf = (RM_PROCESS_INFO * needed.value)()
        if rm.RmGetList(sess, ctypes.byref(needed), ctypes.byref(processed), buf, None) != 0:
            raise SystemExit('RmGetList failed')
        for i in range(processed.value):
            print('   pid %-8d %-40s status=%s' % (buf[i].Process[0], buf[i].strAppName,
                                                   hex(buf[i].ProcessStatus)))
    finally:
        rm.RmEndSession(sess)


if __name__ == '__main__':
    main()
