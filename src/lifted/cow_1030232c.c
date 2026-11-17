/* f_0x1030232c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_1030232c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 4u);

    { /* movq mm0, qword ptr [edx] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [ecx] */ uint32_t A = arg4; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [ecx + 8] */ uint32_t A = arg4 + 8u; g->mm[3] = rd64(A); }
    { /* movq mm4, qword ptr [eax] */ uint32_t A = arg2; g->mm[4] = rd64(A); }
    { /* movq mm5, qword ptr [eax + 8] */ uint32_t A = arg2 + 8u; g->mm[5] = rd64(A); }
    { /* movd mm6, dword ptr [esp + 0x14] */ uint32_t A = sp0 + 0x14u; g->mm[6] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm7, dword ptr [esp + 0x18] */ uint32_t A = sp0 + 0x18u; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfsub mm0, mm4 */ g->mm[0] = n3d_pfsub(g->mm[0], g->mm[4]); }
    { /* pfsub mm1, mm5 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[5]); }
    { /* pfsub mm2, mm4 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[4]); }
    { /* pfsub mm3, mm5 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[5]); }
    { /* punpckldq mm6, mm6 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[6]); }
    { /* punpckldq mm7, mm7 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[7]); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm6 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[6]); }
    { /* pfmul mm2, mm7 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[7]); }
    { /* pfadd mm0, mm4 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[4]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm1, mm5 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[5]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfadd mm1, mm3 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[3]); }
    { /* movq qword ptr [eax], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 8], mm1 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[1]); }
    { /* femms  */  }
    g->edx = arg3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030232c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030232c(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
