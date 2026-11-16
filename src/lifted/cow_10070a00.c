/* f_0x10070a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10070a00(Guest* g)
{
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* femms  */  }
    { /* movq mm0, qword ptr [esi] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 8] */ uint32_t A = arg2 + 8u; g->mm[1] = rd64(A); }
    { /* movd mm2, dword ptr [edi] */ uint32_t A = arg3; g->mm[2] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* psllq mm3, 0x20 */ g->mm[3] = mmx_psllq(g->mm[3], (uint64_t)0x20u); }
    { /* por mm2, mm3 */ g->mm[2] = mmx_por(g->mm[2], g->mm[3]); }
    { /* pfmul mm0, mm2 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[2]); }
    { /* pfmul mm1, mm2 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[2]); }
    { /* movq mm4, qword ptr [esi + 0x10] */ uint32_t A = arg2 + 0x10u; g->mm[4] = rd64(A); }
    { /* movq mm5, qword ptr [esi + 0x18] */ uint32_t A = arg2 + 0x18u; g->mm[5] = rd64(A); }
    { /* movd mm2, dword ptr [edi + 4] */ uint32_t A = arg3 + 4u; g->mm[2] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* psllq mm3, 0x20 */ g->mm[3] = mmx_psllq(g->mm[3], (uint64_t)0x20u); }
    { /* por mm2, mm3 */ g->mm[2] = mmx_por(g->mm[2], g->mm[3]); }
    { /* pfmul mm4, mm2 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[2]); }
    { /* pfmul mm5, mm2 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[2]); }
    { /* pfadd mm0, mm4 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[4]); }
    { /* pfadd mm1, mm5 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[5]); }
    { /* movq mm4, qword ptr [esi + 0x20] */ uint32_t A = arg2 + 0x20u; g->mm[4] = rd64(A); }
    { /* movq mm5, qword ptr [esi + 0x28] */ uint32_t A = arg2 + 0x28u; g->mm[5] = rd64(A); }
    { /* movd mm2, dword ptr [edi + 8] */ uint32_t A = arg3 + 8u; g->mm[2] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* psllq mm3, 0x20 */ g->mm[3] = mmx_psllq(g->mm[3], (uint64_t)0x20u); }
    { /* por mm2, mm3 */ g->mm[2] = mmx_por(g->mm[2], g->mm[3]); }
    { /* pfmul mm4, mm2 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[2]); }
    { /* pfmul mm5, mm2 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[2]); }
    { /* pfadd mm0, mm4 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[4]); }
    { /* pfadd mm1, mm5 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[5]); }
    { /* movq mm4, qword ptr [esi + 0x30] */ uint32_t A = arg2 + 0x30u; g->mm[4] = rd64(A); }
    { /* movq mm5, qword ptr [esi + 0x38] */ uint32_t A = arg2 + 0x38u; g->mm[5] = rd64(A); }
    { /* pfadd mm0, mm4 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[4]); }
    { /* pfadd mm1, mm5 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[5]); }
    { /* movq qword ptr [edi], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* movd dword ptr [edi + 8], mm1 */ uint32_t A = arg1 + 8u; wr32(A, (uint32_t)((uint32_t)g->mm[1])); }
    { /* femms  */  }
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10070a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10070a00(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
