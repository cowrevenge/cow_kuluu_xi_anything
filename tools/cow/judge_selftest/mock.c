/* A miniature world for exercising tools/cow/cowdiff.c on Linux: a fake image, a fake DllMain that
   builds a VC6-style atexit table on the REAL guest heap (runtime/portable/gwin.c), four heap imports,
   and a handful of unit pairs (side A written the way the recompiler writes, side B the way a lift does).
   Nothing here is the game; it is the harness's own logic that is under test. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "guest.h"
#include "runtime.h"
#include "gthread.h"
#include "gwin.h"
#include "cowdiff_batch.h"

uint32_t rt_reloc_delta, rt_image_lo, rt_image_hi;
const uint32_t rt_image_base = 0x10000000u, rt_image_oep = 0x10001000u;
static RtNativeHandler g_native;
static GThread g_thread;
static int g_thread_ready;

#define IMG_SIZE 0x20000u
#define G_BEGIN 0x10010000u   /* __onexitbegin */
#define G_END 0x10010004u     /* __onexitend   */
#define G_SLOT 0x10010008u    /* a global the allocator unit stores its pointer in */
#define T_HEAPALLOC 0xFFF00010u
#define T_HEAPSIZE 0xFFF00020u
#define T_HEAPREALLOC 0xFFF00030u
#define T_HEAPFREE 0xFFF00040u
#define T_SLEEP 0xFFF00050u   /* named, never dispatched: inside a state the harness answers Sleep itself */
#define HEAP 0x000A0000u
#define G_OBJ 0x10012010u     /* judge v3: a global object pointer nobody has set (0 after DllMain) */
#define G_OBJ2 0x10012020u    /* ... one only a callee reads, so it is not in the row's own instructions */
#define G_INIT 0x10012030u    /* ... and a global the image DID initialise: never planted */

GThread* gt_self(void)
{
    if (!g_thread_ready)
    {
        g_thread_ready = 1;
        g_thread.stack_lo = gwin_alloc(0x10000u);
        g_thread.stack_hi = g_thread.stack_lo + 0x10000u;
        g_thread.teb = gwin_alloc(0x1000u);
        g_thread.g.fs_base = g_thread.teb;
    }
    return &g_thread;
}
void gt_init(void) {}
void k32_init(const char* a, const char* b) { (void)a; (void)b; }
void k32_io_init(void) {}
void k32_misc_init(void) {}
void ole_init(void) {}
void vfs_init(const char* a) { (void)a; }
void reg_init(const char* const* f, unsigned n, const char* o) { (void)f; (void)n; (void)o; }
void rt_set_native_handler(RtNativeHandler h) { g_native = h; }
void rt_set_call_stub(RtCallStub h) { (void)h; }
void rt_set_fatal_hook(RtFatalHook h) { (void)h; }
uint32_t thunk_bind_hint(const char* n) { (void)n; return 0; }

int pe_load(const char* path)
{
    (void)path;
    if (!gwin_reserve(rt_image_base, IMG_SIZE) || !gwin_commit(rt_image_base, IMG_SIZE))
        return 0;
    rt_image_lo = rt_image_base;
    rt_image_hi = rt_image_base + IMG_SIZE;
    return 1;
}

const char* thunk_name(uint32_t t)
{
    switch (t)
    {
    case T_HEAPALLOC: return "KERNEL32.dll!HeapAlloc";
    case T_HEAPSIZE: return "KERNEL32.dll!HeapSize";
    case T_HEAPREALLOC: return "KERNEL32.dll!HeapReAlloc";
    case T_HEAPFREE: return "KERNEL32.dll!HeapFree";
    case T_SLEEP: return "KERNEL32.dll!Sleep";
    }
    return NULL;
}

