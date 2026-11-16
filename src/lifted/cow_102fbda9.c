/* f_0x102fbda9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102fbda9(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    { /* movq mm0, qword ptr [edx] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* pxor mm6, mm6 */ g->mm[6] = mmx_pxor(g->mm[6], g->mm[6]); }
    { /* movd mm4, dword ptr [edx + 0x14] */ uint32_t A = arg2 + 0x14u; g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* pfadd mm0, mm4 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[4]); }
    { /* movd mm5, dword ptr [edx + 0x28] */ uint32_t A = arg2 + 0x28u; g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfsub mm1, mm4 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[4]); }
    { /* pfsubr mm2, mm4 */ g->mm[2] = n3d_pfsubr(g->mm[2], g->mm[4]); }
    { /* pfsubr mm3, mm5 */ g->mm[3] = n3d_pfsubr(g->mm[3], g->mm[5]); }
    { /* pfadd mm0, mm5 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[5]); }
    { /* pfsub mm1, mm5 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[5]); }
    { /* pfsub mm2, mm5 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[5]); }
    { /* movq mm5, qword ptr [edx + 0x20] */ uint32_t A = arg2 + 0x20u; g->mm[5] = rd64(A); }
    { /* pfsub mm3, mm4 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[4]); }
    { /* punpckldq mm0, mm2 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[2]); }
    { /* movq mm7, mm2 */ g->mm[7] = g->mm[2]; }
    { /* punpckldq mm6, mm1 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[1]); }
    { /* punpckldq mm7, mm1 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[1]); }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* pfcmpge mm6, mm0 */ g->mm[6] = n3d_pfcmpge(g->mm[6], g->mm[0]); }
    { /* pfcmpge mm7, mm3 */ g->mm[7] = n3d_pfcmpge(g->mm[7], g->mm[3]); }
    { /* packssdw mm6, mm7 */ g->mm[6] = mmx_packssdw(g->mm[6], g->mm[7]); }
    { /* packsswb mm6, mm6 */ g->mm[6] = mmx_packsswb(g->mm[6], g->mm[6]); }
    ecx = self;
    { /* movd ecx, mm6 */ ecx = (uint32_t)((uint32_t)g->mm[6]); }
    { /* movq mm6, mm5 */ g->mm[6] = g->mm[5]; }
    if (ecx & 1u)
    {
        eax = ecx;
        goto L_102fbe7a;
    }
    { /* pfadd mm0, qword ptr [0x10348470] */ uint32_t A = COW_IMG(0x10348470u); g->mm[0] = n3d_pfadd(g->mm[0], rd64(A)); }
    { /* movd mm3, dword ptr [edx + 0x18] */ uint32_t A = arg2 + 0x18u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm7, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfrsqrt mm4, mm0 */ g->mm[4] = n3d_pfrsqrt(g->mm[4], g->mm[0]); }
    { /* punpckldq mm3, mm5 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[5]); }
    { /* punpckldq mm7, mm7 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[7]); }
    { /* movq mm2, mm4 */ g->mm[2] = g->mm[4]; }
    { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
    { /* pfmul mm4, mm4 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[4]); }
    { /* punpckhdq mm5, mm7 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[7]); }
    { /* movd mm6, dword ptr [edx + 0x10] */ uint32_t A = arg2 + 0x10u; g->mm[6] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfrsqit1 mm4, mm0 */ g->mm[4] = n3d_pfrsqit1(g->mm[4], g->mm[0]); }
    { /* punpckhdq mm1, mm1 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[1]); }
    { /* pfsub mm3, mm5 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[5]); }
    { /* pfrcpit2 mm4, mm2 */ g->mm[4] = n3d_pfrcpit2(g->mm[4], g->mm[2]); }
    { /* pfsub mm1, mm6 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[6]); }
    { /* pfmul mm4, qword ptr [0x103484e8] */ uint32_t A = COW_IMG(0x103484e8u); g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm4 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[4]); }
    { /* pfmul mm3, mm4 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[4]); }
    { /* punpckldq mm1, mm0 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[0]); }
    { /* movq qword ptr [eax], mm3 */ uint32_t A = arg1; wr64(A, g->mm[3]); }
    { /* movq qword ptr [eax + 8], mm1 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[1]); }
    { /* femms  */  }
    g->edx = arg2;
    return arg1;
