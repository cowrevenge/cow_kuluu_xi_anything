/* f_0x102f9d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102f9d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 8u);

    wr32(sp0 - 4u, in_ebp);
    { /* movss xmm0, dword ptr [ebp + 0x18] */ uint32_t A = sp0 + 0x14u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* movss xmm2, dword ptr [eax + 8] */ uint32_t A = arg2 + 8u; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movhps xmm2, qword ptr [eax] */ uint32_t A = arg2; g->xmm[2].q[1] = rd64(A); }
    { /* movss xmm1, dword ptr [ebp + 0x1c] */ uint32_t A = sp0 + 0x18u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm3, dword ptr [ecx + 8] */ uint32_t A = arg3 + 8u; g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movhps xmm3, qword ptr [ecx] */ uint32_t A = arg3; g->xmm[3].q[1] = rd64(A); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* subps xmm3, xmm2 */ g->xmm[3] = sse_subps(g->xmm[3], g->xmm[2]); }
    { /* movss xmm4, dword ptr [eax + 8] */ uint32_t A = arg4 + 8u; g->xmm[4] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movhps xmm4, qword ptr [eax] */ uint32_t A = arg4; g->xmm[4].q[1] = rd64(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* subps xmm4, xmm2 */ g->xmm[4] = sse_subps(g->xmm[4], g->xmm[2]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* mulps xmm4, xmm1 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[1]); }
    { /* addps xmm3, xmm4 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[4]); }
    { /* movss dword ptr [eax + 8], xmm3 */ uint32_t A = arg1 + 8u; wr32(A, g->xmm[3].d[0]); }
    { /* movhps qword ptr [eax], xmm3 */ uint32_t A = arg1; wr64(A, g->xmm[3].q[1]); }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f9d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f9d40(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