#define ARG(n) rd32(g->esp + 4u + 4u * (n))
#define RET(v, n) do { g->eax = (v); g->esp += 4u + 4u * (n); return 1; } while (0)
int thunk_dispatch(Guest* g, uint32_t t)
{
    switch (t)
    {
    case T_HEAPALLOC: RET(gheap_alloc(ARG(2), (ARG(1) & 8u) != 0), 3);
    case T_HEAPSIZE: RET(gheap_size(ARG(2)), 3);
    case T_HEAPREALLOC: RET(gheap_realloc(ARG(2), ARG(3), 0, 0), 4);
    case T_HEAPFREE: gheap_free(ARG(2)); RET(1, 3);
    }
    return 0;
}

static void call_import(Guest* g, uint32_t target)
{
    if (!g_native || !g_native(g, target))
    {
        printf("mock: unhandled import %08x\n", target);
        exit(3);
    }
}

/* "DllMain": the CRT has registered exactly as many destructors as the atexit table holds, so the table
   is FULL - which is the state the real game's table is in when the 136-unit cluster runs. */
uint32_t guest_call(uint32_t fn, unsigned nargs, const uint32_t* args)
{
    (void)fn; (void)nargs; (void)args;
    uint32_t table = gheap_alloc(400, 0);
    memset(GUEST_PTR(table), 0x5A, 400);
    wr32(G_BEGIN, table);
    wr32(G_END, table + 400u);
    wr32(G_SLOT, 0u);
    {
        /* judge v3: the harness finds the data sections in the image's own section table, so the mock image
           gets the smallest one that says "0x10012000..0x10014000 is data": e_lfanew, the signature, one
           section header. Everything in it is 0 after this DllMain except G_INIT. */
        const uint32_t pe = rt_image_base + 0x80u;
        wr32(rt_image_base + 0x3Cu, 0x80u);
        memcpy(GUEST_PTR(pe), "PE\0\0", 4);
        wr16(pe + 6u, 1u);                    /* NumberOfSections */
        wr16(pe + 20u, 0u);                   /* SizeOfOptionalHeader */
        memcpy(GUEST_PTR(pe + 24u), ".data\0\0\0", 8);
        wr32(pe + 24u + 8u, 0x2000u);         /* VirtualSize */
        wr32(pe + 24u + 12u, 0x12000u);       /* VirtualAddress */
        wr32(pe + 24u + 36u, 0xC0000040u);    /* initialised data, read, write */
        wr32(G_INIT, 0x1234u);
    }
    gheap_alloc(40, 1); /* something else on the heap, as there always is */
    /* static data for the copy and float units: distinct words, and three floats chosen so that rounding
       each x87 result to single (24-bit precision control) and rounding once at the end give different
       answers: (1+2^-23)*(1+2^-23) + 2^-24 */
    for (uint32_t i = 0; i < 0x200u; i += 4u)
        wr32(0x10010F00u + i, 0xC0DE0000u + i);
    wr32(0x10011200u, 0x3F800001u);
    wr32(0x10011204u, 0x3F800001u);
    wr32(0x10011208u, 0x33800000u);
    return 1;
}

/* ------------------------------------------------------------------------------------------------
   The generated-style atexit (VC6 _onexit): _msize(table); if it is full, realloc(table, size+16).
   The return address pushed for the HeapReAlloc call is 0x10313417 - the word the cluster is named for. */
static void f_atexit(Guest* g)
{
    uint32_t esp = g->esp;
    const uint32_t func = rd32(esp + 4u);
    uint32_t begin, end, size;
    esp -= 4u; wr32(esp, g->esi);                                   /* push esi */
    begin = rd32(G_BEGIN); end = rd32(G_END);
    esp -= 4u; wr32(esp, begin); esp -= 4u; wr32(esp, 0u); esp -= 4u; wr32(esp, HEAP);
    esp -= 4u; wr32(esp, 0x10313300u);                              /* call [HeapSize] */
    g->esp = esp; call_import(g, T_HEAPSIZE); esp = g->esp;
    size = g->eax;
    if (size < (end - begin) + 4u)
    {
        uint32_t p;
        esp -= 4u; wr32(esp, size + 16u); esp -= 4u; wr32(esp, begin); esp -= 4u; wr32(esp, 0u);
        esp -= 4u; wr32(esp, HEAP);
        esp -= 4u; wr32(esp, 0x10313417u);                          /* call [HeapReAlloc] */
        g->esp = esp; call_import(g, T_HEAPREALLOC); esp = g->esp;
        p = g->eax;
        if (!p) { g->eax = 0xFFFFFFFFu; goto out; }
        end = p + (end - begin); begin = p;
        wr32(G_BEGIN, begin);
    }
    wr32(end, func); wr32(G_END, end + 4u);
    g->eax = 0u;
out:
    g->esi = rd32(esp); esp += 4u;                                  /* pop esi */
    g->esp = esp + 4u;                                              /* ret */
}