L_102fbe7a: ;
    if ((eax & 0xff00ff00u) != 0xff00ff00u) goto L_102fbef3;
    { /* pfadd mm1, qword ptr [0x10348470] */ uint32_t A = COW_IMG(0x10348470u); g->mm[1] = n3d_pfadd(g->mm[1], rd64(A)); }
    { /* punpckhdq mm2, mm2 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[2]); }
    { /* pfrsqrt mm4, mm1 */ g->mm[4] = n3d_pfrsqrt(g->mm[4], g->mm[1]); }
    { /* movd mm3, dword ptr [edx + 0x10] */ uint32_t A = arg2 + 0x10u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm0, mm4 */ g->mm[0] = g->mm[4]; }
    { /* pfmul mm4, mm4 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[4]); }
    { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
    { /* punpckldq mm5, dword ptr [edx + 0x18] */ uint32_t A = arg2 + 0x18u; g->mm[5] = mmx_punpckldq(g->mm[5], (uint64_t)rd32(A)); }
    { /* pfsub mm3, mm2 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[2]); }
    { /* pfrsqit1 mm4, mm1 */ g->mm[4] = n3d_pfrsqit1(g->mm[4], g->mm[1]); }
    { /* movd mm7, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* punpckhdq mm6, mm6 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[6]); }
    { /* pfrcpit2 mm4, mm0 */ g->mm[4] = n3d_pfrcpit2(g->mm[4], g->mm[0]); }
    { /* punpckldq mm7, mm6 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[6]); }
    { /* pfmul mm4, qword ptr [0x103484e8] */ uint32_t A = COW_IMG(0x103484e8u); g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pxor mm7, qword ptr [0x103484a0] */ uint32_t A = COW_IMG(0x103484a0u); g->mm[7] = mmx_pxor(g->mm[7], rd64(A)); }
    { /* pfmul mm1, mm4 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[4]); }
    { /* pfadd mm5, mm7 */ g->mm[5] = n3d_pfadd(g->mm[5], g->mm[7]); }
    { /* pfmul mm3, mm4 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[4]); }
    { /* pfmul mm5, mm4 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[4]); }
    { /* punpckldq mm1, mm3 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[3]); }
    { /* movq qword ptr [eax + 8], mm5 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[5]); }
    { /* movq qword ptr [eax], mm1 */ uint32_t A = arg1; wr64(A, g->mm[1]); }
    { /* femms  */  }
    g->edx = arg2;
    return arg1;
