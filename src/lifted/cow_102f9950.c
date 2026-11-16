/* f_0x102f9950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102f9950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 8u);

    wr32(sp0 - 4u, in_ebp);
    { /* movss xmm0, dword ptr [ebp + 0x1c] */ uint32_t A = sp0 + 0x18u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm1, xmm0 */ g->xmm[1].d[0] = g->xmm[0].d[0]; }
    { /* mulss xmm1, xmm0 */ g->xmm[1] = sse_mulss(g->xmm[1], g->xmm[0]); }
    { /* movss xmm2, xmm0 */ g->xmm[2].d[0] = g->xmm[0].d[0]; }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* mulss xmm2, xmm1 */ g->xmm[2] = sse_mulss(g->xmm[2], g->xmm[1]); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* mulps xmm0, xmmword ptr [0x103ce4c0] */ uint32_t A = COW_IMG(0x103ce4c0u); g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* mulps xmm1, xmmword ptr [0x103ce4b0] */ uint32_t A = COW_IMG(0x103ce4b0u); g->xmm[1] = sse_mulps(g->xmm[1], rd128(A)); }
    { /* addps xmm0, xmmword ptr [0x103ce4a0] */ uint32_t A = COW_IMG(0x103ce4a0u); g->xmm[0] = sse_addps(g->xmm[0], rd128(A)); }
    { /* mulps xmm2, xmmword ptr [0x103ce490] */ uint32_t A = COW_IMG(0x103ce490u); g->xmm[2] = sse_mulps(g->xmm[2], rd128(A)); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* shufps xmm1, xmm0, 0x55 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[0], 85); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* shufps xmm2, xmm0, 0xaa */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[0], 170); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* shufps xmm3, xmm0, 0xff */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[0], 255); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* movss xmm4, dword ptr [eax + 8] */ uint32_t A = arg2 + 8u; g->xmm[4] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movhps xmm4, qword ptr [eax] */ uint32_t A = arg2; g->xmm[4].q[1] = rd64(A); }
    { /* mulps xmm4, xmm0 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[0]); }
    { /* movss xmm5, dword ptr [ecx + 8] */ uint32_t A = arg3 + 8u; g->xmm[5] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movhps xmm5, qword ptr [ecx] */ uint32_t A = arg3; g->xmm[5].q[1] = rd64(A); }
    { /* mulps xmm5, xmm1 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[1]); }
    { /* movss xmm6, dword ptr [edx + 8] */ uint32_t A = arg4 + 8u; g->xmm[6] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movhps xmm6, qword ptr [edx] */ uint32_t A = arg4; g->xmm[6].q[1] = rd64(A); }
    { /* addps xmm4, xmm5 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[5]); }
    { /* mulps xmm6, xmm2 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[2]); }
    { /* addps xmm4, xmm6 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[6]); }
    { /* movss xmm7, dword ptr [eax + 8] */ uint32_t A = arg5 + 8u; g->xmm[7] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movhps xmm7, qword ptr [eax] */ uint32_t A = arg5; g->xmm[7].q[1] = rd64(A); }
    { /* mulps xmm7, xmm3 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[3]); }
    { /* addps xmm4, xmm7 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[7]); }
    { /* movhps qword ptr [ecx], xmm4 */ uint32_t A = arg1; wr64(A, g->xmm[4].q[1]); }
    { /* movss dword ptr [ecx + 8], xmm4 */ uint32_t A = arg1 + 8u; wr32(A, g->xmm[4].d[0]); }
    g->edx = arg4;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f9950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f9950(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
