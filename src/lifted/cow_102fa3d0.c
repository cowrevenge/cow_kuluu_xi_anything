/* f_0x102fa3d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102fa3d0(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movlps xmm1, qword ptr [eax] */ uint32_t A = arg3; g->xmm[1].q[0] = rd64(A); }
    { /* movhps xmm1, qword ptr [eax + 8] */ uint32_t A = arg3 + 8u; g->xmm[1].q[1] = rd64(A); }
    { /* movlps xmm0, qword ptr [ebx] */ uint32_t A = arg2; g->xmm[0].q[0] = rd64(A); }
    { /* movhps xmm0, qword ptr [ebx + 8] */ uint32_t A = arg2 + 8u; g->xmm[0].q[1] = rd64(A); }
    { /* movaps xmm2, xmm1 */ g->xmm[2] = g->xmm[1]; }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm3, xmm2 */ g->xmm[3] = g->xmm[2]; }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm0, xmm0, 0x1b */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 27); }
    { /* xorps xmm2, xmmword ptr [0x109fa100] */ uint32_t A = COW_IMG(0x109fa100u); g->xmm[2] = sse_xorps(g->xmm[2], rd128(A)); }
    { /* mulps xmm2, xmm0 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[0]); }
    { /* addps xmm1, xmm2 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[2]); }
    { /* movaps xmm2, xmm3 */ g->xmm[2] = g->xmm[3]; }
    { /* shufps xmm3, xmm3, 0x55 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 85); }
    { /* shufps xmm0, xmm0, 0xb1 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 177); }
    { /* xorps xmm3, xmmword ptr [0x109fa0f0] */ uint32_t A = COW_IMG(0x109fa0f0u); g->xmm[3] = sse_xorps(g->xmm[3], rd128(A)); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm1, xmm3 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[3]); }
    { /* shufps xmm2, xmm2, 0xaa */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 170); }
    { /* shufps xmm0, xmm0, 0x1b */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 27); }
    { /* xorps xmm2, xmmword ptr [0x109fa0e0] */ uint32_t A = COW_IMG(0x109fa0e0u); g->xmm[2] = sse_xorps(g->xmm[2], rd128(A)); }
    { /* mulps xmm2, xmm0 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[0]); }
    { /* addps xmm1, xmm2 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[2]); }
    { /* movlps qword ptr [edx], xmm1 */ uint32_t A = arg1; wr64(A, g->xmm[1].q[0]); }
    { /* movhps qword ptr [edx + 8], xmm1 */ uint32_t A = arg1 + 8u; wr64(A, g->xmm[1].q[1]); }
    g->edx = arg1;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fa3d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fa3d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
