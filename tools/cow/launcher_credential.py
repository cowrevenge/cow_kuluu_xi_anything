"""The launcher's own stored credential, for the one download that needs it.

gamefiles.phoenix-xi.com (and ashita./eradats.phoenix-xi.com) answer 401 to anonymous requests. The
Phoenix launcher already holds a credential for this user in
%APPDATA%\\com.phoenixxi.launcher\\session.json -> accounts[0].token, stored as a DPAPI blob (its
header carries the CryptProtectData provider GUID d08c9ddf-0115-11d1-8c7a-00c04fc297eb), so
CryptUnprotectData as the same user gives it back - no admin, and nothing here prints the value:
callers get the bytes and are expected to use them for a single request.

  from tools.cow.launcher_credential import auth_headers, locate
  requests-style:  headers = auth_headers()
"""
import ctypes
import ctypes.wintypes as wt
import json
import os

UA = 'PhoenixXI-Launcher/0.0.118'
DIRS = [os.path.join(os.environ[k], 'com.phoenixxi.launcher') for k in ('LOCALAPPDATA', 'APPDATA')]


def locate(name):
    """The launcher keeps some state in Local and some in Roaming; find it either way."""
    for d in DIRS:
        p = os.path.join(d, name)
        if os.path.isfile(p):
            return p
    raise SystemExit('%s not found under %s' % (name, ' or '.join(DIRS)))


class DATA_BLOB(ctypes.Structure):
    _fields_ = [('cbData', wt.DWORD), ('pbData', ctypes.POINTER(ctypes.c_char))]


def dpapi_unprotect(blob):
    """CryptUnprotectData on the current user's own blob - no elevation, nothing printed."""
    ctypes.windll.kernel32.LocalFree.restype = None
    ctypes.windll.kernel32.LocalFree.argtypes = [ctypes.c_void_p]
    src = DATA_BLOB(len(blob), ctypes.create_string_buffer(blob, len(blob)))
    dst = DATA_BLOB()
    crypt32 = ctypes.windll.crypt32
    crypt32.CryptUnprotectData.argtypes = [ctypes.POINTER(DATA_BLOB), ctypes.c_void_p, ctypes.c_void_p,
                                           ctypes.c_void_p, ctypes.c_void_p, wt.DWORD, ctypes.POINTER(DATA_BLOB)]
    crypt32.CryptUnprotectData.restype = wt.BOOL
    if not crypt32.CryptUnprotectData(ctypes.byref(src), None, None, None, None, 0, ctypes.byref(dst)):
        raise OSError('CryptUnprotectData failed: %d' % ctypes.GetLastError())
    out = ctypes.string_at(dst.pbData, dst.cbData)
    ctypes.windll.kernel32.LocalFree(dst.pbData)
    return out


def token_and_device():
    """The stored token (str) and device id (str). Lengths only ever reach the log."""
    s = json.load(open(locate('session.json'), encoding='utf-8'))
    device = s.get('device_id', '') or ''
    acc = (s.get('accounts') or [{}])[0]
    raw = bytes(acc.get('token') or [])
    if not raw:
        raise SystemExit('session.json has no accounts[0].token')
    clear = dpapi_unprotect(raw)
    for enc in ('utf-8', 'utf-16-le'):
        try:
            t = clear.decode(enc).strip('\x00').strip()
            if t:
                return t, device
        except Exception:
            continue
    raise SystemExit('stored credential did not decode')


def auth_headers(extra=None, quiet=True):
    """Headers the CDN accepts: the launcher's UA, its device id and the bearer token."""
    t, device = token_and_device()
    h = {'User-Agent': UA, 'Accept': '*/*', 'Authorization': 'Bearer ' + t}
    if device:
        h['X-Phoenix-Device-Id'] = device
    if not quiet:
        print('using the launcher credential (token len %d, device len %d, neither printed)'
              % (len(t), len(device)))
    h.update(extra or {})
    return h


if __name__ == '__main__':
    t, d = token_and_device()
    print('stored credential unlocked: token len %d, device_id len %d (values not printed)' % (len(t), len(d)))
