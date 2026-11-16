/* f_0x102cd670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=9 */
uint32_t cow_fn_102cd670(Guest* g)
{
    uint32_t al_m1810;
    uint32_t al_m1814;
    uint32_t al_m1818;
    uint32_t al_m181c;
    uint32_t al_m1820;
    uint32_t al_m1824;
    double al_m1824_f;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d31;
    double d33;
    double d35;
    double d37;
    double d40;
    double d42;
    double d43;
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
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t34;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 6216u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x182cu, in_esi);
    wr32(sp1 - 0x1830u, in_edi);
    wr32(sp1 - 0x1810u, 0x3f800000u);
    wr32(sp1 - 0x180cu, 0x3f800000u);
    t1 = rd32(arg1 + 8u) + 0x228u;
    wr32(sp1 - 0x1814u, t1);
    wr32(sp1 - 0x1808u, 0x3f800000u);
    wr32(sp1 - 0x1804u, 0x3f800000u);
    if ((int32_t)arg2 <= 0)
    {
        al_m1810 = 0x3f800000u;
        al_m1814 = t1;
    }
    else
    {
        al_m1814 = t1;
        eax = 0u;
        edx = arg3 - (sp1 - 0x1810u);
        al_m1810 = 0x3f800000u;
L_102cd6c3: ;
        t2 = rd32(COW_IMG(0x10344488u) + rd32(eax * 4u + edx + sp1 - 0x1810u) * 4u);
        wr32(eax * 4u + sp1 - 0x1810u, t2);
        if ((int32_t)(eax + 1u) < (int32_t)arg2)
        {
            eax = eax + 1u;
            goto L_102cd6c3;
        }
    }
    eax = rd32(sp0 + 0x10u) + 0x800u;
    ecx = sp1 - 0x1000u;
    edx = sp1 - 4u;
    esi = 0x100u;
L_102cd6f6: ;
    t3 = rd32(eax - 0x800u);
    wr32(ecx, t3);
    t4 = rd32(eax - 0x400u);
    wr32(edx - 8u, t4);
    wr32(ecx + 8u, rd32(eax));
    t5 = rd32(eax + 0x400u);
    wr32(edx, t5);
    if (esi != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 0x10u;
        edx = edx - 0x10u;
        esi = esi - 1u;
        goto L_102cd6f6;
    }
    eax = arg1 + 0x1440u;
    ecx = sp1 - 0x17f8u;
    edx = 0x80u;
L_102cd732: ;
    t6 = rd32(eax - 0x200u);
    wr32(ecx - 8u, t6);
    wr32(ecx - 4u, rd32(eax));
    t7 = rd32(eax + 0x200u);
    wr32(ecx, t7);
    t8 = rd32(eax + 0x400u);
    wr32(ecx + 4u, t8);
    if (edx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 0x10u;
        edx = edx - 1u;
        goto L_102cd732;
    }
    { /* movss xmm3, dword ptr [ecx] */ uint32_t A = COW_IMG(0x103cbfccu); g->xmm[3] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm3, xmm3, 0 */ g->xmm[3] = sse_shufps(g->xmm[3], g->xmm[3], 0); }
    eax = sp1 - 0x810u;
    ecx = sp1 - 0x800u;
    edx = 0x40u;
L_102cd77b: ;
    { /* movaps xmm4, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[4] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [ecx - 0x800] */ uint32_t A = ecx - 0x800u; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [ecx] */ uint32_t A = ecx; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [eax + 0x800] */ uint32_t A = eax + 0x800u; g->xmm[1] = rd128(A); }
    { /* subps xmm4, xmm2 */ g->xmm[4] = sse_subps(g->xmm[4], g->xmm[2]); }
    { /* subps xmm0, xmm1 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [eax], xmm4 */ uint32_t A = eax; wr128(A, g->xmm[4]); }
    { /* mulps xmm2, xmm3 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[3]); }
    { /* movaps xmm4, xmm0 */ g->xmm[4] = g->xmm[0]; }
    { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
    { /* movaps xmmword ptr [ecx - 0x800], xmm0 */ uint32_t A = ecx - 0x800u; wr128(A, g->xmm[0]); }
    { /* movaps xmm0, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[0] = rd128(A); }
    { /* subps xmm4, xmm2 */ g->xmm[4] = sse_subps(g->xmm[4], g->xmm[2]); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* mulps xmm1, xmm3 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[3]); }
    { /* subps xmm2, xmm1 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[1]); }
    { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [ecx], xmm4 */ uint32_t A = ecx; wr128(A, g->xmm[4]); }
    { /* movaps xmmword ptr [eax + 0x800], xmm2 */ uint32_t A = eax + 0x800u; wr128(A, g->xmm[2]); }
    { /* movaps xmmword ptr [eax], xmm0 */ uint32_t A = eax; wr128(A, g->xmm[0]); }
    if (edx != 1u)
    {
        eax = eax - 0x10u;
        ecx = ecx + 0x10u;
        edx = edx - 1u;
        goto L_102cd77b;
    }
    wr32(sp1 - 0x1824u, 0x40u);
    edi = 0x40u;
    al_m1824 = 0x40u;
