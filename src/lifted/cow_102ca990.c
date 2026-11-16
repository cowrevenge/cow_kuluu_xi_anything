/* f_0x102ca990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102ca990(Guest* g)
{
    uint32_t al_m34;
    uint32_t al_m38;
    uint32_t al_m80;
    uint32_t al_m84;
    uint32_t al_m88;
    uint32_t al_m8c;
    uint32_t al_m90;
    uint32_t al_m98;
    uint32_t al_m9c;
    uint32_t al_ma0;
    uint32_t cf;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 272u);

    wr32(sp0 - 4u, in_ebp);
    { /* movaps xmm1, xmmword ptr [0x10343a20] */ uint32_t A = COW_IMG(0x10343a20u); g->xmm[1] = rd128(A); }
    wr32(sp1 - 0xacu, in_esi);
    wr32(sp1 - 0xb0u, in_edi);
    wr32(sp1 - 0x84u, 0u);
    t1 = rd32(arg1 + 0x100u);
    { /* movaps xmmword ptr [esp + 0x80], xmm1 */ uint32_t A = sp1 - 0x30u; wr128(A, g->xmm[1]); }
    wr32(sp1 - 0x90u, 8u);
    if ((int32_t)t1 >= 8)
    {
        al_m90 = 8u;
    }
    else
    {
        eax = t1;
        wr32(sp1 - 0x90u, eax);
        al_m90 = eax;
    }
    wr32(sp1 - 0x98u, arg1);
    t2 = COW_IMG(0x10344dc8u) - arg1;
    wr32(sp1 - 0x38u, t2);
    edi = arg2;
    al_m84 = 0u;
    al_m98 = arg1;
    al_m38 = t2;