static unsigned* cov;   /* the row's own counters; its side-A wrapper points this at them */

/* ---- unit 1: the cluster's stub - push dtor; call atexit; pop ecx; ret --------------------------- */
static unsigned cov1[4];
static const char* const sites1[4] = { "entry", "push dtor", "call atexit", "pop ecx / ret" };
static void a_stub(Guest* g)
{
    uint32_t esp = g->esp;
    cow_tick(&cov[0]);
    cow_tick(&cov[1]); esp -= 4u; wr32(esp, 0x10029900u);
    cow_tick(&cov[2]); esp -= 4u; wr32(esp, 0x100298FAu); g->esp = esp; f_atexit(g); esp = g->esp;
    cow_tick(&cov[3]); g->ecx = rd32(esp); esp += 4u;
    g->esp = esp + 4u;
}
static void b_stub(Guest* g)   /* the lift: same pushes through a bridge, same callee */
{
    const uint32_t sp0 = g->esp;
    g->esp -= 4u; wr32(g->esp, 0x10029900u);
    g->esp -= 4u; wr32(g->esp, 0x100298FAu);
    f_atexit(g);
    g->ecx = rd32(g->esp); g->esp += 4u;
    g->esp = sp0 + 4u;
}

/* ---- unit 2: void bump(obj) - the original leaves scratch in eax/edx and a saved ebx on the stack - */
static unsigned cov2[3];
static const char* const sites2[3] = { "entry", "load/inc/store", "ret" };
static void a_bump(Guest* g)
{
    uint32_t esp = g->esp, p;
    cow_tick(&cov[0]);
    esp -= 4u; wr32(esp, g->ebx);
    p = rd32(esp + 8u);
    cow_tick(&cov[1]);
    g->eax = rd32(p + 4u) + 1u; wr32(p + 4u, g->eax); g->edx = g->eax * 3u;
    cow_tick(&cov[2]);
    g->ebx = rd32(esp); esp += 4u;
    g->esp = esp + 4u;
}
static void b_bump(Guest* g)   /* what a reader would write: no scratch, no frame */
{
    const uint32_t p = rd32(g->esp + 4u);
    wr32(p + 4u, rd32(p + 4u) + 1u);
    g->esp += 4u;
}
static void b_bump_wrong(Guest* g)   /* a real bug: adds 2 */
{
    const uint32_t p = rd32(g->esp + 4u);
    wr32(p + 4u, rd32(p + 4u) + 2u);
    g->esp += 4u;
}
static void b_bump_guarded(Guest* g)   /* dereferences less: returns early on a pointer it does not like */
{
    const uint32_t p = rd32(g->esp + 4u);
    if (p < 0x00100000u) { g->esp += 4u; return; }
    wr32(p + 4u, rd32(p + 4u) + 1u);
    g->esp += 4u;
}

/* ---- unit 3: obj* make(v) - allocates, fills a fresh block, remembers it in a global ------------ */
static unsigned cov3[2];
static const char* const sites3[2] = { "entry", "alloc+fill" };
static void make_common(Guest* g, uint32_t mul, int reorder)
{
    const uint32_t sp0 = g->esp, v = rd32(sp0 + 4u);
    uint32_t p;
    g->esp -= 4u; wr32(g->esp, 16u); g->esp -= 4u; wr32(g->esp, 0u); g->esp -= 4u; wr32(g->esp, HEAP);
    g->esp -= 4u; wr32(g->esp, 0x10002222u);
    call_import(g, T_HEAPALLOC);
    p = g->eax;
    if (reorder) { wr32(p + 4u, v * mul); wr32(p, v); }
    else { wr32(p, v); wr32(p + 4u, v * mul); }
    wr32(G_SLOT, p);
    g->eax = p;
    g->esp = sp0 + 4u;
}
static void a_make(Guest* g) { cow_tick(&cov[0]); cow_tick(&cov[1]); make_common(g, 2u, 0); }
static void b_make(Guest* g) { make_common(g, 2u, 1); }          /* same contents, other order */
static void b_make_wrong(Guest* g) { make_common(g, 3u, 0); }    /* wrong VALUE in the fresh block */

