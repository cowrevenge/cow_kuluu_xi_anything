/* f_0x10302586 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10302586(Guest* g)
{
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* femms  */  }
    { /* movq mm3, qword ptr [0x10348500] */ uint32_t A = COW_IMG(0x10348500u); g->mm[3] = rd64(A); }
    { /* movq mm0, qword ptr [edx] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* movd mm1, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* movd mm6, dword ptr [ecx + 8] */ uint32_t A = arg4 + 8u; g->mm[6] = (uint64_t)(uint32_t)rd32(A); }
    { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
    { /* punpckldq mm6, dword ptr [eax + 8] */ uint32_t A = arg3 + 8u; g->mm[6] = mmx_punpckldq(g->mm[6], (uint64_t)rd32(A)); }
    { /* pfsub mm0, qword ptr [eax] */ uint32_t A = arg3; g->mm[0] = n3d_pfsub(g->mm[0], rd64(A)); }
    { /* pfsub mm1, mm6 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[6]); }
    { /* pfsub mm4, qword ptr [ecx] */ uint32_t A = arg4; g->mm[4] = n3d_pfsub(g->mm[4], rd64(A)); }
    { /* pxor mm7, mm7 */ g->mm[7] = mmx_pxor(g->mm[7], g->mm[7]); }
    { /* pfsub mm7, mm4 */ g->mm[7] = n3d_pfsub(g->mm[7], g->mm[4]); }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* punpckhdq mm0, mm7 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[7]); }
    { /* pfmul mm0, mm1 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[1]); }
    { /* movq mm6, mm7 */ g->mm[6] = g->mm[7]; }
    { /* punpckldq mm6, mm1 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[1]); }
    { /* punpckhdq mm1, mm3 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[3]); }
    { /* punpckldq mm1, mm5 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[5]); }
    { /* pfmul mm1, mm6 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[6]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pxor mm0, mm3 */ g->mm[0] = mmx_pxor(g->mm[0], g->mm[3]); }
    { /* movq mm1, mm4 */ g->mm[1] = g->mm[4]; }
    { /* punpckldq mm4, mm7 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[7]); }
    { /* punpckhdq mm1, mm4 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[4]); }
    { /* pfmul mm1, mm5 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[5]); }
    { /* pfacc mm1, mm1 */ g->mm[1] = n3d_pfacc(g->mm[1], g->mm[1]); }
    { /* movq mm6, mm0 */ g->mm[6] = g->mm[0]; }
    { /* movq mm7, mm1 */ g->mm[7] = g->mm[1]; }
    { /* psllq mm7, 0x20 */ g->mm[7] = mmx_psllq(g->mm[7], (uint64_t)0x20u); }
    { /* pfmul mm6, mm6 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[6]); }
    { /* pfmul mm7, mm7 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[7]); }
    { /* pfadd mm6, mm7 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[7]); }
    { /* pfacc mm6, mm6 */ g->mm[6] = n3d_pfacc(g->mm[6], g->mm[6]); }
    { /* movq mm5, mm6 */ g->mm[5] = g->mm[6]; }
    { /* pfrsqrt mm4, mm6 */ g->mm[4] = n3d_pfrsqrt(g->mm[4], g->mm[6]); }
    { /* pfcmpgt mm5, qword ptr [0x103484f0] */ uint32_t A = COW_IMG(0x103484f0u); g->mm[5] = n3d_pfcmpgt(g->mm[5], rd64(A)); }
    { /* movq mm7, mm4 */ g->mm[7] = g->mm[4]; }
    { /* pfmul mm7, mm4 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[4]); }
    { /* pfrsqit1 mm6, mm7 */ g->mm[6] = n3d_pfrsqit1(g->mm[6], g->mm[7]); }
    { /* pand mm0, mm5 */ g->mm[0] = mmx_pand(g->mm[0], g->mm[5]); }
    { /* pand mm1, mm5 */ g->mm[1] = mmx_pand(g->mm[1], g->mm[5]); }
    { /* pfrcpit2 mm6, mm4 */ g->mm[6] = n3d_pfrcpit2(g->mm[6], g->mm[4]); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm6 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[6]); }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* pfmul mm0, qword ptr [edx] */ uint32_t A = arg2; g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pfmul mm1, mm2 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[2]); }
    { /* pfacc mm0, mm0 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[0]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* punpckldq mm5, mm0 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[0]); }
    { /* pxor mm5, mm3 */ g->mm[5] = mmx_pxor(g->mm[5], g->mm[3]); }
    { /* movq qword ptr [eax], mm4 */ uint32_t A = arg1; wr64(A, g->mm[4]); }
    { /* movq qword ptr [eax + 8], mm5 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[5]); }
    { /* femms  */  }
    g->edx = arg2;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10302586(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10302586(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
