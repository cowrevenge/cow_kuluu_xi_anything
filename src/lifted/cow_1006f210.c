/* f_0x1006f210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1006f210(Guest* g)
{
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* prefetchnta byte ptr [ecx + 0x10] */  }
    { /* prefetchnta byte ptr [esi + 0x20] */  }
    { /* movaps xmm7, xmmword ptr [ecx] */ uint32_t A = arg2; g->xmm[7] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esi] */ uint32_t A = arg3; g->xmm[1] = rd128(A); }
    { /* movaps xmm6, xmm1 */ g->xmm[6] = g->xmm[1]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi], xmm0 */ uint32_t A = self + 0xaa0u; wr32(A, g->xmm[0].d[0]); }
    { /* prefetchnta byte ptr [esi + 0x30] */  }
    { /* movaps xmm1, xmmword ptr [esi + 0x10] */ uint32_t A = arg3 + 0x10u; g->xmm[1] = rd128(A); }
    { /* movaps xmm5, xmm1 */ g->xmm[5] = g->xmm[1]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi + 4], xmm0 */ uint32_t A = self + 0xaa4u; wr32(A, g->xmm[0].d[0]); }
    { /* movaps xmm1, xmmword ptr [esi + 0x20] */ uint32_t A = arg3 + 0x20u; g->xmm[1] = rd128(A); }
    { /* movaps xmm4, xmm1 */ g->xmm[4] = g->xmm[1]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi + 8], xmm0 */ uint32_t A = self + 0xaa8u; wr32(A, g->xmm[0].d[0]); }
    { /* movaps xmm1, xmmword ptr [esi + 0x30] */ uint32_t A = arg3 + 0x30u; g->xmm[1] = rd128(A); }
    { /* movaps xmm3, xmm1 */ g->xmm[3] = g->xmm[1]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi + 0xc], xmm0 */ uint32_t A = self + 0xaacu; wr32(A, g->xmm[0].d[0]); }
    { /* prefetchnta byte ptr [ecx + 0x20] */  }
    { /* movaps xmm7, xmmword ptr [ecx + 0x10] */ uint32_t A = arg2 + 0x10u; g->xmm[7] = rd128(A); }
    { /* movaps xmm1, xmm6 */ g->xmm[1] = g->xmm[6]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi + 0x10], xmm0 */ uint32_t A = self + 0xab0u; wr32(A, g->xmm[0].d[0]); }
    { /* movaps xmm1, xmm5 */ g->xmm[1] = g->xmm[5]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi + 0x14], xmm0 */ uint32_t A = self + 0xab4u; wr32(A, g->xmm[0].d[0]); }
    { /* movaps xmm1, xmm4 */ g->xmm[1] = g->xmm[4]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi + 0x18], xmm0 */ uint32_t A = self + 0xab8u; wr32(A, g->xmm[0].d[0]); }
    { /* movaps xmm1, xmm3 */ g->xmm[1] = g->xmm[3]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi + 0x1c], xmm0 */ uint32_t A = self + 0xabcu; wr32(A, g->xmm[0].d[0]); }
    { /* prefetchnta byte ptr [ecx + 0x30] */  }
    { /* movaps xmm7, xmmword ptr [ecx + 0x20] */ uint32_t A = arg2 + 0x20u; g->xmm[7] = rd128(A); }
    { /* movaps xmm1, xmm6 */ g->xmm[1] = g->xmm[6]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi + 0x20], xmm0 */ uint32_t A = self + 0xac0u; wr32(A, g->xmm[0].d[0]); }
    { /* movaps xmm1, xmm5 */ g->xmm[1] = g->xmm[5]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi + 0x24], xmm0 */ uint32_t A = self + 0xac4u; wr32(A, g->xmm[0].d[0]); }
    { /* movaps xmm1, xmm4 */ g->xmm[1] = g->xmm[4]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi + 0x28], xmm0 */ uint32_t A = self + 0xac8u; wr32(A, g->xmm[0].d[0]); }
    { /* movaps xmm1, xmm3 */ g->xmm[1] = g->xmm[3]; }
    { /* mulps xmm1, xmm7 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[7]); }
    { /* movaps xmm0, xmm1 */ g->xmm[0] = g->xmm[1]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movhlps xmm2, xmm1 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[1]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm1, xmm1, 0xff */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 255); }
    { /* addss xmm0, xmm1 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[1]); }
    { /* movss dword ptr [edi + 0x2c], xmm0 */ uint32_t A = self + 0xaccu; wr32(A, g->xmm[0].d[0]); }
    { /* movaps xmm7, xmmword ptr [ecx + 0x30] */ uint32_t A = arg2 + 0x30u; g->xmm[7] = rd128(A); }
    { /* mulps xmm6, xmm7 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[7]); }
    { /* movaps xmm0, xmm6 */ g->xmm[0] = g->xmm[6]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm6 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[6]); }
    { /* movhlps xmm2, xmm6 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[6]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm6, xmm6, 0xff */ g->xmm[6] = sse_shufps(g->xmm[6], g->xmm[6], 255); }
    { /* addss xmm0, xmm6 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[6]); }
    { /* movss dword ptr [edi + 0x30], xmm0 */ uint32_t A = self + 0xad0u; wr32(A, g->xmm[0].d[0]); }
    { /* mulps xmm5, xmm7 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[7]); }
    { /* movaps xmm0, xmm5 */ g->xmm[0] = g->xmm[5]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm5 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[5]); }
    { /* movhlps xmm2, xmm5 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[5]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm5, xmm5, 0xff */ g->xmm[5] = sse_shufps(g->xmm[5], g->xmm[5], 255); }
    { /* addss xmm0, xmm5 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[5]); }
    { /* movss dword ptr [edi + 0x34], xmm0 */ uint32_t A = self + 0xad4u; wr32(A, g->xmm[0].d[0]); }
    { /* mulps xmm4, xmm7 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[7]); }
    { /* movaps xmm0, xmm4 */ g->xmm[0] = g->xmm[4]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm4 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[4]); }
    { /* movhlps xmm2, xmm4 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[4]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm4, xmm4, 0xff */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 255); }
    { /* addss xmm0, xmm4 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[4]); }
    { /* movss dword ptr [edi + 0x38], xmm0 */ uint32_t A = self + 0xad8u; wr32(A, g->xmm[0].d[0]); }
    { /* mulps xmm3, xmm7 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[7]); }
    { /* movaps xmm0, xmm3 */ g->xmm[0] = g->xmm[3]; }
    { /* shufps xmm0, xmm0, 0x55 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 85); }
    { /* addss xmm0, xmm3 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[3]); }
    { /* movhlps xmm2, xmm3 */ g->xmm[2] = sse_movhlps(g->xmm[2], g->xmm[3]); }
    { /* addss xmm0, xmm2 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[2]); }
    { /* shufps xmm3, xmm3, 0xff */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 255); }
    { /* addss xmm0, xmm3 */ g->xmm[0] = sse_addss(g->xmm[0], g->xmm[3]); }
    { /* movss dword ptr [edi + 0x3c], xmm0 */ uint32_t A = self + 0xadcu; wr32(A, g->xmm[0].d[0]); }
    { /* movaps xmm1, xmmword ptr [edi + 0x10] */ uint32_t A = self + 0xab0u; g->xmm[1] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [edi] */ uint32_t A = self + 0xaa0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [edi + 0x20] */ uint32_t A = self + 0xac0u; g->xmm[2] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [edi + 0x30] */ uint32_t A = self + 0xad0u; g->xmm[3] = rd128(A); }
    { /* movaps xmmword ptr [esi], xmm0 */ uint32_t A = arg1; wr128(A, g->xmm[0]); }
    { /* movaps xmmword ptr [esi + 0x10], xmm1 */ uint32_t A = arg1 + 0x10u; wr128(A, g->xmm[1]); }
    { /* movaps xmmword ptr [esi + 0x20], xmm2 */ uint32_t A = arg1 + 0x20u; wr128(A, g->xmm[2]); }
    { /* movaps xmmword ptr [esi + 0x30], xmm3 */ uint32_t A = arg1 + 0x30u; wr128(A, g->xmm[3]); }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006f210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006f210(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
