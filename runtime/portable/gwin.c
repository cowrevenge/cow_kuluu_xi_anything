/* The guest window: pages and heap. See gwin.h. */
#include <stdlib.h>
#include <string.h>

#include "gwin.h"
#include "plat.h"
#include "runtime.h"

unsigned char* rt_guest_base;

#define GRANULE 0x10000u
#define GRANULES 0x10000u /* 4 GB / 64 KB */
#define PAGE 0x1000u
#define LOW_RESERVED 0x00100000u   /* never handed out: null pointer region */
#define HIGH_RESERVED 0xFFF00000u  /* never handed out: the thunk range and the top */
/* The window's size. iOS: the 2 GB of a 32-bit process (all the game asks for: GetSystemInfo says
 * 0x7FFEFFFF, k32_misc.c), as an app may reserve without the Extended Virtual Addressing entitlement;
 * nothing is handed out above it. The thunks above (thunk.h) are call targets, never memory. */
#if defined(FFXI_IOS)
#define WINDOW 0x80000000ull
#else
#define WINDOW 0x100000000ull
#endif

static uint32_t g_res[GRANULES];   /* granules in the reservation starting here, else 0 */
static uint8_t g_used[GRANULES];   /* granule belongs to a reservation */
static uint8_t g_committed[GRANULES * (GRANULE / PAGE) / 8];
static volatile uint32_t g_lock;
static uint32_t g_hint = LOW_RESERVED / GRANULE;
static uint32_t g_pages, g_pages_peak, g_top; /* committed pages now and at most; end of the highest reservation */

static void lock(void)
{
    while (plat_atomic_cas32(&g_lock, 0, 1) != 0)
        plat_yield();
}

static void unlock(void)
{
    plat_atomic_cas32(&g_lock, 1, 0);
}

int gwin_init(void)
{
#if defined(RT_GUEST_WINDOW)
    /* the window plus a guard page: an unaligned access at its last byte reaches past it */
    rt_guest_base = (unsigned char*)plat_reserve(WINDOW + PAGE);
    if (!rt_guest_base)
        return 0;
    for (uint32_t g = 0; g < LOW_RESERVED / GRANULE; ++g)
        g_used[g] = 1;
#else
    /* Flat (the browser): guest addresses are host addresses, and the host's own memory is everything
     * below PLAT_HOST_TOP. The guest gets what is above it, first fit from the bottom, so the memory
     * (which only grows) tracks the guest's working set. */
    for (uint32_t g = 0; g < PLAT_HOST_TOP / GRANULE; ++g)
        g_used[g] = 1;
    g_hint = PLAT_HOST_TOP / GRANULE;
#endif
    for (uint32_t g = (uint32_t)(WINDOW < HIGH_RESERVED ? WINDOW : HIGH_RESERVED) / GRANULE; g < GRANULES; ++g)
        g_used[g] = 1;
    return 1;
}

static uint32_t granules_for(uint32_t size)
{
    return (uint32_t)(((uint64_t)size + GRANULE - 1) / GRANULE);
}

uint32_t gwin_reserve(uint32_t addr, uint32_t size)
{
    uint32_t n = granules_for(size);
    if (!n)
        return 0;
    lock();
    uint32_t start = 0;
    if (addr)
    {
        start = addr / GRANULE;
        for (uint32_t g = start; g < start + n; ++g)
            if (g >= GRANULES || g_used[g])
            {
                unlock();
                return 0;
            }
    }
    else
    {
        /* first fit from the hint, then from the bottom */
        for (int pass = 0; pass < 2 && !start; ++pass)
        {
            uint32_t run = 0;
            for (uint32_t g = pass ? LOW_RESERVED / GRANULE : g_hint; g < GRANULES; ++g)
            {
                run = g_used[g] ? 0 : run + 1;
                if (run == n)
                {
                    start = g + 1 - n;
                    break;
                }
            }
        }
        if (!start)
        {
            unlock();
            return 0;
        }
#if defined(RT_GUEST_WINDOW)
        g_hint = start + n;
#endif
    }
    for (uint32_t g = start; g < start + n; ++g)
        g_used[g] = 1;
    g_res[start] = n;
    if ((start + n) * GRANULE > g_top)
        g_top = (start + n) * GRANULE;
    unlock();
    return start * GRANULE;
}

int gwin_commit(uint32_t addr, uint32_t size)
{
    uint32_t lo = addr & ~(PAGE - 1), hi = (uint32_t)(((uint64_t)addr + size + PAGE - 1) & ~(uint64_t)(PAGE - 1));
    if (!plat_commit(GUEST_PTR(lo), (size_t)hi - lo))
        return 0;
    lock();
    for (uint32_t p = lo / PAGE; p < hi / PAGE; ++p)
        if (!(g_committed[p >> 3] & (1u << (p & 7))))
            g_committed[p >> 3] |= (uint8_t)(1u << (p & 7)), ++g_pages;
    if (g_pages > g_pages_peak)
        g_pages_peak = g_pages;
    unlock();
    return 1;
}

