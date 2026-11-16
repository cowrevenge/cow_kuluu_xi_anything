/* f_0x1006f7d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_1006f7d0(Guest* g)
{
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movaps xmm0, xmmword ptr [ebx] */ uint32_t A = arg2; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [ecx] */ uint32_t A = arg3; g->xmm[1] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [edx] */ uint32_t A = arg4; g->xmm[2] = rd128(A); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* movaps xmmword ptr [eax], xmm0 */ uint32_t A = arg1; wr128(A, g->xmm[0]); }
    g->edx = arg4;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006f7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006f7d0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
