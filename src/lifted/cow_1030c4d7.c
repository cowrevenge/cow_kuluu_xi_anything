/* f_0x1030c4d7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1030c4d7(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 272u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0x14u, arg3);
    loc_18 = arg1;
    loc_10 = arg2;
    loc_8 = 2u;
    loc_14 = arg3;
L_1030c4fe: ;
    { /* movq mm0, qword ptr [esi + 0x20] */ uint32_t A = loc_18 + 0x20u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [edi + 0x20] */ uint32_t A = loc_10 + 0x20u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x60] */ uint32_t A = loc_18 + 0x60u; g->mm[2] = rd64(A); }
    { /* pmullw mm0, mm1 */ g->mm[0] = mmx_pmullw(g->mm[0], g->mm[1]); }
    { /* movq mm3, qword ptr [edi + 0x60] */ uint32_t A = loc_10 + 0x60u; g->mm[3] = rd64(A); }
    { /* movq mm6, qword ptr [0x10349a18] */ uint32_t A = COW_IMG(0x10349a18u); g->mm[6] = rd64(A); }
    { /* pmullw mm2, mm3 */ g->mm[2] = mmx_pmullw(g->mm[2], g->mm[3]); }
    { /* movq mm7, qword ptr [0x10349a38] */ uint32_t A = COW_IMG(0x10349a38u); g->mm[7] = rd64(A); }
    { /* movq mm4, mm0 */ g->mm[4] = g->mm[0]; }
    { /* pmaddwd mm4, mm6 */ g->mm[4] = mmx_pmaddwd(g->mm[4], g->mm[6]); }
    { /* movq mm5, mm0 */ g->mm[5] = g->mm[0]; }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    { /* movq mm1, qword ptr [0x10349a10] */ uint32_t A = COW_IMG(0x10349a10u); g->mm[1] = rd64(A); }
    { /* pmaddwd mm5, mm6 */ g->mm[5] = mmx_pmaddwd(g->mm[5], g->mm[6]); }
    { /* psrlq mm3, 0x10 */ g->mm[3] = mmx_psrlq(g->mm[3], (uint64_t)0x10u); }
    { /* paddw mm0, mm2 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[2]); }
    { /* pmaddwd mm2, mm7 */ g->mm[2] = mmx_pmaddwd(g->mm[2], g->mm[7]); }
    { /* movq mm6, mm0 */ g->mm[6] = g->mm[0]; }
    { /* psrlq mm6, 0x10 */ g->mm[6] = mmx_psrlq(g->mm[6], (uint64_t)0x10u); }
    { /* pmaddwd mm3, mm7 */ g->mm[3] = mmx_pmaddwd(g->mm[3], g->mm[7]); }
    { /* movq mm7, qword ptr [0x10349a60] */ uint32_t A = COW_IMG(0x10349a60u); g->mm[7] = rd64(A); }
    { /* pmaddwd mm0, mm1 */ g->mm[0] = mmx_pmaddwd(g->mm[0], g->mm[1]); }
    { /* pmaddwd mm6, mm1 */ g->mm[6] = mmx_pmaddwd(g->mm[6], g->mm[1]); }
    { /* pxor mm2, mm7 */ g->mm[2] = mmx_pxor(g->mm[2], g->mm[7]); }
    { /* movq mm1, qword ptr [0x10349a68] */ uint32_t A = COW_IMG(0x10349a68u); g->mm[1] = rd64(A); }
    { /* pxor mm3, mm7 */ g->mm[3] = mmx_pxor(g->mm[3], g->mm[7]); }
    { /* paddd mm2, mm1 */ g->mm[2] = mmx_paddd(g->mm[2], g->mm[1]); }
    { /* paddd mm3, mm1 */ g->mm[3] = mmx_paddd(g->mm[3], g->mm[1]); }
    { /* paddd mm2, mm0 */ g->mm[2] = mmx_paddd(g->mm[2], g->mm[0]); }
    { /* paddd mm4, mm0 */ g->mm[4] = mmx_paddd(g->mm[4], g->mm[0]); }
    { /* movq mm0, qword ptr [esi] */ uint32_t A = loc_18; g->mm[0] = rd64(A); }
    { /* paddd mm3, mm6 */ g->mm[3] = mmx_paddd(g->mm[3], g->mm[6]); }
    { /* movq mm1, qword ptr [edi] */ uint32_t A = loc_10; g->mm[1] = rd64(A); }
    { /* paddd mm5, mm6 */ g->mm[5] = mmx_paddd(g->mm[5], g->mm[6]); }
    { /* movq mm6, qword ptr [esi + 0x40] */ uint32_t A = loc_18 + 0x40u; g->mm[6] = rd64(A); }
    { /* pmullw mm0, mm1 */ g->mm[0] = mmx_pmullw(g->mm[0], g->mm[1]); }
    { /* movq mm7, qword ptr [edi + 0x40] */ uint32_t A = loc_10 + 0x40u; g->mm[7] = rd64(A); }
    { /* movq qword ptr [ebp - 0x9c], mm2 */ uint32_t A = sp0 - 0x100u; wr64(A, g->mm[2]); }
    { /* pmullw mm6, mm7 */ g->mm[6] = mmx_pmullw(g->mm[6], g->mm[7]); }
    { /* movq mm7, qword ptr [0x10349a70] */ uint32_t A = COW_IMG(0x10349a70u); g->mm[7] = rd64(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* paddw mm0, mm6 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[6]); }
    { /* psubw mm1, mm6 */ g->mm[1] = mmx_psubw(g->mm[1], g->mm[6]); }
    { /* movq mm6, mm0 */ g->mm[6] = g->mm[0]; }
    { /* pmaddwd mm0, mm7 */ g->mm[0] = mmx_pmaddwd(g->mm[0], g->mm[7]); }
    { /* psrlq mm6, 0x10 */ g->mm[6] = mmx_psrlq(g->mm[6], (uint64_t)0x10u); }
    { /* pmaddwd mm6, mm7 */ g->mm[6] = mmx_pmaddwd(g->mm[6], g->mm[7]); }
    { /* movq mm2, mm1 */ g->mm[2] = g->mm[1]; }
    { /* pmaddwd mm1, mm7 */ g->mm[1] = mmx_pmaddwd(g->mm[1], g->mm[7]); }
    { /* psrlq mm2, 0x10 */ g->mm[2] = mmx_psrlq(g->mm[2], (uint64_t)0x10u); }
    { /* pmaddwd mm2, mm7 */ g->mm[2] = mmx_pmaddwd(g->mm[2], g->mm[7]); }
    { /* pslld mm0, 0xd */ g->mm[0] = mmx_pslld(g->mm[0], (uint64_t)0xDu); }
    { /* movq mm7, mm4 */ g->mm[7] = g->mm[4]; }
    { /* pslld mm6, 0xd */ g->mm[6] = mmx_pslld(g->mm[6], (uint64_t)0xDu); }
    { /* paddd mm4, mm0 */ g->mm[4] = mmx_paddd(g->mm[4], g->mm[0]); }
    { /* psubd mm0, mm7 */ g->mm[0] = mmx_psubd(g->mm[0], g->mm[7]); }
    { /* movq mm7, mm5 */ g->mm[7] = g->mm[5]; }
    { /* pslld mm2, 0xd */ g->mm[2] = mmx_pslld(g->mm[2], (uint64_t)0xDu); }
    { /* movq qword ptr [ebp - 0x8c], mm0 */ uint32_t A = sp0 - 0xf0u; wr64(A, g->mm[0]); }
    { /* paddd mm5, mm6 */ g->mm[5] = mmx_paddd(g->mm[5], g->mm[6]); }
    { /* movq mm0, qword ptr [ebp - 0x9c] */ uint32_t A = sp0 - 0x100u; g->mm[0] = rd64(A); }
    { /* psubd mm6, mm7 */ g->mm[6] = mmx_psubd(g->mm[6], g->mm[7]); }
    { /* movq qword ptr [ebp - 0x7c], mm5 */ uint32_t A = sp0 - 0xe0u; wr64(A, g->mm[5]); }
    { /* movq mm7, mm3 */ g->mm[7] = g->mm[3]; }
    { /* movq qword ptr [ebp - 0x6c], mm6 */ uint32_t A = sp0 - 0xd0u; wr64(A, g->mm[6]); }
    { /* paddd mm3, mm2 */ g->mm[3] = mmx_paddd(g->mm[3], g->mm[2]); }
    { /* movq qword ptr [ebp - 0x5c], mm4 */ uint32_t A = sp0 - 0xc0u; wr64(A, g->mm[4]); }
    { /* pslld mm1, 0xd */ g->mm[1] = mmx_pslld(g->mm[1], (uint64_t)0xDu); }
    { /* movq qword ptr [ebp - 0x4c], mm3 */ uint32_t A = sp0 - 0xb0u; wr64(A, g->mm[3]); }
    { /* psubd mm2, mm7 */ g->mm[2] = mmx_psubd(g->mm[2], g->mm[7]); }
    { /* movq mm6, qword ptr [esi + 0x10] */ uint32_t A = loc_18 + 0x10u; g->mm[6] = rd64(A); }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* movq qword ptr [ebp - 0x3c], mm2 */ uint32_t A = sp0 - 0xa0u; wr64(A, g->mm[2]); }
    { /* paddd mm0, mm1 */ g->mm[0] = mmx_paddd(g->mm[0], g->mm[1]); }
    { /* movq mm7, qword ptr [edi + 0x10] */ uint32_t A = loc_10 + 0x10u; g->mm[7] = rd64(A); }
    { /* movq qword ptr [ebp - 0x2c], mm0 */ uint32_t A = sp0 - 0x90u; wr64(A, g->mm[0]); }
    { /* psubd mm1, mm3 */ g->mm[1] = mmx_psubd(g->mm[1], g->mm[3]); }
    { /* movq mm0, qword ptr [esi + 0x70] */ uint32_t A = loc_18 + 0x70u; g->mm[0] = rd64(A); }
    { /* pmullw mm6, mm7 */ g->mm[6] = mmx_pmullw(g->mm[6], g->mm[7]); }
    { /* movq qword ptr [ebp - 0x1c], mm1 */ uint32_t A = sp0 - 0x80u; wr64(A, g->mm[1]); }
    { /* movq mm1, qword ptr [edi + 0x70] */ uint32_t A = loc_10 + 0x70u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x50] */ uint32_t A = loc_18 + 0x50u; g->mm[2] = rd64(A); }
    { /* pmullw mm0, mm1 */ g->mm[0] = mmx_pmullw(g->mm[0], g->mm[1]); }
    { /* movq mm3, qword ptr [edi + 0x50] */ uint32_t A = loc_10 + 0x50u; g->mm[3] = rd64(A); }
    { /* movq mm4, qword ptr [esi + 0x30] */ uint32_t A = loc_18 + 0x30u; g->mm[4] = rd64(A); }
    { /* pmullw mm2, mm3 */ g->mm[2] = mmx_pmullw(g->mm[2], g->mm[3]); }
    { /* movq mm5, qword ptr [edi + 0x30] */ uint32_t A = loc_10 + 0x30u; g->mm[5] = rd64(A); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* movq qword ptr [ebp - 0xc], mm6 */ uint32_t A = sp0 - 0x70u; wr64(A, g->mm[6]); }
    { /* pmullw mm4, mm5 */ g->mm[4] = mmx_pmullw(g->mm[4], g->mm[5]); }
    { /* movq qword ptr [ebp + 4], mm0 */ uint32_t A = sp0 - 0x60u; wr64(A, g->mm[0]); }
    { /* paddw mm0, mm6 */ g->mm[0] = mmx_paddw(g->mm[0], g->mm[6]); }
    { /* movq qword ptr [ebp + 0x14], mm2 */ uint32_t A = sp0 - 0x50u; wr64(A, g->mm[2]); }
    { /* movq mm3, mm2 */ g->mm[3] = g->mm[2]; }
    { /* movq qword ptr [ebp + 0x24], mm4 */ uint32_t A = sp0 - 0x40u; wr64(A, g->mm[4]); }
    { /* paddw mm2, mm4 */ g->mm[2] = mmx_paddw(g->mm[2], g->mm[4]); }
    { /* paddw mm1, mm4 */ g->mm[1] = mmx_paddw(g->mm[1], g->mm[4]); }
    { /* movq mm4, qword ptr [0x10349a28] */ uint32_t A = COW_IMG(0x10349a28u); g->mm[4] = rd64(A); }
    { /* paddw mm3, mm6 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[6]); }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* movq mm7, mm0 */ g->mm[7] = g->mm[0]; }
    { /* psrlq mm7, 0x10 */ g->mm[7] = mmx_psrlq(g->mm[7], (uint64_t)0x10u); }
    { /* paddw mm5, mm3 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[3]); }
    { /* movq mm6, mm5 */ g->mm[6] = g->mm[5]; }
    { /* pmaddwd mm5, mm4 */ g->mm[5] = mmx_pmaddwd(g->mm[5], g->mm[4]); }
    { /* pmaddwd mm0, qword ptr [0x10349a20] */ uint32_t A = COW_IMG(0x10349a20u); g->mm[0] = mmx_pmaddwd(g->mm[0], rd64(A)); }
    { /* psrlq mm6, 0x10 */ g->mm[6] = mmx_psrlq(g->mm[6], (uint64_t)0x10u); }
    { /* pmaddwd mm6, mm4 */ g->mm[6] = mmx_pmaddwd(g->mm[6], g->mm[4]); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* movq qword ptr [ebp + 0x34], mm5 */ uint32_t A = sp0 - 0x30u; wr64(A, g->mm[5]); }
    { /* psrlq mm4, 0x10 */ g->mm[4] = mmx_psrlq(g->mm[4], (uint64_t)0x10u); }
    { /* pxor mm0, qword ptr [0x10349a60] */ uint32_t A = COW_IMG(0x10349a60u); g->mm[0] = mmx_pxor(g->mm[0], rd64(A)); }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* movq qword ptr [ebp + 0x3c], mm6 */ uint32_t A = sp0 - 0x28u; wr64(A, g->mm[6]); }
    { /* psrlq mm5, 0x10 */ g->mm[5] = mmx_psrlq(g->mm[5], (uint64_t)0x10u); }
    { /* movq mm6, qword ptr [0x10349a50] */ uint32_t A = COW_IMG(0x10349a50u); g->mm[6] = rd64(A); }
    { /* paddd mm0, qword ptr [0x10349a68] */ uint32_t A = COW_IMG(0x10349a68u); g->mm[0] = mmx_paddd(g->mm[0], rd64(A)); }
    { /* pmaddwd mm2, mm6 */ g->mm[2] = mmx_pmaddwd(g->mm[2], g->mm[6]); }
    { /* movq qword ptr [ebp - 0x64], mm0 */ uint32_t A = sp0 - 0xc8u; wr64(A, g->mm[0]); }
    { /* pmaddwd mm4, mm6 */ g->mm[4] = mmx_pmaddwd(g->mm[4], g->mm[6]); }
    { /* pmaddwd mm7, qword ptr [0x10349a20] */ uint32_t A = COW_IMG(0x10349a20u); g->mm[7] = mmx_pmaddwd(g->mm[7], rd64(A)); }
    { /* movq mm0, mm3 */ g->mm[0] = g->mm[3]; }
    { /* movq mm6, qword ptr [0x10349a40] */ uint32_t A = COW_IMG(0x10349a40u); g->mm[6] = rd64(A); }
    { /* psrlq mm0, 0x10 */ g->mm[0] = mmx_psrlq(g->mm[0], (uint64_t)0x10u); }
    { /* pxor mm2, qword ptr [0x10349a60] */ uint32_t A = COW_IMG(0x10349a60u); g->mm[2] = mmx_pxor(g->mm[2], rd64(A)); }
    { /* pmaddwd mm1, mm6 */ g->mm[1] = mmx_pmaddwd(g->mm[1], g->mm[6]); }
    { /* paddd mm2, qword ptr [0x10349a68] */ uint32_t A = COW_IMG(0x10349a68u); g->mm[2] = mmx_paddd(g->mm[2], rd64(A)); }
    { /* pmaddwd mm5, mm6 */ g->mm[5] = mmx_pmaddwd(g->mm[5], g->mm[6]); }
    { /* movq mm6, qword ptr [0x10349a08] */ uint32_t A = COW_IMG(0x10349a08u); g->mm[6] = rd64(A); }
    { /* pxor mm4, qword ptr [0x10349a60] */ uint32_t A = COW_IMG(0x10349a60u); g->mm[4] = mmx_pxor(g->mm[4], rd64(A)); }
    { /* pmaddwd mm3, mm6 */ g->mm[3] = mmx_pmaddwd(g->mm[3], g->mm[6]); }
    { /* paddd mm4, qword ptr [0x10349a68] */ uint32_t A = COW_IMG(0x10349a68u); g->mm[4] = mmx_paddd(g->mm[4], rd64(A)); }
    { /* pmaddwd mm0, mm6 */ g->mm[0] = mmx_pmaddwd(g->mm[0], g->mm[6]); }
    { /* movq mm6, qword ptr [0x10349a60] */ uint32_t A = COW_IMG(0x10349a60u); g->mm[6] = rd64(A); }
    { /* pxor mm1, mm6 */ g->mm[1] = mmx_pxor(g->mm[1], g->mm[6]); }
    { /* pxor mm7, mm6 */ g->mm[7] = mmx_pxor(g->mm[7], g->mm[6]); }
    { /* paddd mm1, qword ptr [0x10349a68] */ uint32_t A = COW_IMG(0x10349a68u); g->mm[1] = mmx_paddd(g->mm[1], rd64(A)); }
    { /* pxor mm5, mm6 */ g->mm[5] = mmx_pxor(g->mm[5], g->mm[6]); }
    { /* paddd mm7, qword ptr [0x10349a68] */ uint32_t A = COW_IMG(0x10349a68u); g->mm[7] = mmx_paddd(g->mm[7], rd64(A)); }
    { /* pxor mm3, mm6 */ g->mm[3] = mmx_pxor(g->mm[3], g->mm[6]); }
    { /* paddd mm5, qword ptr [0x10349a68] */ uint32_t A = COW_IMG(0x10349a68u); g->mm[5] = mmx_paddd(g->mm[5], rd64(A)); }
    { /* movq qword ptr [ebp - 0x24], mm7 */ uint32_t A = sp0 - 0x88u; wr64(A, g->mm[7]); }
    { /* pxor mm0, mm6 */ g->mm[0] = mmx_pxor(g->mm[0], g->mm[6]); }
    { /* paddd mm1, qword ptr [ebp + 0x34] */ uint32_t A = sp0 - 0x30u; g->mm[1] = mmx_paddd(g->mm[1], rd64(A)); }
    { /* movq mm6, qword ptr [ebp - 0x64] */ uint32_t A = sp0 - 0xc8u; g->mm[6] = rd64(A); }
    { /* paddd mm5, qword ptr [ebp + 0x3c] */ uint32_t A = sp0 - 0x28u; g->mm[5] = mmx_paddd(g->mm[5], rd64(A)); }
    { /* paddd mm6, mm1 */ g->mm[6] = mmx_paddd(g->mm[6], g->mm[1]); }
    { /* paddd mm3, qword ptr [0x10349a68] */ uint32_t A = COW_IMG(0x10349a68u); g->mm[3] = mmx_paddd(g->mm[3], rd64(A)); }
    { /* paddd mm1, mm2 */ g->mm[1] = mmx_paddd(g->mm[1], g->mm[2]); }
    { /* paddd mm0, qword ptr [0x10349a68] */ uint32_t A = COW_IMG(0x10349a68u); g->mm[0] = mmx_paddd(g->mm[0], rd64(A)); }
    { /* paddd mm7, mm5 */ g->mm[7] = mmx_paddd(g->mm[7], g->mm[5]); }
    { /* paddd mm3, qword ptr [ebp + 0x34] */ uint32_t A = sp0 - 0x30u; g->mm[3] = mmx_paddd(g->mm[3], rd64(A)); }
    { /* paddd mm5, mm4 */ g->mm[5] = mmx_paddd(g->mm[5], g->mm[4]); }
    { /* paddd mm0, qword ptr [ebp + 0x3c] */ uint32_t A = sp0 - 0x28u; g->mm[0] = mmx_paddd(g->mm[0], rd64(A)); }
    { /* paddd mm2, mm3 */ g->mm[2] = mmx_paddd(g->mm[2], g->mm[3]); }
    { /* paddd mm3, qword ptr [ebp - 0x64] */ uint32_t A = sp0 - 0xc8u; g->mm[3] = mmx_paddd(g->mm[3], rd64(A)); }
    { /* paddd mm4, mm0 */ g->mm[4] = mmx_paddd(g->mm[4], g->mm[0]); }
    { /* paddd mm0, qword ptr [ebp - 0x24] */ uint32_t A = sp0 - 0x88u; g->mm[0] = mmx_paddd(g->mm[0], rd64(A)); }
    { /* movq qword ptr [ebp + 0x44], mm1 */ uint32_t A = sp0 - 0x20u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [ebp - 0x14], mm0 */ uint32_t A = sp0 - 0x78u; wr64(A, g->mm[0]); }
    { /* movq mm0, qword ptr [ebp + 4] */ uint32_t A = sp0 - 0x60u; g->mm[0] = rd64(A); }
    { /* movq qword ptr [ebp - 0x54], mm2 */ uint32_t A = sp0 - 0xb8u; wr64(A, g->mm[2]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* movq mm2, qword ptr [0x10349a00] */ uint32_t A = COW_IMG(0x10349a00u); g->mm[2] = rd64(A); }
    { /* psrlq mm1, 0x10 */ g->mm[1] = mmx_psrlq(g->mm[1], (uint64_t)0x10u); }
    { /* movq qword ptr [ebp - 4], mm3 */ uint32_t A = sp0 - 0x68u; wr64(A, g->mm[3]); }
    { /* pmaddwd mm0, mm2 */ g->mm[0] = mmx_pmaddwd(g->mm[0], g->mm[2]); }
    { /* movq mm3, qword ptr [ebp + 0x14] */ uint32_t A = sp0 - 0x50u; g->mm[3] = rd64(A); }
    { /* pmaddwd mm1, mm2 */ g->mm[1] = mmx_pmaddwd(g->mm[1], g->mm[2]); }
    { /* movq qword ptr [ebp - 0x74], mm4 */ uint32_t A = sp0 - 0xd8u; wr64(A, g->mm[4]); }
    { /* movq mm2, mm3 */ g->mm[2] = g->mm[3]; }
    { /* movq mm4, qword ptr [0x10349a48] */ uint32_t A = COW_IMG(0x10349a48u); g->mm[4] = rd64(A); }
    { /* psrlq mm2, 0x10 */ g->mm[2] = mmx_psrlq(g->mm[2], (uint64_t)0x10u); }
    { /* movq qword ptr [ebp + 0xc], mm5 */ uint32_t A = sp0 - 0x58u; wr64(A, g->mm[5]); }
    { /* pmaddwd mm3, mm4 */ g->mm[3] = mmx_pmaddwd(g->mm[3], g->mm[4]); }
    { /* movq mm5, qword ptr [ebp + 0x24] */ uint32_t A = sp0 - 0x40u; g->mm[5] = rd64(A); }
    { /* pmaddwd mm2, mm4 */ g->mm[2] = mmx_pmaddwd(g->mm[2], g->mm[4]); }
    { /* movq qword ptr [ebp - 0x44], mm6 */ uint32_t A = sp0 - 0xa8u; wr64(A, g->mm[6]); }
    { /* movq mm4, mm5 */ g->mm[4] = g->mm[5]; }
    { /* movq mm6, qword ptr [0x10349a58] */ uint32_t A = COW_IMG(0x10349a58u); g->mm[6] = rd64(A); }
    { /* psrlq mm4, 0x10 */ g->mm[4] = mmx_psrlq(g->mm[4], (uint64_t)0x10u); }
    { /* movq qword ptr [ebp + 0x1c], mm7 */ uint32_t A = sp0 - 0x48u; wr64(A, g->mm[7]); }
    { /* pmaddwd mm5, mm6 */ g->mm[5] = mmx_pmaddwd(g->mm[5], g->mm[6]); }
    { /* movq mm7, qword ptr [ebp - 0xc] */ uint32_t A = sp0 - 0x70u; g->mm[7] = rd64(A); }
    { /* pmaddwd mm4, mm6 */ g->mm[4] = mmx_pmaddwd(g->mm[4], g->mm[6]); }
    { /* paddd mm0, qword ptr [ebp - 0x44] */ uint32_t A = sp0 - 0xa8u; g->mm[0] = mmx_paddd(g->mm[0], rd64(A)); }
    { /* movq mm6, mm7 */ g->mm[6] = g->mm[7]; }
    { /* paddd mm1, qword ptr [ebp + 0x1c] */ uint32_t A = sp0 - 0x48u; g->mm[1] = mmx_paddd(g->mm[1], rd64(A)); }
    { /* psrlq mm6, 0x10 */ g->mm[6] = mmx_psrlq(g->mm[6], (uint64_t)0x10u); }
    { /* movq qword ptr [ebp - 0x84], mm0 */ uint32_t A = sp0 - 0xe8u; wr64(A, g->mm[0]); }
    { /* movq mm0, qword ptr [0x10349a30] */ uint32_t A = COW_IMG(0x10349a30u); g->mm[0] = rd64(A); }
    { /* movq qword ptr [ebp + 0x2c], mm1 */ uint32_t A = sp0 - 0x38u; wr64(A, g->mm[1]); }
    { /* pmaddwd mm7, mm0 */ g->mm[7] = mmx_pmaddwd(g->mm[7], g->mm[0]); }
    { /* paddd mm3, qword ptr [ebp - 0x54] */ uint32_t A = sp0 - 0xb8u; g->mm[3] = mmx_paddd(g->mm[3], rd64(A)); }
    { /* pmaddwd mm6, mm0 */ g->mm[6] = mmx_pmaddwd(g->mm[6], g->mm[0]); }
    { /* movq mm0, qword ptr [ebp - 0x5c] */ uint32_t A = sp0 - 0xc0u; g->mm[0] = rd64(A); }
    { /* paddd mm7, qword ptr [ebp - 4] */ uint32_t A = sp0 - 0x68u; g->mm[7] = mmx_paddd(g->mm[7], rd64(A)); }
    { /* paddd mm6, qword ptr [ebp - 0x14] */ uint32_t A = sp0 - 0x78u; g->mm[6] = mmx_paddd(g->mm[6], rd64(A)); }
    { /* psubd mm0, mm7 */ g->mm[0] = mmx_psubd(g->mm[0], g->mm[7]); }
    { /* movq mm1, qword ptr [ebp - 0x7c] */ uint32_t A = sp0 - 0xe0u; g->mm[1] = rd64(A); }
    { /* movq qword ptr [ebp - 0x34], mm3 */ uint32_t A = sp0 - 0x98u; wr64(A, g->mm[3]); }
    { /* psubd mm1, mm6 */ g->mm[1] = mmx_psubd(g->mm[1], g->mm[6]); }
    { /* movq mm3, qword ptr [0x10349a78] */ uint32_t A = COW_IMG(0x10349a78u); g->mm[3] = rd64(A); }
    { /* paddd mm2, qword ptr [ebp - 0x74] */ uint32_t A = sp0 - 0xd8u; g->mm[2] = mmx_paddd(g->mm[2], rd64(A)); }
    { /* paddd mm0, mm3 */ g->mm[0] = mmx_paddd(g->mm[0], g->mm[3]); }
    { /* paddd mm7, qword ptr [ebp - 0x5c] */ uint32_t A = sp0 - 0xc0u; g->mm[7] = mmx_paddd(g->mm[7], rd64(A)); }
    { /* psrad mm0, 0xb */ g->mm[0] = mmx_psrad(g->mm[0], (uint64_t)0xBu); }
    { /* movq qword ptr [ebp - 0x94], mm2 */ uint32_t A = sp0 - 0xf8u; wr64(A, g->mm[2]); }
    { /* paddd mm1, mm3 */ g->mm[1] = mmx_paddd(g->mm[1], g->mm[3]); }
    { /* paddd mm6, qword ptr [ebp - 0x7c] */ uint32_t A = sp0 - 0xe0u; g->mm[6] = mmx_paddd(g->mm[6], rd64(A)); }
    { /* psrad mm1, 0xb */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0xBu); }
    { /* paddd mm5, qword ptr [ebp + 0x44] */ uint32_t A = sp0 - 0x20u; g->mm[5] = mmx_paddd(g->mm[5], rd64(A)); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* paddd mm4, qword ptr [ebp + 0xc] */ uint32_t A = sp0 - 0x58u; g->mm[4] = mmx_paddd(g->mm[4], rd64(A)); }
    { /* punpcklwd mm0, mm1 */ g->mm[0] = mmx_punpcklwd(g->mm[0], g->mm[1]); }
    { /* paddd mm6, mm3 */ g->mm[6] = mmx_paddd(g->mm[6], g->mm[3]); }
    { /* punpckhwd mm2, mm1 */ g->mm[2] = mmx_punpckhwd(g->mm[2], g->mm[1]); }
    { /* paddd mm7, mm3 */ g->mm[7] = mmx_paddd(g->mm[7], g->mm[3]); }
    { /* punpckldq mm0, mm2 */ g->mm[0] = mmx_punpckldq(g->mm[0], g->mm[2]); }
    { /* movq qword ptr [edi + 0x70], mm0 */ uint32_t A = loc_14 + 0x70u; wr64(A, g->mm[0]); }
    { /* psrad mm6, 0xb */ g->mm[6] = mmx_psrad(g->mm[6], (uint64_t)0xBu); }
    { /* movq mm2, qword ptr [ebp - 0x2c] */ uint32_t A = sp0 - 0x90u; g->mm[2] = rd64(A); }
    { /* psrad mm7, 0xb */ g->mm[7] = mmx_psrad(g->mm[7], (uint64_t)0xBu); }
    { /* psubd mm2, mm5 */ g->mm[2] = mmx_psubd(g->mm[2], g->mm[5]); }
    { /* movq mm0, mm7 */ g->mm[0] = g->mm[7]; }
    { /* movq mm1, qword ptr [ebp - 0x4c] */ uint32_t A = sp0 - 0xb0u; g->mm[1] = rd64(A); }
    { /* punpcklwd mm7, mm6 */ g->mm[7] = mmx_punpcklwd(g->mm[7], g->mm[6]); }
    { /* psubd mm1, mm4 */ g->mm[1] = mmx_psubd(g->mm[1], g->mm[4]); }
    { /* punpckhwd mm0, mm6 */ g->mm[0] = mmx_punpckhwd(g->mm[0], g->mm[6]); }
    { /* paddd mm5, qword ptr [ebp - 0x2c] */ uint32_t A = sp0 - 0x90u; g->mm[5] = mmx_paddd(g->mm[5], rd64(A)); }
    { /* punpckldq mm7, mm0 */ g->mm[7] = mmx_punpckldq(g->mm[7], g->mm[0]); }
    { /* paddd mm4, qword ptr [ebp - 0x4c] */ uint32_t A = sp0 - 0xb0u; g->mm[4] = mmx_paddd(g->mm[4], rd64(A)); }
    { /* paddd mm2, mm3 */ g->mm[2] = mmx_paddd(g->mm[2], g->mm[3]); }
    { /* paddd mm1, mm3 */ g->mm[1] = mmx_paddd(g->mm[1], g->mm[3]); }
    { /* paddd mm5, mm3 */ g->mm[5] = mmx_paddd(g->mm[5], g->mm[3]); }
    { /* paddd mm4, mm3 */ g->mm[4] = mmx_paddd(g->mm[4], g->mm[3]); }
    { /* psrad mm2, 0xb */ g->mm[2] = mmx_psrad(g->mm[2], (uint64_t)0xBu); }
    { /* movq qword ptr [edi], mm7 */ uint32_t A = loc_14; wr64(A, g->mm[7]); }
    { /* psrad mm1, 0xb */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0xBu); }
    { /* movq mm0, mm2 */ g->mm[0] = g->mm[2]; }
    { /* psrad mm5, 0xb */ g->mm[5] = mmx_psrad(g->mm[5], (uint64_t)0xBu); }
    { /* movq mm6, qword ptr [ebp - 0x1c] */ uint32_t A = sp0 - 0x80u; g->mm[6] = rd64(A); }
    { /* punpcklwd mm2, mm1 */ g->mm[2] = mmx_punpcklwd(g->mm[2], g->mm[1]); }
    { /* punpckhwd mm0, mm1 */ g->mm[0] = mmx_punpckhwd(g->mm[0], g->mm[1]); }
    { /* movq mm1, mm5 */ g->mm[1] = g->mm[5]; }
    { /* movq mm7, qword ptr [ebp - 0x3c] */ uint32_t A = sp0 - 0xa0u; g->mm[7] = rd64(A); }
    { /* punpckldq mm2, mm0 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[0]); }
    { /* movq qword ptr [edi + 0x60], mm2 */ uint32_t A = loc_14 + 0x60u; wr64(A, g->mm[2]); }
    { /* psrad mm4, 0xb */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0xBu); }
    { /* movq mm2, mm6 */ g->mm[2] = g->mm[6]; }
    { /* punpcklwd mm5, mm4 */ g->mm[5] = mmx_punpcklwd(g->mm[5], g->mm[4]); }
    { /* paddd mm6, qword ptr [ebp - 0x34] */ uint32_t A = sp0 - 0x98u; g->mm[6] = mmx_paddd(g->mm[6], rd64(A)); }
    { /* punpckhwd mm1, mm4 */ g->mm[1] = mmx_punpckhwd(g->mm[1], g->mm[4]); }
    { /* psubd mm2, qword ptr [ebp - 0x34] */ uint32_t A = sp0 - 0x98u; g->mm[2] = mmx_psubd(g->mm[2], rd64(A)); }
    { /* punpckldq mm5, mm1 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[1]); }
    { /* movq qword ptr [edi + 0x10], mm5 */ uint32_t A = loc_14 + 0x10u; wr64(A, g->mm[5]); }
    { /* movq mm0, mm7 */ g->mm[0] = g->mm[7]; }
    { /* paddd mm7, qword ptr [ebp - 0x94] */ uint32_t A = sp0 - 0xf8u; g->mm[7] = mmx_paddd(g->mm[7], rd64(A)); }
    { /* paddd mm6, mm3 */ g->mm[6] = mmx_paddd(g->mm[6], g->mm[3]); }
    { /* psubd mm0, qword ptr [ebp - 0x94] */ uint32_t A = sp0 - 0xf8u; g->mm[0] = mmx_psubd(g->mm[0], rd64(A)); }
    { /* paddd mm7, mm3 */ g->mm[7] = mmx_paddd(g->mm[7], g->mm[3]); }
    { /* paddd mm2, mm3 */ g->mm[2] = mmx_paddd(g->mm[2], g->mm[3]); }
    { /* psrad mm7, 0xb */ g->mm[7] = mmx_psrad(g->mm[7], (uint64_t)0xBu); }
    { /* paddd mm0, mm3 */ g->mm[0] = mmx_paddd(g->mm[0], g->mm[3]); }
    { /* psrad mm6, 0xb */ g->mm[6] = mmx_psrad(g->mm[6], (uint64_t)0xBu); }
    { /* movq mm1, mm6 */ g->mm[1] = g->mm[6]; }
    { /* psrad mm2, 0xb */ g->mm[2] = mmx_psrad(g->mm[2], (uint64_t)0xBu); }
    { /* movq mm4, qword ptr [ebp - 0x8c] */ uint32_t A = sp0 - 0xf0u; g->mm[4] = rd64(A); }
    { /* punpcklwd mm6, mm7 */ g->mm[6] = mmx_punpcklwd(g->mm[6], g->mm[7]); }
    { /* movq mm5, mm4 */ g->mm[5] = g->mm[4]; }
    { /* punpckhwd mm1, mm7 */ g->mm[1] = mmx_punpckhwd(g->mm[1], g->mm[7]); }
    { /* paddd mm4, qword ptr [ebp - 0x84] */ uint32_t A = sp0 - 0xe8u; g->mm[4] = mmx_paddd(g->mm[4], rd64(A)); }
    { /* punpckldq mm6, mm1 */ g->mm[6] = mmx_punpckldq(g->mm[6], g->mm[1]); }
    { /* psubd mm5, qword ptr [ebp - 0x84] */ uint32_t A = sp0 - 0xe8u; g->mm[5] = mmx_psubd(g->mm[5], rd64(A)); }
    { /* psrad mm0, 0xb */ g->mm[0] = mmx_psrad(g->mm[0], (uint64_t)0xBu); }
    { /* movq qword ptr [edi + 0x20], mm6 */ uint32_t A = loc_14 + 0x20u; wr64(A, g->mm[6]); }
    { /* movq mm6, mm2 */ g->mm[6] = g->mm[2]; }
    { /* paddd mm4, mm3 */ g->mm[4] = mmx_paddd(g->mm[4], g->mm[3]); }
    { /* punpcklwd mm2, mm0 */ g->mm[2] = mmx_punpcklwd(g->mm[2], g->mm[0]); }
    { /* paddd mm5, mm3 */ g->mm[5] = mmx_paddd(g->mm[5], g->mm[3]); }
    { /* punpckhwd mm6, mm0 */ g->mm[6] = mmx_punpckhwd(g->mm[6], g->mm[0]); }
    { /* movq mm0, qword ptr [ebp - 0x6c] */ uint32_t A = sp0 - 0xd0u; g->mm[0] = rd64(A); }
    { /* punpckldq mm2, mm6 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[6]); }
    { /* movq mm1, mm0 */ g->mm[1] = g->mm[0]; }
    { /* psrad mm4, 0xb */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0xBu); }
    { /* paddd mm0, qword ptr [ebp + 0x2c] */ uint32_t A = sp0 - 0x38u; g->mm[0] = mmx_paddd(g->mm[0], rd64(A)); }
    { /* psrad mm5, 0xb */ g->mm[5] = mmx_psrad(g->mm[5], (uint64_t)0xBu); }
    { /* paddd mm0, mm3 */ g->mm[0] = mmx_paddd(g->mm[0], g->mm[3]); }
    { /* movq mm6, mm4 */ g->mm[6] = g->mm[4]; }
    { /* psubd mm1, qword ptr [ebp + 0x2c] */ uint32_t A = sp0 - 0x38u; g->mm[1] = mmx_psubd(g->mm[1], rd64(A)); }
    { /* psrad mm0, 0xb */ g->mm[0] = mmx_psrad(g->mm[0], (uint64_t)0xBu); }
    { /* paddd mm1, mm3 */ g->mm[1] = mmx_paddd(g->mm[1], g->mm[3]); }
    { /* punpcklwd mm4, mm0 */ g->mm[4] = mmx_punpcklwd(g->mm[4], g->mm[0]); }
    { /* movq mm3, mm5 */ g->mm[3] = g->mm[5]; }
    { /* punpckhwd mm6, mm0 */ g->mm[6] = mmx_punpckhwd(g->mm[6], g->mm[0]); }
    { /* movq qword ptr [edi + 0x50], mm2 */ uint32_t A = loc_14 + 0x50u; wr64(A, g->mm[2]); }
    { /* punpckldq mm4, mm6 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[6]); }
    { /* psrad mm1, 0xb */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0xBu); }
    { /* movq qword ptr [edi + 0x30], mm4 */ uint32_t A = loc_14 + 0x30u; wr64(A, g->mm[4]); }
    { /* punpcklwd mm5, mm1 */ g->mm[5] = mmx_punpcklwd(g->mm[5], g->mm[1]); }
    { /* punpckhwd mm3, mm1 */ g->mm[3] = mmx_punpckhwd(g->mm[3], g->mm[1]); }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    wr32(sp0 - 0x18u, loc_18 + 8u);
    wr32(sp0 - 0x10u, loc_10 + 8u);
    { /* movq qword ptr [edi + 0x40], mm5 */ uint32_t A = loc_14 + 0x40u; wr64(A, g->mm[5]); }
    wr32(sp0 - 0x14u, loc_14 + 8u);
    wr32(sp0 - 8u, loc_8 - 1u);
    if (loc_8 != 1u)
    {
        loc_18 = loc_18 + 8u;
        loc_10 = loc_10 + 8u;
        loc_8 = loc_8 - 1u;
        loc_14 = loc_14 + 8u;
        goto L_1030c4fe;
    }
    eax = loc_8 - 1u;
    wr32(sp0 - 8u, 8u);
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0xcu, 0u);
    edx = in_edx;
    ebx = in_ebx;
    loc_8 = 8u;
    loc_14 = arg3;
    loc_c = 0u;
