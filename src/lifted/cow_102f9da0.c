/* f_0x102f9da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102f9da0(Guest* g)
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
    { /* movups xmm2, xmmword ptr [eax] */ uint32_t A = arg2; g->xmm[2] = rd128(A); }
    { /* movss xmm1, dword ptr [ebp + 0x1c] */ uint32_t A = sp0 + 0x18u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movups xmm3, xmmword ptr [ecx] */ uint32_t A = arg3; g->xmm[3] = rd128(A); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* subps xmm3, xmm2 */ g->xmm[3] = sse_subps(g->xmm[3], g->xmm[2]); }
    { /* movups xmm4, xmmword ptr [eax] */ uint32_t A = arg4; g->xmm[4] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* subps xmm4, xmm2 */ g->xmm[4] = sse_subps(g->xmm[4], g->xmm[2]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* mulps xmm4, xmm1 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[1]); }
    { /* addps xmm3, xmm4 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[4]); }
    { /* movups xmmword ptr [eax], xmm3 */ uint32_t A = arg1; wr128(A, g->xmm[3]); }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f9da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f9da0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
