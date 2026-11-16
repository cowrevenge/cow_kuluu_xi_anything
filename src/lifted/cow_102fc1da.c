/* f_0x102fc1da - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102fc1da(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    { /* femms  */  }
    { /* movq mm0, qword ptr [0x10348510] */ uint32_t A = COW_IMG(0x10348510u); g->mm[0] = rd64(A); }
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pfmul mm0, qword ptr [esp + 0x30] */ uint32_t A = sp0 + 0x10u; g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pfmul mm1, qword ptr [esp + 0x28] */ uint32_t A = sp0 + 8u; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movq qword ptr [esp + 0x10], mm1 */ uint32_t A = sp0 - 0x10u; wr64(A, g->mm[1]); }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_stdcall(g, COW_IMG(0x1030a5e0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = g->ebx;
    t5 = g->esi;
    { /* movq qword ptr [esp], mm0 */ uint32_t A = sp0 - 0x20u; wr64(A, g->mm[0]); }
    { /* movq mm0, qword ptr [esp + 0x10] */ uint32_t A = sp0 - 0x10u; g->mm[0] = rd64(A); }
    { /* punpckhdq mm0, mm0 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[0]); }
    g->ebx = t4;
    g->esi = t5;
    g->ecx = t2;
    g->edx = t3;
    t6 = cow_stdcall(g, COW_IMG(0x1030a5e0u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    t9 = g->ebx;
    t10 = g->esi;
    { /* movq qword ptr [esp + 8], mm0 */ uint32_t A = sp0 - 0x18u; wr64(A, g->mm[0]); }
    { /* movq mm0, qword ptr [esp + 0x10] */ uint32_t A = sp0 - 0x10u; g->mm[0] = rd64(A); }
    g->ebx = t9;
    g->esi = t10;
    g->edx = t8;
    cow_stdcall(g, COW_IMG(0x1030a5e0u), 0);
    t11 = g->edx;
    { /* movq mm1, qword ptr [esp] */ uint32_t A = sp0 - 0x20u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esp + 8] */ uint32_t A = sp0 - 0x18u; g->mm[2] = rd64(A); }
    { /* movq mm7, qword ptr [0x10348500] */ uint32_t A = COW_IMG(0x10348500u); g->mm[7] = rd64(A); }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* punpckhdq mm4, mm4 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[4]); }
    { /* punpckhdq mm5, mm5 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[5]); }
    { /* pxor mm0, mm7 */ g->mm[0] = mmx_pxor(g->mm[0], g->mm[7]); }
    { /* psrlq mm7, 0x20 */ g->mm[7] = mmx_psrlq(g->mm[7], (uint64_t)0x20u); }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* punpckldq mm2, mm2 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[2]); }
    { /* punpckhdq mm6, mm6 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[6]); }
    { /* pxor mm5, mm7 */ g->mm[5] = mmx_pxor(g->mm[5], g->mm[7]); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm3, mm2 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[2]); }
    { /* pfmul mm4, mm2 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[2]); }
    { /* pfmul mm5, mm6 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[6]); }
    { /* movq mm7, mm1 */ g->mm[7] = g->mm[1]; }
    { /* punpckhdq mm7, mm7 */ g->mm[7] = mmx_punpckhdq(g->mm[7], g->mm[7]); }
    { /* punpckldq mm7, mm1 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[1]); }
    { /* pfmul mm0, mm1 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[1]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfmul mm4, mm7 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[7]); }
    { /* pfmul mm5, mm1 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[1]); }
    { /* pfadd mm0, mm4 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[4]); }
    { /* pfadd mm3, mm5 */ g->mm[3] = n3d_pfadd(g->mm[3], g->mm[5]); }
    { /* movq qword ptr [eax], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 8], mm3 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[3]); }
    { /* femms  */  }
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t11;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fc1da(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fc1da(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
