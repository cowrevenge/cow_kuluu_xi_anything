/* f_0x102fd55d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102fd55d(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x14u) & 0xfffffff8u;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    { /* femms  */  }
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 4u, arg3);
    wr32(sp1 - 8u, sp1);
    g->edx = in_edx;
    g->esp = sp1;
    cow_stdcall(g, COW_IMG(0x10302728u), 2, sp1, arg3);
    t1 = g->edx;
    { /* movq mm0, qword ptr [esp] */ uint32_t A = sp1; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [ecx] */ uint32_t A = arg2; g->mm[1] = rd64(A); }
    { /* movq mm6, mm1 */ g->mm[6] = g->mm[1]; }
    { /* pfmul mm1, mm0 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[0]); }
    { /* movq mm2, qword ptr [esp + 8] */ uint32_t A = sp1 + 8u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [ecx + 8] */ uint32_t A = arg2 + 8u; g->mm[3] = rd64(A); }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* pfmul mm3, mm2 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[2]); }
    { /* pfadd mm1, mm3 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[3]); }
    { /* pxor mm0, qword ptr [0x10348550] */ uint32_t A = COW_IMG(0x10348550u); g->mm[0] = mmx_pxor(g->mm[0], rd64(A)); }
    { /* pxor mm2, qword ptr [0x10348550] */ uint32_t A = COW_IMG(0x10348550u); g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
    { /* pfacc mm1, mm1 */ g->mm[1] = n3d_pfacc(g->mm[1], g->mm[1]); }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* punpckldq mm3, mm1 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[1]); }
    { /* psllq mm1, 0x20 */ g->mm[1] = mmx_psllq(g->mm[1], (uint64_t)0x20u); }
    { /* psrlq mm3, 0x20 */ g->mm[3] = mmx_psrlq(g->mm[3], (uint64_t)0x20u); }
    { /* punpckldq mm4, mm4 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[4]); }
    { /* punpckldq mm5, mm5 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[5]); }
    { /* pfmul mm4, mm6 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[6]); }
    { /* pfmul mm5, mm7 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[7]); }
    { /* pfadd mm4, mm3 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[3]); }
    { /* movq qword ptr [eax], mm4 */ uint32_t A = arg1; wr64(A, g->mm[4]); }
    { /* movq qword ptr [eax + 8], mm5 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[5]); }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* punpckhdq mm4, mm4 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[4]); }
    { /* punpckhdq mm5, mm5 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[5]); }
    { /* pfmul mm4, mm6 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[6]); }
    { /* pfmul mm5, mm7 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[7]); }
    { /* pfadd mm4, mm1 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[1]); }
    { /* movq qword ptr [eax + 0x10], mm4 */ uint32_t A = arg1 + 0x10u; wr64(A, g->mm[4]); }
    { /* movq qword ptr [eax + 0x18], mm5 */ uint32_t A = arg1 + 0x18u; wr64(A, g->mm[5]); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* movq mm5, mm2 */ g->mm[5] = g->mm[2]; }
    { /* punpckldq mm4, mm4 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[4]); }
    { /* punpckldq mm5, mm5 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[5]); }
    { /* pfmul mm4, mm6 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[6]); }
    { /* pfmul mm5, mm7 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[7]); }
    { /* pfadd mm5, mm3 */ g->mm[5] = n3d_pfadd(g->mm[5], g->mm[3]); }
    { /* movq qword ptr [eax + 0x20], mm4 */ uint32_t A = arg1 + 0x20u; wr64(A, g->mm[4]); }
    { /* movq qword ptr [eax + 0x28], mm5 */ uint32_t A = arg1 + 0x28u; wr64(A, g->mm[5]); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* movq mm5, mm2 */ g->mm[5] = g->mm[2]; }
    { /* punpckhdq mm4, mm4 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[4]); }
    { /* punpckhdq mm5, mm5 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[5]); }
    { /* pfmul mm4, mm6 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[6]); }
    { /* pfmul mm5, mm7 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[7]); }
    { /* pfadd mm5, mm1 */ g->mm[5] = n3d_pfadd(g->mm[5], g->mm[1]); }
    { /* movq qword ptr [eax + 0x30], mm4 */ uint32_t A = arg1 + 0x30u; wr64(A, g->mm[4]); }
    { /* movq qword ptr [eax + 0x38], mm5 */ uint32_t A = arg1 + 0x38u; wr64(A, g->mm[5]); }
    { /* femms  */  }
    g->edx = t1;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fd55d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fd55d(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