L_102cd7d9: ;
    t9 = edi - (uint32_t)((int32_t)edi >> 0x1fu);
    wr32(sp1 - 0x181cu, (uint32_t)((int32_t)t9 >> 1u));
    if ((int32_t)(uint32_t)((int32_t)t9 >> 1u) < 128)
    {
        esi = (uint32_t)((int32_t)t9 >> 1u);
        al_m181c = (uint32_t)((int32_t)t9 >> 1u);
        wr32(sp1 - 0x1818u, edi << 4u);
        t10 = -edi << 2u;
        wr32(sp1 - 0x1820u, t10);
        ecx = sp1 - 0x1000u;
        al_m1818 = edi << 4u;
        edi = COW_IMG(0x103cc0ccu) - esi * 4u;
        al_m1820 = t10;
L_102cd81b: ;
        if ((int32_t)(al_m1824 * 2u) > 0)
        {
            eax = al_m1824 * 2u;
            edx = ecx;
            esi = eax << 4u;
            eax = ((eax - 1u) >> 2u) + 1u;
L_102cd835: ;
            { /* movaps xmm1, xmmword ptr [edx] */ uint32_t A = edx; g->xmm[1] = rd128(A); }
            { /* movaps xmm0, xmmword ptr [esi + edx - 0x10] */ uint32_t A = edx + esi - 0x10u; g->xmm[0] = rd128(A); }
            { /* subps xmm1, xmm0 */ g->xmm[1] = sse_subps(g->xmm[1], g->xmm[0]); }
            { /* movaps xmmword ptr [edx], xmm1 */ uint32_t A = edx; wr128(A, g->xmm[1]); }
            { /* movaps xmm1, xmmword ptr [edx + 0x10] */ uint32_t A = edx + 0x10u; g->xmm[1] = rd128(A); }
            { /* movaps xmm0, xmmword ptr [esi + edx - 0x20] */ uint32_t A = edx + esi - 0x20u; g->xmm[0] = rd128(A); }
            { /* subps xmm1, xmm0 */ g->xmm[1] = sse_subps(g->xmm[1], g->xmm[0]); }
            { /* movaps xmmword ptr [edx + 0x10], xmm1 */ uint32_t A = edx + 0x10u; wr128(A, g->xmm[1]); }
            if (eax != 1u)
            {
                eax = eax - 1u;
                edx = edx + 0x20u;
                esi = esi - 0x40u;
                goto L_102cd835;
            }
            edx = edx + 0x20u;
            if (ecx < edx)
            {
                esi = al_m1824 * 0x10u + 0x10u;
L_102cd86a: ;
                { /* movss xmm0, dword ptr [edi] */ uint32_t A = edi; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
                { /* movaps xmm1, xmmword ptr [esi + ecx - 0x10] */ uint32_t A = ecx + esi - 0x10u; g->xmm[1] = rd128(A); }
                { /* movaps xmm2, xmmword ptr [esi + ecx] */ uint32_t A = ecx + esi; g->xmm[2] = rd128(A); }
                { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
                { /* mulps xmm1, xmm0 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[0]); }
                { /* mulps xmm2, xmm0 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[0]); }
                { /* movaps xmm0, xmmword ptr [ecx] */ uint32_t A = ecx; g->xmm[0] = rd128(A); }
                { /* subps xmm0, xmm1 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[1]); }
                { /* movaps xmmword ptr [esi + ecx - 0x30], xmm0 */ uint32_t A = ecx + esi - 0x10u; wr128(A, g->xmm[0]); }
                { /* movaps xmm0, xmmword ptr [ecx - 0x10] */ uint32_t A = ecx + 0x10u; g->xmm[0] = rd128(A); }
                { /* subps xmm0, xmm2 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[2]); }
                { /* movaps xmmword ptr [esi + ecx - 0x20], xmm0 */ uint32_t A = ecx + esi; wr128(A, g->xmm[0]); }
                { /* movaps xmm0, xmmword ptr [ecx - 0x20] */ uint32_t A = ecx; g->xmm[0] = rd128(A); }
                { /* addps xmm0, xmm1 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[1]); }
                { /* movaps xmmword ptr [ecx - 0x20], xmm0 */ uint32_t A = ecx; wr128(A, g->xmm[0]); }
                { /* movaps xmm0, xmmword ptr [ecx - 0x10] */ uint32_t A = ecx + 0x10u; g->xmm[0] = rd128(A); }
                { /* addps xmm0, xmm2 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[2]); }
                { /* movaps xmmword ptr [ecx - 0x10], xmm0 */ uint32_t A = ecx + 0x10u; wr128(A, g->xmm[0]); }
                if (ecx + 0x20u < edx)
                {
                    ecx = ecx + 0x20u;
                    goto L_102cd86a;
                }
                ecx = ecx + 0x20u;
            }
            esi = al_m181c;
        }
        wr32(sp1 - 0x181cu, al_m1824 + esi);
        if ((int32_t)(al_m1824 + esi) < 128)
        {
            ecx = al_m1818 + ecx;
            edi = al_m1820 + edi;
            al_m181c = al_m1824 + esi;
            esi = al_m1824 + esi;
            goto L_102cd81b;
        }
        eax = al_m1824;
        edi = eax;
    }
    wr32(sp1 - 0x1824u, (uint32_t)((int32_t)edi >> 1u));
    if ((int32_t)(uint32_t)((int32_t)edi >> 1u) >= 2)
    {
        al_m1824 = (uint32_t)((int32_t)edi >> 1u);
        edi = (uint32_t)((int32_t)edi >> 1u);
        goto L_102cd7d9;
    }
    { /* movaps xmm5, xmmword ptr [esp + 0x20] */ uint32_t A = sp1 - 0x1810u; g->xmm[5] = rd128(A); }
    wr32(sp1 - 0x1820u, sp1 - 0x10u);
    eax = sp1 - 0x10u;
    edx = COW_IMG(0x103cc304u);
    al_m1820 = sp1 - 0x10u;
L_102cd901: ;
    t11 = rd32(edx);
    { /* movaps xmm1, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[1] = rd128(A); }
    { /* movaps xmm0, xmmword ptr [eax - 0x10] */ uint32_t A = eax - 0x10u; g->xmm[0] = rd128(A); }
    { /* subps xmm0, xmm1 */ g->xmm[0] = sse_subps(g->xmm[0], g->xmm[1]); }
    { /* movss xmm2, dword ptr [eax + 0x103cb6dc] */ uint32_t A = COW_IMG(0x103cb6dcu) + t11 * 0x10u; g->xmm[2] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm2, xmm2, 0 */ g->xmm[2] = sse_shufps(g->xmm[2], g->xmm[2], 0); }
    { /* mulps xmm1, xmm2 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[2]); }
    { /* movaps xmm2, xmm0 */ g->xmm[2] = g->xmm[0]; }
    { /* movaps xmm4, xmm1 */ g->xmm[4] = g->xmm[1]; }
    { /* movaps xmm3, xmmword ptr [esp + eax + 0x30] */ uint32_t A = sp1 + t11 * 0x10u - 0x1800u; g->xmm[3] = rd128(A); }
    { /* movss xmm1, dword ptr [esi] */ uint32_t A = COW_IMG(0x103cb6d8u) + t11 * 0x10u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* subps xmm2, xmm4 */ g->xmm[2] = sse_subps(g->xmm[2], g->xmm[4]); }
    { /* mulps xmm2, xmm5 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[5]); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* mulps xmm2, xmm1 */ g->xmm[2] = sse_mulps(g->xmm[2], g->xmm[1]); }
    { /* movss xmm1, dword ptr [eax + 0x103cb6d0] */ uint32_t A = COW_IMG(0x103cb6d0u) + t11 * 0x10u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    t12 = sp1 + t11 * 0x10u - 0x1800u;
    wr32(sp1 - 0x1818u, t12);
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* movaps xmm6, xmm3 */ g->xmm[6] = g->xmm[3]; }
    { /* mulps xmm1, xmm2 */ g->xmm[1] = sse_mulps(g->xmm[1], g->xmm[2]); }
    { /* subps xmm6, xmm1 */ g->xmm[6] = sse_subps(g->xmm[6], g->xmm[1]); }
    { /* movaps xmmword ptr [edi + esi], xmm6 */ uint32_t A = al_m1814 - t11 * 0x10u + 0x7f0u; wr128(A, g->xmm[6]); }
    { /* movss xmm1, dword ptr [eax + 0x103cb6d0] */ uint32_t A = COW_IMG(0x103cb6d0u) + t11 * 0x10u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* mulps xmm3, xmm1 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[1]); }
    { /* addps xmm0, xmm4 */ g->xmm[0] = sse_addps(g->xmm[0], g->xmm[4]); }
    { /* addps xmm3, xmm2 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmmword ptr [ecx + esi], xmm3 */ uint32_t A = al_m1814 + t11 * 0x10u + 0x800u; wr128(A, g->xmm[3]); }
    { /* movss xmm1, dword ptr [eax + 0x103cb6d4] */ uint32_t A = COW_IMG(0x103cb6d4u) + t11 * 0x10u; g->xmm[1] = xmm_q((uint64_t)rd32(A), 0); }
    { /* shufps xmm1, xmm1, 0 */ g->xmm[1] = sse_shufps(g->xmm[1], g->xmm[1], 0); }
    { /* mulps xmm0, xmm1 */ g->xmm[0] = sse_mulps(g->xmm[0], g->xmm[1]); }
    { /* movaps xmmword ptr [eax], xmm0 */ uint32_t A = t12; wr128(A, g->xmm[0]); }
    wr32(sp1 - 0x1820u, al_m1820 - 0x20u);
    if ((int32_t)(edx - 4u) >= (int32_t)COW_IMG(0x103cc108u))
    {
        eax = al_m1820 - 0x20u;
        edx = edx - 4u;
        al_m1820 = al_m1820 - 0x20u;
        goto L_102cd901;
    }
    eax = arg1 + 0x1440u;
    ecx = sp1 - 0x17f8u;
    esi = 0x80u;
L_102cd9e2: ;
    t13 = rd32(ecx - 8u);
    wr32(eax - 0x200u, t13);
    t14 = rd32(ecx - 4u);
    wr32(eax, t14);
    wr32(eax + 0x200u, rd32(ecx));
    t15 = rd32(ecx + 4u);
    wr32(eax + 0x400u, t15);
    if (esi != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 0x10u;
        esi = esi - 1u;
        goto L_102cd9e2;
    }
    wr32(sp1 - 0x1818u, 0u);
    wr32(sp1 - 0x181cu, 0x228u);
    wr32(sp1 - 0x1820u, arg1 + 0x1a40u);
    al_m181c = 0x228u;
    al_m1818 = 0u;
    al_m1820 = arg1 + 0x1a40u;
L_102cda2a: ;
    t16 = al_m181c + rd32(arg1 + 8u) + 0x1000u;
    t17 = rd32(arg1 + 8u);
    wr32(sp0 + 0x10u, t16);
    eax = al_m181c + t17;
    edx = al_m1820;
    edi = t16;
L_102cda46: ;
    if (rd32(edx + 4u) != 4u)
    {
        ecx = edi + rd32(edx) * 0x10u - 0xff0u;
        esi = rd32(edx + 4u);
        goto L_102cda6a;
    }
    ecx = edi + rd32(edx) * 0x10u - 0xff0u;
    esi = rd32(edx + 4u);
    if (ecx >= edi) goto L_102cdbf8;
    eax = ecx;
L_102cdaed: ;
    wr32(sp1 - 0x1814u, edx + 8u);
    t28 = esi * 7u + rd32(edx + 0xcu);
    t29 = t28 + rd32(edx + 0xcu) - esi;
    t30 = rd32(edx + 0xcu);
    d31 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10344488u) + (t28 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x103444c8u) + (t28 & 7u) * 4u)) * (double)rdf32(eax));
    wrf32(eax, (float)d31);
    t32 = t29 + t30 - esi;
    d33 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10344488u) + (t29 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x103444c8u) + (t29 & 7u) * 4u)) * (double)rdf32(eax + 0x10u));
    wrf32(eax + 0x10u, (float)d33);
    t34 = t30 + t32 - esi;
    d35 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10344488u) + (t32 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x103444c8u) + (t32 & 7u) * 4u)) * (double)rdf32(eax + 0x20u));
    wrf32(eax + 0x20u, (float)d35);
    t36 = t30 + t34 - esi;
    d37 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10344488u) + (t34 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x103444c8u) + (t34 & 7u) * 4u)) * (double)rdf32(eax + 0x30u));
    wrf32(eax + 0x30u, (float)d37);
    t38 = t30 + t36 - esi;
    t39 = t30 + t38 - esi;
    d40 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10344488u) + (t36 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x103444c8u) + (t36 & 7u) * 4u)) * (double)rdf32(eax + 0x40u));
    wrf32(eax + 0x40u, (float)d40);
    t41 = rd32(sp0 + 0x10u);
    d42 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10344488u) + (t38 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x103444c8u) + (t38 & 7u) * 4u)) * (double)rdf32(eax + 0x50u));
    wrf32(eax + 0x50u, (float)d42);
    d43 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10344488u) + (t39 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x103444c8u) + (t39 & 7u) * 4u)) * (double)rdf32(eax + 0x60u));
    wrf32(eax + 0x60u, (float)d43);
    if (eax + 0x70u < t41)
    {
        eax = eax + 0x70u;
        edi = t41;
        al_m1814 = edx + 8u;
        goto L_102cda42;
    }
