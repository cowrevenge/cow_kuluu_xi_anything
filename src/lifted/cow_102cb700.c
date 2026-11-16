/* f_0x102cb700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102cb700(Guest* g)
{
    uint32_t al_m1014;
    uint32_t al_m1018;
    uint32_t al_m101c;
    double d1;
    double d2;
    double d3;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 4168u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x102cu, in_esi);
    wr32(sp1 - 0x1030u, in_edi);
    d1 = (double)(float)(double)rdf32(COW_IMG(0x10345680u) + rd32(arg1 + 0x2a48u) * 4u);
    wrf32(sp1 - 0x1010u, (float)d1);
    d2 = (double)(float)(double)rdf32(COW_IMG(0x10345680u) + rd32(arg1 + 0x2b14u) * 4u);
    wrf32(sp1 - 0x100cu, (float)d2);
    d3 = (double)(float)(double)rdf32(COW_IMG(0x10345680u) + rd32(arg1 + 0x2be0u) * 4u);
    wrf32(sp1 - 0x1008u, (float)d3);
    wr32(sp1 - 0x101cu, sp1 - 0xff0u);
    d4 = (double)(float)(double)rdf32(COW_IMG(0x10345680u) + rd32(arg1 + 0x2cacu) * 4u);
    wrf32(sp1 - 0x1004u, (float)d4);
    { /* movaps xmm3, xmmword ptr [ecx] */ uint32_t A = sp1 - 0x1010u; g->xmm[3] = rd128(A); }
    ecx = arg1 + 0x2000u;
    edx = COW_IMG(0x103cc108u);
    al_m101c = sp1 - 0xff0u;
L_102cb773: ;
    t5 = rd32(edx);
    { /* movaps xmm2, xmmword ptr [ecx] */ uint32_t A = ecx; g->xmm[2] = rd128(A); }
    { /* mulps xmm2, xmm3 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[3]); }
    { /* movaps xmm1, xmmword ptr [edi] */ uint32_t A = arg1 + t5 * 0x10u + 0x1800u; g->xmm[1] = rd128(A); }
    { /* movaps xmm5, xmm1 */ g->xmm[5] = g->xmm[1]; }
    { /* movaps xmm0, xmmword ptr [edi + esi] */ uint32_t A = arg1 - t5 * 0x10u + 0x17f0u; g->xmm[0] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [eax + 0x109afa40] */ uint32_t A = COW_IMG(0x109afa40u) + t5 * 0x40u; g->xmm[4] = rd128(A); }
    { /* mulps xmm5, xmm4 */ g->xmm[5] = sse_mulps(g->xmm[5], g->xmm[4]); }
    { /* movaps xmm4, xmmword ptr [eax + 0x109afa50] */ uint32_t A = COW_IMG(0x109afa50u) + t5 * 0x40u; g->xmm[4] = rd128(A); }
    { /* subps xmm5, xmm0 */ g->xmm[5] = sse_subps(g->xmm[5], g->xmm[0]); }
    { /* mulps xmm4, xmm5 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[5]); }
    { /* movaps xmmword ptr [ecx - 0x10], xmm4 */ uint32_t A = ecx; wr128(A, g->xmm[4]); }
    { /* movaps xmm4, xmmword ptr [eax + 0x109afa40] */ uint32_t A = COW_IMG(0x109afa40u) + t5 * 0x40u; g->xmm[4] = rd128(A); }
    { /* mulps xmm0, xmm4 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[4]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [eax + 0x109afa60] */ uint32_t A = COW_IMG(0x109afa60u) + t5 * 0x40u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmm0 */ g->xmm[1] = g->xmm[0]; }
    { /* addps xmm1, xmm2 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[2]); }
    { /* subps xmm0, xmm2 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[2]); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* movaps xmm0, xmmword ptr [eax + 0x109afa70] */ uint32_t A = COW_IMG(0x109afa70u) + t5 * 0x40u; g->xmm[0] = rd128(A); }
    { /* mulps xmm0, xmm2 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm1, xmm0 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [eax - 0x10], xmm1 */ uint32_t A = al_m101c - 0x10u; wr128(A, g->xmm[1]); }
    { /* movaps xmmword ptr [eax], xmm0 */ uint32_t A = al_m101c; wr128(A, g->xmm[0]); }
    wr32(sp1 - 0x101cu, al_m101c + 0x20u);
    if ((int32_t)(edx + 4u) < (int32_t)COW_IMG(0x103cc308u))
    {
        ecx = ecx + 0x10u;
        edx = edx + 4u;
        al_m101c = al_m101c + 0x20u;
        goto L_102cb773;
    }
    eax = arg1 + 0x20u;
    ecx = arg1 + 0x1000u;
    edx = 0x40u;
