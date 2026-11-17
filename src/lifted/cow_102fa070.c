/* f_0x102fa070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102fa070(Guest* g)
{
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movss xmm0, dword ptr [ebp + 8] */ uint32_t A = arg2 + 8u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm1, dword ptr [edx + 8] */ uint32_t A = arg4 + 8u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movhps xmm0, qword ptr [ebp] */ uint32_t A = arg2; g->xmm[0].q[1] = rd64(A); }
    { /* movhps xmm1, qword ptr [edx] */ uint32_t A = arg4; g->xmm[1].q[1] = rd64(A); }
    { /* movss xmm2, dword ptr [ecx + 8] */ uint32_t A = arg3 + 8u; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movhps xmm2, qword ptr [ecx] */ uint32_t A = arg3; g->xmm[2].q[1] = rd64(A); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* subps xmm0, xmm1 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0x78 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 120); }
    { /* shufps xmm1, xmm1, 0x63 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 99); }
    { /* movaps xmm4, xmm3 */ g->xmm[4] = g->xmm[3]; }
    { /* subps xmm3, xmm2 */ g->xmm[3] = sse_subps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmm2, xmmword ptr [0x103ce520] */ uint32_t A = COW_IMG(0x103ce520u); g->xmm[2] = rd128(A); }
    { /* movaps xmm5, xmm3 */ g->xmm[5] = g->xmm[3]; }
    { /* shufps xmm3, xmm3, 0x63 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 99); }
    { /* shufps xmm5, xmm5, 0x78 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 120); }
    { /* mulps xmm0, xmm3 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[3]); }
    { /* mulps xmm5, xmm1 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [0x103ce530] */ uint32_t A = COW_IMG(0x103ce530u); g->xmm[1] = rd128(A); }
    { /* subps xmm0, xmm5 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[5]); }
    { /* shufps xmm4, xmm4, 0xe */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 14); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* mulps xmm0, xmm0 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[0]); }
    { /* movaps xmm5, xmm0 */ g->xmm[5] = g->xmm[0]; }
    { /* movhlps xmm0, xmm0 */ g->xmm[0] = sse_movhlps(g->xmm[0], g->xmm[0]); }
    { /* addps xmm5, xmm0 */ g->xmm[5] = sse_addps(g->xmm[5], g->xmm[0]); }
    { /* movaps xmm0, xmm5 */ g->xmm[0] = g->xmm[5]; }
    { /* shufps xmm5, xmm5, 1 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 1); }
    { /* addss xmm0, xmm5 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[5]); }
    { /* movaps xmm5, xmm0 */ g->xmm[5] = g->xmm[0]; }
    { /* rsqrtss xmm0, xmm0 */ g->xmm[0] = sse_rsqrtss(g->xmm[0], g->xmm[0]); }
    { /* mulss xmm1, xmm0 */ g->xmm[1] = sse_mulss(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm6, xmm5 */ g->xmm[6] = g->xmm[5]; }
    { /* mulss xmm5, xmm0 */ g->xmm[5] = sse_mulss(g->xmm[5], g->xmm[0]); }
    { /* mulss xmm5, xmm0 */ g->xmm[5] = sse_mulss(g->xmm[5], g->xmm[0]); }
    { /* subss xmm2, xmm5 */ g->xmm[2] = sse_subss(g->xmm[2], g->xmm[5]); }
    { /* mulss xmm1, xmm2 */ g->xmm[1] = sse_mulss(g->xmm[1], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* mulps xmm3, xmm1 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[1]); }
    { /* mulps xmm4, xmm3 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[3]); }
    { /* movups xmmword ptr [eax], xmm3 */ uint32_t A = arg1; wr128(A, g->xmm[3]); }
    { /* movhlps xmm6, xmm4 */ g->xmm[6] = sse_movhlps(g->xmm[6], g->xmm[4]); }
    { /* movaps xmm0, xmm4 */ g->xmm[0] = g->xmm[4]; }
    { /* shufps xmm4, xmm4, 0x55 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 85); }
    { /* addss xmm6, xmm4 */ g->xmm[6] = sse_addss(g->xmm[6], g->xmm[4]); }
    { /* addss xmm0, xmm6 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[6]); }
    { /* xorps xmm0, xmmword ptr [0x103ce510] */ uint32_t A = COW_IMG(0x103ce510u); g->xmm[0] = sse_xorps(g->xmm[0], rd128(A)); }
    { /* movss dword ptr [eax + 0xc], xmm0 */ uint32_t A = arg1 + 0xcu; wr32(A, g->xmm[0].d[0]); }
    g->edx = arg4;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fa070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fa070(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
