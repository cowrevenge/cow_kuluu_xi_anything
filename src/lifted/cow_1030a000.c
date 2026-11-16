/* f_0x1030a000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=0 */
uint32_t cow_fn_1030a000(Guest* g)
{
    const uint32_t in_eax = g->eax;

    { /* movd mm6, dword ptr [0x103ced98] */ uint32_t A = COW_IMG(0x103ced98u); g->mm[6] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm7, dword ptr [0x103ced9c] */ uint32_t A = COW_IMG(0x103ced9cu); g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm4, dword ptr [0x103cedac] */ uint32_t A = COW_IMG(0x103cedacu); g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* pand mm6, mm0 */ g->mm[6] = mmx_pand(g->mm[6], g->mm[0]); }
    { /* movd mm5, dword ptr [0x103ceda8] */ uint32_t A = COW_IMG(0x103ceda8u); g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* pand mm0, mm7 */ g->mm[0] = mmx_pand(g->mm[0], g->mm[7]); }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* pcmpgtd mm3, mm5 */ g->mm[3] = mmx_pcmpgtd(g->mm[3], g->mm[5]); }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* movd mm2, dword ptr [0x103cede0] */ uint32_t A = COW_IMG(0x103cede0u); g->mm[2] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfsubr mm0, mm4 */ g->mm[0] = n3d_pfsubr(g->mm[0], g->mm[4]); }
    { /* pfrsqrt mm7, mm0 */ g->mm[7] = n3d_pfrsqrt(g->mm[7], g->mm[0]); }
    { /* movq mm1, mm7 */ g->mm[1] = g->mm[7]; }
    { /* pfmul mm7, mm7 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[7]); }
    { /* pcmpgtd mm2, mm5 */ g->mm[2] = mmx_pcmpgtd(g->mm[2], g->mm[5]); }
    { /* pfrsqit1 mm7, mm0 */ g->mm[7] = n3d_pfrsqit1(g->mm[7], g->mm[0]); }
    { /* movd mm4, dword ptr [0x103cedf0] */ uint32_t A = COW_IMG(0x103cedf0u); g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfrcpit2 mm7, mm1 */ g->mm[7] = n3d_pfrcpit2(g->mm[7], g->mm[1]); }
    { /* pfmul mm7, mm0 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[0]); }
    { /* movq mm0, mm2 */ g->mm[0] = g->mm[2]; }
    { /* pand mm5, mm2 */ g->mm[5] = mmx_pand(g->mm[5], g->mm[2]); }
    { /* pandn mm0, mm7 */ g->mm[0] = mmx_pandn(g->mm[0], g->mm[7]); }
    { /* movd mm7, dword ptr [0x103cede8] */ uint32_t A = COW_IMG(0x103cede8u); g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* por mm0, mm5 */ g->mm[0] = mmx_por(g->mm[0], g->mm[5]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* movd mm5, dword ptr [0x103cede4] */ uint32_t A = COW_IMG(0x103cede4u); g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmul mm7, mm0 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[0]); }
    { /* pfadd mm4, mm0 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[0]); }
    { /* pfadd mm7, mm5 */ g->mm[7] = n3d_pfadd(g->mm[7], g->mm[5]); }
    { /* movd mm5, dword ptr [0x103cedec] */ uint32_t A = COW_IMG(0x103cedecu); g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmul mm7, mm0 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[0]); }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* pfadd mm0, mm5 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[5]); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pfrcp mm4, mm0 */ g->mm[4] = n3d_pfrcp(g->mm[4], g->mm[0]); }
    { /* pfrcpit1 mm0, mm4 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[4]); }
    { /* movd mm5, dword ptr [0x103cedf8] */ uint32_t A = COW_IMG(0x103cedf8u); g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfrcpit2 mm0, mm4 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[4]); }
    { /* pfmul mm0, mm7 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[7]); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* pandn mm2, mm5 */ g->mm[2] = mmx_pandn(g->mm[2], g->mm[5]); }
    { /* movd mm5, dword ptr [0x103cedf4] */ uint32_t A = COW_IMG(0x103cedf4u); g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm7, mm4 */ g->mm[7] = g->mm[4]; }
    { /* pxor mm2, mm6 */ g->mm[2] = mmx_pxor(g->mm[2], g->mm[6]); }
    { /* pfadd mm1, mm0 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[0]); }
    { /* movd mm0, dword ptr [0x103cedb4] */ uint32_t A = COW_IMG(0x103cedb4u); g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfadd mm2, mm5 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[5]); }
    { /* pslld mm7, 0x1f */ g->mm[7] = mmx_pslld(g->mm[7], (uint64_t)0x1Fu); }
    { /* pandn mm4, mm1 */ g->mm[4] = mmx_pandn(g->mm[4], g->mm[1]); }
    { /* pxor mm7, mm6 */ g->mm[7] = mmx_pxor(g->mm[7], g->mm[6]); }
    { /* pfadd mm1, mm4 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[4]); }
    { /* pand mm0, mm3 */ g->mm[0] = mmx_pand(g->mm[0], g->mm[3]); }
    { /* por mm1, mm7 */ g->mm[1] = mmx_por(g->mm[1], g->mm[7]); }
    { /* pfadd mm2, mm1 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[1]); }
    { /* pandn mm3, mm2 */ g->mm[3] = mmx_pandn(g->mm[3], g->mm[2]); }
    { /* por mm0, mm3 */ g->mm[0] = mmx_por(g->mm[0], g->mm[3]); }
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030a000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030a000(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
