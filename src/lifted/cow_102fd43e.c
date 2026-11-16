/* f_0x102fd43e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
uint32_t cow_fn_102fd43e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 4u);

    { /* movq mm2, qword ptr [eax + 0x20] */ uint32_t A = arg1 + 0x20u; g->mm[2] = rd64(A); }
    { /* movq mm1, qword ptr [eax + 0x28] */ uint32_t A = arg1 + 0x28u; g->mm[1] = rd64(A); }
    { /* movq mm0, qword ptr [eax + 0x24] */ uint32_t A = arg1 + 0x24u; g->mm[0] = rd64(A); }
    { /* punpckhdq mm1, mm1 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[1]); }
    { /* punpckldq mm2, mm2 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[2]); }
    { /* movq mm5, qword ptr [eax + 0x30] */ uint32_t A = arg1 + 0x30u; g->mm[5] = rd64(A); }
    { /* movq mm4, qword ptr [eax + 0x38] */ uint32_t A = arg1 + 0x38u; g->mm[4] = rd64(A); }
    { /* movq mm3, qword ptr [eax + 0x34] */ uint32_t A = arg1 + 0x34u; g->mm[3] = rd64(A); }
    { /* punpckhdq mm4, mm4 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[4]); }
    { /* punpckldq mm5, mm5 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[5]); }
    { /* pfmul mm4, mm0 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[0]); }
    { /* pfmul mm1, mm3 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[3]); }
    { /* pfsub mm4, mm1 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[1]); }
    { /* pfmul mm2, qword ptr [eax + 0x38] */ uint32_t A = arg1 + 0x38u; g->mm[2] = n3d_pfmul(g->mm[2], rd64(A)); }
    { /* pfmul mm5, qword ptr [eax + 0x28] */ uint32_t A = arg1 + 0x28u; g->mm[5] = n3d_pfmul(g->mm[5], rd64(A)); }
    { /* pfsub mm2, mm5 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[5]); }
    { /* pfmul mm3, qword ptr [eax + 0x20] */ uint32_t A = arg1 + 0x20u; g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
    { /* pfmul mm0, qword ptr [eax + 0x30] */ uint32_t A = arg1 + 0x30u; g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pfsub mm3, mm0 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[0]); }
    { /* movq mm0, mm2 */ g->mm[0] = g->mm[2]; }
    { /* punpckhdq mm0, mm0 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[0]); }
    { /* punpckldq mm0, mm4 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[4]); }
    { /* movq mm1, mm3 */ g->mm[1] = g->mm[3]; }
    { /* punpckhdq mm1, mm4 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[4]); }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* punpckldq mm5, mm2 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[2]); }
    { /* movq mm6, qword ptr [eax + 0x18] */ uint32_t A = arg1 + 0x18u; g->mm[6] = rd64(A); }
    { /* movq mm7, mm6 */ g->mm[7] = g->mm[6]; }
    { /* punpckhdq mm6, mm6 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[6]); }
    { /* pfmul mm4, qword ptr [eax + 0x10] */ uint32_t A = arg1 + 0x10u; g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pfmul mm3, mm6 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[6]); }
    { /* pfadd mm4, mm3 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[3]); }
    { /* movq mm3, qword ptr [eax + 0x14] */ uint32_t A = arg1 + 0x14u; g->mm[3] = rd64(A); }
    { /* pfmul mm0, mm3 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[3]); }
    { /* pfsub mm4, mm0 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[0]); }
    { /* movq mm0, qword ptr [eax + 0x10] */ uint32_t A = arg1 + 0x10u; g->mm[0] = rd64(A); }
    { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
    { /* movq mm6, qword ptr [eax + 8] */ uint32_t A = arg1 + 8u; g->mm[6] = rd64(A); }
    { /* punpckldq mm6, dword ptr [eax] */ uint32_t A = arg1; g->mm[6] = mmx_punpckldq(g->mm[6], (uint64_t)rd32(A)); }
    { /* pfmul mm4, mm6 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[6]); }
    { /* movq mm6, qword ptr [eax + 8] */ uint32_t A = arg1 + 8u; g->mm[6] = rd64(A); }
    { /* punpckhdq mm6, qword ptr [eax] */ uint32_t A = arg1; g->mm[6] = mmx_punpckhdq(g->mm[6], rd64(A)); }
    { /* pfmul mm5, mm7 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[7]); }
    { /* pfmul mm2, mm3 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[3]); }
    { /* pfmul mm1, mm0 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[0]); }
    { /* pfadd mm1, mm5 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[5]); }
    { /* pfsub mm1, mm2 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[2]); }
    { /* pfmul mm1, mm6 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[6]); }
    { /* pfsub mm4, mm1 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[1]); }
    { /* pfacc mm4, mm4 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[4]); }
    { /* movd dword ptr [esp + 4], mm4 */ uint32_t A = sp0 + 4u; wr32(A, (uint32_t)((uint32_t)g->mm[4])); }
    { /* femms  */  }
    fpush(g, (double)rdf32(sp0 + 4u));
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fd43e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fd43e(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
