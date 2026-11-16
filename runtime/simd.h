/* MMX, 3DNow!, SSE and the SSE2 forms FFXiMain uses: the guest's vector registers and what each
 * instruction does to them, as plain C on values. Included by guest.h after the Guest struct; the
 * recompiler (recomp/x86c.py, simd()) emits one call per instruction:
 *
 *     g->xmm[1] = sse_mulps(g->xmm[1], rd128(A));     mulps xmm1, [eax]
 *     g->mm[0] = mmx_paddd(g->mm[0], g->mm[1]);        paddd mm0, mm1
 *
 * The registers live in Guest (not in locals): they are not saved across calls by any convention, and a
 * vector function is a leaf more often than not, so keeping them in g costs nothing worth measuring.
 *
 * WHAT THE RESULTS ARE
 *   SSE single and double arithmetic is IEEE in the precision the instruction names, round to nearest
 *   (MXCSR's default, which nothing in FFXiMain changes: there is no ldmxcsr in it), no flush to zero.
 *   C float arithmetic is exactly that on every host the runtime builds for (x64 and arm64 evaluate float
 *   in float), so `a * b` on two floats is the instruction.
 *   The estimates (rcpps, rcpss, rsqrtss, rsqrtps, and 3DNow!'s pfrcp and pfrsqrt) are documented only as
 *   "within 1.5 * 2^-12" and differ between Intel and AMD parts, so no single answer is the hardware's.
 *   They return the correctly rounded value, which is inside every vendor's bound.
 *   3DNow!'s refinement steps (pfrcpit1, pfrcpit2, pfrsqit1) take their second operand: with an estimate
 *   that is already exact, the canonical sequences AMD documents (pfrcp; pfrcpit1; pfrcpit2 and pfrsqrt;
 *   pfmul; pfrsqit1; pfrcpit2) end on the exact value, which is what those sequences are for. This is
 *   also how QEMU executes them.
 *   3DNow! has no denormals: an input or result smaller than FLT_MIN is zero, as on the hardware.
 *
 * MMX and x87: on the hardware the mm registers are the x87 registers' mantissas. The x87 model here keeps
 * doubles and no tag word, so the two are kept apart; code that is correct on the hardware separates the
 * two with emms/femms and never reads one through the other, and that is all FFXiMain does.
 */
#pragma once

#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

/* GuestXmm (the 128-bit register) is defined in guest.h, before the Guest struct that holds eight. */

RT_INLINE uint64_t simd_mask(int w) { return w >= 64 ? ~0ull : ((1ull << w) - 1); }

/* ---- memory ------------------------------------------------------------------------------------------ */

RT_INLINE GuestXmm rd128(uint32_t a)
{
    GuestXmm v;
    COW_MEM_TICK();
    COW_MEM_READ(a);
    memcpy(&v, GUEST_PTR(a), 16);
    return v;
}
RT_INLINE void wr128(uint32_t a, GuestXmm v)
{
    COW_MEM_TICK();
    COW_MEM_WRITE(a, 16, v.d[0]);
    memcpy(GUEST_PTR(a), &v, 16);
}

/* ---- lanes ------------------------------------------------------------------------------------------- */

