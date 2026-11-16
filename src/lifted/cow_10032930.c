/* f_0x10032930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10032930(Guest* g)
{
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movups xmm0, xmmword ptr [ecx] */ uint32_t A = arg3; g->xmm[0] = rd128(A); }
    { /* movups xmm1, xmmword ptr [ecx + 0x20] */ uint32_t A = arg3 + 0x20u; g->xmm[1] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [edx] */ uint32_t A = arg1; g->xmm[5] = rd128(A); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* mulps xmm0, xmm5 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[5]); }
    { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
    { /* movups xmm2, xmmword ptr [ecx + 8] */ uint32_t A = arg3 + 8u; g->xmm[2] = rd128(A); }
    { /* movups xmm3, xmmword ptr [ecx + 0x28] */ uint32_t A = arg3 + 0x28u; g->xmm[3] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [edx + 0x10] */ uint32_t A = arg1 + 0x10u; g->xmm[5] = rd128(A); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm2, xmm5 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[5]); }
    { /* mulps xmm3, xmm5 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[5]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm1, xmm3 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[3]); }
    { /* movups xmm2, xmmword ptr [ecx + 0x10] */ uint32_t A = arg3 + 0x10u; g->xmm[2] = rd128(A); }
    { /* movups xmm3, xmmword ptr [ecx + 0x30] */ uint32_t A = arg3 + 0x30u; g->xmm[3] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [edx + 0x20] */ uint32_t A = arg1 + 0x20u; g->xmm[5] = rd128(A); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm2, xmm5 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[5]); }
    { /* mulps xmm3, xmm5 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[5]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm1, xmm3 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[3]); }
    { /* movups xmm2, xmmword ptr [ecx + 0x18] */ uint32_t A = arg3 + 0x18u; g->xmm[2] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [edx + 0x30] */ uint32_t A = arg1 + 0x30u; g->xmm[5] = rd128(A); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* mulps xmm2, xmm5 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[5]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* movups xmm2, xmmword ptr [ecx + 4] */ uint32_t A = arg3 + 4u; g->xmm[2] = rd128(A); }
    { /* movups xmm3, xmmword ptr [ecx + 0x24] */ uint32_t A = arg3 + 0x24u; g->xmm[3] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [edx] */ uint32_t A = arg2; g->xmm[5] = rd128(A); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm2, xmm5 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[5]); }
    { /* mulps xmm3, xmm5 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[5]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm1, xmm3 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[3]); }
    { /* movups xmm2, xmmword ptr [ecx + 0xc] */ uint32_t A = arg3 + 0xcu; g->xmm[2] = rd128(A); }
    { /* movups xmm3, xmmword ptr [ecx + 0x2c] */ uint32_t A = arg3 + 0x2cu; g->xmm[3] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [edx + 0x10] */ uint32_t A = arg2 + 0x10u; g->xmm[5] = rd128(A); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm2, xmm5 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[5]); }
    { /* mulps xmm3, xmm5 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[5]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm1, xmm3 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[3]); }
    { /* movups xmm2, xmmword ptr [ecx + 0x14] */ uint32_t A = arg3 + 0x14u; g->xmm[2] = rd128(A); }
    { /* movups xmm3, xmmword ptr [ecx + 0x34] */ uint32_t A = arg3 + 0x34u; g->xmm[3] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [edx + 0x20] */ uint32_t A = arg2 + 0x20u; g->xmm[5] = rd128(A); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm2, xmm5 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[5]); }
    { /* mulps xmm3, xmm5 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[5]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm1, xmm3 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[3]); }
    { /* movups xmm2, xmmword ptr [ecx + 0x1c] */ uint32_t A = arg3 + 0x1cu; g->xmm[2] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [edx + 0x30] */ uint32_t A = arg2 + 0x30u; g->xmm[5] = rd128(A); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* mulps xmm2, xmm5 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[5]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* movss dword ptr [ecx], xmm0 */ uint32_t A = arg4; wr32(A, g->xmm[0].d[0]); }
    { /* shufps xmm0, xmm0, 9 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 9); }
    { /* movlps qword ptr [ecx + 4], xmm0 */ uint32_t A = arg4 + 4u; wr64(A, g->xmm[0].q[0]); }
    { /* movss dword ptr [edx], xmm1 */ uint32_t A = arg5; wr32(A, g->xmm[1].d[0]); }
    { /* shufps xmm1, xmm1, 9 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 9); }
    { /* movlps qword ptr [edx + 4], xmm1 */ uint32_t A = arg5 + 4u; wr64(A, g->xmm[1].q[0]); }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10032930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10032930(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
