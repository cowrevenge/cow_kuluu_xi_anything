/* f_0x102fa500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102fa500(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    { /* movlps xmm0, qword ptr [edx] */ uint32_t A = arg2; g->xmm[0].q[0] = rd64(A); }
    { /* movhps xmm0, qword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->xmm[0].q[1] = rd64(A); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* mulps xmm0, xmm0 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[0]); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* movhlps xmm0, xmm0 */ g->xmm[0] = sse_movhlps(g->xmm[0], g->xmm[0]); }
    { /* addps xmm2, xmm0 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[0]); }
    { /* mulps xmm1, xmmword ptr [0x103ce640] */ uint32_t A = COW_IMG(0x103ce640u); g->xmm[1] = sse_mulps(g->xmm[1], rd128(A)); }
    { /* movaps xmm0, xmm2 */ g->xmm[0] = g->xmm[2]; }
    { /* shufps xmm2, xmm2, 0x55 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 85); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* rcpss xmm0, xmm0 */ g->xmm[0] = sse_rcpss(g->xmm[0], g->xmm[0]); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* mulss xmm0, xmm2 */ g->xmm[0] = sse_mulss(g->xmm[0], g->xmm[2]); }
    { /* mulss xmm0, xmm3 */ g->xmm[0] = sse_mulss(g->xmm[0], g->xmm[3]); }
    { /* addss xmm3, xmm3 */ g->xmm[3] = sse_addss(g->xmm[3], g->xmm[3]); }
    { /* subss xmm3, xmm0 */ g->xmm[3] = sse_subss(g->xmm[3], g->xmm[0]); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm1, xmm3 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[3]); }
    { /* movups xmmword ptr [eax], xmm1 */ uint32_t A = arg1; wr128(A, g->xmm[1]); }
    g->edx = arg2;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fa500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fa500(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
