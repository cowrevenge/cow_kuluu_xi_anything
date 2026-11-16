/* f_0x102cfad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102cfad0(Guest* g)
{
    uint32_t al_m40;
    uint32_t al_m44;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x4cu, in_esi);
    wr32(sp1 - 0x50u, in_edi);
    t1 = rd32(COW_IMG(0x103cc0c8u) + arg1 * 8u);
    { /* movaps xmm1, xmmword ptr [edx + 0x10344c30] */ uint32_t A = COW_IMG(0x10344c30u) + arg1 * 0x10u; g->xmm[1] = rd128(A); }
    t2 = arg2 * 0x2bu << 0x10u;
    t3 = rd32(COW_IMG(0x10344e4cu) + arg1 * 0xcu + (t2 >> 0x17u) * 0xcu - arg2 * 4u) - (t2 & 0x7f800000u);
    wr32(sp1 - 0x44u, t3);
    wr32(sp1 - 0x40u, t3);
    { /* movss xmm0, dword ptr [edx] */ uint32_t A = sp1 - 0x40u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
    if (arg3 != 8u)
    {
        ecx = t1;
        al_m40 = t3;
        goto L_102cfbfe;
    }
    ecx = t1;
    al_m40 = t3;
    { /* movaps xmm3, xmmword ptr [0x10344c30] */ uint32_t A = COW_IMG(0x10344c30u); g->xmm[3] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [eax] */ uint32_t A = arg4; g->xmm[2] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [eax + 0x10] */ uint32_t A = arg4 + 0x10u; g->xmm[4] = rd128(A); }
    { /* mulps xmm2, xmm0 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[0]); }
    { /* mulps xmm4, xmm0 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[0]); }
    { /* movaps xmm0, xmm4 */ g->xmm[0] = g->xmm[4]; }
    { /* addps xmm2, xmm3 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[3]); }
    { /* addps xmm0, xmm3 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[3]); }
    if (arg1 != 1u) goto L_102cfb98;
    { /* cmpneqps xmm0, xmm1 */ g->xmm[0] = sse_cmpps(g->xmm[0], g->xmm[1], 4); }
    eax = arg1;
    { /* movmskps eax, xmm0 */ eax = (uint32_t)(sse_movmskps(g->xmm[0])); }
    t4 = rd32(COW_IMG(0x10344cb0u) + eax * 4u);
    { /* cmpneqps xmm2, xmm1 */ g->xmm[2] = sse_cmpps(g->xmm[2], g->xmm[1], 4); }
    { /* movmskps ecx, xmm2 */ ecx = (uint32_t)(sse_movmskps(g->xmm[2])); }
    g->edx = t4;
    return t4 + rd32(COW_IMG(0x10344cb0u) + ecx * 4u) + 6u;
L_102cfb98: ;
    { /* andps xmm0, xmm1 */ g->xmm[0] = sse_andps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x20], xmm0 */ uint32_t A = sp1 - 0x30u; wr128(A, g->xmm[0]); }
    t5 = rd32(sp1 - 0x24u);
    { /* andps xmm2, xmm1 */ g->xmm[2] = sse_andps(g->xmm[2], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x10], xmm2 */ uint32_t A = sp1 - 0x40u; wr128(A, g->xmm[2]); }
    t6 = rd32(ecx + t5 * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x28u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x2cu) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x30u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x34u) * 8u + 4u);
    g->edx = rd32(sp1 - 0x40u);
    return t6 + rd32(ecx + rd32(sp1 - 0x38u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x3cu) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x40u) * 8u + 4u) + 6u;
L_102cfbfe: ;
    { /* movaps xmm2, xmmword ptr [0x10344c30] */ uint32_t A = COW_IMG(0x10344c30u); g->xmm[2] = rd128(A); }
    t7 = arg4 + arg3 * 4u;
    wr32(sp1 - 0x44u, t7);
    if (arg1 != 1u)
    {
        eax = 6u;
        edx = arg4;
        al_m44 = t7;
        goto L_102cfc8e;
    }
    eax = 6u;
    edx = arg4;
    esi = t7;
