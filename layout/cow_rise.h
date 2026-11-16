/* layout/cow_rise.h - the few helpers a unit written by tools/cow/rise/rise.py needs beyond cow_call.h.

   Bit casts between the x87's doubles and the stack words the original keeps them in, the x87 status
   word of a comparison, and the tail call (a `jmp` to another function: the callee returns for us). */
#ifndef COW_LAYOUT_RISE_H
#define COW_LAYOUT_RISE_H

#include <stdint.h>
#include <string.h>

#include "cow_call.h"

/* a float kept in a 32-bit stack word, and back */
static inline uint32_t cow_f2bits(double x)
{
    float f = (float)x;
    uint32_t u;
    memcpy(&u, &f, 4);
    return u;
}

static inline double cow_bits2f(uint32_t u)
{
    float f;
    memcpy(&f, &u, 4);
    return (double)f;
}

/* a double kept in two stack words (low word at the lower address), and back */
static inline uint32_t cow_dlo(double d)
{
    uint64_t u;
    memcpy(&u, &d, 8);
    return (uint32_t)u;
}

static inline uint32_t cow_dhi(double d)
{
    uint64_t u;
    memcpy(&u, &d, 8);
    return (uint32_t)(u >> 32);
}

static inline double cow_bits2d(uint32_t lo, uint32_t hi)
{
    const uint64_t u = ((uint64_t)hi << 32) | lo;
    double d;
    memcpy(&d, &u, 8);
    return d;
}

/* a 64-bit integer kept in two stack words */
static inline uint32_t cow_qlo(int64_t q) { return (uint32_t)(uint64_t)q; }
static inline uint32_t cow_qhi(int64_t q) { return (uint32_t)((uint64_t)q >> 32); }
static inline int64_t cow_i64(uint32_t lo, uint32_t hi) { return (int64_t)(((uint64_t)hi << 32) | lo); }
static inline double cow_i64d(uint32_t lo, uint32_t hi) { return (double)(int64_t)(((uint64_t)hi << 32) | lo); }

/* FNSTSW after FCOM a, b with `depth` values pushed since entry: C3 C2 C0 as fcom() sets them, C1 = 0,
   and TOP as the x87 has it at that moment */
static inline uint16_t cow_fsw(Guest* g, double a, double b, unsigned depth)
{
    unsigned c3, c2, c0;
    if (a != a || b != b) { c3 = 1; c2 = 1; c0 = 1; }
    else if (a > b) { c3 = 0; c2 = 0; c0 = 0; }
    else if (a < b) { c3 = 0; c2 = 0; c0 = 1; }
    else { c3 = 1; c2 = 0; c0 = 0; }
    return (uint16_t)((c3 << 14) | (((g->top - depth) & 7u) << 11) | (c2 << 10) | (c0 << 8));
}

/* `jmp target` out of the function: the target runs on the caller's return address and arguments and
   returns for us. esp is left where the callee's ret put it (above the entry esp), which is how the
   adapter knows the return has already happened. */
static inline uint32_t cow_tailcall(Guest* g, uint32_t target, uint32_t eax, uint32_t ecx, uint32_t edx)
{
    const uint32_t sp = g->esp;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    (void)sp;
    rt_call_indirect(g, target);
    return g->eax;
}

/* FSCALE */
static inline double cow_fscale(double x, double s) { return ldexp(x, (int)trunc(s)); }

/* the recompiler's divide-error trap, for instructions kept in its own words */
#define COW_RT_DIVIDE(addr) rt_fatal(g, (addr), "divide error (#DE)")

/* integer helpers the instructions need */
static inline uint32_t cow_bswap32(uint32_t v)
{
    return (v >> 24) | ((v >> 8) & 0xFF00u) | ((v << 8) & 0xFF0000u) | (v << 24);
}
static inline uint32_t cow_imul_ovf8(uint32_t a, uint32_t b) { int32_t p = (int32_t)(int8_t)a * (int32_t)(int8_t)b; return p != (int8_t)p; }
static inline uint32_t cow_imul_ovf16(uint32_t a, uint32_t b) { int32_t p = (int32_t)(int16_t)a * (int32_t)(int16_t)b; return p != (int16_t)p; }
static inline uint32_t cow_imul_ovf32(uint32_t a, uint32_t b) { int64_t p = (int64_t)(int32_t)a * (int64_t)(int32_t)b; return p != (int32_t)p; }
static inline uint64_t cow_mulu(uint32_t a, uint32_t b) { return (uint64_t)a * b; }
static inline int64_t cow_muls(uint32_t a, uint32_t b) { return (int64_t)(int32_t)a * (int64_t)(int32_t)b; }

/* DIV / IDIV: a zero divisor or a quotient that does not fit is the CPU's divide error (#DE) */
static inline uint32_t cow_divu64(Guest* g, uint32_t hi, uint32_t lo, uint32_t d)
{
    const uint64_t n = ((uint64_t)hi << 32) | lo;
    if (!d || n / d > 0xFFFFFFFFull) rt_fatal(g, 0, "divide error (#DE)");
    return (uint32_t)(n / d);
}
static inline uint32_t cow_modu64(Guest* g, uint32_t hi, uint32_t lo, uint32_t d)
{
    const uint64_t n = ((uint64_t)hi << 32) | lo;
    if (!d || n / d > 0xFFFFFFFFull) rt_fatal(g, 0, "divide error (#DE)");
    return (uint32_t)(n % d);
}
static inline uint32_t cow_divs64(Guest* g, uint32_t hi, uint32_t lo, uint32_t d)
{
    const int64_t n = (int64_t)(((uint64_t)hi << 32) | lo);
    if (!d || (n == INT64_MIN && (int32_t)d == -1)) rt_fatal(g, 0, "divide error (#DE)");
    {
        const int64_t q = n / (int32_t)d;
        if (q > INT32_MAX || q < INT32_MIN) rt_fatal(g, 0, "divide error (#DE)");
        return (uint32_t)(int32_t)q;
    }
}
static inline uint32_t cow_mods64(Guest* g, uint32_t hi, uint32_t lo, uint32_t d)
{
    const int64_t n = (int64_t)(((uint64_t)hi << 32) | lo);
    (void)cow_divs64(g, hi, lo, d);
    return (uint32_t)(int32_t)(n % (int32_t)d);
}
static inline uint32_t cow_divu(Guest* g, uint32_t n, uint32_t d) { if (!d) rt_fatal(g, 0, "divide error (#DE)"); return n / d; }
static inline uint32_t cow_modu(Guest* g, uint32_t n, uint32_t d) { if (!d) rt_fatal(g, 0, "divide error (#DE)"); return n % d; }
static inline uint32_t cow_divs(Guest* g, uint32_t n, uint32_t d)
{
    if (!d || (n == 0x80000000u && d == 0xFFFFFFFFu)) rt_fatal(g, 0, "divide error (#DE)");
    return (uint32_t)((int32_t)n / (int32_t)d);
}
static inline uint32_t cow_mods(Guest* g, uint32_t n, uint32_t d)
{
    if (!d || (n == 0x80000000u && d == 0xFFFFFFFFu)) rt_fatal(g, 0, "divide error (#DE)");
    return (uint32_t)((int32_t)n % (int32_t)d);
}

#endif /* COW_LAYOUT_RISE_H */
