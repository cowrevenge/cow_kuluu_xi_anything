/* f_0x102fa820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102fa820(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((arg3 & 0xfu) != 0u) goto L_102fa87b;
    { /* xorps xmm0, xmm0 */ g->xmm[0] = sse_xorps(g->xmm[0], g->xmm[0]); }
    { /* movlps xmm0, qword ptr [edx] */ uint32_t A = arg2; g->xmm[0].q[0] = rd64(A); }
    { /* movss xmm1, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* mulps xmm1, xmmword ptr [eax + 0x20] */ uint32_t A = arg3 + 0x20u; g->xmm[1] = sse_mulps(g->xmm[1], rd128(A)); }
    { /* addps xmm1, xmmword ptr [eax + 0x30] */ uint32_t A = arg3 + 0x30u; g->xmm[1] = sse_addps(g->xmm[1], rd128(A)); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* mulps xmm0, xmmword ptr [eax] */ uint32_t A = arg3; g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* shufps xmm2, xmm2, 0x55 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 85); }
    { /* mulps xmm2, xmmword ptr [eax + 0x10] */ uint32_t A = arg3 + 0x10u; g->xmm[2] = sse_mulps(g->xmm[2], rd128(A)); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movups xmmword ptr [ecx], xmm0 */ uint32_t A = arg1; wr128(A, g->xmm[0]); }
    g->edx = arg2;
    return arg1;
L_102fa87b: ;
    { /* xorps xmm2, xmm2 */ g->xmm[2] = sse_xorps(g->xmm[2], g->xmm[2]); }
    { /* movlps xmm2, qword ptr [edx] */ uint32_t A = arg2; g->xmm[2].q[0] = rd64(A); }
    { /* movlps xmm4, qword ptr [eax] */ uint32_t A = arg3; g->xmm[4].q[0] = rd64(A); }
    { /* movhps xmm4, qword ptr [eax + 8] */ uint32_t A = arg3 + 8u; g->xmm[4].q[1] = rd64(A); }
    { /* movlps xmm3, qword ptr [eax + 0x10] */ uint32_t A = arg3 + 0x10u; g->xmm[3].q[0] = rd64(A); }
    { /* movhps xmm3, qword ptr [eax + 0x18] */ uint32_t A = arg3 + 0x18u; g->xmm[3].q[1] = rd64(A); }
    { /* movss xmm5, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->xmm[5] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm5, xmm5, 0 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 0); }
    { /* movaps xmm6, xmm2 */ g->xmm[6] = g->xmm[2]; }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* mulps xmm4, xmm2 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[2]); }
    { /* shufps xmm6, xmm6, 0x55 */ g->xmm[6] = sse_shufps(g->xmm[6], g->xmm[6], 85); }
    { /* mulps xmm3, xmm6 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[6]); }
    { /* addps xmm4, xmm3 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[3]); }
    { /* movlps xmm1, qword ptr [eax + 0x20] */ uint32_t A = arg3 + 0x20u; g->xmm[1].q[0] = rd64(A); }
    { /* movhps xmm1, qword ptr [eax + 0x28] */ uint32_t A = arg3 + 0x28u; g->xmm[1].q[1] = rd64(A); }
    { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
    { /* movlps xmm0, qword ptr [eax + 0x30] */ uint32_t A = arg3 + 0x30u; g->xmm[0].q[0] = rd64(A); }
    { /* movhps xmm0, qword ptr [eax + 0x38] */ uint32_t A = arg3 + 0x38u; g->xmm[0].q[1] = rd64(A); }
    { /* addps xmm1, xmm0 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[0]); }
    { /* addps xmm4, xmm1 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[1]); }
    { /* movups xmmword ptr [ecx], xmm4 */ uint32_t A = arg1; wr128(A, g->xmm[4]); }
    g->edx = arg2;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fa820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fa820(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
