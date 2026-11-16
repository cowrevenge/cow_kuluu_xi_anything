/* f_0x1006f4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1006f4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    { /* movss xmm1, dword ptr [esp + 0x14] */ uint32_t A = sp0 + 0xcu; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* movups xmm0, xmmword ptr [esi] */ uint32_t A = arg2; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* movups xmm2, xmmword ptr [edi] */ uint32_t A = arg1; g->xmm[2] = rd128(A); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* movss dword ptr [edi], xmm0 */ uint32_t A = arg1; wr32(A, g->xmm[0].d[0]); }
    { /* shufps xmm0, xmm0, 9 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 9); }
    { /* movss dword ptr [edi + 4], xmm0 */ uint32_t A = arg1 + 4u; wr32(A, g->xmm[0].d[0]); }
    { /* shufps xmm0, xmm0, 1 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 1); }
    { /* movss dword ptr [edi + 8], xmm0 */ uint32_t A = arg1 + 8u; wr32(A, g->xmm[0].d[0]); }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006f4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006f4d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