L_102cfc17: ;
    { /* movaps xmm3, xmmword ptr [edx + 0x30] */ uint32_t A = edx + 0x30u; g->xmm[3] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* cmpneqps xmm3, xmm1 */ g->xmm[3] = sse_cmpps(g->xmm[3], g->xmm[1], 4); }
    ecx = edx + 0x30u;
    { /* movmskps ecx, xmm3 */ ecx = (uint32_t)(sse_movmskps(g->xmm[3])); }
    { /* movaps xmm3, xmmword ptr [edi] */ uint32_t A = edx + 0x20u; g->xmm[3] = rd128(A); }
    t8 = rd32(COW_IMG(0x10344cb0u) + ecx * 4u);
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* cmpneqps xmm3, xmm1 */ g->xmm[3] = sse_cmpps(g->xmm[3], g->xmm[1], 4); }
    edi = edx + 0x20u;
    { /* movmskps edi, xmm3 */ edi = (uint32_t)(sse_movmskps(g->xmm[3])); }
    t9 = rd32(COW_IMG(0x10344cb0u) + edi * 4u);
    { /* movaps xmm3, xmmword ptr [edx + 0x10] */ uint32_t A = edx + 0x10u; g->xmm[3] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* cmpneqps xmm3, xmm1 */ g->xmm[3] = sse_cmpps(g->xmm[3], g->xmm[1], 4); }
    edi = edx + 0x10u;
    { /* movmskps edi, xmm3 */ edi = (uint32_t)(sse_movmskps(g->xmm[3])); }
    { /* movaps xmm3, xmmword ptr [edx - 0x40] */ uint32_t A = edx; g->xmm[3] = rd128(A); }
    t10 = rd32(COW_IMG(0x10344cb0u) + edi * 4u);
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* cmpneqps xmm3, xmm1 */ g->xmm[3] = sse_cmpps(g->xmm[3], g->xmm[1], 4); }
    { /* movmskps edi, xmm3 */ edi = (uint32_t)(sse_movmskps(g->xmm[3])); }
    if (edx + 0x40u < esi)
    {
        eax = eax + t10 + t8 + t9 + rd32(COW_IMG(0x10344cb0u) + edi * 4u);
        edx = edx + 0x40u;
        goto L_102cfc17;
    }
    eax = eax + t10 + t8 + t9 + rd32(COW_IMG(0x10344cb0u) + edi * 4u);
    edx = edx + 0x40u;
    g->edx = edx;
    return eax;
L_102cfc8e: ;
    { /* movaps xmm3, xmmword ptr [edx] */ uint32_t A = edx; g->xmm[3] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* andps xmm3, xmm1 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x10], xmm3 */ uint32_t A = sp1 - 0x40u; wr128(A, g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [esi] */ uint32_t A = edx + 0x10u; g->xmm[3] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* andps xmm3, xmm1 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x20], xmm3 */ uint32_t A = sp1 - 0x30u; wr128(A, g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [esi] */ uint32_t A = edx + 0x20u; g->xmm[3] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* andps xmm3, xmm1 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x30], xmm3 */ uint32_t A = sp1 - 0x20u; wr128(A, g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [esi] */ uint32_t A = edx + 0x30u; g->xmm[3] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* andps xmm3, xmm1 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[1]); }
    { /* movaps xmmword ptr [esp + 0x40], xmm3 */ uint32_t A = sp1 - 0x10u; wr128(A, g->xmm[3]); }
    t11 = rd32(ecx + rd32(sp1 - 0xcu) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x10u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 4u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 8u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x14u) * 8u + 4u);
    t12 = t11 + rd32(ecx + rd32(sp1 - 0x18u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x1cu) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x20u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x24u) * 8u + 4u);
    t13 = t12 + rd32(ecx + rd32(sp1 - 0x28u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x2cu) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x30u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x34u) * 8u + 4u);
    if (edx + 0x40u < al_m44)
    {
        eax = eax + t13 + rd32(ecx + rd32(sp1 - 0x38u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x3cu) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x40u) * 8u + 4u);
        edx = edx + 0x40u;
        goto L_102cfc8e;
    }
    eax = eax + t13 + rd32(ecx + rd32(sp1 - 0x38u) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x3cu) * 8u + 4u) + rd32(ecx + rd32(sp1 - 0x40u) * 8u + 4u);
    edx = edx + 0x40u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cfad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cfad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
