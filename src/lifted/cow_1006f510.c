/* f_0x1006f510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1006f510(Guest* g)
{
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    { /* movaps xmm7, xmmword ptr [ecx] */ uint32_t A = arg1; g->xmm[7] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [ecx + 0x10] */ uint32_t A = arg1 + 0x10u; g->xmm[6] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [ecx + 0x20] */ uint32_t A = arg1 + 0x20u; g->xmm[5] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [ecx + 0x30] */ uint32_t A = arg1 + 0x30u; g->xmm[4] = rd128(A); }
    { /* movaps xmm0, xmm7 */ g->xmm[0] = g->xmm[7]; }
    { /* unpcklps xmm7, xmm6 */ g->xmm[7] = sse_unpcklps(g->xmm[7], g->xmm[6]); }
    { /* movlps qword ptr [ecx], xmm7 */ uint32_t A = arg1; wr64(A, g->xmm[7].q[0]); }
    { /* movhps qword ptr [ecx + 0x10], xmm7 */ uint32_t A = arg1 + 0x10u; wr64(A, g->xmm[7].q[1]); }
    { /* unpckhps xmm0, xmm6 */ g->xmm[0] = sse_unpckhps(g->xmm[0], g->xmm[6]); }
    { /* movlps qword ptr [ecx + 0x20], xmm0 */ uint32_t A = arg1 + 0x20u; wr64(A, g->xmm[0].q[0]); }
    { /* movhps qword ptr [ecx + 0x30], xmm0 */ uint32_t A = arg1 + 0x30u; wr64(A, g->xmm[0].q[1]); }
    { /* movaps xmm0, xmm5 */ g->xmm[0] = g->xmm[5]; }
    { /* unpcklps xmm5, xmm4 */ g->xmm[5] = sse_unpcklps(g->xmm[5], g->xmm[4]); }
    { /* unpckhps xmm0, xmm4 */ g->xmm[0] = sse_unpckhps(g->xmm[0], g->xmm[4]); }
    { /* movlps qword ptr [ecx + 8], xmm5 */ uint32_t A = arg1 + 8u; wr64(A, g->xmm[5].q[0]); }
    { /* movhps qword ptr [ecx + 0x18], xmm5 */ uint32_t A = arg1 + 0x18u; wr64(A, g->xmm[5].q[1]); }
    { /* movlps qword ptr [ecx + 0x28], xmm0 */ uint32_t A = arg1 + 0x28u; wr64(A, g->xmm[0].q[0]); }
    { /* movhps qword ptr [ecx + 0x38], xmm0 */ uint32_t A = arg1 + 0x38u; wr64(A, g->xmm[0].q[1]); }
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006f510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006f510(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
