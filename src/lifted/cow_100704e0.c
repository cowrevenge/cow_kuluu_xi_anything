/* f_0x100704e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100704e0(Guest* g)
{
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* pxor mm5, mm5 */ g->mm[5] = mmx_pxor(g->mm[5], g->mm[5]); }
    { /* femms  */  }
    { /* prefetch byte ptr [ecx + 0x10] */  }
    { /* prefetch byte ptr [esi + 0x20] */  }
    { /* movq mm6, qword ptr [ecx] */ uint32_t A = arg2; g->mm[6] = rd64(A); }
    { /* movq mm7, qword ptr [ecx + 8] */ uint32_t A = arg2 + 8u; g->mm[7] = rd64(A); }
    { /* movq mm0, qword ptr [esi] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 8] */ uint32_t A = arg3 + 8u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi], mm0 */ uint32_t A = self + 0xaa0u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* prefetchnta byte ptr [esi + 0x30] */  }
    { /* movq mm0, qword ptr [esi + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 4], mm0 */ uint32_t A = self + 0xaa4u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm0, qword ptr [esi + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 8], mm0 */ uint32_t A = self + 0xaa8u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm0, qword ptr [esi + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0xc], mm0 */ uint32_t A = self + 0xaacu; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* prefetch byte ptr [ecx + 0x20] */  }
    { /* movq mm6, qword ptr [ecx + 0x10] */ uint32_t A = arg2 + 0x10u; g->mm[6] = rd64(A); }
    { /* movq mm7, qword ptr [ecx + 0x18] */ uint32_t A = arg2 + 0x18u; g->mm[7] = rd64(A); }
    { /* movq mm0, qword ptr [esi] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 8] */ uint32_t A = arg3 + 8u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x10], mm0 */ uint32_t A = self + 0xab0u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm0, qword ptr [esi + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x14], mm0 */ uint32_t A = self + 0xab4u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm0, qword ptr [esi + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x18], mm0 */ uint32_t A = self + 0xab8u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm0, qword ptr [esi + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x1c], mm0 */ uint32_t A = self + 0xabcu; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* prefetch byte ptr [ecx + 0x30] */  }
    { /* movq mm6, qword ptr [ecx + 0x20] */ uint32_t A = arg2 + 0x20u; g->mm[6] = rd64(A); }
    { /* movq mm7, qword ptr [ecx + 0x28] */ uint32_t A = arg2 + 0x28u; g->mm[7] = rd64(A); }
    { /* movq mm0, qword ptr [esi] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 8] */ uint32_t A = arg3 + 8u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x20], mm0 */ uint32_t A = self + 0xac0u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm0, qword ptr [esi + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x24], mm0 */ uint32_t A = self + 0xac4u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm0, qword ptr [esi + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x28], mm0 */ uint32_t A = self + 0xac8u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm0, qword ptr [esi + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x2c], mm0 */ uint32_t A = self + 0xaccu; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm6, qword ptr [ecx + 0x30] */ uint32_t A = arg2 + 0x30u; g->mm[6] = rd64(A); }
    { /* movq mm7, qword ptr [ecx + 0x38] */ uint32_t A = arg2 + 0x38u; g->mm[7] = rd64(A); }
    { /* movq mm0, qword ptr [esi] */ uint32_t A = arg3; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 8] */ uint32_t A = arg3 + 8u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x30], mm0 */ uint32_t A = self + 0xad0u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm0, qword ptr [esi + 0x10] */ uint32_t A = arg3 + 0x10u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x18] */ uint32_t A = arg3 + 0x18u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x34], mm0 */ uint32_t A = self + 0xad4u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm0, qword ptr [esi + 0x20] */ uint32_t A = arg3 + 0x20u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x28] */ uint32_t A = arg3 + 0x28u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x38], mm0 */ uint32_t A = self + 0xad8u; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm0, qword ptr [esi + 0x30] */ uint32_t A = arg3 + 0x30u; g->mm[0] = rd64(A); }
    { /* movq mm1, qword ptr [esi + 0x38] */ uint32_t A = arg3 + 0x38u; g->mm[1] = rd64(A); }
    { /* pfmul mm0, mm6 */ g->mm[0] = n3d_pfmul(g->mm[0], g->mm[6]); }
    { /* pfmul mm1, mm7 */ g->mm[1] = n3d_pfmul(g->mm[1], g->mm[7]); }
    { /* pfacc mm0, mm1 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[1]); }
    { /* pfacc mm0, mm5 */ g->mm[0] = n3d_pfacc(g->mm[0], g->mm[5]); }
    { /* movd dword ptr [edi + 0x3c], mm0 */ uint32_t A = self + 0xadcu; wr32(A, (uint32_t)((uint32_t)g->mm[0])); }
    { /* movq mm1, qword ptr [edi + 0x10] */ uint32_t A = self + 0xab0u; g->mm[1] = rd64(A); }
    { /* movq mm0, qword ptr [edi] */ uint32_t A = self + 0xaa0u; g->mm[0] = rd64(A); }
    { /* movq mm2, qword ptr [edi + 0x20] */ uint32_t A = self + 0xac0u; g->mm[2] = rd64(A); }
    { /* movq mm3, qword ptr [edi + 0x30] */ uint32_t A = self + 0xad0u; g->mm[3] = rd64(A); }
    { /* movq qword ptr [esi], mm0 */ uint32_t A = arg1; wr64(A, g->mm[0]); }
    { /* movq qword ptr [esi + 0x10], mm1 */ uint32_t A = arg1 + 0x10u; wr64(A, g->mm[1]); }
    { /* movq qword ptr [esi + 0x20], mm2 */ uint32_t A = arg1 + 0x20u; wr64(A, g->mm[2]); }
    { /* movq qword ptr [esi + 0x30], mm3 */ uint32_t A = arg1 + 0x30u; wr64(A, g->mm[3]); }
    { /* movq mm1, qword ptr [edi + 0x18] */ uint32_t A = self + 0xab8u; g->mm[1] = rd64(A); }
    { /* movq mm0, qword ptr [edi + 8] */ uint32_t A = self + 0xaa8u; g->mm[0] = rd64(A); }
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
void cow_adapter_100704e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100704e0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