/* ---- unit 4: ours faults where the original does not --------------------------------------------- */
static unsigned cov4[1];
static const char* const sites4[1] = { "entry" };
static void a_nop(Guest* g) { cow_tick(&cov[0]); g->eax = 7u; g->esp += 4u; }
static void b_nop_faults(Guest* g) { wr32(0x10u, 1u); g->eax = 7u; g->esp += 4u; }


/* ---- unit 5: int pick(p) - a site that only ever runs on the way to a fault --------------------- */
static unsigned cov5[3];
static const char* const sites5[3] = { "entry", "the null path: reads [0]", "the normal path" };
static void a_pick(Guest* g)
{
    const uint32_t p = rd32(g->esp + 4u);
    cow_tick(&cov[0]);
    if (p == 0u) { cow_tick(&cov[1]); g->eax = rd32(p); }       /* always faults */
    else { cow_tick(&cov[2]); g->eax = p ^ 0x55u; }
    g->esp += 4u;
}
static void b_pick(Guest* g)
{
    const uint32_t p = rd32(g->esp + 4u);
    g->eax = p == 0u ? rd32(p) : (p ^ 0x55u);
    g->esp += 4u;
}

/* ---- unit 6: where the two sides differ on the stack ---------------------------------------------- */
static unsigned cov6[1], cov6b[1], cov6c[1], cov6d[1];
static const char* const sites6[1] = { "entry" };
static void a_frame(Guest* g) { cow_tick(&cov[0]); g->eax = 1u; g->esp += 4u; }
static void b_frame_caller(Guest* g) { wr32(g->esp + 0x40u, 0xBADu); g->eax = 1u; g->esp += 4u; }  /* caller's frame */
static void b_frame_ownarg(Guest* g) { wr32(g->esp + 4u, 0xBADu); g->eax = 1u; g->esp += 4u; }     /* its own arg slot */
static void b_frame_dead(Guest* g) { wr32(g->esp - 0x20u, 0xBADu); g->eax = 1u; g->esp += 4u; }    /* dead frame */

/* ---- unit 7: returns an uninitialised local --------------------------------------------------------- */
static unsigned cov7[1];
static void a_uninit(Guest* g) { cow_tick(&cov[0]); g->eax = rd32(g->esp - 0x10u); g->esp += 4u; }
static void b_uninit(Guest* g) { uint32_t local = 0u; g->eax = local; g->esp += 4u; }

/* ---- unit 8: HeapFree(heap, 0, p) with different rubbish above the three arguments -------------- */
static unsigned cov8[1];
static void free_common(Guest* g, uint32_t junk)
{
    const uint32_t sp0 = g->esp, p = rd32(sp0 + 4u);
    g->esp -= 4u; wr32(g->esp, junk);                           /* a caller-frame word, not an argument */
    g->esp -= 4u; wr32(g->esp, p); g->esp -= 4u; wr32(g->esp, 0u); g->esp -= 4u; wr32(g->esp, HEAP);
    g->esp -= 4u; wr32(g->esp, 0x10003333u);
    call_import(g, T_HEAPFREE);
    g->eax = 1u;
    g->esp = sp0 + 4u;
}
static void a_free(Guest* g) { cow_tick(&cov[0]); free_common(g, 0x11111111u); }
static void b_free(Guest* g) { free_common(g, 0x22222222u); }

