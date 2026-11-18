/* f_0x103014d1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_103014d1(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 4u);

    COW_AT(103014d1)
    { /* movq mm0, qword ptr [edx] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm4, qword ptr [eax] */ uint32_t A = arg2; g->mm[4] = rd64(A); }
    { /* movd mm6, dword ptr [esp + 0x14] */ uint32_t A = sp0 + 0x14u; g->mm[6] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm1, dword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm2, qword ptr [ecx] */ uint32_t A = arg4; g->mm[2] = rd64(A); }
    { /* movd mm3, dword ptr [ecx + 8] */ uint32_t A = arg4 + 8u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm5, dword ptr [eax + 8] */ uint32_t A = arg2 + 8u; g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfsub mm0, mm4 */ g->mm[0] = n3d_pfsub(g->mm[0], g->mm[4]); }
    { /* movd mm7, dword ptr [esp + 0x18] */ uint32_t A = sp0 + 0x18u; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfsub mm1, mm5 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[5]); }
    { /* pfsub mm2, mm4 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[4]); }
    { /* punpckldq mm6, mm6 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[6]); }
    { /* pfsub mm3, mm5 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[5]); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* punpckldq mm7, mm7 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[7]); }
    { /* pfmul mm1, mm6 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[6]); }
    { /* pfadd mm0, mm4 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[4]); }
    { /* pfmul mm2, mm7 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[7]); }
    { /* pfadd mm1, mm5 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[5]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfadd mm1, mm3 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[3]); }
    { /* movq qword ptr [eax], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* movd dword ptr [eax + 8], mm1 */ uint32_t A = arg1 + 8u; wr32(A, (uint32_t)((uint32_t)g->mm[1])); }
    { /* femms  */  }
    g->edx = arg3;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103014d1(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_103014d1(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
