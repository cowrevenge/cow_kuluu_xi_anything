/* f_0x102f8e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102f8e70(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((arg3 & 0xfu) != 0u) goto L_102f8ed0;
    { /* movups xmm0, xmmword ptr [ecx] */ uint32_t A = arg2; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* mulps xmm0, xmmword ptr [eax] */ uint32_t A = arg3; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmm2, xmm1 */ g->xmm[2] = g->xmm[1]; }
    { /* shufps xmm1, xmm1, 0x55 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 85); }
    { /* mulps xmm1, xmmword ptr [eax + 0x10] */ uint32_t A = arg3 + 0x10u; g->xmm[1] = sse_mulps(g->xmm[1], rd128(A)); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmm2 */ g->xmm[1] = g->xmm[2]; }
    { /* shufps xmm2, xmm2, 0xaa */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 170); }
    { /* mulps xmm2, xmmword ptr [eax + 0x20] */ uint32_t A = arg3 + 0x20u; g->xmm[2] = sse_mulps(g->xmm[2], rd128(A)); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* mulps xmm1, xmmword ptr [eax + 0x30] */ uint32_t A = arg3 + 0x30u; g->xmm[1] = sse_mulps(g->xmm[1], rd128(A)); }
    { /* addps xmm2, xmm1 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[1]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* movups xmmword ptr [edx], xmm0 */ uint32_t A = arg1; wr128(A, g->xmm[0]); }
    g->edx = arg1;
    return arg1;
L_102f8ed0: ;
    { /* movups xmm4, xmmword ptr [ecx] */ uint32_t A = arg2; g->xmm[4] = rd128(A); }
    { /* movlps xmm3, qword ptr [eax] */ uint32_t A = arg3; g->xmm[3].q[0] = rd64(A); }
    { /* movhps xmm3, qword ptr [eax + 8] */ uint32_t A = arg3 + 8u; g->xmm[3].q[1] = rd64(A); }
    { /* movlps xmm2, qword ptr [eax + 0x10] */ uint32_t A = arg3 + 0x10u; g->xmm[2].q[0] = rd64(A); }
    { /* movhps xmm2, qword ptr [eax + 0x18] */ uint32_t A = arg3 + 0x18u; g->xmm[2].q[1] = rd64(A); }
    { /* movlps xmm1, qword ptr [eax + 0x20] */ uint32_t A = arg3 + 0x20u; g->xmm[1].q[0] = rd64(A); }
    { /* movaps xmm5, xmm4 */ g->xmm[5] = g->xmm[4]; }
    { /* shufps xmm4, xmm4, 0 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 0); }
    { /* mulps xmm3, xmm4 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[4]); }
    { /* movhps xmm1, qword ptr [eax + 0x28] */ uint32_t A = arg3 + 0x28u; g->xmm[1].q[1] = rd64(A); }
    { /* movlps xmm0, qword ptr [eax + 0x30] */ uint32_t A = arg3 + 0x30u; g->xmm[0].q[0] = rd64(A); }
    { /* movaps xmm4, xmm5 */ g->xmm[4] = g->xmm[5]; }
    { /* shufps xmm5, xmm5, 0x55 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 85); }
    { /* mulps xmm2, xmm5 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[5]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* movhps xmm0, qword ptr [eax + 0x38] */ uint32_t A = arg3 + 0x38u; g->xmm[0].q[1] = rd64(A); }
    { /* movaps xmm2, xmm4 */ g->xmm[2] = g->xmm[4]; }
    { /* shufps xmm4, xmm4, 0xaa */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 170); }
    { /* mulps xmm1, xmm4 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[4]); }
    { /* shufps xmm2, xmm2, 0xff */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 255); }
    { /* mulps xmm0, xmm2 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm1, xmm0 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[0]); }
    { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
    { /* movups xmmword ptr [edx], xmm3 */ uint32_t A = arg1; wr128(A, g->xmm[3]); }
    g->edx = arg1;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f8e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f8e70(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
