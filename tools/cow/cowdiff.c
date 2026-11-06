/* cowdiff - the behaviour proof for one converted entry.

    build\cowdiff\cowdiff.exe <retail FFXiMain.dll> <game dir> --entry 0x100083b0
        [--states 2000] [--seed 1234] [--args 4] [--json] [--quiet]

Two sides run the same function on the same starting world and must agree:

  side A  an instrumented copy of the generated translation. tools/cow/cowdiff.py lifts the body of
          f_<hex> out of generated/all/funcs_*.c and puts `++cow_cov[k]` before every instruction
          comment, so coverage is real without touching recomp.py;
  side B  our adapter, cow_adapter_<hex>, which calls the user function in src/.

For each of --states deterministic states (splitmix64 over --seed, the entry and the index) the
harness restores the baseline memory (the mapped image, a pseudo-random arena, the fuzzed stack),
builds a Guest with fuzzed registers, x87 stack and control word, an esp inside the stack region and
fuzzed arguments above it, runs one side and keeps the result; then the same for the other side.
Compared: eax, edx, st(0) and its top, ebx/esi/edi/ebp, esp after the return, every byte of the
tracked memory, the exception code when a side faults, and every call out to an import or otherwise
unmapped target (target plus the four words above its return address). Calls to *translated*
functions run for real on both sides, which tests the composition and not just the unit.

Flags are deliberately not compared: the contract (docs/cow/STYLE.md) is the return value, the
callee-saved registers, esp, memory and calls out, and a caller cannot observe flags across a call.

Exit 0 PASS, 1 FAIL, 2 usage/setup. One line of output:
  COWDIFF PASS 100083b0 states=2000 blocks=14/14
  COWDIFF FAIL 100083b0 3 mismatch(es), first at state 7
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>   /* the fatal guard that keeps a batch alive (see cow_fatal_hook) */
#include <time.h>     /* clock()/CLOCKS_PER_SEC: the per-row time budget */

#include "guest.h"
#include "runtime.h"
#include "funcs.h"
#include "gthread.h"
#include "gwin.h"
#include "k32.h"
#include "pe.h"
#include "plat.h"
#include "gamecore.h"
#include "gamecore_config.h"
#include "thunk.h"
#include "vfs.h"

#ifdef _MSC_VER
#include <excpt.h> /* __try/__except, GetExceptionCode, EXCEPTION_EXECUTE_HANDLER */
#endif

/* the NT status codes we treat as "both sides faulted the same way"; spelled out because pulling in
   windows.h into a translation-unit-calling harness invites macro collisions with guest.h */
#define COW_EX_ACCESS_VIOLATION 0xC0000005L
#define COW_EX_ILLEGAL_INSTRUCTION 0xC000001DL
#define COW_EX_INT_DIVIDE_BY_ZERO 0xC0000094L
#define COW_EX_STACK_OVERFLOW 0xC00000FDL
/* A synthetic code for the one guest failure that is not a CPU exception: rt_fatal(), reached when an
   indirect call lands on an address with no translation. rt_fatal calls rt_set_fatal_hook's handler
   before it aborts the process, and this harness answers it by raising this code instead - so a unit
   that calls through a fuzzed vtable FAULTS THE STATE on both sides rather than killing the run.
   Without it no unit that makes an indirect call can be compared at all (2,178 of the ledger's todo
   rows call through a `code *`), because a fuzzed pointer into the arena yields a random target and
   abort() takes the other 1,999 states with it. Customer severity, so it cannot collide with a real
   NTSTATUS. */
#define COW_EX_NO_TRANSLATION 0xE000000DL

/* Declared, not included: this harness is built against the guest's own headers (guest.h, pe.h,
   k32.h), and <windows.h> brings windef's macros into exactly that namespace. The C4013 was telling
   the truth - the SEH intrinsics (GetExceptionCode, __try) need no header, this one does. */
#ifdef _MSC_VER
extern void __stdcall RaiseException(unsigned long code, unsigned long flags, unsigned long nargs,
                                     const unsigned long long *args);
#endif

#define STACK_BYTES 0x4000u
#define ARENA_BYTES 0x10000u
#define MAX_REGIONS 8
#define MAX_CALLS 64
#define MAX_MISMATCH 10

/* emitted by tools/cow/cowdiff.py into build/cowdiff/cowdiff_target.c */
extern GuestFn cow_side_a;
extern GuestFn cow_side_b;
extern unsigned cow_cov[];
extern const unsigned cow_cov_count;
extern const char* const cow_cov_sites[];
extern const char* cow_target_entry; /* "100083b0" */
extern int cow_has_adapter;          /* 0 when src/ has no cow_adapter_<hex> yet */

/* The table build (tools/cow/cowdiff.py --table) links EVERY tabled entry's instrumented body and
   adapter into one executable and runs them in one process: 943 rows at one link each is hours, and the
   rows share the image, the sandbox and DllMain, so there is nothing to lose by running them together.
   The contract with the generated target file is tools/cow/cowdiff_batch.h. */
#include "cowdiff_batch.h"

/* the entry the state loop is running right now */
static GuestFn g_side_a, g_side_b;
static unsigned* g_cov;
static unsigned g_cov_count;
static const char* const* g_sites;
static const char* g_name;
static uint32_t g_va;

static void select_entry(const char* name, uint32_t va, GuestFn a, GuestFn b, unsigned* cov,
                         unsigned cov_count, const char* const* sites)
{
    g_name = name;
    g_va = va;
    g_side_a = a;
    g_side_b = b;
    g_cov = cov;
    g_cov_count = cov_count;
    g_sites = sites;
}

/* input.c (SDL) is not linked into this harness, and ole.c's WMI gamepad answer asks it for the pad
   count - the same stub tests/boot64.c provides. */
int input_pad_count(void)
{
    return 0;
}

static uint32_t ARENA_LO, STACK_LO;

typedef struct
{
    uint32_t lo, size;
    unsigned char* base;  /* host pointer into the guest window */
    unsigned char* snap;  /* the baseline every state starts from */
    unsigned char* after; /* what side A left behind */
} Region;

static Region g_regions[MAX_REGIONS];
static int g_nregions;

typedef struct
{
    uint32_t target;
    uint32_t args[4];
} CallRec;

static CallRec g_calls_a[MAX_CALLS], g_calls_b[MAX_CALLS];
static int g_ncalls_a, g_ncalls_b, g_logging_b;
static int g_total_a, g_total_b; /* including what did not fit in the log */

/* One pinned write, and one hand-written state. The typedefs sit up here because the pinned-import
   answer below reaches into them; the rest of the pin machinery (parsing, the snapshot) is by main(). */
typedef struct
{
    uint32_t where; /* 0 = absolute, else the region's guest base */
    uint32_t off;
    int n;
    unsigned char b[32];
} PinWrite;

typedef struct
{
    int nargs;
    uint32_t arg[8];
    int nwrite;
    PinWrite w[16];
    /* what a pinned import writes when it answers (--pin-call): the same shape, applied *at* the call,
       so a callee that replaces a global is modelled and the unit's choice to reload that global is
       something cowdiff can actually see */
    int ncall;
    PinWrite cw[4];
    /* what a pinned import ANSWERS (--pin-answer): without it the answer is drawn from the state's own
       stream, which both sides agree on but nobody outside the harness can predict. A unit whose branch
       depends on the value the clock returned - f_100dc210 compares the tick against the one it stored -
       is then only reachable by luck, so a state may name the answer instead and force the branch. */
    int nanswer;
    uint32_t answer[4];
    /* what a STUBBED callee answers (--stub), for THIS state: the same reason answers exist. A unit that
       branches on what a callee returns - f_101b41a0 on ImmGetOpenStatus, say - cannot have both branches
       tested unless two states answer that one callee differently, and a table matched by target alone
       gives every state the first answer. So the state that declares stubs owns them. */
    struct CowStub
    {
        uint32_t target;
        uint32_t eax;
        uint32_t pop;
    } stub[8];
    int nstub;
} Pin;

