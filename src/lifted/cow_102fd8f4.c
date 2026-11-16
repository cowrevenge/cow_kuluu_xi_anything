/* f_0x102fd8f4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102fd8f4(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    { /* movd mm1, dword ptr [0x10348470] */ uint32_t A = COW_IMG(0x10348470u); g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* pxor mm0, mm0 */ g->mm[0] = mmx_pxor(g->mm[0], g->mm[0]); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* movq qword ptr [eax], mm1 */ uint32_t A = arg1; wr64(A, g->mm[1]); }
    { /* movq qword ptr [eax + 8], mm0 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 0x18], mm0 */ uint32_t A = arg1 + 0x18u; wr64(A, g->mm[0]); }
    { /* punpckhdq mm2, mm2 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[2]); }
    { /* movq qword ptr [eax + 0x20], mm0 */ uint32_t A = arg1 + 0x20u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 0x28], mm1 */ uint32_t A = arg1 + 0x28u; wr64(A, g->mm[1]); }
    { /* punpckldq mm2, mm1 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[1]); }
    { /* movq qword ptr [eax + 0x30], mm0 */ uint32_t A = arg1 + 0x30u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 0x10], mm2 */ uint32_t A = arg1 + 0x10u; wr64(A, g->mm[2]); }
    { /* movq qword ptr [eax + 0x38], mm2 */ uint32_t A = arg1 + 0x38u; wr64(A, g->mm[2]); }
    { /* femms  */  }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fd8f4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102fd8f4(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
