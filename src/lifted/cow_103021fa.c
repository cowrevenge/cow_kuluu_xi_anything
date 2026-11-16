/* f_0x103021fa - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_103021fa(Guest* g)
{
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* femms  */  }
    { /* movq mm0, qword ptr [ecx] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [edx] */ uint32_t A = arg4; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [ecx + 8] */ uint32_t A = arg3 + 8u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [edx + 8] */ uint32_t A = arg4 + 8u; g->mm[3] = rd64(A); }
    { /* movq mm4, mm3 */ g->mm[4] = g->mm[3]; }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* punpckhdq mm4, mm4 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[4]); }
    { /* punpckhdq mm6, mm6 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[6]); }
    { /* movq mm5, mm2 */ g->mm[5] = g->mm[2]; }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* punpckldq mm5, mm5 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[5]); }
    { /* punpckldq mm7, mm7 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[7]); }
    { /* punpckhdq mm5, mm0 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[0]); }
    { /* punpckhdq mm7, mm1 */ g->mm[7] = mmx_punpckhdq(g->mm[7], g->mm[1]); }
    { /* pfmul mm4, mm5 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[5]); }
    { /* pfmul mm6, mm7 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[7]); }
    { /* pfsub mm4, mm6 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[6]); }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* punpckhdq mm5, mm2 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[2]); }
    { /* movq mm6, mm3 */ g->mm[6] = g->mm[3]; }
    { /* punpckldq mm6, mm1 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[1]); }
    { /* pfmul mm5, mm6 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[6]); }
    { /* movq mm6, mm1 */ g->mm[6] = g->mm[1]; }
    { /* punpckhdq mm6, mm3 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[3]); }
    { /* movq mm7, mm2 */ g->mm[7] = g->mm[2]; }
    { /* punpckldq mm7, mm0 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[0]); }
    { /* pfmul mm6, mm7 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[7]); }
    { /* pfsub mm5, mm6 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[6]); }
    { /* movq mm6, mm1 */ g->mm[6] = g->mm[1]; }
    { /* punpckldq mm6, mm6 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[6]); }
    { /* punpckldq mm2, mm2 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[2]); }
    { /* punpckhdq mm2, mm0 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[0]); }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
    { /* pfmul mm6, mm2 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[2]); }
    { /* punpckhdq mm3, mm1 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[1]); }
    { /* pfmul mm0, mm3 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[3]); }
    { /* pfsub mm6, mm0 */ g->mm[6] = n3d_pfsub(g->mm[6], g->mm[0]); }
    { /* movq mm0, qword ptr [ebx] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [ebx + 8] */ uint32_t A = arg2 + 8u; g->mm[1] = rd64(A); }
    { /* movq mm7, qword ptr [0x10348500] */ uint32_t A = COW_IMG(0x10348500u); g->mm[7] = rd64(A); }
    { /* movq mm2, mm4 */ g->mm[2] = g->mm[4]; }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* punpckldq mm2, mm2 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[2]); }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* pxor mm2, mm7 */ g->mm[2] = mmx_pxor(g->mm[2], g->mm[7]); }
    { /* punpckhdq mm0, mm3 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[3]); }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* movq mm0, mm7 */ g->mm[0] = g->mm[7]; }
    { /* movq mm3, mm4 */ g->mm[3] = g->mm[4]; }
    { /* movq mm7, mm5 */ g->mm[7] = g->mm[5]; }
    { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
    { /* punpckhdq mm7, mm7 */ g->mm[7] = mmx_punpckhdq(g->mm[7], g->mm[7]); }
    { /* punpckldq mm3, mm5 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[5]); }
    { /* punpckldq mm7, mm6 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[6]); }
    { /* pfmul mm3, mm1 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[1]); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pxor mm3, mm0 */ g->mm[3] = mmx_pxor(g->mm[3], g->mm[0]); }
    { /* pxor mm7, mm0 */ g->mm[7] = mmx_pxor(g->mm[7], g->mm[0]); }
    { /* pfacc mm3, mm7 */ g->mm[3] = n3d_pfacc(g->mm[3], g->mm[7]); }
    { /* movq mm7, mm0 */ g->mm[7] = g->mm[0]; }
    { /* movq mm0, qword ptr [ebx] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* pfsub mm2, mm3 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[3]); }
    { /* movq qword ptr [eax], mm2 */ uint32_t A = arg1; wr64(A, g->mm[2]); }
    { /* punpckhdq mm4, mm5 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[5]); }
    { /* pxor mm4, mm7 */ g->mm[4] = mmx_pxor(g->mm[4], g->mm[7]); }
    { /* movq mm2, mm5 */ g->mm[2] = g->mm[5]; }
    { /* psrlq mm7, 0x20 */ g->mm[7] = mmx_psrlq(g->mm[7], (uint64_t)0x20u); }
    { /* punpckldq mm2, mm6 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[6]); }
    { /* pxor mm2, mm7 */ g->mm[2] = mmx_pxor(g->mm[2], g->mm[7]); }
    { /* punpckhdq mm6, mm6 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[6]); }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* pxor mm6, mm7 */ g->mm[6] = mmx_pxor(g->mm[6], g->mm[7]); }
    { /* punpckhdq mm1, mm3 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[3]); }
    { /* psllq mm7, 0x20 */ g->mm[7] = mmx_psllq(g->mm[7], (uint64_t)0x20u); }
    { /* pfmul mm4, mm0 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[0]); }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* pfmul mm1, mm6 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[6]); }
    { /* pxor mm4, mm7 */ g->mm[4] = mmx_pxor(g->mm[4], g->mm[7]); }
    { /* pxor mm2, mm7 */ g->mm[2] = mmx_pxor(g->mm[2], g->mm[7]); }
    { /* pfacc mm4, mm2 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[2]); }
    { /* pfadd mm1, mm4 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[4]); }
    { /* movq qword ptr [eax + 8], mm1 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[1]); }
    { /* femms  */  }
    g->edx = arg4;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103021fa(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103021fa(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