/* ---- unit 9: a branch behind a magic constant - 1 random word in 4 billion takes it ------------- */
static unsigned cov9[4], cov9b[4], cov9c[4];
static const char* const sites9[4] = { "10001000: entry", "10001000: cmp eax, 0x1f4", "10001006: mov eax, 7",
                                       "1000100c: mov eax, 9" };
static void a_magic(Guest* g)
{
    const uint32_t v = rd32(g->esp + 4u);
    cow_tick(&cov[0]); cow_tick(&cov[1]);
    if (v == 0x1F4u) { cow_tick(&cov[2]); g->eax = 7u; }
    else { cow_tick(&cov[3]); g->eax = 9u; }
    g->esp += 4u;
}
static void b_magic(Guest* g) { g->eax = rd32(g->esp + 4u) == 0x1F4u ? 7u : 9u; g->esp += 4u; }
static void b_magic_wrong(Guest* g) { g->eax = 9u; g->esp += 4u; }   /* wrong ONLY behind the magic branch */

/* ---- unit 10: the same, but the constant sits in a 16-bit field of an object -------------------- */
static unsigned cov10[4];
static const char* const sites10[4] = { "10002000: entry", "10002000: cmp word ptr [ecx + 6], 0x2710",
                                        "10002006: mov eax, 3", "1000200c: mov eax, 4" };
static void a_magicmem(Guest* g)
{
    const uint32_t p = rd32(g->esp + 4u);
    cow_tick(&cov[0]); cow_tick(&cov[1]);
    if (rd16(p + 6u) == 0x2710u) { cow_tick(&cov[2]); g->eax = 3u; }
    else { cow_tick(&cov[3]); g->eax = 4u; }
    g->esp += 4u;
}
static void b_magicmem(Guest* g) { g->eax = rd16(rd32(g->esp + 4u) + 6u) == 0x2710u ? 3u : 4u; g->esp += 4u; }

/* ---- unit 11: a float result that is a NaN with a different payload on each side ------------------ */
static unsigned cov11[1], cov11b[1];
static double nan_with(uint64_t payload)
{
    union { double d; uint64_t u; } b;
    b.u = 0x7FF8000000000000ull | payload;
    return b.d;
}
static void a_nan(Guest* g) { cow_tick(&cov[0]); g->st[g->top & 7u] = nan_with(1u); g->esp += 4u; }
static void b_nan(Guest* g) { g->st[g->top & 7u] = nan_with(2u); g->esp += 4u; }
static void b_notnan(Guest* g) { g->st[g->top & 7u] = 1.5; g->esp += 4u; }

/* ---- unit 12: two fields of one object decide the branch (the shape of most game-state checks) --- */
static unsigned cov12[4], cov12b[4];
static const char* const sites12[4] = { "10003000: entry", "10003000: cmp dword ptr [ecx + 0x68], 0x1f4",
                                        "10003007: cmp byte ptr [ecx + 0x59], 0x41", "1000300d: mov eax, 5" };
static void a_fields(Guest* g)
{
    const uint32_t p = g->ecx;
    cow_tick(&cov[0]); cow_tick(&cov[1]);
    g->eax = 0u;
    if (rd32(p + 0x68u) == 0x1F4u)
    {
        cow_tick(&cov[2]);
        if (rd8(p + 0x59u) == 0x41u) { cow_tick(&cov[3]); g->eax = 5u; }
    }
    g->esp += 4u;
}
static void b_fields(Guest* g)
{
    const uint32_t p = g->ecx;
    g->eax = (rd32(p + 0x68u) == 0x1F4u && rd8(p + 0x59u) == 0x41u) ? 5u : 0u;
    g->esp += 4u;
}
static void b_fields_wrong(Guest* g)   /* wrong only when BOTH fields match */
{
    const uint32_t p = g->ecx;
    (void)rd32(p + 0x68u); (void)rd8(p + 0x59u);
    g->eax = 0u;
    g->esp += 4u;
}

