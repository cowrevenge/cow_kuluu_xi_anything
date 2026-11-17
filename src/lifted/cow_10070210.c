/* f_0x10070210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10070210(Guest* g)
{
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* femms  */  }
    { /* prefetch byte ptr [ecx + 0x10] */  }
    { /* movd mm4, dword ptr [ecx] */ uint32_t A = arg2; g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm5, dword ptr [ecx + 4] */ uint32_t A = arg2 + 4u; g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm6, dword ptr [ecx + 8] */ uint32_t A = arg2 + 8u; g->mm[6] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm7, dword ptr [ecx + 0xc] */ uint32_t A = arg2 + 0xcu; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm0, mm4 */ g->mm[0] = g->mm[4]; }
    { /* movq mm1, mm5 */ g->mm[1] = g->mm[5]; }
    { /* movq mm2, mm6 */ g->mm[2] = g->mm[6]; }
    { /* movq mm3, mm7 */ g->mm[3] = g->mm[7]; }
    { /* psllq mm0, 0x20 */ g->mm[0] = mmx_psllq(g->mm[0], (uint64_t)0x20u); }
    { /* psllq mm1, 0x20 */ g->mm[1] = mmx_psllq(g->mm[1], (uint64_t)0x20u); }
    { /* psllq mm2, 0x20 */ g->mm[2] = mmx_psllq(g->mm[2], (uint64_t)0x20u); }
    { /* psllq mm3, 0x20 */ g->mm[3] = mmx_psllq(g->mm[3], (uint64_t)0x20u); }
    { /* por mm4, mm0 */ g->mm[4] = mmx_por(g->mm[4], g->mm[0]); }
    { /* por mm5, mm1 */ g->mm[5] = mmx_por(g->mm[5], g->mm[1]); }
    { /* por mm6, mm2 */ g->mm[6] = mmx_por(g->mm[6], g->mm[2]); }
    { /* por mm7, mm3 */ g->mm[7] = mmx_por(g->mm[7], g->mm[3]); }
    { /* movq mm0, qword ptr [esi] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esi + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[3] = rd64(A); }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm5 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[5]); }
    { /* pfmul mm2, mm6 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[6]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfadd mm0, mm3 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[3]); }
    { /* movq qword ptr [edi], mm0 */ uint32_t A = self + 0xaa0u; wr64(A, g->mm[0]); }
    { /* movq mm0, qword ptr [esi + 8] */ uint32_t A = arg3 + 8u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esi + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[3] = rd64(A); }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm5 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[5]); }
    { /* pfmul mm2, mm6 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[6]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfadd mm0, mm3 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[3]); }
    { /* movq qword ptr [edi + 8], mm0 */ uint32_t A = self + 0xaa8u; wr64(A, g->mm[0]); }
    { /* prefetch byte ptr [ecx + 0x20] */  }
    { /* movd mm4, dword ptr [ecx + 0x10] */ uint32_t A = arg2 + 0x10u; g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm5, dword ptr [ecx + 0x14] */ uint32_t A = arg2 + 0x14u; g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm6, dword ptr [ecx + 0x18] */ uint32_t A = arg2 + 0x18u; g->mm[6] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm7, dword ptr [ecx + 0x1c] */ uint32_t A = arg2 + 0x1cu; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm0, mm4 */ g->mm[0] = g->mm[4]; }
    { /* movq mm1, mm5 */ g->mm[1] = g->mm[5]; }
    { /* movq mm2, mm6 */ g->mm[2] = g->mm[6]; }
    { /* movq mm3, mm7 */ g->mm[3] = g->mm[7]; }
    { /* psllq mm0, 0x20 */ g->mm[0] = mmx_psllq(g->mm[0], (uint64_t)0x20u); }
    { /* psllq mm1, 0x20 */ g->mm[1] = mmx_psllq(g->mm[1], (uint64_t)0x20u); }
    { /* psllq mm2, 0x20 */ g->mm[2] = mmx_psllq(g->mm[2], (uint64_t)0x20u); }
    { /* psllq mm3, 0x20 */ g->mm[3] = mmx_psllq(g->mm[3], (uint64_t)0x20u); }
    { /* por mm4, mm0 */ g->mm[4] = mmx_por(g->mm[4], g->mm[0]); }
    { /* por mm5, mm1 */ g->mm[5] = mmx_por(g->mm[5], g->mm[1]); }
    { /* por mm6, mm2 */ g->mm[6] = mmx_por(g->mm[6], g->mm[2]); }
    { /* por mm7, mm3 */ g->mm[7] = mmx_por(g->mm[7], g->mm[3]); }
    { /* movq mm0, qword ptr [esi] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esi + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[3] = rd64(A); }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm5 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[5]); }
    { /* pfmul mm2, mm6 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[6]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfadd mm0, mm3 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[3]); }
    { /* movq qword ptr [edi + 0x10], mm0 */ uint32_t A = self + 0xab0u; wr64(A, g->mm[0]); }
    { /* movq mm0, qword ptr [esi + 8] */ uint32_t A = arg3 + 8u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esi + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[3] = rd64(A); }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm5 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[5]); }
    { /* pfmul mm2, mm6 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[6]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfadd mm0, mm3 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[3]); }
    { /* movq qword ptr [edi + 0x18], mm0 */ uint32_t A = self + 0xab8u; wr64(A, g->mm[0]); }
    { /* prefetch byte ptr [ecx + 0x30] */  }
    { /* movd mm4, dword ptr [ecx + 0x20] */ uint32_t A = arg2 + 0x20u; g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm5, dword ptr [ecx + 0x24] */ uint32_t A = arg2 + 0x24u; g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm6, dword ptr [ecx + 0x28] */ uint32_t A = arg2 + 0x28u; g->mm[6] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm7, dword ptr [ecx + 0x2c] */ uint32_t A = arg2 + 0x2cu; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm0, mm4 */ g->mm[0] = g->mm[4]; }
    { /* movq mm1, mm5 */ g->mm[1] = g->mm[5]; }
    { /* movq mm2, mm6 */ g->mm[2] = g->mm[6]; }
    { /* movq mm3, mm7 */ g->mm[3] = g->mm[7]; }
    { /* psllq mm0, 0x20 */ g->mm[0] = mmx_psllq(g->mm[0], (uint64_t)0x20u); }
    { /* psllq mm1, 0x20 */ g->mm[1] = mmx_psllq(g->mm[1], (uint64_t)0x20u); }
    { /* psllq mm2, 0x20 */ g->mm[2] = mmx_psllq(g->mm[2], (uint64_t)0x20u); }
    { /* psllq mm3, 0x20 */ g->mm[3] = mmx_psllq(g->mm[3], (uint64_t)0x20u); }
    { /* por mm4, mm0 */ g->mm[4] = mmx_por(g->mm[4], g->mm[0]); }
    { /* por mm5, mm1 */ g->mm[5] = mmx_por(g->mm[5], g->mm[1]); }
    { /* por mm6, mm2 */ g->mm[6] = mmx_por(g->mm[6], g->mm[2]); }
    { /* por mm7, mm3 */ g->mm[7] = mmx_por(g->mm[7], g->mm[3]); }
    { /* movq mm0, qword ptr [esi] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esi + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[3] = rd64(A); }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm5 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[5]); }
    { /* pfmul mm2, mm6 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[6]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfadd mm0, mm3 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[3]); }
    { /* movq qword ptr [edi + 0x20], mm0 */ uint32_t A = self + 0xac0u; wr64(A, g->mm[0]); }
    { /* movq mm0, qword ptr [esi + 8] */ uint32_t A = arg3 + 8u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esi + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[3] = rd64(A); }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm5 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[5]); }
    { /* pfmul mm2, mm6 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[6]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfadd mm0, mm3 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[3]); }
    { /* movq qword ptr [edi + 0x28], mm0 */ uint32_t A = self + 0xac8u; wr64(A, g->mm[0]); }
    { /* movd mm4, dword ptr [ecx + 0x30] */ uint32_t A = arg2 + 0x30u; g->mm[4] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm5, dword ptr [ecx + 0x34] */ uint32_t A = arg2 + 0x34u; g->mm[5] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm6, dword ptr [ecx + 0x38] */ uint32_t A = arg2 + 0x38u; g->mm[6] = (uint64_t)(uint32_t)rd32(A); }
    { /* movd mm7, dword ptr [ecx + 0x3c] */ uint32_t A = arg2 + 0x3cu; g->mm[7] = (uint64_t)(uint32_t)rd32(A); }
    { /* movq mm0, mm4 */ g->mm[0] = g->mm[4]; }
    { /* movq mm1, mm5 */ g->mm[1] = g->mm[5]; }
    { /* movq mm2, mm6 */ g->mm[2] = g->mm[6]; }
    { /* movq mm3, mm7 */ g->mm[3] = g->mm[7]; }
    { /* psllq mm0, 0x20 */ g->mm[0] = mmx_psllq(g->mm[0], (uint64_t)0x20u); }
    { /* psllq mm1, 0x20 */ g->mm[1] = mmx_psllq(g->mm[1], (uint64_t)0x20u); }
    { /* psllq mm2, 0x20 */ g->mm[2] = mmx_psllq(g->mm[2], (uint64_t)0x20u); }
    { /* psllq mm3, 0x20 */ g->mm[3] = mmx_psllq(g->mm[3], (uint64_t)0x20u); }
    { /* por mm4, mm0 */ g->mm[4] = mmx_por(g->mm[4], g->mm[0]); }
    { /* por mm5, mm1 */ g->mm[5] = mmx_por(g->mm[5], g->mm[1]); }
    { /* por mm6, mm2 */ g->mm[6] = mmx_por(g->mm[6], g->mm[2]); }
    { /* por mm7, mm3 */ g->mm[7] = mmx_por(g->mm[7], g->mm[3]); }
    { /* movq mm0, qword ptr [esi] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esi + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[3] = rd64(A); }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm5 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[5]); }
    { /* pfmul mm2, mm6 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[6]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfadd mm0, mm3 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[3]); }
    { /* movq qword ptr [edi + 0x30], mm0 */ uint32_t A = self + 0xad0u; wr64(A, g->mm[0]); }
    { /* movq mm0, qword ptr [esi + 8] */ uint32_t A = arg3 + 8u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [esi + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [esi + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[3] = rd64(A); }
    { /* pfmul mm0, mm4 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[4]); }
    { /* pfmul mm1, mm5 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[5]); }
    { /* pfmul mm2, mm6 */ g->mm[2] = n3d_pfmul(g->mm[2], g->mm[6]); }
    { /* pfmul mm3, mm7 */ g->mm[3] = n3d_pfmul(g->mm[3], g->mm[7]); }
    { /* pfadd mm0, mm1 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[1]); }
    { /* pfadd mm0, mm2 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[2]); }
    { /* pfadd mm0, mm3 */ g->mm[0] = n3d_pfadd(g->mm[0], g->mm[3]); }
    { /* movq qword ptr [edi + 0x38], mm0 */ uint32_t A = self + 0xad8u; wr64(A, g->mm[0]); }
    { /* movq mm1, qword ptr [edi + 0x10] */ uint32_t A = self + 0xab0u; g->mm[1] = rd64(A); }
    { /* movq mm0, qword ptr [edi] */ uint32_t A = self + 0xaa0u; g->mm[0] = rd64(A); }
    { /* movq mm2, qword ptr [edi + 0x20] */ uint32_t A = self + 0xac0u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [edi + 0x30] */ uint32_t A = self + 0xad0u; g->mm[3] = rd64(A); }
    { /* movq qword ptr [esi], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* movq qword ptr [esi + 0x10], mm1 */ uint32_t A = arg1 + 0x10u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [esi + 0x20], mm2 */ uint32_t A = arg1 + 0x20u; wr64(A, g->mm[2]); }
    { /* movq qword ptr [esi + 0x30], mm3 */ uint32_t A = arg1 + 0x30u; wr64(A, g->mm[3]); }
    { /* movq mm0, qword ptr [edi + 8] */ uint32_t A = self + 0xaa8u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [edi + 0x18] */ uint32_t A = self + 0xab8u; g->mm[1] = rd64(A); }
    { /* movq mm2, qword ptr [edi + 0x28] */ uint32_t A = self + 0xac8u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [edi + 0x38] */ uint32_t A = self + 0xad8u; g->mm[3] = rd64(A); }
    { /* movq qword ptr [esi + 8], mm0 */ uint32_t A = arg1 + 8u; wr64(A, g->mm[0]); }
    { /* movq qword ptr [esi + 0x18], mm1 */ uint32_t A = arg1 + 0x18u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [esi + 0x28], mm2 */ uint32_t A = arg1 + 0x28u; wr64(A, g->mm[2]); }
    { /* movq qword ptr [esi + 0x38], mm3 */ uint32_t A = arg1 + 0x38u; wr64(A, g->mm[3]); }
    { /* femms  */  }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10070210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10070210(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
