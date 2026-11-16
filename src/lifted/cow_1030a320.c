/* f_0x1030a320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=0 */
uint32_t cow_fn_1030a320(Guest* g)
{
    const uint32_t in_eax = g->eax;

    { /* movd mm4, dword ptr [0x103cedfc] */ uint32_t A = COW_IMG(0x103cedfcu); g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm6, mm0 */ g->mm[6] = g->mm[0]; }
    { /* movd mm1, dword ptr [0x103cee00] */ uint32_t A = COW_IMG(0x103cee00u); g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* movd mm3, dword ptr [0x103ced98] */ uint32_t A = COW_IMG(0x103ced98u); g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmul mm4, mm0 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[0]); }
    { /* pfcmpge mm6, mm1 */ g->mm[6] = n3d_pfcmpge(g->mm[6], g->mm[1]); }
    { /* movd mm1, dword ptr [0x103cedac] */ uint32_t A = COW_IMG(0x103cedacu); g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* pand mm3, mm0 */ g->mm[3] = mmx_pand(g->mm[3], g->mm[0]); }
    { /* movd mm2, dword ptr [0x103cee04] */ uint32_t A = COW_IMG(0x103cee04u); g->mm[2] = (uint64_t)(uint32_t)rd32(A); }
    { /* por mm3, mm1 */ g->mm[3] = mmx_por(g->mm[3], g->mm[1]); }
    { /* movd mm7, dword ptr [0x103cee08] */ uint32_t A = COW_IMG(0x103cee08u); g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfadd mm4, mm3 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[3]); }
    { /* movd mm1, dword ptr [0x103cee0c] */ uint32_t A = COW_IMG(0x103cee0cu); g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* pf2id mm4, mm4 */ g->mm[4] = n3d_pf2id(g->mm[4], g->mm[4]); }
    { /* pfcmpge mm5, mm2 */ g->mm[5] = n3d_pfcmpge(g->mm[5], g->mm[2]); }
    { /* pi2fd mm3, mm4 */ g->mm[3] = n3d_pi2fd(g->mm[3], g->mm[4]); }
    { /* pfmul mm7, mm3 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[3]); }
    { /* pfmul mm1, mm3 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[3]); }
    { /* movd mm3, dword ptr [0x103cedc4] */ uint32_t A = COW_IMG(0x103cedc4u); g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfsub mm0, mm7 */ g->mm[0] = n3d_pfsub(g->mm[0], g->mm[7]); }
    { /* movd mm7, dword ptr [0x103cedc0] */ uint32_t A = COW_IMG(0x103cedc0u); g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfsub mm0, mm1 */ g->mm[0] = n3d_pfsub(g->mm[0], g->mm[1]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* pfadd mm0, mm3 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[3]); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* pfmul mm2, mm7 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[7]); }
    { /* movd mm7, dword ptr [0x103cedbc] */ uint32_t A = COW_IMG(0x103cedbcu); g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfadd mm2, mm7 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[7]); }
    { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
    { /* pfsub mm0, mm2 */ g->mm[0] = n3d_pfsub(g->mm[0], g->mm[2]); }
    { /* pfrcp mm1, mm0 */ g->mm[1] = n3d_pfrcp(g->mm[1], g->mm[0]); }
    { /* pfrcpit1 mm0, mm1 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[1]); }
    { /* pfadd mm2, mm2 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[2]); }
    { /* movd mm3, dword ptr [0x103ceda8] */ uint32_t A = COW_IMG(0x103ceda8u); g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfrcpit2 mm0, mm1 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[1]); }
    { /* pslld mm4, 0x17 */ g->mm[4] = mmx_pslld(g->mm[4], (uint64_t)0x17u); }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* movd mm0, dword ptr [0x103cee48] */ uint32_t A = COW_IMG(0x103cee48u); g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* pand mm0, mm6 */ g->mm[0] = mmx_pand(g->mm[0], g->mm[6]); }
    { /* paddd mm2, mm4 */ g->mm[2] = mmx_paddd(g->mm[2], g->mm[4]); }
    { /* pand mm2, mm5 */ g->mm[2] = mmx_pand(g->mm[2], g->mm[5]); }
    { /* pandn mm6, mm2 */ g->mm[6] = mmx_pandn(g->mm[6], g->mm[2]); }
    { /* por mm0, mm2 */ g->mm[0] = mmx_por(g->mm[0], g->mm[2]); }
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030a320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030a320(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
