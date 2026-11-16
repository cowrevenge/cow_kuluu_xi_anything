/* f_0x100700a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100700a0(Guest* g)
{
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    { /* movaps xmm0, xmmword ptr [esi] */ uint32_t A = self + 0x810u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esi + 0x10] */ uint32_t A = self + 0x820u; g->xmm[1] = rd128(A); }
    { /* movaps xmmword ptr [edi], xmm0 */ uint32_t A = arg1; wr128(A, g->xmm[0]); }
    { /* movaps xmm2, xmmword ptr [esi + 0x20] */ uint32_t A = self + 0x830u; g->xmm[2] = rd128(A); }
    { /* movaps xmmword ptr [edi + 0x10], xmm1 */ uint32_t A = arg1 + 0x10u; wr128(A, g->xmm[1]); }
    { /* movaps xmm3, xmmword ptr [esi + 0x30] */ uint32_t A = self + 0x840u; g->xmm[3] = rd128(A); }
    { /* movaps xmmword ptr [edi + 0x20], xmm2 */ uint32_t A = arg1 + 0x20u; wr128(A, g->xmm[2]); }
    { /* movaps xmmword ptr [edi + 0x30], xmm3 */ uint32_t A = arg1 + 0x30u; wr128(A, g->xmm[3]); }
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100700a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100700a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
