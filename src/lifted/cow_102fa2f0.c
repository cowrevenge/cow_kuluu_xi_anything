/* f_0x102fa2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102fa2f0(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    { /* movhps xmm1, qword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->xmm[1].q[1] = rd64(A); }
    { /* movlps xmm1, qword ptr [edx] */ uint32_t A = arg2; g->xmm[1].q[0] = rd64(A); }
    { /* movaps xmm0, xmmword ptr [0x103ce600] */ uint32_t A = COW_IMG(0x103ce600u); g->xmm[0] = rd128(A); }
    { /* andps xmm0, xmm1 */ g->xmm[0] = sse_andps(g->xmm[0], g->xmm[1]); }
    { /* mulps xmm0, xmm0 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[0]); }
    { /* movss xmm2, dword ptr [0x103ce5e0] */ uint32_t A = COW_IMG(0x103ce5e0u); g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm3, dword ptr [0x103ce5f0] */ uint32_t A = COW_IMG(0x103ce5f0u); g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movaps xmm4, xmm0 */ g->xmm[4] = g->xmm[0]; }
    { /* movhlps xmm0, xmm0 */ g->xmm[0] = sse_movhlps(g->xmm[0], g->xmm[0]); }
    { /* addps xmm4, xmm0 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[0]); }
    { /* movaps xmm0, xmm4 */ g->xmm[0] = g->xmm[4]; }
    { /* shufps xmm4, xmm4, 1 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 1); }
    { /* addss xmm0, xmm4 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[4]); }
    { /* movaps xmm4, xmmword ptr [0x103ce5d0] */ uint32_t A = COW_IMG(0x103ce5d0u); g->xmm[4] = rd128(A); }
    { /* movaps xmm5, xmm0 */ g->xmm[5] = g->xmm[0]; }
    { /* rsqrtss xmm0, xmm0 */ g->xmm[0] = sse_rsqrtss(g->xmm[0], g->xmm[0]); }
    { /* mulss xmm5, xmm0 */ g->xmm[5] = sse_mulss(g->xmm[5], g->xmm[0]); }
    { /* mulss xmm5, xmm0 */ g->xmm[5] = sse_mulss(g->xmm[5], g->xmm[0]); }
    { /* subss xmm2, xmm5 */ g->xmm[2] = sse_subss(g->xmm[2], g->xmm[5]); }
    { /* mulss xmm3, xmm0 */ g->xmm[3] = sse_mulss(g->xmm[3], g->xmm[0]); }
    { /* mulss xmm3, xmm2 */ g->xmm[3] = sse_mulss(g->xmm[3], g->xmm[2]); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm1, xmm3 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[3]); }
    { /* mulps xmm4, xmm1 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[1]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* mulps xmm1, xmm4 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[4]); }
    { /* addps xmm1, xmmword ptr [0x103ce5c0] */ uint32_t A = COW_IMG(0x103ce5c0u); g->xmm[1] = sse_addps(g->xmm[1], rd128(A)); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0xff */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 255); }
    { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
    { /* addps xmm0, xmmword ptr [0x103ce590] */ uint32_t A = COW_IMG(0x103ce590u); g->xmm[0] = sse_addps(g->xmm[0], rd128(A)); }
    { /* movaps xmm3, xmm2 */ g->xmm[3] = g->xmm[2]; }
    { /* shufps xmm2, xmm2, 0xaa */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 170); }
    { /* mulps xmm2, xmm4 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[4]); }
    { /* addps xmm2, xmmword ptr [0x103ce5a0] */ uint32_t A = COW_IMG(0x103ce5a0u); g->xmm[2] = sse_addps(g->xmm[2], rd128(A)); }
    { /* shufps xmm3, xmm3, 0x55 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 85); }
    { /* mulps xmm4, xmm3 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[3]); }
    { /* addps xmm4, xmmword ptr [0x103ce5b0] */ uint32_t A = COW_IMG(0x103ce5b0u); g->xmm[4] = sse_addps(g->xmm[4], rd128(A)); }
    { /* movups xmmword ptr [eax], xmm1 */ uint32_t A = arg1; wr128(A, g->xmm[1]); }
    { /* movups xmmword ptr [eax + 0x10], xmm4 */ uint32_t A = arg1 + 0x10u; wr128(A, g->xmm[4]); }
    { /* movups xmmword ptr [eax + 0x20], xmm2 */ uint32_t A = arg1 + 0x20u; wr128(A, g->xmm[2]); }
    { /* movups xmmword ptr [eax + 0x30], xmm0 */ uint32_t A = arg1 + 0x30u; wr128(A, g->xmm[0]); }
    g->edx = arg2;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fa2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fa2f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