static const Pin* g_active_pin; /* the state running now: whose --pin-call writes apply */

/* An import whose answer is the wall clock (or the CRT's RNG) cannot be compared between two runs of
   one state: side A and side B would each ask the real thing and differ by however long the two runs
   took, so every unit that reads the time would be untestable. For the handful below the harness
   answers instead, from a stream seeded by the state - identical on both sides, and still the same
   *shape* of answer. What stays under test is everything the unit does with it: the field it stamps,
   the branch it takes on it, and whether it makes the call at all (a unit that skips it differs on
   the call count). The count is printed, so a PASS never quietly depends on a pinned import.
   Every entry here is cdecl with no callee-cleanup, so popping the return address is all it takes. */
static const char* const g_pinned_imports[] = {
    "winmm.dll!timeGetTime",
    "kernel32.dll!GetTickCount",
    "msvcrt.dll!time",
    "msvcrt.dll!clock",
    "msvcrt.dll!rand",
    NULL
};

static uint64_t g_pin;          /* the state's own pinned-answer stream, re-seeded per side */
static unsigned g_pinned_calls; /* how many times it answered, for the banner */
static unsigned g_pin_index;    /* which answer of THIS state the next pinned call takes (--pin-answer) */

/* --stub 0x1015e350=0x00000001,0xc : ANSWER a guest callee instead of running it.
   A unit that ends by calling into state the launcher never populates - the UI manager at 0x10621838,
   say - faults inside the callee on BOTH sides, so cowdiff's PASS says nothing about the instructions
   after the call (docs/cow/REFERENCE.md's P4). A stub returns a value the state chose and pops what the
   real `ret N` would have popped, and it is the SAME answer on both sides: side B reaches it through the
   runtime's rt_set_call_stub seam, side A through tools/cow/cowdiff.py rewriting the call site in the
   instrumented copy to cow_stub_call(). The call is still logged (target and arguments), so "did the
   unit make the call at all, and with what" stays under test - only the callee's own body is replaced. */
typedef struct
{
    uint32_t target;
    uint32_t eax;
    uint32_t pop;
} Stub;

static Stub g_stubs[64];
static int g_nstubs;
static unsigned g_stub_calls;

static const Stub* stub_for(uint32_t target)
{
    /* A state that declared stubs owns them outright: falling through to the global table would hand
       that state another state's answer, which is the bug this function exists to fix. */
    if (g_active_pin && g_active_pin->nstub > 0)
    {
        for (int i = 0; i < g_active_pin->nstub; ++i)
            if (g_active_pin->stub[i].target == target)
                return (const Stub*)&g_active_pin->stub[i];
        return NULL;
    }
    for (int i = 0; i < g_nstubs; ++i)
        if (g_stubs[i].target == target)
            return &g_stubs[i];
    return NULL;
}

static int cow_answer_stub(Guest* g, const Stub* s)
{
    /* logged exactly as cow_native would log the real call, so a unit that skipped the call, or made it
       with different arguments, still differs from one that made it properly */
    CallRec* slot = NULL;
    if (g_logging_b)
    {
        if (g_ncalls_b < MAX_CALLS)
            slot = &g_calls_b[g_ncalls_b++];
        g_total_b++;
    }
    else
    {
        if (g_ncalls_a < MAX_CALLS)
            slot = &g_calls_a[g_ncalls_a++];
        g_total_a++;
    }
    if (slot)
    {
        slot->target = s->target;
        for (unsigned i = 0; i < 4; ++i)
            slot->args[i] = rd32(g->esp + 4u + 4u * i);
    }
    g->eax = s->eax;
    g->esp += 4u + s->pop;   /* the return address, then the bytes the real `ret N` cleaned */
    ++g_stub_calls;
    return 1;
}

/* the runtime's seam (runtime/portable/gthread.h): 1 means the dispatch below is skipped */
static int cow_call_stub(Guest* g, uint32_t target)
{
    const Stub* s = stub_for(target);
    return s ? cow_answer_stub(g, s) : 0;
}

/* what tools/cow/cowdiff.py rewrites a stubbed `f_<target>(g)` to in side A's instrumented body */
void cow_stub_call(Guest* g, uint32_t target, GuestFn real)
{
    if (cow_call_stub(g, target))
        return;
    real(g);
}

static void pin_reset(uint64_t base_seed)
{
    g_pin = base_seed ^ 0x9E3779B97F4A7C15ull;
    g_pin_index = 0;
}

static int same_import(const char* a, const char* b)
{
    /* The name comes out of the PE's own import strings ("WINMM.dll!timeGetTime") while the table
       below is written lower-case for legibility, and thunk_name's own shim lookup is case-sensitive
       too - which is why this harness has no timeGetTime shim at all and reached rt_fatal. Compare
       the two the way the loader does: case-insensitively. */
    while (*a && *b)
    {
        char ca = *a, cb = *b;
        if (ca >= 'A' && ca <= 'Z')
            ca = (char)(ca + 32);
        if (cb >= 'A' && cb <= 'Z')
            cb = (char)(cb + 32);
        if (ca != cb)
            return 0;
        ++a;
        ++b;
    }
    return *a == '\0' && *b == '\0';
}

static int pinned_answer(Guest* g, uint32_t target)
{
    const char* name = thunk_name(target);
    if (!name)
        return 0;
    for (unsigned i = 0; g_pinned_imports[i]; ++i)
    {
        if (!same_import(name, g_pinned_imports[i]))
            continue;
        if (g_active_pin && g_active_pin->nanswer > 0)
        {
            /* the state named this answer, so the branch that compares against it is chosen, not lucked
               into: the k-th pinned call in the state gets the k-th --pin-answer, the last one repeating */
            const unsigned k = g_pin_index;
            g->eax = g_active_pin->answer[k < (unsigned)g_active_pin->nanswer
                                             ? k : (unsigned)g_active_pin->nanswer - 1];
        }
        else
        {
            g_pin += 0x9E3779B97F4A7C15ull;
            uint64_t z = g_pin;
            z = (z ^ (z >> 30)) * 0xBF58476D1CE4E5B9ull;
            z = (z ^ (z >> 27)) * 0x94D049BB133111EBull;
            g->eax = (uint32_t)(z ^ (z >> 31));
        }
        g->esp += 4u; /* the return address; these APIs take no callee-cleaned arguments */
        /* and whatever the real callee would have done to the world while we were away: a unit that
         * reloads a global after the call (f_100dc1f0 does, at 0x100dc201) can only be told apart
         * from one that caches the old pointer if the pinned answer is allowed to move it */
        if (g_active_pin)
        {
            for (int i = 0; i < g_active_pin->ncall; ++i)
            {
                const uint32_t a = (uint32_t)(g_active_pin->cw[i].where + g_active_pin->cw[i].off);
                memcpy(GUEST_PTR(a), g_active_pin->cw[i].b, (size_t)g_active_pin->cw[i].n);
            }
        }
        ++g_pinned_calls;
        ++g_pin_index;
        return 1;
    }
    return 0;
}

/* ---- surviving a fatal in a batch -------------------------------------------------------------
   rt_fatal() logs and aborts. In table mode that ends every remaining row, so the harness arms a
   jmp_buf around each row; cow_fatal_hook (below, by run_side) tries the SEH route first and falls
   back to this when nothing took the exception. Disarmed, the fallback does nothing and abort() still
   means what it says for a crash outside a row. */
static jmp_buf g_fatal_jmp;
static volatile int g_fatal_armed;
static char g_fatal_what[200];

