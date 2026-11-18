/* f_0x10309500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10309500(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 8u);

    COW_AT(10309500)
    wr32(sp0 - 4u, in_ebp);
    { /* movaps xmm0, xmmword ptr [eax] */ uint32_t A = arg1; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm6, xmm0 */ g->xmm[6] = g->xmm[0]; }
    { /* andps xmm0, xmmword ptr [0x103ceac0] */ uint32_t A = COW_IMG(0x103ceac0u); g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
    { /* andps xmm1, xmmword ptr [0x103ceab0] */ uint32_t A = COW_IMG(0x103ceab0u); g->xmm[1] = sse_andps(g->xmm[1], rd128(A)); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* movaps xmm7, xmm0 */ g->xmm[7] = g->xmm[0]; }
    { /* mulps xmm0, xmmword ptr [0x103ceaa0] */ uint32_t A = COW_IMG(0x103ceaa0u); g->xmm[0] = sse_mulps(g->xmm[0], rd128(A)); }
    { /* movaps xmm4, xmmword ptr [0x103cea90] */ uint32_t A = COW_IMG(0x103cea90u); g->xmm[4] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [0x103cea80] */ uint32_t A = COW_IMG(0x103cea80u); g->xmm[5] = rd128(A); }
    { /* movaps xmm6, xmmword ptr [0x103cea70] */ uint32_t A = COW_IMG(0x103cea70u); g->xmm[6] = rd128(A); }
    { /* movaps xmm7, xmmword ptr [0x103cea60] */ uint32_t A = COW_IMG(0x103cea60u); g->xmm[7] = rd128(A); }
    { /* addps xmm0, xmmword ptr [0x103cea50] */ uint32_t A = COW_IMG(0x103cea50u); g->xmm[0] = sse_addps(g->xmm[0], rd128(A)); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* subps xmm0, xmmword ptr [0x103cea50] */ uint32_t A = COW_IMG(0x103cea50u); g->xmm[0] = sse_subps(g->xmm[0], rd128(A)); }
    { /* mulps xmm4, xmm0 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[0]); }
    { /* mulps xmm5, xmm0 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[0]); }
    { /* mulps xmm6, xmm0 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[0]); }
    { /* mulps xmm7, xmm0 */ g->xmm[7] = sse_mulps(g->xmm[7], g->xmm[0]); }
    { /* subps xmm2, xmm4 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[4]); }
    { /* subps xmm2, xmm5 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[5]); }
    { /* movaps xmm5, xmmword ptr [0x103cea40] */ uint32_t A = COW_IMG(0x103cea40u); g->xmm[5] = rd128(A); }
    { /* subps xmm2, xmm6 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[6]); }
    { /* movaps xmm6, xmmword ptr [0x103cea30] */ uint32_t A = COW_IMG(0x103cea30u); g->xmm[6] = rd128(A); }
    { /* subps xmm2, xmm7 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[7]); }
    { /* movaps xmm4, xmm2 */ g->xmm[4] = g->xmm[2]; }
    { /* mulps xmm4, xmm4 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[4]); }
    { /* andps xmm3, xmmword ptr [0x103cea20] */ uint32_t A = COW_IMG(0x103cea20u); g->xmm[3] = sse_andps(g->xmm[3], rd128(A)); }
    { /* movaps xmm0, xmm3 */ g->xmm[0] = g->xmm[3]; }
    { /* movaps xmm7, xmm3 */ g->xmm[7] = g->xmm[3]; }
    { /* andps xmm0, xmmword ptr [0x103cea10] */ uint32_t A = COW_IMG(0x103cea10u); g->xmm[0] = sse_andps(g->xmm[0], rd128(A)); }
    { /* movaps xmmword ptr [edx], xmm0 */ uint32_t A = sp0 - 0x44u & 0xfffffff0u; wr128(A, g->xmm[0]); }
    { /* movaps xmmword ptr [edx + 0x10], xmm3 */ uint32_t A = (sp0 - 0x44u & 0xfffffff0u) + 0x10u; wr128(A, g->xmm[3]); }
    { /* movaps xmmword ptr [edx + 0x20], xmm7 */ uint32_t A = (sp0 - 0x44u & 0xfffffff0u) + 0x20u; wr128(A, g->xmm[7]); }
    t1 = (rd32((sp0 - 0x44u & 0xfffffff0u) + 0x10u) - rd32(sp0 - 0x44u & 0xfffffff0u) & rd32(COW_IMG(0x103cea00u))) << 0x1eu;
    wr32((sp0 - 0x44u & 0xfffffff0u) + 0x10u, t1);
    t2 = (rd32((sp0 - 0x44u & 0xfffffff0u) + 0x14u) - rd32((sp0 - 0x44u & 0xfffffff0u) + 4u) & rd32(COW_IMG(0x103cea00u))) << 0x1eu;
    wr32((sp0 - 0x44u & 0xfffffff0u) + 0x14u, t2);
    t3 = (rd32((sp0 - 0x44u & 0xfffffff0u) + 0x18u) - rd32((sp0 - 0x44u & 0xfffffff0u) + 8u) & rd32(COW_IMG(0x103cea00u))) << 0x1eu;
    wr32((sp0 - 0x44u & 0xfffffff0u) + 0x18u, t3);
    t4 = (rd32((sp0 - 0x44u & 0xfffffff0u) + 0x1cu) - rd32((sp0 - 0x44u & 0xfffffff0u) + 0xcu) & rd32(COW_IMG(0x103cea00u))) << 0x1eu;
    wr32((sp0 - 0x44u & 0xfffffff0u) + 0x1cu, t4);
    t5 = (rd32(sp0 - 0x44u & 0xfffffff0u) + rd32((sp0 - 0x44u & 0xfffffff0u) + 0x20u) & rd32(COW_IMG(0x103cea00u))) << 0x1eu;
    wr32((sp0 - 0x44u & 0xfffffff0u) + 0x20u, t5);
    t6 = (rd32((sp0 - 0x44u & 0xfffffff0u) + 0x24u) + rd32((sp0 - 0x44u & 0xfffffff0u) + 4u) & rd32(COW_IMG(0x103cea00u))) << 0x1eu;
    wr32((sp0 - 0x44u & 0xfffffff0u) + 0x24u, t6);
    t7 = (rd32((sp0 - 0x44u & 0xfffffff0u) + 0x28u) + rd32((sp0 - 0x44u & 0xfffffff0u) + 8u) & rd32(COW_IMG(0x103cea00u))) << 0x1eu;
    wr32((sp0 - 0x44u & 0xfffffff0u) + 0x28u, t7);
    t8 = (rd32((sp0 - 0x44u & 0xfffffff0u) + 0xcu) + rd32((sp0 - 0x44u & 0xfffffff0u) + 0x2cu) & rd32(COW_IMG(0x103cea00u))) << 0x1eu;
    wr32((sp0 - 0x44u & 0xfffffff0u) + 0x2cu, t8);
    t9 = rd32(sp0 - 0x44u & 0xfffffff0u) << 0x1eu;
    wr32(sp0 - 0x44u & 0xfffffff0u, t9);
    t10 = rd32((sp0 - 0x44u & 0xfffffff0u) + 4u) << 0x1eu;
    wr32((sp0 - 0x44u & 0xfffffff0u) + 4u, t10);
    t11 = rd32((sp0 - 0x44u & 0xfffffff0u) + 8u) << 0x1eu;
    wr32((sp0 - 0x44u & 0xfffffff0u) + 8u, t11);
    t12 = rd32((sp0 - 0x44u & 0xfffffff0u) + 0xcu) << 0x1eu;
    wr32((sp0 - 0x44u & 0xfffffff0u) + 0xcu, t12);
    { /* movaps xmm3, xmmword ptr [edx + 0x10] */ uint32_t A = (sp0 - 0x44u & 0xfffffff0u) + 0x10u; g->xmm[3] = rd128(A); }
    { /* movaps xmm7, xmmword ptr [edx + 0x20] */ uint32_t A = (sp0 - 0x44u & 0xfffffff0u) + 0x20u; g->xmm[7] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [edx] */ uint32_t A = sp0 - 0x44u & 0xfffffff0u; g->xmm[0] = rd128(A); }
    { /* xorps xmm3, xmm1 */ g->xmm[3] = sse_xorps(g->xmm[3], g->xmm[1]); }
    { /* xorps xmm1, xmm1 */ g->xmm[1] = sse_xorps(g->xmm[1], g->xmm[1]); }
    { /* cmpneqps xmm0, xmm1 */ g->xmm[0] = sse_cmpps(g->xmm[0], g->xmm[1], 4); }
    { /* mulps xmm5, xmm4 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[4]); }
    { /* mulps xmm6, xmm4 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[4]); }
    { /* addps xmm5, xmmword ptr [0x103ce9f0] */ uint32_t A = COW_IMG(0x103ce9f0u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* addps xmm6, xmmword ptr [0x103ce9e0] */ uint32_t A = COW_IMG(0x103ce9e0u); g->xmm[6] = sse_addps(g->xmm[6], rd128(A)); }
    { /* mulps xmm5, xmm4 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[4]); }
    { /* mulps xmm6, xmm4 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[4]); }
    { /* addps xmm5, xmmword ptr [0x103ce9d0] */ uint32_t A = COW_IMG(0x103ce9d0u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* addps xmm6, xmmword ptr [0x103ce9c0] */ uint32_t A = COW_IMG(0x103ce9c0u); g->xmm[6] = sse_addps(g->xmm[6], rd128(A)); }
    { /* mulps xmm5, xmm4 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[4]); }
    { /* mulps xmm6, xmm4 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[4]); }
    { /* addps xmm5, xmmword ptr [0x103ce9b0] */ uint32_t A = COW_IMG(0x103ce9b0u); g->xmm[5] = sse_addps(g->xmm[5], rd128(A)); }
    { /* addps xmm6, xmmword ptr [0x103ce9a0] */ uint32_t A = COW_IMG(0x103ce9a0u); g->xmm[6] = sse_addps(g->xmm[6], rd128(A)); }
    { /* mulps xmm5, xmm2 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[2]); }
    { /* mulps xmm6, xmm4 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[4]); }
    { /* addps xmm6, xmmword ptr [0x103ce990] */ uint32_t A = COW_IMG(0x103ce990u); g->xmm[6] = sse_addps(g->xmm[6], rd128(A)); }
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
void cow_adapter_10309500(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10309500(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
