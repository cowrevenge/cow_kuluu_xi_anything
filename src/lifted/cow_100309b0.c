/* f_0x100309b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_100309b0(Guest* g)
{
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movups xmm0, xmmword ptr [ecx] */ uint32_t A = arg2; g->xmm[0] = rd128(A); }
    { /* movups xmm1, xmmword ptr [ecx + 0xc] */ uint32_t A = arg2 + 0xcu; g->xmm[1] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [edx] */ uint32_t A = arg1; g->xmm[6] = rd128(A); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* movaps xmm3, xmm1 */ g->xmm[3] = g->xmm[1]; }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm2, xmm6 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[6]); }
    { /* mulps xmm3, xmm6 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[6]); }
    { /* movaps xmm6, xmmword ptr [edx + 0x10] */ uint32_t A = arg1 + 0x10u; g->xmm[6] = rd128(A); }
    { /* movaps xmm4, xmm0 */ g->xmm[4] = g->xmm[0]; }
    { /* movaps xmm5, xmm1 */ g->xmm[5] = g->xmm[1]; }
    { /* shufps xmm4, xmm4, 0x55 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 85); }
    { /* shufps xmm5, xmm5, 0x55 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 85); }
    { /* mulps xmm4, xmm6 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[6]); }
    { /* mulps xmm5, xmm6 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[6]); }
    { /* addps xmm2, xmm4 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[4]); }
    { /* addps xmm3, xmm5 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[5]); }
    { /* movaps xmm6, xmmword ptr [edx + 0x20] */ uint32_t A = arg1 + 0x20u; g->xmm[6] = rd128(A); }
    { /* movaps xmm4, xmm0 */ g->xmm[4] = g->xmm[0]; }
    { /* movaps xmm5, xmm1 */ g->xmm[5] = g->xmm[1]; }
    { /* shufps xmm4, xmm4, 0xaa */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 170); }
    { /* shufps xmm5, xmm5, 0xaa */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 170); }
    { /* mulps xmm4, xmm6 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[6]); }
    { /* mulps xmm5, xmm6 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[6]); }
    { /* addps xmm2, xmm4 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[4]); }
    { /* addps xmm3, xmm5 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[5]); }
    { /* movaps xmm6, xmmword ptr [edx + 0x30] */ uint32_t A = arg1 + 0x30u; g->xmm[6] = rd128(A); }
    { /* addps xmm2, xmm6 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[6]); }
    { /* movss dword ptr [ecx], xmm2 */ uint32_t A = arg3; wr32(A, g->xmm[2].d[0]); }
    { /* shufps xmm2, xmm2, 9 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 9); }
    { /* movlps qword ptr [ecx + 4], xmm2 */ uint32_t A = arg3 + 4u; wr64(A, g->xmm[2].q[0]); }
    { /* movss dword ptr [edx], xmm3 */ uint32_t A = arg4; wr32(A, g->xmm[3].d[0]); }
    { /* shufps xmm3, xmm3, 9 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 9); }
    { /* movlps qword ptr [edx + 4], xmm3 */ uint32_t A = arg4 + 4u; wr64(A, g->xmm[3].q[0]); }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100309b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100309b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
