/* f_0x102fa460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102fa460(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    { /* movss xmm0, dword ptr [eax] */ uint32_t A = arg2; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm1, dword ptr [eax + 4] */ uint32_t A = arg2 + 4u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm2, dword ptr [eax + 8] */ uint32_t A = arg2 + 8u; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm3, dword ptr [eax + 0xc] */ uint32_t A = arg2 + 0xcu; g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm4, xmm0 */ g->xmm[4].d[0] = g->xmm[0].d[0]; }
    { /* movss xmm5, xmm1 */ g->xmm[5].d[0] = g->xmm[1].d[0]; }
    { /* movss xmm6, xmm2 */ g->xmm[6].d[0] = g->xmm[2].d[0]; }
    { /* movss xmm7, xmm3 */ g->xmm[7].d[0] = g->xmm[3].d[0]; }
    { /* mulss xmm4, xmm0 */ g->xmm[4] = sse_mulss(g->xmm[4], g->xmm[0]); }
    { /* mulss xmm5, xmm1 */ g->xmm[5] = sse_mulss(g->xmm[5], g->xmm[1]); }
    { /* mulss xmm6, xmm2 */ g->xmm[6] = sse_mulss(g->xmm[6], g->xmm[2]); }
    { /* addss xmm4, xmm5 */ g->xmm[4] = sse_addss(g->xmm[4], g->xmm[5]); }
    { /* mulss xmm7, xmm3 */ g->xmm[7] = sse_mulss(g->xmm[7], g->xmm[3]); }
    { /* addss xmm6, xmm7 */ g->xmm[6] = sse_addss(g->xmm[6], g->xmm[7]); }
    { /* addss xmm4, xmm6 */ g->xmm[4] = sse_addss(g->xmm[4], g->xmm[6]); }
    { /* rsqrtss xmm5, xmm4 */ g->xmm[5] = sse_rsqrtss(g->xmm[5], g->xmm[4]); }
    { /* movss xmm6, xmm5 */ g->xmm[6].d[0] = g->xmm[5].d[0]; }
    { /* mulss xmm5, xmm5 */ g->xmm[5] = sse_mulss(g->xmm[5], g->xmm[5]); }
    { /* mulss xmm4, xmm5 */ g->xmm[4] = sse_mulss(g->xmm[4], g->xmm[5]); }
    { /* movss xmm5, dword ptr [0x103ce630] */ uint32_t A = COW_IMG(0x103ce630u); g->xmm[5] = xmm_q((uint64_t)rd32(A), 0); }
    { /* subss xmm5, xmm4 */ g->xmm[5] = sse_subss(g->xmm[5], g->xmm[4]); }
    { /* mulss xmm5, dword ptr [0x103ce620] */ uint32_t A = COW_IMG(0x103ce620u); g->xmm[5] = sse_mulss(g->xmm[5], xmm_q((uint64_t)rd32(A), 0)); }
    { /* mulss xmm5, xmm6 */ g->xmm[5] = sse_mulss(g->xmm[5], g->xmm[6]); }
    { /* mulss xmm0, xmm5 */ g->xmm[0] = sse_mulss(g->xmm[0], g->xmm[5]); }
    { /* mulss xmm1, xmm5 */ g->xmm[1] = sse_mulss(g->xmm[1], g->xmm[5]); }
    { /* movss dword ptr [eax], xmm0 */ uint32_t A = arg1; wr32(A, g->xmm[0].d[0]); }
    { /* mulss xmm2, xmm5 */ g->xmm[2] = sse_mulss(g->xmm[2], g->xmm[5]); }
    { /* movss dword ptr [eax + 4], xmm1 */ uint32_t A = arg1 + 4u; wr32(A, g->xmm[1].d[0]); }
    { /* mulss xmm3, xmm5 */ g->xmm[3] = sse_mulss(g->xmm[3], g->xmm[5]); }
    { /* movss dword ptr [eax + 8], xmm2 */ uint32_t A = arg1 + 8u; wr32(A, g->xmm[2].d[0]); }
    { /* movss dword ptr [eax + 0xc], xmm3 */ uint32_t A = arg1 + 0xcu; wr32(A, g->xmm[3].d[0]); }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fa460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fa460(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