/* ---- the per-row time budget ---------------------------------------------------------------
   A fuzzed state can put the guest in a loop that never ends - a string scan with no terminator in
   the sandbox's bytes is the usual one - and in a batch that is not one dead entry, it is every
   entry after it: one lift run sat on a single row for seventeen minutes of CPU. Each row gets a
   wall-clock budget; the row that blows it is reported as what it is and the batch moves on.

   There are TWO budgets because they catch different bugs, and the first version had only one and called
   it a wall clock while measuring clock(). clock() counts CPU TIME: a row that is compute-bound trips it,
   but a row blocked in the kernel - a shim that sleeps, a guest waiting on a message loop, a spin against
   a lock nobody holds - burns no CPU and never trips it. Those rows were invisible to the harness and
   visible only to the runner's 120s silence watchdog, which kills the whole chunk and then bisects a
   hundred-odd rows to find the culprit. A wall clock catches them in-process, reports them by name, and
   leaves the rest of the chunk alone. The two are reported under different reasons for exactly that
   reason: `timeout` means "this unit computes for a long time", `wall timeout` means "this unit is stuck
   somewhere that is not us", and the fix for one is not the fix for the other. */
static clock_t g_row_budget = 0;            /* 0: no budget (the single-entry proof, as before) */
static clock_t g_row_start = 0;
static time_t g_row_wall_budget = 0;        /* seconds of WALL time; 0: no limit */
static time_t g_row_start_wall = 0;

/* ---- the row filter (see --rows) -------------------------------------------------------------
   Which rows of an already-linked batch table this process may execute. Empty means "all", which is
   what every existing caller gets, so the option cannot silently narrow a normal run. */
#define MAX_ROW_FILTER 1024
static char *g_row_filter_list[MAX_ROW_FILTER];
static unsigned g_nrow_filter;
static const char *g_row_filter;

static int row_selected(const char *entry)
{
    if (!g_nrow_filter)
        return 1;                            /* no --rows given: every row runs, as before */
    for (unsigned i = 0; i < g_nrow_filter; ++i)
        if (!strcmp(g_row_filter_list[i], entry))
            return 1;
    return 0;
}

/* The budget has to be checked where the time is actually spent. A check at the top of the state loop
   only fires between states, and the hang that motivated it is ONE fuzzed state that never returns -
   a string scan with no terminator in the sandbox's bytes - so control never gets back to the top of
   any loop. The coverage counter runs at every translated instruction, which makes it the one place
   that is guaranteed to be reached; sampling it every 4096 instructions keeps the clock() call off the
   hot path while still bounding a row to a fraction of a second after it blows its budget. */
static unsigned g_tick;
/* Which budget this row has blown, or NULL. One function because the sampled check in the hot path and
   the between-states check below must not be able to disagree about what "ran out of time" means - they
   produce the same reason string for the same event, and the report groups on it.

   time(NULL) has one-second granularity, which is coarse for a budget measured in tens of seconds and
   exactly right for the 120s it is racing; the alternative is a QueryPerformanceCounter call on a path
   that every memory reference in the image samples. */
static const char* budget_expired(void)
{
    if (g_row_budget && (clock() - g_row_start) > g_row_budget)
        return "timeout";
    if (g_row_wall_budget && (time(NULL) - g_row_start_wall) > g_row_wall_budget)
        return "wall timeout";
    return NULL;
}

static void cow_check_budget(void)
{
    const char* which = budget_expired();
    if (!which)
        return;
    if (g_fatal_armed)
    {
        _snprintf(g_fatal_what, sizeof g_fatal_what - 1, "%s", which);
        g_fatal_what[sizeof g_fatal_what - 1] = '\0';
        g_fatal_armed = 0;
        g_row_budget = 0;                       /* do not unwind again on the way out */
        longjmp(g_fatal_jmp, 1);
    }
}

void cow_tick(unsigned *p)   /* not static: the instrumented bodies in another TU call it */
{
    ++*p;
    if ((++g_tick & 0xFFFu) == 0u)
        cow_check_budget();
}

/* The same budget, reached from INSIDE the generated image. cow_tick only exists in the instrumented
   body of the entry under proof; a bridged callee is the untouched original, so a fuzzed state that
   spins in a callee never passes a check and the whole chunk goes quiet on it. runtime/guest.h calls
   cow_mem_check() from its memory primitives when that TU is compiled with -DCOW_TICK_MEMORY, which
   lift_proof does for the cached image objects and nothing else. Sampled 1-in-64K because it fires on
   every guest memory reference, and clock() is not cheap. */
unsigned cow_mem_ticks;
unsigned cow_mem_writes;     /* referenced by guest.h's COW_MEM_WRITE; the count itself is only a sanity
                                read-out - what is compared is WHERE the writes went, per side, below */
void cow_mem_check(void)
{
    cow_check_budget();
}

/* ---- writes the regions cannot show -------------------------------------------------------------
   Memory is compared by diffing the mapped regions, so a store to an address outside every region is not
   "different", it is INVISIBLE - and a lift that handed the guest the address of one of its own C locals
   (`&uStack_4`, `&param_1`) stores through exactly such an address. 24 of those were passing, because the
   bytes the callee wrote were never looked at on either side. A pass that means "we did not look" is worse
   than a failure, so the proof build records every write that falls outside the compared regions and the
   two sides are asked whether they wrote the same places.

   It reports under its own reason rather than folding into `memory`, so the count is visible and a
   conversion that was only ever passing by invisibility can be found by name. */
#define OOR_MAX 64
static uint32_t g_oor_a[OOR_MAX], g_oor_b[OOR_MAX];
static unsigned g_noor_a, g_noor_b;

void cow_mem_write(uint32_t a, unsigned n)
{
    uint32_t* log;
    unsigned* count;
    if (g_logging_b)
    {
        log = g_oor_b;
        count = &g_noor_b;
    }
    else
    {
        log = g_oor_a;
        count = &g_noor_a;
    }
    for (int i = 0; i < g_nregions; ++i)
    {
        const Region* r = &g_regions[i];
        if (a >= r->lo && a + n <= r->lo + r->size)
            return;                    /* a region will be diffed anyway; nothing to add */
    }
    if (*count < OOR_MAX)
        (*count)++;
    log[(*count) - 1u] = a & ~3u;      /* word-granular: the region diff is too */
}

static int oor_equal(uint32_t* addr_out, uint32_t* a_out, uint32_t* b_out)
{
    unsigned i, n = g_noor_a < g_noor_b ? g_noor_a : g_noor_b;
    for (i = 0; i < n; ++i)
    {
        if (g_oor_a[i] != g_oor_b[i])
        {
            *addr_out = g_oor_a[i];
            *a_out = i + 1u;                       /* the ordinal of the write, not a value */
            *b_out = 0u;
            return 0;
        }
    }
    if (g_noor_a != g_noor_b)
    {
        *addr_out = g_noor_a ? g_oor_a[g_noor_a - 1u] : g_oor_b[g_noor_b - 1u];
        *a_out = g_noor_a;
        *b_out = g_noor_b;
        return 0;
    }
    return 1;
}

/* the runtime's handler for a call to something with no translation (an import thunk): log it in
   call order for whichever side is running, then ALWAYS let the real shim answer. Returning 0 here
   would tell the runtime nobody handled the target, and rt_fatal would kill a DllMain that has every
   right to call HeapAlloc - the log being full is our problem, not the guest's. */
static int cow_native(Guest* g, uint32_t target)
{
    CallRec* slot = NULL;
    /* The third route to the budget, and the one the other two cannot cover: a guest loop whose body is
       "call a shim" - a message pump, a Sleep, a retry against something the harness answers forever -
       touches no guest memory of interest and never reaches a translated instruction of the entry, so it
       outruns both cow_tick and COW_MEM_TICK. Every call the runtime cannot translate comes through here,
       and this is the cheapest place that is true. Sampled every 256 because clock()/time() are syscalls
       and a busy row makes plenty of these. */
    static unsigned g_native_tick;
    if ((++g_native_tick & 0xFFu) == 0u)
        cow_check_budget();
    if (g_logging_b)
    {
        if (g_ncalls_b < MAX_CALLS)
            slot = &g_calls_b[g_ncalls_b++];
        g_total_b++;
    }
    else
    {
        if (g_ncalls_a < MAX_CALLS)
            slot = &g_calls_a[g_ncalls_a++];
        g_total_a++;
    }
    if (slot)
    {
        slot->target = target;
        for (unsigned i = 0; i < 4; ++i)
            slot->args[i] = rd32(g->esp + 4u + 4u * i);
    }
    /* logged first, always: a conversion that never makes the call has to differ on the call count
       even when the answer itself is one the harness supplies */
    if (stub_for(target))
        return cow_answer_stub(g, stub_for(target));
    if (pinned_answer(g, target))
        return 1;
    return thunk_dispatch(g, target);
}

