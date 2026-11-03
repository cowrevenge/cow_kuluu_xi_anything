/* The stand-in FFXiMain.dll: exports the four COM server entry points and runs the game as its
 * translation. On first use it maps the retail DLL (loader.c), runs the game's own CRT
 * DllMain(PROCESS_ATTACH) through the bridge, then forwards each export to the retail export's
 * address, whose patched entry leads to the translation.
 *
 * Where the retail DLL is: %FFXI_RECOMP_RETAIL% if set, else FFXiMain.retail.dll next to this DLL.
 */
#include <windows.h>

#include <stdio.h>
#include <string.h>

#include "bridge.h"
#include "loader.h"

#include "gamecore.h"
#include "gamecore_config.h"
#include "gwin.h"
#include "k32.h" /* ole_register_class */
#include "vfs.h"

/* GameMain {1027DC46-750D-4B1F-8834-1D25B8BEBAB8}: the class the guest creates out of FFXiMain.
 * host64 registers the same one (host64.c); the stand-in must too, or our ole32 answers
 * CoCreateInstance with REGDB_E_CLASSNOTREG and the guest takes its failure path. */
static const uint8_t CLSID_GameMain[16] = { 0x46, 0xDC, 0x27, 0x10, 0x0D, 0x75, 0x1F, 0x4B,
                                            0x88, 0x34, 0x1D, 0x25, 0xB8, 0xBE, 0xBA, 0xB8 };

static HMODULE g_self;
static HMODULE g_game;
static INIT_ONCE g_once = INIT_ONCE_STATIC_INIT;
static uintptr_t g_self_lo, g_self_hi;

/* --- diagnostics: under the retail launcher there is no console ------------------------------------------ */

static void open_log(void)
{
    char path[MAX_PATH];
    GetModuleFileNameA(g_self, path, MAX_PATH);
    char* slash = strrchr(path, '\\');
    strcpy_s(slash ? slash + 1 : path, MAX_PATH - (slash ? (slash + 1 - path) : 0), "FFXiMain.recomp.log");
    FILE* f = fopen(path, "w");
    if (!f)
    {
        GetTempPathA(MAX_PATH, path);
        strcat_s(path, MAX_PATH, "FFXiMain.recomp.log");
        f = fopen(path, "w");
    }
    rt_set_log(f);
    /* The boundary trace goes next to the log: FFXiMain.trace.txt, FFXiMain.seq.txt. */
    char base[MAX_PATH];
    strcpy_s(base, MAX_PATH, path);
    char* dot = strstr(base, ".recomp.log");
    if (dot)
    {
        *dot = 0;
        bridge_trace_open(base);
    }
    SYSTEMTIME t;
    GetLocalTime(&t);
    rt_log("[recomp] %04d-%02d-%02d %02d:%02d:%02d pid %lu, log %s\n", t.wYear, t.wMonth, t.wDay, t.wHour, t.wMinute,
        t.wSecond, GetCurrentProcessId(), path);
}

static void fatal_box(uint32_t addr, const char* what)
{
    bridge_trace_dump();
    if (GetEnvironmentVariableA("FFXI_RECOMP_NO_DIALOG", NULL, 0))
        return; /* automated runs (tests/boot.exe) */
    char msg[512];
    sprintf_s(msg, sizeof msg, "The recompiled FFXiMain stopped at guest address %08X:\n\n%s\n\nDetails are in FFXiMain.recomp.log.",
        addr, what);
    MessageBoxA(NULL, msg, "FFXIRecompile", MB_OK | MB_ICONERROR);
}

/* Which translated function a host address in this DLL belongs to: the nearest function start
 * below it, from rt_table's host pointers. */
static uint32_t guest_function_at(uintptr_t host)
{
    uintptr_t best = 0;
    uint32_t guest = 0;
    for (unsigned i = 0; i < rt_table_count; ++i)
    {
        uintptr_t h = (uintptr_t)rt_table[i].fn;
        if (h <= host && h > best)
        {
            best = h;
            guest = rt_table[i].addr;
        }
    }
    return guest;
}

/* A fault inside translated code is always a bug (translated code has no SEH of its own). */
static LONG CALLBACK crash_handler(EXCEPTION_POINTERS* e)
{
    DWORD code = e->ExceptionRecord->ExceptionCode;
    uintptr_t ip = (uintptr_t)e->ExceptionRecord->ExceptionAddress;
    if (code == EXCEPTION_BREAKPOINT || ip < g_self_lo || ip >= g_self_hi || bridge_probing())
        return EXCEPTION_CONTINUE_SEARCH;
    Guest* g = bridge_guest();
    rt_log("\n[recomp] exception %08lx at host %p, in the translation of guest function %08x\n", code, (void*)ip,
        guest_function_at(ip));
    if (code == EXCEPTION_ACCESS_VIOLATION)
        rt_log("  %s %p\n", e->ExceptionRecord->ExceptionInformation[0] ? "writing" : "reading",
            (void*)e->ExceptionRecord->ExceptionInformation[1]);
    rt_log("  guest state at the last call boundary: eax=%08x ebx=%08x ecx=%08x edx=%08x\n"
           "                                       esi=%08x edi=%08x esp=%08x ebp=%08x\n",
        g->eax, g->ebx, g->ecx, g->edx, g->esi, g->edi, g->esp, g->ebp);
    rt_log("  guest stack:"); /* guest addresses are host addresses in the flat build */
    for (int i = 0; i < 24; ++i)
    {
        uint32_t w = 0;
        if (IsBadReadPtr((const void*)(uintptr_t)(g->esp + 4 * i), 4))
            break;
        memcpy(&w, (const void*)(uintptr_t)(g->esp + 4 * i), 4);
        rt_log(" %08x", w);
    }
    rt_log("\n");
    fatal_box(guest_function_at(ip), "exception inside translated code");
    return EXCEPTION_CONTINUE_SEARCH;
}

