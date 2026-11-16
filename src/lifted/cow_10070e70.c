/* f_0x10070e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10070e70(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = self + rd32(sp0 + 4u) * 0x40u + 0x10u;
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    t3 = rd32(sp0 + 4u);
    { /* femms  */  }
    { /* movq mm0, qword ptr [esi] */ uint32_t A = self + 0x810u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x10] */ uint32_t A = self + 0x820u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x20] */ uint32_t A = self + 0x830u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esi + 0x30] */ uint32_t A = self + 0x840u; g->mm[3] = rd64(A); }
    { /* movq qword ptr [edi], mm0 */ uint32_t A = t3; wr64(A, g->mm[0]); }
    { /* movq qword ptr [edi + 0x10], mm1 */ uint32_t A = t3 + 0x10u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [edi + 0x20], mm2 */ uint32_t A = t3 + 0x20u; wr64(A, g->mm[2]); }
    { /* movq qword ptr [edi + 0x30], mm3 */ uint32_t A = t3 + 0x30u; wr64(A, g->mm[3]); }
    { /* movq mm0, qword ptr [esi + 8] */ uint32_t A = self + 0x818u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x18] */ uint32_t A = self + 0x828u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x28] */ uint32_t A = self + 0x838u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esi + 0x38] */ uint32_t A = self + 0x848u; g->mm[3] = rd64(A); }
    { /* movq qword ptr [edi + 8], mm0 */ uint32_t A = t3 + 8u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [edi + 0x18], mm1 */ uint32_t A = t3 + 0x18u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [edi + 0x28], mm2 */ uint32_t A = t3 + 0x28u; wr64(A, g->mm[2]); }
    { /* movq qword ptr [edi + 0x38], mm3 */ uint32_t A = t3 + 0x38u; wr64(A, g->mm[3]); }
    { /* femms  */  }
    g->edx = t2 << 6u;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10070e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10070e70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