L_102cdbf8: ;
    wr32(sp1 - 0x1818u, al_m1818 + 1u);
    wr32(sp1 - 0x181cu, al_m181c + 4u);
    wr32(sp1 - 0x1820u, al_m1820 + 0x40u);
    if ((int32_t)(al_m1818 + 1u) < (int32_t)arg2)
    {
        al_m181c = al_m181c + 4u;
        al_m1818 = al_m1818 + 1u;
        al_m1820 = al_m1820 + 0x40u;
        goto L_102cda27;
    }
    eax = al_m1818 + 1u;
    edx = al_m1820 + 0x40u;
    g->edx = edx;
    return eax;
L_102cda27: ;
    goto L_102cda2a;
L_102cda42: ;
    edx = al_m1814;
    goto L_102cda46;
L_102cda6a: ;
    d18 = (double)(float)(double)rdf32(COW_IMG(0x10344488u) + esi * 4u);
    wrf32(sp1 - 0x1824u, (float)d18);
    d19 = fr(g, (double)rdf32(COW_IMG(0x10344488u) + esi * 4u) * (double)rdf32(eax));
    wrf32(eax, (float)d19);
    if (eax + 0x10u >= ecx)
    {
        eax = eax + 0x10u;
        goto L_102cdaed;
    }
    eax = eax + 0x10u;
    al_m1824_f = d18;
