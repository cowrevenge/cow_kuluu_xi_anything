/* layout/cow_call.h - how a unit calls guest code, by calling convention.            (docs/cow/SYSTEM2.md)

   A unit's own C function takes ordinary parameters. When it has to call ANOTHER function of the game (or
   an imported Windows/CRT function), that callee is still guest code: it reads its arguments off the guest
   stack and its `this` out of ecx. These helpers put the arguments where the callee looks, run it, and
   leave the guest stack as the calling convention says it is left.

       target   a RUNTIME address. A function inside the image is COW_IMG(0x10xxxxxxu); an import is the
                value of its IAT slot, rd32(COW_IMG(0x10329xxxu)); a virtual call is rd32(vtable + slot).
       nargs    how many 32-bit stack arguments follow. EVERY argument is passed as a uint32_t
                (cast: (uint32_t)x). Left to right, as the C source of the game would have written them -
                i.e. the LAST one pushed in the assembly is the FIRST argument here.
       returns  eax after the call. edx (the high half of a 64-bit result) is g->edx; a float result is on
                the x87 stack - take it with cow_take_float(g).

   Which helper - read it off the CALLEE, not the call site:
       the callee ends in `ret`      and takes no `this`   cow_cdecl      (the caller pops the arguments)
       the callee ends in `ret N`    and takes no `this`   cow_stdcall    (the callee pops N bytes)
       the callee ends in `ret N`    and reads ecx first   cow_thiscall   (ecx = this, the callee pops)
       the callee ends in `ret`      and reads ecx first   cow_thiscall_cdecl (ecx = this, the caller pops)
       ecx AND edx carry arguments                         cow_fastcall   (the callee pops the rest)
   Windows API imports (kernel32, user32, gdi32, advapi32, winmm, ole32, imm32, ws2_32 ...) are stdcall.
   C runtime imports (msvcrt: malloc, free, memcpy, sprintf, ...) are cdecl.

   Header-only on purpose: a unit needs nothing but `#include "cow_call.h"`, and no build list changes. */
#ifndef COW_LAYOUT_CALL_H
#define COW_LAYOUT_CALL_H

#include <stdarg.h>

#include "cow.h"
#include "lifted_bridges.h" /* cow_bridge_indirect: pushes, sets the registers, runs the target, cleans up */

#define COW_CALL_MAX_ARGS 16u

static inline uint32_t cow_call_va(Guest* g, uint32_t target, uint32_t ecx, uint32_t edx, int caller_pops,
                                   unsigned nargs, va_list ap)
{
    uint32_t args[COW_CALL_MAX_ARGS];
    unsigned i;
    if (nargs > COW_CALL_MAX_ARGS)
        rt_fatal(g, target, "cow_call: more than 16 arguments");
    for (i = 0; i < nargs; ++i)
        args[i] = va_arg(ap, uint32_t);
    /* the return-address word the callee pops is 0: nothing may depend on its value, and it is dead stack
       as soon as the callee returns */
    return cow_bridge_indirect(g, target, 0u, nargs, args, ecx, edx, g->eax, caller_pops ? 4u * nargs : 0u);
}

/* int __cdecl f(a, b, c): the callee ends in a bare `ret`; the caller pops */
static inline uint32_t cow_cdecl(Guest* g, uint32_t target, unsigned nargs, ...)
{
    uint32_t r;
    va_list ap;
    va_start(ap, nargs);
    r = cow_call_va(g, target, g->ecx, g->edx, 1, nargs, ap);
    va_end(ap);
    return r;
}

/* int __stdcall f(a, b, c): the callee ends in `ret 12` */
static inline uint32_t cow_stdcall(Guest* g, uint32_t target, unsigned nargs, ...)
{
    uint32_t r;
    va_list ap;
    va_start(ap, nargs);
    r = cow_call_va(g, target, g->ecx, g->edx, 0, nargs, ap);
    va_end(ap);
    return r;
}

/* obj->method(a, b): `this` in ecx, the callee ends in `ret 8` */
static inline uint32_t cow_thiscall(Guest* g, uint32_t target, uint32_t self, unsigned nargs, ...)
{
    uint32_t r;
    va_list ap;
    va_start(ap, nargs);
    r = cow_call_va(g, target, self, g->edx, 0, nargs, ap);
    va_end(ap);
    return r;
}

/* `this` in ecx but the CALLER pops (a method with no stack arguments also fits cow_thiscall with nargs 0) */
static inline uint32_t cow_thiscall_cdecl(Guest* g, uint32_t target, uint32_t self, unsigned nargs, ...)
{
    uint32_t r;
    va_list ap;
    va_start(ap, nargs);
    r = cow_call_va(g, target, self, g->edx, 1, nargs, ap);
    va_end(ap);
    return r;
}

/* int __fastcall f(a, b, c, d): a in ecx, b in edx, the rest on the stack, the callee pops */
static inline uint32_t cow_fastcall(Guest* g, uint32_t target, uint32_t ecx, uint32_t edx, unsigned nargs, ...)
{
    uint32_t r;
    va_list ap;
    va_start(ap, nargs);
    r = cow_call_va(g, target, ecx, edx, 0, nargs, ap);
    va_end(ap);
    return r;
}

/* anything else: say every register the callee reads and who pops */
static inline uint32_t cow_call_regs(Guest* g, uint32_t target, uint32_t eax, uint32_t ecx, uint32_t edx,
                                     int caller_pops, unsigned nargs, ...)
{
    uint32_t r;
    va_list ap;
    va_start(ap, nargs);
    g->eax = eax;
    r = cow_call_va(g, target, ecx, edx, caller_pops, nargs, ap);
    va_end(ap);
    return r;
}

/* ---- floats ------------------------------------------------------------------------------------------
   A function that returns float/double leaves the value on the x87 stack. Returning one: cow_ret_float as
   the LAST thing the unit does. Receiving one from a callee: cow_take_float right after the call.
   Arithmetic: the game runs most code with the x87 in 24-bit precision, where every result is rounded to
   single. fr(g, x) (runtime/guest.h) does exactly what the original does in either mode, so write
   fr(g, a * b) and fr(g, a + b) - one fr() per x87 arithmetic instruction - and the unit is right in both. */
static inline void cow_ret_float(Guest* g, double value)
{
    fpush(g, value);
}

static inline double cow_take_float(Guest* g)
{
    return fpop(g);
}

/* ---- locals that have an address ----------------------------------------------------------------------
   A C local cannot be handed to guest code: the callee would be given a host address. A buffer or struct
   the original keeps in its own stack frame AND passes by address has to live in guest memory, at the
   address the original has it (an imported function's pointer arguments are compared with the original's).

       sp0     the esp the entry arrived with (the adapter's first line reads it)
       below   how far below sp0 the local starts.  With `push ebp; mov ebp, esp`:  [ebp - X]  is  sp0 - 4 - X.

   cow_frame returns that guest address and moves esp below it, so nothing the unit calls afterwards can
   overwrite the local. The adapter puts esp back (g->esp = sp0) before it returns. */
static inline uint32_t cow_frame(Guest* g, uint32_t sp0, uint32_t below)
{
    const uint32_t at = sp0 - below;
    if (g->esp > (at & ~3u))
        g->esp = at & ~3u;
    return at;
}

#endif /* COW_LAYOUT_CALL_H */
