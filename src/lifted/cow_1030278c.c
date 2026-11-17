/* f_0x1030278c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1030278c(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* femms  */  }
    { /* movq mm0, qword ptr [ecx] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
    { /* punpckhdq mm1, mm1 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[1]); }
    { /* movq mm2, qword ptr [ecx + 8] */ uint32_t A = arg2 + 8u; g->mm[2] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* punpckldq mm2, mm2 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[2]); }
    { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* pfmul mm0, qword ptr [edx] */ uint32_t A = arg3; g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* pfmul mm1, qword ptr [edx + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* pfmul mm2, qword ptr [edx + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[2] = n3d_pfmul(g->mm[2], rd64(A)); }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* pfmul mm3, qword ptr [edx + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfmul mm4, qword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* pfmul mm5, qword ptr [edx + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[5] = n3d_pfmul(g->mm[5], rd64(A)); }
    { /* pfmul mm6, qword ptr [edx + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[6] = n3d_pfmul(g->mm[6], rd64(A)); }
    { /* pfmul mm7, qword ptr [edx + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[7] = n3d_pfmul(g->mm[7], rd64(A)); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
    { /* pfadd mm6, mm7 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[7]); }
    { /* pfadd mm4, mm6 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[6]); }
    { /* movq qword ptr [eax], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 8], mm4 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[4]); }
    { /* femms  */  }
    g->edx = arg3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030278c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030278c(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