/* ---- unit 13: a forward copy - right when the direction flag is clear, as the ABI says it always is --- */
static unsigned cov13[2];
static const char* const sites13[2] = { "10004000: entry", "10004002: rep movsd dword ptr es:[edi], dword ptr [esi]" };
static void a_copy(Guest* g)   /* the original honours DF, as `rep movsd` does */
{
    const uint32_t dst = 0x10011000u, src = 0x10011100u;
    cow_tick(&cov[0]); cow_tick(&cov[1]);
    if (!g->df) { for (uint32_t i = 0; i < 4u; ++i) wr32(dst + 4u * i, rd32(src + 4u * i)); }
    else { for (uint32_t i = 0; i < 4u; ++i) wr32(dst - 4u * i, rd32(src - 4u * i)); }
    g->esp += 4u;
}
static void b_copy(Guest* g)   /* what anyone would write */
{
    for (uint32_t i = 0; i < 4u; ++i) wr32(0x10011000u + 4u * i, rd32(0x10011100u + 4u * i));
    g->esp += 4u;
}

/* ---- unit 14: one float multiply - the original rounds per the control word, as x87 does ---------- */
static unsigned cov14[1], cov14b[1];
static void a_fmul(Guest* g)
{
    const double x = (double)rdf32(0x10011200u) * (double)rdf32(0x10011204u) + (double)rdf32(0x10011208u);
    cow_tick(&cov[0]);
    wrf32(0x1001120Cu, (float)(((g->fcw >> 8) & 3u) == 0 ? (double)(float)((double)(float)((double)rdf32(0x10011200u) * (double)rdf32(0x10011204u)) + (double)rdf32(0x10011208u)) : x));
    g->esp += 4u;
}
static void b_fmul_fr(Guest* g)      /* honours precision control: fr() after every result */
{
    const double m = fr(g, (double)rdf32(0x10011200u) * (double)rdf32(0x10011204u));
    wrf32(0x1001120Cu, (float)fr(g, m + (double)rdf32(0x10011208u)));
    g->esp += 4u;
}
static void b_fmul_plain(Guest* g)   /* plain double arithmetic: right only in 53-bit mode */
{
    wrf32(0x1001120Cu, (float)((double)rdf32(0x10011200u) * (double)rdf32(0x10011204u) + (double)rdf32(0x10011208u)));
    g->esp += 4u;
}

/* ---- unit 15 (judge v3): the object comes from a GLOBAL, which holds 0 in this world --------------
   Under judge 2 the original faults in every state: `no clean state`. Under --stategen 3 half the states
   give the global an object, and the field it tests gets the constant it is compared against. */
static unsigned cov15[5], cov15b[5], cov15c[3], cov15d[2];
static const char* const sites15[5] = { "10005000: entry", "10005000: mov eax, dword ptr [0x10012010]",
                                        "10005005: cmp dword ptr [eax + 8], 0x1f4", "1000500c: mov eax, 7",
                                        "10005012: mov eax, 9" };
static void glob_common(Guest* g, uint32_t slot)
{
    const uint32_t obj = rd32(slot);
    cow_tick(&cov[0]); cow_tick(&cov[1]); cow_tick(&cov[2]);
    if (rd32(obj + 8u) == 0x1F4u) { cow_tick(&cov[3]); g->eax = 7u; }
    else { cow_tick(&cov[4]); g->eax = 9u; }
    g->esp += 4u;
}
static void a_glob(Guest* g) { glob_common(g, G_OBJ); }
static void b_glob(Guest* g) { g->eax = rd32(rd32(G_OBJ) + 8u) == 0x1F4u ? 7u : 9u; g->esp += 4u; }
static void b_glob_wrong(Guest* g) { (void)rd32(rd32(G_OBJ) + 8u); g->eax = 9u; g->esp += 4u; }
/* the same read made by a CALLEE: the row's instructions do not name the global, its world list does */
static const char* const sites15c[3] = { "10005100: entry", "10005100: call 0x10005200", "10005105: ret" };
static const unsigned world15c[2] = { G_OBJ2, 4u };
static void a_globcallee(Guest* g)
{
    cow_tick(&cov[0]); cow_tick(&cov[1]);
    g->eax = rd32(rd32(G_OBJ2) + 4u) + 1u;
    cow_tick(&cov[2]);
    g->esp += 4u;
}
static void b_globcallee(Guest* g) { g->eax = rd32(rd32(G_OBJ2) + 4u) + 1u; g->esp += 4u; }
/* a global the image initialised keeps its value in every state: this pair agrees only if it does */
static const char* const sites15d[2] = { "10005300: entry", "10005300: mov eax, dword ptr [0x10012030]" };
static void a_globinit(Guest* g) { cow_tick(&cov[0]); cow_tick(&cov[1]); g->eax = rd32(G_INIT); g->esp += 4u; }
static void b_globinit(Guest* g) { g->eax = 0x1234u; g->esp += 4u; }

