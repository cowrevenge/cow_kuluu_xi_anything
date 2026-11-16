/* f_0x1030a700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1030a700(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;

    eax = in_eax;
    { /* movd eax, mm0 */ eax = (uint32_t)((uint32_t)g->mm[0]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* movd mm3, dword ptr [0x103ced9c] */ uint32_t A = COW_IMG(0x103ced9cu); g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* pand mm0, mm3 */ g->mm[0] = mmx_pand(g->mm[0], g->mm[3]); }
    t1 = rd32(COW_IMG(0x103cee54u));
    { /* movd mm2, dword ptr [0x103cee50] */ uint32_t A = COW_IMG(0x103cee50u); g->mm[2] = (uint64_t)(uint32_t)rd32(A); }
    if ((int32_t)(eax ^ (eax & 0x80000000u)) < (int32_t)t1)
    {
        edx = eax >> 0x1fu;
        ebx = eax & 0x80000000u;
        { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
        { /* pfmul mm0, mm2 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[2]); }
        { /* movq mm3, qword ptr [0x103ced60] */ uint32_t A = COW_IMG(0x103ced60u); g->mm[3] = rd64(A); }
        { /* pf2id mm0, mm0 */ g->mm[0] = n3d_pf2id(g->mm[0], g->mm[0]); }
        { /* movq mm7, qword ptr [0x103ced68] */ uint32_t A = COW_IMG(0x103ced68u); g->mm[7] = rd64(A); }
        ecx = self;
        { /* movd ecx, mm0 */ ecx = (uint32_t)((uint32_t)g->mm[0]); }
        { /* pi2fd mm0, mm0 */ g->mm[0] = n3d_pi2fd(g->mm[0], g->mm[0]); }
        { /* movq mm6, qword ptr [0x103ced78] */ uint32_t A = COW_IMG(0x103ced78u); g->mm[6] = rd64(A); }
        { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
        { /* movq mm5, qword ptr [0x103ced18] */ uint32_t A = COW_IMG(0x103ced18u); g->mm[5] = rd64(A); }
        { /* pfmul mm0, mm3 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[3]); }
        { /* movq mm3, qword ptr [0x103ced70] */ uint32_t A = COW_IMG(0x103ced70u); g->mm[3] = rd64(A); }
        { /* pfadd mm1, mm0 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[0]); }
        { /* punpckhdq mm0, mm0 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[0]); }
        { /* pfadd mm1, mm0 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[0]); }
        { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
        if (!(ecx & 1u))
        {
            edx = edx ^ ecx >> 2u;
        }
        else
        {
            edx = edx ^ ecx >> 2u;
            { /* pfsubr mm1, mm3 */ g->mm[1] = n3d_pfsubr(g->mm[1], g->mm[3]); }
        }
        { /* movq mm2, mm5 */ g->mm[2] = g->mm[5]; }
        { /* punpckldq mm2, mm1 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[1]); }
        { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
        { /* movq mm4, qword ptr [0x103ced80] */ uint32_t A = COW_IMG(0x103ced80u); g->mm[4] = rd64(A); }
        { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
        { /* pfmul mm6, mm1 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[1]); }
        { /* pfadd mm7, mm5 */ g->mm[7] = n3d_pfadd(g->mm[7], g->mm[5]); }
        { /* pfmul mm4, mm1 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[1]); }
        { /* pfmul mm7, mm6 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[6]); }
        { /* movq mm6, qword ptr [0x103ced88] */ uint32_t A = COW_IMG(0x103ced88u); g->mm[6] = rd64(A); }
        { /* pfadd mm7, mm5 */ g->mm[7] = n3d_pfadd(g->mm[7], g->mm[5]); }
        { /* pfmul mm6, mm1 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[1]); }
        { /* pfmul mm4, mm7 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[7]); }
        edx = edx << 0x1fu;
        { /* movd mm0, edx */ g->mm[0] = (uint64_t)(uint32_t)edx; }
        { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
        { /* punpckldq mm6, mm5 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[5]); }
        { /* psrlq mm5, 0x20 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x20u); }
        { /* pfmul mm4, mm6 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[6]); }
        { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
        ebx = ebx ^ ecx >> 1u << 0x1fu;
        { /* movd mm1, ebx */ g->mm[1] = (uint64_t)(uint32_t)ebx; }
        { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
        { /* pfmul mm4, mm2 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[2]); }
        if (!((ecx ^ ecx >> 1u) & 1u))
        {
            esi = ecx >> 1u << 0x1fu;
        }
        else
        {
            esi = ecx >> 1u << 0x1fu;
            { /* punpckldq mm5, mm4 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[4]); }
            { /* punpckhdq mm4, mm5 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[5]); }
        }
        { /* pxor mm4, mm1 */ g->mm[4] = mmx_pxor(g->mm[4], g->mm[1]); }
        { /* pxor mm0, mm4 */ g->mm[0] = mmx_pxor(g->mm[0], g->mm[4]); }
    }
    else
    {
        ebx = eax & 0x80000000u;
        { /* movd mm0, dword ptr [0x103ceda8] */ uint32_t A = COW_IMG(0x103ceda8u); g->mm[0] = (uint64_t)(uint32_t)rd32(A); }
        esi = in_esi;
    }
    { /* punpckhdq mm0, mm0 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[0]); }
    g->ebx = ebx;
    g->esi = esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030a700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1030a700(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
