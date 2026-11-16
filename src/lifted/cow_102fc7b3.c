/* f_0x102fc7b3 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_102fc7b3(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0xa4u) & 0xfffffff8u;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 188u);

    wr32(sp0 - 4u, in_ebp);
    { /* movq mm0, qword ptr [edx] */ uint32_t A = arg4; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [edx + 8] */ uint32_t A = arg4 + 8u; g->mm[1] = rd64(A); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm3, mm1 */ g->mm[3] = g->mm[1]; }
    { /* movq qword ptr [esp], mm0 */ uint32_t A = sp1; wr64(A, g->mm[0]); }
    { /* movq qword ptr [esp + 8], mm1 */ uint32_t A = sp1 + 8u; wr64(A, g->mm[1]); }
    { /* movq mm4, qword ptr [ecx] */ uint32_t A = arg5; g->mm[4] = rd64(A); }
    { /* movq mm5, qword ptr [ecx + 8] */ uint32_t A = arg5 + 8u; g->mm[5] = rd64(A); }
    { /* movq qword ptr [esp + 0x10], mm4 */ uint32_t A = sp1 + 0x10u; wr64(A, g->mm[4]); }
    { /* pfadd mm0, mm4 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[4]); }
    { /* movq qword ptr [esp + 0x18], mm5 */ uint32_t A = sp1 + 0x18u; wr64(A, g->mm[5]); }
    { /* pfadd mm1, mm5 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[5]); }
    { /* pfsub mm2, mm4 */ g->mm[2] = n3d_pfsub(g->mm[2], g->mm[4]); }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* pfsub mm3, mm5 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[5]); }
    { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
    { /* pfmul mm2, mm2 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[2]); }
    { /* pfmul mm3, mm3 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[3]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq mm6, qword ptr [edx] */ uint32_t A = arg6; g->mm[6] = rd64(A); }
    { /* movq mm7, qword ptr [edx + 8] */ uint32_t A = arg6 + 8u; g->mm[7] = rd64(A); }
    { /* movq qword ptr [esp + 0x20], mm6 */ uint32_t A = sp1 + 0x20u; wr64(A, g->mm[6]); }
    { /* movq qword ptr [esp + 0x28], mm7 */ uint32_t A = sp1 + 0x28u; wr64(A, g->mm[7]); }
    { /* movq mm1, mm4 */ g->mm[1] = g->mm[4]; }
    { /* movq mm3, mm5 */ g->mm[3] = g->mm[5]; }
    { /* pfadd mm4, mm6 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[6]); }
    { /* pfadd mm5, mm7 */ g->mm[5] = n3d_pfadd(g->mm[5], g->mm[7]); }
    { /* pfsub mm1, mm6 */ g->mm[1] = n3d_pfsub(g->mm[1], g->mm[6]); }
    { /* pfsub mm3, mm7 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[7]); }
    { /* pfmul mm4, mm4 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[4]); }
    { /* pfmul mm5, mm5 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[5]); }
    { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
    { /* pfmul mm3, mm3 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[3]); }
    { /* pfadd mm4, mm5 */ g->mm[4] = n3d_pfadd(g->mm[4], g->mm[5]); }
    { /* pfadd mm1, mm3 */ g->mm[1] = n3d_pfadd(g->mm[1], g->mm[3]); }
    { /* pfacc mm0, mm4 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[4]); }
    { /* pfacc mm2, mm1 */ g->mm[2] = n3d_pfacc(g->mm[2], g->mm[1]); }
    { /* pfcmpgt mm2, mm0 */ g->mm[2] = n3d_pfcmpgt(g->mm[2], g->mm[0]); }
    { /* packsswb mm2, mm2 */ g->mm[2] = mmx_packsswb(g->mm[2], g->mm[2]); }
    eax = in_eax;
    { /* movd eax, mm2 */ eax = (uint32_t)((uint32_t)g->mm[2]); }
    { /* movq mm0, qword ptr [0x103484a8] */ uint32_t A = COW_IMG(0x103484a8u); g->mm[0] = rd64(A); }
    if (!(eax & 1u))
    {
        edx = arg6;
    }
    else
    {
        { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
        { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
        { /* pxor mm1, qword ptr [edx] */ uint32_t A = arg4; g->mm[1] = mmx_pxor(g->mm[1], rd64(A)); }
        { /* pxor mm2, qword ptr [edx + 8] */ uint32_t A = arg4 + 8u; g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
        { /* movq qword ptr [esp], mm1 */ uint32_t A = sp1; wr64(A, g->mm[1]); }
        { /* movq qword ptr [esp + 8], mm2 */ uint32_t A = sp1 + 8u; wr64(A, g->mm[2]); }
        edx = arg4;
    }
    if ((eax & 0x10000u) != 0u)
    {
        { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
        { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
        { /* pxor mm1, qword ptr [ecx] */ uint32_t A = arg6; g->mm[1] = mmx_pxor(g->mm[1], rd64(A)); }
        { /* pxor mm2, qword ptr [ecx + 8] */ uint32_t A = arg6 + 8u; g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
        { /* movq qword ptr [esp + 0x20], mm1 */ uint32_t A = sp1 + 0x20u; wr64(A, g->mm[1]); }
        { /* movq qword ptr [esp + 0x28], mm2 */ uint32_t A = sp1 + 0x28u; wr64(A, g->mm[2]); }
    }
    { /* movq mm6, qword ptr [esp + 0x20] */ uint32_t A = sp1 + 0x20u; g->mm[6] = rd64(A); }
    { /* movq mm7, qword ptr [esp + 0x28] */ uint32_t A = sp1 + 0x28u; g->mm[7] = rd64(A); }
    { /* movq mm1, qword ptr [ecx] */ uint32_t A = arg7; g->mm[1] = rd64(A); }
    { /* movq mm4, qword ptr [ecx + 8] */ uint32_t A = arg7 + 8u; g->mm[4] = rd64(A); }
    { /* movq mm3, mm6 */ g->mm[3] = g->mm[6]; }
    { /* movq mm5, mm7 */ g->mm[5] = g->mm[7]; }
    { /* pfadd mm6, mm1 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[1]); }
    { /* movq qword ptr [esp + 0x30], mm1 */ uint32_t A = sp1 + 0x30u; wr64(A, g->mm[1]); }
    { /* pfadd mm7, mm4 */ g->mm[7] = n3d_pfadd(g->mm[7], g->mm[4]); }
    { /* movq qword ptr [esp + 0x38], mm4 */ uint32_t A = sp1 + 0x38u; wr64(A, g->mm[4]); }
    { /* pfsub mm3, mm1 */ g->mm[3] = n3d_pfsub(g->mm[3], g->mm[1]); }
    { /* pfsub mm5, mm4 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[4]); }
    { /* pfmul mm6, mm6 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[6]); }
    { /* pfmul mm7, mm7 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[7]); }
    { /* pfmul mm3, mm3 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[3]); }
    { /* pfmul mm5, mm5 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[5]); }
    { /* pfadd mm6, mm7 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[7]); }
    { /* pfadd mm3, mm5 */ g->mm[3] = n3d_pfadd(g->mm[3], g->mm[5]); }
    { /* pfacc mm6, mm6 */ g->mm[6] = n3d_pfacc(g->mm[6], g->mm[6]); }
    { /* pfacc mm3, mm3 */ g->mm[3] = n3d_pfacc(g->mm[3], g->mm[3]); }
    { /* pfcmpgt mm3, mm6 */ g->mm[3] = n3d_pfcmpgt(g->mm[3], g->mm[6]); }
    { /* movd eax, mm3 */ eax = (uint32_t)((uint32_t)g->mm[3]); }
    if (eax & 1u)
    {
        { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
        { /* pxor mm0, qword ptr [edx] */ uint32_t A = arg7; g->mm[0] = mmx_pxor(g->mm[0], rd64(A)); }
        { /* pxor mm2, qword ptr [edx + 8] */ uint32_t A = arg7 + 8u; g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
        { /* movq qword ptr [esp + 0x30], mm0 */ uint32_t A = sp1 + 0x30u; wr64(A, g->mm[0]); }
        { /* movq qword ptr [esp + 0x38], mm2 */ uint32_t A = sp1 + 0x38u; wr64(A, g->mm[2]); }
        edx = arg7;
    }
    { /* movq mm0, qword ptr [esp + 0x10] */ uint32_t A = sp1 + 0x10u; g->mm[0] = rd64(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* movq mm2, qword ptr [esp + 0x18] */ uint32_t A = sp1 + 0x18u; g->mm[2] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* pfmul mm2, mm2 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[2]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfacc mm0, mm0 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[0]); }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* pfrcp mm4, mm0 */ g->mm[4] = n3d_pfrcp(g->mm[4], g->mm[0]); }
    { /* pfcmpgt mm5, qword ptr [0x103484f0] */ uint32_t A = COW_IMG(0x103484f0u); g->mm[5] = n3d_pfcmpgt(g->mm[5], rd64(A)); }
    { /* pxor mm1, qword ptr [0x10348550] */ uint32_t A = COW_IMG(0x10348550u); g->mm[1] = mmx_pxor(g->mm[1], rd64(A)); }
    { /* pxor mm3, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[3] = mmx_pxor(g->mm[3], rd64(A)); }
    { /* pfrcpit1 mm0, mm4 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[4]); }
    { /* pand mm1, mm5 */ g->mm[1] = mmx_pand(g->mm[1], g->mm[5]); }
    { /* pand mm3, mm5 */ g->mm[3] = mmx_pand(g->mm[3], g->mm[5]); }
    { /* pfrcpit2 mm0, mm4 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm0 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[0]); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [esp + 0x40], mm1 */ uint32_t A = sp1 + 0x40u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [esp + 0x48], mm3 */ uint32_t A = sp1 + 0x48u; wr64(A, g->mm[3]); }
    { /* movq mm2, qword ptr [esp] */ uint32_t A = sp1; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esp + 8] */ uint32_t A = sp1 + 8u; g->mm[3] = rd64(A); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* movq mm0, qword ptr [esp + 0x40] */ uint32_t A = sp1 + 0x40u; g->mm[0] = rd64(A); }
    { /* punpckhdq mm4, mm2 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[2]); }
    { /* punpckhdq mm5, mm3 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[3]); }
    { /* movq mm1, qword ptr [esp + 0x48] */ uint32_t A = sp1 + 0x48u; g->mm[1] = rd64(A); }
    { /* punpckldq mm4, mm2 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[2]); }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* movq mm6, mm4 */ g->mm[6] = g->mm[4]; }
    { /* movq mm7, mm5 */ g->mm[7] = g->mm[5]; }
    { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* pxor mm2, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
    { /* pfmul mm5, mm0 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[0]); }
    { /* pfmul mm4, mm1 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[1]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq mm3, qword ptr [esp] */ uint32_t A = sp1; g->mm[3] = rd64(A); }
    { /* pfsub mm4, mm5 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[5]); }
    { /* movq mm5, qword ptr [esp + 8] */ uint32_t A = sp1 + 8u; g->mm[5] = rd64(A); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pxor mm6, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[6] = mmx_pxor(g->mm[6], rd64(A)); }
    { /* pfacc mm4, mm2 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[2]); }
    { /* pfmul mm6, mm0 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[0]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [esp + 0x80], mm4 */ uint32_t A = sp1 + 0x80u; wr64(A, g->mm[4]); }
    { /* pfmul mm5, mm1 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[1]); }
    { /* pfadd mm6, mm7 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[7]); }
    { /* pfsub mm5, mm3 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[3]); }
    { /* pfacc mm6, mm5 */ g->mm[6] = n3d_pfacc(g->mm[6], g->mm[5]); }
    { /* movq qword ptr [esp + 0x88], mm6 */ uint32_t A = sp1 + 0x88u; wr64(A, g->mm[6]); }
    { /* movq mm2, qword ptr [esp + 0x20] */ uint32_t A = sp1 + 0x20u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esp + 0x28] */ uint32_t A = sp1 + 0x28u; g->mm[3] = rd64(A); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* movq mm0, qword ptr [esp + 0x40] */ uint32_t A = sp1 + 0x40u; g->mm[0] = rd64(A); }
    { /* punpckhdq mm4, mm2 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[2]); }
    { /* punpckhdq mm5, mm3 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[3]); }
    { /* movq mm1, qword ptr [esp + 0x48] */ uint32_t A = sp1 + 0x48u; g->mm[1] = rd64(A); }
    { /* punpckldq mm4, mm2 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[2]); }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* movq mm6, mm4 */ g->mm[6] = g->mm[4]; }
    { /* movq mm7, mm5 */ g->mm[7] = g->mm[5]; }
    { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* pxor mm2, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
    { /* pfmul mm5, mm0 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[0]); }
    { /* pfmul mm4, mm1 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[1]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq mm3, qword ptr [esp + 0x20] */ uint32_t A = sp1 + 0x20u; g->mm[3] = rd64(A); }
    { /* pfsub mm4, mm5 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[5]); }
    { /* movq mm5, qword ptr [esp + 0x28] */ uint32_t A = sp1 + 0x28u; g->mm[5] = rd64(A); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pxor mm6, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[6] = mmx_pxor(g->mm[6], rd64(A)); }
    { /* pfacc mm4, mm2 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[2]); }
    { /* pfmul mm6, mm0 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[0]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [esp + 0x90], mm4 */ uint32_t A = sp1 + 0x90u; wr64(A, g->mm[4]); }
    { /* pfmul mm5, mm1 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[1]); }
    { /* pfadd mm6, mm7 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[7]); }
    { /* pfsub mm5, mm3 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[3]); }
    { /* pfacc mm6, mm5 */ g->mm[6] = n3d_pfacc(g->mm[6], g->mm[5]); }
    { /* movq qword ptr [esp + 0x98], mm6 */ uint32_t A = sp1 + 0x98u; wr64(A, g->mm[6]); }
    { /* movq mm1, qword ptr [esp + 0x8c] */ uint32_t A = sp1 + 0x80u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esp + 0x94] */ uint32_t A = sp1 + 0x88u; g->mm[2] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
    { /* movq mm0, mm3 */ g->mm[0] = g->mm[3]; }
    { /* pfcmpge mm3, qword ptr [0x10348508] */ uint32_t A = COW_IMG(0x10348508u); g->mm[3] = n3d_pfcmpge(g->mm[3], rd64(A)); }
    ecx = arg7;
    { /* movd ecx, mm3 */ ecx = (uint32_t)((uint32_t)g->mm[3]); }
    if (ecx != 0u)
    {
        ebx = in_ebx;
    }
    else
    {
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0xcu;
        t1 = cow_stdcall(g, COW_IMG(0x1030a000u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        { /* movd dword ptr [esp], mm0 */ uint32_t A = sp1 - 0xcu; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
        wr32(sp1 - 8u, in_esi);
        wr32(sp1 - 4u, in_ebx);
        g->ecx = t2;
        cow_stdcall(g, COW_IMG(0x1030a700u), 0);
        t4 = g->ecx;
        { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
        t5 = rd32(sp1 + 4u);
        { /* pand mm3, qword ptr [0x103484c0] */ uint32_t A = COW_IMG(0x103484c0u); g->mm[3] = mmx_pand(g->mm[3], rd64(A)); }
        t6 = rd32(sp1 + 4u);
        { /* pfcmpge mm3, qword ptr [0x103484c8] */ uint32_t A = COW_IMG(0x103484c8u); g->mm[3] = n3d_pfcmpge(g->mm[3], rd64(A)); }
        ecx = t4;
        { /* movd ecx, mm3 */ ecx = (uint32_t)((uint32_t)g->mm[3]); }
        { /* movq mm1, qword ptr [esp + 0x8c] */ uint32_t A = sp1 + 0x80u; g->mm[1] = rd64(A); }
        { /* movq mm2, qword ptr [esp + 0x94] */ uint32_t A = sp1 + 0x88u; g->mm[2] = rd64(A); }
        if (ecx == 0u)
        {
            eax = t6;
            edx = t5;
            ebx = in_esi;
        }
        else
        {
            eax = t6;
            edx = t5;
            { /* movd mm3, dword ptr [esp] */ uint32_t A = sp1 - 0xcu; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
            { /* pfrcp mm4, mm0 */ g->mm[4] = n3d_pfrcp(g->mm[4], g->mm[0]); }
            { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
            { /* pfrcpit1 mm0, mm4 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[4]); }
            { /* pfrcpit2 mm0, mm4 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[4]); }
            { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
            { /* pfmul mm1, mm3 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[3]); }
            { /* pfmul mm2, mm3 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[3]); }
            ebx = in_esi;
        }
    }
    { /* pand mm2, qword ptr [0x103484d0] */ uint32_t A = COW_IMG(0x103484d0u); g->mm[2] = mmx_pand(g->mm[2], rd64(A)); }
    { /* movq qword ptr [esp + 0x5c], mm1 */ uint32_t A = sp1 + 0x50u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [esp + 0x64], mm2 */ uint32_t A = sp1 + 0x58u; wr64(A, g->mm[2]); }
    { /* movq mm1, qword ptr [esp + 0x9c] */ uint32_t A = sp1 + 0x90u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esp + 0xa4] */ uint32_t A = sp1 + 0x98u; g->mm[2] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
    { /* movq mm0, mm3 */ g->mm[0] = g->mm[3]; }
    { /* pfcmpge mm3, qword ptr [0x10348508] */ uint32_t A = COW_IMG(0x10348508u); g->mm[3] = n3d_pfcmpge(g->mm[3], rd64(A)); }
    { /* movd ecx, mm3 */ ecx = (uint32_t)((uint32_t)g->mm[3]); }
    if (ecx == 0u)
    {
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0xcu;
        t7 = cow_stdcall(g, COW_IMG(0x1030a000u), 0);
        t8 = g->ecx;
        t9 = g->edx;
        { /* movd dword ptr [esp], mm0 */ uint32_t A = sp1 - 0xcu; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
        wr32(sp1 - 8u, in_esi);
        wr32(sp1 - 4u, ebx);
        g->ebx = ebx;
        g->esi = in_esi;
        g->ecx = t8;
        cow_stdcall(g, COW_IMG(0x1030a700u), 0);
        t10 = g->ecx;
        { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
        t11 = rd32(sp1 + 4u);
        { /* pand mm3, qword ptr [0x103484c0] */ uint32_t A = COW_IMG(0x103484c0u); g->mm[3] = mmx_pand(g->mm[3], rd64(A)); }
        t12 = rd32(sp1 + 4u);
        { /* pfcmpge mm3, qword ptr [0x103484c8] */ uint32_t A = COW_IMG(0x103484c8u); g->mm[3] = n3d_pfcmpge(g->mm[3], rd64(A)); }
        ecx = t10;
        { /* movd ecx, mm3 */ ecx = (uint32_t)((uint32_t)g->mm[3]); }
        { /* movq mm1, qword ptr [esp + 0x9c] */ uint32_t A = sp1 + 0x90u; g->mm[1] = rd64(A); }
        { /* movq mm2, qword ptr [esp + 0xa4] */ uint32_t A = sp1 + 0x98u; g->mm[2] = rd64(A); }
        if (ecx == 0u)
        {
            eax = t12;
            edx = t11;
            ebx = in_esi;
        }
        else
        {
            eax = t12;
            edx = t11;
            { /* movd mm3, dword ptr [esp] */ uint32_t A = sp1 - 0xcu; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
            { /* pfrcp mm4, mm0 */ g->mm[4] = n3d_pfrcp(g->mm[4], g->mm[0]); }
            { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
            { /* pfrcpit1 mm0, mm4 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[4]); }
            { /* pfrcpit2 mm0, mm4 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[4]); }
            { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
            { /* pfmul mm1, mm3 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[3]); }
            { /* pfmul mm2, mm3 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[3]); }
            ebx = in_esi;
        }
    }
    { /* pand mm2, qword ptr [0x103484d0] */ uint32_t A = COW_IMG(0x103484d0u); g->mm[2] = mmx_pand(g->mm[2], rd64(A)); }
    { /* movq qword ptr [esp + 0x6c], mm1 */ uint32_t A = sp1 + 0x60u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [esp + 0x74], mm2 */ uint32_t A = sp1 + 0x68u; wr64(A, g->mm[2]); }
    { /* movq mm0, qword ptr [esp + 0x50] */ uint32_t A = sp1 + 0x50u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esp + 0x58] */ uint32_t A = sp1 + 0x58u; g->mm[1] = rd64(A); }
    { /* pfadd mm0, qword ptr [esp + 0x60] */ uint32_t A = sp1 + 0x60u; g->mm[0] = n3d_pfadd(g->mm[0], rd64(A)); }
    { /* pfadd mm1, qword ptr [esp + 0x68] */ uint32_t A = sp1 + 0x68u; g->mm[1] = n3d_pfadd(g->mm[1], rd64(A)); }
    { /* pfmul mm0, qword ptr [0x10349220] */ uint32_t A = COW_IMG(0x10349220u); g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pfmul mm1, qword ptr [0x10349220] */ uint32_t A = COW_IMG(0x10349220u); g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movq qword ptr [esp + 0x80], mm0 */ uint32_t A = sp1 + 0x80u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [esp + 0x88], mm1 */ uint32_t A = sp1 + 0x88u; wr64(A, g->mm[1]); }
    { /* movq mm7, qword ptr [0x103484c8] */ uint32_t A = COW_IMG(0x103484c8u); g->mm[7] = rd64(A); }
    { /* movq mm0, qword ptr [esp + 0x8c] */ uint32_t A = sp1 + 0x80u; g->mm[0] = rd64(A); }
    { /* movd mm1, dword ptr [esp + 0x94] */ uint32_t A = sp1 + 0x88u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm0 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[0]); }
    { /* pfrsqrt mm1, mm0 */ g->mm[1] = n3d_pfrsqrt(g->mm[1], g->mm[0]); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
    wr32(sp1 - 8u, in_esi);
    { /* pfrsqit1 mm1, mm0 */ g->mm[1] = n3d_pfrsqit1(g->mm[1], g->mm[0]); }
    wr32(sp1 - 4u, ebx);
    { /* pfrcpit2 mm1, mm2 */ g->mm[1] = n3d_pfrcpit2(g->mm[1], g->mm[2]); }
    { /* movd dword ptr [esp], mm1 */ uint32_t A = sp1 - 0xcu; wr32(A, (uint32_t)((uint32_t)g->mm[1])); }
    { /* pfmul mm0, mm1 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[1]); }
    g->ebx = ebx;
    g->esi = in_esi;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0xcu;
    cow_stdcall(g, COW_IMG(0x1030a5e0u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pand mm0, qword ptr [0x103484b8] */ uint32_t A = COW_IMG(0x103484b8u); g->mm[0] = mmx_pand(g->mm[0], rd64(A)); }
    { /* pfcmpge mm0, qword ptr [0x103484c8] */ uint32_t A = COW_IMG(0x103484c8u); g->mm[0] = n3d_pfcmpge(g->mm[0], rd64(A)); }
    { /* punpckhdq mm0, mm0 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[0]); }
    ecx = t13;
    { /* movd ecx, mm0 */ ecx = (uint32_t)((uint32_t)g->mm[0]); }
    { /* movq mm2, qword ptr [esp + 0x8c] */ uint32_t A = sp1 + 0x80u; g->mm[2] = rd64(A); }
    { /* movq mm0, mm1 */ g->mm[0] = g->mm[1]; }
    { /* punpckhdq mm1, mm1 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[1]); }
    { /* pfmul mm1, qword ptr [esp] */ uint32_t A = sp1 - 0xcu; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movd mm3, dword ptr [esp + 0x94] */ uint32_t A = sp1 + 0x88u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    if (!(ecx & 1u))
    {
        edx = t14;
    }
    else
    {
        edx = t14;
        { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
        { /* pfmul mm3, mm1 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[1]); }
        { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
    }
    { /* punpckldq mm3, mm0 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [esp + 0x7c], mm2 */ uint32_t A = sp1 + 0x70u; wr64(A, g->mm[2]); }
    { /* movq qword ptr [esp + 0x84], mm3 */ uint32_t A = sp1 + 0x78u; wr64(A, g->mm[3]); }
    t15 = rd32(sp1 - 4u);
    t16 = rd32(sp1 - 8u);
    { /* movq mm2, qword ptr [esp + 0x70] */ uint32_t A = sp1 + 0x70u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esp + 0x78] */ uint32_t A = sp1 + 0x78u; g->mm[3] = rd64(A); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* movq mm0, qword ptr [esp + 0x10] */ uint32_t A = sp1 + 0x10u; g->mm[0] = rd64(A); }
    { /* punpckhdq mm4, mm2 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[2]); }
    { /* punpckhdq mm5, mm3 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[3]); }
    { /* movq mm1, qword ptr [esp + 0x18] */ uint32_t A = sp1 + 0x18u; g->mm[1] = rd64(A); }
    { /* punpckldq mm4, mm2 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[2]); }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* movq mm6, mm4 */ g->mm[6] = g->mm[4]; }
    { /* movq mm7, mm5 */ g->mm[7] = g->mm[5]; }
    { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* pxor mm2, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
    { /* pfmul mm5, mm0 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[0]); }
    { /* pfmul mm4, mm1 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[1]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq mm3, qword ptr [esp + 0x70] */ uint32_t A = sp1 + 0x70u; g->mm[3] = rd64(A); }
    { /* pfsub mm4, mm5 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[5]); }
    { /* movq mm5, qword ptr [esp + 0x78] */ uint32_t A = sp1 + 0x78u; g->mm[5] = rd64(A); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pxor mm6, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[6] = mmx_pxor(g->mm[6], rd64(A)); }
    { /* pfacc mm4, mm2 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[2]); }
    { /* pfmul mm6, mm0 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[0]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [eax], mm4 */ uint32_t A = arg1; wr64(A, g->mm[4]); }
    { /* pfmul mm5, mm1 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[1]); }
    { /* pfadd mm6, mm7 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[7]); }
    { /* pfsub mm5, mm3 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[3]); }
    { /* pfacc mm6, mm5 */ g->mm[6] = n3d_pfacc(g->mm[6], g->mm[5]); }
    { /* movq qword ptr [eax + 8], mm6 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[6]); }
    { /* movq mm0, qword ptr [esp + 0x20] */ uint32_t A = sp1 + 0x20u; g->mm[0] = rd64(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* movq mm2, qword ptr [esp + 0x28] */ uint32_t A = sp1 + 0x28u; g->mm[2] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* pfmul mm2, mm2 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[2]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfacc mm0, mm0 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[0]); }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* pfrcp mm4, mm0 */ g->mm[4] = n3d_pfrcp(g->mm[4], g->mm[0]); }
    { /* pfcmpgt mm5, qword ptr [0x103484f0] */ uint32_t A = COW_IMG(0x103484f0u); g->mm[5] = n3d_pfcmpgt(g->mm[5], rd64(A)); }
    { /* pxor mm1, qword ptr [0x10348550] */ uint32_t A = COW_IMG(0x10348550u); g->mm[1] = mmx_pxor(g->mm[1], rd64(A)); }
    { /* pxor mm3, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[3] = mmx_pxor(g->mm[3], rd64(A)); }
    { /* pfrcpit1 mm0, mm4 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[4]); }
    { /* pand mm1, mm5 */ g->mm[1] = mmx_pand(g->mm[1], g->mm[5]); }
    { /* pand mm3, mm5 */ g->mm[3] = mmx_pand(g->mm[3], g->mm[5]); }
    { /* pfrcpit2 mm0, mm4 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm0 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[0]); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [esp + 0x40], mm1 */ uint32_t A = sp1 + 0x40u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [esp + 0x48], mm3 */ uint32_t A = sp1 + 0x48u; wr64(A, g->mm[3]); }
    { /* movq mm2, qword ptr [esp + 0x10] */ uint32_t A = sp1 + 0x10u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esp + 0x18] */ uint32_t A = sp1 + 0x18u; g->mm[3] = rd64(A); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* movq mm0, qword ptr [esp + 0x40] */ uint32_t A = sp1 + 0x40u; g->mm[0] = rd64(A); }
    { /* punpckhdq mm4, mm2 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[2]); }
    { /* punpckhdq mm5, mm3 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[3]); }
    { /* movq mm1, qword ptr [esp + 0x48] */ uint32_t A = sp1 + 0x48u; g->mm[1] = rd64(A); }
    { /* punpckldq mm4, mm2 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[2]); }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* movq mm6, mm4 */ g->mm[6] = g->mm[4]; }
    { /* movq mm7, mm5 */ g->mm[7] = g->mm[5]; }
    { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* pxor mm2, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
    { /* pfmul mm5, mm0 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[0]); }
    { /* pfmul mm4, mm1 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[1]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq mm3, qword ptr [esp + 0x10] */ uint32_t A = sp1 + 0x10u; g->mm[3] = rd64(A); }
    { /* pfsub mm4, mm5 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[5]); }
    { /* movq mm5, qword ptr [esp + 0x18] */ uint32_t A = sp1 + 0x18u; g->mm[5] = rd64(A); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pxor mm6, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[6] = mmx_pxor(g->mm[6], rd64(A)); }
    { /* pfacc mm4, mm2 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[2]); }
    { /* pfmul mm6, mm0 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[0]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [esp + 0x80], mm4 */ uint32_t A = sp1 + 0x80u; wr64(A, g->mm[4]); }
    { /* pfmul mm5, mm1 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[1]); }
    { /* pfadd mm6, mm7 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[7]); }
    { /* pfsub mm5, mm3 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[3]); }
    { /* pfacc mm6, mm5 */ g->mm[6] = n3d_pfacc(g->mm[6], g->mm[5]); }
    { /* movq qword ptr [esp + 0x88], mm6 */ uint32_t A = sp1 + 0x88u; wr64(A, g->mm[6]); }
    { /* movq mm2, qword ptr [esp + 0x30] */ uint32_t A = sp1 + 0x30u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esp + 0x38] */ uint32_t A = sp1 + 0x38u; g->mm[3] = rd64(A); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* movq mm0, qword ptr [esp + 0x40] */ uint32_t A = sp1 + 0x40u; g->mm[0] = rd64(A); }
    { /* punpckhdq mm4, mm2 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[2]); }
    { /* punpckhdq mm5, mm3 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[3]); }
    { /* movq mm1, qword ptr [esp + 0x48] */ uint32_t A = sp1 + 0x48u; g->mm[1] = rd64(A); }
    { /* punpckldq mm4, mm2 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[2]); }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* movq mm6, mm4 */ g->mm[6] = g->mm[4]; }
    { /* movq mm7, mm5 */ g->mm[7] = g->mm[5]; }
    { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* pxor mm2, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
    { /* pfmul mm5, mm0 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[0]); }
    { /* pfmul mm4, mm1 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[1]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq mm3, qword ptr [esp + 0x30] */ uint32_t A = sp1 + 0x30u; g->mm[3] = rd64(A); }
    { /* pfsub mm4, mm5 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[5]); }
    { /* movq mm5, qword ptr [esp + 0x38] */ uint32_t A = sp1 + 0x38u; g->mm[5] = rd64(A); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pxor mm6, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[6] = mmx_pxor(g->mm[6], rd64(A)); }
    { /* pfacc mm4, mm2 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[2]); }
    { /* pfmul mm6, mm0 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[0]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [esp + 0x90], mm4 */ uint32_t A = sp1 + 0x90u; wr64(A, g->mm[4]); }
    { /* pfmul mm5, mm1 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[1]); }
    { /* pfadd mm6, mm7 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[7]); }
    { /* pfsub mm5, mm3 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[3]); }
    { /* pfacc mm6, mm5 */ g->mm[6] = n3d_pfacc(g->mm[6], g->mm[5]); }
    { /* movq qword ptr [esp + 0x98], mm6 */ uint32_t A = sp1 + 0x98u; wr64(A, g->mm[6]); }
    { /* movq mm1, qword ptr [esp + 0x8c] */ uint32_t A = sp1 + 0x80u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esp + 0x94] */ uint32_t A = sp1 + 0x88u; g->mm[2] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
    { /* movq mm0, mm3 */ g->mm[0] = g->mm[3]; }
    { /* pfcmpge mm3, qword ptr [0x10348508] */ uint32_t A = COW_IMG(0x10348508u); g->mm[3] = n3d_pfcmpge(g->mm[3], rd64(A)); }
    { /* movd ecx, mm3 */ ecx = (uint32_t)((uint32_t)g->mm[3]); }
    if (ecx != 0u)
    {
        eax = arg1;
        ebx = t15;
        esi = t16;
    }
    else
    {
        ebx = t15;
        esi = t16;
        g->eax = arg1;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0xcu;
        t17 = cow_stdcall(g, COW_IMG(0x1030a000u), 0);
        t18 = g->ecx;
        t19 = g->edx;
        { /* movd dword ptr [esp], mm0 */ uint32_t A = sp1 - 0xcu; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
        wr32(sp1 - 8u, esi);
        wr32(sp1 - 4u, ebx);
        g->ebx = ebx;
        g->esi = esi;
        g->ecx = t18;
        cow_stdcall(g, COW_IMG(0x1030a700u), 0);
        t20 = g->ecx;
        { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
        t21 = rd32(sp1 + 4u);
        t22 = rd32(sp1 - 8u);
        { /* pand mm3, qword ptr [0x103484c0] */ uint32_t A = COW_IMG(0x103484c0u); g->mm[3] = mmx_pand(g->mm[3], rd64(A)); }
        t23 = rd32(sp1 + 4u);
        t24 = rd32(sp1 - 8u);
        { /* pfcmpge mm3, qword ptr [0x103484c8] */ uint32_t A = COW_IMG(0x103484c8u); g->mm[3] = n3d_pfcmpge(g->mm[3], rd64(A)); }
        ecx = t20;
        { /* movd ecx, mm3 */ ecx = (uint32_t)((uint32_t)g->mm[3]); }
        { /* movq mm1, qword ptr [esp + 0x8c] */ uint32_t A = sp1 + 0x80u; g->mm[1] = rd64(A); }
        { /* movq mm2, qword ptr [esp + 0x94] */ uint32_t A = sp1 + 0x88u; g->mm[2] = rd64(A); }
        if (ecx == 0u)
        {
            eax = t23;
            edx = t21;
            ebx = t24;
            esi = t22;
        }
        else
        {
            eax = t23;
            edx = t21;
            ebx = t24;
            esi = t22;
            { /* movd mm3, dword ptr [esp] */ uint32_t A = sp1 - 0xcu; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
            { /* pfrcp mm4, mm0 */ g->mm[4] = n3d_pfrcp(g->mm[4], g->mm[0]); }
            { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
            { /* pfrcpit1 mm0, mm4 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[4]); }
            { /* pfrcpit2 mm0, mm4 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[4]); }
            { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
            { /* pfmul mm1, mm3 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[3]); }
            { /* pfmul mm2, mm3 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[3]); }
        }
    }
    { /* pand mm2, qword ptr [0x103484d0] */ uint32_t A = COW_IMG(0x103484d0u); g->mm[2] = mmx_pand(g->mm[2], rd64(A)); }
    { /* movq qword ptr [esp + 0x5c], mm1 */ uint32_t A = sp1 + 0x50u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [esp + 0x64], mm2 */ uint32_t A = sp1 + 0x58u; wr64(A, g->mm[2]); }
    { /* movq mm1, qword ptr [esp + 0x9c] */ uint32_t A = sp1 + 0x90u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esp + 0xa4] */ uint32_t A = sp1 + 0x98u; g->mm[2] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* punpckhdq mm3, mm3 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[3]); }
    { /* movq mm0, mm3 */ g->mm[0] = g->mm[3]; }
    { /* pfcmpge mm3, qword ptr [0x10348508] */ uint32_t A = COW_IMG(0x10348508u); g->mm[3] = n3d_pfcmpge(g->mm[3], rd64(A)); }
    { /* movd ecx, mm3 */ ecx = (uint32_t)((uint32_t)g->mm[3]); }
    if (ecx == 0u)
    {
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0xcu;
        t25 = cow_stdcall(g, COW_IMG(0x1030a000u), 0);
        t26 = g->ecx;
        t27 = g->edx;
        { /* movd dword ptr [esp], mm0 */ uint32_t A = sp1 - 0xcu; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
        wr32(sp1 - 8u, esi);
        wr32(sp1 - 4u, ebx);
        g->ebx = ebx;
        g->esi = esi;
        g->ecx = t26;
        cow_stdcall(g, COW_IMG(0x1030a700u), 0);
        t28 = g->ecx;
        { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
        t29 = rd32(sp1 + 4u);
        t30 = rd32(sp1 - 8u);
        { /* pand mm3, qword ptr [0x103484c0] */ uint32_t A = COW_IMG(0x103484c0u); g->mm[3] = mmx_pand(g->mm[3], rd64(A)); }
        t31 = rd32(sp1 + 4u);
        t32 = rd32(sp1 - 8u);
        { /* pfcmpge mm3, qword ptr [0x103484c8] */ uint32_t A = COW_IMG(0x103484c8u); g->mm[3] = n3d_pfcmpge(g->mm[3], rd64(A)); }
        ecx = t28;
        { /* movd ecx, mm3 */ ecx = (uint32_t)((uint32_t)g->mm[3]); }
        { /* movq mm1, qword ptr [esp + 0x9c] */ uint32_t A = sp1 + 0x90u; g->mm[1] = rd64(A); }
        { /* movq mm2, qword ptr [esp + 0xa4] */ uint32_t A = sp1 + 0x98u; g->mm[2] = rd64(A); }
        if (ecx == 0u)
        {
            eax = t31;
            edx = t29;
            ebx = t32;
            esi = t30;
        }
        else
        {
            eax = t31;
            edx = t29;
            ebx = t32;
            esi = t30;
            { /* movd mm3, dword ptr [esp] */ uint32_t A = sp1 - 0xcu; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
            { /* pfrcp mm4, mm0 */ g->mm[4] = n3d_pfrcp(g->mm[4], g->mm[0]); }
            { /* punpckldq mm3, mm3 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[3]); }
            { /* pfrcpit1 mm0, mm4 */ g->mm[0] = n3d_pfrcpit1(g->mm[0], g->mm[4]); }
            { /* pfrcpit2 mm0, mm4 */ g->mm[0] = n3d_pfrcpit2(g->mm[0], g->mm[4]); }
            { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
            { /* pfmul mm1, mm3 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[3]); }
            { /* pfmul mm2, mm3 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[3]); }
        }
    }
    { /* pand mm2, qword ptr [0x103484d0] */ uint32_t A = COW_IMG(0x103484d0u); g->mm[2] = mmx_pand(g->mm[2], rd64(A)); }
    { /* movq qword ptr [esp + 0x6c], mm1 */ uint32_t A = sp1 + 0x60u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [esp + 0x74], mm2 */ uint32_t A = sp1 + 0x68u; wr64(A, g->mm[2]); }
    { /* movq mm0, qword ptr [esp + 0x50] */ uint32_t A = sp1 + 0x50u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esp + 0x58] */ uint32_t A = sp1 + 0x58u; g->mm[1] = rd64(A); }
    { /* pfadd mm0, qword ptr [esp + 0x60] */ uint32_t A = sp1 + 0x60u; g->mm[0] = n3d_pfadd(g->mm[0], rd64(A)); }
    { /* pfadd mm1, qword ptr [esp + 0x68] */ uint32_t A = sp1 + 0x68u; g->mm[1] = n3d_pfadd(g->mm[1], rd64(A)); }
    { /* pfmul mm0, qword ptr [0x10349220] */ uint32_t A = COW_IMG(0x10349220u); g->mm[0] = n3d_pfmul(g->mm[0], rd64(A)); }
    { /* pfmul mm1, qword ptr [0x10349220] */ uint32_t A = COW_IMG(0x10349220u); g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movq qword ptr [esp + 0x80], mm0 */ uint32_t A = sp1 + 0x80u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [esp + 0x88], mm1 */ uint32_t A = sp1 + 0x88u; wr64(A, g->mm[1]); }
    { /* movq mm0, qword ptr [esp + 0x8c] */ uint32_t A = sp1 + 0x80u; g->mm[0] = rd64(A); }
    { /* movd mm1, dword ptr [esp + 0x94] */ uint32_t A = sp1 + 0x88u; g->mm[1] = (uint64_t)(uint32_t)rd32(A); }
    { /* pfmul mm0, mm0 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[0]); }
    { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm0 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[0]); }
    { /* pfrsqrt mm1, mm0 */ g->mm[1] = n3d_pfrsqrt(g->mm[1], g->mm[0]); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* pfmul mm1, mm1 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[1]); }
    wr32(sp1 - 8u, esi);
    { /* pfrsqit1 mm1, mm0 */ g->mm[1] = n3d_pfrsqit1(g->mm[1], g->mm[0]); }
    wr32(sp1 - 4u, ebx);
    { /* pfrcpit2 mm1, mm2 */ g->mm[1] = n3d_pfrcpit2(g->mm[1], g->mm[2]); }
    { /* movd dword ptr [esp], mm1 */ uint32_t A = sp1 - 0xcu; wr32(A, (uint32_t)((uint32_t)g->mm[1])); }
    { /* pfmul mm0, mm1 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[1]); }
    g->ebx = ebx;
    g->esi = esi;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0xcu;
    cow_stdcall(g, COW_IMG(0x1030a5e0u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* pand mm0, qword ptr [0x103484b8] */ uint32_t A = COW_IMG(0x103484b8u); g->mm[0] = mmx_pand(g->mm[0], rd64(A)); }
    { /* pfcmpge mm0, qword ptr [0x103484c8] */ uint32_t A = COW_IMG(0x103484c8u); g->mm[0] = n3d_pfcmpge(g->mm[0], rd64(A)); }
    { /* punpckhdq mm0, mm0 */ g->mm[0] = mmx_punpckhdq(g->mm[0], g->mm[0]); }
    ecx = t33;
    { /* movd ecx, mm0 */ ecx = (uint32_t)((uint32_t)g->mm[0]); }
    { /* movq mm2, qword ptr [esp + 0x8c] */ uint32_t A = sp1 + 0x80u; g->mm[2] = rd64(A); }
    { /* movq mm0, mm1 */ g->mm[0] = g->mm[1]; }
    { /* punpckhdq mm1, mm1 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[1]); }
    { /* pfmul mm1, qword ptr [esp] */ uint32_t A = sp1 - 0xcu; g->mm[1] = n3d_pfmul(g->mm[1], rd64(A)); }
    { /* movd mm3, dword ptr [esp + 0x94] */ uint32_t A = sp1 + 0x88u; g->mm[3] = (uint64_t)(uint32_t)rd32(A); }
    if (!(ecx & 1u))
    {
        edx = t34;
    }
    else
    {
        edx = t34;
        { /* punpckldq mm1, mm1 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[1]); }
        { /* pfmul mm3, mm1 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[1]); }
        { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
    }
    { /* punpckldq mm3, mm0 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [esp + 0x7c], mm2 */ uint32_t A = sp1 + 0x70u; wr64(A, g->mm[2]); }
    { /* movq qword ptr [esp + 0x84], mm3 */ uint32_t A = sp1 + 0x78u; wr64(A, g->mm[3]); }
    t35 = rd32(sp1 - 4u);
    t36 = rd32(sp1 - 8u);
    { /* movq mm2, qword ptr [esp + 0x70] */ uint32_t A = sp1 + 0x70u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esp + 0x78] */ uint32_t A = sp1 + 0x78u; g->mm[3] = rd64(A); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* movq mm0, qword ptr [esp + 0x20] */ uint32_t A = sp1 + 0x20u; g->mm[0] = rd64(A); }
    { /* punpckhdq mm4, mm2 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[2]); }
    { /* punpckhdq mm5, mm3 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[3]); }
    { /* movq mm1, qword ptr [esp + 0x28] */ uint32_t A = sp1 + 0x28u; g->mm[1] = rd64(A); }
    { /* punpckldq mm4, mm2 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[2]); }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* movq mm6, mm4 */ g->mm[6] = g->mm[4]; }
    { /* movq mm7, mm5 */ g->mm[7] = g->mm[5]; }
    { /* pfmul mm2, mm1 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[1]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* pxor mm2, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
    { /* pfmul mm5, mm0 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[0]); }
    { /* pfmul mm4, mm1 */ g->mm[4] = n3d_pfmul(g->mm[4], g->mm[1]); }
    { /* pfadd mm2, mm3 */ g->mm[2] = n3d_pfadd(g->mm[2], g->mm[3]); }
    { /* movq mm3, qword ptr [esp + 0x70] */ uint32_t A = sp1 + 0x70u; g->mm[3] = rd64(A); }
    { /* pfsub mm4, mm5 */ g->mm[4] = n3d_pfsub(g->mm[4], g->mm[5]); }
    { /* movq mm5, qword ptr [esp + 0x78] */ uint32_t A = sp1 + 0x78u; g->mm[5] = rd64(A); }
    { /* pfmul mm7, mm1 */ g->mm[7] = n3d_pfmul(g->mm[7], g->mm[1]); }
    { /* pxor mm6, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[6] = mmx_pxor(g->mm[6], rd64(A)); }
    { /* pfacc mm4, mm2 */ g->mm[4] = n3d_pfacc(g->mm[4], g->mm[2]); }
    { /* pfmul mm6, mm0 */ g->mm[6] = n3d_pfmul(g->mm[6], g->mm[0]); }
    { /* pxor mm5, qword ptr [0x10348498] */ uint32_t A = COW_IMG(0x10348498u); g->mm[5] = mmx_pxor(g->mm[5], rd64(A)); }
    { /* pfmul mm3, mm0 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [eax], mm4 */ uint32_t A = arg2; wr64(A, g->mm[4]); }
    { /* pfmul mm5, mm1 */ g->mm[5] = n3d_pfmul(g->mm[5], g->mm[1]); }
    { /* pfadd mm6, mm7 */ g->mm[6] = n3d_pfadd(g->mm[6], g->mm[7]); }
    { /* pfsub mm5, mm3 */ g->mm[5] = n3d_pfsub(g->mm[5], g->mm[3]); }
    { /* pfacc mm6, mm5 */ g->mm[6] = n3d_pfacc(g->mm[6], g->mm[5]); }
    { /* movq qword ptr [eax + 8], mm6 */ uint32_t A = arg2 + 8u; wr64(A, g->mm[6]); }
    { /* movq mm0, qword ptr [esp + 0x20] */ uint32_t A = sp1 + 0x20u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esp + 0x28] */ uint32_t A = sp1 + 0x28u; g->mm[1] = rd64(A); }
    { /* movq qword ptr [eax], mm0 */ uint32_t A = arg3; wr64(A, g->mm[0]); }
    { /* movq qword ptr [eax + 8], mm1 */ uint32_t A = arg3 + 8u; wr64(A, g->mm[1]); }
    t37 = rd32(sp0 - 4u);
    { /* femms  */  }
    g->ebx = t35;
    g->esi = t36;
    g->ebp = t37;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fc7b3(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fc7b3(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