/* ---- unit 16: a unit that calls Sleep. This mock has no Sleep to dispatch to (thunk_dispatch says "not
   mine" and call_import exits), so the row only gets a verdict if the harness answered the call itself -
   which is the point: the runtime's Sleep waits, and a state is one thread with nobody to wait for. */
static unsigned cov16[1];
static void sleep_common(Guest* g)
{
    const uint32_t sp0 = g->esp;
    for (unsigned k = 0; k < 3u; ++k)
    {
        g->esp -= 4u; wr32(g->esp, 1000u);
        g->esp -= 4u; wr32(g->esp, 0x10003333u);
        call_import(g, T_SLEEP);
    }
    g->eax = 5u;
    g->esp = sp0 + 4u;
}
static void a_sleep(Guest* g) { cow_tick(&cov[0]); sleep_common(g); }
static void b_sleep(Guest* g) { sleep_common(g); }

static unsigned cov1b[4], cov2b[3], cov2c[3], cov2d[3], cov2e[3], cov3b[2], cov3c[2];
#define SIDE_A(fn, body, counters) static void fn(Guest* g) { cov = counters; body(g); }
SIDE_A(a1, a_stub, cov1) SIDE_A(a1b, a_stub, cov1b)
SIDE_A(a2, a_bump, cov2) SIDE_A(a2b, a_bump, cov2b) SIDE_A(a2c, a_bump, cov2c) SIDE_A(a2d, a_bump, cov2d)
SIDE_A(a2e, a_bump, cov2e)
SIDE_A(a3, a_make, cov3) SIDE_A(a3b, a_make, cov3b) SIDE_A(a3c, a_make, cov3c)
SIDE_A(a4, a_nop, cov4)
SIDE_A(a5, a_pick, cov5)
SIDE_A(a6, a_frame, cov6) SIDE_A(a6b, a_frame, cov6b) SIDE_A(a6c, a_frame, cov6c) SIDE_A(a6d, a_frame, cov6d)
SIDE_A(a7, a_uninit, cov7) SIDE_A(a8, a_free, cov8)
SIDE_A(a9, a_magic, cov9) SIDE_A(a9b, a_magic, cov9b) SIDE_A(a9c, a_magic, cov9c)
SIDE_A(a12, a_fields, cov12) SIDE_A(a12b, a_fields, cov12b)
SIDE_A(a13, a_copy, cov13) SIDE_A(a14, a_fmul, cov14) SIDE_A(a14b, a_fmul, cov14b)
SIDE_A(a10, a_magicmem, cov10) SIDE_A(a11, a_nan, cov11) SIDE_A(a11b, a_nan, cov11b)
SIDE_A(a15, a_glob, cov15) SIDE_A(a15b, a_glob, cov15b) SIDE_A(a15c, a_globcallee, cov15c)
SIDE_A(a15d, a_globinit, cov15d) SIDE_A(a16, a_sleep, cov16)
#define ROWW(name, a, b, cov, sites, eaxd, edxd, sargs, world, nworld) { name, 0x10001000u, a, b, cov, sizeof(cov) / sizeof(cov[0]), sites, 1, eaxd, edxd, sargs, world, nworld }
#define ROW(name, a, b, cov, sites, eaxd, edxd, sargs) { name, 0x10001000u, a, b, cov, sizeof(cov) / sizeof(cov[0]), sites, 1, eaxd, edxd, sargs }
static const CowBatchRow rows[] = {
    ROW("stub", a1, b_stub, cov1, sites1, 0xFFFFFFFFu, 1, 1u),
    ROW("stubstrict", a1b, b_stub, cov1b, sites1, 0u, 0, 0u),
    ROW("bump", a2, b_bump, cov2, sites2, 0xFFFFFFFFu, 1, 1u),
    ROW("bumpstrict", a2b, b_bump, cov2b, sites2, 0u, 0, 0u),
    ROW("bumpwrong", a2c, b_bump_wrong, cov2c, sites2, 0xFFFFFFFFu, 1, 1u),
    ROW("bumpguard", a2d, b_bump_guarded, cov2d, sites2, 0xFFFFFFFFu, 1, 1u),
    ROW("bumpself", a2e, a2e, cov2e, sites2, 0u, 0, 0u),
    ROW("make", a3, b_make, cov3, sites3, 0u, 1, 1u),
    ROW("makewrong", a3b, b_make_wrong, cov3b, sites3, 0u, 1, 1u),
    ROW("makeself", a3c, a3c, cov3c, sites3, 0u, 0, 0u),
    ROW("bfaults", a4, b_nop_faults, cov4, sites4, 0u, 1, 0u),
    ROW("pick", a5, b_pick, cov5, sites5, 0u, 1, 1u),
    ROW("framecaller", a6, b_frame_caller, cov6, sites6, 0u, 1, 1u),
    ROW("frameownarg", a6b, b_frame_ownarg, cov6b, sites6, 0u, 1, 1u),
    ROW("frameownarg0", a6c, b_frame_ownarg, cov6c, sites6, 0u, 1, 0u),
    ROW("framedead", a6d, b_frame_dead, cov6d, sites6, 0u, 1, 1u),
    ROW("uninit", a7, b_uninit, cov7, sites6, 0u, 1, 0u),
    ROW("freeargs", a8, b_free, cov8, sites6, 0u, 1, 1u),
    ROW("magic", a9, b_magic, cov9, sites9, 0u, 1, 1u),
    ROW("magicwrong", a9b, b_magic_wrong, cov9b, sites9, 0u, 1, 1u),
    ROW("magicself", a9c, a9c, cov9c, sites9, 0u, 0, 0u),
    ROW("magicmem", a10, b_magicmem, cov10, sites10, 0u, 1, 1u),
    ROW("fields", a12, b_fields, cov12, sites12, 0u, 1, 0u),
    ROW("fieldswrong", a12b, b_fields_wrong, cov12b, sites12, 0u, 1, 0u),
    ROW("copyfwd", a13, b_copy, cov13, sites13, 0xFFFFFFFFu, 1, 0u),
    ROW("fmulfr", a14, b_fmul_fr, cov14, sites6, 0xFFFFFFFFu, 1, 0u),
    ROW("fmulplain", a14b, b_fmul_plain, cov14b, sites6, 0xFFFFFFFFu, 1, 0u),
    ROW("nanst0", a11, b_nan, cov11, sites6, 0xFFFFFFFFu, 1, 1u),
    ROW("notnanst0", a11b, b_notnan, cov11b, sites6, 0xFFFFFFFFu, 1, 1u),
    ROW("glob", a15, b_glob, cov15, sites15, 0u, 1, 0u),
    ROW("globwrong", a15b, b_glob_wrong, cov15b, sites15, 0u, 1, 0u),
    ROWW("globcallee", a15c, b_globcallee, cov15c, sites15c, 0u, 1, 0u, world15c, 2u),
    ROW("globinit", a15d, b_globinit, cov15d, sites15d, 0u, 1, 0u),
    ROW("sleep", a16, b_sleep, cov16, sites6, 0u, 1, 0u),
};
const CowBatchRow* cow_batch_rows = rows;
const unsigned cow_batch_count = sizeof(rows) / sizeof(rows[0]);
unsigned cow_cov[1];
const unsigned cow_cov_count = 1;
const char* const cow_cov_sites[1] = { "entry" };
const char* cow_target_entry = "mock";
GuestFn cow_side_a = a_stub;
GuestFn cow_side_b = b_stub;
int cow_has_adapter = 1;