static uint32_t rd32le(const unsigned char* p) { uint32_t v; memcpy(&v, p, 4); return v; }
static uint16_t rd16le(const unsigned char* p) { uint16_t v; memcpy(&v, p, 2); return v; }

static uint64_t g_seed;

static uint64_t splitmix64(void)
{
    uint64_t z = (g_seed += 0x9E3779B97F4A7C15ull);
    z = (z ^ (z >> 30)) * 0xBF58476D1CE4E5B9ull;
    z = (z ^ (z >> 27)) * 0x94D049BB133111EBull;
    return z ^ (z >> 31);
}

/* A fuzzed word that is usually a *plausible* guest address - the arena, the stack, somewhere in the
   image - because a wild pointer faults on the first dereference and teaches us nothing. */
static uint32_t fuzz_word(void)
{
    uint64_t r = splitmix64();
    uint32_t span = rt_image_hi > rt_image_base + 64u ? rt_image_hi - rt_image_base - 64u : 64u;
    switch (r % 16u)
    {
    case 0: return (uint32_t)(r >> 32) & 0xFFu;
    case 1: return 0u;
    case 2: return 1u;
    case 3: return 0xFFFFFFFFu;
    case 4: return 0x80000000u;
    case 5:
    case 6: return ARENA_LO + (uint32_t)((r >> 16) % (ARENA_BYTES - 32u));
    case 7:
    case 8: return STACK_LO + (uint32_t)((r >> 16) % (STACK_BYTES - 32u));
    case 9:
    case 10:
    case 11: return rt_image_base + (uint32_t)((r >> 16) % span);
    case 12: return ARENA_LO + ARENA_BYTES - 4u;              /* the arena's last word */
    case 13: return STACK_LO;                                  /* the stack's first word */
    case 14: return rt_image_hi - 8u;                           /* the image's last bytes */
    default: return (uint32_t)(r >> 32);                        /* 1 state in 16: truly random */
    }
}

static void region_add(uint32_t lo, uint32_t size)
{
    Region* r;
    if (g_nregions >= MAX_REGIONS)
    {
        printf("COWDIFF FAIL %s too many tracked regions\n", cow_target_entry);
        exit(2);
    }
    r = &g_regions[g_nregions++];
    r->lo = lo;
    r->size = size;
    r->base = GUEST_PTR(lo);
    r->snap = (unsigned char*)malloc(size);
    r->after = (unsigned char*)malloc(size);
    if (!r->snap || !r->after)
    {
        printf("COWDIFF FAIL %s out of memory\n", cow_target_entry);
        exit(2);
    }
}

static void snap_save(void)
{
    for (int i = 0; i < g_nregions; ++i)
        memcpy(g_regions[i].snap, g_regions[i].base, g_regions[i].size);
}

static void snap_restore(void)
{
    for (int i = 0; i < g_nregions; ++i)
        memcpy(g_regions[i].base, g_regions[i].snap, g_regions[i].size);
}

static void result_save(void)
{
    for (int i = 0; i < g_nregions; ++i)
        memcpy(g_regions[i].after, g_regions[i].base, g_regions[i].size);
}

/* side A's saved memory against side B's live memory */
static int regions_equal(uint32_t* addr_out, uint32_t* a_out, uint32_t* b_out)
{
    for (int i = 0; i < g_nregions; ++i)
    {
        Region* r = &g_regions[i];
        const uint32_t* x = (const uint32_t*)r->after;
        const uint32_t* y = (const uint32_t*)r->base;
        for (uint32_t w = 0; w < r->size / 4u; ++w)
            if (x[w] != y[w])
            {
                *addr_out = r->lo + 4u * w;
                *a_out = x[w];
                *b_out = y[w];
                return 0;
            }
    }
    return 1;
}

/* A hand-written state from cow/seeds/<hex>.json, flattened by cowdiff.py onto the command line:

     --pin-args 0x980000,0,0,0        the four argument words above the return address
     --pin-mem  @arena+0x1c=01        a byte string to lay down before the state runs
     --pin-mem  @0x1034f02c=0000      absolute guest address instead of a region token
     --pin-call @0x10492e10=00209800  a write a *pinned import* performs when it answers, so a callee
                                      that replaces a global is modelled and the unit's decision to
                                      reload that global is something cowdiff can see

   Both sides always see the same pinned world, and pinned states run before the fuzzed ones so a
   hand-built branch always gets exercised. */
static Pin g_pins[128];
static int g_npins;

/* --pin arguments are collected during argv parsing and resolved only once the sandbox exists:
   "the object is the arena" names an address gwin_alloc decides at run time, so it cannot be turned
   into a number at parse time. */
typedef struct
{
    int is_args;
    int is_call; /* a --pin-call, not a --pin-mem: applied by a pinned import, not before the state */
    int is_answer; /* a --pin-answer: the value a pinned import hands back in eax */
    int is_stub; /* a --stub: what one callee answers in THIS state */
    const char* text;
} PinSrc;

static PinSrc g_pinsrc[512];
static int g_npinsrc;

static int hexnib(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    return -1;
}

static int pin_region(const char* s, const char** rest, uint32_t* base)
{
    if (!strncmp(s, "arena", 5) && ARENA_LO)
    {
        *base = ARENA_LO;
        *rest = s + 5;
        return 1;
    }
    if (!strncmp(s, "teb", 3) && gt_self())
    {
        /* the harness's TEB: fs:[0] is rd32(teb), so a unit that plays with the SEH chain can only be
           seeded by laying frames INTO it (added 2026-11-05 for f_103162e8, an RtlUnwind wrapper that
           reads the chain head twice and writes it back through the pointer it saved) */
        *base = gt_self()->teb;
        *rest = s + 3;
        return 1;
    }
    if (!strncmp(s, "stack", 5) && STACK_LO)
    {
        *base = STACK_LO;
        *rest = s + 5;
        return 1;
    }
    if (!strncmp(s, "image", 5))
    {
        *base = rt_image_base;
        *rest = s + 5;
        return 1;
    }
    return 0;
}

static int parse_pin_args(const char* s, Pin* p)
{
    const char* q = s;
    p->nargs = 0;
    while (*q && p->nargs < 8)
    {
        char* end = NULL;
        unsigned long long v;
        /* a token may be a region name, so a seed can say "the object is the arena" without
           knowing where gwin_alloc happened to put it: arena, arena+0x1c, stack+0x20, image+0x900 */
        if (*q == '@' || !strncmp(q, "arena", 5) || !strncmp(q, "stack", 5) || !strncmp(q, "image", 5))
        {
            const char* r = q;
            uint32_t base = 0;
            if (*r == '@')
                ++r;
            if (!pin_region(r, &r, &base))
                return 0;
            if (*r == '+')
            {
                char* e2 = NULL;
                v = base + strtoull(r + 1, &e2, 0);
                if (e2 == r + 1)
                    return 0;
                r = e2;
            }
            else
                v = base;
            if (*r == ',')
                ++r;
            else if (*r)
                return 0;
            p->arg[p->nargs++] = (uint32_t)v;
            q = r;
            continue;
        }
        v = strtoull(q, &end, 0);
        if (end == q)
            return 0;
        p->arg[p->nargs++] = (uint32_t)v;
        if (!*end)
            break;
        if (*end != ',')
            return 0;
        q = end + 1;
    }
    return p->nargs > 0;
}

