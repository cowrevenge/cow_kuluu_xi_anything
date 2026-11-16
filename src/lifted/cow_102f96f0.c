/* f_0x102f96f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102f96f0(Guest* g)
{
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movlps xmm0, qword ptr [edx] */ uint32_t A = arg4; g->xmm[0].q[0] = rd64(A); }
    { /* movhps xmm0, qword ptr [edx + 8] */ uint32_t A = arg4 + 8u; g->xmm[0].q[1] = rd64(A); }
    { /* movlps xmm2, qword ptr [ecx] */ uint32_t A = arg3; g->xmm[2].q[0] = rd64(A); }
    { /* movhps xmm2, qword ptr [ecx + 8] */ uint32_t A = arg3 + 8u; g->xmm[2].q[1] = rd64(A); }
    { /* shufps xmm2, xmm2, 0x39 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 57); }
    { /* movlps xmm1, qword ptr [ebp] */ uint32_t A = arg2; g->xmm[1].q[0] = rd64(A); }
    { /* movhps xmm1, qword ptr [ebp + 8] */ uint32_t A = arg2 + 8u; g->xmm[1].q[1] = rd64(A); }
    { /* shufps xmm1, xmm1, 0x39 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 57); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0x4e */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 78); }
    { /* movaps xmm4, xmm0 */ g->xmm[4] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0x39 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 57); }
    { /* mulps xmm0, xmm2 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[2]); }
    { /* mulps xmm4, xmm2 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[2]); }
    { /* mulps xmm2, xmm3 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[3]); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0x4e */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 78); }
    { /* subps xmm0, xmm3 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[3]); }
    { /* movaps xmm3, xmm1 */ g->xmm[3] = g->xmm[1]; }
    { /* shufps xmm1, xmm1, 0x39 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 57); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* shufps xmm1, xmm1, 0x39 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 57); }
    { /* movaps xmm5, xmm4 */ g->xmm[5] = g->xmm[4]; }
    { /* shufps xmm4, xmm4, 0x39 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 57); }
    { /* movaps xmm6, xmm2 */ g->xmm[6] = g->xmm[2]; }
    { /* shufps xmm2, xmm2, 0x4e */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 78); }
    { /* subps xmm4, xmm2 */ g->xmm[4] = sse_subps(g->xmm[4], g->xmm[2]); }
    { /* mulps xmm3, xmm4 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[4]); }
    { /* addps xmm3, xmm0 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[0]); }
    { /* shufps xmm6, xmm6, 0x39 */ g->xmm[6] = sse_shufps(g->xmm[6], g->xmm[6], 57); }
    { /* subps xmm5, xmm6 */ g->xmm[5] = sse_subps(g->xmm[5], g->xmm[6]); }
    { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
    { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
    { /* xorps xmm3, xmmword ptr [0x103ce460] */ uint32_t A = COW_IMG(0x103ce460u); g->xmm[3] = sse_xorps(g->xmm[3], rd128(A)); }
    { /* movups xmmword ptr [eax], xmm3 */ uint32_t A = arg1; wr128(A, g->xmm[3]); }
    g->edx = arg4;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f96f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f96f0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