void gwin_decommit(uint32_t addr, uint32_t size)
{
    uint32_t lo = addr & ~(PAGE - 1), hi = (uint32_t)(((uint64_t)addr + size + PAGE - 1) & ~(uint64_t)(PAGE - 1));
    plat_decommit(GUEST_PTR(lo), (size_t)hi - lo);
    lock();
    for (uint32_t p = lo / PAGE; p < hi / PAGE; ++p)
        if (g_committed[p >> 3] & (1u << (p & 7)))
            g_committed[p >> 3] &= (uint8_t)~(1u << (p & 7)), --g_pages;
    unlock();
}

void gwin_release(uint32_t addr)
{
    uint32_t start = addr / GRANULE, n = g_res[start];
    if (!n)
        return;
    gwin_decommit(start * GRANULE, n * GRANULE);
    lock();
    for (uint32_t g = start; g < start + n; ++g)
        g_used[g] = 0;
    g_res[start] = 0;
    if (start < g_hint)
        g_hint = start;
    unlock();
}

uint32_t gwin_alloc(uint32_t size)
{
    uint32_t a = gwin_reserve(0, size);
    if (a && !gwin_commit(a, size))
    {
        gwin_release(a);
        return 0;
    }
    return a;
}

void gwin_stats(GwinStats* s)
{
    lock();
    s->committed = (uint64_t)g_pages * PAGE;
    s->committed_peak = (uint64_t)g_pages_peak * PAGE;
    s->top = g_top;
    unlock();
}

int gwin_is_committed(uint32_t addr)
{
    uint32_t p = addr / PAGE;
    return (g_committed[p >> 3] >> (p & 7)) & 1;
}

/* --- heap -------------------------------------------------------------------------------------
 *
 * Each block has an 8-byte header just below it: the requested size, and a tag with the size
 * class (CLASS_LARGE for blocks that own their own reservation). Small blocks are carved from
 * 256 KB runs per class and recycled through a per-class free list threaded through the blocks.
 * Blocks are 8-byte aligned, as the Win32 heap guarantees on x86. */
#define TAG 0x48500000u
#define CLASS_LARGE 0xFFFFu
#define RUN 0x40000u

static const uint32_t CLASS_SIZE[] = {
    16, 32, 48, 64, 80, 96, 112, 128, 144, 160, 176, 192, 208, 224, 240, 256,
    384, 512, 768, 1024, 1536, 2048, 3072, 4096, 6144, 8192, 12288, 16384, 24576, 32768,
};
#define CLASSES (sizeof CLASS_SIZE / sizeof CLASS_SIZE[0])

static uint32_t g_free[CLASSES], g_bump[CLASSES], g_bump_end[CLASSES];

static unsigned class_for(uint32_t total)
{
    for (unsigned c = 0; c < CLASSES; ++c)
        if (total <= CLASS_SIZE[c])
            return c;
    return CLASS_LARGE;
}

uint32_t gheap_alloc(uint32_t size, int zero)
{
    uint64_t total = (uint64_t)size + 8;
    if (total > 0xFFF00000u)
        return 0;
    unsigned c = class_for((uint32_t)total);
    uint32_t h;
    if (c == CLASS_LARGE)
    {
        h = gwin_alloc((uint32_t)total);
        if (!h)
            return 0;
    }
    else if (g_free[c])
    {
        h = g_free[c];
        g_free[c] = rd32(h + 8);
    }
    else
    {
        if (g_bump[c] + CLASS_SIZE[c] > g_bump_end[c])
        {
            uint32_t run = gwin_alloc(RUN);
            if (!run)
                return 0;
            g_bump[c] = run;
            g_bump_end[c] = run + RUN;
        }
        h = g_bump[c];
        g_bump[c] += CLASS_SIZE[c];
    }
    wr32(h, size);
    wr32(h + 4, TAG | c);
    if (zero)
        memset(GUEST_PTR(h + 8), 0, size);
    return h + 8;
}

static int live(uint32_t p)
{
    return p >= 8 && gwin_is_committed(p - 8) && (rd32(p - 4) & 0xFFFF0000u) == TAG;
}

void gheap_free(uint32_t p)
{
    if (!p || !live(p))
        return;
    uint32_t h = p - 8;
    unsigned c = rd32(h + 4) & 0xFFFFu;
    wr32(h + 4, 0); /* no longer live: a double free is ignored */
    if (c == CLASS_LARGE)
        gwin_release(h);
    else
    {
        wr32(h + 8, g_free[c]);
        g_free[c] = h;
    }
}

uint32_t gheap_size(uint32_t p)
{
    return live(p) ? rd32(p - 8) : ~0u;
}