L_102fbef3: ;
    if ((ecx & 0x10000u) == 0u) goto L_102fbf67;
    { /* pfadd mm2, qword ptr [0x10348470] */ uint32_t A = COW_IMG(0x10348470u); g->mm[2] = n3d_pfadd(g->mm[2], rd64(A)); }
    { /* punpckhdq mm1, mm1 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[1]); }
    { /* movq mm6, mm5 */ g->mm[6] = g->mm[5]; }
    { /* pfrsqrt mm4, mm2 */ g->mm[4] = n3d_pfrsqrt(g->mm[4], g->mm[2]); }
    { /* movd mm3, dword ptr [edx + 0x18] */ uint32_t A = arg2 + 0x18u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    { /* punpckhdq mm6, mm6 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[6]); }
    { /* movq mm0, mm4 */ g->mm[0] = g->mm[4]; }
    { /* pfmul mm4, mm4 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[4]); }
    { /* punpckldq mm2, mm2 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[2]); }
    { /* punpckldq mm6, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->mm[6] = mmx_punpckldq(g->mm[6], (uint64_t)rd32(A)); }
    { /* punpckldq mm3, mm5 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[5]); }
    { /* pfrsqit1 mm4, mm2 */ g->mm[4] = n3d_pfrsqit1(g->mm[4], g->mm[2]); }
    { /* movd mm7, dword ptr [edx + 0x10] */ uint32_t A = arg2 + 0x10u; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfrcpit2 mm4, mm0 */ g->mm[4] = n3d_pfrcpit2(g->mm[4], g->mm[0]); }
    { /* pxor mm6, qword ptr [0x103484a0] */ uint32_t A = COW_IMG(0x103484a0u); g->mm[6] = mmx_pxor(g->mm[6], rd64(A)); }
    { /* pfadd mm1, mm7 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[7]); }
    { /* pfmul mm4, qword ptr [0x103484e8] */ uint32_t A = COW_IMG(0x103484e8u); g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pfadd mm3, mm6 */ g->mm[3] = n3d_pfadd(g->mm[3], g->mm[6]); }
    { /* pfmul mm1, mm4 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[4]); }
    { /* pfmul mm2, mm4 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[4]); }
    { /* pfmul mm3, mm4 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[4]); }
    { /* punpckldq mm1, mm2 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[2]); }
    { /* movq qword ptr [eax + 8], mm3 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[3]); }
    { /* movq qword ptr [eax], mm1 */ uint32_t A = arg1; wr64(A, g->mm[1]); }
    { /* femms  */  }
    g->edx = arg2;
    return arg1;
L_102fbf67: ;
    { /* pfadd mm3, qword ptr [0x10348470] */ uint32_t A = COW_IMG(0x10348470u); g->mm[3] = n3d_pfadd(g->mm[3], rd64(A)); }
    { /* punpckhdq mm1, mm1 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[1]); }
    { /* pfrsqrt mm2, mm3 */ g->mm[2] = n3d_pfrsqrt(g->mm[2], g->mm[3]); }
    { /* movd mm4, dword ptr [edx + 8] */ uint32_t A = arg2 + 8u; g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* punpckhdq mm6, mm6 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[6]); }
    { /* movq mm0, mm2 */ g->mm[0] = g->mm[2]; }
    { /* pfmul mm2, mm2 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[2]); }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* punpckldq mm5, dword ptr [edx + 0x18] */ uint32_t A = arg2 + 0x18u; g->mm[5] = mmx_punpckldq(g->mm[5], (uint64_t)rd32(A)); }
    { /* punpckldq mm4, mm6 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[6]); }
    { /* pfrsqit1 mm2, mm3 */ g->mm[2] = n3d_pfrsqit1(g->mm[2], g->mm[3]); }
    { /* movd mm7, dword ptr [edx + 0x10] */ uint32_t A = arg2 + 0x10u; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfrcpit2 mm2, mm0 */ g->mm[2] = n3d_pfrcpit2(g->mm[2], g->mm[0]); }
    { /* pfsub mm1, mm7 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[7]); }
    { /* pfadd mm5, mm4 */ g->mm[5] = n3d_pfadd(g->mm[5], g->mm[4]); }
    { /* pfmul mm2, qword ptr [0x103484e8] */ uint32_t A = COW_IMG(0x103484e8u); g->mm[2] = n3d_pfmul(g->mm[2], rd64(A)); }
    { /* pfmul mm3, mm2 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[2]); }
    { /* pfmul mm1, mm2 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[2]); }
    { /* pfmul mm5, mm2 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[2]); }
    { /* punpckldq mm3, mm1 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[1]); }
    { /* movq qword ptr [eax], mm5 */ uint32_t A = arg1; wr64(A, g->mm[5]); }
    { /* movq qword ptr [eax + 8], mm3 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[3]); }
    { /* femms  */  }
    g->edx = arg2;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fbda9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fbda9(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
