/* f_0x102fbc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102fbc00(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movq mm2, qword ptr [edx] */ uint32_t A = arg3; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[3] = rd64(A); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* movq mm0, qword ptr [eax] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* punpckhdq mm4, mm2 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[2]); }
    { /* punpckhdq mm5, mm3 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[3]); }
    { /* movq mm1, qword ptr [eax + 8] */ uint32_t A = arg2 + 8u; g->mm[1] = rd64(A); }
    { /* punpckldq mm4, mm2 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[2]); }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* movq mm6, mm4 */ g->mm[6] = g->mm[4]; }
    { /* movq mm7, mm5 */ g->mm[7] = g->mm[5]; }
    { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* pxor mm2, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
    { /* pfmul mm5, mm0 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[0]); }
    { /* pfmul mm4, mm1 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[1]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq mm3, qword ptr [edx] */ uint32_t A = arg3; g->mm[3] = rd64(A); }
    { /* pfsub mm4, mm5 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[5]); }
    { /* movq mm5, qword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[5] = rd64(A); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pxor mm6, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[6] = mmx_pxor(g->mm[6], rd64(A)); }
    { /* pfacc mm4, mm2 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[2]); }
    { /* pfmul mm6, mm0 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[0]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [eax], mm4 */ uint32_t A = arg1; wr64(A, g->mm[4]); }
    { /* pfmul mm5, mm1 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[1]); }
    { /* pfadd mm6, mm7 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[7]); }
    { /* pfsub mm5, mm3 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[3]); }
    { /* pfacc mm6, mm5 */ g->mm[6] = n3d_pfacc(g->mm[6], g->mm[5]); }
    { /* movq qword ptr [eax + 8], mm6 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[6]); }
    { /* femms  */  }
    g->edx = arg3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fbc00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fbc00(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