L_1030c9e3: ;
    { /* movq mm0, qword ptr [esi] */ uint32_t A = loc_14; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 8] */ uint32_t A = loc_14 + 8u; g->mm[1] = rd64(A); }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* paddw mm2, mm1 */ g->mm[2] = mmx_paddw(g->mm[2], g->mm[1]); }
    { /* movq mm4, mm2 */ g->mm[4] = g->mm[2]; }
    { /* punpckhdq mm3, mm1 */ g->mm[3] = mmx_punpckhdq(g->mm[3], g->mm[1]); }
    { /* pmaddwd mm3, qword ptr [0x10349a90] */ uint32_t A = COW_IMG(0x10349a90u); g->mm[3] = mmx_pmaddwd(g->mm[3], rd64(A)); }
    { /* movq mm6, mm0 */ g->mm[6] = g->mm[0]; }
    { /* pmaddwd mm2, qword ptr [0x10349a98] */ uint32_t A = COW_IMG(0x10349a98u); g->mm[2] = mmx_pmaddwd(g->mm[2], rd64(A)); }
    { /* psubw mm6, mm1 */ g->mm[6] = mmx_psubw(g->mm[6], g->mm[1]); }
    { /* punpckldq mm4, mm6 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[6]); }
    { /* movq mm6, mm0 */ g->mm[6] = g->mm[0]; }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* pslld mm4, 0x10 */ g->mm[4] = mmx_pslld(g->mm[4], (uint64_t)0x10u); }
    { /* pxor mm3, qword ptr [0x10349a60] */ uint32_t A = COW_IMG(0x10349a60u); g->mm[3] = mmx_pxor(g->mm[3], rd64(A)); }
    { /* punpckhdq mm2, mm2 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[2]); }
    { /* paddd mm3, qword ptr [0x10349a68] */ uint32_t A = COW_IMG(0x10349a68u); g->mm[3] = mmx_paddd(g->mm[3], rd64(A)); }
    { /* psrad mm4, 3 */ g->mm[4] = mmx_psrad(g->mm[4], (uint64_t)0x3u); }
    { /* psrlq mm3, 0x20 */ g->mm[3] = mmx_psrlq(g->mm[3], (uint64_t)0x20u); }
    { /* movq mm7, mm4 */ g->mm[7] = g->mm[4]; }
    { /* punpckldq mm5, mm3 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[3]); }
    { /* movq mm3, mm0 */ g->mm[3] = g->mm[0]; }
    { /* paddd mm5, mm2 */ g->mm[5] = mmx_paddd(g->mm[5], g->mm[2]); }
    { /* paddw mm3, mm1 */ g->mm[3] = mmx_paddw(g->mm[3], g->mm[1]); }
    { /* paddd mm4, mm5 */ g->mm[4] = mmx_paddd(g->mm[4], g->mm[5]); }
    { /* psubd mm7, mm5 */ g->mm[7] = mmx_psubd(g->mm[7], g->mm[5]); }
    { /* movq mm5, mm3 */ g->mm[5] = g->mm[3]; }
    { /* movq mm2, mm0 */ g->mm[2] = g->mm[0]; }
    { /* pmaddwd mm0, qword ptr [0x10349aa0] */ uint32_t A = COW_IMG(0x10349aa0u); g->mm[0] = mmx_pmaddwd(g->mm[0], rd64(A)); }
    { /* punpckldq mm5, mm5 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[5]); }
    { /* paddw mm5, mm3 */ g->mm[5] = mmx_paddw(g->mm[5], g->mm[3]); }
    { /* punpckldq mm2, mm2 */ g->mm[2] = mmx_punpckldq(g->mm[2], g->mm[2]); }
    { /* pmaddwd mm5, qword ptr [0x10349ac0] */ uint32_t A = COW_IMG(0x10349ac0u); g->mm[5] = mmx_pmaddwd(g->mm[5], rd64(A)); }
    { /* punpckhdq mm6, mm2 */ g->mm[6] = mmx_punpckhdq(g->mm[6], g->mm[2]); }
    { /* pmaddwd mm3, qword ptr [0x10349ab8] */ uint32_t A = COW_IMG(0x10349ab8u); g->mm[3] = mmx_pmaddwd(g->mm[3], rd64(A)); }
    { /* paddw mm6, mm1 */ g->mm[6] = mmx_paddw(g->mm[6], g->mm[1]); }
    { /* pmaddwd mm6, qword ptr [0x10349ab0] */ uint32_t A = COW_IMG(0x10349ab0u); g->mm[6] = mmx_pmaddwd(g->mm[6], rd64(A)); }
    { /* pmaddwd mm1, qword ptr [0x10349aa8] */ uint32_t A = COW_IMG(0x10349aa8u); g->mm[1] = mmx_pmaddwd(g->mm[1], rd64(A)); }
    { /* punpckhdq mm5, mm5 */ g->mm[5] = mmx_punpckhdq(g->mm[5], g->mm[5]); }
    { /* movq mm2, qword ptr [0x10349a68] */ uint32_t A = COW_IMG(0x10349a68u); g->mm[2] = rd64(A); }
    { /* pxor mm3, qword ptr [0x10349a60] */ uint32_t A = COW_IMG(0x10349a60u); g->mm[3] = mmx_pxor(g->mm[3], rd64(A)); }
    { /* pxor mm6, qword ptr [0x10349a60] */ uint32_t A = COW_IMG(0x10349a60u); g->mm[6] = mmx_pxor(g->mm[6], rd64(A)); }
    { /* paddd mm3, mm2 */ g->mm[3] = mmx_paddd(g->mm[3], g->mm[2]); }
    { /* paddd mm6, mm2 */ g->mm[6] = mmx_paddd(g->mm[6], g->mm[2]); }
    { /* paddd mm3, mm5 */ g->mm[3] = mmx_paddd(g->mm[3], g->mm[5]); }
    { /* movq mm5, mm6 */ g->mm[5] = g->mm[6]; }
    { /* paddd mm6, mm3 */ g->mm[6] = mmx_paddd(g->mm[6], g->mm[3]); }
    { /* movq mm2, mm5 */ g->mm[2] = g->mm[5]; }
    { /* punpckldq mm5, mm5 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[5]); }
    { /* punpckhdq mm2, mm5 */ g->mm[2] = mmx_punpckhdq(g->mm[2], g->mm[5]); }
    { /* paddd mm1, mm6 */ g->mm[1] = mmx_paddd(g->mm[1], g->mm[6]); }
    { /* paddd mm2, mm3 */ g->mm[2] = mmx_paddd(g->mm[2], g->mm[3]); }
    { /* movq mm5, mm1 */ g->mm[5] = g->mm[1]; }
    { /* movq mm3, mm4 */ g->mm[3] = g->mm[4]; }
    { /* paddd mm0, mm2 */ g->mm[0] = mmx_paddd(g->mm[0], g->mm[2]); }
    { /* movq mm2, mm7 */ g->mm[2] = g->mm[7]; }
    { /* punpckldq mm5, mm5 */ g->mm[5] = mmx_punpckldq(g->mm[5], g->mm[5]); }
    { /* punpckhdq mm1, mm5 */ g->mm[1] = mmx_punpckhdq(g->mm[1], g->mm[5]); }
    { /* psubd mm3, mm0 */ g->mm[3] = mmx_psubd(g->mm[3], g->mm[0]); }
    { /* movq mm5, qword ptr [0x10349a80] */ uint32_t A = COW_IMG(0x10349a80u); g->mm[5] = rd64(A); }
    { /* paddd mm0, mm4 */ g->mm[0] = mmx_paddd(g->mm[0], g->mm[4]); }
    { /* movq mm6, qword ptr [0x10349a88] */ uint32_t A = COW_IMG(0x10349a88u); g->mm[6] = rd64(A); }
    { /* psubd mm2, mm1 */ g->mm[2] = mmx_psubd(g->mm[2], g->mm[1]); }
    { /* paddd mm0, mm5 */ g->mm[0] = mmx_paddd(g->mm[0], g->mm[5]); }
    { /* paddd mm1, mm7 */ g->mm[1] = mmx_paddd(g->mm[1], g->mm[7]); }
    { /* paddd mm1, mm5 */ g->mm[1] = mmx_paddd(g->mm[1], g->mm[5]); }
    { /* psrad mm0, 0x12 */ g->mm[0] = mmx_psrad(g->mm[0], (uint64_t)0x12u); }
    { /* paddd mm3, mm5 */ g->mm[3] = mmx_paddd(g->mm[3], g->mm[5]); }
    { /* psrad mm1, 0x12 */ g->mm[1] = mmx_psrad(g->mm[1], (uint64_t)0x12u); }
    { /* paddd mm2, mm5 */ g->mm[2] = mmx_paddd(g->mm[2], g->mm[5]); }
    { /* psrad mm3, 0x12 */ g->mm[3] = mmx_psrad(g->mm[3], (uint64_t)0x12u); }
    { /* pand mm1, mm6 */ g->mm[1] = mmx_pand(g->mm[1], g->mm[6]); }
    { /* psrad mm2, 0x12 */ g->mm[2] = mmx_psrad(g->mm[2], (uint64_t)0x12u); }
    { /* movd ebx, mm1 */ ebx = (uint32_t)((uint32_t)g->mm[1]); }
    { /* psrlq mm1, 0x20 */ g->mm[1] = mmx_psrlq(g->mm[1], (uint64_t)0x20u); }
    { /* movd edx, mm1 */ edx = (uint32_t)((uint32_t)g->mm[1]); }
    { /* pand mm0, mm6 */ g->mm[0] = mmx_pand(g->mm[0], g->mm[6]); }
    t1 = rd8(arg6 + ebx);
    t2 = rd32(arg4 + loc_c);
    { /* movd ebx, mm0 */ ebx = (uint32_t)((uint32_t)g->mm[0]); }
    { /* psrlq mm0, 0x20 */ g->mm[0] = mmx_psrlq(g->mm[0], (uint64_t)0x20u); }
    wr32(sp0 - 0xcu, loc_c + 4u);
    t3 = rd8(arg6 + edx);
    { /* movd edx, mm0 */ edx = (uint32_t)((uint32_t)g->mm[0]); }
    { /* pand mm3, mm6 */ g->mm[3] = mmx_pand(g->mm[3], g->mm[6]); }
    t4 = rd8(arg6 + ebx);
    t5 = rd8(arg6 + edx);
    eax = (t1 << 8u | t3) << 0x10u | t4 | t5 << 8u;
    { /* movd mm4, eax */ g->mm[4] = (uint64_t)(uint32_t)eax; }
    { /* pand mm2, mm6 */ g->mm[2] = mmx_pand(g->mm[2], g->mm[6]); }
    { /* movd ebx, mm3 */ ebx = (uint32_t)((uint32_t)g->mm[3]); }
    { /* psrlq mm3, 0x20 */ g->mm[3] = mmx_psrlq(g->mm[3], (uint64_t)0x20u); }
    { /* movd edx, mm3 */ edx = (uint32_t)((uint32_t)g->mm[3]); }
    t6 = rd8(arg6 + ebx);
    t7 = rd8(arg6 + edx);
    { /* movd ebx, mm2 */ ebx = (uint32_t)((uint32_t)g->mm[2]); }
    { /* psrlq mm2, 0x20 */ g->mm[2] = mmx_psrlq(g->mm[2], (uint64_t)0x20u); }
    { /* movd edx, mm2 */ edx = (uint32_t)((uint32_t)g->mm[2]); }
    eax = (t6 << 8u | t7) << 0x10u | rd8(arg6 + ebx) | rd8(arg6 + edx) << 8u;
    { /* movd mm5, eax */ g->mm[5] = (uint64_t)(uint32_t)eax; }
    { /* punpckldq mm4, mm5 */ g->mm[4] = mmx_punpckldq(g->mm[4], g->mm[5]); }
    wr32(sp0 - 0x14u, loc_14 + 0x10u);
    { /* movq qword ptr [edi], mm4 */ uint32_t A = arg5 + t2; wr64(A, g->mm[4]); }
    wr32(sp0 - 8u, loc_8 - 1u);
    if (loc_8 != 1u)
    {
        eax = loc_8 - 1u;
        loc_8 = loc_8 - 1u;
        loc_14 = loc_14 + 0x10u;
        loc_c = loc_c + 4u;
        goto L_1030c9e3;
    }
    { /* emms  */  }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030c4d7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1030c4d7(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