L_102ca9e1: ;
    if (rd32(al_m98) != 0u)
    {
        eax = al_m98;
        edx = rd32(al_m98);
        t3 = rd32(eax + 0x80u) * 0x2bu << 0x10u;
        t4 = rd32(COW_IMG(0x10344e4cu) + edx * 0xcu + (t3 >> 0x17u) * 0xcu - rd32(al_m98 + 0x80u) * 4u) - (t3 & 0x7f800000u);
        wr32(sp1 - 0x9cu, t4);
        wr32(sp1 - 0x80u, t4);
        t5 = rd32(COW_IMG(0x103cc0c8u) + edx * 8u);
        { /* movss xmm0, dword ptr [ecx] */ uint32_t A = sp1 - 0x80u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
        t6 = rd32(al_m98);
        { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
        { /* movaps xmm2, xmmword ptr [edx + 0x10343a20] */ uint32_t A = COW_IMG(0x10343a20u) + t6 * 0x10u; g->xmm[2] = rd128(A); }
        t7 = rd32(al_m38 + al_m98);
        { /* movaps xmm3, xmmword ptr [edx + eax*4 + 0xc80] */ uint32_t A = arg1 + t7 * 4u + 0xc80u; g->xmm[3] = rd128(A); }
        { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
        { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
        { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
        { /* movaps xmmword ptr [esp + 0x30], xmm3 */ uint32_t A = sp1 - 0x80u; wr128(A, g->xmm[3]); }
        { /* movaps xmm3, xmmword ptr [eax] */ uint32_t A = arg1 + t7 * 4u + 0xc90u; g->xmm[3] = rd128(A); }
        { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
        { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
        { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
        { /* movaps xmmword ptr [esp + 0x40], xmm3 */ uint32_t A = sp1 - 0x70u; wr128(A, g->xmm[3]); }
        if (t6 != 1u)
        {
            esi = t5;
            cf = t6 < 1u;
            pf = PARITY((uint8_t)(t6 - 1u));
            zf = t6 == 1u;
            sf = (int32_t)(t6 - 1u) < 0;
            of = ((t6 ^ 1u) & (t6 ^ t6 - 1u)) >> 0x1fu;
            t16 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xb4u, t16);
            t17 = esi + rd32(sp1 - 0x80u) * 8u + 4u;
            wr32(sp1 - 0xa0u, t17);
            wr32(sp1 - 0xb8u, edi);
            t18 = rd32(esi + rd32(sp1 - 0x7cu) * 8u);
            wr32(sp1 - 0x9cu, t18);
            t19 = t18 >> (rd32(t17) & 0x1fu) | rd32(esi + rd32(sp1 - 0x80u) * 8u);
            wr32(sp1 - 0xbcu, t19);
            g->esp = sp1 - 0xb0u;
            cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t19, edi, t16);
            t20 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xc0u, t20);
            t21 = edi + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x7cu) * 8u + 4u);
            wr32(sp1 - 0xc4u, t21);
            t22 = esi + rd32(sp1 - 0x78u) * 8u + 4u;
            wr32(sp1 - 0xa0u, t22);
            t23 = rd32(esi + rd32(sp1 - 0x74u) * 8u);
            wr32(sp1 - 0x9cu, t23);
            t24 = t23 >> (rd32(t22) & 0x1fu) | rd32(esi + rd32(sp1 - 0x78u) * 8u);
            wr32(sp1 - 0xc8u, t24);
            g->esp = sp1 - 0xbcu;
            cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t24, t21, t20);
            t25 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xccu, t25);
            t26 = t21 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x74u) * 8u + 4u);
            wr32(sp1 - 0xd0u, t26);
            t27 = esi + rd32(sp1 - 0x70u) * 8u + 4u;
            wr32(sp1 - 0xa0u, t27);
            t28 = rd32(esi + rd32(sp1 - 0x6cu) * 8u);
            wr32(sp1 - 0x9cu, t28);
            t29 = t28 >> (rd32(t27) & 0x1fu) | rd32(esi + rd32(sp1 - 0x70u) * 8u);
            wr32(sp1 - 0xd4u, t29);
            g->esp = sp1 - 0xc8u;
            cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t29, t26, t25);
            t30 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xd8u, t30);
            t31 = t26 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x6cu) * 8u + 4u);
            wr32(sp1 - 0xdcu, t31);
            t32 = esi + rd32(sp1 - 0x68u) * 8u + 4u;
            wr32(sp1 - 0xa0u, t32);
            t33 = rd32(esi + rd32(sp1 - 0x64u) * 8u);
            wr32(sp1 - 0x9cu, t33);
            t34 = t33 >> (rd32(t32) & 0x1fu) | rd32(esi + rd32(sp1 - 0x68u) * 8u);
            wr32(sp1 - 0xe0u, t34);
            g->esp = sp1 - 0xd4u;
            cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t34, t31, t30);
            edi = t31 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x64u) * 8u + 4u);
        }
        else
        {
            esi = t5;
            cf = t6 < 1u;
            pf = PARITY((uint8_t)(t6 - 1u));
            zf = t6 == 1u;
            sf = (int32_t)(t6 - 1u) < 0;
            of = ((t6 ^ 1u) & (t6 ^ t6 - 1u)) >> 0x1fu;
            t8 = rd32(sp1 - 0x7cu) + rd32(sp1 - 0x80u) * 4u;
            wr32(sp1 - 0x9cu, t8);
            t9 = rd32(sp1 - 0x74u) + rd32(sp1 - 0x78u) * 4u;
            wr32(sp1 - 0x8cu, t9);
            t10 = rd32(sp1 - 0x6cu) + rd32(sp1 - 0x70u) * 4u;
            wr32(sp1 - 0xa0u, t10);
            t11 = rd32(sp1 - 0x64u) + rd32(sp1 - 0x68u) * 4u;
            wr32(sp1 - 0x94u, t11);
            t12 = rd32(esi + t9 * 8u) >> (rd32(esi + t8 * 8u + 4u) & 0x1fu) | rd32(esi + t8 * 8u);
            wr32(sp1 - 0x9cu, t12);
            t13 = rd32(esi + t10 * 8u + 4u) + rd32(esi + t8 * 8u + 4u) + rd32(esi + t9 * 8u + 4u);
            wr32(sp1 - 0x9cu, t13);
            t14 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xb4u, t14);
            wr32(sp1 - 0xb8u, edi);
            t15 = rd32(esi + t11 * 8u) >> (t13 & 0x1fu) | t12 | rd32(esi + t10 * 8u) >> (rd32(esi + t8 * 8u + 4u) + rd32(esi + t9 * 8u + 4u) & 0x1fu);
            wr32(sp1 - 0xbcu, t15);
            g->esp = sp1 - 0xb0u;
            cow_cdecl(g, COW_IMG(0x102cb220u), 3, t15, edi, t14);
            edi = edi + rd32(sp1 - 0x9cu) + rd32(esi + rd32(sp1 - 0x94u) * 8u + 4u);
        }
        { /* movaps xmm1, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x30u; g->xmm[1] = rd128(A); }
    }
    wr32(sp1 - 0x84u, al_m84 + 1u);
    wr32(sp1 - 0x98u, al_m98 + 4u);
    if (al_m84 + 1u != al_m90)
    {
        al_m84 = al_m84 + 1u;
        al_m98 = al_m98 + 4u;
        goto L_102ca9e1;
    }
    eax = al_m84 + 1u;
    edx = al_m90;
    al_m84 = al_m84 + 1u;
    if (eax != rd32(arg1 + 0x100u))
    {
        t35 = arg1 + eax * 4u;
        wr32(sp1 - 0x8cu, t35);
        t36 = COW_IMG(0x10344dccu) - arg1;
        wr32(sp1 - 0x34u, t36);
        eax = t35;
        al_m8c = t35;
        al_m34 = t36;
L_102cacab: ;
        wr32(sp1 - 0xa0u, rd32(eax));
        if (rd32(eax) != 0u)
        {
            edx = rd32(eax);
            al_ma0 = rd32(eax);
            t37 = rd32(eax + 0x80u) * 0x2bu << 0x10u;
            t38 = rd32(COW_IMG(0x10344e4cu) + edx * 0xcu + (t37 >> 0x17u) * 0xcu - rd32(al_m8c + 0x80u) * 4u) - (t37 & 0x7f800000u);
            wr32(sp1 - 0x9cu, t38);
            wr32(sp1 - 0x80u, t38);
            t39 = rd32(COW_IMG(0x103cc0c8u) + edx * 8u);
            { /* movss xmm0, dword ptr [ecx] */ uint32_t A = sp1 - 0x80u; g->xmm[0] = xmm_q((uint64_t)rd32(A), 0); }
            { /* shufps xmm0, xmm0, 0 */ g->xmm[0] = sse_shufps(g->xmm[0], g->xmm[0], 0); }
            { /* movaps xmmword ptr [esp + 0xa0], xmm0 */ uint32_t A = sp1 - 0x10u; wr128(A, g->xmm[0]); }
            { /* movaps xmm2, xmmword ptr [edx + 0x10343a20] */ uint32_t A = COW_IMG(0x10343a20u) + al_ma0 * 0x10u; g->xmm[2] = rd128(A); }
            t40 = rd32(al_m38 + al_m8c);
            { /* movaps xmmword ptr [esp + 0x90], xmm2 */ uint32_t A = sp1 - 0x20u; wr128(A, g->xmm[2]); }
            t41 = arg1 + t40 * 4u + 0xc80u;
            wr32(sp1 - 0x88u, t41);
            t42 = arg1 + rd32(al_m34 + al_m8c) * 4u + 0xc80u;
            wr32(sp1 - 0x9cu, t42);
            if (al_ma0 != 1u)
            {
                eax = t41;
                esi = t39;
                al_m9c = t42;
                al_m80 = t38;
                al_m88 = t41;
                goto L_102caf51;
            }
            eax = t41;
            esi = t39;
            al_m9c = t42;
            al_m80 = t38;
            al_m88 = t41;