L_102cb822: ;
    { /* movaps xmm0, xmmword ptr [eax - 0x10] */ uint32_t A = eax - 0x10u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[1] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [eax + 0x10] */ uint32_t A = eax + 0x10u; g->xmm[2] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [eax - 0x20] */ uint32_t A = eax - 0x20u; g->xmm[3] = rd128(A); }
    { /* movaps xmmword ptr [ecx], xmm3 */ uint32_t A = ecx; wr128(A, g->xmm[3]); }
    { /* movaps xmmword ptr [eax + 0xfb0], xmm0 */ uint32_t A = eax + 0xff0u; wr128(A, g->xmm[0]); }
    { /* movaps xmmword ptr [eax + 0xfc0], xmm1 */ uint32_t A = eax + 0x1000u; wr128(A, g->xmm[1]); }
    { /* movaps xmmword ptr [eax + 0xfd0], xmm2 */ uint32_t A = eax + 0x1010u; wr128(A, g->xmm[2]); }
    if (edx != 1u)
    {
        eax = eax + 0x40u;
        ecx = ecx + 0x40u;
        edx = edx - 1u;
        goto L_102cb822;
    }
    eax = sp1 - 0x1000u;
    ecx = COW_IMG(0x109af250u);
L_102cb85b: ;
    { /* movaps xmm2, xmmword ptr [eax + 0x10] */ uint32_t A = eax + 0x10u; g->xmm[2] = rd128(A); }
    { /* movaps xmm5, xmmword ptr [eax + 0x30] */ uint32_t A = eax + 0x30u; g->xmm[5] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [ecx] */ uint32_t A = ecx; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[1] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [eax + 0x20] */ uint32_t A = eax + 0x20u; g->xmm[4] = rd128(A); }
    { /* movaps xmm3, xmm2 */ g->xmm[3] = g->xmm[2]; }
    { /* subps xmm3, xmm5 */ g->xmm[3] = sse_subps(g->xmm[3], g->xmm[5]); }
    { /* movaps xmm6, xmm3 */ g->xmm[6] = g->xmm[3]; }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* mulps xmm3, xmm6 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[6]); }
    { /* movaps xmm6, xmm1 */ g->xmm[6] = g->xmm[1]; }
    { /* addps xmm1, xmm4 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[4]); }
    { /* subps xmm6, xmm4 */ g->xmm[6] = sse_subps(g->xmm[6], g->xmm[4]); }
    { /* addps xmm1, xmm3 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[3]); }
    { /* movaps xmmword ptr [eax - 0x10], xmm1 */ uint32_t A = eax; wr128(A, g->xmm[1]); }
    { /* addps xmm2, xmm5 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[5]); }
    { /* mulps xmm0, xmm6 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[6]); }
    { /* addps xmm2, xmm0 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[0]); }
    { /* movaps xmmword ptr [eax], xmm2 */ uint32_t A = eax + 0x10u; wr128(A, g->xmm[2]); }
    { /* movaps xmmword ptr [eax], xmm0 */ uint32_t A = eax + 0x20u; wr128(A, g->xmm[0]); }
    { /* movaps xmmword ptr [eax], xmm3 */ uint32_t A = eax + 0x30u; wr128(A, g->xmm[3]); }
    if ((int32_t)(ecx + 0x20u) < (int32_t)COW_IMG(0x109afa50u))
    {
        eax = eax + 0x40u;
        ecx = ecx + 0x20u;
        goto L_102cb85b;
    }
    wr32(sp1 - 0x1014u, 4u);
    esi = 4u;
    al_m1014 = 4u;
L_102cb8c4: ;
    t6 = esi - (uint32_t)((int32_t)esi >> 0x1fu);
    t7 = (uint32_t)((int32_t)t6 >> 1u) - 0x80u;
    wr32(sp1 - 0x1018u, t7);
    t8 = COW_IMG(0x109afa40u) + t7 * 0x10u;
    wr32(sp1 - 0x101cu, t8);
    eax = esi * 0x10u + 0x10u;
    ecx = sp1 - 0x1000u;
    edx = t8;
    edi = esi << 4u;
    al_m101c = t8;
    al_m1018 = t7;
