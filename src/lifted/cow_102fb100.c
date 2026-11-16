/* f_0x102fb100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102fb100(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movss xmm4, dword ptr [edx] */ uint32_t A = arg2; g->xmm[4] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm4, xmm4, 0 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 0); }
    { /* movlps xmm3, qword ptr [ecx] */ uint32_t A = arg3; g->xmm[3].q[0] = rd64(A); }
    { /* movhps xmm3, qword ptr [ecx + 8] */ uint32_t A = arg3 + 8u; g->xmm[3].q[1] = rd64(A); }
    { /* mulps xmm4, xmm3 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[3]); }
    { /* movss xmm5, dword ptr [edx + 4] */ uint32_t A = arg2 + 4u; g->xmm[5] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm5, xmm5, 0 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 0); }
    { /* movlps xmm2, qword ptr [ecx + 0x10] */ uint32_t A = arg3 + 0x10u; g->xmm[2].q[0] = rd64(A); }
    { /* movhps xmm2, qword ptr [ecx + 0x18] */ uint32_t A = arg3 + 0x18u; g->xmm[2].q[1] = rd64(A); }
    { /* mulps xmm5, xmm2 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[2]); }
    { /* addps xmm4, xmm5 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[5]); }
    { /* movss xmm5, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->xmm[5] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm5, xmm5, 0 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 0); }
    { /* movlps xmm1, qword ptr [ecx + 0x20] */ uint32_t A = arg3 + 0x20u; g->xmm[1].q[0] = rd64(A); }
    { /* movhps xmm1, qword ptr [ecx + 0x28] */ uint32_t A = arg3 + 0x28u; g->xmm[1].q[1] = rd64(A); }
    { /* mulps xmm5, xmm1 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[1]); }
    { /* addps xmm4, xmm5 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[5]); }
    { /* movss xmm5, dword ptr [edx + 0xc] */ uint32_t A = arg2 + 0xcu; g->xmm[5] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm5, xmm5, 0 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 0); }
    { /* movlps xmm0, qword ptr [ecx + 0x30] */ uint32_t A = arg3 + 0x30u; g->xmm[0].q[0] = rd64(A); }
    { /* movhps xmm0, qword ptr [ecx + 0x38] */ uint32_t A = arg3 + 0x38u; g->xmm[0].q[1] = rd64(A); }
    { /* mulps xmm5, xmm0 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[0]); }
    { /* addps xmm4, xmm5 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[5]); }
    { /* movss xmm5, dword ptr [edx + 0x10] */ uint32_t A = arg2 + 0x10u; g->xmm[5] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm5, xmm5, 0 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 0); }
    { /* mulps xmm5, xmm3 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[3]); }
    { /* movss xmm6, dword ptr [edx + 0x14] */ uint32_t A = arg2 + 0x14u; g->xmm[6] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm6, xmm6, 0 */ g->xmm[6] = sse_shufps(g->xmm[6], g->xmm[6], 0); }
    { /* mulps xmm6, xmm2 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[2]); }
    { /* addps xmm5, xmm6 */ g->xmm[5] = sse_addps(g->xmm[5], g->xmm[6]); }
    { /* movss xmm6, dword ptr [edx + 0x18] */ uint32_t A = arg2 + 0x18u; g->xmm[6] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm6, xmm6, 0 */ g->xmm[6] = sse_shufps(g->xmm[6], g->xmm[6], 0); }
    { /* mulps xmm6, xmm1 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[1]); }
    { /* addps xmm5, xmm6 */ g->xmm[5] = sse_addps(g->xmm[5], g->xmm[6]); }
    { /* movss xmm6, dword ptr [edx + 0x1c] */ uint32_t A = arg2 + 0x1cu; g->xmm[6] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm6, xmm6, 0 */ g->xmm[6] = sse_shufps(g->xmm[6], g->xmm[6], 0); }
    { /* mulps xmm6, xmm0 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[0]); }
    { /* addps xmm5, xmm6 */ g->xmm[5] = sse_addps(g->xmm[5], g->xmm[6]); }
    { /* movss xmm6, dword ptr [edx + 0x20] */ uint32_t A = arg2 + 0x20u; g->xmm[6] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm6, xmm6, 0 */ g->xmm[6] = sse_shufps(g->xmm[6], g->xmm[6], 0); }
    { /* movaps xmm7, xmm4 */ g->xmm[7] = g->xmm[4]; }
    { /* unpcklps xmm4, xmm5 */ g->xmm[4] = sse_unpcklps(g->xmm[4], g->xmm[5]); }
    { /* mulps xmm6, xmm3 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[3]); }
    { /* unpckhps xmm7, xmm5 */ g->xmm[7] = sse_unpckhps(g->xmm[7], g->xmm[5]); }
    { /* movss xmm5, dword ptr [edx + 0x24] */ uint32_t A = arg2 + 0x24u; g->xmm[5] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm5, xmm5, 0 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 0); }
    { /* mulps xmm5, xmm2 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[2]); }
    { /* addps xmm6, xmm5 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[5]); }
    { /* movss xmm5, dword ptr [edx + 0x28] */ uint32_t A = arg2 + 0x28u; g->xmm[5] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm5, xmm5, 0 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 0); }
    { /* mulps xmm5, xmm1 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[1]); }
    { /* addps xmm6, xmm5 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[5]); }
    { /* movss xmm5, dword ptr [edx + 0x2c] */ uint32_t A = arg2 + 0x2cu; g->xmm[5] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm5, xmm5, 0 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 0); }
    { /* mulps xmm5, xmm0 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[0]); }
    { /* addps xmm6, xmm5 */ g->xmm[6] = sse_addps(g->xmm[6], g->xmm[5]); }
    { /* movss xmm5, dword ptr [edx + 0x30] */ uint32_t A = arg2 + 0x30u; g->xmm[5] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm5, xmm5, 0 */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 0); }
    { /* mulps xmm5, xmm3 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[3]); }
    { /* movss xmm3, dword ptr [edx + 0x34] */ uint32_t A = arg2 + 0x34u; g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm3, xmm2 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[2]); }
    { /* addps xmm5, xmm3 */ g->xmm[5] = sse_addps(g->xmm[5], g->xmm[3]); }
    { /* movss xmm2, dword ptr [edx + 0x38] */ uint32_t A = arg2 + 0x38u; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
    { /* movss xmm1, dword ptr [edx + 0x3c] */ uint32_t A = arg2 + 0x3cu; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movlps qword ptr [ecx], xmm4 */ uint32_t A = arg1; wr64(A, g->xmm[4].q[0]); }
    { /* addps xmm5, xmm2 */ g->xmm[5] = sse_addps(g->xmm[5], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* addps xmm5, xmm1 */ g->xmm[5] = sse_addps(g->xmm[5], g->xmm[1]); }
    { /* movhps qword ptr [ecx + 0x10], xmm4 */ uint32_t A = arg1 + 0x10u; wr64(A, g->xmm[4].q[1]); }
    { /* movlps qword ptr [ecx + 0x20], xmm7 */ uint32_t A = arg1 + 0x20u; wr64(A, g->xmm[7].q[0]); }
    { /* movhps qword ptr [ecx + 0x30], xmm7 */ uint32_t A = arg1 + 0x30u; wr64(A, g->xmm[7].q[1]); }
    { /* movaps xmm0, xmm6 */ g->xmm[0] = g->xmm[6]; }
    { /* unpcklps xmm6, xmm5 */ g->xmm[6] = sse_unpcklps(g->xmm[6], g->xmm[5]); }
    { /* movlps qword ptr [ecx + 8], xmm6 */ uint32_t A = arg1 + 8u; wr64(A, g->xmm[6].q[0]); }
    { /* movhps qword ptr [ecx + 0x18], xmm6 */ uint32_t A = arg1 + 0x18u; wr64(A, g->xmm[6].q[1]); }
    { /* unpckhps xmm0, xmm5 */ g->xmm[0] = sse_unpckhps(g->xmm[0], g->xmm[5]); }
    { /* movlps qword ptr [ecx + 0x28], xmm0 */ uint32_t A = arg1 + 0x28u; wr64(A, g->xmm[0].q[0]); }
    { /* movhps qword ptr [ecx + 0x38], xmm0 */ uint32_t A = arg1 + 0x38u; wr64(A, g->xmm[0].q[1]); }
    g->edx = arg2;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fb100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fb100(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