/* one @where+off=hexbytes token */
static int parse_pin_write(const char* s, PinWrite* out)
{
    const char* q = s;
    uint32_t base = 0;
    char* end = NULL;
    if (*q == '@')
        ++q;
    if (pin_region(q, &q, &base))
    {
        if (*q == '+')
            ++q;
        else if (*q != '=')
            return 0;
    }
    else
    {
        base = 0;
    }
    {
        unsigned long long off = 0;
        if (*q != '=')
        {
            off = strtoull(q, &end, 0);
            if (end == q)
                return 0;
            if (*end == '+') /* an absolute address with its own +off, e.g. @0x00981100+4 */
            {
                const char* q2 = end + 1;
                char* end2 = NULL;
                const unsigned long long off2 = strtoull(q2, &end2, 0);
                if (end2 == q2)
                    return 0;
                off += off2;
                end = end2;
            }
        }
        else
        {
            end = (char*)q;
        }
        if (*end != '=')
            return 0;
        q = end + 1;
        out->where = base;
        out->off = (uint32_t)off;
        out->n = 0;
        while (*q && out->n < 32)
        {
            int hi = hexnib(*q++), lo = *q ? hexnib(*q++) : -1;
            if (hi < 0 || lo < 0)
                return 0;
            out->b[out->n++] = (unsigned char)((hi << 4) | lo);
        }
    }
    return out->n > 0;
}

static int parse_pin_mem(const char* s, Pin* p)
{
    if (p->nwrite >= 16 || !parse_pin_write(s, &p->w[p->nwrite]))
        return 0;
    ++p->nwrite;
    return 1;
}

static int parse_pin_call(const char* s, Pin* p)
{
    if (p->ncall >= 4 || !parse_pin_write(s, &p->cw[p->ncall]))
        return 0;
    ++p->ncall;
    return 1;
}

static void pin_apply(const Pin* p)
{
    for (int i = 0; i < p->nwrite; ++i)
    {
        uint32_t a = (p->w[i].where ? p->w[i].where : 0u) + p->w[i].off;
        memcpy(GUEST_PTR(a), p->w[i].b, (size_t)p->w[i].n);
    }
}

static void guest_fill(Guest* g, unsigned nargs, const Pin* pin)
{
    uint32_t sp = (STACK_LO + STACK_BYTES - 0x400u - 4u * (nargs + 1u)) & ~0xFu;
    memset(g, 0, sizeof(*g));
    /* gt_init() wired fs_base to the thread's TEB; the memset above just erased it, and an entry that
       reads `fs:[0]` (the SEH chain head) would otherwise read guest address 0 and fault there while
       the RtlUnwind shim walks a different page entirely. Re-wire it after every fill. */
    g->fs_base = gt_self()->teb;
    g->esp = sp;
    wr32(sp, 0u); /* the return address slot: the translations pop it and return to us */
    for (unsigned i = 0; i < nargs; ++i)
        wr32(sp + 4u + 4u * i,
             (pin && (int)i < pin->nargs) ? pin->arg[i] : fuzz_word());
    g->eax = fuzz_word();
    g->ebx = fuzz_word();
    g->ecx = fuzz_word();
    g->edx = fuzz_word();
    g->esi = fuzz_word();
    g->edi = fuzz_word();
    g->ebp = fuzz_word();
    for (unsigned i = 0; i < 8; ++i)
        g->st[i] = (double)(int32_t)fuzz_word() / 4096.0;
    g->top = (uint32_t)(fuzz_word() % 8u);
    g->fcw = 0x027F;
    g->cf = g->pf = g->af = g->zf = g->sf = g->of = g->df = (uint8_t)(fuzz_word() & 1u);
}

typedef struct
{
    uint32_t eax, edx, ebx, esi, edi, ebp, esp, top;
    double st0;
    int faulted;
} Outcome;

/* rt_fatal's answer, from rt_set_fatal_hook. Raising a real exception (rather than longjmp, which
   would leave the __try frame's SEH record behind) lets the existing handler below take it, and both
   sides reach it through the same rt_call_indirect, so a call into unmapped code is AGREEMENT on a
   fault instead of a dead harness. Falls through to abort() only if something outside a run_side call
   hits rt_fatal, which is exactly the bug it should still be. */
static void cow_fatal_hook(uint32_t addr, const char* what)
{
#ifdef _MSC_VER
    RaiseException(COW_EX_NO_TRANSLATION, 0, 0, NULL);
#endif
    /* The SEH route above is the normal one and normally does not return. If it did - nothing was
       listening, because this fatal happened outside a run_side frame - abort() would take every
       remaining row of a batch with it. Inside an armed row, unwind to the row guard instead and let
       the run finish; outside one, fall through and keep the old behaviour. */
    (void)addr;
    if (g_fatal_armed)
    {
        _snprintf(g_fatal_what, sizeof g_fatal_what - 1, "fatal: %s", what ? what : "?");
        g_fatal_what[sizeof g_fatal_what - 1] = '\0';
        g_fatal_armed = 0;
        longjmp(g_fatal_jmp, 1);
    }
}

static void run_side(GuestFn fn, Guest* g, Outcome* o)
{
    memset(o, 0, sizeof(*o));
#ifdef _MSC_VER
    __try
    {
        fn(g);
    }
    __except (GetExceptionCode() == COW_EX_ACCESS_VIOLATION ||
              GetExceptionCode() == COW_EX_ILLEGAL_INSTRUCTION ||
              GetExceptionCode() == COW_EX_INT_DIVIDE_BY_ZERO ||
              GetExceptionCode() == COW_EX_STACK_OVERFLOW ||
              GetExceptionCode() == COW_EX_NO_TRANSLATION
                  ? (o->faulted = (int)GetExceptionCode(), EXCEPTION_EXECUTE_HANDLER)
                  : EXCEPTION_CONTINUE_SEARCH)
    {
    }
#else
    fn(g);
#endif
    o->eax = g->eax;
    o->edx = g->edx;
    o->ebx = g->ebx;
    o->esi = g->esi;
    o->edi = g->edi;
    o->ebp = g->ebp;
    o->esp = g->esp;
    o->top = g->top;
    o->st0 = g->st[g->top & 7u];
}

static int parse_u32(const char* s, uint32_t* out)
{
    char* end = NULL;
    unsigned long long v = strtoull(s, &end, 0);
    if (!end || *end)
        return 0;
    *out = (uint32_t)v;
    return 1;
}

/* One entry's worth of states: the loop main() used to run inline, so the table build can run it once
   per row against the one mapped image instead of paying a link per entry. Returns the number of
   mismatching states; the caller decides what to print, because a 943-row table must not print 943
   paragraphs. */
typedef struct
{
    uint32_t mismatches;
    uint32_t first_state;
    const char* why;
    uint32_t reached;
    uint32_t total_states;
} EntryRun;