L_102cb8fd: ;
    { /* movaps xmm4, xmmword ptr [edx] */ uint32_t A = edx; g->xmm[4] = rd128(A); }
    edx = ecx + edi;
L_102cb903: ;
    { /* movaps xmm0, xmmword ptr [ecx] */ uint32_t A = ecx; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [eax + ecx - 0x10] */ uint32_t A = eax + ecx - 0x10u; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [ecx + 0x10] */ uint32_t A = ecx + 0x10u; g->xmm[1] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [eax + ecx] */ uint32_t A = eax + ecx; g->xmm[3] = rd128(A); }
    { /* movaps xmm5, xmm0 */ g->xmm[5] = g->xmm[0]; }
    { /* movaps xmm6, xmm4 */ g->xmm[6] = g->xmm[4]; }
    { /* subps xmm5, xmm2 */ g->xmm[5] = sse_subps(g->xmm[5], g->xmm[2]); }
    { /* mulps xmm6, xmm5 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[5]); }
    { /* movaps xmmword ptr [eax + ecx - 0x10], xmm6 */ uint32_t A = eax + ecx - 0x10u; wr128(A, g->xmm[6]); }
    { /* movaps xmm5, xmm1 */ g->xmm[5] = g->xmm[1]; }
    { /* movaps xmm6, xmm4 */ g->xmm[6] = g->xmm[4]; }
    { /* subps xmm5, xmm3 */ g->xmm[5] = sse_subps(g->xmm[5], g->xmm[3]); }
    { /* mulps xmm6, xmm5 */ g->xmm[6] = sse_mulps(g->xmm[6], g->xmm[5]); }
    { /* movaps xmmword ptr [eax + ecx], xmm6 */ uint32_t A = eax + ecx; wr128(A, g->xmm[6]); }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* addps xmm1, xmm3 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[3]); }
    { /* movaps xmmword ptr [ecx], xmm0 */ uint32_t A = ecx; wr128(A, g->xmm[0]); }
    { /* movaps xmmword ptr [ecx + 0x10], xmm1 */ uint32_t A = ecx + 0x10u; wr128(A, g->xmm[1]); }
    if (ecx + 0x20u != edx)
    {
        ecx = ecx + 0x20u;
        goto L_102cb903;
    }
    ecx = ecx + 0x20u;
    t9 = esi * 2u - 1u;
    ecx = ecx - edi;
    edx = t9 << 4u;
    esi = t9;