static BOOL CALLBACK init(PINIT_ONCE once, PVOID param, PVOID* ctx)
{
    (void)once; (void)param; (void)ctx;
    open_log();
    rt_set_fatal_hook(fatal_box);
    {
        IMAGE_NT_HEADERS32* nt = (IMAGE_NT_HEADERS32*)((unsigned char*)g_self + ((IMAGE_DOS_HEADER*)g_self)->e_lfanew);
        g_self_lo = (uintptr_t)g_self;
        g_self_hi = g_self_lo + nt->OptionalHeader.SizeOfImage;
    }
    AddVectoredExceptionHandler(0, crash_handler);
    char path[MAX_PATH];
    if (!GetEnvironmentVariableA("FFXI_RECOMP_RETAIL", path, MAX_PATH))
    {
        GetModuleFileNameA(g_self, path, MAX_PATH);
        char* slash = strrchr(path, '\\');
        strcpy_s(slash ? slash + 1 : path, MAX_PATH - (slash ? (slash + 1 - path) : 0), "FFXiMain.retail.dll");
    }
    rt_log("[recomp] retail image: %s\n", path);
    g_game = rt_load_image(path);
    if (!g_game)
    {
        fatal_box(0, "could not load the retail FFXiMain (see the log)");
        return FALSE;
    }
    /* The services the guest expects from the launcher's gamecore before its own DllMain
     * runs: the ICoreCom object and the common function table, in host64's order
     * (host64.c:1437-1459). gwin_init first - gamecore_init allocates the object and the
     * 1560-slot table from the guest heap, and on this flat target nothing has reserved
     * those pages until then (plat_commit needs MEM_RESERVE, see plat_win.c). Without this
     * the guest's first COM call comes back with no object and its failure path jumps into
     * code discovery never registered. */
    gwin_init();
    gamecore_slots_init();
    gamecore_files_init();
    gamecore_presence_init();
    {
        char game[MAX_PATH], viewer[MAX_PATH * 2], full[MAX_PATH * 2];
        strcpy_s(game, sizeof game, path);
        char* slash = strrchr(game, '\\');
        if (slash)
            *slash = 0;
        snprintf(viewer, sizeof viewer, "%s\\..\\PlayOnlineViewer", game);
        if (vfs_full_path(viewer, full, sizeof full))
            gamecore_set_root(full);
    }
    ole_register_class(CLSID_GameMain, rt_image_base);
    gamecore_init();

    /* The game's CRT entry (_DllMainCRTStartup), called like the loader would. */
    BOOL(WINAPI * entry)(HINSTANCE, DWORD, LPVOID) = (BOOL(WINAPI*)(HINSTANCE, DWORD, LPVOID))(uintptr_t)(rt_image_oep + rt_reloc_delta);
    if (!entry((HINSTANCE)g_game, DLL_PROCESS_ATTACH, NULL))
    {
        rt_log("[recomp] the game's DllMain(PROCESS_ATTACH) returned FALSE\n");
        return FALSE;
    }
    rt_log("[recomp] FFXiMain translation ready\n");
    return TRUE;
}

static FARPROC game_export(const char* name)
{
    if (!InitOnceExecuteOnce(&g_once, init, NULL, NULL))
        return NULL;
    return GetProcAddress(g_game, name);
}

HRESULT WINAPI DllGetClassObject(REFCLSID clsid, REFIID iid, void** out)
{
    FARPROC fn = game_export("DllGetClassObject");
    return fn ? ((HRESULT(WINAPI*)(REFCLSID, REFIID, void**))fn)(clsid, iid, out) : E_FAIL;
}

HRESULT WINAPI DllCanUnloadNow(void)
{
    if (!g_game)
        return S_FALSE;
    FARPROC fn = game_export("DllCanUnloadNow");
    return fn ? ((HRESULT(WINAPI*)(void))fn)() : S_FALSE;
}

HRESULT WINAPI DllRegisterServer(void)
{
    FARPROC fn = game_export("DllRegisterServer");
    return fn ? ((HRESULT(WINAPI*)(void))fn)() : E_FAIL;
}

HRESULT WINAPI DllUnregisterServer(void)
{
    FARPROC fn = game_export("DllUnregisterServer");
    return fn ? ((HRESULT(WINAPI*)(void))fn)() : E_FAIL;
}

BOOL WINAPI DllMain(HINSTANCE inst, DWORD reason, LPVOID reserved)
{
    (void)reserved;
    if (reason == DLL_PROCESS_ATTACH)
    {
        g_self = inst;
        DisableThreadLibraryCalls(inst);
    }
    else if (reason == DLL_PROCESS_DETACH && g_game)
        bridge_trace_dump();
    return TRUE;
}

/* Gamepad count for the WMI enumerator in runtime/portable/ole.c (it answers the game's
 * IsXInputDevice query with one object per pad). runtime/portable/input.c owns this and is
 * bound to SDL3, which the 64-bit hosts bring with them; the stand-in has no SDL layer, and
 * under the launcher the game's own dinput path owns controllers. Report none. */
int input_pad_count(void)
{
    return 0;
}
