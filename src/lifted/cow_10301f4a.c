/* f_0x10301f4a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_10301f4a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 4u);

    { /* femms  */  }
    { /* movd mm0, dword ptr [esp + 0x18] */ uint32_t A = sp0 + 0x18u; g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* movq mm3, qword ptr [0x10348518] */ uint32_t A = COW_IMG(0x10348518u); g->mm[3] = rd64(A); }
    { /* movq mm4, mm1 */ g->mm[4] = g->mm[1]; }
    { /* movq mm7, mm2 */ g->mm[7] = g->mm[2]; }
    { /* pfsub mm7, mm1 */ g->mm[7] = n3d_pfsub(g->mm[7], g->mm[1]); }
    { /* pfmul mm4, mm3 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[3]); }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* pfmul mm1, qword ptr [0x10348520] */ uint32_t A = COW_IMG(0x10348520u); g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* pfmul mm2, mm3 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[3]); }
    { /* pfsub mm6, mm4 */ g->mm[6] = n3d_pfsub(g->mm[6], g->mm[4]); }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* pfsub mm1, mm2 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[2]); }
    { /* pfadd mm6, mm0 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[0]); }
    { /* pfsub mm2, mm5 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[5]); }
    { /* pfadd mm2, qword ptr [0x10348508] */ uint32_t A = COW_IMG(0x10348508u); g->mm[2] = n3d_pfadd(g->mm[2], rd64(A)); }
    { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
    { /* punpckldq mm6, mm6 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[6]); }
    { /* punpckldq mm7, mm7 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[7]); }
    { /* punpckldq mm2, mm2 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[2]); }
    { /* pfmul mm2, qword ptr [ecx] */ uint32_t A = arg2; g->mm[2] = n3d_pfmul(g->mm[2], rd64(A)); }
    { /* pfmul mm6, qword ptr [edx] */ uint32_t A = arg3; g->mm[6] = n3d_pfmul(g->mm[6], rd64(A)); }
    { /* pfadd mm2, mm6 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[6]); }
    { /* pfmul mm1, qword ptr [ecx] */ uint32_t A = arg4; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* pfmul mm7, qword ptr [edx] */ uint32_t A = arg5; g->mm[7] = n3d_pfmul(g->mm[7], rd64(A)); }
    { /* pfadd mm1, mm7 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[7]); }
    { /* pfadd mm2, mm1 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[1]); }
    { /* movq qword ptr [eax], mm2 */ uint32_t A = arg1; wr64(A, g->mm[2]); }
    { /* femms  */  }
    g->edx = arg5;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10301f4a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10301f4a(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
