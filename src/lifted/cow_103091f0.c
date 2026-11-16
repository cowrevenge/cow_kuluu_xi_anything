/* f_0x103091f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_103091f0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 4u);

    d1 = rdf64(COW_IMG(0x109fa3d0u));
    wrf64(in_ebp - 0x18u, d1);
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm6, xmmword ptr [0x103ce8b0] */ uint32_t A = COW_IMG(0x103ce8b0u); g->xmm[6] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [0x103ce8a0] */ uint32_t A = COW_IMG(0x103ce8a0u); g->xmm[5] = rd128(A); }
    { /* andps xmm1, xmmword ptr [0x103ce890] */ uint32_t A = COW_IMG(0x103ce890u); g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* movaps xmmword ptr [edx], xmm0 */ uint32_t A = sp0 - 0x40u & 0xfffffff0u; wr128(A, g->xmm[0]); }
    { /* movaps xmm7, xmm1 */ g->xmm[7] = g->xmm[1]; }
    { /* movaps xmm4, xmmword ptr [0x103ce880] */ uint32_t A = COW_IMG(0x103ce880u); g->xmm[4] = rd128(A); }
    { /* cmpleps xmm7, xmmword ptr [0x103ce870] */ uint32_t A = COW_IMG(0x103ce870u); g->xmm[7] = sse_cmpps(g->xmm[7], rd128(A), 2); }
    { /* movaps xmm3, xmmword ptr [0x103ce860] */ uint32_t A = COW_IMG(0x103ce860u); g->xmm[3] = rd128(A); }
    eax = sp0 - 0x40u & 0xfffffff0u;
    { /* movmskps eax, xmm7 */ eax = (uint32_t)(sse_movmskps(g->xmm[7])); }
    { /* movaps xmm2, xmmword ptr [0x103ce850] */ uint32_t A = COW_IMG(0x103ce850u); g->xmm[2] = rd128(A); }
    if (eax != 0xfu)
    {
        { /* movaps xmm7, xmmword ptr [0x103ce840] */ uint32_t A = COW_IMG(0x103ce840u); g->xmm[7] = rd128(A); }
        { /* mulps xmm7, xmm0 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[0]); }
        { /* cvtps2pi mm3, xmm7 */ g->mm[3] = sse_cvtps2pi(g->xmm[7]); }
        { /* movhlps xmm7, xmm7 */ g->xmm[7] = sse_movhlps(g->xmm[7], g->xmm[7]); }
        { /* cvtps2pi mm4, xmm7 */ g->mm[4] = sse_cvtps2pi(g->xmm[7]); }
        { /* movaps xmm7, xmm1 */ g->xmm[7] = g->xmm[1]; }
        { /* cmpleps xmm7, xmmword ptr [0x103ce830] */ uint32_t A = COW_IMG(0x103ce830u); g->xmm[7] = sse_cmpps(g->xmm[7], rd128(A), 2); }
        { /* movmskps eax, xmm7 */ eax = (uint32_t)(sse_movmskps(g->xmm[7])); }
        if (eax != 0xfu)
        {
            { /* movq mm0, mm3 */ g->mm[0] = g->mm[3]; }
            { /* movq qword ptr [edx + 0x20], mm0 */ uint32_t A = (sp0 - 0x40u & 0xfffffff0u) + 0x20u; wr64(A, g->mm[0]); }
            { /* movq mm1, mm4 */ g->mm[1] = g->mm[4]; }
            { /* movq qword ptr [edx + 0x28], mm1 */ uint32_t A = (sp0 - 0x40u & 0xfffffff0u) + 0x28u; wr64(A, g->mm[1]); }
            { /* pslld mm0, 0x1f */ g->mm[0] = mmx_pslld(g->mm[0], (uint64_t)0x1Fu); }
            { /* pslld mm1, 0x1f */ g->mm[1] = mmx_pslld(g->mm[1], (uint64_t)0x1Fu); }
            { /* movq qword ptr [edx + 0x10], mm0 */ uint32_t A = (sp0 - 0x40u & 0xfffffff0u) + 0x10u; wr64(A, g->mm[0]); }
            { /* movq qword ptr [edx + 0x18], mm1 */ uint32_t A = (sp0 - 0x40u & 0xfffffff0u) + 0x18u; wr64(A, g->mm[1]); }
            { /* emms  */  }
            d2 = fr(g, (double)rdf32(sp0 - 0x40u & 0xfffffff0u) - fr(g, (double)(int32_t)rd32((sp0 - 0x40u & 0xfffffff0u) + 0x20u) * rdf64(in_ebp - 0x18u)));
            d3 = rdf64(in_ebp - 0x18u);
            wrf32((sp0 - 0x40u & 0xfffffff0u) + 0x30u, (float)d2);
            d4 = fr(g, (double)rdf32((sp0 - 0x40u & 0xfffffff0u) + 4u) - fr(g, (double)(int32_t)rd32((sp0 - 0x40u & 0xfffffff0u) + 0x24u) * d3));
            wrf32((sp0 - 0x40u & 0xfffffff0u) + 0x34u, (float)d4);
            d5 = fr(g, (double)rdf32((sp0 - 0x40u & 0xfffffff0u) + 8u) - fr(g, (double)(int32_t)rd32((sp0 - 0x40u & 0xfffffff0u) + 0x28u) * d3));
            wrf32((sp0 - 0x40u & 0xfffffff0u) + 0x38u, (float)d5);
            d6 = fr(g, (double)rdf32((sp0 - 0x40u & 0xfffffff0u) + 0xcu) - fr(g, d3 * (double)(int32_t)rd32((sp0 - 0x40u & 0xfffffff0u) + 0x2cu)));
            { /* movaps xmm7, xmmword ptr [edx + 0x10] */ uint32_t A = (sp0 - 0x40u & 0xfffffff0u) + 0x10u; g->xmm[7] = rd128(A); }
            wrf32((sp0 - 0x40u & 0xfffffff0u) + 0x3cu, (float)d6);
            { /* movaps xmm0, xmmword ptr [edx + 0x30] */ uint32_t A = (sp0 - 0x40u & 0xfffffff0u) + 0x30u; g->xmm[0] = rd128(A); }
        }
        else
        {
            { /* movq mm1, mm4 */ g->mm[1] = g->mm[4]; }
            { /* cvtpi2ps xmm1, mm1 */ g->xmm[1] = sse_cvtpi2ps(g->xmm[1], g->mm[1]); }
            { /* movaps xmm7, xmmword ptr [0x103ce820] */ uint32_t A = COW_IMG(0x103ce820u); g->xmm[7] = rd128(A); }
            { /* movlhps xmm1, xmm1 */ g->xmm[1] = sse_movlhps(g->xmm[1], g->xmm[1]); }
            { /* movq mm0, mm3 */ g->mm[0] = g->mm[3]; }
            { /* cvtpi2ps xmm1, mm0 */ g->xmm[1] = sse_cvtpi2ps(g->xmm[1], g->mm[0]); }
            { /* pslld mm0, 0x1f */ g->mm[0] = mmx_pslld(g->mm[0], (uint64_t)0x1Fu); }
            { /* pslld mm1, 0x1f */ g->mm[1] = mmx_pslld(g->mm[1], (uint64_t)0x1Fu); }
            { /* movq qword ptr [edx + 0x10], mm0 */ uint32_t A = (sp0 - 0x40u & 0xfffffff0u) + 0x10u; wr64(A, g->mm[0]); }
            { /* movq qword ptr [edx + 0x18], mm1 */ uint32_t A = (sp0 - 0x40u & 0xfffffff0u) + 0x18u; wr64(A, g->mm[1]); }
            { /* emms  */  }
            { /* mulps xmm7, xmm1 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[1]); }
            { /* subps xmm0, xmm7 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[7]); }
            { /* movaps xmm7, xmmword ptr [0x103ce810] */ uint32_t A = COW_IMG(0x103ce810u); g->xmm[7] = rd128(A); }
            { /* mulps xmm7, xmm1 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[1]); }
            { /* subps xmm0, xmm7 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[7]); }
            { /* mulps xmm1, xmmword ptr [0x103ce800] */ uint32_t A = COW_IMG(0x103ce800u); g->xmm[1] = sse_mulps(g->xmm[1], rd128(A)); }
            { /* subps xmm0, xmm1 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[1]); }
            { /* movaps xmm7, xmmword ptr [edx + 0x10] */ uint32_t A = (sp0 - 0x40u & 0xfffffff0u) + 0x10u; g->xmm[7] = rd128(A); }
        }
    }
    else
    {
        { /* xorps xmm7, xmm7 */ g->xmm[7] = sse_xorps(g->xmm[7], g->xmm[7]); }
    }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
    { /* addps xmm2, xmm3 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[3]); }
    { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
    { /* addps xmm2, xmm4 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[4]); }
    { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
    { /* addps xmm2, xmm5 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[5]); }
    { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
    { /* addps xmm2, xmm6 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[6]); }
    { /* mulps xmm0, xmm2 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[2]); }
    { /* xorps xmm0, xmm7 */ g->xmm[0] = sse_xorps(g->xmm[0], g->xmm[7]); }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103091f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103091f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
