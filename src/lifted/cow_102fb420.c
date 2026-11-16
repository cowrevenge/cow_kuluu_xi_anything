/* f_0x102fb420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
uint32_t cow_fn_102fb420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0xcu) & 0xfffffff0u;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 4u, in_ebx);
    if ((arg1 & 0xfu) != 0u)
    {
        { /* movlps xmm1, qword ptr [eax + 0x10] */ uint32_t A = arg1 + 0x10u; g->xmm[1].q[0] = rd64(A); }
        { /* movlps xmm7, qword ptr [eax] */ uint32_t A = arg1; g->xmm[7].q[0] = rd64(A); }
        { /* movhps xmm1, qword ptr [eax + 0x18] */ uint32_t A = arg1 + 0x18u; g->xmm[1].q[1] = rd64(A); }
        { /* movhps xmm7, qword ptr [eax + 8] */ uint32_t A = arg1 + 8u; g->xmm[7].q[1] = rd64(A); }
        { /* movlps xmm2, qword ptr [eax + 0x20] */ uint32_t A = arg1 + 0x20u; g->xmm[2].q[0] = rd64(A); }
        { /* movlps xmm0, qword ptr [eax + 0x30] */ uint32_t A = arg1 + 0x30u; g->xmm[0].q[0] = rd64(A); }
        { /* movhps xmm2, qword ptr [eax + 0x28] */ uint32_t A = arg1 + 0x28u; g->xmm[2].q[1] = rd64(A); }
        { /* movhps xmm0, qword ptr [eax + 0x38] */ uint32_t A = arg1 + 0x38u; g->xmm[0].q[1] = rd64(A); }
    }
    else
    {
        { /* movaps xmm7, xmmword ptr [eax] */ uint32_t A = arg1; g->xmm[7] = rd128(A); }
        { /* movaps xmm1, xmmword ptr [eax + 0x10] */ uint32_t A = arg1 + 0x10u; g->xmm[1] = rd128(A); }
        { /* movaps xmm2, xmmword ptr [eax + 0x20] */ uint32_t A = arg1 + 0x20u; g->xmm[2] = rd128(A); }
        { /* movaps xmm0, xmmword ptr [eax + 0x30] */ uint32_t A = arg1 + 0x30u; g->xmm[0] = rd128(A); }
    }
    { /* shufps xmm2, xmm2, 0x39 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 57); }
    { /* shufps xmm1, xmm1, 0x39 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 57); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0x4e */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 78); }
    { /* mulps xmm3, xmm2 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmm4, xmm0 */ g->xmm[4] = g->xmm[0]; }
    { /* shufps xmm0, xmm0, 0x39 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 57); }
    { /* mulps xmm4, xmm2 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[2]); }
    { /* mulps xmm2, xmm0 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[0]); }
    { /* movaps xmm0, xmm2 */ g->xmm[0] = g->xmm[2]; }
    { /* shufps xmm2, xmm2, 0x4e */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 78); }
    { /* subps xmm2, xmm0 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[0]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm1, xmm1, 0x39 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 57); }
    { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
    { /* shufps xmm1, xmm1, 0x39 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 57); }
    { /* movaps xmm5, xmm4 */ g->xmm[5] = g->xmm[4]; }
    { /* shufps xmm4, xmm4, 0x39 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 57); }
    { /* movaps xmm6, xmm3 */ g->xmm[6] = g->xmm[3]; }
    { /* shufps xmm3, xmm3, 0x4e */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 78); }
    { /* shufps xmm6, xmm6, 0x39 */ g->xmm[6] = sse_shufps(g->xmm[6], g->xmm[6], 57); }
    { /* subps xmm4, xmm3 */ g->xmm[4] = sse_subps(g->xmm[4], g->xmm[3]); }
    { /* subps xmm5, xmm6 */ g->xmm[5] = sse_subps(g->xmm[5], g->xmm[6]); }
    { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
    { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* mulps xmm0, xmm7 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[7]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movhlps xmm0, xmm0 */ g->xmm[0] = sse_movhlps(g->xmm[0], g->xmm[0]); }
    { /* addps xmm1, xmm0 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm1, xmm1, 1 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 1); }
    { /* subss xmm0, xmm1 */ g->xmm[0] = sse_subss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [esp], xmm0 */ uint32_t A = sp1 - 0x30u; wr32(A, g->xmm[0].d[0]); }
    fpush(g, (double)rdf32(sp1 - 0x30u));
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fb420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fb420(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