L_102cb953: ;
    { /* movaps xmm0, xmmword ptr [edx + ecx - 0x10] */ uint32_t A = ecx + edx - 0x10u; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [ecx + 0x10] */ uint32_t A = ecx + 0x10u; g->xmm[1] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [ecx + 0x20] */ uint32_t A = ecx + 0x20u; g->xmm[2] = rd128(A); }
    { /* movaps xmm3, xmmword ptr [ecx + 0x30] */ uint32_t A = ecx + 0x30u; g->xmm[3] = rd128(A); }
    { /* movaps xmm4, xmmword ptr [edx + ecx] */ uint32_t A = ecx + edx; g->xmm[4] = rd128(A); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmm1, xmmword ptr [edx + ecx - 0x20] */ uint32_t A = ecx + edx - 0x20u; g->xmm[1] = rd128(A); }
    { /* addps xmm1, xmm2 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[2]); }
    { /* movaps xmm2, xmmword ptr [edx + ecx - 0x30] */ uint32_t A = ecx + edx - 0x30u; g->xmm[2] = rd128(A); }
    { /* addps xmm2, xmm3 */ g->xmm[2] = sse_addps(g->xmm[2], g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [ecx] */ uint32_t A = ecx; g->xmm[3] = rd128(A); }
    { /* addps xmm4, xmm3 */ g->xmm[4] = sse_addps(g->xmm[4], g->xmm[3]); }
    { /* movaps xmmword ptr [ecx], xmm4 */ uint32_t A = ecx; wr128(A, g->xmm[4]); }
    { /* movaps xmmword ptr [ecx + 0x10], xmm0 */ uint32_t A = ecx + 0x10u; wr128(A, g->xmm[0]); }
    { /* movaps xmmword ptr [ecx + 0x20], xmm1 */ uint32_t A = ecx + 0x20u; wr128(A, g->xmm[1]); }
    { /* movaps xmmword ptr [ecx + 0x30], xmm2 */ uint32_t A = ecx + 0x30u; wr128(A, g->xmm[2]); }
    if ((int32_t)(esi - 8u) > 0)
    {
        ecx = ecx + 0x40u;
        edx = edx - 0x80u;
        esi = esi - 8u;
        goto L_102cb953;
    }
    ecx = ecx + 0x40u;
    wr32(sp1 - 0x1018u, al_m1014 + al_m1018);
    wr32(sp1 - 0x101cu, al_m101c + edi);
    if ((int32_t)(al_m1014 + al_m1018) <= 0)
    {
        ecx = ecx + edi;
        al_m101c = al_m101c + edi;
        al_m1018 = al_m1014 + al_m1018;
        goto L_102cb8f5;
    }
    wr32(sp1 - 0x1014u, al_m1014 * 2u);
    if (al_m1014 * 2u != 0x80u)
    {
        al_m1014 = al_m1014 * 2u;
        goto L_102cb8c0;
    }
    { /* movaps xmm2, xmmword ptr [0x10343aa0] */ uint32_t A = COW_IMG(0x10343aa0u); g->xmm[2] = rd128(A); }
    eax = sp1 - 0x1000u;
    ecx = 0x80u;
L_102cb9e7: ;
    { /* movaps xmm0, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[0] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [eax + 0x800] */ uint32_t A = eax + 0x800u; g->xmm[1] = rd128(A); }
    { /* movaps xmm3, xmm0 */ g->xmm[3] = g->xmm[0]; }
    { /* movaps xmm4, xmm2 */ g->xmm[4] = g->xmm[2]; }
    { /* subps xmm3, xmm1 */ g->xmm[3] = sse_subps(g->xmm[3], g->xmm[1]); }
    { /* mulps xmm4, xmm3 */ g->xmm[4] = sse_mulps(g->xmm[4], g->xmm[3]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [eax + 0x800], xmm4 */ uint32_t A = eax + 0x800u; wr128(A, g->xmm[4]); }
    { /* movaps xmmword ptr [eax], xmm0 */ uint32_t A = eax; wr128(A, g->xmm[0]); }
    if (ecx != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx - 1u;
        goto L_102cb9e7;
    }
    wr32(sp1 - 0x1018u, arg1 + 0x400u);
    wr32(sp1 - 0x101cu, arg1 + 0x7fcu);
    ecx = 0xfffff000u;
    edx = sp1;
    esi = arg1 + 0x400u;
    al_m101c = arg1 + 0x7fcu;
    al_m1018 = arg1 + 0x400u;
L_102cba32: ;
    { /* movaps xmm1, xmmword ptr [ecx + edx] */ uint32_t A = ecx + edx; g->xmm[1] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [edx - 0x10] */ uint32_t A = edx - 0x10u; g->xmm[0] = rd128(A); }
    { /* addps xmm1, xmm0 */ g->xmm[1] = sse_addps(g->xmm[1], g->xmm[0]); }
    { /* movaps xmmword ptr [ecx + edx], xmm1 */ uint32_t A = ecx + edx; wr128(A, g->xmm[1]); }
    t10 = rd32(ecx + edx);
    wr32(esi - 0x400u, t10);
    t11 = rd32(edx - 0xcu);
    wr32(esi, t11);
    t12 = rd32(ecx + edx + 8u);
    wr32(esi + 0x400u, t12);
    t13 = rd32(edx - 4u);
    wr32(esi + 0x800u, t13);
    t14 = rd32(edx - 0x10u);
    wr32(al_m101c - 0x400u, t14);
    t15 = rd32(ecx + edx + 4u);
    wr32(al_m101c, t15);
    t16 = rd32(edx - 8u);
    wr32(al_m101c + 0x400u, t16);
    t17 = rd32(ecx + edx + 0xcu);
    wr32(al_m101c + 0x800u, t17);
    wr32(sp1 - 0x1018u, al_m1018 + 4u);
    wr32(sp1 - 0x101cu, al_m101c - 4u);
    if ((int32_t)(ecx + 0x20u) < 0)
    {
        ecx = ecx + 0x20u;
        edx = edx - 0x10u;
        esi = al_m1018 + 4u;
        al_m101c = al_m101c - 4u;
        al_m1018 = al_m1018 + 4u;
        goto L_102cba32;
    }
    eax = t17;
    edx = edx - 0x10u;
    g->edx = edx;
    return eax;
L_102cb8c0: ;
    esi = al_m1014;
    goto L_102cb8c4;
L_102cb8f5: ;
    edx = al_m101c;
    esi = al_m1014;
    goto L_102cb8fd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cb700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cb700(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
