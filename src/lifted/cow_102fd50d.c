/* f_0x102fd50d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102fd50d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 4u);

    { /* femms  */  }
    { /* movd mm4, dword ptr [esp + 0x10] */ uint32_t A = sp0 + 0x10u; g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm1, qword ptr [0x10348540] */ uint32_t A = COW_IMG(0x10348540u); g->mm[1] = rd64(A); }
    { /* pxor mm0, mm0 */ g->mm[0] = mmx_pxor(g->mm[0], g->mm[0]); }
    { /* movq mm2, qword ptr [0x10348548] */ uint32_t A = COW_IMG(0x10348548u); g->mm[2] = rd64(A); }
    { /* movd mm3, dword ptr [esp + 8] */ uint32_t A = sp0 + 8u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm5, dword ptr [esp + 0xc] */ uint32_t A = sp0 + 0xcu; g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* punpckldq mm4, mm2 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[2]); }
    { /* punpckldq mm3, mm5 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[5]); }
    { /* movq qword ptr [eax], mm2 */ uint32_t A = arg1; wr64(A, g->mm[2]); }
    { /* movq qword ptr [eax + 8], mm0 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 0x10], mm1 */ uint32_t A = arg1 + 0x10u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [eax + 0x18], mm0 */ uint32_t A = arg1 + 0x18u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 0x20], mm0 */ uint32_t A = arg1 + 0x20u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 0x28], mm2 */ uint32_t A = arg1 + 0x28u; wr64(A, g->mm[2]); }
    { /* movq qword ptr [eax + 0x30], mm3 */ uint32_t A = arg1 + 0x30u; wr64(A, g->mm[3]); }
    { /* movq qword ptr [eax + 0x38], mm4 */ uint32_t A = arg1 + 0x38u; wr64(A, g->mm[4]); }
    { /* femms  */  }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fd50d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fd50d(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
