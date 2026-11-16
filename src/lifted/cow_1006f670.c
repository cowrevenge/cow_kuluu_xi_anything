/* f_0x1006f670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
uint32_t cow_fn_1006f670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    { /* movups xmm0, xmmword ptr [esi] */ uint32_t A = arg1; g->xmm[0] = rd128(A); }
    { /* shufps xmm0, xmm0, 0x24 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 36); }
    { /* mulps xmm0, xmm0 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[0]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* shufps xmm1, xmm1, 0x55 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm0 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[0]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* sqrtss xmm0, xmm0 */ g->xmm[0] = sse_sqrtss(g->xmm[0], g->xmm[0]); }
    { /* movss dword ptr [esp + 4], xmm0 */ uint32_t A = sp0 - 4u; wr32(A, g->xmm[0].d[0]); }
    fpush(g, (double)rdf32(sp0 - 4u));
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006f670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006f670(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
