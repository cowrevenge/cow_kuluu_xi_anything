/* f_0x102f9e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102f9e50(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t loc_8;
    unsigned of;
    unsigned pf;
    unsigned sf;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movups xmm0, xmmword ptr [eax] */ uint32_t A = arg2; g->xmm[0] = rd128(A); }
    { /* movss xmm1, dword ptr [ecx + 8] */ uint32_t A = arg3 + 8u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movhps xmm1, qword ptr [ecx] */ uint32_t A = arg3; g->xmm[1].q[1] = rd64(A); }
    { /* movss xmm2, dword ptr [edx + 8] */ uint32_t A = arg4 + 8u; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movaps xmm4, xmm0 */ g->xmm[4] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0x4e */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 78); }
    { /* movaps xmm3, xmm1 */ g->xmm[3] = g->xmm[1]; }
    { /* shufps xmm4, xmm4, 0xff */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 255); }
    { /* movhps xmm2, qword ptr [edx] */ uint32_t A = arg4; g->xmm[2].q[1] = rd64(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* mulps xmm0, xmm2 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[2]); }
    { /* movhlps xmm5, xmm3 */ g->xmm[5] = sse_movhlps(g->xmm[5], g->xmm[3]); }
    { /* movhlps xmm6, xmm0 */ g->xmm[6] = sse_movhlps(g->xmm[6], g->xmm[0]); }
    { /* addps xmm3, xmm5 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[5]); }
    { /* addps xmm0, xmm6 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[6]); }
    { /* shufps xmm5, xmm3, 0x55 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[3], 85); }
    { /* shufps xmm6, xmm0, 0x55 */ g->xmm[6] = sse_shufps(g->xmm[6], g->xmm[0], 85); }
    { /* addss xmm3, xmm5 */ g->xmm[3] = sse_addss(g->xmm[3], g->xmm[5]); }
    { /* addss xmm0, xmm6 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[6]); }
    { /* movss xmm5, xmm3 */ g->xmm[5].d[0] = g->xmm[3].d[0]; }
    { /* subss xmm5, xmm0 */ g->xmm[5] = sse_subss(g->xmm[5], g->xmm[0]); }
    { /* addss xmm3, xmm4 */ g->xmm[3] = sse_addss(g->xmm[3], g->xmm[4]); }
    cf = sp0 - 4u < 4u;
    pf = PARITY((uint8_t)(sp0 - 8u));
    af = (sp0 - 4u ^ sp0 - 8u) >> 4u & 1u;
    zf = sp0 == 8u;
    sf = (int32_t)(sp0 - 8u) < 0;
    of = ((sp0 - 4u ^ 4u) & (sp0 - 4u ^ sp0 - 8u)) >> 0x1fu;
    { /* comiss xmm5, dword ptr [0x109b2660] */ uint32_t A = COW_IMG(0x109b2660u); { const float x = g->xmm[5].f[0], y = xmm_q((uint64_t)rd32(A), 0).f[0]; if (x != x || y != y) { zf = pf = cf = 1; } else { zf = x == y; pf = 0; cf = x < y; } of = sf = af = 0; } }
    if (zf)
    {
        loc_8 = 0u;
    }
    else
    {
        { /* rcpss xmm0, xmm5 */ g->xmm[0] = sse_rcpss(g->xmm[0], g->xmm[5]); }
        { /* movss xmm6, xmm0 */ g->xmm[6].d[0] = g->xmm[0].d[0]; }
        { /* addss xmm6, xmm6 */ g->xmm[6] = sse_addss(g->xmm[6], g->xmm[6]); }
        { /* mulss xmm5, xmm0 */ g->xmm[5] = sse_mulss(g->xmm[5], g->xmm[0]); }
        { /* mulss xmm5, xmm0 */ g->xmm[5] = sse_mulss(g->xmm[5], g->xmm[0]); }
        { /* subss xmm6, xmm5 */ g->xmm[6] = sse_subss(g->xmm[6], g->xmm[5]); }
        { /* mulss xmm3, xmm6 */ g->xmm[3] = sse_mulss(g->xmm[3], g->xmm[6]); }
        { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
        { /* subps xmm2, xmm1 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[1]); }
        { /* mulps xmm3, xmm2 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[2]); }
        { /* addps xmm1, xmm3 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[3]); }
        { /* movhps qword ptr [eax], xmm1 */ uint32_t A = arg1; wr64(A, g->xmm[1].q[1]); }
        { /* movss dword ptr [eax + 8], xmm1 */ uint32_t A = arg1 + 8u; wr32(A, g->xmm[1].d[0]); }
        loc_8 = arg1;
    }
    g->edx = arg4;
    return loc_8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f9e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f9e50(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
