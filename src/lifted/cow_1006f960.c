/* f_0x1006f960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1006f960(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movaps xmm4, xmmword ptr [esi] */ uint32_t A = arg2; g->xmm[4] = rd128(A); }
    { /* prefetchnta byte ptr [edi] */  }
    { /* movaps xmm5, xmmword ptr [esi + 0x10] */ uint32_t A = arg2 + 0x10u; g->xmm[5] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [esi + 0x20] */ uint32_t A = arg2 + 0x20u; g->xmm[6] = rd128(A); }
    { /* movaps xmm7, xmmword ptr [esi + 0x30] */ uint32_t A = arg2 + 0x30u; g->xmm[7] = rd128(A); }
    { /* movss xmm0, dword ptr [edi] */ uint32_t A = arg3; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm1, dword ptr [edi + 4] */ uint32_t A = arg3 + 4u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm2, dword ptr [edi + 8] */ uint32_t A = arg3 + 8u; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* movss xmm3, dword ptr [edi + 0xc] */ uint32_t A = arg3 + 0xcu; g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
    { /* mulps xmm1, xmm5 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[5]); }
    { /* mulps xmm2, xmm6 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[6]); }
    { /* mulps xmm3, xmm7 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[7]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm0, xmm3 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[3]); }
    { /* movaps xmmword ptr [edi], xmm0 */ uint32_t A = arg1; wr128(A, g->xmm[0]); }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006f960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006f960(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
