/* f_0x102fd92d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102fd92d(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    { /* movq mm0, qword ptr [ecx] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [ecx + 8] */ uint32_t A = arg2 + 8u; g->mm[1] = rd64(A); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* pfadd mm0, mm0 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[0]); }
    { /* movq mm4, mm1 */ g->mm[4] = g->mm[1]; }
    { /* movq mm7, mm1 */ g->mm[7] = g->mm[1]; }
    { /* pfadd mm1, mm1 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[1]); }
    { /* punpckhdq mm2, mm2 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[2]); }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* punpckhdq mm4, mm4 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[4]); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* punpckldq mm1, mm0 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[0]); }
    { /* punpckldq mm7, mm7 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[7]); }
    { /* pfmul mm5, mm4 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[4]); }
    { /* movq mm6, mm1 */ g->mm[6] = g->mm[1]; }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pfmul mm1, mm2 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[2]); }
    { /* pxor mm0, mm0 */ g->mm[0] = mmx_pxor(g->mm[0], g->mm[0]); }
    { /* pfmul mm6, mm4 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[4]); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* punpckhdq mm1, mm7 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[7]); }
    { /* punpckldq mm7, mm7 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[7]); }
    { /* punpckldq mm6, mm6 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[6]); }
    { /* movq qword ptr [eax + 0x30], mm0 */ uint32_t A = arg1 + 0x30u; wr64(A, g->mm[0]); }
    { /* pfadd mm7, mm3 */ g->mm[7] = n3d_pfadd(g->mm[7], g->mm[3]); }
    { /* pfacc mm3, mm3 */ g->mm[3] = n3d_pfacc(g->mm[3], g->mm[3]); }
    { /* movq mm4, mm1 */ g->mm[4] = g->mm[1]; }
    { /* punpckhdq mm6, mm5 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[5]); }
    { /* pfsubr mm3, qword ptr [0x10348480] */ uint32_t A = COW_IMG(0x10348480u); g->mm[3] = n3d_pfsubr(g->mm[3], rd64(A)); }
    { /* pfsubr mm7, qword ptr [0x10348480] */ uint32_t A = COW_IMG(0x10348480u); g->mm[7] = n3d_pfsubr(g->mm[7], rd64(A)); }
    { /* punpckldq mm3, mm0 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[0]); }
    { /* pfadd mm1, mm6 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[6]); }
    { /* movq qword ptr [eax + 0x28], mm3 */ uint32_t A = arg1 + 0x28u; wr64(A, g->mm[3]); }
    { /* pfsub mm4, mm6 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[6]); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* pfadd mm2, mm5 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[5]); }
    { /* pfsub mm3, mm5 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[5]); }
    { /* movq mm5, mm4 */ g->mm[5] = g->mm[4]; }
    { /* punpckldq mm2, mm0 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[0]); }
    { /* movq mm6, mm1 */ g->mm[6] = g->mm[1]; }
    { /* punpckldq mm4, mm7 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[7]); }
    { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
    { /* movq qword ptr [eax + 0x18], mm2 */ uint32_t A = arg1 + 0x18u; wr64(A, g->mm[2]); }
    { /* punpckhdq mm5, mm0 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[0]); }
    { /* punpckldq mm0, dword ptr [0x10348480] */ uint32_t A = COW_IMG(0x10348480u); g->mm[0] = mmx_punpckldq(g->mm[0], (uint64_t)rd32(A)); }
    { /* movq qword ptr [eax + 8], mm5 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[5]); }
    { /* punpckhdq mm6, mm6 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[6]); }
    { /* movq qword ptr [eax + 0x10], mm4 */ uint32_t A = arg1 + 0x10u; wr64(A, g->mm[4]); }
    { /* punpckhdq mm7, mm1 */ g->mm[7] = mmx_punpckhdq(g->mm[7], g->mm[1]); }
    { /* punpckldq mm6, mm3 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[3]); }
    { /* movq qword ptr [eax], mm7 */ uint32_t A = arg1; wr64(A, g->mm[7]); }
    { /* movq qword ptr [eax + 0x20], mm6 */ uint32_t A = arg1 + 0x20u; wr64(A, g->mm[6]); }
    { /* movq qword ptr [eax + 0x38], mm0 */ uint32_t A = arg1 + 0x38u; wr64(A, g->mm[0]); }
    { /* femms  */  }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fd92d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fd92d(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