L_102cda82: ;
    d20 = fr(g, al_m1824_f * (double)rdf32(eax));
    wrf32(eax, (float)d20);
    d21 = fr(g, al_m1824_f * (double)rdf32(eax + 0x10u));
    wrf32(eax + 0x10u, (float)d21);
    d22 = fr(g, al_m1824_f * (double)rdf32(eax + 0x20u));
    wrf32(eax + 0x20u, (float)d22);
    d23 = fr(g, al_m1824_f * (double)rdf32(eax + 0x30u));
    wrf32(eax + 0x30u, (float)d23);
    d24 = fr(g, al_m1824_f * (double)rdf32(eax + 0x40u));
    wrf32(eax + 0x40u, (float)d24);
    d25 = fr(g, al_m1824_f * (double)rdf32(eax + 0x50u));
    wrf32(eax + 0x50u, (float)d25);
    d26 = fr(g, al_m1824_f * (double)rdf32(eax + 0x60u));
    wrf32(eax + 0x60u, (float)d26);
    d27 = fr(g, al_m1824_f * (double)rdf32(eax + 0x70u));
    wrf32(eax + 0x70u, (float)d27);
    if (eax + 0x80u < ecx)
    {
        eax = eax + 0x80u;
        goto L_102cda82;
    }
    eax = eax + 0x80u;
    goto L_102cdaed;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cd670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cd670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