uint32_t gheap_realloc(uint32_t p, uint32_t size, int zero, int in_place_only)
{
    if (!p)
        return in_place_only ? 0 : gheap_alloc(size, zero);
    if (!live(p))
        return 0;
    uint32_t old = rd32(p - 8);
    unsigned c = rd32(p - 4) & 0xFFFFu;
    uint64_t capacity = c == CLASS_LARGE ? (uint64_t)g_res[(p - 8) / GRANULE] * GRANULE : CLASS_SIZE[c];
    if ((uint64_t)size + 8 <= capacity)
    {
        if (c == CLASS_LARGE && !gwin_commit(p - 8, size + 8)) /* the reservation's tail may not be committed yet */
            return 0;
        if (zero && size > old)
            memset(GUEST_PTR(p + old), 0, size - old);
        wr32(p - 8, size);
        return p;
    }
    if (in_place_only)
        return 0;
    uint32_t q = gheap_alloc(size, zero);
    if (!q)
        return 0;
    memcpy(GUEST_PTR(q), GUEST_PTR(p), old < size ? old : size);
    gheap_free(p);
    return q;
}

uint32_t gheap_strdup(const char* s)
{
    uint32_t n = (uint32_t)strlen(s) + 1;
    uint32_t p = gheap_alloc(n, 0);
    if (p)
        memcpy(GUEST_PTR(p), s, n);
    return p;
}

/* --- COW: differential-harness support (tools/cow/cowdiff.c) ----------------------------------
 *
 * The harness runs one guest state twice - the generated original, then our code - and the two runs
 * only mean the same experiment if they start from the same world. The page and heap bookkeeping
 * above is static, so the harness saves it once and puts it back before every run. Without this the
 * first run's HeapAlloc/HeapReAlloc/HeapFree change what the second run's HeapSize and HeapAlloc
 * answer, and two identical functions "disagree". Nothing in a game build calls these. */
static struct
{
    uint32_t res[GRANULES];
    uint8_t used[GRANULES];
    uint8_t committed[GRANULES * (GRANULE / PAGE) / 8];
    uint32_t hint, pages, pages_peak, top;
    uint32_t free_list[CLASSES], bump[CLASSES], bump_end[CLASSES];
} g_cow_snap;

void gwin_cow_save(void)
{
    lock();
    memcpy(g_cow_snap.res, g_res, sizeof g_res);
    memcpy(g_cow_snap.used, g_used, sizeof g_used);
    memcpy(g_cow_snap.committed, g_committed, sizeof g_committed);
    g_cow_snap.hint = g_hint;
    g_cow_snap.pages = g_pages;
    g_cow_snap.pages_peak = g_pages_peak;
    g_cow_snap.top = g_top;
    memcpy(g_cow_snap.free_list, g_free, sizeof g_free);
    memcpy(g_cow_snap.bump, g_bump, sizeof g_bump);
    memcpy(g_cow_snap.bump_end, g_bump_end, sizeof g_bump_end);
    unlock();
}

/* Walk the pages whose committed bit differs from the snapshot.
 *   fresh: committed now, not at the snapshot -> zero it, so the next commit of the same page sees
 *          fresh memory exactly as the first one did;
 *   gone:  committed at the snapshot, released since -> commit it again (it comes back zero-filled)
 *          so the harness can read it and restore its contents. */
static void cow_walk(int zero_fresh, int recommit_gone)
{
    for (uint32_t i = 0; i < (uint32_t)sizeof g_committed; ++i)
    {
        /* almost nothing ever differs: skip a whole 4 KB of the bitmap (128 MB of guest memory) at a time */
        if (!(i & 0xFFFu) && !memcmp(g_committed + i, g_cow_snap.committed + i, 0x1000u))
        {
            i += 0xFFFu;
            continue;
        }
        const uint8_t now = g_committed[i], was = g_cow_snap.committed[i];
        if (now == was)
            continue;
        for (uint32_t b = 0; b < 8u; ++b)
        {
            const uint32_t page = i * 8u + b;
            const int n = (now >> b) & 1, w = (was >> b) & 1;
            if (n && !w && zero_fresh)
                memset(GUEST_PTR(page * PAGE), 0, PAGE);
            else if (!n && w && recommit_gone && plat_commit(GUEST_PTR(page * PAGE), PAGE))
            {
                g_committed[i] |= (uint8_t)(1u << b);
                ++g_pages;
            }
        }
    }
}

/* Make every page that was committed at the snapshot readable again. Call before reading the
 * tracked regions (a run may have released one of them). */
void gwin_cow_heal(void)
{
    lock();
    cow_walk(0, 1);
    unlock();
}

/* Put the allocator back exactly as gwin_cow_save() found it. */
void gwin_cow_restore(void)
{
    lock();
    cow_walk(1, 1);
    memcpy(g_res, g_cow_snap.res, sizeof g_res);
    memcpy(g_used, g_cow_snap.used, sizeof g_used);
    memcpy(g_committed, g_cow_snap.committed, sizeof g_committed);
    g_hint = g_cow_snap.hint;
    g_pages = g_cow_snap.pages;
    g_pages_peak = g_cow_snap.pages_peak;
    g_top = g_cow_snap.top;
    memcpy(g_free, g_cow_snap.free_list, sizeof g_free);
    memcpy(g_bump, g_cow_snap.bump, sizeof g_bump);
    memcpy(g_bump_end, g_cow_snap.bump_end, sizeof g_bump_end);
    unlock();
}
