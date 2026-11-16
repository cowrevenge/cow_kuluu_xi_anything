/* f_0x10309cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10309cd0(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    { /* movaps xmm0, xmmword ptr [eax] */ uint32_t A = arg1; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm6, xmm0 */ g->xmm[6] = g->xmm[0]; }
    { /* pand xmm0, xmmword ptr [0x103cece0] */ uint32_t A = COW_IMG(0x103cece0u); g->xmm[0] = sse2_pand(g->xmm[0], rd128(A)); }
    { /* pand xmm1, xmmword ptr [0x103cecd0] */ uint32_t A = COW_IMG(0x103cecd0u); g->xmm[1] = sse2_pand(g->xmm[1], rd128(A)); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* movaps xmm7, xmm0 */ g->xmm[7] = g->xmm[0]; }
    { /* mulps xmm0, xmmword ptr [0x103cecc0] */ uint32_t A = COW_IMG(0x103cecc0u); g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmm4, xmmword ptr [0x103cecb0] */ uint32_t A = COW_IMG(0x103cecb0u); g->xmm[4] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [0x103ceca0] */ uint32_t A = COW_IMG(0x103ceca0u); g->xmm[5] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [0x103cec90] */ uint32_t A = COW_IMG(0x103cec90u); g->xmm[6] = rd128(A); }
    { /* movaps xmm7, xmmword ptr [0x103cec80] */ uint32_t A = COW_IMG(0x103cec80u); g->xmm[7] = rd128(A); }
    { /* addps xmm0, xmmword ptr [0x103cec70] */ uint32_t A = COW_IMG(0x103cec70u); g->xmm[0] = sse_addps(g->xmm[0], rd128(A)); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* subps xmm0, xmmword ptr [0x103cec70] */ uint32_t A = COW_IMG(0x103cec70u); g->xmm[0] = sse_subps(g->xmm[0], rd128(A)); }
    { /* mulps xmm4, xmm0 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[0]); }
    { /* mulps xmm5, xmm0 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[0]); }
    { /* mulps xmm6, xmm0 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[0]); }
    { /* mulps xmm7, xmm0 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[0]); }
    { /* subps xmm2, xmm4 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[4]); }
    { /* subps xmm2, xmm5 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[5]); }
    { /* movaps xmm5, xmmword ptr [0x103cec60] */ uint32_t A = COW_IMG(0x103cec60u); g->xmm[5] = rd128(A); }
    { /* subps xmm2, xmm6 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[6]); }
    { /* movaps xmm6, xmmword ptr [0x103cec50] */ uint32_t A = COW_IMG(0x103cec50u); g->xmm[6] = rd128(A); }
    { /* subps xmm2, xmm7 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[7]); }
    { /* movaps xmm4, xmm2 */ g->xmm[4] = g->xmm[2]; }
    { /* mulps xmm4, xmm4 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[4]); }
    { /* andps xmm3, xmmword ptr [0x103cec40] */ uint32_t A = COW_IMG(0x103cec40u); g->xmm[3] = sse_andps(g->xmm[3], rd128(A)); }
    { /* movaps xmm0, xmm3 */ g->xmm[0] = g->xmm[3]; }
    { /* movaps xmm7, xmm3 */ g->xmm[7] = g->xmm[3]; }
    { /* andps xmm0, xmmword ptr [0x103cec30] */ uint32_t A = COW_IMG(0x103cec30u); g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
    { /* psubd xmm3, xmm0 */ g->xmm[3] = sse2_psubd(g->xmm[3], g->xmm[0]); }
    { /* paddd xmm7, xmm0 */ g->xmm[7] = sse2_paddd(g->xmm[7], g->xmm[0]); }
    { /* pand xmm3, xmmword ptr [0x103cec20] */ uint32_t A = COW_IMG(0x103cec20u); g->xmm[3] = sse2_pand(g->xmm[3], rd128(A)); }
    { /* pand xmm7, xmmword ptr [0x103cec20] */ uint32_t A = COW_IMG(0x103cec20u); g->xmm[7] = sse2_pand(g->xmm[7], rd128(A)); }
    { /* pslld xmm3, 0x1e */ g->xmm[3] = sse2_pslld(g->xmm[3], (uint64_t)0x1Eu); }
    { /* pslld xmm7, 0x1e */ g->xmm[7] = sse2_pslld(g->xmm[7], (uint64_t)0x1Eu); }
    { /* pxor xmm3, xmm1 */ g->xmm[3] = sse2_pxor(g->xmm[3], g->xmm[1]); }
    { /* pslld xmm0, 0x1e */ g->xmm[0] = sse2_pslld(g->xmm[0], (uint64_t)0x1Eu); }
    { /* pxor xmm1, xmm1 */ g->xmm[1] = sse2_pxor(g->xmm[1], g->xmm[1]); }
    { /* cmpneqps xmm0, xmm1 */ g->xmm[0] = sse_cmpps(g->xmm[0], g->xmm[1], 4); }
    { /* mulps xmm5, xmm4 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[4]); }
    { /* mulps xmm6, xmm4 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[4]); }
    { /* addps xmm5, xmmword ptr [0x103cec10] */ uint32_t A = COW_IMG(0x103cec10u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* addps xmm6, xmmword ptr [0x103cec00] */ uint32_t A = COW_IMG(0x103cec00u); g->xmm[6] = sse_addps(g->xmm[6], rd128(A)); }
    { /* mulps xmm5, xmm4 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[4]); }
    { /* mulps xmm6, xmm4 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[4]); }
    { /* addps xmm5, xmmword ptr [0x103cebf0] */ uint32_t A = COW_IMG(0x103cebf0u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* addps xmm6, xmmword ptr [0x103cebe0] */ uint32_t A = COW_IMG(0x103cebe0u); g->xmm[6] = sse_addps(g->xmm[6], rd128(A)); }
    { /* mulps xmm5, xmm4 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[4]); }
    { /* mulps xmm6, xmm4 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[4]); }
    { /* addps xmm5, xmmword ptr [0x103cebd0] */ uint32_t A = COW_IMG(0x103cebd0u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* addps xmm6, xmmword ptr [0x103cebc0] */ uint32_t A = COW_IMG(0x103cebc0u); g->xmm[6] = sse_addps(g->xmm[6], rd128(A)); }
    { /* mulps xmm5, xmm2 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[2]); }
    { /* mulps xmm6, xmm4 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[4]); }
    { /* addps xmm6, xmmword ptr [0x103cebb0] */ uint32_t A = COW_IMG(0x103cebb0u); g->xmm[6] = sse_addps(g->xmm[6], rd128(A)); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* andnps xmm1, xmm5 */ g->xmm[1] = sse_andnps(g->xmm[1], g->xmm[5]); }
    { /* andps xmm2, xmm6 */ g->xmm[2] = sse_andps(g->xmm[2], g->xmm[6]); }
    { /* orps xmm1, xmm2 */ g->xmm[1] = sse_orps(g->xmm[1], g->xmm[2]); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* andps xmm0, xmm5 */ g->xmm[0] = sse_andps(g->xmm[0], g->xmm[5]); }
    { /* andnps xmm2, xmm6 */ g->xmm[2] = sse_andnps(g->xmm[2], g->xmm[6]); }
    { /* orps xmm0, xmm2 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[2]); }
    { /* xorps xmm0, xmm7 */ g->xmm[0] = sse_xorps(g->xmm[0], g->xmm[7]); }
    { /* xorps xmm1, xmm3 */ g->xmm[1] = sse_xorps(g->xmm[1], g->xmm[3]); }
    { /* movaps xmmword ptr [eax], xmm1 */ uint32_t A = arg2; wr128(A, g->xmm[1]); }
    { /* movaps xmmword ptr [edx], xmm0 */ uint32_t A = arg3; wr128(A, g->xmm[0]); }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10309cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10309cd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
