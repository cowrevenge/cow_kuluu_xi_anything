/* f_0x1006fe70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_1006fe70(Guest* g)
{
    double d11;
    double d2;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t3;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x10u, 0x461c4000u);
    wr32(sp0 - 4u, self + 0xba0u);
    wr32(sp0 - 0x14u, 0x461c4000u);
    wr32(sp0 - 8u, 0xc61c4000u);
    wr32(sp0 - 0xcu, 0xc61c4000u);
    if ((int32_t)rd32(sp0 + 0xcu) <= 0)
    {
        loc_10 = 0x461c4000u;
        loc_14 = 0x461c4000u;
        loc_8 = 0xc61c4000u;
        loc_c = 0xc61c4000u;
    }
    else
    {
        edx = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x1cu, in_esi);
        wr32(sp0 - 0x20u, in_edi);
        ecx = rd32(sp0 + 8u);
        loc_10 = 0x461c4000u;
        loc_14 = 0x461c4000u;
        loc_8 = 0xc61c4000u;
        loc_c = 0xc61c4000u;
L_1006feb0: ;
        { /* movaps xmm4, xmmword ptr [esi] */ uint32_t A = arg4; g->xmm[4] = rd128(A); }
        t1 = rd32(sp0 + 8u);
        { /* movaps xmm5, xmmword ptr [esi + 0x10] */ uint32_t A = arg4 + 0x10u; g->xmm[5] = rd128(A); }
        { /* movups xmm0, xmmword ptr [edi] */ uint32_t A = t1; g->xmm[0] = rd128(A); }
        { /* movaps xmm6, xmmword ptr [esi + 0x20] */ uint32_t A = arg4 + 0x20u; g->xmm[6] = rd128(A); }
        { /* movhlps xmm2, xmm0 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[0]); }
        { /* movaps xmm7, xmmword ptr [esi + 0x30] */ uint32_t A = arg4 + 0x30u; g->xmm[7] = rd128(A); }
        { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
        { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
        { /* shufps xmm1, xmm1, 0x55 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 85); }
        { /* mulps xmm2, xmm6 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[6]); }
        { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
        { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
        { /* addps xmm2, xmm1 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[1]); }
        { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
        { /* addps xmm2, xmm7 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[7]); }
        { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
        { /* movups xmm4, xmmword ptr [edi] */ uint32_t A = arg5; g->xmm[4] = rd128(A); }
        { /* movhlps xmm2, xmm0 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[0]); }
        { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
        { /* movups xmm5, xmmword ptr [edi + 0x10] */ uint32_t A = arg5 + 0x10u; g->xmm[5] = rd128(A); }
        { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
        { /* shufps xmm1, xmm1, 0x55 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 85); }
        { /* movups xmm6, xmmword ptr [edi + 0x20] */ uint32_t A = arg5 + 0x20u; g->xmm[6] = rd128(A); }
        { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
        { /* movups xmm7, xmmword ptr [edi + 0x30] */ uint32_t A = arg5 + 0x30u; g->xmm[7] = rd128(A); }
        { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
        { /* mulps xmm2, xmm6 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[6]); }
        { /* addps xmm7, xmm1 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[1]); }
        { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
        { /* addps xmm7, xmm2 */ g->xmm[7] = sse_addps(g->xmm[7], g->xmm[2]); }
        { /* addps xmm0, xmm7 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[7]); }
        { /* movaps xmmword ptr [edi], xmm0 */ uint32_t A = self + 0xba0u; wr128(A, g->xmm[0]); }
        d2 = (double)rdf32(self + 0xbacu);
        t3 = rd32(self + 0xba0u);
        d4 = (double)rdf32(self + 0xba4u);
        d5 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(sp0 + 0xcu, t3);
        if (!(d2 < d5))
        {
            eax = (t3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d5, 2u);
            x1 = d2;
            x0 = d4;
        }
        else
        {
            eax = (t3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d5, 2u);
            x1 = d2;
            x0 = d4;
            x1 = -x1;
        }
        if (x1 != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            x1 = (double)rdf32(COW_IMG(0x1032961cu));
        }
        d6 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1)) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(sp0 + 0x18u));
        d7 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1);
        wrf32(sp0 + 0xcu, (float)d6);
        wrf32(ecx + 0x1cu, (float)d6);
        d8 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 * d7)) * (double)rdf32(sp0 + 0x1cu));
        wrf32(ecx + 0x20u, (float)d8);
        d9 = (double)rdf32(sp0 + 0xcu);
        if (!(d9 < cow_bits2f(loc_14)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, cow_bits2f(loc_14), 1u);
            x0 = d8;
        }
        else
        {
            x0 = d8;
            t10 = rd32(sp0 + 0xcu);
            wr32(sp0 - 0x14u, t10);
            eax = t10;
            loc_14 = t10;
        }
        d11 = (double)rdf32(sp0 + 0xcu);
        if ((cow_fsw(g, d11, cow_bits2f(loc_c), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d11, cow_bits2f(loc_c), 1u) & 0x4100u;
        }
        else
        {
            t12 = rd32(sp0 + 0xcu);
            wr32(sp0 - 0xcu, t12);
            eax = t12;
            loc_c = t12;
        }
        if (!(x0 < cow_bits2f(loc_10)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, cow_bits2f(loc_10), 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, cow_bits2f(loc_10), 1u);
            wrf32(sp0 - 0x10u, (float)(double)(float)x0);
        }
        if ((cow_fsw(g, x0, cow_bits2f(loc_8), 1u) & 0x4100u) == 0u)
        {
            wrf32(sp0 - 8u, (float)(double)(float)x0);
        }
        wr32(sp0 + 8u, ecx + 0x24u);
        if (edx != 1u)
        {
            ecx = ecx + 0x24u;
            edx = edx - 1u;
            loc_10 = rd32(sp0 - 0x10u);
            loc_8 = rd32(sp0 - 8u);
            goto L_1006feb0;
        }
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
    }
    wr32(arg1 + 4u, loc_10);
    wr32(arg1 + 8u, loc_c);
    wrf32(arg1, (float)cow_bits2f(loc_14));
    wr32(arg1 + 0xcu, loc_8);
    g->edx = loc_c;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006fe70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006fe70(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
