"""Add step markers around the new gamecore install in host/ffximain.c (debug aid)."""
P = 'host/ffximain.c'
s = open(P, encoding='utf-8', newline='').read()
if 'gamecore step' in s:
    print('markers already present')
else:
    pairs = [
        ('gamecore_slots_init();', 'A slots'),
        ('gamecore_files_init();', 'B files'),
        ('gamecore_presence_init();', 'C presence'),
        ('ole_register_class(CLSID_GameMain, rt_image_base);', 'E register'),
        ('gamecore_init();', 'F gamecore_init'),
    ]
    for call, tag in pairs:
        if s.count(call) == 1:
            s = s.replace(call, 'rt_log("[recomp] gamecore step %s\\n");\n    ' % tag + call, 1)
        else:
            print('WARN %s appears %d times' % (call, s.count(call)))
    s = s.replace('    {\n        char game[MAX_PATH]',
                  '    rt_log("[recomp] gamecore step D root\\n");\n    {\n        char game[MAX_PATH]', 1)
    open(P, 'w', encoding='utf-8', newline='').write(s)
    print('markers added')
for line in s.splitlines():
    if 'gamecore' in line:
        print('  |', line.strip())
