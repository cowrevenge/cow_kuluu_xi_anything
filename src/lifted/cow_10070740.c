/* f_0x10070740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10070740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 8u);

    wr32(sp0 - 4u, in_esi);
    { /* femms  */  }
    { /* movd mm0, dword ptr [esp + 0xc] */ uint32_t A = sp0 + 8u; g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* movq mm2, qword ptr [esi] */ uint32_t A = arg1; g->mm[2] = rd64(A); }
    { /* psllq mm1, 0x20 */ g->mm[1] = mmx_psllq(g->mm[1], (uint64_t)0x20u); }
    { /* por mm1, mm0 */ g->mm[1] = mmx_por(g->mm[1], g->mm[0]); }
    { /* movd mm3, dword ptr [esi + 8] */ uint32_t A = arg1 + 8u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmul mm1, mm2 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[2]); }
    { /* pfmul mm0, mm3 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[3]); }
    { /* movq qword ptr [esi], mm1 */ uint32_t A = arg1; wr64(A, g->mm[1]); }
    { /* movd dword ptr [esi + 8], mm0 */ uint32_t A = arg1 + 8u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* femms  */  }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10070740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10070740(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
