/* f_0x1006fce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_1006fce0(Guest* g)
{
    double d2;
    double d3;
    double d4;
    double d5;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t6;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg3 <= 0)
    {
        eax = in_eax;
    }
    else
    {
        eax = in_eax;
        ecx = arg2;
        ebx = arg3;
L_1006fcfe: ;
        { /* movaps xmm4, xmmword ptr [esi] */ uint32_t A = arg4; g->xmm[4] = rd128(A); }
        t1 = rd32(sp0 + 4u);
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
        d3 = (double)rdf32(self + 0xba4u);
        d4 = (double)rdf32(self + 0xba0u);
        d5 = (double)rdf32(COW_IMG(0x103295d8u));
        wrf32(ecx + 8u, (float)d2);
        if (!(d2 < d5))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d5, 3u);
            x2 = d2;
            x1 = d3;
            x0 = d4;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d5, 3u);
            x2 = d2;
            x1 = d3;
            x0 = d4;
            x2 = -x2;
        }
        if (x2 != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x2, (double)rdf32(COW_IMG(0x103295d8u)), 3u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x2, (double)rdf32(COW_IMG(0x103295d8u)), 3u);
            x2 = (double)rdf32(COW_IMG(0x1032961cu));
        }
        t6 = rd32(sp0 + 4u) + 0xcu;
        d7 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2);
        wr32(sp0 + 4u, t6);
        d8 = fr(g, fr(g, fr(g, d7 * x0) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(sp0 + 0x18u));
        wrf32(ecx, (float)d8);
        d9 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d7 * x1)) * (double)rdf32(sp0 + 0x1cu));
        wrf32(ecx + 4u, (float)d9);
        if (ebx != 1u)
        {
            ecx = ecx + 0xcu;
            ebx = ebx - 1u;
            goto L_1006fcfe;
        }
    }
    g->edx = self + 0xba0u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006fce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006fce0(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
