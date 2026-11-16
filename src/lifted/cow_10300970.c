/* f_0x10300970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10300970(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 68u);

    { /* movq mm1, qword ptr [edx + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [edx + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[2] = rd64(A); }
    { /* pswapd mm5, mm1 */ g->mm[5] = n3d_pswapd(g->mm[5], g->mm[1]); }
    { /* movq mm3, qword ptr [edx + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[3] = rd64(A); }
    { /* pswapd mm4, mm2 */ g->mm[4] = n3d_pswapd(g->mm[4], g->mm[2]); }
    { /* movq mm0, qword ptr [edx] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* pswapd mm6, mm3 */ g->mm[6] = n3d_pswapd(g->mm[6], g->mm[3]); }
    { /* pswapd mm7, mm2 */ g->mm[7] = n3d_pswapd(g->mm[7], g->mm[2]); }
    { /* pfmul mm5, mm0 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[0]); }
    { /* pfmul mm4, mm0 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[0]); }
    { /* pfmul mm6, mm0 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[0]); }
    { /* pswapd mm0, mm3 */ g->mm[0] = n3d_pswapd(g->mm[0], g->mm[3]); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pfnacc mm5, mm4 */ g->mm[5] = n3d_pfnacc(g->mm[5], g->mm[4]); }
    { /* pfmul mm1, mm0 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[0]); }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* pfnacc mm6, mm7 */ g->mm[6] = n3d_pfnacc(g->mm[6], g->mm[7]); }
    { /* pfnacc mm1, mm2 */ g->mm[1] = n3d_pfnacc(g->mm[1], g->mm[2]); }
    { /* movq mm0, qword ptr [edx + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[0] = rd64(A); }
    { /* movq mm2, mm6 */ g->mm[2] = g->mm[6]; }
    { /* movq mm4, mm1 */ g->mm[4] = g->mm[1]; }
    { /* movq mm7, qword ptr [edx + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[7] = rd64(A); }
    { /* punpckhdq mm2, mm2 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[2]); }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* punpckhdq mm4, mm4 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[4]); }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* pfmul mm4, qword ptr [edx + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm2, mm4 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[4]); }
    { /* movq mm4, mm6 */ g->mm[4] = g->mm[6]; }
    { /* pfsub mm2, mm3 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[3]); }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* punpckldq mm4, mm4 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[4]); }
    { /* movq qword ptr [esp + 8], mm2 */ uint32_t A = sp0 - 0x38u; wr64(A, g->mm[2]); }
    { /* movq mm2, mm5 */ g->mm[2] = g->mm[5]; }
    { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
    { /* punpckhdq mm2, mm2 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[2]); }
    { /* pfmul mm3, qword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* pfmul mm4, mm7 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[7]); }
    { /* pfsub mm2, mm4 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[4]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq qword ptr [esp + 0x18], mm2 */ uint32_t A = sp0 - 0x28u; wr64(A, g->mm[2]); }
    { /* movq mm2, mm5 */ g->mm[2] = g->mm[5]; }
    { /* movq mm3, mm6 */ g->mm[3] = g->mm[6]; }
    { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
    { /* punpckldq mm2, mm2 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[2]); }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* pfmul mm1, qword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* pfmul mm0, mm2 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[2]); }
    { /* pfmul mm3, qword ptr [edx + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfsub mm0, mm3 */ g->mm[0] = n3d_pfsub(g->mm[0], g->mm[3]); }
    { /* movq qword ptr [esp + 0x28], mm0 */ uint32_t A = sp0 - 0x18u; wr64(A, g->mm[0]); }
    { /* punpckhdq mm5, mm5 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[5]); }
    { /* punpckhdq mm6, mm6 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[6]); }
    { /* pfmul mm2, mm7 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[7]); }
    { /* pfmul mm5, qword ptr [edx + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[5] = n3d_pfmul(g->mm[5], rd64(A)); }
    { /* movq mm0, qword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[0] = rd64(A); }
    { /* pfmul mm6, qword ptr [edx + 8] */ uint32_t A = arg3 + 8u; g->mm[6] = n3d_pfmul(g->mm[6], rd64(A)); }
    { /* pfsub mm2, mm5 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[5]); }
    { /* pfadd mm2, mm6 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[6]); }
    { /* movq qword ptr [esp + 0x38], mm2 */ uint32_t A = sp0 - 8u; wr64(A, g->mm[2]); }
    { /* movq mm1, qword ptr [edx + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [edx + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [edx + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[3] = rd64(A); }
    { /* pswapd mm5, mm1 */ g->mm[5] = n3d_pswapd(g->mm[5], g->mm[1]); }
    { /* pswapd mm4, mm2 */ g->mm[4] = n3d_pswapd(g->mm[4], g->mm[2]); }
    { /* pfmul mm5, mm0 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[0]); }
    { /* pswapd mm6, mm3 */ g->mm[6] = n3d_pswapd(g->mm[6], g->mm[3]); }
    { /* pfmul mm4, mm0 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[0]); }
    { /* pswapd mm7, mm2 */ g->mm[7] = n3d_pswapd(g->mm[7], g->mm[2]); }
    { /* pfmul mm6, mm0 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[0]); }
    { /* pswapd mm0, mm3 */ g->mm[0] = n3d_pswapd(g->mm[0], g->mm[3]); }
    { /* pfnacc mm5, mm4 */ g->mm[5] = n3d_pfnacc(g->mm[5], g->mm[4]); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pfmul mm1, mm0 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[0]); }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* pfnacc mm6, mm7 */ g->mm[6] = n3d_pfnacc(g->mm[6], g->mm[7]); }
    { /* pfnacc mm1, mm2 */ g->mm[1] = n3d_pfnacc(g->mm[1], g->mm[2]); }
    { /* movq mm0, qword ptr [edx + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[0] = rd64(A); }
    { /* movq mm4, mm1 */ g->mm[4] = g->mm[1]; }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* movq mm7, qword ptr [edx + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[7] = rd64(A); }
    { /* movq mm2, mm6 */ g->mm[2] = g->mm[6]; }
    { /* punpckhdq mm4, mm4 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[4]); }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* punpckhdq mm2, mm2 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[2]); }
    { /* pfmul mm4, qword ptr [edx + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[4] = n3d_pfmul(g->mm[4], rd64(A)); }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm2, mm4 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[4]); }
    { /* pfsub mm2, mm3 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[3]); }
    { /* movq qword ptr [esp], mm2 */ uint32_t A = sp0 - 0x40u; wr64(A, g->mm[2]); }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* movq mm4, mm6 */ g->mm[4] = g->mm[6]; }
    { /* movq mm2, mm5 */ g->mm[2] = g->mm[5]; }
    { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
    { /* punpckldq mm4, mm4 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[4]); }
    { /* punpckhdq mm2, mm2 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[2]); }
    { /* pfmul mm3, qword ptr [edx] */ uint32_t A = arg3; g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
    { /* pfmul mm2, mm0 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[0]); }
    { /* pfmul mm4, mm7 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[7]); }
    { /* pfsub mm2, mm4 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[4]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq qword ptr [esp + 0x10], mm2 */ uint32_t A = sp0 - 0x30u; wr64(A, g->mm[2]); }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* movq mm2, mm5 */ g->mm[2] = g->mm[5]; }
    { /* movq mm3, mm6 */ g->mm[3] = g->mm[6]; }
    { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
    { /* punpckldq mm2, mm2 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[2]); }
    { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
    { /* pfmul mm1, qword ptr [edx] */ uint32_t A = arg3; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* pfmul mm0, mm2 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[2]); }
    { /* pfmul mm3, qword ptr [edx + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[3] = n3d_pfmul(g->mm[3], rd64(A)); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfsub mm0, mm3 */ g->mm[0] = n3d_pfsub(g->mm[0], g->mm[3]); }
    { /* movq qword ptr [esp + 0x20], mm0 */ uint32_t A = sp0 - 0x20u; wr64(A, g->mm[0]); }
    { /* punpckhdq mm5, mm5 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[5]); }
    { /* punpckhdq mm6, mm6 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[6]); }
    { /* pfmul mm2, mm7 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[7]); }
    { /* pfmul mm5, qword ptr [edx + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[5] = n3d_pfmul(g->mm[5], rd64(A)); }
    { /* pfmul mm6, qword ptr [edx] */ uint32_t A = arg3; g->mm[6] = n3d_pfmul(g->mm[6], rd64(A)); }
    { /* pfsub mm2, mm5 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[5]); }
    { /* pfadd mm2, mm6 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[6]); }
    { /* movq qword ptr [esp + 0x30], mm2 */ uint32_t A = sp0 - 0x10u; wr64(A, g->mm[2]); }
    { /* punpckhdq mm0, mm2 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[2]); }
    { /* punpckldq mm7, mm4 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[4]); }
    { /* movq mm3, qword ptr [edx] */ uint32_t A = arg3; g->mm[3] = rd64(A); }
    { /* movq mm1, qword ptr [esp] */ uint32_t A = sp0 - 0x40u; g->mm[1] = rd64(A); }
    { /* punpckldq mm3, dword ptr [edx + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[3] = mmx_punpckldq(g->mm[3], (uint64_t)rd32(A)); }
    { /* punpckhdq mm1, qword ptr [esp + 0x10] */ uint32_t A = sp0 - 0x30u; g->mm[1] = mmx_punpckhdq(g->mm[1], rd64(A)); }
    { /* pfmul mm0, mm7 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[7]); }
    { /* pfmul mm3, mm1 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[1]); }
    { /* pfnacc mm0, mm3 */ g->mm[0] = n3d_pfnacc(g->mm[0], g->mm[3]); }
    { /* pfacc mm0, mm0 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[0]); }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    if (arg2 != 0u)
    {
        { /* movd dword ptr [eax], mm0 */ uint32_t A = arg2; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    }
    { /* pfrcp mm1, mm0 */ g->mm[1] = n3d_pfrcp(g->mm[1], g->mm[0]); }
    { /* pxor mm3, mm3 */ g->mm[3] = mmx_pxor(g->mm[3], g->mm[3]); }
    { /* punpckldq mm0, mm0 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[0]); }
    { /* pfcmpeq mm3, mm4 */ g->mm[3] = n3d_pfcmpeq(g->mm[3], g->mm[4]); }
    { /* pfrcpit1 mm0, mm1 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[1]); }
    { /* pfrcpit2 mm0, mm1 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[1]); }
    eax = arg2;
    { /* movd eax, mm3 */ eax = (uint32_t)((uint32_t)g->mm[3]); }
    { /* pfmul mm0, qword ptr [0x10348470] */ uint32_t A = COW_IMG(0x10348470u); g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pswapd mm1, mm0 */ g->mm[1] = n3d_pswapd(g->mm[1], g->mm[0]); }
    if (eax == 0u)
    {
        { /* movq mm2, qword ptr [esp] */ uint32_t A = sp0 - 0x40u; g->mm[2] = rd64(A); }
        { /* movq mm5, qword ptr [esp + 8] */ uint32_t A = sp0 - 0x38u; g->mm[5] = rd64(A); }
        { /* movq mm3, qword ptr [esp + 0x10] */ uint32_t A = sp0 - 0x30u; g->mm[3] = rd64(A); }
        { /* movq mm6, qword ptr [esp + 0x18] */ uint32_t A = sp0 - 0x28u; g->mm[6] = rd64(A); }
        { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
        { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
        { /* pfmul mm5, mm1 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[1]); }
        { /* pfmul mm6, mm0 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[0]); }
        { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
        { /* movq mm7, mm5 */ g->mm[7] = g->mm[5]; }
        { /* punpckhdq mm2, mm3 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[3]); }
        { /* punpckldq mm4, mm3 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[3]); }
        { /* punpckhdq mm5, mm6 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[6]); }
        { /* punpckldq mm7, mm6 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[6]); }
        { /* movq qword ptr [eax], mm2 */ uint32_t A = arg1; wr64(A, g->mm[2]); }
        { /* movq qword ptr [eax + 0x10], mm4 */ uint32_t A = arg1 + 0x10u; wr64(A, g->mm[4]); }
        { /* movq qword ptr [eax + 0x20], mm5 */ uint32_t A = arg1 + 0x20u; wr64(A, g->mm[5]); }
        { /* movq qword ptr [eax + 0x30], mm7 */ uint32_t A = arg1 + 0x30u; wr64(A, g->mm[7]); }
        { /* movq mm2, qword ptr [esp + 0x20] */ uint32_t A = sp0 - 0x20u; g->mm[2] = rd64(A); }
        { /* movq mm5, qword ptr [esp + 0x28] */ uint32_t A = sp0 - 0x18u; g->mm[5] = rd64(A); }
        { /* movq mm3, qword ptr [esp + 0x30] */ uint32_t A = sp0 - 0x10u; g->mm[3] = rd64(A); }
        { /* movq mm6, qword ptr [esp + 0x38] */ uint32_t A = sp0 - 8u; g->mm[6] = rd64(A); }
        { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
        { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
        { /* pfmul mm5, mm1 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[1]); }
        { /* pfmul mm6, mm0 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[0]); }
        { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
        { /* movq mm7, mm5 */ g->mm[7] = g->mm[5]; }
        { /* punpckhdq mm2, mm3 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[3]); }
        { /* punpckldq mm4, mm3 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[3]); }
        { /* punpckhdq mm5, mm6 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[6]); }
        { /* punpckldq mm7, mm6 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[6]); }
        { /* movq qword ptr [eax + 8], mm2 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[2]); }
        { /* movq qword ptr [eax + 0x18], mm4 */ uint32_t A = arg1 + 0x18u; wr64(A, g->mm[4]); }
        { /* movq qword ptr [eax + 0x28], mm5 */ uint32_t A = arg1 + 0x28u; wr64(A, g->mm[5]); }
        { /* movq qword ptr [eax + 0x38], mm7 */ uint32_t A = arg1 + 0x38u; wr64(A, g->mm[7]); }
    }
    { /* femms  */  }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10300970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10300970(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
