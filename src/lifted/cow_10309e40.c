/* f_0x10309e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=0 */
uint32_t cow_fn_10309e40(Guest* g)
{
    const uint32_t in_eax = g->eax;

    { /* movd mm7, dword ptr [0x103ced98] */ uint32_t A = COW_IMG(0x103ced98u); g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm5, dword ptr [0x103ced9c] */ uint32_t A = COW_IMG(0x103ced9cu); g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* pand mm7, mm0 */ g->mm[7] = mmx_pand(g->mm[7], g->mm[0]); }
    { /* movd mm6, dword ptr [0x103ceda8] */ uint32_t A = COW_IMG(0x103ceda8u); g->mm[6] = (uint64_t)(uint32_t)rd32(A); }
    { /* pand mm0, mm5 */ g->mm[0] = mmx_pand(g->mm[0], g->mm[5]); }
    { /* pcmpgtd mm6, mm0 */ g->mm[6] = mmx_pcmpgtd(g->mm[6], g->mm[0]); }
    { /* pfrcp mm2, mm0 */ g->mm[2] = n3d_pfrcp(g->mm[2], g->mm[0]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pfrcpit1 mm0, mm2 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[2]); }
    { /* movd mm3, dword ptr [0x103cedd0] */ uint32_t A = COW_IMG(0x103cedd0u); g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfrcpit2 mm0, mm2 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[2]); }
    { /* movd mm4, dword ptr [0x103ceddc] */ uint32_t A = COW_IMG(0x103ceddcu); g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmin mm0, mm1 */ g->mm[0] = n3d_pfmin(g->mm[0], g->mm[1]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* movd mm5, dword ptr [0x103cedd8] */ uint32_t A = COW_IMG(0x103cedd8u); g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfadd mm3, mm0 */ g->mm[3] = n3d_pfadd(g->mm[3], g->mm[0]); }
    { /* pfmul mm4, mm0 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[0]); }
    { /* movd mm2, dword ptr [0x103cedcc] */ uint32_t A = COW_IMG(0x103cedccu); g->mm[2] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
    { /* movd mm5, dword ptr [0x103cedd4] */ uint32_t A = COW_IMG(0x103cedd4u); g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfadd mm3, mm2 */ g->mm[3] = n3d_pfadd(g->mm[3], g->mm[2]); }
    { /* pfmul mm4, mm0 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[0]); }
    { /* movd mm2, dword ptr [0x103cedc8] */ uint32_t A = COW_IMG(0x103cedc8u); g->mm[2] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
    { /* pfadd mm3, mm2 */ g->mm[3] = n3d_pfadd(g->mm[3], g->mm[2]); }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* pfmul mm0, mm1 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[1]); }
    { /* pfrcp mm5, mm3 */ g->mm[5] = n3d_pfrcp(g->mm[5], g->mm[3]); }
    { /* movd mm4, dword ptr [0x103cedf4] */ uint32_t A = COW_IMG(0x103cedf4u); g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfrcpit1 mm3, mm5 */ g->mm[3] = n3d_pfrcpit1(g->mm[3], g->mm[5]); }
    { /* pfrcpit2 mm3, mm5 */ g->mm[3] = n3d_pfrcpit2(g->mm[3], g->mm[5]); }
    { /* pfmul mm0, mm3 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[3]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfsub mm4, mm0 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[0]); }
    { /* pandn mm6, mm4 */ g->mm[6] = mmx_pandn(g->mm[6], g->mm[4]); }
    { /* pfmax mm0, mm6 */ g->mm[0] = n3d_pfmax(g->mm[0], g->mm[6]); }
    { /* por mm0, mm7 */ g->mm[0] = mmx_por(g->mm[0], g->mm[7]); }
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10309e40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10309e40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
