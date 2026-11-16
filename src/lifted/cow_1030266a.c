/* f_0x1030266a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1030266a(Guest* g)
{
    uint32_t eax;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movq mm0, qword ptr [eax] */ uint32_t A = arg2; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [eax + 8] */ uint32_t A = arg2 + 8u; g->mm[1] = rd64(A); }
    { /* movq mm4, qword ptr [edx] */ uint32_t A = arg4; g->mm[4] = rd64(A); }
    { /* movd mm5, dword ptr [edx + 8] */ uint32_t A = arg4 + 8u; g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm6, qword ptr [ecx] */ uint32_t A = arg3; g->mm[6] = rd64(A); }
    { /* pfmul mm2, mm4 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[4]); }
    { /* pfmul mm3, mm5 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[5]); }
    { /* movd mm7, dword ptr [ecx + 8] */ uint32_t A = arg3 + 8u; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* pfmul mm4, mm6 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[6]); }
    { /* pfmul mm5, mm7 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[7]); }
    { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
    { /* pxor mm3, mm3 */ g->mm[3] = mmx_pxor(g->mm[3], g->mm[3]); }
    { /* pfsub mm4, mm2 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[2]); }
    { /* punpckldq mm7, dword ptr [0x10348470] */ uint32_t A = COW_IMG(0x10348470u); g->mm[7] = mmx_punpckldq(g->mm[7], (uint64_t)rd32(A)); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* pfacc mm4, mm4 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[4]); }
    { /* pfcmpeq mm3, mm4 */ g->mm[3] = n3d_pfcmpeq(g->mm[3], g->mm[4]); }
    eax = arg2;
    { /* movd eax, mm3 */ eax = (uint32_t)((uint32_t)g->mm[3]); }
    { /* pfrcp mm5, mm4 */ g->mm[5] = n3d_pfrcp(g->mm[5], g->mm[4]); }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* pfmul mm2, mm6 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[6]); }
    if (eax == 0u) goto L_103026e5;
    { /* femms  */  }
    g->edx = arg4;
    return 0u;
L_103026e5: ;
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfrcpit1 mm4, mm5 */ g->mm[4] = n3d_pfrcpit1(g->mm[4], g->mm[5]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq mm3, qword ptr [edx] */ uint32_t A = arg4; g->mm[3] = rd64(A); }
    { /* pfrcpit2 mm4, mm5 */ g->mm[4] = n3d_pfrcpit2(g->mm[4], g->mm[5]); }
    { /* pfacc mm2, mm2 */ g->mm[2] = n3d_pfacc(g->mm[2], g->mm[2]); }
    { /* movd mm5, dword ptr [edx + 8] */ uint32_t A = arg4 + 8u; g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfsub mm3, mm6 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[6]); }
    { /* pfmul mm2, mm4 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[4]); }
    { /* pfsub mm5, mm7 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[7]); }
    { /* pfmul mm3, mm2 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[2]); }
    { /* pfmul mm5, mm2 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[2]); }
    { /* pfadd mm3, mm6 */ g->mm[3] = n3d_pfadd(g->mm[3], g->mm[6]); }
    { /* pfadd mm5, mm7 */ g->mm[5] = n3d_pfadd(g->mm[5], g->mm[7]); }
    { /* movq qword ptr [eax], mm3 */ uint32_t A = arg1; wr64(A, g->mm[3]); }
    { /* movd dword ptr [eax + 8], mm5 */ uint32_t A = arg1 + 8u; wr32(A, (uint32_t)((uint32_t)g->mm[5])); }
    { /* femms  */  }
    g->edx = arg4;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030266a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030266a(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
