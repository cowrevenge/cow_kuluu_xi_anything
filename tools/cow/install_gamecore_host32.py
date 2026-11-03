"""Patch the 32-bit stand-in so it installs the gamecore COM services the way host64 does.

The 64-bit hosts call gamecore_slots/files/presence_init, gamecore_set_root, ole_register_class
and gamecore_init before the game runs (host64.c:1437-1459). The 32-bit target links those same
files (tools/build.py HOST32_SERVICE) but never called them, so the guest's CoCreateInstance for
the ICoreCom object came back with no object and its failure path jumped into code discovery had
never registered. This adds the missing host-side calls to host/ffximain.c.

  python tools/cow/install_gamecore_host32.py           # show the diff plan
  python tools/cow/install_gamecore_host32.py --apply
"""
import sys

PATH = 'host/ffximain.c'

INCLUDES_ANCHOR = '#include "loader.h"'
INCLUDES_NEW = '''#include "loader.h"

#include "gamecore.h"
#include "gamecore_config.h"
#include "k32.h" /* ole_register_class */
#include "vfs.h"

/* GameMain {1027DC46-750D-4B1F-8834-1D25B8BEBAB8}: the class the guest creates out of FFXiMain.
 * host64 registers the same one (host64.c); the stand-in must too, or our ole32 answers
 * CoCreateInstance with REGDB_E_CLASSNOTREG and the guest takes its failure path. */
static const uint8_t CLSID_GameMain[16] = { 0x46, 0xDC, 0x27, 0x10, 0x0D, 0x75, 0x1F, 0x4B,
                                            0x88, 0x34, 0x1D, 0x25, 0xB8, 0xBE, 0xBA, 0xB8 };'''

CALL_ANCHOR = '    rt_log("[recomp] FFXiMain translation ready\\n");'
CALL_NEW = '''    /* The services the guest expects from the launcher's gamecore: the ICoreCom object and its
     * common function table. Same order as host64.c: register the slot implementations, point the
     * core at the viewer folder, make the guest's own classes resolvable, then build the object.
     * Without this the guest's first COM call returns E_FAIL and its error path jumps into code
     * discovery never registered (the 102DBB59 / 102EEC20 family of crashes). */
    gamecore_slots_init();
    gamecore_files_init();
    gamecore_presence_init();
    {
        char game[MAX_PATH], viewer[MAX_PATH * 2], full[MAX_PATH * 2];
        strcpy_s(game, sizeof game, path);
        char* slash = strrchr(game, '\\\\');
        if (slash)
            *slash = 0;
        snprintf(viewer, sizeof viewer, "%s\\\\..\\\\PlayOnlineViewer", game);
        if (vfs_full_path(viewer, full, sizeof full))
            gamecore_set_root(full);
    }
    ole_register_class(CLSID_GameMain, rt_image_base);
    gamecore_init();

    rt_log("[recomp] FFXiMain translation ready\\n");'''


def main():
    apply = '--apply' in sys.argv
    raw = open(PATH, encoding='utf-8', newline='').read()
    if 'gamecore_init();' in raw:
        print('already patched')
        return 0
    for anchor in (INCLUDES_ANCHOR, CALL_ANCHOR):
        if raw.count(anchor) != 1:
            print('anchor not unique (%d): %r' % (raw.count(anchor), anchor[:60]))
            return 1
    out = raw.replace(INCLUDES_ANCHOR, INCLUDES_NEW, 1).replace(CALL_ANCHOR, CALL_NEW, 1)
    print('would add %d bytes' % (len(out) - len(raw)))
    for line in out.splitlines()[12:26]:
        print('   |', line)
    if apply:
        open(PATH, 'w', encoding='utf-8', newline='').write(out)
        print('patched', PATH)
    return 0


if __name__ == '__main__':
    sys.exit(main())
