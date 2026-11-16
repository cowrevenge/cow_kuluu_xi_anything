/* f_0x102fd20c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102fd20c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x44u) & 0xfffffff8u;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 80u);

    { /* femms  */  }
    wr32(sp0 - 4u, in_ebp);
    { /* movq mm0, qword ptr [edx] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [edx + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[1] = rd64(A); }
    { /* movq mm3, qword ptr [edx + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[3] = rd64(A); }
    { /* movq mm4, qword ptr [edx + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[4] = rd64(A); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* punpckldq mm0, mm1 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[1]); }
    { /* punpckhdq mm2, mm1 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[1]); }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* movq qword ptr [esp], mm0 */ uint32_t A = sp1; wr64(A, g->mm[0]); }
    { /* movq qword ptr [esp + 0x10], mm2 */ uint32_t A = sp1 + 0x10u; wr64(A, g->mm[2]); }
    { /* movq mm6, qword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[6] = rd64(A); }
    { /* punpckldq mm3, mm4 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[4]); }
    { /* movq mm7, qword ptr [edx + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[7] = rd64(A); }
    { /* movq mm0, qword ptr [edx + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[0] = rd64(A); }
    { /* punpckhdq mm5, mm4 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[4]); }
    { /* movq mm1, mm6 */ g->mm[1] = g->mm[6]; }
    { /* movq qword ptr [esp + 0x28], mm3 */ uint32_t A = sp1 + 0x28u; wr64(A, g->mm[3]); }
    { /* movq qword ptr [esp + 0x38], mm5 */ uint32_t A = sp1 + 0x38u; wr64(A, g->mm[5]); }
    { /* punpckldq mm6, mm7 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[7]); }
    { /* movq mm4, qword ptr [edx + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[4] = rd64(A); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* punpckhdq mm1, mm7 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[7]); }
    { /* movq qword ptr [esp + 0x20], mm6 */ uint32_t A = sp1 + 0x20u; wr64(A, g->mm[6]); }
    { /* punpckhdq mm0, mm4 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[4]); }
    { /* punpckldq mm2, mm4 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[4]); }
    { /* movq qword ptr [esp + 0x30], mm1 */ uint32_t A = sp1 + 0x30u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [esp + 0x18], mm0 */ uint32_t A = sp1 + 0x18u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [esp + 8], mm2 */ uint32_t A = sp1 + 8u; wr64(A, g->mm[2]); }
    { /* movq mm0, qword ptr [ecx] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [ecx + 8] */ uint32_t A = arg2 + 8u; g->mm[1] = rd64(A); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* pfmul mm0, qword ptr [esp] */ uint32_t A = sp1; g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pfmul mm1, qword ptr [esp + 8] */ uint32_t A = sp1 + 8u; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* pfmul mm2, qword ptr [esp + 0x10] */ uint32_t A = sp1 + 0x10u; g->mm[2] = n3d_pfmul(g->mm[2], rd64(A)); }
    { /* pfmul mm3, qword ptr [esp + 0x18] */ uint32_t A = sp1 + 0x18u; g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
    { /* pfmul mm4, qword ptr [esp + 0x20] */ uint32_t A = sp1 + 0x20u; g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pfmul mm5, qword ptr [esp + 0x28] */ uint32_t A = sp1 + 0x28u; g->mm[5] = n3d_pfmul(g->mm[5], rd64(A)); }
    { /* pfmul mm6, qword ptr [esp + 0x30] */ uint32_t A = sp1 + 0x30u; g->mm[6] = n3d_pfmul(g->mm[6], rd64(A)); }
    { /* pfmul mm7, qword ptr [esp + 0x38] */ uint32_t A = sp1 + 0x38u; g->mm[7] = n3d_pfmul(g->mm[7], rd64(A)); }
    { /* pfacc mm0, mm2 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[2]); }
    { /* pfacc mm1, mm3 */ g->mm[1] = n3d_pfacc(g->mm[1], g->mm[3]); }
    { /* pfacc mm4, mm6 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[6]); }
    { /* pfacc mm5, mm7 */ g->mm[5] = n3d_pfacc(g->mm[5], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
    { /* movq qword ptr [eax], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 8], mm4 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[4]); }
    { /* movq mm0, qword ptr [ecx + 0x10] */ uint32_t A = arg2 + 0x10u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [ecx + 0x18] */ uint32_t A = arg2 + 0x18u; g->mm[1] = rd64(A); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* pfmul mm0, qword ptr [esp] */ uint32_t A = sp1; g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pfmul mm1, qword ptr [esp + 8] */ uint32_t A = sp1 + 8u; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* pfmul mm2, qword ptr [esp + 0x10] */ uint32_t A = sp1 + 0x10u; g->mm[2] = n3d_pfmul(g->mm[2], rd64(A)); }
    { /* pfmul mm3, qword ptr [esp + 0x18] */ uint32_t A = sp1 + 0x18u; g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
    { /* pfmul mm4, qword ptr [esp + 0x20] */ uint32_t A = sp1 + 0x20u; g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pfmul mm5, qword ptr [esp + 0x28] */ uint32_t A = sp1 + 0x28u; g->mm[5] = n3d_pfmul(g->mm[5], rd64(A)); }
    { /* pfmul mm6, qword ptr [esp + 0x30] */ uint32_t A = sp1 + 0x30u; g->mm[6] = n3d_pfmul(g->mm[6], rd64(A)); }
    { /* pfmul mm7, qword ptr [esp + 0x38] */ uint32_t A = sp1 + 0x38u; g->mm[7] = n3d_pfmul(g->mm[7], rd64(A)); }
    { /* pfacc mm0, mm2 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[2]); }
    { /* pfacc mm1, mm3 */ g->mm[1] = n3d_pfacc(g->mm[1], g->mm[3]); }
    { /* pfacc mm4, mm6 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[6]); }
    { /* pfacc mm5, mm7 */ g->mm[5] = n3d_pfacc(g->mm[5], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
    { /* movq qword ptr [eax + 0x10], mm0 */ uint32_t A = arg1 + 0x10u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 0x18], mm4 */ uint32_t A = arg1 + 0x18u; wr64(A, g->mm[4]); }
    { /* movq mm0, qword ptr [ecx + 0x20] */ uint32_t A = arg2 + 0x20u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [ecx + 0x28] */ uint32_t A = arg2 + 0x28u; g->mm[1] = rd64(A); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* pfmul mm0, qword ptr [esp] */ uint32_t A = sp1; g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pfmul mm1, qword ptr [esp + 8] */ uint32_t A = sp1 + 8u; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* pfmul mm2, qword ptr [esp + 0x10] */ uint32_t A = sp1 + 0x10u; g->mm[2] = n3d_pfmul(g->mm[2], rd64(A)); }
    { /* pfmul mm3, qword ptr [esp + 0x18] */ uint32_t A = sp1 + 0x18u; g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
    { /* pfmul mm4, qword ptr [esp + 0x20] */ uint32_t A = sp1 + 0x20u; g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pfmul mm5, qword ptr [esp + 0x28] */ uint32_t A = sp1 + 0x28u; g->mm[5] = n3d_pfmul(g->mm[5], rd64(A)); }
    { /* pfmul mm6, qword ptr [esp + 0x30] */ uint32_t A = sp1 + 0x30u; g->mm[6] = n3d_pfmul(g->mm[6], rd64(A)); }
    { /* pfmul mm7, qword ptr [esp + 0x38] */ uint32_t A = sp1 + 0x38u; g->mm[7] = n3d_pfmul(g->mm[7], rd64(A)); }
    { /* pfacc mm0, mm2 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[2]); }
    { /* pfacc mm1, mm3 */ g->mm[1] = n3d_pfacc(g->mm[1], g->mm[3]); }
    { /* pfacc mm4, mm6 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[6]); }
    { /* pfacc mm5, mm7 */ g->mm[5] = n3d_pfacc(g->mm[5], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
    { /* movq qword ptr [eax + 0x20], mm0 */ uint32_t A = arg1 + 0x20u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 0x28], mm4 */ uint32_t A = arg1 + 0x28u; wr64(A, g->mm[4]); }
    { /* movq mm0, qword ptr [ecx + 0x30] */ uint32_t A = arg2 + 0x30u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [ecx + 0x38] */ uint32_t A = arg2 + 0x38u; g->mm[1] = rd64(A); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* pfmul mm0, qword ptr [esp] */ uint32_t A = sp1; g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pfmul mm1, qword ptr [esp + 8] */ uint32_t A = sp1 + 8u; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* pfmul mm2, qword ptr [esp + 0x10] */ uint32_t A = sp1 + 0x10u; g->mm[2] = n3d_pfmul(g->mm[2], rd64(A)); }
    { /* pfmul mm3, qword ptr [esp + 0x18] */ uint32_t A = sp1 + 0x18u; g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
    { /* pfmul mm4, qword ptr [esp + 0x20] */ uint32_t A = sp1 + 0x20u; g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pfmul mm5, qword ptr [esp + 0x28] */ uint32_t A = sp1 + 0x28u; g->mm[5] = n3d_pfmul(g->mm[5], rd64(A)); }
    { /* pfmul mm6, qword ptr [esp + 0x30] */ uint32_t A = sp1 + 0x30u; g->mm[6] = n3d_pfmul(g->mm[6], rd64(A)); }
    { /* pfmul mm7, qword ptr [esp + 0x38] */ uint32_t A = sp1 + 0x38u; g->mm[7] = n3d_pfmul(g->mm[7], rd64(A)); }
    { /* pfacc mm0, mm2 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[2]); }
    { /* pfacc mm1, mm3 */ g->mm[1] = n3d_pfacc(g->mm[1], g->mm[3]); }
    { /* pfacc mm4, mm6 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[6]); }
    { /* pfacc mm5, mm7 */ g->mm[5] = n3d_pfacc(g->mm[5], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
    { /* movq qword ptr [eax + 0x30], mm0 */ uint32_t A = arg1 + 0x30u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 0x38], mm4 */ uint32_t A = arg1 + 0x38u; wr64(A, g->mm[4]); }
    { /* femms  */  }
    g->edx = arg3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fd20c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fd20c(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
