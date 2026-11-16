/* f_0x102ff325 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102ff325(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x1cu) & 0xfffffff8u;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, in_ebp);
    { /* movq mm0, qword ptr [edx] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* movd mm1, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    wr32(sp1 + 0x10u, in_esi);
    wr32(sp1 + 0x14u, in_ebx);
    { /* movq qword ptr [esp], mm0 */ uint32_t A = sp1; wr64(A, g->mm[0]); }
    { /* movd dword ptr [esp + 8], mm1 */ uint32_t A = sp1 + 8u; wr32(A, (uint32_t)((uint32_t)g->mm[1])); }
    wr32(sp1 - 4u, sp1);
    wr32(sp1 - 8u, sp1);
    g->eax = sp1;
    g->ecx = self;
    g->edx = arg2;
    g->esp = sp1;
    t1 = cow_stdcall(g, COW_IMG(0x10301472u), 2, sp1, sp1);
    t2 = g->ecx;
    t3 = g->edx;
    { /* movd mm0, dword ptr [ebp + 0x10] */ uint32_t A = sp0 + 0xcu; g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    g->edx = t3;
    cow_stdcall(g, COW_IMG(0x1030a5e0u), 0);
    t4 = g->edx;
    { /* movq mm7, mm0 */ g->mm[7] = g->mm[0]; }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pfsubr mm0, qword ptr [0x10348480] */ uint32_t A = COW_IMG(0x10348480u); g->mm[0] = n3d_pfsubr(g->mm[0], rd64(A)); }
    { /* punpckhdq mm7, mm7 */ g->mm[7] = mmx_punpckhdq(g->mm[7], g->mm[7]); }
    { /* movq mm2, qword ptr [esp] */ uint32_t A = sp1; g->mm[2] = rd64(A); }
    { /* movd mm3, dword ptr [esp + 8] */ uint32_t A = sp1 + 8u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* movd dword ptr [esp + 0xc], mm7 */ uint32_t A = sp1 + 0xcu; wr32(A, (uint32_t)((uint32_t)g->mm[7])); }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* punpckhdq mm2, mm3 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[3]); }
    { /* pfmul mm3, mm4 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[4]); }
    { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
    { /* pfmul mm2, mm4 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[4]); }
    { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* pfmul mm4, mm4 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[4]); }
    { /* pfmul mm5, mm5 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[5]); }
    { /* pfmul mm4, mm0 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[0]); }
    { /* pfmul mm5, mm0 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[0]); }
    { /* pfadd mm4, mm1 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[1]); }
    { /* pfadd mm5, mm1 */ g->mm[5] = n3d_pfadd(g->mm[5], g->mm[1]); }
    { /* movd mm1, dword ptr [esp + 0xc] */ uint32_t A = sp1 + 0xcu; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* pxor mm0, mm0 */ g->mm[0] = mmx_pxor(g->mm[0], g->mm[0]); }
    { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
    { /* pfmul mm6, mm1 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[1]); }
    { /* punpckldq mm5, mm0 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[0]); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* movq qword ptr [eax + 0x30], mm0 */ uint32_t A = arg1 + 0x30u; wr64(A, g->mm[0]); }
    { /* punpckldq mm7, mm6 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[6]); }
    { /* movq mm1, mm2 */ g->mm[1] = g->mm[2]; }
    { /* punpckhdq mm6, mm6 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[6]); }
    { /* movq qword ptr [eax + 0x28], mm5 */ uint32_t A = arg1 + 0x28u; wr64(A, g->mm[5]); }
    { /* pfsub mm2, mm7 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[7]); }
    { /* pfadd mm1, mm7 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[7]); }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* pfsub mm3, mm6 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[6]); }
    { /* movq mm5, mm4 */ g->mm[5] = g->mm[4]; }
    { /* punpckldq mm4, mm1 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[1]); }
    { /* punpckldq mm3, mm0 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[0]); }
    { /* punpckhdq mm1, mm0 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[0]); }
    { /* movq qword ptr [eax], mm4 */ uint32_t A = arg1; wr64(A, g->mm[4]); }
    { /* punpckldq mm7, mm7 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[7]); }
    { /* movq qword ptr [eax + 8], mm3 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[3]); }
    { /* punpckhdq mm0, qword ptr [0x10348480] */ uint32_t A = COW_IMG(0x10348480u); g->mm[0] = mmx_punpckhdq(g->mm[0], rd64(A)); }
    { /* pfadd mm7, mm6 */ g->mm[7] = n3d_pfadd(g->mm[7], g->mm[6]); }
    { /* movq qword ptr [eax + 0x18], mm1 */ uint32_t A = arg1 + 0x18u; wr64(A, g->mm[1]); }
    { /* punpckhdq mm5, mm5 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[5]); }
    { /* movq qword ptr [eax + 0x38], mm0 */ uint32_t A = arg1 + 0x38u; wr64(A, g->mm[0]); }
    { /* punpckhdq mm7, mm2 */ g->mm[7] = mmx_punpckhdq(g->mm[7], g->mm[2]); }
    { /* punpckldq mm2, mm5 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[5]); }
    { /* movq qword ptr [eax + 0x20], mm7 */ uint32_t A = arg1 + 0x20u; wr64(A, g->mm[7]); }
    { /* movq qword ptr [eax + 0x10], mm2 */ uint32_t A = arg1 + 0x10u; wr64(A, g->mm[2]); }
    { /* femms  */  }
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t4;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ff325(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ff325(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
