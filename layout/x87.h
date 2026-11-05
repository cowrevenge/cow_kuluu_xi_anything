/* layout/x87.h - the guest's x87 arithmetic, one inline function per instruction form.
   ==================================================================================

   A guest float operation is not a C operator. Two of its properties survive into what callers can see:

   - the FORM of the second operand. `fmul dword ptr [m]` and `fmul st(n)` are different instructions; a
     conversion that spells both the same C expression is transcribing the algebra, not the code.
   - which NaN comes back when BOTH operands are NaN. The x87 returns the first source operand, quieted;
     the generated translation we are proved against returns whichever operand the compiler happened to
     put in the destination register, and for an addition that is the one the FPU subtracted FROM - it is
     not reachable by reordering the operands of the C expression (build/probe_nan_codegen.c shows both
     orders compiling to the same allocation). So the additions carry the rule explicitly and the
     multiplications and subtractions are plain expressions, which is what the harness agreed with at
     every site it exercised. Where a future compiler changes its mind, cowdiff reports it and the rule
     moves here rather than into a unit's source.

   These are RT_INLINE (static __forceinline), which is load-bearing: the operand registers the caller
   hands in are part of what decides the answer, so the operations have to be rebuilt in the caller's
   context, not compiled as calls whose parameters arrive in fixed registers.

   First used by f_102d7c47 (0x102d7c47), which is where each rule was measured; f_102d8019 is the second
   reader. See cow/wip/loop-notes.md for the findings behind them. */
#ifndef COW_LAYOUT_X87_H
#define COW_LAYOUT_X87_H

/* Included by layout/cow.h, after runtime/guest.h (for rdf32 and RT_INLINE) and after stdint.h. Do not
   include it directly from src/: a unit gets its whole vocabulary from cow.h. */

RT_INLINE double cow_x87_quiet(double value)
{
    union { double d; uint64_t u; } bits;
    bits.d = value;
    bits.u |= 0x0008000000000000ull; /* the quiet bit of an IEEE-754 double NaN */
    return bits.d;
}

RT_INLINE double cow_fmul_m(double st0, uint32_t address) /* fmul dword ptr [address] */
{
    return st0 * (double)rdf32(address);
}

RT_INLINE double cow_fmul_r(double st0, double st_n)      /* fmul st(n) */
{
    return st0 * st_n;
}

RT_INLINE double cow_fadd_m(double st0, uint32_t address) /* fadd dword ptr [address] */
{
    /* With two NaNs the reference hands back the operand that was NOT in st(0). Measured at 0x102d7cb2,
       0x102d7ced and 0x102d7d20 of f_102d7c47: the (2,2) field answers 0xffffffff there, the cosine read
       out of [ebp-4], where the plain expression answers 0xffffe732, the product that had been in st(0). */
    const double loaded = (double)rdf32(address);
    if (st0 != st0 && loaded != loaded)
    {
        return cow_x87_quiet(loaded);
    }
    return st0 + loaded;
}

RT_INLINE double cow_fadd_r(double st0, double st_n)      /* fadd st(n) */
{
    /* The same rule, measured at 0x102d7cfb and 0x102d7d08 (the (1,2) and (2,0) fields of f_102d7c47). */
    if (st0 != st0 && st_n != st_n)
    {
        return cow_x87_quiet(st_n);
    }
    return st0 + st_n;
}

RT_INLINE double cow_fsub_m(double st0, uint32_t address) /* fsub dword ptr [address] */
{
    return st0 - (double)rdf32(address);
}

RT_INLINE double cow_fsub_r(double st0, double st_n)      /* fsub st(n) */
{
    return st0 - st_n;
}

/* `fchs`: exact negation, so the sign of a zero is part of the answer - and several entries negate the
   value they are about to store, which a conversion that negates after the rounding gets wrong. */
RT_INLINE float cow_fchs(double value)
{
    return (float)-value;
}

#endif /* COW_LAYOUT_X87_H */