static EntryRun run_entry(uint32_t seed, uint32_t states, uint32_t nargs, int quiet)
{
    EntryRun r;
    Outcome oa, ob;
    /* NOT `g`: that macro is main()'s shorthand for this thread's Guest, and it is defined after this
       function - a local pointer says the same thing without shadowing anything */
    Guest* gg = &gt_self()->g;
    memset(&r, 0, sizeof(r));
    memset(&oa, 0, sizeof(oa));
    memset(&ob, 0, sizeof(ob));
    r.total_states = states + (uint32_t)g_npins;
    g_row_start = clock();
    g_row_start_wall = time(NULL);

    for (uint32_t st = 0; st < r.total_states; ++st)
    {
        const char* blew = budget_expired();
        if (blew)
        {
            /* Report it as a mismatch so the row counts as failed, with a why that says the proof ran
               out of time rather than that the conversion is wrong - they look the same in a log and
               mean opposite things. */
            r.mismatches++;
            if (!r.first_state)
            {
                r.first_state = st;
                r.why = blew;
            }
            break;
        }
        const Pin* pin = st < (uint32_t)g_npins ? &g_pins[st] : NULL;
        g_active_pin = pin; /* its --pin-call writes are what a pinned import performs in this state */
        uint32_t maddr = 0, va = 0, vb = 0;
        const char* why = NULL;
        uint64_t base_seed = (uint64_t)seed * 0x100000001B3ull + ((uint64_t)g_va << 21)
                             + (st + 1u) * 0x9E3779B1ull;
        g_seed = base_seed;

        snap_restore();
        if (pin)
            pin_apply(pin);
        /* NOT cleared per state: cow_cov accumulates over the whole run, so "blocks" is the union of
           what any state reached (clearing it reported only the last state's path and hid the
           branches the seeds had already exercised) */
        guest_fill(gg, nargs, pin);
        g_ncalls_a = g_ncalls_b = 0;
        g_total_a = g_total_b = 0;
        g_noor_a = g_noor_b = 0;
        g_logging_b = 0;
        pin_reset(base_seed); /* the same pinned answers for both sides, in the same order */
        run_side(g_side_a, gg, &oa);
        result_save();

        snap_restore();
        /* the same starting world, not the next one: guest_fill() draws from g_seed, so re-seed or
           the two sides silently test different inputs (this is how the first run "found" ten
           mismatches in a function whose translation was copied verbatim) */
        g_seed = base_seed;
        if (pin)
            pin_apply(pin);
        guest_fill(gg, nargs, pin);
        g_logging_b = 1;
        pin_reset(base_seed); /* the same pinned answers as side A: same seed, same order of calls */
        run_side(g_side_b, gg, &ob);

        if (oa.faulted != ob.faulted)
            why = "fault";
        else if (!oa.faulted && oa.eax != ob.eax)
            why = "eax";
        else if (!oa.faulted && oa.edx != ob.edx)
            why = "edx";
        else if (!oa.faulted && (oa.ebx != ob.ebx || oa.esi != ob.esi || oa.edi != ob.edi
                                 || oa.ebp != ob.ebp))
            why = "callee-saved register";
        else if (!oa.faulted && oa.esp != ob.esp)
            why = "esp";
        else if (oa.top != ob.top || oa.st0 != ob.st0)
            why = "st0";
        else if (!regions_equal(&maddr, &va, &vb))
            why = "memory";
        /* The comparison that closes the blind spot: the regions matched, so nothing ANYWHERE says the
           two sides behaved alike - until now. Reported under its own name so a unit that was only ever
           passing invisibly is findable, rather than hidden inside a `memory` count that predates it. */
        else if (!oor_equal(&maddr, &va, &vb))
            why = "out-of-region write";
        else if (g_total_a != g_total_b)
            why = "call count";
        else
        {
            for (int c = 0; c < g_ncalls_a; ++c)
                if (g_calls_a[c].target != g_calls_b[c].target ||
                    memcmp(g_calls_a[c].args, g_calls_b[c].args, sizeof(g_calls_a[c].args)))
                {
                    why = "call args";
                    maddr = (uint32_t)c;
                    break;
                }
        }
        if (why)
        {
            if (!r.mismatches)
            {
                r.first_state = st;
                r.why = why;
            }
            r.mismatches++;
            if (!quiet)
                printf("  %s state %u: %s (eax %08x/%08x edx %08x/%08x esp %08x/%08x fault %d/%d "
                       "@%08x %08x/%08x)\n",
                       g_name, st, why, oa.eax, ob.eax, oa.edx, ob.edx, oa.esp, ob.esp, oa.faulted,
                       ob.faulted, maddr, va, vb);
            if (!quiet && (oa.ebx != ob.ebx || oa.esi != ob.esi || oa.edi != ob.edi || oa.ebp != ob.ebp))
                printf("      callee-saved: ebx %08x/%08x esi %08x/%08x edi %08x/%08x ebp %08x/%08x\n",
                       oa.ebx, ob.ebx, oa.esi, ob.esi, oa.edi, ob.edi, oa.ebp, ob.ebp);
            if (r.mismatches >= MAX_MISMATCH)
                break;
        }
    }

    for (unsigned k = 0; k < g_cov_count; ++k)
        if (g_cov[k])
            r.reached++;
    return r;
}

