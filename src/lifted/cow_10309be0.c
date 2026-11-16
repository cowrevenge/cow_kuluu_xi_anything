/* f_0x10309be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10309be0(Guest* g)
{

    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* pand xmm0, xmmword ptr [0x103ceba0] */ uint32_t A = COW_IMG(0x103ceba0u); g->xmm[0] = sse2_pand(g->xmm[0], rd128(A)); }
    { /* pand xmm1, xmmword ptr [0x103ceb90] */ uint32_t A = COW_IMG(0x103ceb90u); g->xmm[1] = sse2_pand(g->xmm[1], rd128(A)); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* mulps xmm0, xmmword ptr [0x103ceb80] */ uint32_t A = COW_IMG(0x103ceb80u); g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmm4, xmmword ptr [0x103ceb70] */ uint32_t A = COW_IMG(0x103ceb70u); g->xmm[4] = rd128(A); }
    { /* addps xmm0, xmmword ptr [0x103ceb60] */ uint32_t A = COW_IMG(0x103ceb60u); g->xmm[0] = sse_addps(g->xmm[0], rd128(A)); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* subps xmm0, xmmword ptr [0x103ceb60] */ uint32_t A = COW_IMG(0x103ceb60u); g->xmm[0] = sse_subps(g->xmm[0], rd128(A)); }
    { /* mulps xmm4, xmm0 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[0]); }
    { /* subps xmm2, xmm4 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[4]); }
    { /* shufps xmm4, xmm4, 0x39 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 57); }
    { /* subps xmm2, xmm4 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[4]); }
    { /* shufps xmm4, xmm4, 0x39 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 57); }
    { /* subps xmm2, xmm4 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[4]); }
    { /* shufps xmm4, xmm4, 0x39 */ g->xmm[4] = sse_shufps(g->xmm[4], g->xmm[4], 57); }
    { /* subps xmm2, xmm4 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[4]); }
    { /* movaps xmm4, xmm2 */ g->xmm[4] = g->xmm[2]; }
    { /* mulps xmm4, xmm4 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[4]); }
    { /* andps xmm3, xmmword ptr [0x103ceb50] */ uint32_t A = COW_IMG(0x103ceb50u); g->xmm[3] = sse_andps(g->xmm[3], rd128(A)); }
    { /* movaps xmm0, xmm3 */ g->xmm[0] = g->xmm[3]; }
    { /* movaps xmm7, xmm3 */ g->xmm[7] = g->xmm[3]; }
    { /* andps xmm0, xmmword ptr [0x103ceb40] */ uint32_t A = COW_IMG(0x103ceb40u); g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
    { /* psubd xmm3, xmm0 */ g->xmm[3] = sse2_psubd(g->xmm[3], g->xmm[0]); }
    { /* paddd xmm7, xmm0 */ g->xmm[7] = sse2_paddd(g->xmm[7], g->xmm[0]); }
    { /* pand xmm3, xmmword ptr [0x103ceb30] */ uint32_t A = COW_IMG(0x103ceb30u); g->xmm[3] = sse2_pand(g->xmm[3], rd128(A)); }
    { /* pand xmm7, xmmword ptr [0x103ceb30] */ uint32_t A = COW_IMG(0x103ceb30u); g->xmm[7] = sse2_pand(g->xmm[7], rd128(A)); }
    { /* pslld xmm3, 0x1e */ g->xmm[3] = sse2_pslld(g->xmm[3], (uint64_t)0x1Eu); }
    { /* pslld xmm7, 0x1e */ g->xmm[7] = sse2_pslld(g->xmm[7], (uint64_t)0x1Eu); }
    { /* pxor xmm3, xmm1 */ g->xmm[3] = sse2_pxor(g->xmm[3], g->xmm[1]); }
    { /* pslld xmm0, 0x1e */ g->xmm[0] = sse2_pslld(g->xmm[0], (uint64_t)0x1Eu); }
    { /* pxor xmm1, xmm1 */ g->xmm[1] = sse2_pxor(g->xmm[1], g->xmm[1]); }
    { /* cmpneqps xmm0, xmm1 */ g->xmm[0] = sse_cmpps(g->xmm[0], g->xmm[1], 4); }
    { /* movaps xmm5, xmmword ptr [0x103ceb20] */ uint32_t A = COW_IMG(0x103ceb20u); g->xmm[5] = rd128(A); }
    { /* mulps xmm5, xmm4 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[4]); }
    { /* addps xmm5, xmmword ptr [0x103ceb10] */ uint32_t A = COW_IMG(0x103ceb10u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* mulps xmm5, xmm4 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[4]); }
    { /* addps xmm5, xmmword ptr [0x103ceb00] */ uint32_t A = COW_IMG(0x103ceb00u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* mulps xmm5, xmm4 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[4]); }
    { /* addps xmm5, xmmword ptr [0x103ceaf0] */ uint32_t A = COW_IMG(0x103ceaf0u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* unpcklps xmm2, xmm4 */ g->xmm[2] = sse_unpcklps(g->xmm[2], g->xmm[4]); }
    { /* mulps xmm5, xmm2 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[2]); }
    { /* addps xmm5, xmmword ptr [0x103ceae0] */ uint32_t A = COW_IMG(0x103ceae0u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* andps xmm0, xmm5 */ g->xmm[0] = sse_andps(g->xmm[0], g->xmm[5]); }
    { /* andnps xmm2, xmm5 */ g->xmm[2] = sse_andnps(g->xmm[2], g->xmm[5]); }
    { /* shufps xmm2, xmm2, 0xb1 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 177); }
    { /* orps xmm0, xmm2 */ g->xmm[0] = sse_orps(g->xmm[0], g->xmm[2]); }
    { /* unpcklps xmm7, xmm3 */ g->xmm[7] = sse_unpcklps(g->xmm[7], g->xmm[3]); }
    { /* xorps xmm0, xmm7 */ g->xmm[0] = sse_xorps(g->xmm[0], g->xmm[7]); }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10309be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10309be0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