L_102cad87: ;
            { /* movaps xmm3, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[3] = rd128(A); }
            { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
            { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
            { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
            { /* movaps xmmword ptr [esp + 0x30], xmm3 */ uint32_t A = sp1 - 0x80u; wr128(A, g->xmm[3]); }
            { /* movaps xmm3, xmmword ptr [edx] */ uint32_t A = eax + 0x10u; g->xmm[3] = rd128(A); }
            t43 = rd32(sp1 - 0x80u);
            { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
            { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
            { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
            { /* movaps xmmword ptr [esp + 0x40], xmm3 */ uint32_t A = sp1 - 0x70u; wr128(A, g->xmm[3]); }
            { /* movaps xmm3, xmmword ptr [ecx] */ uint32_t A = eax + 0x20u; g->xmm[3] = rd128(A); }
            t44 = rd32(sp1 - 0x78u);
            { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
            { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
            { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
            { /* movaps xmmword ptr [esp + 0x50], xmm3 */ uint32_t A = sp1 - 0x60u; wr128(A, g->xmm[3]); }
            { /* movaps xmm3, xmmword ptr [eax] */ uint32_t A = eax + 0x30u; g->xmm[3] = rd128(A); }
            t45 = rd32(sp1 - 0x7cu);
            { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
            t46 = rd32(sp1 - 0x74u);
            { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
            t47 = t44 * 4u + t46;
            wr32(sp1 - 0x90u, t47);
            t48 = rd32(sp1 - 0x70u);
            t49 = rd32(sp1 - 0x6cu);
            { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
            { /* movaps xmmword ptr [esp + 0x60], xmm3 */ uint32_t A = sp1 - 0x50u; wr128(A, g->xmm[3]); }
            t50 = t48 * 4u + t49;
            wr32(sp1 - 0x94u, t50);
            t51 = rd32(sp1 - 0x64u) + rd32(sp1 - 0x68u) * 4u;
            wr32(sp1 - 0xa0u, t51);
            t52 = rd32(esi + t43 * 0x20u + t45 * 8u + 4u);
            wr32(sp1 - 0x98u, t52);
            t53 = t52 + rd32(esi + t47 * 8u + 4u);
            wr32(sp1 - 0x98u, t53);
            t54 = t53 + rd32(esi + t50 * 8u + 4u);
            wr32(sp1 - 0x98u, t54);
            t55 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xb4u, t55);
            wr32(sp1 - 0xb8u, edi);
            t56 = rd32(esi + t51 * 8u) >> (t54 & 0x1fu) | rd32(esi + t47 * 8u) >> (t52 & 0x1fu) | rd32(esi + t43 * 0x20u + t45 * 8u) | rd32(esi + t50 * 8u) >> (t53 & 0x1fu);
            wr32(sp1 - 0xbcu, t56);
            g->esp = sp1 - 0xb0u;
            cow_cdecl(g, COW_IMG(0x102cb220u), 3, t56, edi, t55);
            t57 = rd32(sp1 - 0x54u) + rd32(sp1 - 0x58u) * 4u;
            wr32(sp1 - 0x90u, t57);
            t58 = rd32(sp1 - 0x4cu) + rd32(sp1 - 0x50u) * 4u;
            wr32(sp1 - 0x94u, t58);
            t59 = rd32(sp1 - 0x44u) + rd32(sp1 - 0x48u) * 4u;
            wr32(sp1 - 0xa0u, t59);
            t60 = rd32(esi + rd32(sp1 - 0x5cu) * 8u + rd32(sp1 - 0x60u) * 0x20u + 4u);
            wr32(sp1 - 0x98u, t60);
            t61 = t60 + rd32(esi + t57 * 8u + 4u);
            wr32(sp1 - 0x98u, t61);
            t62 = t61 + rd32(esi + t58 * 8u + 4u);
            wr32(sp1 - 0x98u, t62);
            t63 = rd32(arg1 + 0xb58u);
            wr32(sp1 - 0xc0u, t63);
            t64 = edi + rd32(sp1 - 0x98u) + rd32(esi + rd32(sp1 - 0xa0u) * 8u + 4u);
            wr32(sp1 - 0xc4u, t64);
            t65 = rd32(esi + t59 * 8u) >> (t62 & 0x1fu) | rd32(esi + t57 * 8u) >> (t60 & 0x1fu) | rd32(esi + rd32(sp1 - 0x5cu) * 8u + rd32(sp1 - 0x60u) * 0x20u) | rd32(esi + t58 * 8u) >> (t61 & 0x1fu);
            wr32(sp1 - 0xc8u, t65);
            g->esp = sp1 - 0xbcu;
            cow_cdecl(g, COW_IMG(0x102cb220u), 3, t65, t64, t63);
            t66 = rd32(sp1 - 0x88u) + 0x40u;
            wr32(sp1 - 0x88u, t66);
            if (rd32(sp1 - 0x88u) + 0x40u != rd32(sp1 - 0x9cu))
            {
                edi = t64 + rd32(sp1 - 0x98u) + rd32(esi + rd32(sp1 - 0xa0u) * 8u + 4u);
                al_m88 = t66;
                goto L_102cad6b;
            }
            edi = t64 + rd32(sp1 - 0x98u) + rd32(esi + rd32(sp1 - 0xa0u) * 8u + 4u);
L_102cb1b8: ;
            { /* movaps xmm1, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x30u; g->xmm[1] = rd128(A); }
            eax = rd32(sp1 - 0x8cu);
        }
        wr32(sp1 - 0x84u, al_m84 + 1u);
        wr32(sp1 - 0x8cu, eax + 4u);
        if (al_m84 + 1u != rd32(arg1 + 0x100u))
        {
            al_m84 = al_m84 + 1u;
            al_m8c = eax + 4u;
            eax = eax + 4u;
            goto L_102cacab;
        }
        edx = al_m84 + 1u;
    }
    g->edx = edx;
    return edi;
L_102cad6b: ;
    { /* movaps xmm0, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x10u; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x20u; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x30u; g->xmm[1] = rd128(A); }
    eax = al_m88;
    goto L_102cad87;
L_102caf35: ;
    { /* movaps xmm0, xmmword ptr [esp + 0xa0] */ uint32_t A = sp1 - 0x10u; g->xmm[0] = rd128(A); }
    { /* movaps xmm2, xmmword ptr [esp + 0x90] */ uint32_t A = sp1 - 0x20u; g->xmm[2] = rd128(A); }
    { /* movaps xmm1, xmmword ptr [esp + 0x80] */ uint32_t A = sp1 - 0x30u; g->xmm[1] = rd128(A); }
    eax = al_m88;
L_102caf51: ;
    { /* movaps xmm3, xmmword ptr [eax] */ uint32_t A = eax; g->xmm[3] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
    { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmmword ptr [esp + 0x30], xmm3 */ uint32_t A = sp1 - 0x80u; wr128(A, g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [edx] */ uint32_t A = eax + 0x10u; g->xmm[3] = rd128(A); }
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
    t67 = rd32(arg1 + 0xb58u);
    { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmmword ptr [esp + 0x40], xmm3 */ uint32_t A = sp1 - 0x70u; wr128(A, g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [ecx] */ uint32_t A = eax + 0x20u; g->xmm[3] = rd128(A); }
    wr32(sp1 - 0xb4u, t67);
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    t68 = rd32(sp1 - 0x7cu);
    { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
    wr32(sp1 - 0xb8u, edi);
    { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
    { /* movaps xmmword ptr [esp + 0x58], xmm3 */ uint32_t A = sp1 - 0x60u; wr128(A, g->xmm[3]); }
    { /* movaps xmm3, xmmword ptr [eax] */ uint32_t A = eax + 0x30u; g->xmm[3] = rd128(A); }
    t69 = rd32(sp1 - 0x80u);
    t70 = rd32(esi + t68 * 8u);
    { /* mulps xmm3, xmm0 */ g->xmm[3] = sse_mulps(g->xmm[3], g->xmm[0]); }
    { /* addps xmm3, xmm1 */ g->xmm[3] = sse_addps(g->xmm[3], g->xmm[1]); }
    t71 = esi + t69 * 8u + 4u;
    wr32(sp1 - 0xa0u, t71);
    { /* andps xmm3, xmm2 */ g->xmm[3] = sse_andps(g->xmm[3], g->xmm[2]); }
    t72 = rd32(t71);
    { /* movaps xmmword ptr [esp + 0x68], xmm3 */ uint32_t A = sp1 - 0x50u; wr128(A, g->xmm[3]); }
    t73 = t70 >> (t72 & 0x1fu) | rd32(esi + t69 * 8u);
    wr32(sp1 - 0xbcu, t73);
    g->esp = sp1 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t73, edi, t67);
    t74 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xc0u, t74);
    t75 = edi + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x7cu) * 8u + 4u);
    wr32(sp1 - 0xc4u, t75);
    t76 = esi + rd32(sp1 - 0x78u) * 8u + 4u;
    wr32(sp1 - 0xa0u, t76);
    t77 = rd32(esi + rd32(sp1 - 0x74u) * 8u) >> (rd32(t76) & 0x1fu) | rd32(esi + rd32(sp1 - 0x78u) * 8u);
    wr32(sp1 - 0xc8u, t77);
    g->esp = sp1 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t77, t75, t74);
    t78 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xccu, t78);
    t79 = t75 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x74u) * 8u + 4u);
    wr32(sp1 - 0xd0u, t79);
    t80 = esi + rd32(sp1 - 0x70u) * 8u + 4u;
    wr32(sp1 - 0xa0u, t80);
    t81 = rd32(esi + rd32(sp1 - 0x6cu) * 8u) >> (rd32(t80) & 0x1fu) | rd32(esi + rd32(sp1 - 0x70u) * 8u);
    wr32(sp1 - 0xd4u, t81);
    g->esp = sp1 - 0xc8u;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t81, t79, t78);
    t82 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xd8u, t82);
    t83 = t79 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x6cu) * 8u + 4u);
    wr32(sp1 - 0xdcu, t83);
    t84 = esi + rd32(sp1 - 0x68u) * 8u + 4u;
    wr32(sp1 - 0xa0u, t84);
    t85 = rd32(esi + rd32(sp1 - 0x64u) * 8u) >> (rd32(t84) & 0x1fu) | rd32(esi + rd32(sp1 - 0x68u) * 8u);
    wr32(sp1 - 0xe0u, t85);
    g->esp = sp1 - 0xd4u;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t85, t83, t82);
    t86 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xe4u, t86);
    t87 = t83 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x64u) * 8u + 4u);
    wr32(sp1 - 0xe8u, t87);
    t88 = esi + rd32(sp1 - 0x60u) * 8u + 4u;
    wr32(sp1 - 0xa0u, t88);
    t89 = rd32(esi + rd32(sp1 - 0x5cu) * 8u) >> (rd32(t88) & 0x1fu) | rd32(esi + rd32(sp1 - 0x60u) * 8u);
    wr32(sp1 - 0xecu, t89);
    g->esp = sp1 - 0xe0u;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t89, t87, t86);
    t90 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xf0u, t90);
    t91 = t87 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x5cu) * 8u + 4u);
    wr32(sp1 - 0xf4u, t91);
    t92 = esi + rd32(sp1 - 0x58u) * 8u + 4u;
    wr32(sp1 - 0xa0u, t92);
    t93 = rd32(esi + rd32(sp1 - 0x54u) * 8u) >> (rd32(t92) & 0x1fu) | rd32(esi + rd32(sp1 - 0x58u) * 8u);
    wr32(sp1 - 0xf8u, t93);
    g->esp = sp1 - 0xecu;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t93, t91, t90);
    t94 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xb4u, t94);
    t95 = t91 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x54u) * 8u + 4u);
    wr32(sp1 - 0xb8u, t95);
    t96 = esi + rd32(sp1 - 0x50u) * 8u + 4u;
    wr32(sp1 - 0xa0u, t96);
    t97 = rd32(esi + rd32(sp1 - 0x4cu) * 8u) >> (rd32(t96) & 0x1fu) | rd32(esi + rd32(sp1 - 0x50u) * 8u);
    wr32(sp1 - 0xbcu, t97);
    g->esp = sp1 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t97, t95, t94);
    t98 = rd32(arg1 + 0xb58u);
    wr32(sp1 - 0xc0u, t98);
    t99 = t95 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x4cu) * 8u + 4u);
    wr32(sp1 - 0xc4u, t99);
    t100 = esi + rd32(sp1 - 0x48u) * 8u + 4u;
    wr32(sp1 - 0xa0u, t100);
    t101 = rd32(esi + rd32(sp1 - 0x44u) * 8u) >> (rd32(t100) & 0x1fu) | rd32(esi + rd32(sp1 - 0x48u) * 8u);
    wr32(sp1 - 0xc8u, t101);
    g->esp = sp1 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x102cb1f0u), 3, t101, t99, t98);
    t102 = rd32(sp1 - 0x88u) + 0x40u;
    wr32(sp1 - 0x88u, t102);
    if (rd32(sp1 - 0x88u) + 0x40u != rd32(sp1 - 0x9cu))
    {
        edi = t99 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x44u) * 8u + 4u);
        al_m88 = t102;
        goto L_102caf35;
    }
    edi = t99 + rd32(rd32(sp1 - 0xa0u)) + rd32(esi + rd32(sp1 - 0x44u) * 8u + 4u);
    goto L_102cb1b8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ca990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ca990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