int main(int argc, char** argv)
{
    setvbuf(stdout, NULL, _IONBF, 0);
    const char* retail = argc > 1 ? argv[1] : NULL;
    const char* game = argc > 2 ? argv[2] : NULL;
    uint32_t entry = 0, seed = 12345u, states = 2000u, nargs = 4u;
    int json = 0, quiet = 0, i, table_mode = 0;
    unsigned reached = 0, nbad = 0;
    uint32_t first_bad = 0;
    const char* first_why = NULL;
    uint32_t total_states = 0;

    for (i = 3; i < argc; ++i)
    {
        if (!strcmp(argv[i], "--json"))
            json = 1;
        else if (!strcmp(argv[i], "--table"))
            table_mode = 1;
        else if (!strcmp(argv[i], "--rows") && i + 1 < argc)
        {
            /* Run only these rows of an already-linked table build. A chunk that hung is re-run with
               the culprit removed, and rebuilding 400 instrumented bodies to drop one row costs minutes
               for a second of work - so the exe is reused and this says which rows it may execute. */
            g_row_filter = argv[++i];
            g_nrow_filter = 0;
            char *dup = _strdup(argv[i]), *tok = strtok(dup, ",");
            while (tok && g_nrow_filter < MAX_ROW_FILTER)
            {
                if (*tok)
                    g_row_filter_list[g_nrow_filter++] = tok;
                tok = strtok(NULL, ",");
            }
        }
        else if (!strcmp(argv[i], "--quiet"))
            quiet = 1;
        else if (!strcmp(argv[i], "--entry") && i + 1 < argc && parse_u32(argv[++i], &entry))
            ;
        else if (!strcmp(argv[i], "--seed") && i + 1 < argc && parse_u32(argv[++i], &seed))
            ;
        else if (!strcmp(argv[i], "--states") && i + 1 < argc && parse_u32(argv[++i], &states))
            ;
        else if (!strcmp(argv[i], "--args") && i + 1 < argc && parse_u32(argv[++i], &nargs))
            ;
        else if (!strcmp(argv[i], "--pin-args") && i + 1 < argc)
        {
            if (g_npinsrc >= 512)
            {
                printf("too many --pin states\n");
                return 2;
            }
            g_pinsrc[g_npinsrc].is_args = 1;
            g_pinsrc[g_npinsrc++].text = argv[++i];
        }
        else if (!strcmp(argv[i], "--pin-answer") && i + 1 < argc)
        {
            if (g_npinsrc >= 512)
            {
                printf("too many --pin states\n");
                return 2;
            }
            g_pinsrc[g_npinsrc].is_args = 0;
            g_pinsrc[g_npinsrc].is_call = 0;
            g_pinsrc[g_npinsrc].is_answer = 1;
            g_pinsrc[g_npinsrc++].text = argv[++i];
        }
        else if ((!strcmp(argv[i], "--pin-mem") || !strcmp(argv[i], "--pin-call")) && i + 1 < argc)
        {
            if (g_npinsrc >= 512)
            {
                printf("too many --pin states\n");
                return 2;
            }
            g_pinsrc[g_npinsrc].is_args = 0;
            g_pinsrc[g_npinsrc].is_call = !strcmp(argv[i], "--pin-call");
            g_pinsrc[g_npinsrc++].text = argv[++i];
        }
        else if (!strcmp(argv[i], "--stub") && i + 1 < argc)
        {
            /* --stub 0x1015e350=0x00000001,0xc */
            /* Collected as a per-state spec first: whichever state's --pin-args came last owns it, the
               same rule --pin-answer uses. The global table below stays for a --stub given outside any
               state, but a state that declares stubs is authoritative - see stub_for(). */
            if (g_npinsrc < 512)
            {
                /* A COPY, not argv[i+1]: the global parse below splits that very string on '=' and ',' in
                   place, so a stored pointer would arrive here already chopped to just the target. */
                static char stub_text[512][48];
                const int k = g_npinsrc;
                snprintf(stub_text[k], sizeof stub_text[0], "%s", argv[i + 1]);
                g_pinsrc[k].is_args = 0;
                g_pinsrc[k].is_call = 0;
                g_pinsrc[k].is_answer = 0;
                g_pinsrc[k].is_stub = 1;
                g_pinsrc[k].text = stub_text[k];
                g_npinsrc = k + 1;
            }
            char* eq = strchr(argv[i + 1], '=');
            char* comma = eq ? strchr(eq, ',') : NULL;
            uint32_t t = 0, v = 0, pop = 0;
            if (!eq || !comma || g_nstubs >= (int)(sizeof g_stubs / sizeof g_stubs[0]))
            {
                printf("bad --stub %s (want 0xTARGET=0xEAX,POPCOUNT)\n", argv[i + 1]);
                return 2;
            }
            *eq = '\0';
            *comma = '\0';
            if (!parse_u32(argv[i + 1], &t) || !parse_u32(eq + 1, &v) || !parse_u32(comma + 1, &pop))
            {
                printf("bad --stub %s\n", argv[i + 1]);
                return 2;
            }
            g_stubs[g_nstubs].target = t;
            g_stubs[g_nstubs].eax = v;
            g_stubs[g_nstubs].pop = pop;
            ++g_nstubs;
            ++i;
        }
        else
        {
            printf("usage: cowdiff.exe <retail dll> <game dir> --entry 0xHEX "
                   "[--states N] [--seed N] [--args N] [--json] [--quiet]\n");
            return 2;
        }
    }
    if (!retail || !game || (!entry && !table_mode))
    {
        printf("usage: cowdiff.exe <retail dll> <game dir> --entry 0xHEX | --table [...]\n");
        return 2;
    }
    if (!table_mode && !cow_has_adapter)
    {
        printf("COWDIFF FAIL %s no cow_adapter_%s in src/ - nothing to compare against\n",
               cow_target_entry, cow_target_entry);
        return 1;
    }

    if (!gwin_init())
    {
        printf("cannot reserve the guest window\n");
        return 2;
    }
    gt_init();
    /* the harness runs each side on the thread Guest itself: a converted unit that bridges
       back into guest code (guest_thiscall/guest_call in gthread.c) reaches the callee through
       gt_self()->g, and A/B only mean the same experiment when both sides share that Guest */
    #define g (gt_self()->g)
    k32_init(game, "C:\\Program Files (x86)\\PlayOnline\\SquareEnix\\PlayOnlineViewer\\pol.exe");
    k32_io_init();
    k32_misc_init();
    ole_init();
    vfs_init(game);
    reg_init(NULL, 0, NULL);
    rt_set_native_handler(cow_native);
    rt_set_call_stub(cow_call_stub);   /* --stub: answer a callee on BOTH sides, from one table */
    rt_set_fatal_hook(cow_fatal_hook); /* rt_fatal: fault the state instead of aborting the harness */
    if (!pe_load(retail))
    {
        printf("cannot map %s\n", retail);
        return 2;
    }

    {
        /* one DllMain, so the globals read like a real load; every state then starts from here */
        uint32_t dllmain[3] = { rt_image_base, 1u, 0u };
        guest_call(rt_image_oep, 3, dllmain);
    }

    ARENA_LO = gwin_alloc(ARENA_BYTES);
    STACK_LO = gwin_alloc(STACK_BYTES);
    if (!ARENA_LO || !STACK_LO)
    {
        printf("cannot carve the sandbox\n");
        return 2;
    }
    {
        /* deterministic pseudo-random bytes: a pointer into the arena reads the same on both sides */
        unsigned char* a = GUEST_PTR(ARENA_LO);
        uint64_t s = 0xC0FFEEull;
        for (uint32_t k = 0; k < ARENA_BYTES; k += 4u)
        {
            s += 0x9E3779B97F4A7C15ull;
            s = (s ^ (s >> 30)) * 0xBF58476D1CE4E5B9ull;
            s = (s ^ (s >> 27)) * 0x94D049BB133111EBull;
            memcpy(a + k, &s, 4);
        }
    }

    /* The image stores part of its import table unbound: slots whose file word is the RVA of a
       hint/name record, with no entry in the import directory to bind them (iat_slot.py reads the
       record and names them; pe.c cannot bind what the directory does not index, because the
       directory is where the DLL name lives). The unpacking stub's DllMain then marks every one of
       those slots 0xfff010d0+i, so even the RVA is gone from memory by the time a unit runs - and a
       unit whose chain reaches one (f_102d920a's spline evaluator asks GetVersionExA and RegOpenKeyA
       through ones) would call through the marker and crash. Bind them here, from the same file the
       loader read, after DllMain has stamped its 0xfff010d0 markers (the file word is what matters), so both sides run the real shim and the binding is
       baseline memory. */
    {
        uint32_t bound = 0;
        const char* retail_path = retail;
        size_t fsize = 0;
        unsigned char* fimg = plat_read_file(retail_path, &fsize);

        if (fimg)
        {
            const uint32_t nt = rd32le(fimg + 0x3C);
            const uint32_t sec_off = nt + 4 + 20 + rd16le(fimg + nt + 4 + 16);
            const unsigned nsec = rd16le(fimg + nt + 4 + 2);
            for (uint32_t slot = rt_image_base + 0x329000u; slot < rt_image_base + 0x32A000u; slot += 4u)
            {
                /* the file's own word for this slot: find the section holding it */
                uint32_t rva = slot - rt_image_base;
                uint32_t fv = 0;
                for (unsigned sc = 0; sc < nsec; ++sc)
                {
                    const uint32_t so = sec_off + sc * 40;
                    const uint32_t va = rd32le(fimg + so + 12);
                    const uint32_t vsz = rd32le(fimg + so + 8);
                    const uint32_t raw = rd32le(fimg + so + 16);
                    const uint32_t ptr = rd32le(fimg + so + 20);
                    if (rva >= va && rva < va + vsz && raw && ptr + (rva - va) + 4u <= fsize)
                    {
                        fv = rd32le(fimg + ptr + (rva - va));
                        break;
                    }
                }
                if (fv < 0x1000u || fv >= rt_image_hi - rt_image_base - 64u)
                    continue;                    /* not an RVA into the image */
                const unsigned char* rec = GUEST_PTR(fv + rt_image_base);
                if (rec[0] & 0x80u)
                    continue;                    /* ordinal import */
                const char* name = (const char*)(rec + 2);
                unsigned i;
                for (i = 0; i < 48 && ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z')
                                       || (name[i] >= '0' && name[i] <= '9') || name[i] == '_'); ++i)
                    ;
                if (i < 3 || name[i] != 0)
                    continue;                    /* not a hint/name record */
                const uint32_t t = thunk_bind_hint(name);
                if (t)
                {
                    wr32(slot, t);
                    ++bound;
                }
            }
            free(fimg);
        }
        printf("[cowdiff] bound %u unbound hint/name IAT slots\n", bound); fflush(stdout);
    }

    region_add(rt_image_base, rt_image_hi - rt_image_base);
    region_add(ARENA_LO, ARENA_BYTES);
    region_add(STACK_LO, STACK_BYTES);
    /* the TEB holds the SEH chain head that `fs:[0]` names; without it in the snapshot, a state that
       pins a chain leaks it into every later state, and a fuzz state follows the stale head into a
       handler address that exists only in the previous world (found 2026-11-05 on f_103162e8). */
    region_add(gt_self()->teb, 0x1000u);
    snap_save();

    for (int k = 0; k < g_npinsrc; ++k)
    {
        if (g_pinsrc[k].is_args)
        {
            if (g_npins >= 128)
            {
                printf("too many --pin states (128 max)\n");
                return 2;
            }
            if (!parse_pin_args(g_pinsrc[k].text, &g_pins[g_npins++]))
            {
                printf("bad --pin-args %s\n", g_pinsrc[k].text);
                return 2;
            }
        }
        else
        {
            if (!g_npins)
                g_npins = 1; /* a bare --pin-mem is still a state */
            if (g_pinsrc[k].is_stub)
            {
                /* TARGET=0xEAX,POPCOUNT, into the state that is being built */
                char buf[64];
                snprintf(buf, sizeof buf, "%s", g_pinsrc[k].text);
                char* eq = strchr(buf, '=');
                char* comma = eq ? strchr(eq, ',') : NULL;
                uint32_t t = 0, v = 0, pop = 0;
                Pin* p = &g_pins[g_npins - 1];
                if (!eq || !comma)
                {
                    printf("bad --stub %s (want 0xTARGET=0xEAX,POPCOUNT)\n", g_pinsrc[k].text);
                    return 2;
                }
                *eq = '\0';      /* split the copy the way the global parser splits its own */
                *comma = '\0';
                if (!parse_u32(buf, &t) || !parse_u32(eq + 1, &v)
                    || !parse_u32(comma + 1, &pop) || p->nstub >= 8)
                {
                    printf("bad --stub %s (want 0xTARGET=0xEAX,POPCOUNT)\n", g_pinsrc[k].text);
                    return 2;
                }
                p->stub[p->nstub].target = t;
                p->stub[p->nstub].eax = v;
                p->stub[p->nstub].pop = pop;
                ++p->nstub;
            }
            else if (g_pinsrc[k].is_answer)
            {
                uint32_t v = 0;
                Pin* p = &g_pins[g_npins - 1];
                if (!parse_u32(g_pinsrc[k].text, &v) || p->nanswer >= 4)
                {
                    printf("bad --pin-answer %s (want a 32-bit value)\n", g_pinsrc[k].text);
                    return 2;
                }
                p->answer[p->nanswer++] = v;
            }
            else if (!(g_pinsrc[k].is_call ? parse_pin_call(g_pinsrc[k].text, &g_pins[g_npins - 1])
                                      : parse_pin_mem(g_pinsrc[k].text, &g_pins[g_npins - 1])))
            {
                printf("bad --pin-mem %s (want @arena+0x1c=01 or @0x1034f02c=0000)\n",
                       g_pinsrc[k].text);
                return 2;
            }
        }
    }

    if (table_mode)
    {
        /* every row of the table, in this one process: the image, the sandbox and DllMain are shared, so
           the cost that used to be one link per entry is one link for the whole table */
        if (!cow_batch_count)
        {
            printf("COWDIFF FAIL table: the target file has no rows - run python tools/cow/cowdiff.py --table\n");
            return 2;
        }
        uint32_t rows_failed = 0, rows_fatal = 0;
        for (unsigned r = 0; r < cow_batch_count; ++r)
        {
            const CowBatchRow* br = &cow_batch_rows[r];
            if (!row_selected(br->entry))
                continue;                    /* --rows: this exe was linked for a wider set */
            select_entry(br->entry, br->va, br->a, br->b, br->cov, br->cov_count, br->sites);
            memset(br->cov, 0, sizeof(unsigned) * br->cov_count);
            /* A guest that reaches something the runtime cannot answer dies with abort(), which would
               take the remaining rows of the batch with it - and in a lift run, where most entries call
               into code the harness has no shim for yet, that is the whole run. rt_fatal calls the
               fatal hook first, so the hook unwinds here instead: the row is reported as what it is
               (fatal, with the runtime's own words) and the batch carries on. Outside a row the hook is
               disarmed and abort() keeps its meaning. */
            EntryRun run;
            memset(&run, 0, sizeof run);
            g_fatal_armed = 1;
            g_fatal_what[0] = '\0';
            g_row_wall_budget = 60;                         /* ... and 60 WALL seconds: the half that
                                                               catches a row parked in the kernel, which
                                                               clock() cannot see and the runner's 120s
                                                               silence watchdog finds only by killing the
                                                               chunk it shares with 399 innocent rows */
            g_row_budget = (clock_t)CLOCKS_PER_SEC * 25;   /* a row that cannot finish in 25 CPU-seconds
                                                              is not blocking the other 399 */
            if (setjmp(g_fatal_jmp) == 0)
            {
                run = run_entry(seed, states, nargs, 1);
            }
            else
            {
                run.mismatches = 1;
                run.why = g_fatal_what[0] ? g_fatal_what : "fatal";
                rows_fatal++;
            }
            g_fatal_armed = 0;
            if (json)
                printf("{\"entry\":\"%s\",\"table\":true,\"states\":%u,\"mismatches\":%u,"
                       "\"first_state\":%u,\"reason\":\"%s\",\"blocks\":%u,\"blocks_total\":%u,"
                       "\"pass\":%s}\n",
                       br->entry, run.total_states, run.mismatches, run.first_state,
                       run.why ? run.why : "", run.reached, br->cov_count,
                       run.mismatches ? "false" : "true");
            if (run.mismatches)
            {
                rows_failed++;
                printf("COWDIFF FAIL %s %u mismatch(es), first at state %u (%s)\n", br->entry,
                       run.mismatches, run.first_state, run.why ? run.why : "?");
            }
            else if (!quiet)
            {
                /* A row that passed used to print nothing at all, so "the batch reported 142 lines out
                   of 272 rows" read like a crash when it was a 48% pass rate. A proof you cannot count
                   is not a proof. */
                printf("COWDIFF PASS %s states=%u blocks=%u/%u\n", br->entry, run.total_states,
                       run.reached, br->cov_count);
            }
        }
        printf("COWDIFF TABLE %s rows=%u failed=%u fatal=%u states=%u pinned=%u\n",
               rows_failed ? "FAIL" : "PASS", cow_batch_count, rows_failed, rows_fatal, states,
               g_pinned_calls);
        return rows_failed ? 1 : 0;
    }

    if (!quiet && !json)
        printf("cowdiff %s: image 0x%08x+0x%x arena 0x%08x stack 0x%08x states=%u seed=%u nargs=%u\n",
               cow_target_entry, rt_image_base, rt_image_hi - rt_image_base, ARENA_LO, STACK_LO,
               states, seed, nargs);

    select_entry(cow_target_entry, entry, cow_side_a, cow_side_b, cow_cov, cow_cov_count,
                 cow_cov_sites);
    EntryRun run = run_entry(seed, states, nargs, quiet);
    nbad = run.mismatches; first_bad = run.first_state; first_why = run.why;
    reached = run.reached; total_states = run.total_states;

    if (json)
    {
        printf("{\"entry\":\"%s\",\"states\":%u,\"seed\":%u,\"mismatches\":%u,\"first_state\":%u,"
               "\"reason\":\"%s\",\"blocks\":%u,\"blocks_total\":%u,\"pass\":%s",
               cow_target_entry, total_states, seed, nbad, first_bad, first_why ? first_why : "", reached,
               cow_cov_count, nbad ? "false" : "true");
        if (reached != cow_cov_count)
        {
            printf(",\"unreached\":[");
            for (unsigned k = 0, first = 1; k < cow_cov_count; ++k)
                if (!cow_cov[k])
                {
                    printf("%s\"%s\"", first ? "" : ",", cow_cov_sites[k] ? cow_cov_sites[k] : "?");
                    first = 0;
                }
            printf("]");
        }
        printf("}\n");
    }
    if (nbad)
    {
        printf("COWDIFF FAIL %s %u mismatch(es), first at state %u (%s)\n", cow_target_entry, nbad,
               first_bad, first_why ? first_why : "?");
        return 1;
    }
    printf("COWDIFF PASS %s states=%u blocks=%u/%u", cow_target_entry, total_states, reached, cow_cov_count);
    if (g_pinned_calls) /* never let a PASS look stronger than it is: say what we answered for it */
        printf(" pinned=%u (clock/RNG imports answered by the harness, not by Windows)",
               g_pinned_calls);
    printf("\n");
    if (!quiet && reached != cow_cov_count)
        for (unsigned k = 0; k < cow_cov_count; ++k)
            if (!cow_cov[k])
                printf("  unreached: /* %s */\n", cow_cov_sites[k] ? cow_cov_sites[k] : "?");
    return 0;
}
