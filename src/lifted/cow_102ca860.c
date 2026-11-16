/* f_0x102ca860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102ca860(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = arg1;
    ecx = arg2 + 0x20u;
    edx = arg3;
L_102ca872: ;
    { /* movaps xmm0, xmmword ptr [ecx - 0x10] */ uint32_t A = ecx - 0x10u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [ecx] */ uint32_t A = ecx; g->xmm[1] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [ecx + 0x10] */ uint32_t A = ecx + 0x10u; g->xmm[2] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [ecx - 0x20] */ uint32_t A = ecx - 0x20u; g->xmm[3] = rd128(A); }
    { /* movaps xmmword ptr [eax], xmm3 */ uint32_t A = eax; wr128(A, g->xmm[3]); }
    { /* movaps xmmword ptr [eax - 0x30], xmm0 */ uint32_t A = eax + 0x10u; wr128(A, g->xmm[0]); }
    { /* movaps xmmword ptr [eax - 0x20], xmm1 */ uint32_t A = eax + 0x20u; wr128(A, g->xmm[1]); }
    { /* movaps xmmword ptr [eax - 0x10], xmm2 */ uint32_t A = eax + 0x30u; wr128(A, g->xmm[2]); }
    if (edx != 0x40u)
    {
        eax = eax + 0x40u;
        ecx = ecx + 0x40u;
        edx = edx - 0x40u;
        goto L_102ca872;
    }
    eax = eax + 0x40u;
    edx = edx - 0x40u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ca860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ca860(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
