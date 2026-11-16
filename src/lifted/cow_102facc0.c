/* f_0x102facc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102facc0(Guest* g)
{
    unsigned af;
    unsigned cf;
    unsigned of;
    unsigned pf;
    unsigned sf;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0xcu) & 0xfffffff0u;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    { /* movss xmm0, dword ptr [edx] */ uint32_t A = arg2; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm4, dword ptr [edx + 4] */ uint32_t A = arg2 + 4u; g->xmm[4] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm6, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->xmm[6] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm1, dword ptr [0x109fa18c] */ uint32_t A = COW_IMG(0x109fa18cu); g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* mulss xmm2, xmm2 */ g->xmm[2] = sse_mulss(g->xmm[2], g->xmm[2]); }
    { /* movaps xmm3, xmm4 */ g->xmm[3] = g->xmm[4]; }
    { /* mulss xmm3, xmm3 */ g->xmm[3] = sse_mulss(g->xmm[3], g->xmm[3]); }
    { /* addss xmm2, xmm3 */ g->xmm[2] = sse_addss(g->xmm[2], g->xmm[3]); }
    { /* movaps xmm3, xmm6 */ g->xmm[3] = g->xmm[6]; }
    { /* mulss xmm3, xmm3 */ g->xmm[3] = sse_mulss(g->xmm[3], g->xmm[3]); }
    { /* movaps xmm5, xmm3 */ g->xmm[5] = g->xmm[3]; }
    { /* movaps xmm3, xmm2 */ g->xmm[3] = g->xmm[2]; }
    { /* addss xmm3, xmm5 */ g->xmm[3] = sse_addss(g->xmm[3], g->xmm[5]); }
    cf = sp1 + 8u < 0x18u;
    pf = PARITY((uint8_t)(sp1 - 0x10u));
    af = (sp1 + 8u ^ 0x18u ^ sp1 - 0x10u) >> 4u & 1u;
    zf = sp1 == 0x10u;
    sf = (int32_t)(sp1 - 0x10u) < 0;
    of = ((sp1 + 8u ^ 0x18u) & (sp1 + 8u ^ sp1 - 0x10u)) >> 0x1fu;
    { /* comiss xmm1, xmm3 */ { const float x = g->xmm[1].f[0], y = g->xmm[3].f[0]; if (x != x || y != y) { zf = pf = cf = 1; } else { zf = x == y; pf = 0; cf = x < y; } of = sf = af = 0; } }
    if (cf || zf) goto L_102fad34;
    { /* xorps xmm0, xmm0 */ g->xmm[0] = sse_xorps(g->xmm[0], g->xmm[0]); }
    { /* movss dword ptr [eax], xmm0 */ uint32_t A = arg1; wr32(A, g->xmm[0].d[0]); }
    { /* movss dword ptr [eax + 4], xmm0 */ uint32_t A = arg1 + 4u; wr32(A, g->xmm[0].d[0]); }
    { /* movss dword ptr [eax + 8], xmm0 */ uint32_t A = arg1 + 8u; wr32(A, g->xmm[0].d[0]); }
    { /* movss dword ptr [eax + 0xc], xmm0 */ uint32_t A = arg1 + 0xcu; wr32(A, g->xmm[0].d[0]); }
    g->edx = arg2;
    return arg1;
L_102fad34: ;
    { /* movss xmm1, dword ptr [0x109fa194] */ uint32_t A = COW_IMG(0x109fa194u); g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm2, dword ptr [0x109fa190] */ uint32_t A = COW_IMG(0x109fa190u); g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movaps xmm5, xmm3 */ g->xmm[5] = g->xmm[3]; }
    { /* rsqrtss xmm3, xmm3 */ g->xmm[3] = sse_rsqrtss(g->xmm[3], g->xmm[3]); }
    { /* mulss xmm5, xmm3 */ g->xmm[5] = sse_mulss(g->xmm[5], g->xmm[3]); }
    { /* mulss xmm2, xmm3 */ g->xmm[2] = sse_mulss(g->xmm[2], g->xmm[3]); }
    { /* mulss xmm5, xmm3 */ g->xmm[5] = sse_mulss(g->xmm[5], g->xmm[3]); }
    { /* subss xmm1, xmm5 */ g->xmm[1] = sse_subss(g->xmm[1], g->xmm[5]); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* movaps xmm0, xmm2 */ g->xmm[0] = g->xmm[2]; }
    { /* mulss xmm0, xmm1 */ g->xmm[0] = sse_mulss(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* mulss xmm1, xmm3 */ g->xmm[1] = sse_mulss(g->xmm[1], g->xmm[3]); }
    { /* movss dword ptr [eax], xmm1 */ uint32_t A = arg1; wr32(A, g->xmm[1].d[0]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* mulss xmm1, xmm4 */ g->xmm[1] = sse_mulss(g->xmm[1], g->xmm[4]); }
    { /* movss dword ptr [eax + 4], xmm1 */ uint32_t A = arg1 + 4u; wr32(A, g->xmm[1].d[0]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* mulss xmm1, xmm6 */ g->xmm[1] = sse_mulss(g->xmm[1], g->xmm[6]); }
    { /* movss dword ptr [eax + 8], xmm1 */ uint32_t A = arg1 + 8u; wr32(A, g->xmm[1].d[0]); }
    { /* mulss xmm0, dword ptr [edx + 0xc] */ uint32_t A = arg2 + 0xcu; g->xmm[0] = sse_mulss(g->xmm[0], xmm_q((uint64_t)rd32(A), 0)); }
    { /* movss dword ptr [eax + 0xc], xmm0 */ uint32_t A = arg1 + 0xcu; wr32(A, g->xmm[0].d[0]); }
    g->edx = arg2;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102facc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102facc0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
