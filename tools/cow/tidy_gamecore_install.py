"""Put the gamecore install in the right place and make it one tidy comment.

host64 installs the services before the images run (host64.c:1437-1459); the first cut of the
stand-in patch bolted them on after the game's DllMain, and the two comment blocks ended up
stacked. rt_image_base is only known once the retail image is mapped, so the block belongs between
rt_load_image() and the call to the game's DllMain - which is where this moves it.

  python tools/cow/tidy_gamecore_install.py            # show
  python tools/cow/tidy_gamecore_install.py --apply
"""
import re
import sys

P = 'host/ffximain.c'
s = open(P, encoding='utf-8', newline='').read()
nl = '\r\n' if '\r\n' in s else '\n'
t = s.replace('\r\n', '\n')

start = t.find('    /* The services the guest expects from the launcher')
if start < 0:
    print('block not found')
    sys.exit(1)
end = t.find('    rt_log("[recomp] FFXiMain translation ready', start)
if end < 0:
    print('end not found')
    sys.exit(1)
block = t[start:end]
# the block we are moving: everything from the first comment to the gamecore_init call
m = re.search(r'gamecore_init\(\);\n\n?', block)
block = block[:m.end()]

rest = t[:start] + t[end:]
anchor = '    /* The game\'s CRT entry (_DllMainCRTStartup), called like the loader would. */'
if rest.count(anchor) != 1:
    print('anchor count %d' % rest.count(anchor))
    sys.exit(1)

new_block = (
    '    /* The services the guest expects from the launcher\'s gamecore before its own DllMain\n'
    '     * runs: the ICoreCom object and the common function table, in host64\'s order\n'
    '     * (host64.c:1437-1459). gwin_init first - gamecore_init allocates the object and the\n'
    '     * 1560-slot table from the guest heap, and on this flat target nothing has reserved\n'
    '     * those pages until then (plat_commit needs MEM_RESERVE, see plat_win.c). Without this\n'
    '     * the guest\'s first COM call comes back with no object and its failure path jumps into\n'
    '     * code discovery never registered. */\n'
    '    gwin_init();\n'
    '    gamecore_slots_init();\n'
    '    gamecore_files_init();\n'
    '    gamecore_presence_init();\n'
    '    {\n'
    '        char game[MAX_PATH], viewer[MAX_PATH * 2], full[MAX_PATH * 2];\n'
    '        strcpy_s(game, sizeof game, path);\n'
    '        char* slash = strrchr(game, \'\\\\\');\n'
    '        if (slash)\n'
    '            *slash = 0;\n'
    '        snprintf(viewer, sizeof viewer, "%s\\\\..\\\\PlayOnlineViewer", game);\n'
    '        if (vfs_full_path(viewer, full, sizeof full))\n'
    '            gamecore_set_root(full);\n'
    '    }\n'
    '    ole_register_class(CLSID_GameMain, rt_image_base);\n'
    '    gamecore_init();\n\n')

out = rest.replace(anchor, new_block + anchor, 1)
print('--- new region ---')
i = out.find('    /* The services the guest expects')
print(out[i:i + 1400])
if '--apply' in sys.argv:
    open(P, 'w', encoding='utf-8', newline='').write(out.replace('\n', nl) if nl == '\r\n' else out)
    print('patched %s' % P)
