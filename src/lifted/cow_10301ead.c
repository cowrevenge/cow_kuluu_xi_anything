/* f_0x10301ead - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10301ead(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* femms  */  }
    { /* movq mm0, qword ptr [eax] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
    { /* punpckhdq mm1, mm1 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[1]); }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* pfmul mm0, qword ptr [edx] */ uint32_t A = arg3; g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* movq mm4, mm1 */ g->mm[4] = g->mm[1]; }
    { /* pfmul mm1, qword ptr [edx + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* movq qword ptr [ecx], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* femms  */  }
    g->edx = arg3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10301ead(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10301ead(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
