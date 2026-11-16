/* f_0x102fb5e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102fb5e0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    unsigned of;
    unsigned pf;
    unsigned sf;
    unsigned zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movups xmm2, xmmword ptr [eax] */ uint32_t A = arg3; g->xmm[2] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [0x103ce6e0] */ uint32_t A = COW_IMG(0x103ce6e0u); g->xmm[3] = rd128(A); }
    { /* xorps xmm0, xmm0 */ g->xmm[0] = sse_xorps(g->xmm[0], g->xmm[0]); }
    { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
    { /* xorps xmm1, xmm1 */ g->xmm[1] = sse_xorps(g->xmm[1], g->xmm[1]); }
    { /* mulps xmm3, xmm3 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[3]); }
    { /* movhlps xmm0, xmm3 */ g->xmm[0] = sse_movhlps(g->xmm[0], g->xmm[3]); }
    { /* movaps xmm4, xmm1 */ g->xmm[4] = g->xmm[1]; }
    { /* movaps xmm1, xmm3 */ g->xmm[1] = g->xmm[3]; }
    { /* addps xmm1, xmm0 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 1 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 1); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    { /* comiss xmm0, xmm4 */ { const float x = g->xmm[0].f[0], y = g->xmm[4].f[0]; if (x != x || y != y) { zf = pf = cf = 1; } else { zf = x == y; pf = 0; cf = x < y; } of = sf = af = 0; } }
    if (zf != 1u)
    {
        if (!(rd8(COW_IMG(0x109f82d0u)) & 1u))
        {
            eax = (arg3 & 0xffffff00u) | rd8(COW_IMG(0x109f82d0u));
            { /* movss xmm4, dword ptr [0x109fa220] */ uint32_t A = COW_IMG(0x109fa220u); g->xmm[4] = xmm_q((uint64_t)rd32(A), 0); }
            wr8(COW_IMG(0x109f82d0u), (uint8_t)(eax | 1u));
            { /* movaps xmmword ptr [0x109f82b0], xmm4 */ uint32_t A = COW_IMG(0x109f82b0u); wr128(A, g->xmm[4]); }
            eax = (eax & 0xffffff00u) | (uint8_t)(eax | 1u);
        }
        else
        {
            eax = (arg3 & 0xffffff00u) | rd8(COW_IMG(0x109f82d0u));
            { /* movaps xmm4, xmmword ptr [0x109f82b0] */ uint32_t A = COW_IMG(0x109f82b0u); g->xmm[4] = rd128(A); }
        }
        if ((eax & 2u) == 0u)
        {
            { /* movss xmm3, dword ptr [0x109fa224] */ uint32_t A = COW_IMG(0x109fa224u); g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
            wr8(COW_IMG(0x109f82d0u), (uint8_t)(eax | 2u));
            { /* movaps xmmword ptr [0x109f82c0], xmm3 */ uint32_t A = COW_IMG(0x109f82c0u); wr128(A, g->xmm[3]); }
        }
        else
        {
            { /* movaps xmm3, xmmword ptr [0x109f82c0] */ uint32_t A = COW_IMG(0x109f82c0u); g->xmm[3] = rd128(A); }
        }
        { /* movaps xmm5, xmm0 */ g->xmm[5] = g->xmm[0]; }
        { /* rsqrtss xmm5, xmm5 */ g->xmm[5] = sse_rsqrtss(g->xmm[5], g->xmm[5]); }
        { /* mulss xmm0, xmm5 */ g->xmm[0] = sse_mulss(g->xmm[0], g->xmm[5]); }
        { /* mulss xmm4, xmm5 */ g->xmm[4] = sse_mulss(g->xmm[4], g->xmm[5]); }
        { /* mulss xmm0, xmm5 */ g->xmm[0] = sse_mulss(g->xmm[0], g->xmm[5]); }
        { /* subss xmm3, xmm0 */ g->xmm[3] = sse_subss(g->xmm[3], g->xmm[0]); }
        { /* mulss xmm4, xmm3 */ g->xmm[4] = sse_mulss(g->xmm[4], g->xmm[3]); }
        { /* shufps xmm4, xmm4, 0 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 0); }
        { /* movaps xmm0, xmm2 */ g->xmm[0] = g->xmm[2]; }
        { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
    }
    { /* movups xmm2, xmmword ptr [edx] */ uint32_t A = arg2; g->xmm[2] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [0x103ce6b0] */ uint32_t A = COW_IMG(0x103ce6b0u); g->xmm[3] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [0x103ce6a0] */ uint32_t A = COW_IMG(0x103ce6a0u); g->xmm[4] = rd128(A); }
    { /* xorps xmm4, xmm0 */ g->xmm[4] = sse_xorps(g->xmm[4], g->xmm[0]); }
    { /* mulps xmm0, xmm2 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[2]); }
    { /* movaps xmm5, xmmword ptr [0x103ce6c0] */ uint32_t A = COW_IMG(0x103ce6c0u); g->xmm[5] = rd128(A); }
    { /* movhlps xmm1, xmm0 */ g->xmm[1] = sse_movhlps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm6, xmmword ptr [0x103ce6d0] */ uint32_t A = COW_IMG(0x103ce6d0u); g->xmm[6] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* shufps xmm1, xmm1, 1 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 1); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* andps xmm3, xmm0 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[0]); }
    { /* andps xmm5, xmm0 */ g->xmm[5] = sse_andps(g->xmm[5], g->xmm[0]); }
    { /* andps xmm6, xmm0 */ g->xmm[6] = sse_andps(g->xmm[6], g->xmm[0]); }
    { /* movaps xmm1, xmm4 */ g->xmm[1] = g->xmm[4]; }
    { /* shufps xmm4, xmm4, 0x55 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 85); }
    { /* mulps xmm4, xmm2 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[2]); }
    { /* movaps xmm7, xmm0 */ g->xmm[7] = g->xmm[0]; }
    { /* movaps xmm0, xmm4 */ g->xmm[0] = g->xmm[4]; }
    { /* addps xmm0, xmm3 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[3]); }
    { /* movaps xmm3, xmm1 */ g->xmm[3] = g->xmm[1]; }
    { /* shufps xmm3, xmm3, 0xaa */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 170); }
    { /* mulps xmm3, xmm2 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmm4, xmm1 */ g->xmm[4] = g->xmm[1]; }
    { /* movaps xmm1, xmm3 */ g->xmm[1] = g->xmm[3]; }
    { /* addps xmm1, xmm5 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[5]); }
    { /* movaps xmm3, xmm4 */ g->xmm[3] = g->xmm[4]; }
    { /* shufps xmm4, xmm4, 0xff */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 255); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm4, xmm2 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[2]); }
    { /* mulps xmm3, xmm2 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmm2, xmm4 */ g->xmm[2] = g->xmm[4]; }
    { /* addps xmm2, xmm6 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[6]); }
    { /* addss xmm3, xmm7 */ g->xmm[3] = sse_addss(g->xmm[3], g->xmm[7]); }
    if ((arg1 & 0xfu) != 0u)
    {
        { /* movlps qword ptr [eax], xmm3 */ uint32_t A = arg1; wr64(A, g->xmm[3].q[0]); }
        { /* movhps qword ptr [eax + 8], xmm3 */ uint32_t A = arg1 + 8u; wr64(A, g->xmm[3].q[1]); }
        { /* movlps qword ptr [eax + 0x10], xmm0 */ uint32_t A = arg1 + 0x10u; wr64(A, g->xmm[0].q[0]); }
        { /* movhps qword ptr [eax + 0x18], xmm0 */ uint32_t A = arg1 + 0x18u; wr64(A, g->xmm[0].q[1]); }
        { /* movlps qword ptr [eax + 0x20], xmm1 */ uint32_t A = arg1 + 0x20u; wr64(A, g->xmm[1].q[0]); }
        { /* movhps qword ptr [eax + 0x28], xmm1 */ uint32_t A = arg1 + 0x28u; wr64(A, g->xmm[1].q[1]); }
        { /* movlps qword ptr [eax + 0x30], xmm2 */ uint32_t A = arg1 + 0x30u; wr64(A, g->xmm[2].q[0]); }
        { /* movhps qword ptr [eax + 0x38], xmm2 */ uint32_t A = arg1 + 0x38u; wr64(A, g->xmm[2].q[1]); }
    }
    else
    {
        { /* movaps xmmword ptr [eax], xmm3 */ uint32_t A = arg1; wr128(A, g->xmm[3]); }
        { /* movaps xmmword ptr [eax + 0x10], xmm0 */ uint32_t A = arg1 + 0x10u; wr128(A, g->xmm[0]); }
        { /* movaps xmmword ptr [eax + 0x20], xmm1 */ uint32_t A = arg1 + 0x20u; wr128(A, g->xmm[1]); }
        { /* movaps xmmword ptr [eax + 0x30], xmm2 */ uint32_t A = arg1 + 0x30u; wr128(A, g->xmm[2]); }
    }
    g->edx = arg2;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fb5e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fb5e0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