RT_INLINE float simd_f(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }
RT_INLINE uint32_t simd_u(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
RT_INLINE float mm_f(uint64_t v, int i) { return simd_f((uint32_t)(v >> (32 * i))); }
RT_INLINE uint64_t mm_ff(float lo, float hi) { return (uint64_t)simd_u(lo) | ((uint64_t)simd_u(hi) << 32); }
RT_INLINE uint32_t mm_d(uint64_t v, int i) { return (uint32_t)(v >> (32 * i)); }
RT_INLINE uint16_t mm_w(uint64_t v, int i) { return (uint16_t)(v >> (16 * i)); }
RT_INLINE uint8_t mm_b(uint64_t v, int i) { return (uint8_t)(v >> (8 * i)); }
RT_INLINE GuestXmm xmm_q(uint64_t lo, uint64_t hi) { GuestXmm r; r.q[0] = lo; r.q[1] = hi; return r; }
RT_INLINE GuestXmm xmm_zero(void) { return xmm_q(0, 0); }

/* ---- MMX: moves, logic -------------------------------------------------------------------------------- */

RT_INLINE uint64_t mmx_pand(uint64_t a, uint64_t b) { return a & b; }
RT_INLINE uint64_t mmx_pandn(uint64_t a, uint64_t b) { return ~a & b; }
RT_INLINE uint64_t mmx_por(uint64_t a, uint64_t b) { return a | b; }
RT_INLINE uint64_t mmx_pxor(uint64_t a, uint64_t b) { return a ^ b; }

/* ---- MMX: lane-wise integer arithmetic ------------------------------------------------------------------ */

#define MMX_LANES(name, W, N, EXPR)                                                                         \
    RT_INLINE uint64_t mmx_##name(uint64_t a, uint64_t b)                                                   \
    {                                                                                                       \
        uint64_t r = 0;                                                                                     \
        for (int i = 0; i < N; ++i)                                                                         \
        {                                                                                                   \
            const uint64_t m = simd_mask(W);                                       \
            const uint64_t x = (a >> (W * i)) & m, y = (b >> (W * i)) & m;                                  \
            const uint64_t v = (uint64_t)(EXPR) & m;                                                        \
            r |= v << (W * i);                                                                              \
        }                                                                                                   \
        return r;                                                                                           \
    }

RT_INLINE int64_t simd_sat(int64_t v, int64_t lo, int64_t hi) { return v < lo ? lo : v > hi ? hi : v; }

MMX_LANES(paddb, 8, 8, x + y)
MMX_LANES(paddw, 16, 4, x + y)
MMX_LANES(paddd, 32, 2, x + y)
MMX_LANES(psubb, 8, 8, x - y)
MMX_LANES(psubw, 16, 4, x - y)
MMX_LANES(psubd, 32, 2, x - y)
MMX_LANES(paddsb, 8, 8, simd_sat((int8_t)x + (int8_t)y, -128, 127))
MMX_LANES(paddsw, 16, 4, simd_sat((int16_t)x + (int16_t)y, -32768, 32767))
MMX_LANES(psubsb, 8, 8, simd_sat((int8_t)x - (int8_t)y, -128, 127))
MMX_LANES(psubsw, 16, 4, simd_sat((int16_t)x - (int16_t)y, -32768, 32767))
MMX_LANES(paddusb, 8, 8, simd_sat((int64_t)x + (int64_t)y, 0, 255))
MMX_LANES(paddusw, 16, 4, simd_sat((int64_t)x + (int64_t)y, 0, 65535))
MMX_LANES(psubusb, 8, 8, simd_sat((int64_t)x - (int64_t)y, 0, 255))
MMX_LANES(psubusw, 16, 4, simd_sat((int64_t)x - (int64_t)y, 0, 65535))
MMX_LANES(pmullw, 16, 4, (int32_t)(int16_t)x * (int32_t)(int16_t)y)
MMX_LANES(pmulhw, 16, 4, ((int32_t)(int16_t)x * (int32_t)(int16_t)y) >> 16)
MMX_LANES(pcmpeqb, 8, 8, x == y ? ~0ull : 0)
MMX_LANES(pcmpeqw, 16, 4, x == y ? ~0ull : 0)
MMX_LANES(pcmpeqd, 32, 2, x == y ? ~0ull : 0)
MMX_LANES(pcmpgtb, 8, 8, (int8_t)x > (int8_t)y ? ~0ull : 0)
MMX_LANES(pcmpgtw, 16, 4, (int16_t)x > (int16_t)y ? ~0ull : 0)
MMX_LANES(pcmpgtd, 32, 2, (int32_t)x > (int32_t)y ? ~0ull : 0)
MMX_LANES(pavgb, 8, 8, (x + y + 1) >> 1)
MMX_LANES(pavgw, 16, 4, (x + y + 1) >> 1)
MMX_LANES(pminub, 8, 8, x < y ? x : y)
MMX_LANES(pmaxub, 8, 8, x > y ? x : y)
MMX_LANES(pminsw, 16, 4, (int16_t)x < (int16_t)y ? x : y)
MMX_LANES(pmaxsw, 16, 4, (int16_t)x > (int16_t)y ? x : y)

RT_INLINE uint64_t mmx_pmaddwd(uint64_t a, uint64_t b)
{
    uint64_t r = 0;
    for (int i = 0; i < 2; ++i)
    {
        const int32_t s = (int32_t)(int16_t)mm_w(a, 2 * i) * (int16_t)mm_w(b, 2 * i) +
                          (int32_t)(int16_t)mm_w(a, 2 * i + 1) * (int16_t)mm_w(b, 2 * i + 1);
        r |= (uint64_t)(uint32_t)s << (32 * i);
    }
    return r;
}

/* ---- MMX: shifts (a count past the lane width empties it, or fills it with the sign) -------------------- */

#define MMX_SHIFT(name, W, N, EXPR, WIDE)                                                                   \
    RT_INLINE uint64_t mmx_##name(uint64_t a, uint64_t n)                                                   \
    {                                                                                                       \
        uint64_t r = 0;                                                                                     \
        for (int i = 0; i < N; ++i)                                                                         \
        {                                                                                                   \
            const uint64_t m = simd_mask(W);                                       \
            const uint64_t x = (a >> (W * i)) & m;                                                          \
            const uint64_t v = (n >= W ? (uint64_t)(WIDE) : (uint64_t)(EXPR)) & m;                          \
            r |= v << (W * i);                                                                              \
        }                                                                                                   \
        return r;                                                                                           \
    }

MMX_SHIFT(psllw, 16, 4, x << n, 0)
MMX_SHIFT(pslld, 32, 2, x << n, 0)
MMX_SHIFT(psllq, 64, 1, x << n, 0)
MMX_SHIFT(psrlw, 16, 4, x >> n, 0)
MMX_SHIFT(psrld, 32, 2, x >> n, 0)
MMX_SHIFT(psrlq, 64, 1, x >> n, 0)
MMX_SHIFT(psraw, 16, 4, (int16_t)x >> n, (int16_t)x >> 15)
MMX_SHIFT(psrad, 32, 2, (int32_t)x >> n, (int32_t)x >> 31)

/* ---- MMX: pack and unpack -------------------------------------------------------------------------------- */

RT_INLINE uint64_t mmx_packsswb(uint64_t a, uint64_t b)
{
    uint64_t r = 0;
    for (int i = 0; i < 4; ++i)
    {
        r |= (uint64_t)(uint8_t)simd_sat((int16_t)mm_w(a, i), -128, 127) << (8 * i);
        r |= (uint64_t)(uint8_t)simd_sat((int16_t)mm_w(b, i), -128, 127) << (8 * (i + 4));
    }
    return r;
}
RT_INLINE uint64_t mmx_packuswb(uint64_t a, uint64_t b)
{
    uint64_t r = 0;
    for (int i = 0; i < 4; ++i)
    {
        r |= (uint64_t)(uint8_t)simd_sat((int16_t)mm_w(a, i), 0, 255) << (8 * i);
        r |= (uint64_t)(uint8_t)simd_sat((int16_t)mm_w(b, i), 0, 255) << (8 * (i + 4));
    }
    return r;
}
RT_INLINE uint64_t mmx_packssdw(uint64_t a, uint64_t b)
{
    uint64_t r = 0;
    for (int i = 0; i < 2; ++i)
    {
        r |= (uint64_t)(uint16_t)simd_sat((int32_t)mm_d(a, i), -32768, 32767) << (16 * i);
        r |= (uint64_t)(uint16_t)simd_sat((int32_t)mm_d(b, i), -32768, 32767) << (16 * (i + 2));
    }
    return r;
}
/* the low (or high) halves of a and b, interleaved a, b, a, b from the low lane up */
#define MMX_UNPACK(name, W, HIGH)                                                                           \
    RT_INLINE uint64_t mmx_##name(uint64_t a, uint64_t b)                                                   \
    {                                                                                                       \
        const int n = 32 / W;                                                                               \
        const uint64_t m = simd_mask(W);                                                                 \
        uint64_t r = 0;                                                                                     \
        for (int i = 0; i < n; ++i)                                                                         \
        {                                                                                                   \
            const int k = i + (HIGH ? n : 0);                                                               \
            r |= ((a >> (W * k)) & m) << (W * (2 * i));                                                     \
            r |= ((b >> (W * k)) & m) << (W * (2 * i + 1));                                                 \
        }                                                                                                   \
        return r;                                                                                           \
    }
MMX_UNPACK(punpcklbw, 8, 0)
MMX_UNPACK(punpcklwd, 16, 0)
MMX_UNPACK(punpckhbw, 8, 1)
MMX_UNPACK(punpckhwd, 16, 1)
RT_INLINE uint64_t mmx_punpckldq(uint64_t a, uint64_t b) { return (a & 0xFFFFFFFFull) | (b << 32); }
RT_INLINE uint64_t mmx_punpckhdq(uint64_t a, uint64_t b) { return (a >> 32) | (b & 0xFFFFFFFF00000000ull); }

RT_INLINE uint32_t mmx_pmovmskb(uint64_t a)
{
    uint32_t r = 0;
    for (int i = 0; i < 8; ++i)
        r |= (uint32_t)(mm_b(a, i) >> 7) << i;
    return r;
}

/* x86's NaN rule for SSE (and, here, 3DNow!) arithmetic: a NaN operand comes back quieted, the FIRST operand's when both are
   NaN. C leaves that unspecified (a compiler may swap the operands of a commutative + or *), so it is made
   explicit here. */
RT_INLINE int simd_nan2(float x, float y, float* r)
{
    uint32_t u;
    if (x != x) { u = simd_u(x) | 0x00400000u; *r = simd_f(u); return 1; }
    if (y != y) { u = simd_u(y) | 0x00400000u; *r = simd_f(u); return 1; }
    return 0;
}
RT_INLINE int simd_nan2d(double x, double y, double* r)
{
    uint64_t u;
    if (x != x) { memcpy(&u, &x, 8); u |= 0x0008000000000000ull; memcpy(r, &u, 8); return 1; }
    if (y != y) { memcpy(&u, &y, 8); u |= 0x0008000000000000ull; memcpy(r, &u, 8); return 1; }
    return 0;
}
RT_INLINE float simd_arith_(float x, float y, float v) { float r; return simd_nan2(x, y, &r) ? r : v; }
RT_INLINE float simd_unary_(float y, float v) { float r; return simd_nan2(y, y, &r) ? r : v; }
RT_INLINE double simd_arithd_(double x, double y, double v) { double r; return simd_nan2d(x, y, &r) ? r : v; }

/* ---- 3DNow! ------------------------------------------------------------------------------------------------ */

/* no denormals: a value smaller than FLT_MIN in magnitude is a zero of its sign */
RT_INLINE float n3d(float x) { return (x != 0.0f && fabsf(x) < FLT_MIN) ? copysignf(0.0f, x) : x; }
#define N3D_LANES(name, EXPR)                                                                               \
    RT_INLINE uint64_t n3d_##name(uint64_t a, uint64_t b)                                                   \
    {                                                                                                       \
        float r[2];                                                                                         \
        for (int i = 0; i < 2; ++i)                                                                         \
        {                                                                                                   \
            const float x = n3d(mm_f(a, i)), y = n3d(mm_f(b, i));                                           \
            (void)x;                                                                                        \
            (void)y;                                                                                        \
            r[i] = n3d(EXPR);                                                                               \
        }                                                                                                   \
        return mm_ff(r[0], r[1]);                                                                           \
    }
/* 3DNow! documents no result for a NaN or infinite operand; the SSE rule (the first operand's NaN, quieted)
   makes every compilation of these give the same bits, which C on its own does not */
N3D_LANES(pfadd, simd_arith_(x, y, x + y))
N3D_LANES(pfsub, simd_arith_(x, y, x - y))
N3D_LANES(pfsubr, simd_arith_(y, x, y - x))
N3D_LANES(pfmul, simd_arith_(x, y, x * y))
N3D_LANES(pfmin, x < y ? x : y)
N3D_LANES(pfmax, x > y ? x : y)
#define N3D_CMP(name, OP)                                                                                   \
    RT_INLINE uint64_t n3d_##name(uint64_t a, uint64_t b)                                                   \
    {                                                                                                       \
        uint64_t r = 0;                                                                                     \
        for (int i = 0; i < 2; ++i)                                                                         \
            if (n3d(mm_f(a, i)) OP n3d(mm_f(b, i)))                                                         \
                r |= 0xFFFFFFFFull << (32 * i);                                                             \
        return r;                                                                                           \
    }
N3D_CMP(pfcmpeq, ==)
N3D_CMP(pfcmpge, >=)
N3D_CMP(pfcmpgt, >)
RT_INLINE float n3d_add(float x, float y) { x = n3d(x); y = n3d(y); return n3d(simd_arith_(x, y, x + y)); }
RT_INLINE float n3d_sub(float x, float y) { x = n3d(x); y = n3d(y); return n3d(simd_arith_(x, y, x - y)); }
RT_INLINE uint64_t n3d_pfacc(uint64_t a, uint64_t b)
{
    return mm_ff(n3d_add(mm_f(a, 0), mm_f(a, 1)), n3d_add(mm_f(b, 0), mm_f(b, 1)));
}
RT_INLINE uint64_t n3d_pfnacc(uint64_t a, uint64_t b)
{
    return mm_ff(n3d_sub(mm_f(a, 0), mm_f(a, 1)), n3d_sub(mm_f(b, 0), mm_f(b, 1)));
}
RT_INLINE uint64_t n3d_pfpnacc(uint64_t a, uint64_t b)
{
    return mm_ff(n3d_sub(mm_f(a, 0), mm_f(a, 1)), n3d_add(mm_f(b, 0), mm_f(b, 1)));
}
RT_INLINE uint64_t n3d_pswapd(uint64_t a, uint64_t b) { (void)a; return (b >> 32) | (b << 32); }
/* the estimates read the LOW value of the source and give it in both lanes */
RT_INLINE uint64_t n3d_pfrcp(uint64_t a, uint64_t b)
{
    (void)a;
    const float r = n3d(1.0f / n3d(mm_f(b, 0)));
    return mm_ff(r, r);
}
RT_INLINE uint64_t n3d_pfrsqrt(uint64_t a, uint64_t b)
{
    (void)a;
    const float r = n3d(1.0f / sqrtf(fabsf(n3d(mm_f(b, 0)))));
    return mm_ff(r, r);
}
RT_INLINE uint64_t n3d_pfrcpit1(uint64_t a, uint64_t b) { (void)a; return b; }
RT_INLINE uint64_t n3d_pfrcpit2(uint64_t a, uint64_t b) { (void)a; return b; }
RT_INLINE uint64_t n3d_pfrsqit1(uint64_t a, uint64_t b) { (void)a; return b; }
RT_INLINE uint64_t n3d_pi2fd(uint64_t a, uint64_t b)
{
    (void)a;
    return mm_ff((float)(int32_t)mm_d(b, 0), (float)(int32_t)mm_d(b, 1));
}
/* float to int32, truncating; out of range saturates */
RT_INLINE uint32_t n3d_f2i(float x)
{
    x = n3d(x);
    if (x != x)
        return 0x80000000u;
    if (x >= 2147483648.0f)
        return 0x7FFFFFFFu;
    if (x <= -2147483648.0f)
        return 0x80000000u;
    return (uint32_t)(int32_t)x;
}
RT_INLINE uint64_t n3d_pf2id(uint64_t a, uint64_t b)
{
    (void)a;
    return (uint64_t)n3d_f2i(mm_f(b, 0)) | ((uint64_t)n3d_f2i(mm_f(b, 1)) << 32);
}

/* ---- SSE: packed and scalar single ---------------------------------------------------------------------- */

#define SSE_PS(name, EXPR)                                                                                  \
    RT_INLINE GuestXmm sse_##name##ps(GuestXmm a, GuestXmm b)                                               \
    {                                                                                                       \
        GuestXmm r;                                                                                         \
        for (int i = 0; i < 4; ++i)                                                                         \
        {                                                                                                   \
            const float x = a.f[i], y = b.f[i];                                                             \
            (void)x;                                                                                        \
            (void)y;                                                                                        \
            r.f[i] = (EXPR);                                                                                \
        }                                                                                                   \
        return r;                                                                                           \
    }                                                                                                       \
    RT_INLINE GuestXmm sse_##name##ss(GuestXmm a, GuestXmm b)                                               \
    {                                                                                                       \
        const float x = a.f[0], y = b.f[0];                                                                 \
        (void)x;                                                                                            \
        (void)y;                                                                                            \
        a.f[0] = (EXPR);                                                                                    \
        return a;                                                                                           \
    }
SSE_PS(add, simd_arith_(x, y, x + y))
SSE_PS(sub, simd_arith_(x, y, x - y))
SSE_PS(mul, simd_arith_(x, y, x * y))
SSE_PS(div, simd_arith_(x, y, x / y))
/* max/min return the SECOND operand when either is a NaN or both are zeros (that is the instruction) */
SSE_PS(max, x > y ? x : y)
SSE_PS(min, x < y ? x : y)
SSE_PS(sqrt, simd_unary_(y, sqrtf(y)))
SSE_PS(rcp, simd_unary_(y, 1.0f / y))
SSE_PS(rsqrt, simd_unary_(y, 1.0f / sqrtf(y)))

/* cmpps / cmpss: the predicate is the instruction's immediate (capstone names it in the mnemonic) */
RT_INLINE uint32_t sse_pred(float x, float y, int p)
{
    const int un = x != x || y != y;
    int t;
    switch (p & 7)
    {
    case 0: t = !un && x == y; break;   /* eq */
    case 1: t = !un && x < y; break;    /* lt */
    case 2: t = !un && x <= y; break;   /* le */
    case 3: t = un; break;              /* unord */
    case 4: t = un || x != y; break;    /* neq */
    case 5: t = un || !(x < y); break;  /* nlt */
    case 6: t = un || !(x <= y); break; /* nle */
    default: t = !un; break;            /* ord */
    }
    return t ? 0xFFFFFFFFu : 0u;
}
RT_INLINE GuestXmm sse_cmpps(GuestXmm a, GuestXmm b, int p)
{
    GuestXmm r;
    for (int i = 0; i < 4; ++i)
        r.d[i] = sse_pred(a.f[i], b.f[i], p);
    return r;
}
RT_INLINE GuestXmm sse_cmpss(GuestXmm a, GuestXmm b, int p)
{
    a.d[0] = sse_pred(a.f[0], b.f[0], p);
    return a;
}

#define SSE_BITS(name, OP)                                                                                  \
    RT_INLINE GuestXmm sse_##name(GuestXmm a, GuestXmm b) { return xmm_q(OP(a.q[0], b.q[0]), OP(a.q[1], b.q[1])); }
#define SIMD_AND(x, y) ((x) & (y))
#define SIMD_ANDN(x, y) (~(x) & (y))
#define SIMD_OR(x, y) ((x) | (y))
#define SIMD_XOR(x, y) ((x) ^ (y))
SSE_BITS(andps, SIMD_AND)
SSE_BITS(andnps, SIMD_ANDN)
SSE_BITS(orps, SIMD_OR)
SSE_BITS(xorps, SIMD_XOR)

RT_INLINE GuestXmm sse_shufps(GuestXmm a, GuestXmm b, int imm)
{
    GuestXmm r;
    r.d[0] = a.d[imm & 3];
    r.d[1] = a.d[(imm >> 2) & 3];
    r.d[2] = b.d[(imm >> 4) & 3];
    r.d[3] = b.d[(imm >> 6) & 3];
    return r;
}
RT_INLINE GuestXmm sse_unpcklps(GuestXmm a, GuestXmm b)
{
    GuestXmm r;
    r.d[0] = a.d[0]; r.d[1] = b.d[0]; r.d[2] = a.d[1]; r.d[3] = b.d[1];
    return r;
}
RT_INLINE GuestXmm sse_unpckhps(GuestXmm a, GuestXmm b)
{
    GuestXmm r;
    r.d[0] = a.d[2]; r.d[1] = b.d[2]; r.d[2] = a.d[3]; r.d[3] = b.d[3];
    return r;
}
RT_INLINE GuestXmm sse_movhlps(GuestXmm a, GuestXmm b) { a.q[0] = b.q[1]; return a; }
RT_INLINE GuestXmm sse_movlhps(GuestXmm a, GuestXmm b) { a.q[1] = b.q[0]; return a; }
RT_INLINE uint32_t sse_movmskps(GuestXmm a)
{
    return (a.d[0] >> 31) | ((a.d[1] >> 31) << 1) | ((a.d[2] >> 31) << 2) | ((a.d[3] >> 31) << 3);
}

/* ---- conversions ------------------------------------------------------------------------------------------ */

/* to int32 by the current rounding (round to nearest even); a NaN or out-of-range value is 0x80000000 */
RT_INLINE uint32_t sse_cvt_i(float x)
{
    if (!(x > -2147483904.0f && x < 2147483648.0f))
        return 0x80000000u;
    return (uint32_t)(int32_t)nearbyintf(x);
}
RT_INLINE uint32_t sse_cvtt_i(float x)
{
    if (!(x > -2147483904.0f && x < 2147483648.0f))
        return 0x80000000u;
    return (uint32_t)(int32_t)x;
}
RT_INLINE GuestXmm sse_cvtps2pd(GuestXmm b)
{
    GuestXmm r;
    r.pd[0] = (double)b.f[0];
    r.pd[1] = (double)b.f[1];
    return r;
}
RT_INLINE GuestXmm sse_cvtpd2ps(GuestXmm b)
{
    GuestXmm r;
    r.f[0] = (float)b.pd[0];
    r.f[1] = (float)b.pd[1];
    r.d[2] = r.d[3] = 0;
    return r;
}
RT_INLINE uint64_t sse_cvtps2pi(GuestXmm b) { return (uint64_t)sse_cvt_i(b.f[0]) | ((uint64_t)sse_cvt_i(b.f[1]) << 32); }
RT_INLINE uint64_t sse_cvttps2pi(GuestXmm b) { return (uint64_t)sse_cvtt_i(b.f[0]) | ((uint64_t)sse_cvtt_i(b.f[1]) << 32); }
RT_INLINE GuestXmm sse_cvtpi2ps(GuestXmm a, uint64_t b)
{
    a.f[0] = (float)(int32_t)mm_d(b, 0);
    a.f[1] = (float)(int32_t)mm_d(b, 1);
    return a;
}

/* ---- SSE2 packed double ------------------------------------------------------------------------------------- */

#define SSE_PD(name, EXPR)                                                                                  \
    RT_INLINE GuestXmm sse_##name##pd(GuestXmm a, GuestXmm b)                                               \
    {                                                                                                       \
        GuestXmm r;                                                                                         \
        for (int i = 0; i < 2; ++i)                                                                         \
        {                                                                                                   \
            const double x = a.pd[i], y = b.pd[i];                                                          \
            r.pd[i] = (EXPR);                                                                               \
        }                                                                                                   \
        return r;                                                                                           \
    }
SSE_PD(add, simd_arithd_(x, y, x + y))
SSE_PD(sub, simd_arithd_(x, y, x - y))
SSE_PD(mul, simd_arithd_(x, y, x * y))
SSE_PD(div, simd_arithd_(x, y, x / y))
SSE_BITS(andpd, SIMD_AND)
SSE_BITS(andnpd, SIMD_ANDN)
SSE_BITS(orpd, SIMD_OR)
SSE_BITS(xorpd, SIMD_XOR)

/* ---- SSE2 integer forms on xmm: each 64-bit half is the MMX operation ---------------------------------- */

#define SSE_INT(name)                                                                                       \
    RT_INLINE GuestXmm sse2_##name(GuestXmm a, GuestXmm b)                                                  \
    {                                                                                                       \
        return xmm_q(mmx_##name(a.q[0], b.q[0]), mmx_##name(a.q[1], b.q[1]));                               \
    }
SSE_INT(pand)
SSE_INT(pandn)
SSE_INT(por)
SSE_INT(pxor)
SSE_INT(paddb)
SSE_INT(paddw)
SSE_INT(paddd)
SSE_INT(psubb)
SSE_INT(psubw)
SSE_INT(psubd)
SSE_INT(pcmpeqb)
SSE_INT(pcmpeqw)
SSE_INT(pcmpeqd)

#define SSE_SHIFT(name)                                                                                     \
    RT_INLINE GuestXmm sse2_##name(GuestXmm a, uint64_t n) { return xmm_q(mmx_##name(a.q[0], n), mmx_##name(a.q[1], n)); }
SSE_SHIFT(psllw)
SSE_SHIFT(pslld)
SSE_SHIFT(psrlw)
SSE_SHIFT(psrld)
SSE_SHIFT(psraw)
SSE_SHIFT(psrad)
