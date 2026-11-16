/* f_0x1030ceea - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1030ceea(Guest* g)
{
    uint32_t eax;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    { /* movq mm0, qword ptr [ebx + 0x60] */ uint32_t A = arg1 + 0x60u; g->mm[0] = rd64(A); }
    { /* pmullw mm0, qword ptr [edi + 0x60] */ uint32_t A = arg3 + 0x60u; g->mm[0] = mmx_pmullw(g->mm[0], rd64(A)); }
    { /* movq mm1, qword ptr [ebx + 0x20] */ uint32_t A = arg1 + 0x20u; g->mm[1] = rd64(A); }
    { /* pmullw mm1, qword ptr [edi + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[1] = mmx_pmullw(g->mm[1], rd64(A)); }
    { /* movq mm3, qword ptr [ebx] */ uint32_t A = arg1; g->mm[3] = rd64(A); }
    { /* pmullw mm3, qword ptr [edi] */ uint32_t A = arg3; g->mm[3] = mmx_pmullw(g->mm[3], rd64(A)); }
    { /* movq mm5, qword ptr [ebx + 0x40] */ uint32_t A = arg1 + 0x40u; g->mm[5] = rd64(A); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* pmullw mm5, qword ptr [edi + 0x40] */ uint32_t A = arg3 + 0x40u; g->mm[5] = mmx_pmullw(g->mm[5], rd64(A)); }
    { /* psubw mm1, mm0 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[0]); }
    { /* movq mm7, qword ptr [0x10349ad8] */ uint32_t A = COW_IMG(0x10349ad8u); g->mm[7] = rd64(A); }
    { /* movq mm6, mm1 */ g->mm[6] = g->mm[1]; }
    { /* punpcklwd mm1, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[1] = mmx_punpcklwd(g->mm[1], (uint64_t)rd32(A)); }
    { /* paddw mm2, mm0 */ g->mm[2] = mmx_paddw(g->mm[2], g->mm[0]); }
    { /* pmaddwd mm1, mm7 */ g->mm[1] = mmx_pmaddwd(g->mm[1], g->mm[7]); }
    { /* movq mm0, mm2 */ g->mm[0] = g->mm[2]; }
    { /* punpckhwd mm6, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[6] = mmx_punpckhwd(g->mm[6], rd64(A)); }
    { /* movq mm4, mm3 */ g->mm[4] = g->mm[3]; }
    { /* pmaddwd mm6, mm7 */ g->mm[6] = mmx_pmaddwd(g->mm[6], g->mm[7]); }
    { /* paddw mm3, mm5 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[5]); }
    { /* psrad mm1, 8 */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0x8u); }
    { /* psubw mm4, mm5 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[5]); }
    { /* psrad mm6, 8 */ g->mm[6] = mmx_psrad(g->mm[6], (uint64_t)0x8u); }
    { /* packssdw mm1, mm6 */ g->mm[1] = mmx_packssdw(g->mm[1], g->mm[6]); }
    { /* movq mm6, mm3 */ g->mm[6] = g->mm[3]; }
    { /* psubw mm1, mm0 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[0]); }
    { /* paddw mm3, mm2 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[2]); }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* paddw mm1, mm4 */ g->mm[1] = mmx_paddw(g->mm[1], g->mm[4]); }
    { /* movq qword ptr [esi + 0x20], mm3 */ uint32_t A = arg2 + 0x20u; wr64(A, g->mm[3]); }
    { /* psubw mm4, mm5 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[5]); }
    { /* movq qword ptr [esi + 0x60], mm1 */ uint32_t A = arg2 + 0x60u; wr64(A, g->mm[1]); }
    { /* psubw mm6, mm2 */ g->mm[6] = mmx_psubw(g->mm[6], g->mm[2]); }
    { /* movq qword ptr [esi], mm4 */ uint32_t A = arg2; wr64(A, g->mm[4]); }
    { /* movq mm7, qword ptr [ebx + 0x50] */ uint32_t A = arg1 + 0x50u; g->mm[7] = rd64(A); }
    { /* pmullw mm7, qword ptr [edi + 0x50] */ uint32_t A = arg3 + 0x50u; g->mm[7] = mmx_pmullw(g->mm[7], rd64(A)); }
    { /* movq mm0, qword ptr [ebx + 0x30] */ uint32_t A = arg1 + 0x30u; g->mm[0] = rd64(A); }
    { /* pmullw mm0, qword ptr [edi + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[0] = mmx_pmullw(g->mm[0], rd64(A)); }
    { /* movq mm3, mm7 */ g->mm[3] = g->mm[7]; }
    { /* movq mm5, qword ptr [ebx + 0x10] */ uint32_t A = arg1 + 0x10u; g->mm[5] = rd64(A); }
    { /* pmullw mm5, qword ptr [edi + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[5] = mmx_pmullw(g->mm[5], rd64(A)); }
    { /* psubw mm7, mm0 */ g->mm[7] = mmx_psubw(g->mm[7], g->mm[0]); }
    { /* movq mm4, qword ptr [ebx + 0x70] */ uint32_t A = arg1 + 0x70u; g->mm[4] = rd64(A); }
    { /* pmullw mm4, qword ptr [edi + 0x70] */ uint32_t A = arg3 + 0x70u; g->mm[4] = mmx_pmullw(g->mm[4], rd64(A)); }
    { /* paddw mm3, mm0 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[0]); }
    { /* movq mm1, qword ptr [0x10349ae0] */ uint32_t A = COW_IMG(0x10349ae0u); g->mm[1] = rd64(A); }
    { /* movq qword ptr [esp + 0x1c], mm7 */ uint32_t A = sp0 - 8u; wr64(A, g->mm[7]); }
    { /* movq mm2, mm7 */ g->mm[2] = g->mm[7]; }
    { /* punpcklwd mm7, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[7] = mmx_punpcklwd(g->mm[7], (uint64_t)rd32(A)); }
    { /* movq mm0, mm5 */ g->mm[0] = g->mm[5]; }
    { /* pmaddwd mm7, mm1 */ g->mm[7] = mmx_pmaddwd(g->mm[7], g->mm[1]); }
    { /* paddw mm5, mm4 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[4]); }
    { /* punpckhwd mm2, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[2] = mmx_punpckhwd(g->mm[2], rd64(A)); }
    { /* psubw mm0, mm4 */ g->mm[0] = mmx_psubw(g->mm[0], g->mm[4]); }
    { /* pmaddwd mm2, mm1 */ g->mm[2] = mmx_pmaddwd(g->mm[2], g->mm[1]); }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* punpcklwd mm0, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[0] = mmx_punpcklwd(g->mm[0], (uint64_t)rd32(A)); }
    { /* psrad mm7, 8 */ g->mm[7] = mmx_psrad(g->mm[7], (uint64_t)0x8u); }
    { /* psrad mm2, 8 */ g->mm[2] = mmx_psrad(g->mm[2], (uint64_t)0x8u); }
    { /* movq mm1, mm4 */ g->mm[1] = g->mm[4]; }
    { /* punpckhwd mm4, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[4] = mmx_punpckhwd(g->mm[4], rd64(A)); }
    { /* packssdw mm7, mm2 */ g->mm[7] = mmx_packssdw(g->mm[7], g->mm[2]); }
    { /* movq mm2, qword ptr [0x10349ae8] */ uint32_t A = COW_IMG(0x10349ae8u); g->mm[2] = rd64(A); }
    { /* pmaddwd mm0, mm2 */ g->mm[0] = mmx_pmaddwd(g->mm[0], g->mm[2]); }
    { /* pmaddwd mm4, mm2 */ g->mm[4] = mmx_pmaddwd(g->mm[4], g->mm[2]); }
    { /* psrad mm0, 8 */ g->mm[0] = mmx_psrad(g->mm[0], (uint64_t)0x8u); }
    { /* movq mm2, qword ptr [0x10349af0] */ uint32_t A = COW_IMG(0x10349af0u); g->mm[2] = rd64(A); }
    { /* psrad mm4, 8 */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0x8u); }
    { /* packssdw mm0, mm4 */ g->mm[0] = mmx_packssdw(g->mm[0], g->mm[4]); }
    { /* movq mm4, mm1 */ g->mm[4] = g->mm[1]; }
    { /* movq mm1, qword ptr [esp + 0x1c] */ uint32_t A = sp0 - 8u; g->mm[1] = rd64(A); }
    { /* movq qword ptr [esp + 0x14], mm0 */ uint32_t A = sp0 - 0x10u; wr64(A, g->mm[0]); }
    { /* paddw mm1, mm4 */ g->mm[1] = mmx_paddw(g->mm[1], g->mm[4]); }
    { /* movq mm0, mm1 */ g->mm[0] = g->mm[1]; }
    { /* punpcklwd mm1, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[1] = mmx_punpcklwd(g->mm[1], (uint64_t)rd32(A)); }
    { /* movq mm4, mm5 */ g->mm[4] = g->mm[5]; }
    { /* pmaddwd mm1, mm2 */ g->mm[1] = mmx_pmaddwd(g->mm[1], g->mm[2]); }
    { /* paddw mm5, mm3 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[3]); }
    { /* punpckhwd mm0, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[0] = mmx_punpckhwd(g->mm[0], rd64(A)); }
    { /* psubw mm4, mm3 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[3]); }
    { /* movq mm3, qword ptr [0x10349ad8] */ uint32_t A = COW_IMG(0x10349ad8u); g->mm[3] = rd64(A); }
    { /* pmaddwd mm0, mm2 */ g->mm[0] = mmx_pmaddwd(g->mm[0], g->mm[2]); }
    { /* psrad mm1, 8 */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0x8u); }
    { /* movq mm2, mm4 */ g->mm[2] = g->mm[4]; }
    { /* punpcklwd mm4, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[4] = mmx_punpcklwd(g->mm[4], (uint64_t)rd32(A)); }
    { /* psrad mm0, 8 */ g->mm[0] = mmx_psrad(g->mm[0], (uint64_t)0x8u); }
    { /* pmaddwd mm4, mm3 */ g->mm[4] = mmx_pmaddwd(g->mm[4], g->mm[3]); }
    { /* packssdw mm1, mm0 */ g->mm[1] = mmx_packssdw(g->mm[1], g->mm[0]); }
    { /* punpckhwd mm2, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[2] = mmx_punpckhwd(g->mm[2], rd64(A)); }
    { /* movq mm0, qword ptr [esp + 0x14] */ uint32_t A = sp0 - 0x10u; g->mm[0] = rd64(A); }
    { /* pmaddwd mm2, mm3 */ g->mm[2] = mmx_pmaddwd(g->mm[2], g->mm[3]); }
    { /* psubw mm0, mm1 */ g->mm[0] = mmx_psubw(g->mm[0], g->mm[1]); }
    { /* paddw mm1, mm7 */ g->mm[1] = mmx_paddw(g->mm[1], g->mm[7]); }
    { /* movq mm7, qword ptr [esi + 0x20] */ uint32_t A = arg2 + 0x20u; g->mm[7] = rd64(A); }
    { /* psrad mm4, 8 */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0x8u); }
    { /* psrad mm2, 8 */ g->mm[2] = mmx_psrad(g->mm[2], (uint64_t)0x8u); }
    { /* movq mm3, mm6 */ g->mm[3] = g->mm[6]; }
    { /* packssdw mm4, mm2 */ g->mm[4] = mmx_packssdw(g->mm[4], g->mm[2]); }
    { /* psubw mm1, mm5 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[5]); }
    { /* movq mm2, qword ptr [esi + 0x60] */ uint32_t A = arg2 + 0x60u; g->mm[2] = rd64(A); }
    { /* psubw mm4, mm1 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[1]); }
    { /* paddw mm0, mm4 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[4]); }
    { /* psubw mm6, mm0 */ g->mm[6] = mmx_psubw(g->mm[6], g->mm[0]); }
    { /* paddw mm3, mm0 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[0]); }
    { /* movq mm0, mm1 */ g->mm[0] = g->mm[1]; }
    { /* movq mm1, mm7 */ g->mm[1] = g->mm[7]; }
    { /* movq qword ptr [esi + 0x40], mm3 */ uint32_t A = arg2 + 0x40u; wr64(A, g->mm[3]); }
    { /* paddw mm7, mm5 */ g->mm[7] = mmx_paddw(g->mm[7], g->mm[5]); }
    { /* movq qword ptr [esi + 0x30], mm6 */ uint32_t A = arg2 + 0x30u; wr64(A, g->mm[6]); }
    { /* psubw mm1, mm5 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[5]); }
    { /* movq mm6, qword ptr [esi] */ uint32_t A = arg2; g->mm[6] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* movq qword ptr [esi], mm7 */ uint32_t A = arg2; wr64(A, g->mm[7]); }
    { /* paddw mm2, mm0 */ g->mm[2] = mmx_paddw(g->mm[2], g->mm[0]); }
    { /* movq qword ptr [esi + 0x70], mm1 */ uint32_t A = arg2 + 0x70u; wr64(A, g->mm[1]); }
    { /* psubw mm3, mm0 */ g->mm[3] = mmx_psubw(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [esi + 0x10], mm2 */ uint32_t A = arg2 + 0x10u; wr64(A, g->mm[2]); }
    { /* movq mm0, mm6 */ g->mm[0] = g->mm[6]; }
    { /* movq qword ptr [esi + 0x60], mm3 */ uint32_t A = arg2 + 0x60u; wr64(A, g->mm[3]); }
    { /* paddw mm6, mm4 */ g->mm[6] = mmx_paddw(g->mm[6], g->mm[4]); }
    { /* movq mm1, qword ptr [ebx + 0x28] */ uint32_t A = arg1 + 0x28u; g->mm[1] = rd64(A); }
    { /* psubw mm0, mm4 */ g->mm[0] = mmx_psubw(g->mm[0], g->mm[4]); }
    { /* pmullw mm1, qword ptr [edi + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[1] = mmx_pmullw(g->mm[1], rd64(A)); }
    { /* movq qword ptr [esi + 0x20], mm6 */ uint32_t A = arg2 + 0x20u; wr64(A, g->mm[6]); }
    { /* movq qword ptr [esi + 0x50], mm0 */ uint32_t A = arg2 + 0x50u; wr64(A, g->mm[0]); }
    { /* movq mm7, qword ptr [ebx + 0x68] */ uint32_t A = arg1 + 0x68u; g->mm[7] = rd64(A); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* pmullw mm7, qword ptr [edi + 0x68] */ uint32_t A = arg3 + 0x68u; g->mm[7] = mmx_pmullw(g->mm[7], rd64(A)); }
    { /* movq mm3, qword ptr [ebx + 8] */ uint32_t A = arg1 + 8u; g->mm[3] = rd64(A); }
    { /* pmullw mm3, qword ptr [edi + 8] */ uint32_t A = arg3 + 8u; g->mm[3] = mmx_pmullw(g->mm[3], rd64(A)); }
    { /* movq mm5, qword ptr [ebx + 0x48] */ uint32_t A = arg1 + 0x48u; g->mm[5] = rd64(A); }
    { /* psubw mm1, mm7 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[7]); }
    { /* pmullw mm5, qword ptr [edi + 0x48] */ uint32_t A = arg3 + 0x48u; g->mm[5] = mmx_pmullw(g->mm[5], rd64(A)); }
    { /* paddw mm2, mm7 */ g->mm[2] = mmx_paddw(g->mm[2], g->mm[7]); }
    { /* movq mm7, qword ptr [0x10349ad8] */ uint32_t A = COW_IMG(0x10349ad8u); g->mm[7] = rd64(A); }
    { /* movq mm4, mm1 */ g->mm[4] = g->mm[1]; }
    { /* punpcklwd mm1, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[1] = mmx_punpcklwd(g->mm[1], (uint64_t)rd32(A)); }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* pmaddwd mm1, mm7 */ g->mm[1] = mmx_pmaddwd(g->mm[1], g->mm[7]); }
    { /* punpckhwd mm4, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[4] = mmx_punpckhwd(g->mm[4], rd64(A)); }
    { /* movq mm0, qword ptr [ebx + 0x58] */ uint32_t A = arg1 + 0x58u; g->mm[0] = rd64(A); }
    { /* pmaddwd mm4, mm7 */ g->mm[4] = mmx_pmaddwd(g->mm[4], g->mm[7]); }
    { /* pmullw mm0, qword ptr [edi + 0x58] */ uint32_t A = arg3 + 0x58u; g->mm[0] = mmx_pmullw(g->mm[0], rd64(A)); }
    { /* psrad mm1, 8 */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0x8u); }
    { /* psrad mm4, 8 */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0x8u); }
    { /* packssdw mm1, mm4 */ g->mm[1] = mmx_packssdw(g->mm[1], g->mm[4]); }
    { /* movq mm4, mm3 */ g->mm[4] = g->mm[3]; }
    { /* paddw mm3, mm5 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[5]); }
    { /* psubw mm4, mm5 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[5]); }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* psubw mm1, mm6 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[6]); }
    { /* movq mm6, qword ptr [ebx + 0x38] */ uint32_t A = arg1 + 0x38u; g->mm[6] = rd64(A); }
    { /* paddw mm3, mm2 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[2]); }
    { /* movq mm5, mm4 */ g->mm[5] = g->mm[4]; }
    { /* paddw mm4, mm1 */ g->mm[4] = mmx_paddw(g->mm[4], g->mm[1]); }
    { /* movq qword ptr [esi + 0x28], mm3 */ uint32_t A = arg2 + 0x28u; wr64(A, g->mm[3]); }
    { /* psubw mm5, mm1 */ g->mm[5] = mmx_psubw(g->mm[5], g->mm[1]); }
    { /* pmullw mm6, qword ptr [edi + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[6] = mmx_pmullw(g->mm[6], rd64(A)); }
    { /* psubw mm7, mm2 */ g->mm[7] = mmx_psubw(g->mm[7], g->mm[2]); }
    { /* movq qword ptr [esi + 0x68], mm4 */ uint32_t A = arg2 + 0x68u; wr64(A, g->mm[4]); }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* movq qword ptr [esi + 0x48], mm5 */ uint32_t A = arg2 + 0x48u; wr64(A, g->mm[5]); }
    { /* paddw mm0, mm6 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[6]); }
    { /* movq mm4, qword ptr [ebx + 0x78] */ uint32_t A = arg1 + 0x78u; g->mm[4] = rd64(A); }
    { /* psubw mm3, mm6 */ g->mm[3] = mmx_psubw(g->mm[3], g->mm[6]); }
    { /* pmullw mm4, qword ptr [edi + 0x78] */ uint32_t A = arg3 + 0x78u; g->mm[4] = mmx_pmullw(g->mm[4], rd64(A)); }
    { /* movq mm1, mm3 */ g->mm[1] = g->mm[3]; }
    { /* movq mm5, qword ptr [ebx + 0x18] */ uint32_t A = arg1 + 0x18u; g->mm[5] = rd64(A); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* pmullw mm5, qword ptr [edi + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[5] = mmx_pmullw(g->mm[5], rd64(A)); }
    { /* movq qword ptr [esp + 0x1c], mm7 */ uint32_t A = sp0 - 8u; wr64(A, g->mm[7]); }
    { /* movq mm6, mm5 */ g->mm[6] = g->mm[5]; }
    { /* movq mm7, qword ptr [0x10349ae0] */ uint32_t A = COW_IMG(0x10349ae0u); g->mm[7] = rd64(A); }
    { /* paddw mm5, mm4 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[4]); }
    { /* punpcklwd mm1, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[1] = mmx_punpcklwd(g->mm[1], (uint64_t)rd32(A)); }
    { /* psubw mm6, mm4 */ g->mm[6] = mmx_psubw(g->mm[6], g->mm[4]); }
    { /* pmaddwd mm1, mm7 */ g->mm[1] = mmx_pmaddwd(g->mm[1], g->mm[7]); }
    { /* movq mm4, mm5 */ g->mm[4] = g->mm[5]; }
    { /* punpckhwd mm2, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[2] = mmx_punpckhwd(g->mm[2], rd64(A)); }
    { /* paddw mm5, mm0 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[0]); }
    { /* pmaddwd mm2, mm7 */ g->mm[2] = mmx_pmaddwd(g->mm[2], g->mm[7]); }
    { /* psubw mm4, mm0 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[0]); }
    { /* movq qword ptr [esp + 0xc], mm3 */ uint32_t A = sp0 - 0x18u; wr64(A, g->mm[3]); }
    { /* psrad mm1, 8 */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0x8u); }
    { /* movq mm3, qword ptr [0x10349ad8] */ uint32_t A = COW_IMG(0x10349ad8u); g->mm[3] = rd64(A); }
    { /* psrad mm2, 8 */ g->mm[2] = mmx_psrad(g->mm[2], (uint64_t)0x8u); }
    { /* packssdw mm1, mm2 */ g->mm[1] = mmx_packssdw(g->mm[1], g->mm[2]); }
    { /* movq mm2, mm4 */ g->mm[2] = g->mm[4]; }
    { /* punpcklwd mm4, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[4] = mmx_punpcklwd(g->mm[4], (uint64_t)rd32(A)); }
    { /* pmaddwd mm4, mm3 */ g->mm[4] = mmx_pmaddwd(g->mm[4], g->mm[3]); }
    { /* punpckhwd mm2, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[2] = mmx_punpckhwd(g->mm[2], rd64(A)); }
    { /* pmaddwd mm2, mm3 */ g->mm[2] = mmx_pmaddwd(g->mm[2], g->mm[3]); }
    { /* psrad mm4, 8 */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0x8u); }
    { /* movq mm3, qword ptr [esp + 0xc] */ uint32_t A = sp0 - 0x18u; g->mm[3] = rd64(A); }
    { /* movq mm0, qword ptr [0x10349af0] */ uint32_t A = COW_IMG(0x10349af0u); g->mm[0] = rd64(A); }
    { /* paddw mm3, mm6 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[6]); }
    { /* psrad mm2, 8 */ g->mm[2] = mmx_psrad(g->mm[2], (uint64_t)0x8u); }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* packssdw mm4, mm2 */ g->mm[4] = mmx_packssdw(g->mm[4], g->mm[2]); }
    { /* movq mm2, mm5 */ g->mm[2] = g->mm[5]; }
    { /* punpcklwd mm3, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[3] = mmx_punpcklwd(g->mm[3], (uint64_t)rd32(A)); }
    { /* pmaddwd mm3, mm0 */ g->mm[3] = mmx_pmaddwd(g->mm[3], g->mm[0]); }
    { /* punpckhwd mm7, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[7] = mmx_punpckhwd(g->mm[7], rd64(A)); }
    { /* pmaddwd mm7, mm0 */ g->mm[7] = mmx_pmaddwd(g->mm[7], g->mm[0]); }
    { /* movq mm0, mm6 */ g->mm[0] = g->mm[6]; }
    { /* psrad mm3, 8 */ g->mm[3] = mmx_psrad(g->mm[3], (uint64_t)0x8u); }
    { /* punpcklwd mm6, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[6] = mmx_punpcklwd(g->mm[6], (uint64_t)rd32(A)); }
    { /* psrad mm7, 8 */ g->mm[7] = mmx_psrad(g->mm[7], (uint64_t)0x8u); }
    { /* packssdw mm3, mm7 */ g->mm[3] = mmx_packssdw(g->mm[3], g->mm[7]); }
    { /* movq mm7, qword ptr [0x10349ae8] */ uint32_t A = COW_IMG(0x10349ae8u); g->mm[7] = rd64(A); }
    { /* punpckhwd mm0, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[0] = mmx_punpckhwd(g->mm[0], rd64(A)); }
    { /* pmaddwd mm6, mm7 */ g->mm[6] = mmx_pmaddwd(g->mm[6], g->mm[7]); }
    { /* pmaddwd mm0, mm7 */ g->mm[0] = mmx_pmaddwd(g->mm[0], g->mm[7]); }
    { /* psrad mm6, 8 */ g->mm[6] = mmx_psrad(g->mm[6], (uint64_t)0x8u); }
    { /* psrad mm0, 8 */ g->mm[0] = mmx_psrad(g->mm[0], (uint64_t)0x8u); }
    { /* packssdw mm6, mm0 */ g->mm[6] = mmx_packssdw(g->mm[6], g->mm[0]); }
    { /* movq mm0, qword ptr [esi + 0x28] */ uint32_t A = arg2 + 0x28u; g->mm[0] = rd64(A); }
    { /* psubw mm6, mm3 */ g->mm[6] = mmx_psubw(g->mm[6], g->mm[3]); }
    { /* paddw mm3, mm1 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[1]); }
    { /* psubw mm3, mm2 */ g->mm[3] = mmx_psubw(g->mm[3], g->mm[2]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* psubw mm4, mm3 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[3]); }
    { /* paddw mm0, mm5 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[5]); }
    { /* movq mm2, qword ptr [esi + 0x68] */ uint32_t A = arg2 + 0x68u; g->mm[2] = rd64(A); }
    { /* paddw mm6, mm4 */ g->mm[6] = mmx_paddw(g->mm[6], g->mm[4]); }
    { /* movq mm7, qword ptr [esp + 0x1c] */ uint32_t A = sp0 - 8u; g->mm[7] = rd64(A); }
    { /* psubw mm1, mm5 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[5]); }
    { /* movq qword ptr [esi + 8], mm0 */ uint32_t A = arg2 + 8u; wr64(A, g->mm[0]); }
    { /* movq mm5, mm7 */ g->mm[5] = g->mm[7]; }
    { /* movq mm0, qword ptr [esi + 0x48] */ uint32_t A = arg2 + 0x48u; g->mm[0] = rd64(A); }
    { /* psubw mm7, mm6 */ g->mm[7] = mmx_psubw(g->mm[7], g->mm[6]); }
    { /* paddw mm5, mm6 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[6]); }
    { /* movq mm6, mm3 */ g->mm[6] = g->mm[3]; }
    { /* movq qword ptr [esi + 0x38], mm7 */ uint32_t A = arg2 + 0x38u; wr64(A, g->mm[7]); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* psubw mm3, mm6 */ g->mm[3] = mmx_psubw(g->mm[3], g->mm[6]); }
    { /* paddw mm2, mm6 */ g->mm[2] = mmx_paddw(g->mm[2], g->mm[6]); }
    { /* movq qword ptr [esi + 0x18], mm2 */ uint32_t A = arg2 + 0x18u; wr64(A, g->mm[2]); }
    { /* movq mm6, mm0 */ g->mm[6] = g->mm[0]; }
    { /* paddw mm0, mm4 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[4]); }
    { /* psubw mm6, mm4 */ g->mm[6] = mmx_psubw(g->mm[6], g->mm[4]); }
    { /* movq qword ptr [esi + 0x28], mm0 */ uint32_t A = arg2 + 0x28u; wr64(A, g->mm[0]); }
    { /* movq mm0, mm5 */ g->mm[0] = g->mm[5]; }
    { /* punpcklwd mm5, mm6 */ g->mm[5] = mmx_punpcklwd(g->mm[5], g->mm[6]); }
    { /* punpckhwd mm0, mm6 */ g->mm[0] = mmx_punpckhwd(g->mm[0], g->mm[6]); }
    { /* movq mm6, qword ptr [esi] */ uint32_t A = arg2; g->mm[6] = rd64(A); }
    { /* movq mm2, mm3 */ g->mm[2] = g->mm[3]; }
    { /* punpcklwd mm3, mm1 */ g->mm[3] = mmx_punpcklwd(g->mm[3], g->mm[1]); }
    { /* movq mm7, qword ptr [esi + 0x10] */ uint32_t A = arg2 + 0x10u; g->mm[7] = rd64(A); }
    { /* punpckhwd mm2, mm1 */ g->mm[2] = mmx_punpckhwd(g->mm[2], g->mm[1]); }
    { /* movq mm4, mm5 */ g->mm[4] = g->mm[5]; }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* movq qword ptr [esi + 0x48], mm5 */ uint32_t A = arg2 + 0x48u; wr64(A, g->mm[5]); }
    { /* punpckhdq mm4, mm3 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[3]); }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* punpckldq mm0, mm2 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[2]); }
    { /* movq qword ptr [esi + 0x58], mm4 */ uint32_t A = arg2 + 0x58u; wr64(A, g->mm[4]); }
    { /* punpckhdq mm3, mm2 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[2]); }
    { /* movq qword ptr [esi + 0x68], mm0 */ uint32_t A = arg2 + 0x68u; wr64(A, g->mm[0]); }
    { /* movq mm5, mm6 */ g->mm[5] = g->mm[6]; }
    { /* movq qword ptr [esi + 0x78], mm3 */ uint32_t A = arg2 + 0x78u; wr64(A, g->mm[3]); }
    { /* punpcklwd mm6, mm7 */ g->mm[6] = mmx_punpcklwd(g->mm[6], g->mm[7]); }
    { /* punpckhwd mm5, mm7 */ g->mm[5] = mmx_punpckhwd(g->mm[5], g->mm[7]); }
    { /* movq mm7, qword ptr [esi + 0x20] */ uint32_t A = arg2 + 0x20u; g->mm[7] = rd64(A); }
    { /* movq mm4, qword ptr [esi + 0x30] */ uint32_t A = arg2 + 0x30u; g->mm[4] = rd64(A); }
    { /* movq mm3, mm7 */ g->mm[3] = g->mm[7]; }
    { /* movq mm2, mm6 */ g->mm[2] = g->mm[6]; }
    { /* punpcklwd mm7, mm4 */ g->mm[7] = mmx_punpcklwd(g->mm[7], g->mm[4]); }
    { /* punpckhwd mm3, mm4 */ g->mm[3] = mmx_punpckhwd(g->mm[3], g->mm[4]); }
    { /* movq mm4, mm5 */ g->mm[4] = g->mm[5]; }
    { /* movq mm1, mm5 */ g->mm[1] = g->mm[5]; }
    { /* punpckldq mm6, mm7 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[7]); }
    { /* movq qword ptr [esi], mm6 */ uint32_t A = arg2; wr64(A, g->mm[6]); }
    { /* punpckhdq mm2, mm7 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[7]); }
    { /* movq qword ptr [esi + 0x10], mm2 */ uint32_t A = arg2 + 0x10u; wr64(A, g->mm[2]); }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* movq qword ptr [esi + 0x20], mm5 */ uint32_t A = arg2 + 0x20u; wr64(A, g->mm[5]); }
    { /* punpckhdq mm1, mm3 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[3]); }
    { /* movq qword ptr [esi + 0x30], mm1 */ uint32_t A = arg2 + 0x30u; wr64(A, g->mm[1]); }
    { /* movq mm0, qword ptr [esi + 8] */ uint32_t A = arg2 + 8u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x18] */ uint32_t A = arg2 + 0x18u; g->mm[1] = rd64(A); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm3, qword ptr [esi + 0x28] */ uint32_t A = arg2 + 0x28u; g->mm[3] = rd64(A); }
    { /* punpcklwd mm0, mm1 */ g->mm[0] = mmx_punpcklwd(g->mm[0], g->mm[1]); }
    { /* punpckhwd mm2, mm1 */ g->mm[2] = mmx_punpckhwd(g->mm[2], g->mm[1]); }
    { /* movq mm1, qword ptr [esi + 0x38] */ uint32_t A = arg2 + 0x38u; g->mm[1] = rd64(A); }
    { /* movq mm4, mm3 */ g->mm[4] = g->mm[3]; }
    { /* punpcklwd mm3, mm1 */ g->mm[3] = mmx_punpcklwd(g->mm[3], g->mm[1]); }
    { /* punpckhwd mm4, mm1 */ g->mm[4] = mmx_punpckhwd(g->mm[4], g->mm[1]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* movq mm5, mm2 */ g->mm[5] = g->mm[2]; }
    { /* punpckldq mm0, mm3 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[3]); }
    { /* punpckhdq mm1, mm3 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[3]); }
    { /* movq mm3, qword ptr [esi + 0x40] */ uint32_t A = arg2 + 0x40u; g->mm[3] = rd64(A); }
    { /* movq qword ptr [esi + 0x40], mm0 */ uint32_t A = arg2 + 0x40u; wr64(A, g->mm[0]); }
    { /* punpckldq mm2, mm4 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[4]); }
    { /* punpckhdq mm5, mm4 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[4]); }
    { /* movq mm4, qword ptr [esi + 0x50] */ uint32_t A = arg2 + 0x50u; g->mm[4] = rd64(A); }
    { /* movq qword ptr [esi + 0x50], mm1 */ uint32_t A = arg2 + 0x50u; wr64(A, g->mm[1]); }
    { /* movq mm1, mm3 */ g->mm[1] = g->mm[3]; }
    { /* movq mm0, qword ptr [esi + 0x60] */ uint32_t A = arg2 + 0x60u; g->mm[0] = rd64(A); }
    { /* punpcklwd mm3, mm4 */ g->mm[3] = mmx_punpcklwd(g->mm[3], g->mm[4]); }
    { /* punpckhwd mm1, mm4 */ g->mm[1] = mmx_punpckhwd(g->mm[1], g->mm[4]); }
    { /* movq mm4, qword ptr [esi + 0x70] */ uint32_t A = arg2 + 0x70u; g->mm[4] = rd64(A); }
    { /* movq qword ptr [esi + 0x60], mm2 */ uint32_t A = arg2 + 0x60u; wr64(A, g->mm[2]); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq qword ptr [esi + 0x70], mm5 */ uint32_t A = arg2 + 0x70u; wr64(A, g->mm[5]); }
    { /* punpcklwd mm0, mm4 */ g->mm[0] = mmx_punpcklwd(g->mm[0], g->mm[4]); }
    { /* punpckhwd mm2, mm4 */ g->mm[2] = mmx_punpckhwd(g->mm[2], g->mm[4]); }
    { /* movq mm4, mm3 */ g->mm[4] = g->mm[3]; }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* punpckldq mm3, mm0 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [esi + 8], mm3 */ uint32_t A = arg2 + 8u; wr64(A, g->mm[3]); }
    { /* punpckhdq mm4, mm0 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[0]); }
    { /* movq qword ptr [esi + 0x18], mm4 */ uint32_t A = arg2 + 0x18u; wr64(A, g->mm[4]); }
    { /* punpckldq mm1, mm2 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[2]); }
    { /* movq qword ptr [esi + 0x28], mm1 */ uint32_t A = arg2 + 0x28u; wr64(A, g->mm[1]); }
    { /* punpckhdq mm5, mm2 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[2]); }
    { /* movq qword ptr [esi + 0x38], mm5 */ uint32_t A = arg2 + 0x38u; wr64(A, g->mm[5]); }
    { /* movq mm0, qword ptr [esi + 0x60] */ uint32_t A = arg2 + 0x60u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x20] */ uint32_t A = arg2 + 0x20u; g->mm[1] = rd64(A); }
    { /* movq mm3, qword ptr [esi] */ uint32_t A = arg2; g->mm[3] = rd64(A); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* movq mm5, qword ptr [esi + 0x40] */ uint32_t A = arg2 + 0x40u; g->mm[5] = rd64(A); }
    { /* psubw mm1, mm0 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[0]); }
    { /* movq mm6, qword ptr [0x10349ad8] */ uint32_t A = COW_IMG(0x10349ad8u); g->mm[6] = rd64(A); }
    { /* movq mm4, mm1 */ g->mm[4] = g->mm[1]; }
    { /* punpcklwd mm1, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[1] = mmx_punpcklwd(g->mm[1], (uint64_t)rd32(A)); }
    { /* paddw mm2, mm0 */ g->mm[2] = mmx_paddw(g->mm[2], g->mm[0]); }
    { /* pmaddwd mm1, mm6 */ g->mm[1] = mmx_pmaddwd(g->mm[1], g->mm[6]); }
    { /* movq mm0, mm2 */ g->mm[0] = g->mm[2]; }
    { /* punpckhwd mm4, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[4] = mmx_punpckhwd(g->mm[4], rd64(A)); }
    { /* pmaddwd mm4, mm6 */ g->mm[4] = mmx_pmaddwd(g->mm[4], g->mm[6]); }
    { /* psrad mm1, 8 */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0x8u); }
    { /* psrad mm4, 8 */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0x8u); }
    { /* packssdw mm1, mm4 */ g->mm[1] = mmx_packssdw(g->mm[1], g->mm[4]); }
    { /* movq mm4, mm3 */ g->mm[4] = g->mm[3]; }
    { /* paddw mm3, mm5 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[5]); }
    { /* psubw mm4, mm5 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[5]); }
    { /* movq mm6, mm3 */ g->mm[6] = g->mm[3]; }
    { /* psubw mm1, mm0 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[0]); }
    { /* paddw mm3, mm2 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[2]); }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* paddw mm1, mm4 */ g->mm[1] = mmx_paddw(g->mm[1], g->mm[4]); }
    { /* movq qword ptr [esi + 0x20], mm3 */ uint32_t A = arg2 + 0x20u; wr64(A, g->mm[3]); }
    { /* psubw mm4, mm5 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[5]); }
    { /* movq qword ptr [esi + 0x60], mm1 */ uint32_t A = arg2 + 0x60u; wr64(A, g->mm[1]); }
    { /* psubw mm6, mm2 */ g->mm[6] = mmx_psubw(g->mm[6], g->mm[2]); }
    { /* movq qword ptr [esi], mm4 */ uint32_t A = arg2; wr64(A, g->mm[4]); }
    { /* movq mm7, qword ptr [esi + 0x50] */ uint32_t A = arg2 + 0x50u; g->mm[7] = rd64(A); }
    { /* movq mm0, qword ptr [esi + 0x30] */ uint32_t A = arg2 + 0x30u; g->mm[0] = rd64(A); }
    { /* movq mm3, mm7 */ g->mm[3] = g->mm[7]; }
    { /* movq mm5, qword ptr [esi + 0x10] */ uint32_t A = arg2 + 0x10u; g->mm[5] = rd64(A); }
    { /* psubw mm7, mm0 */ g->mm[7] = mmx_psubw(g->mm[7], g->mm[0]); }
    { /* movq mm4, qword ptr [esi + 0x70] */ uint32_t A = arg2 + 0x70u; g->mm[4] = rd64(A); }
    { /* paddw mm3, mm0 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[0]); }
    { /* movq mm2, qword ptr [0x10349ae0] */ uint32_t A = COW_IMG(0x10349ae0u); g->mm[2] = rd64(A); }
    { /* movq mm1, mm7 */ g->mm[1] = g->mm[7]; }
    { /* movq qword ptr [esp + 0x14], mm6 */ uint32_t A = sp0 - 0x10u; wr64(A, g->mm[6]); }
    { /* movq mm0, mm7 */ g->mm[0] = g->mm[7]; }
    { /* punpcklwd mm7, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[7] = mmx_punpcklwd(g->mm[7], (uint64_t)rd32(A)); }
    { /* pmaddwd mm7, mm2 */ g->mm[7] = mmx_pmaddwd(g->mm[7], g->mm[2]); }
    { /* punpckhwd mm0, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[0] = mmx_punpckhwd(g->mm[0], rd64(A)); }
    { /* pmaddwd mm0, mm2 */ g->mm[0] = mmx_pmaddwd(g->mm[0], g->mm[2]); }
    { /* psrad mm7, 8 */ g->mm[7] = mmx_psrad(g->mm[7], (uint64_t)0x8u); }
    { /* movq mm6, qword ptr [0x10349ae8] */ uint32_t A = COW_IMG(0x10349ae8u); g->mm[6] = rd64(A); }
    { /* psrad mm0, 8 */ g->mm[0] = mmx_psrad(g->mm[0], (uint64_t)0x8u); }
    { /* packssdw mm7, mm0 */ g->mm[7] = mmx_packssdw(g->mm[7], g->mm[0]); }
    { /* movq mm0, mm5 */ g->mm[0] = g->mm[5]; }
    { /* paddw mm5, mm4 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[4]); }
    { /* psubw mm0, mm4 */ g->mm[0] = mmx_psubw(g->mm[0], g->mm[4]); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* punpcklwd mm0, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[0] = mmx_punpcklwd(g->mm[0], (uint64_t)rd32(A)); }
    { /* pmaddwd mm0, mm6 */ g->mm[0] = mmx_pmaddwd(g->mm[0], g->mm[6]); }
    { /* punpckhwd mm4, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[4] = mmx_punpckhwd(g->mm[4], rd64(A)); }
    { /* pmaddwd mm4, mm6 */ g->mm[4] = mmx_pmaddwd(g->mm[4], g->mm[6]); }
    { /* paddw mm1, mm2 */ g->mm[1] = mmx_paddw(g->mm[1], g->mm[2]); }
    { /* movq mm2, qword ptr [0x10349af0] */ uint32_t A = COW_IMG(0x10349af0u); g->mm[2] = rd64(A); }
    { /* psrad mm0, 8 */ g->mm[0] = mmx_psrad(g->mm[0], (uint64_t)0x8u); }
    { /* psrad mm4, 8 */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0x8u); }
    { /* movq mm6, mm1 */ g->mm[6] = g->mm[1]; }
    { /* packssdw mm0, mm4 */ g->mm[0] = mmx_packssdw(g->mm[0], g->mm[4]); }
    { /* movq mm4, mm5 */ g->mm[4] = g->mm[5]; }
    { /* punpcklwd mm1, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[1] = mmx_punpcklwd(g->mm[1], (uint64_t)rd32(A)); }
    { /* paddw mm5, mm3 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[3]); }
    { /* pmaddwd mm1, mm2 */ g->mm[1] = mmx_pmaddwd(g->mm[1], g->mm[2]); }
    { /* psubw mm4, mm3 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[3]); }
    { /* punpckhwd mm6, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[6] = mmx_punpckhwd(g->mm[6], rd64(A)); }
    { /* pmaddwd mm6, mm2 */ g->mm[6] = mmx_pmaddwd(g->mm[6], g->mm[2]); }
    { /* psrad mm1, 8 */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0x8u); }
    { /* psrad mm6, 8 */ g->mm[6] = mmx_psrad(g->mm[6], (uint64_t)0x8u); }
    { /* packssdw mm1, mm6 */ g->mm[1] = mmx_packssdw(g->mm[1], g->mm[6]); }
    { /* psubw mm0, mm1 */ g->mm[0] = mmx_psubw(g->mm[0], g->mm[1]); }
    { /* paddw mm1, mm7 */ g->mm[1] = mmx_paddw(g->mm[1], g->mm[7]); }
    { /* movq mm7, qword ptr [0x10349ad8] */ uint32_t A = COW_IMG(0x10349ad8u); g->mm[7] = rd64(A); }
    { /* movq mm3, mm4 */ g->mm[3] = g->mm[4]; }
    { /* punpcklwd mm4, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[4] = mmx_punpcklwd(g->mm[4], (uint64_t)rd32(A)); }
    { /* psubw mm1, mm5 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[5]); }
    { /* pmaddwd mm4, mm7 */ g->mm[4] = mmx_pmaddwd(g->mm[4], g->mm[7]); }
    { /* punpckhwd mm3, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[3] = mmx_punpckhwd(g->mm[3], rd64(A)); }
    { /* movq mm6, qword ptr [esp + 0x14] */ uint32_t A = sp0 - 0x10u; g->mm[6] = rd64(A); }
    { /* pmaddwd mm3, mm7 */ g->mm[3] = mmx_pmaddwd(g->mm[3], g->mm[7]); }
    { /* movq mm2, qword ptr [esi + 0x60] */ uint32_t A = arg2 + 0x60u; g->mm[2] = rd64(A); }
    { /* psrad mm4, 8 */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0x8u); }
    { /* movq mm7, qword ptr [esi + 0x20] */ uint32_t A = arg2 + 0x20u; g->mm[7] = rd64(A); }
    { /* psrad mm3, 8 */ g->mm[3] = mmx_psrad(g->mm[3], (uint64_t)0x8u); }
    { /* packssdw mm4, mm3 */ g->mm[4] = mmx_packssdw(g->mm[4], g->mm[3]); }
    { /* movq mm3, mm6 */ g->mm[3] = g->mm[6]; }
    { /* psubw mm4, mm1 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[1]); }
    { /* paddw mm0, mm4 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[4]); }
    { /* psubw mm6, mm0 */ g->mm[6] = mmx_psubw(g->mm[6], g->mm[0]); }
    { /* paddw mm3, mm0 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[0]); }
    { /* movq mm0, mm1 */ g->mm[0] = g->mm[1]; }
    { /* movq mm1, mm7 */ g->mm[1] = g->mm[7]; }
    { /* movq qword ptr [esi + 0x40], mm3 */ uint32_t A = arg2 + 0x40u; wr64(A, g->mm[3]); }
    { /* paddw mm7, mm5 */ g->mm[7] = mmx_paddw(g->mm[7], g->mm[5]); }
    { /* movq qword ptr [esi + 0x30], mm6 */ uint32_t A = arg2 + 0x30u; wr64(A, g->mm[6]); }
    { /* psubw mm1, mm5 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[5]); }
    { /* movq mm6, qword ptr [esi] */ uint32_t A = arg2; g->mm[6] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* movq qword ptr [esi], mm7 */ uint32_t A = arg2; wr64(A, g->mm[7]); }
    { /* paddw mm2, mm0 */ g->mm[2] = mmx_paddw(g->mm[2], g->mm[0]); }
    { /* movq qword ptr [esi + 0x70], mm1 */ uint32_t A = arg2 + 0x70u; wr64(A, g->mm[1]); }
    { /* psubw mm3, mm0 */ g->mm[3] = mmx_psubw(g->mm[3], g->mm[0]); }
    { /* movq qword ptr [esi + 0x10], mm2 */ uint32_t A = arg2 + 0x10u; wr64(A, g->mm[2]); }
    { /* movq mm0, mm6 */ g->mm[0] = g->mm[6]; }
    { /* movq qword ptr [esi + 0x60], mm3 */ uint32_t A = arg2 + 0x60u; wr64(A, g->mm[3]); }
    { /* paddw mm6, mm4 */ g->mm[6] = mmx_paddw(g->mm[6], g->mm[4]); }
    { /* movq mm1, qword ptr [esi + 0x28] */ uint32_t A = arg2 + 0x28u; g->mm[1] = rd64(A); }
    { /* psubw mm0, mm4 */ g->mm[0] = mmx_psubw(g->mm[0], g->mm[4]); }
    { /* movq qword ptr [esi + 0x20], mm6 */ uint32_t A = arg2 + 0x20u; wr64(A, g->mm[6]); }
    { /* movq qword ptr [esi + 0x50], mm0 */ uint32_t A = arg2 + 0x50u; wr64(A, g->mm[0]); }
    { /* movq mm7, qword ptr [esi + 0x68] */ uint32_t A = arg2 + 0x68u; g->mm[7] = rd64(A); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* movq mm3, qword ptr [esi + 8] */ uint32_t A = arg2 + 8u; g->mm[3] = rd64(A); }
    { /* psubw mm1, mm7 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[7]); }
    { /* movq mm5, qword ptr [esi + 0x48] */ uint32_t A = arg2 + 0x48u; g->mm[5] = rd64(A); }
    { /* paddw mm2, mm7 */ g->mm[2] = mmx_paddw(g->mm[2], g->mm[7]); }
    { /* movq mm4, qword ptr [0x10349ad8] */ uint32_t A = COW_IMG(0x10349ad8u); g->mm[4] = rd64(A); }
    { /* movq mm6, mm1 */ g->mm[6] = g->mm[1]; }
    { /* punpcklwd mm1, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[1] = mmx_punpcklwd(g->mm[1], (uint64_t)rd32(A)); }
    { /* pmaddwd mm1, mm4 */ g->mm[1] = mmx_pmaddwd(g->mm[1], g->mm[4]); }
    { /* punpckhwd mm6, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[6] = mmx_punpckhwd(g->mm[6], rd64(A)); }
    { /* pmaddwd mm6, mm4 */ g->mm[6] = mmx_pmaddwd(g->mm[6], g->mm[4]); }
    { /* movq mm4, mm3 */ g->mm[4] = g->mm[3]; }
    { /* paddw mm3, mm5 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[5]); }
    { /* psrad mm1, 8 */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0x8u); }
    { /* psubw mm4, mm5 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[5]); }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* psrad mm6, 8 */ g->mm[6] = mmx_psrad(g->mm[6], (uint64_t)0x8u); }
    { /* packssdw mm1, mm6 */ g->mm[1] = mmx_packssdw(g->mm[1], g->mm[6]); }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* psubw mm1, mm6 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[6]); }
    { /* paddw mm3, mm2 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[2]); }
    { /* movq mm5, mm4 */ g->mm[5] = g->mm[4]; }
    { /* paddw mm4, mm1 */ g->mm[4] = mmx_paddw(g->mm[4], g->mm[1]); }
    { /* movq qword ptr [esi + 0x28], mm3 */ uint32_t A = arg2 + 0x28u; wr64(A, g->mm[3]); }
    { /* psubw mm5, mm1 */ g->mm[5] = mmx_psubw(g->mm[5], g->mm[1]); }
    { /* movq qword ptr [esi + 0x68], mm4 */ uint32_t A = arg2 + 0x68u; wr64(A, g->mm[4]); }
    { /* psubw mm7, mm2 */ g->mm[7] = mmx_psubw(g->mm[7], g->mm[2]); }
    { /* movq qword ptr [esi + 0x48], mm5 */ uint32_t A = arg2 + 0x48u; wr64(A, g->mm[5]); }
    { /* movq mm0, qword ptr [esi + 0x58] */ uint32_t A = arg2 + 0x58u; g->mm[0] = rd64(A); }
    { /* movq mm6, qword ptr [esi + 0x38] */ uint32_t A = arg2 + 0x38u; g->mm[6] = rd64(A); }
    { /* movq mm4, qword ptr [esi + 0x78] */ uint32_t A = arg2 + 0x78u; g->mm[4] = rd64(A); }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* movq mm5, qword ptr [esi + 0x18] */ uint32_t A = arg2 + 0x18u; g->mm[5] = rd64(A); }
    { /* paddw mm0, mm6 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[6]); }
    { /* movq qword ptr [esp + 0x1c], mm7 */ uint32_t A = sp0 - 8u; wr64(A, g->mm[7]); }
    { /* psubw mm3, mm6 */ g->mm[3] = mmx_psubw(g->mm[3], g->mm[6]); }
    { /* movq mm6, qword ptr [0x10349ae0] */ uint32_t A = COW_IMG(0x10349ae0u); g->mm[6] = rd64(A); }
    { /* movq mm1, mm3 */ g->mm[1] = g->mm[3]; }
    { /* movq mm7, mm1 */ g->mm[7] = g->mm[1]; }
    { /* punpcklwd mm1, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[1] = mmx_punpcklwd(g->mm[1], (uint64_t)rd32(A)); }
    { /* pmaddwd mm1, mm6 */ g->mm[1] = mmx_pmaddwd(g->mm[1], g->mm[6]); }
    { /* punpckhwd mm7, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[7] = mmx_punpckhwd(g->mm[7], rd64(A)); }
    { /* pmaddwd mm7, mm6 */ g->mm[7] = mmx_pmaddwd(g->mm[7], g->mm[6]); }
    { /* movq mm6, mm5 */ g->mm[6] = g->mm[5]; }
    { /* paddw mm5, mm4 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[4]); }
    { /* psrad mm1, 8 */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0x8u); }
    { /* psubw mm6, mm4 */ g->mm[6] = mmx_psubw(g->mm[6], g->mm[4]); }
    { /* movq mm4, mm5 */ g->mm[4] = g->mm[5]; }
    { /* psrad mm7, 8 */ g->mm[7] = mmx_psrad(g->mm[7], (uint64_t)0x8u); }
    { /* paddw mm5, mm0 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[0]); }
    { /* packssdw mm1, mm7 */ g->mm[1] = mmx_packssdw(g->mm[1], g->mm[7]); }
    { /* psubw mm4, mm0 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[0]); }
    { /* movq mm7, qword ptr [0x10349ad8] */ uint32_t A = COW_IMG(0x10349ad8u); g->mm[7] = rd64(A); }
    { /* movq mm2, mm4 */ g->mm[2] = g->mm[4]; }
    { /* punpcklwd mm4, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[4] = mmx_punpcklwd(g->mm[4], (uint64_t)rd32(A)); }
    { /* paddw mm3, mm6 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[6]); }
    { /* pmaddwd mm4, mm7 */ g->mm[4] = mmx_pmaddwd(g->mm[4], g->mm[7]); }
    { /* punpckhwd mm2, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[2] = mmx_punpckhwd(g->mm[2], rd64(A)); }
    { /* pmaddwd mm2, mm7 */ g->mm[2] = mmx_pmaddwd(g->mm[2], g->mm[7]); }
    { /* movq mm7, qword ptr [0x10349af0] */ uint32_t A = COW_IMG(0x10349af0u); g->mm[7] = rd64(A); }
    { /* psrad mm4, 8 */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0x8u); }
    { /* psrad mm2, 8 */ g->mm[2] = mmx_psrad(g->mm[2], (uint64_t)0x8u); }
    { /* packssdw mm4, mm2 */ g->mm[4] = mmx_packssdw(g->mm[4], g->mm[2]); }
    { /* movq mm2, mm3 */ g->mm[2] = g->mm[3]; }
    { /* punpcklwd mm3, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[3] = mmx_punpcklwd(g->mm[3], (uint64_t)rd32(A)); }
    { /* pmaddwd mm3, mm7 */ g->mm[3] = mmx_pmaddwd(g->mm[3], g->mm[7]); }
    { /* punpckhwd mm2, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[2] = mmx_punpckhwd(g->mm[2], rd64(A)); }
    { /* pmaddwd mm2, mm7 */ g->mm[2] = mmx_pmaddwd(g->mm[2], g->mm[7]); }
    { /* movq mm7, qword ptr [0x10349ae8] */ uint32_t A = COW_IMG(0x10349ae8u); g->mm[7] = rd64(A); }
    { /* psrad mm3, 8 */ g->mm[3] = mmx_psrad(g->mm[3], (uint64_t)0x8u); }
    { /* psrad mm2, 8 */ g->mm[2] = mmx_psrad(g->mm[2], (uint64_t)0x8u); }
    { /* packssdw mm3, mm2 */ g->mm[3] = mmx_packssdw(g->mm[3], g->mm[2]); }
    { /* movq mm2, mm6 */ g->mm[2] = g->mm[6]; }
    { /* punpcklwd mm6, dword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[6] = mmx_punpcklwd(g->mm[6], (uint64_t)rd32(A)); }
    { /* pmaddwd mm6, mm7 */ g->mm[6] = mmx_pmaddwd(g->mm[6], g->mm[7]); }
    { /* punpckhwd mm2, qword ptr [0x10349af8] */ uint32_t A = COW_IMG(0x10349af8u); g->mm[2] = mmx_punpckhwd(g->mm[2], rd64(A)); }
    { /* pmaddwd mm2, mm7 */ g->mm[2] = mmx_pmaddwd(g->mm[2], g->mm[7]); }
    { /* movq mm0, qword ptr [esi + 0x28] */ uint32_t A = arg2 + 0x28u; g->mm[0] = rd64(A); }
    { /* psrad mm6, 8 */ g->mm[6] = mmx_psrad(g->mm[6], (uint64_t)0x8u); }
    { /* movq mm7, qword ptr [esp + 0x1c] */ uint32_t A = sp0 - 8u; g->mm[7] = rd64(A); }
    { /* psrad mm2, 8 */ g->mm[2] = mmx_psrad(g->mm[2], (uint64_t)0x8u); }
    { /* packssdw mm6, mm2 */ g->mm[6] = mmx_packssdw(g->mm[6], g->mm[2]); }
    { /* movq mm2, mm5 */ g->mm[2] = g->mm[5]; }
    { /* psubw mm6, mm3 */ g->mm[6] = mmx_psubw(g->mm[6], g->mm[3]); }
    { /* paddw mm3, mm1 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[1]); }
    { /* psubw mm3, mm2 */ g->mm[3] = mmx_psubw(g->mm[3], g->mm[2]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* psubw mm4, mm3 */ g->mm[4] = mmx_psubw(g->mm[4], g->mm[3]); }
    { /* paddw mm0, mm5 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[5]); }
    { /* movq mm2, qword ptr [esi + 0x68] */ uint32_t A = arg2 + 0x68u; g->mm[2] = rd64(A); }
    { /* paddw mm6, mm4 */ g->mm[6] = mmx_paddw(g->mm[6], g->mm[4]); }
    { /* movq qword ptr [esi + 8], mm0 */ uint32_t A = arg2 + 8u; wr64(A, g->mm[0]); }
    { /* psubw mm1, mm5 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[5]); }
    { /* movq mm5, mm7 */ g->mm[5] = g->mm[7]; }
    { /* psubw mm7, mm6 */ g->mm[7] = mmx_psubw(g->mm[7], g->mm[6]); }
    { /* paddw mm5, mm6 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[6]); }
    { /* movq mm6, mm3 */ g->mm[6] = g->mm[3]; }
    { /* movq mm0, qword ptr [esi + 0x48] */ uint32_t A = arg2 + 0x48u; g->mm[0] = rd64(A); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* movq qword ptr [esi + 0x38], mm7 */ uint32_t A = arg2 + 0x38u; wr64(A, g->mm[7]); }
    { /* psubw mm3, mm6 */ g->mm[3] = mmx_psubw(g->mm[3], g->mm[6]); }
    { /* paddw mm2, mm6 */ g->mm[2] = mmx_paddw(g->mm[2], g->mm[6]); }
    { /* movq mm6, mm0 */ g->mm[6] = g->mm[0]; }
    { /* movq qword ptr [esi + 0x18], mm2 */ uint32_t A = arg2 + 0x18u; wr64(A, g->mm[2]); }
    { /* paddw mm0, mm4 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[4]); }
    { /* psubw mm6, mm4 */ g->mm[6] = mmx_psubw(g->mm[6], g->mm[4]); }
    { /* movq qword ptr [esi + 0x28], mm0 */ uint32_t A = arg2 + 0x28u; wr64(A, g->mm[0]); }
    t1 = rd32(arg4 + 0x10u);
    { /* movq mm0, mm5 */ g->mm[0] = g->mm[5]; }
    { /* punpcklwd mm5, mm6 */ g->mm[5] = mmx_punpcklwd(g->mm[5], g->mm[6]); }
    { /* punpckhwd mm0, mm6 */ g->mm[0] = mmx_punpckhwd(g->mm[0], g->mm[6]); }
    { /* movq mm2, mm3 */ g->mm[2] = g->mm[3]; }
    { /* movq mm6, qword ptr [esi] */ uint32_t A = arg2; g->mm[6] = rd64(A); }
    { /* punpcklwd mm3, mm1 */ g->mm[3] = mmx_punpcklwd(g->mm[3], g->mm[1]); }
    { /* movq mm7, qword ptr [esi + 0x10] */ uint32_t A = arg2 + 0x10u; g->mm[7] = rd64(A); }
    { /* punpckhwd mm2, mm1 */ g->mm[2] = mmx_punpckhwd(g->mm[2], g->mm[1]); }
    { /* movq mm4, mm5 */ g->mm[4] = g->mm[5]; }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* psrlw mm5, 5 */ g->mm[5] = mmx_psrlw(g->mm[5], (uint64_t)0x5u); }
    eax = in_eax;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t2 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t1 + 4u, (uint8_t)t2);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t2;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t3 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t1 + 5u, (uint8_t)t3);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t3;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t4 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t1 + 6u, (uint8_t)t4);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t4;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t5 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t1 + 7u, (uint8_t)t5);
    t6 = rd32(arg4 + 0x14u);
    { /* punpckhdq mm4, mm3 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[3]); }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* punpckldq mm0, mm2 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[2]); }
    { /* psrlw mm4, 5 */ g->mm[4] = mmx_psrlw(g->mm[4], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t5;
    { /* movd eax, mm4 */ eax = (uint32_t)((uint32_t)g->mm[4]); }
    t7 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t6 + 4u, (uint8_t)t7);
    { /* psrlq mm4, 0x10 */ g->mm[4] = mmx_psrlq(g->mm[4], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t7;
    { /* movd eax, mm4 */ eax = (uint32_t)((uint32_t)g->mm[4]); }
    t8 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t6 + 5u, (uint8_t)t8);
    { /* psrlq mm4, 0x10 */ g->mm[4] = mmx_psrlq(g->mm[4], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t8;
    { /* movd eax, mm4 */ eax = (uint32_t)((uint32_t)g->mm[4]); }
    t9 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t6 + 6u, (uint8_t)t9);
    { /* psrlq mm4, 0x10 */ g->mm[4] = mmx_psrlq(g->mm[4], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t9;
    { /* movd eax, mm4 */ eax = (uint32_t)((uint32_t)g->mm[4]); }
    t10 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t6 + 7u, (uint8_t)t10);
    t11 = rd32(arg4 + 0x18u);
    { /* punpckhdq mm3, mm2 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[2]); }
    { /* psrlw mm0, 5 */ g->mm[0] = mmx_psrlw(g->mm[0], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t10;
    { /* movd eax, mm0 */ eax = (uint32_t)((uint32_t)g->mm[0]); }
    t12 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t11 + 4u, (uint8_t)t12);
    { /* psrlq mm0, 0x10 */ g->mm[0] = mmx_psrlq(g->mm[0], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t12;
    { /* movd eax, mm0 */ eax = (uint32_t)((uint32_t)g->mm[0]); }
    t13 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t11 + 5u, (uint8_t)t13);
    { /* psrlq mm0, 0x10 */ g->mm[0] = mmx_psrlq(g->mm[0], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t13;
    { /* movd eax, mm0 */ eax = (uint32_t)((uint32_t)g->mm[0]); }
    t14 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t11 + 6u, (uint8_t)t14);
    { /* psrlq mm0, 0x10 */ g->mm[0] = mmx_psrlq(g->mm[0], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t14;
    { /* movd eax, mm0 */ eax = (uint32_t)((uint32_t)g->mm[0]); }
    t15 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t11 + 7u, (uint8_t)t15);
    t16 = rd32(arg4 + 0x1cu);
    { /* movq mm5, mm6 */ g->mm[5] = g->mm[6]; }
    { /* psrlw mm3, 5 */ g->mm[3] = mmx_psrlw(g->mm[3], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t15;
    { /* movd eax, mm3 */ eax = (uint32_t)((uint32_t)g->mm[3]); }
    t17 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t16 + 4u, (uint8_t)t17);
    { /* psrlq mm3, 0x10 */ g->mm[3] = mmx_psrlq(g->mm[3], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t17;
    { /* movd eax, mm3 */ eax = (uint32_t)((uint32_t)g->mm[3]); }
    t18 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t16 + 5u, (uint8_t)t18);
    { /* psrlq mm3, 0x10 */ g->mm[3] = mmx_psrlq(g->mm[3], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t18;
    { /* movd eax, mm3 */ eax = (uint32_t)((uint32_t)g->mm[3]); }
    t19 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t16 + 6u, (uint8_t)t19);
    { /* psrlq mm3, 0x10 */ g->mm[3] = mmx_psrlq(g->mm[3], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t19;
    { /* movd eax, mm3 */ eax = (uint32_t)((uint32_t)g->mm[3]); }
    t20 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t16 + 7u, (uint8_t)t20);
    { /* punpcklwd mm6, mm7 */ g->mm[6] = mmx_punpcklwd(g->mm[6], g->mm[7]); }
    t21 = rd32(arg4);
    { /* movq mm4, qword ptr [esi + 0x30] */ uint32_t A = arg2 + 0x30u; g->mm[4] = rd64(A); }
    { /* punpckhwd mm5, mm7 */ g->mm[5] = mmx_punpckhwd(g->mm[5], g->mm[7]); }
    { /* movq mm7, qword ptr [esi + 0x20] */ uint32_t A = arg2 + 0x20u; g->mm[7] = rd64(A); }
    { /* movq mm2, mm6 */ g->mm[2] = g->mm[6]; }
    { /* movq mm3, mm7 */ g->mm[3] = g->mm[7]; }
    { /* punpcklwd mm7, mm4 */ g->mm[7] = mmx_punpcklwd(g->mm[7], g->mm[4]); }
    { /* punpckhwd mm3, mm4 */ g->mm[3] = mmx_punpckhwd(g->mm[3], g->mm[4]); }
    { /* movq mm4, mm5 */ g->mm[4] = g->mm[5]; }
    { /* movq mm1, mm5 */ g->mm[1] = g->mm[5]; }
    { /* punpckldq mm6, mm7 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[7]); }
    { /* psrlw mm6, 5 */ g->mm[6] = mmx_psrlw(g->mm[6], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t20;
    { /* movd eax, mm6 */ eax = (uint32_t)((uint32_t)g->mm[6]); }
    t22 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t21, (uint8_t)t22);
    { /* psrlq mm6, 0x10 */ g->mm[6] = mmx_psrlq(g->mm[6], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t22;
    { /* movd eax, mm6 */ eax = (uint32_t)((uint32_t)g->mm[6]); }
    t23 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t21 + 1u, (uint8_t)t23);
    { /* psrlq mm6, 0x10 */ g->mm[6] = mmx_psrlq(g->mm[6], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t23;
    { /* movd eax, mm6 */ eax = (uint32_t)((uint32_t)g->mm[6]); }
    t24 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t21 + 2u, (uint8_t)t24);
    { /* psrlq mm6, 0x10 */ g->mm[6] = mmx_psrlq(g->mm[6], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t24;
    { /* movd eax, mm6 */ eax = (uint32_t)((uint32_t)g->mm[6]); }
    t25 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t21 + 3u, (uint8_t)t25);
    t26 = rd32(arg4 + 4u);
    { /* punpckhdq mm2, mm7 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[7]); }
    { /* psrlw mm2, 5 */ g->mm[2] = mmx_psrlw(g->mm[2], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t25;
    { /* movd eax, mm2 */ eax = (uint32_t)((uint32_t)g->mm[2]); }
    t27 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t26, (uint8_t)t27);
    { /* psrlq mm2, 0x10 */ g->mm[2] = mmx_psrlq(g->mm[2], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t27;
    { /* movd eax, mm2 */ eax = (uint32_t)((uint32_t)g->mm[2]); }
    t28 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t26 + 1u, (uint8_t)t28);
    { /* psrlq mm2, 0x10 */ g->mm[2] = mmx_psrlq(g->mm[2], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t28;
    { /* movd eax, mm2 */ eax = (uint32_t)((uint32_t)g->mm[2]); }
    t29 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t26 + 2u, (uint8_t)t29);
    { /* psrlq mm2, 0x10 */ g->mm[2] = mmx_psrlq(g->mm[2], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t29;
    { /* movd eax, mm2 */ eax = (uint32_t)((uint32_t)g->mm[2]); }
    t30 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t26 + 3u, (uint8_t)t30);
    t31 = rd32(arg4 + 8u);
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* psrlw mm5, 5 */ g->mm[5] = mmx_psrlw(g->mm[5], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t30;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t32 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t31, (uint8_t)t32);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t32;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t33 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t31 + 1u, (uint8_t)t33);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t33;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t34 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t31 + 2u, (uint8_t)t34);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t34;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t35 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t31 + 3u, (uint8_t)t35);
    t36 = rd32(arg4 + 0xcu);
    { /* punpckhdq mm1, mm3 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[3]); }
    { /* psrlw mm1, 5 */ g->mm[1] = mmx_psrlw(g->mm[1], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t35;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t37 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t36, (uint8_t)t37);
    { /* psrlq mm1, 0x10 */ g->mm[1] = mmx_psrlq(g->mm[1], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t37;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t38 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t36 + 1u, (uint8_t)t38);
    { /* psrlq mm1, 0x10 */ g->mm[1] = mmx_psrlq(g->mm[1], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t38;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t39 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t36 + 2u, (uint8_t)t39);
    { /* psrlq mm1, 0x10 */ g->mm[1] = mmx_psrlq(g->mm[1], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t39;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t40 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t36 + 3u, (uint8_t)t40);
    t41 = rd32(arg4 + 0x10u);
    { /* movq mm0, qword ptr [esi + 8] */ uint32_t A = arg2 + 8u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x18] */ uint32_t A = arg2 + 0x18u; g->mm[1] = rd64(A); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm3, qword ptr [esi + 0x28] */ uint32_t A = arg2 + 0x28u; g->mm[3] = rd64(A); }
    { /* punpcklwd mm0, mm1 */ g->mm[0] = mmx_punpcklwd(g->mm[0], g->mm[1]); }
    { /* punpckhwd mm2, mm1 */ g->mm[2] = mmx_punpckhwd(g->mm[2], g->mm[1]); }
    { /* movq mm4, mm3 */ g->mm[4] = g->mm[3]; }
    { /* movq mm1, qword ptr [esi + 0x38] */ uint32_t A = arg2 + 0x38u; g->mm[1] = rd64(A); }
    { /* movq mm5, mm2 */ g->mm[5] = g->mm[2]; }
    { /* punpcklwd mm3, mm1 */ g->mm[3] = mmx_punpcklwd(g->mm[3], g->mm[1]); }
    { /* punpckhwd mm4, mm1 */ g->mm[4] = mmx_punpckhwd(g->mm[4], g->mm[1]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* punpckldq mm0, mm3 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[3]); }
    { /* punpckhdq mm1, mm3 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[3]); }
    { /* movq mm3, qword ptr [esi + 0x40] */ uint32_t A = arg2 + 0x40u; g->mm[3] = rd64(A); }
    { /* psrlw mm0, 5 */ g->mm[0] = mmx_psrlw(g->mm[0], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t40;
    { /* movd eax, mm0 */ eax = (uint32_t)((uint32_t)g->mm[0]); }
    t42 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t41, (uint8_t)t42);
    { /* psrlq mm0, 0x10 */ g->mm[0] = mmx_psrlq(g->mm[0], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t42;
    { /* movd eax, mm0 */ eax = (uint32_t)((uint32_t)g->mm[0]); }
    t43 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t41 + 1u, (uint8_t)t43);
    { /* psrlq mm0, 0x10 */ g->mm[0] = mmx_psrlq(g->mm[0], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t43;
    { /* movd eax, mm0 */ eax = (uint32_t)((uint32_t)g->mm[0]); }
    t44 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t41 + 2u, (uint8_t)t44);
    { /* psrlq mm0, 0x10 */ g->mm[0] = mmx_psrlq(g->mm[0], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t44;
    { /* movd eax, mm0 */ eax = (uint32_t)((uint32_t)g->mm[0]); }
    t45 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t41 + 3u, (uint8_t)t45);
    t46 = rd32(arg4 + 0x14u);
    { /* punpckldq mm2, mm4 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[4]); }
    { /* punpckhdq mm5, mm4 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[4]); }
    { /* movq mm4, qword ptr [esi + 0x50] */ uint32_t A = arg2 + 0x50u; g->mm[4] = rd64(A); }
    { /* psrlw mm1, 5 */ g->mm[1] = mmx_psrlw(g->mm[1], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t45;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t47 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t46, (uint8_t)t47);
    { /* psrlq mm1, 0x10 */ g->mm[1] = mmx_psrlq(g->mm[1], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t47;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t48 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t46 + 1u, (uint8_t)t48);
    { /* psrlq mm1, 0x10 */ g->mm[1] = mmx_psrlq(g->mm[1], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t48;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t49 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t46 + 2u, (uint8_t)t49);
    { /* psrlq mm1, 0x10 */ g->mm[1] = mmx_psrlq(g->mm[1], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t49;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t50 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t46 + 3u, (uint8_t)t50);
    t51 = rd32(arg4 + 0x18u);
    { /* movq mm0, qword ptr [esi + 0x60] */ uint32_t A = arg2 + 0x60u; g->mm[0] = rd64(A); }
    { /* movq mm1, mm3 */ g->mm[1] = g->mm[3]; }
    { /* punpcklwd mm3, mm4 */ g->mm[3] = mmx_punpcklwd(g->mm[3], g->mm[4]); }
    { /* punpckhwd mm1, mm4 */ g->mm[1] = mmx_punpckhwd(g->mm[1], g->mm[4]); }
    { /* movq mm4, qword ptr [esi + 0x70] */ uint32_t A = arg2 + 0x70u; g->mm[4] = rd64(A); }
    { /* psrlw mm2, 5 */ g->mm[2] = mmx_psrlw(g->mm[2], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t50;
    { /* movd eax, mm2 */ eax = (uint32_t)((uint32_t)g->mm[2]); }
    t52 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t51, (uint8_t)t52);
    { /* psrlq mm2, 0x10 */ g->mm[2] = mmx_psrlq(g->mm[2], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t52;
    { /* movd eax, mm2 */ eax = (uint32_t)((uint32_t)g->mm[2]); }
    t53 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t51 + 1u, (uint8_t)t53);
    { /* psrlq mm2, 0x10 */ g->mm[2] = mmx_psrlq(g->mm[2], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t53;
    { /* movd eax, mm2 */ eax = (uint32_t)((uint32_t)g->mm[2]); }
    t54 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t51 + 2u, (uint8_t)t54);
    { /* psrlq mm2, 0x10 */ g->mm[2] = mmx_psrlq(g->mm[2], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t54;
    { /* movd eax, mm2 */ eax = (uint32_t)((uint32_t)g->mm[2]); }
    t55 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t51 + 3u, (uint8_t)t55);
    t56 = rd32(arg4 + 0x1cu);
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* psrlw mm5, 5 */ g->mm[5] = mmx_psrlw(g->mm[5], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t55;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t57 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t56, (uint8_t)t57);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t57;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t58 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t56 + 1u, (uint8_t)t58);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t58;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t59 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t56 + 2u, (uint8_t)t59);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t59;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t60 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t56 + 3u, (uint8_t)t60);
    { /* punpcklwd mm0, mm4 */ g->mm[0] = mmx_punpcklwd(g->mm[0], g->mm[4]); }
    { /* punpckhwd mm2, mm4 */ g->mm[2] = mmx_punpckhwd(g->mm[2], g->mm[4]); }
    { /* movq mm4, mm3 */ g->mm[4] = g->mm[3]; }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* punpckldq mm3, mm0 */ g->mm[3] = mmx_punpckldq(g->mm[3], g->mm[0]); }
    t61 = rd32(arg4);
    { /* psrlw mm3, 5 */ g->mm[3] = mmx_psrlw(g->mm[3], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t60;
    { /* movd eax, mm3 */ eax = (uint32_t)((uint32_t)g->mm[3]); }
    t62 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t61 + 4u, (uint8_t)t62);
    { /* psrlq mm3, 0x10 */ g->mm[3] = mmx_psrlq(g->mm[3], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t62;
    { /* movd eax, mm3 */ eax = (uint32_t)((uint32_t)g->mm[3]); }
    t63 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t61 + 5u, (uint8_t)t63);
    { /* psrlq mm3, 0x10 */ g->mm[3] = mmx_psrlq(g->mm[3], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t63;
    { /* movd eax, mm3 */ eax = (uint32_t)((uint32_t)g->mm[3]); }
    t64 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t61 + 6u, (uint8_t)t64);
    { /* psrlq mm3, 0x10 */ g->mm[3] = mmx_psrlq(g->mm[3], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t64;
    { /* movd eax, mm3 */ eax = (uint32_t)((uint32_t)g->mm[3]); }
    t65 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t61 + 7u, (uint8_t)t65);
    t66 = rd32(arg4 + 4u);
    { /* punpckhdq mm4, mm0 */ g->mm[4] = mmx_punpckhdq(g->mm[4], g->mm[0]); }
    { /* psrlw mm4, 5 */ g->mm[4] = mmx_psrlw(g->mm[4], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t65;
    { /* movd eax, mm4 */ eax = (uint32_t)((uint32_t)g->mm[4]); }
    t67 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t66 + 4u, (uint8_t)t67);
    { /* psrlq mm4, 0x10 */ g->mm[4] = mmx_psrlq(g->mm[4], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t67;
    { /* movd eax, mm4 */ eax = (uint32_t)((uint32_t)g->mm[4]); }
    t68 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t66 + 5u, (uint8_t)t68);
    { /* psrlq mm4, 0x10 */ g->mm[4] = mmx_psrlq(g->mm[4], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t68;
    { /* movd eax, mm4 */ eax = (uint32_t)((uint32_t)g->mm[4]); }
    t69 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t66 + 6u, (uint8_t)t69);
    { /* psrlq mm4, 0x10 */ g->mm[4] = mmx_psrlq(g->mm[4], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t69;
    { /* movd eax, mm4 */ eax = (uint32_t)((uint32_t)g->mm[4]); }
    t70 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t66 + 7u, (uint8_t)t70);
    t71 = rd32(arg4 + 8u);
    { /* punpckldq mm1, mm2 */ g->mm[1] = mmx_punpckldq(g->mm[1], g->mm[2]); }
    { /* psrlw mm1, 5 */ g->mm[1] = mmx_psrlw(g->mm[1], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t70;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t72 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t71 + 4u, (uint8_t)t72);
    { /* psrlq mm1, 0x10 */ g->mm[1] = mmx_psrlq(g->mm[1], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t72;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t73 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t71 + 5u, (uint8_t)t73);
    { /* psrlq mm1, 0x10 */ g->mm[1] = mmx_psrlq(g->mm[1], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t73;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t74 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t71 + 6u, (uint8_t)t74);
    { /* psrlq mm1, 0x10 */ g->mm[1] = mmx_psrlq(g->mm[1], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t74;
    { /* movd eax, mm1 */ eax = (uint32_t)((uint32_t)g->mm[1]); }
    t75 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t71 + 7u, (uint8_t)t75);
    t76 = rd32(arg4 + 0xcu);
    { /* punpckhdq mm5, mm2 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[2]); }
    { /* psrlw mm5, 5 */ g->mm[5] = mmx_psrlw(g->mm[5], (uint64_t)0x5u); }
    eax = (eax & 0x300u) | t75;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t77 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t76 + 4u, (uint8_t)t77);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t77;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t78 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t76 + 5u, (uint8_t)t78);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t78;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    t79 = rd8(arg6 + (eax & 0x3ffu));
    wr8(arg5 + t76 + 6u, (uint8_t)t79);
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    eax = (eax & 0x300u) | t79;
    { /* movd eax, mm5 */ eax = (uint32_t)((uint32_t)g->mm[5]); }
    wr8(arg5 + t76 + 7u, rd8(arg6 + (eax & 0x3ffu)));
    { /* emms  */  }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030ceea(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1030ceea(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
