/* f_0x10308f30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10308f30(Guest* g)
{
    uint32_t eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    { /* movaps xmm1, xmmword ptr [0x109fa2e0] */ uint32_t A = COW_IMG(0x109fa2e0u); g->xmm[1] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [eax] */ uint32_t A = arg1; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [0x109fa320] */ uint32_t A = COW_IMG(0x109fa320u); g->xmm[2] = rd128(A); }
    { /* movaps xmm4, xmm1 */ g->xmm[4] = g->xmm[1]; }
    { /* andnps xmm4, xmm0 */ g->xmm[4] = sse_andnps(g->xmm[4], g->xmm[0]); }
    { /* andps xmm1, xmm0 */ g->xmm[1] = sse_andps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm3, xmm1 */ g->xmm[3] = g->xmm[1]; }
    { /* cmpleps xmm3, xmm2 */ g->xmm[3] = sse_cmpps(g->xmm[3], g->xmm[2], 2); }
    eax = arg1;
    { /* movmskps eax, xmm3 */ eax = (uint32_t)(sse_movmskps(g->xmm[3])); }
    if (eax != 0xfu) goto L_10308fcc;
    { /* mulps xmm1, xmm1 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[1]); }
    { /* movaps xmm2, xmmword ptr [0x109fa340] */ uint32_t A = COW_IMG(0x109fa340u); g->xmm[2] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [0x109fa350] */ uint32_t A = COW_IMG(0x109fa350u); g->xmm[3] = rd128(A); }
    { /* movaps xmm4, xmm1 */ g->xmm[4] = g->xmm[1]; }
    { /* mulps xmm1, xmm1 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[1]); }
    { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
    { /* addps xmm2, xmmword ptr [0x109fa360] */ uint32_t A = COW_IMG(0x109fa360u); g->xmm[2] = sse_addps(g->xmm[2], rd128(A)); }
    { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
    { /* addps xmm2, xmmword ptr [0x109fa380] */ uint32_t A = COW_IMG(0x109fa380u); g->xmm[2] = sse_addps(g->xmm[2], rd128(A)); }
    { /* mulps xmm4, xmm2 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[2]); }
    { /* mulps xmm3, xmm1 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[1]); }
    { /* addps xmm3, xmmword ptr [0x109fa370] */ uint32_t A = COW_IMG(0x109fa370u); g->xmm[3] = sse_addps(g->xmm[3], rd128(A)); }
    { /* mulps xmm1, xmm3 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[3]); }
    { /* addps xmm1, xmmword ptr [0x109fa390] */ uint32_t A = COW_IMG(0x109fa390u); g->xmm[1] = sse_addps(g->xmm[1], rd128(A)); }
    { /* addps xmm1, xmm4 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[4]); }
    { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [0x109fa310] */ uint32_t A = COW_IMG(0x109fa310u); g->xmm[0] = rd128(A); }
    { /* subps xmm0, xmm1 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [edx], xmm0 */ uint32_t A = arg2; wr128(A, g->xmm[0]); }
    g->edx = arg2;
    return eax;
L_10308fcc: ;
    { /* cmpltps xmm0, xmmword ptr [0x109fa2f0] */ uint32_t A = COW_IMG(0x109fa2f0u); g->xmm[0] = sse_cmpps(g->xmm[0], rd128(A), 1); }
    if (eax != 0u) goto L_10309044;
    { /* movaps xmm3, xmmword ptr [0x109fa330] */ uint32_t A = COW_IMG(0x109fa330u); g->xmm[3] = rd128(A); }
    { /* subps xmm3, xmm1 */ g->xmm[3] = sse_subps(g->xmm[3], g->xmm[1]); }
    { /* mulps xmm2, xmm3 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[3]); }
    { /* sqrtps xmm1, xmm2 */ g->xmm[1] = sse_sqrtps(g->xmm[1], g->xmm[2]); }
    { /* addps xmm1, xmm1 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[1]); }
    { /* movaps xmm3, xmmword ptr [0x109fa340] */ uint32_t A = COW_IMG(0x109fa340u); g->xmm[3] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [0x109fa350] */ uint32_t A = COW_IMG(0x109fa350u); g->xmm[5] = rd128(A); }
    { /* movaps xmm6, xmm2 */ g->xmm[6] = g->xmm[2]; }
    { /* mulps xmm2, xmm2 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[2]); }
    { /* mulps xmm3, xmm2 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[2]); }
    { /* addps xmm3, xmmword ptr [0x109fa360] */ uint32_t A = COW_IMG(0x109fa360u); g->xmm[3] = sse_addps(g->xmm[3], rd128(A)); }
    { /* mulps xmm3, xmm2 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[2]); }
    { /* addps xmm3, xmmword ptr [0x109fa380] */ uint32_t A = COW_IMG(0x109fa380u); g->xmm[3] = sse_addps(g->xmm[3], rd128(A)); }
    { /* mulps xmm6, xmm3 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[3]); }
    { /* mulps xmm5, xmm2 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[2]); }
    { /* addps xmm5, xmmword ptr [0x109fa370] */ uint32_t A = COW_IMG(0x109fa370u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* mulps xmm2, xmm5 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[5]); }
    { /* addps xmm2, xmmword ptr [0x109fa390] */ uint32_t A = COW_IMG(0x109fa390u); g->xmm[2] = sse_addps(g->xmm[2], rd128(A)); }
    { /* addps xmm2, xmm6 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[6]); }
    { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
    { /* orps xmm2, xmm4 */ g->xmm[2] = sse_orps(g->xmm[2], g->xmm[4]); }
    { /* andps xmm0, xmmword ptr [0x109fa300] */ uint32_t A = COW_IMG(0x109fa300u); g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* movaps xmmword ptr [edx], xmm0 */ uint32_t A = arg2; wr128(A, g->xmm[0]); }
    g->edx = arg2;
    return eax;
L_10309044: ;
    { /* movaps xmm5, xmmword ptr [0x109fa330] */ uint32_t A = COW_IMG(0x109fa330u); g->xmm[5] = rd128(A); }
    { /* subps xmm5, xmm1 */ g->xmm[5] = sse_subps(g->xmm[5], g->xmm[1]); }
    { /* mulps xmm2, xmm5 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[5]); }
    { /* sqrtps xmm2, xmm2 */ g->xmm[2] = sse_sqrtps(g->xmm[2], g->xmm[2]); }
    { /* andps xmm1, xmm3 */ g->xmm[1] = sse_andps(g->xmm[1], g->xmm[3]); }
    { /* movaps xmm5, xmmword ptr [0x109fa340] */ uint32_t A = COW_IMG(0x109fa340u); g->xmm[5] = rd128(A); }
    { /* movaps xmm6, xmm3 */ g->xmm[6] = g->xmm[3]; }
    { /* andnps xmm3, xmm2 */ g->xmm[3] = sse_andnps(g->xmm[3], g->xmm[2]); }
    { /* orps xmm1, xmm3 */ g->xmm[1] = sse_orps(g->xmm[1], g->xmm[3]); }
    { /* movaps xmm2, xmmword ptr [0x109fa350] */ uint32_t A = COW_IMG(0x109fa350u); g->xmm[2] = rd128(A); }
    { /* movaps xmm3, xmm1 */ g->xmm[3] = g->xmm[1]; }
    { /* mulps xmm1, xmm1 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[1]); }
    { /* movaps xmm7, xmm1 */ g->xmm[7] = g->xmm[1]; }
    { /* mulps xmm1, xmm1 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[1]); }
    { /* mulps xmm5, xmm1 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[1]); }
    { /* addps xmm5, xmmword ptr [0x109fa360] */ uint32_t A = COW_IMG(0x109fa360u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* mulps xmm5, xmm1 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[1]); }
    { /* addps xmm5, xmmword ptr [0x109fa380] */ uint32_t A = COW_IMG(0x109fa380u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* mulps xmm7, xmm5 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[5]); }
    { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
    { /* addps xmm2, xmmword ptr [0x109fa370] */ uint32_t A = COW_IMG(0x109fa370u); g->xmm[2] = sse_addps(g->xmm[2], rd128(A)); }
    { /* mulps xmm1, xmm2 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[2]); }
    { /* addps xmm1, xmmword ptr [0x109fa390] */ uint32_t A = COW_IMG(0x109fa390u); g->xmm[1] = sse_addps(g->xmm[1], rd128(A)); }
    { /* addps xmm1, xmm7 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[7]); }
    { /* mulps xmm1, xmm3 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[3]); }
    { /* movaps xmm2, xmmword ptr [0x109fa310] */ uint32_t A = COW_IMG(0x109fa310u); g->xmm[2] = rd128(A); }
    { /* andps xmm0, xmmword ptr [0x109fa300] */ uint32_t A = COW_IMG(0x109fa300u); g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
    { /* movaps xmm3, xmm1 */ g->xmm[3] = g->xmm[1]; }
    { /* addps xmm1, xmm1 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[1]); }
    { /* orps xmm1, xmm4 */ g->xmm[1] = sse_orps(g->xmm[1], g->xmm[4]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* orps xmm3, xmm4 */ g->xmm[3] = sse_orps(g->xmm[3], g->xmm[4]); }
    { /* subps xmm2, xmm3 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[3]); }
    { /* andps xmm2, xmm6 */ g->xmm[2] = sse_andps(g->xmm[2], g->xmm[6]); }
    { /* andnps xmm6, xmm0 */ g->xmm[6] = sse_andnps(g->xmm[6], g->xmm[0]); }
    { /* orps xmm2, xmm6 */ g->xmm[2] = sse_orps(g->xmm[2], g->xmm[6]); }
    { /* movaps xmmword ptr [edx], xmm2 */ uint32_t A = arg2; wr128(A, g->xmm[2]); }
    g->edx = arg2;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10308f30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10308f30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
