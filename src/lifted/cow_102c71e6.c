/* f_0x102c71e6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c71e6(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    t1 = rd32(rd32(sp0 + 8u) + 4u);
    wr32(sp0 - 8u, t1);
    t2 = rd32(rd32(sp0 + 4u) + 0x20u);
    t3 = rd32(rd32(sp0 + 4u) + 0x34u);
    t4 = rd32(rd32(sp0 + 8u));
    t5 = rd32(sp0 + 4u);
    t6 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, t2);
    t7 = rd32(t5 + 0x1cu);
    wr32(sp0 + 8u, t7);
    wr32(sp0 - 0xcu, t3);
    if (t3 >= rd32(t5 + 0x30u))
    {
        ecx = t3;
        ebx = t4;
        esi = t5;
        edi = t6;
        loc_8 = t1;
        loc_c = t3;
        eax = rd32(esi + 0x2cu) - ecx;
    }
    else
    {
        eax = rd32(t5 + 0x30u);
        ecx = t3;
        ebx = t4;
        esi = t5;
        edi = t6;
        loc_8 = t1;
        loc_c = t3;
        eax = eax - ecx - 1u;
    }
    wr32(sp0 - 0x14u, eax);
    edx = in_edx;
    loc_4 = in_ebp;
    loc_34 = in_ebx;
    loc_38 = in_esi;
    loc_3c = in_edi;
    loc_14 = eax;
L_102c7223: ;
    if (rd32(esi) > 9u) goto L_102c78f8;
    eax = rd32(esi);
    t8 = rd32(COW_IMG(0x102c792au) + eax * 4u);
    switch (t8 - RD)
    {
    case 0x102c7235u: goto L_102c7235;
    case 0x102c731eu: goto L_102c731e;
    case 0x102c7386u: goto L_102c7386;
    case 0x102c7470u: goto L_102c7470;
    case 0x102c74f2u: goto L_102c74f2;
    case 0x102c76cbu: goto L_102c76cb;
    case 0x102c776eu: goto L_102c776e;
    case 0x102c7802u: goto L_102c7802;
    case 0x102c78acu: goto L_102c78ac;
    case 0x102c78f4u: goto L_102c78f4;
    default: rt_fatal(g, COW_IMG(0x102c722eu), "switch");
    }
    return;
L_102c7235: ;
    wr32(sp0 - 0x40u, 3u);
L_102c725b: ;
    if (rd32(sp0 + 8u) < 3u) goto L_102c723a;
    t106 = rd32(sp0 + 4u) & 7u;
    wr32(esi + 0x18u, t106 & 1u);
    if (t106 >> 1u == 0u) goto L_102c72fc;
    eax = t106 >> 1u;
    ecx = t106 & 1u;
    if (eax == 1u) goto L_102c72b3;
    eax = eax - 1u;
    if (eax == 1u) goto L_102c72a5;
    eax = eax - 1u;
    if (eax != 1u)
    {
        edx = 3u;
        goto L_102c7223;
    }
    t107 = rd32(sp0 + 4u);
    wr32(esi, 9u);
    wr32(edi + 0x18u, COW_IMG(0x103c9560u));
    wr32(esi + 0x20u, t107 >> 3u);
    wr32(sp0 - 0x40u, 0xfffffffdu);
    eax = rd32(sp0 + 8u) - 3u;
    edx = 3u;
    loc_40 = 0xfffffffdu;
L_102c7903: ;
    wr32(esi + 0x1cu, eax);
    wr32(edi + 4u, loc_8);
L_102c790c: ;
    t127 = rd32(edi);
    wr32(edi, ebx);
    wr32(edi + 8u, ebx + rd32(edi + 8u) - t127);
    wr32(esi + 0x34u, loc_c);
    eax = loc_c;
L_102c791b: ;
    wr32(sp0 - 0x44u, edi);
    wr32(sp0 - 0x48u, esi);
    g->esp = sp0 - 0x38u;
    cow_call_regs(g, COW_IMG(0x102c9860u), g->eax, ecx, edx, 1, 4, esi, edi, loc_40, loc_3c);
L_102c7925: ;
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c723a: ;
    if (loc_8 == 0u)
    {
        edx = 3u;
        goto L_102c7826;
    }
    t121 = rd8(ebx);
    t122 = rd32(sp0 + 8u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 8u, loc_8 - 1u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) | t121 << (t122 & 0x1fu));
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 8u);
    ecx = t122;
    ebx = ebx + 1u;
    loc_8 = loc_8 - 1u;
    goto L_102c725b;
L_102c72a5: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) >> 3u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 3u);
    wr32(esi, 3u);
    edx = 3u;
    goto L_102c7223;
L_102c72b3: ;
    wr32(sp0 - 0x40u, edi);
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    wr32(sp0 - 0x48u, sp0 - 0x20u);
    wr32(sp0 - 0x4cu, sp0 - 0x24u);
    wr32(sp0 - 0x50u, sp0 - 0x28u);
    g->eax = sp0 - 0x28u;
    g->ecx = ecx;
    g->edx = 3u;
    g->esp = sp0 - 0x40u;
    t108 = cow_cdecl(g, COW_IMG(0x102c9831u), 4, sp0 - 0x28u, sp0 - 0x24u, sp0 - 0x20u, sp0 - 0x1cu);
    t109 = g->ecx;
    t110 = g->edx;
    wr32(sp0 - 0x54u, edi);
    t111 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x58u, t111);
    t112 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x5cu, t112);
    t113 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x60u, t113);
    t114 = rd32(sp0 - 0x28u);
    wr32(sp0 - 0x64u, t114);
    g->esp = sp0 - 0x48u;
    t115 = cow_call_regs(g, COW_IMG(0x102c8d8bu), g->eax, t109, t110, 1, 7, t114, t113, t112, t111, edi, sp0 - 0x28u, sp0 - 0x24u);
    t116 = g->ecx;
    t117 = g->edx;
    wr32(esi + 4u, t115);
    if (t115 == 0u)
    {
        ecx = t116;
        edx = t117;
        goto L_102c78a2;
    }
    ecx = t116;
    edx = t117;
    wr32(sp0 + 4u, rd32(sp0 + 4u) >> 3u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 3u);
    wr32(esi, 6u);
    goto L_102c7223;
L_102c72fc: ;
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 3u);
    t118 = rd32(sp0 + 4u);
    t119 = rd32(sp0 + 8u);
    wr32(esi, 1u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - (t119 & 7u));
    t120 = t118 >> 3u >> (t119 & 7u);
    wr32(sp0 + 4u, t120);
    ecx = t119 & 7u;
    edx = 3u;
    goto L_102c7223;
L_102c731e: ;
    ecx = rd32(sp0 + 8u);
L_102c7343: ;
    if (ecx < 0x20u) goto L_102c7323;
    if (~rd32(sp0 + 4u) >> 0x10u != (uint16_t)rd32(sp0 + 4u))
    {
        ecx = ~rd32(sp0 + 4u) >> 0x10u;
        goto L_102c77f5;
    }
    eax = (uint16_t)rd32(sp0 + 4u);
    ecx = ~rd32(sp0 + 4u) >> 0x10u;
    wr32(esi + 4u, eax);
    t104 = rd32(esi + 4u);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 0u);
    if (t104 == 0u) goto L_102c7375;
    wr32(sp0 - 0x40u, 2u);
    eax = 2u;
L_102c737f: ;
    wr32(esi, eax);
    goto L_102c7223;
L_102c7323: ;
    if (loc_8 == 0u) goto L_102c7826;
    t105 = rd8(ebx);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 8u, loc_8 - 1u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) | t105 << (ecx & 0x1fu));
    wr32(sp0 + 8u, ecx + 8u);
    ecx = ecx + 8u;
    ebx = ebx + 1u;
    loc_8 = loc_8 - 1u;
    goto L_102c7343;
L_102c7375: ;
    eax = -(rd32(esi + 0x18u) != 0u) & 7u;
    goto L_102c737f;
L_102c7386: ;
    if (loc_8 == 0u) goto L_102c7826;
    if (loc_14 != 0u) goto L_102c7426;
    if (loc_c != rd32(esi + 0x2cu))
    {
        ecx = rd32(esi + 0x2cu);
        goto L_102c73c4;
    }
    ecx = rd32(esi + 0x2cu);
    if (rd32(esi + 0x28u) == rd32(esi + 0x30u))
    {
        edx = rd32(esi + 0x28u);
        goto L_102c73c4;
    }
    eax = rd32(esi + 0x30u);
    edx = rd32(esi + 0x28u);
    cf = rd32(esi + 0x28u) < rd32(esi + 0x30u);
    wr32(sp0 - 0xcu, edx);
    if (!cf)
    {
        loc_c = edx;
        wr32(sp0 - 0x14u, ecx - edx);
        loc_14 = ecx - edx;
        ecx = ecx - edx;
    }
    else
    {
        loc_c = edx;
        t88 = eax - edx - 1u;
        wr32(sp0 - 0x14u, t88);
        loc_14 = t88;
    }
    if (loc_14 != 0u) goto L_102c7426;
L_102c73c4: ;
    t89 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x40u, t89);
    wr32(esi + 0x34u, loc_c);
    wr32(sp0 - 0x44u, edi);
    wr32(sp0 - 0x48u, esi);
    g->eax = loc_c;
    g->esp = sp0 - 0x38u;
    t90 = cow_call_regs(g, COW_IMG(0x102c9860u), g->eax, ecx, edx, 1, 4, esi, edi, t89, loc_3c);
    t91 = rd32(esi + 0x30u);
    wr32(sp0 + 0xcu, t90);
    t92 = rd32(esi + 0x34u);
    wr32(sp0 - 0xcu, t92);
    if (rd32(esi + 0x34u) >= t91)
    {
        ecx = t91;
        loc_c = t92;
        t94 = rd32(esi + 0x2cu) - loc_c;
        wr32(sp0 - 0x14u, t94);
        loc_14 = t94;
    }
    else
    {
        ecx = t91;
        loc_c = t92;
        t93 = ecx - loc_c - 1u;
        wr32(sp0 - 0x14u, t93);
        loc_14 = t93;
    }
    if (loc_c != rd32(esi + 0x2cu))
    {
        edx = rd32(esi + 0x2cu);
    }
    else
    {
        edx = rd32(esi + 0x2cu);
        if (rd32(esi + 0x28u) != ecx)
        {
            eax = rd32(esi + 0x28u);
            cf = rd32(esi + 0x28u) < ecx;
            wr32(sp0 - 0xcu, eax);
            if (!cf)
            {
                loc_c = eax;
                wr32(sp0 - 0x14u, edx - eax);
                loc_14 = edx - eax;
                edx = edx - eax;
            }
            else
            {
                loc_c = eax;
                t95 = ecx - eax - 1u;
                wr32(sp0 - 0x14u, t95);
                ecx = t95;
                loc_14 = t95;
            }
        }
    }
    if (loc_14 == 0u) goto L_102c7809;
L_102c7426: ;
    t97 = rd32(esi + 4u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 0x10u, t97);
    if (t97 <= loc_8)
    {
        ecx = loc_8;
        loc_10 = t97;
    }
    else
    {
        ecx = loc_8;
        wr32(sp0 - 0x10u, ecx);
        loc_10 = ecx;
    }
    if (loc_10 <= loc_14)
    {
        eax = loc_14;
    }
    else
    {
        eax = loc_14;
        wr32(sp0 - 0x10u, eax);
        loc_10 = eax;
    }
    wr32(sp0 - 0x40u, loc_10);
    wr32(sp0 - 0x44u, ebx);
    wr32(sp0 - 0x48u, loc_c);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, loc_c, ebx, loc_10, loc_3c, loc_38);
    t98 = g->ecx;
    t99 = g->edx;
    t100 = rd32(sp0 - 8u) - rd32(sp0 - 0x10u);
    wr32(sp0 - 8u, t100);
    t101 = rd32(sp0 - 0xcu) + rd32(sp0 - 0x10u);
    wr32(sp0 - 0xcu, t101);
    t102 = rd32(sp0 - 0x14u) - rd32(sp0 - 0x10u);
    wr32(sp0 - 0x14u, t102);
    t103 = rd32(sp0 - 0x10u);
    wr32(esi + 4u, rd32(esi + 4u) - t103);
    if (rd32(esi + 4u) != rd32(sp0 - 0x10u))
    {
        ecx = t98;
        edx = t99;
        ebx = ebx + t103;
        loc_8 = t100;
        loc_c = t101;
        loc_14 = t102;
        goto L_102c7223;
    }
    ecx = t98;
    edx = t99;
    ebx = ebx + t103;
    loc_8 = t100;
    loc_c = t101;
    loc_14 = t102;
    goto L_102c7375;
L_102c7470: ;
    ecx = rd32(sp0 + 8u);
L_102c7495: ;
    if (ecx < 0xeu) goto L_102c7475;
    t9 = rd32(sp0 + 4u) & 0x3fffu;
    wr32(esi + 4u, t9);
    if ((t9 & 0x1fu) > 0x1du)
    {
        ecx = t9 & 0x1fu;
        goto L_102c7811;
    }
    eax = t9;
    ecx = t9 & 0x1fu;
    if ((eax >> 5u & 0x1fu) > 0x1du) goto L_102c7811;
    eax = eax >> 5u & 0x1fu;
    wr32(sp0 - 0x40u, 4u);
    t10 = eax + ecx + 0x102u;
    wr32(sp0 - 0x44u, t10);
    t11 = rd32(edi + 0x28u);
    wr32(sp0 - 0x48u, t11);
    g->eax = t10;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t12 = cow_thiscall_cdecl(g, rd32(edi + 0x20u), ecx, 3, t11, t10, 4u);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(esi + 0xcu, t12);
    if (t12 == 0u)
    {
        ecx = t13;
        edx = t14;
        goto L_102c78a2;
    }
    edx = t14;
    wr32(sp0 + 4u, rd32(sp0 + 4u) >> 0xeu);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 0xeu);
    wr32(esi + 8u, 0u);
    wr32(esi, 4u);
L_102c74f2: ;
    if (rd32(esi + 8u) >= (rd32(esi + 4u) >> 0xau) + 4u) goto L_102c7571;
L_102c7500: ;
    ecx = rd32(sp0 + 8u);
L_102c7525: ;
    if (ecx < 3u) goto L_102c7505;
    t15 = rd32(sp0 + 4u);
    t16 = rd32(COW_IMG(0x10343388u) + rd32(esi + 8u) * 4u);
    t17 = rd32(esi + 0xcu);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 3u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) >> 3u);
    wr32(t16 * 4u + t17, t15 & 7u);
    t18 = rd32(esi + 4u);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    if (rd32(esi + 8u) < (t18 >> 0xau) + 4u)
    {
        edx = t17;
        goto L_102c7500;
    }
    edx = t17;
L_102c7571: ;
    if (rd32(esi + 8u) < 0x13u) goto L_102c755d;
    wr32(sp0 - 0x40u, edi);
    t20 = rd32(esi + 0x24u);
    wr32(sp0 - 0x44u, t20);
    wr32(sp0 - 0x48u, esi + 0x14u);
    wr32(sp0 - 0x4cu, esi + 0x10u);
    t21 = rd32(esi + 0xcu);
    wr32(sp0 - 0x50u, t21);
    wr32(esi + 0x10u, 7u);
    g->eax = esi + 0x10u;
    g->esp = sp0 - 0x34u;
    t22 = cow_call_regs(g, COW_IMG(0x102c9326u), g->eax, esi + 0x14u, edx, 1, 7, t21, esi + 0x10u, esi + 0x14u, t20, edi, loc_3c, loc_38);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x10u, t22);
    if (t22 != 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        loc_10 = t22;
        goto L_102c7820;
    }
    eax = t22;
    wr32(esi + 8u, rd32(esi + 8u) & eax);
    wr32(esi, 5u);
L_102c76cb: ;
    t25 = rd32(esi + 4u);
    if (rd32(esi + 8u) < (t25 & 0x1fu) + (t25 >> 5u & 0x1fu) + 0x102u)
    {
        ecx = rd32(esi + 8u);
        edx = t25 >> 5u & 0x1fu;
        goto L_102c75ad;
    }
    edx = t25 >> 5u & 0x1fu;
    wr32(sp0 - 0x40u, edi);
    t26 = rd32(esi + 0x24u);
    wr32(sp0 - 0x44u, t26);
    t27 = rd32(esi + 4u);
    wr32(esi + 0x14u, 0u);
    wr32(sp0 - 0x18u, 9u);
    wr32(sp0 - 0x48u, sp0 - 0x2cu);
    wr32(sp0 - 0x4cu, sp0 - 0x30u);
    wr32(sp0 - 0x50u, sp0 - 0x14u);
    wr32(sp0 - 0x54u, sp0 - 0x18u);
    t28 = rd32(esi + 0xcu);
    wr32(sp0 - 0x58u, t28);
    wr32(sp0 - 0x14u, 6u);
    t29 = (t27 >> 5u & 0x1fu) + 1u;
    wr32(sp0 - 0x5cu, t29);
    t30 = (t27 & 0x1fu) + 0x101u;
    wr32(sp0 - 0x60u, t30);
    g->eax = t30;
    g->esp = sp0 - 0x34u;
    t31 = cow_call_regs(g, COW_IMG(0x102c972eu), g->eax, t29, edx, 1, 11, t30, t29, t28, sp0 - 0x18u, sp0 - 0x14u, sp0 - 0x30u, sp0 - 0x2cu, t26, edi, loc_3c, loc_38);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x10u, t31);
    if (t31 != 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        loc_10 = t31;
        goto L_102c7886;
    }
    eax = t31;
    ecx = t32;
    edx = t33;
    wr32(sp0 - 0x40u, edi);
    t34 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x44u, t34);
    t35 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x48u, t35);
    wr32(sp0 - 0x4cu, 6u);
    wr32(sp0 - 0x50u, 9u);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t36 = cow_call_regs(g, COW_IMG(0x102c8d8bu), g->eax, ecx, edx, 1, 7, 9u, 6u, t35, t34, edi, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t37 = g->ecx;
    t38 = g->edx;
    if (t36 == 0u)
    {
        ecx = t37;
        edx = t38;
        goto L_102c78a2;
    }
    eax = t36;
    ecx = t37;
    edx = t38;
    t39 = rd32(esi + 0xcu);
    wr32(sp0 - 0x40u, t39);
    wr32(esi + 4u, eax);
    t40 = rd32(edi + 0x28u);
    wr32(sp0 - 0x44u, t40);
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    cow_thiscall_cdecl(g, rd32(edi + 0x24u), ecx, 2, t40, t39);
    t41 = g->edx;
    wr32(esi, 6u);
    ecx = rd32(sp0 - 0x40u);
    edx = t41;
L_102c776e: ;
    t42 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x40u, t42);
    t43 = rd32(sp0 + 4u);
    wr32(esi + 0x20u, t43);
    t44 = rd32(sp0 + 8u);
    wr32(esi + 0x1cu, t44);
    wr32(edi + 4u, loc_8);
    wr32(sp0 - 0x44u, edi);
    t45 = rd32(edi);
    wr32(edi, ebx);
    wr32(sp0 - 0x48u, esi);
    wr32(edi + 8u, ebx + rd32(edi + 8u) - t45);
    wr32(esi + 0x34u, loc_c);
    g->eax = loc_c;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t46 = cow_cdecl(g, COW_IMG(0x102c8dbfu), 4, esi, edi, t42, loc_3c);
    t47 = g->ecx;
    t48 = g->edx;
    if (t46 != 1u)
    {
        eax = t46;
        ecx = t47;
        edx = t48;
        goto L_102c78eb;
    }
    eax = t46;
    ecx = t47;
    edx = t48;
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 0x40u, edi);
    t49 = rd32(esi + 4u);
    wr32(sp0 - 0x44u, t49);
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x102c9315u), g->eax, ecx, edx, 1, 4, t49, edi, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t50 = g->edx;
    t51 = rd32(edi + 4u);
    wr32(sp0 - 8u, t51);
    t52 = rd32(esi + 0x20u);
    t53 = rd32(edi);
    wr32(sp0 + 4u, t52);
    t54 = rd32(esi + 0x1cu);
    t55 = rd32(esi + 0x34u);
    wr32(sp0 + 8u, t54);
    wr32(sp0 - 0xcu, t55);
    if (t55 >= rd32(esi + 0x30u))
    {
        ecx = t55;
        edx = t50;
        ebx = t53;
        loc_8 = t51;
        loc_c = t55;
        eax = rd32(esi + 0x2cu) - loc_c;
    }
    else
    {
        eax = rd32(esi + 0x30u);
        ecx = t55;
        edx = t50;
        ebx = t53;
        loc_8 = t51;
        loc_c = t55;
        eax = eax - ecx - 1u;
    }
    wr32(sp0 - 0x14u, eax);
    if (rd32(esi + 0x18u) != 0u) goto L_102c78a6;
    loc_14 = eax;
    wr32(esi, 0u);
    goto L_102c7223;
L_102c7475: ;
    if (loc_8 == 0u) goto L_102c7826;
    t87 = rd8(ebx);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 8u, loc_8 - 1u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) | t87 << (ecx & 0x1fu));
    wr32(sp0 + 8u, ecx + 8u);
    ecx = ecx + 8u;
    ebx = ebx + 1u;
    loc_8 = loc_8 - 1u;
    goto L_102c7495;
L_102c7505: ;
    if (loc_8 == 0u) goto L_102c7826;
    t19 = rd8(ebx);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 8u, loc_8 - 1u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) | t19 << (ecx & 0x1fu));
    wr32(sp0 + 8u, ecx + 8u);
    ecx = ecx + 8u;
    ebx = ebx + 1u;
    loc_8 = loc_8 - 1u;
    goto L_102c7525;
L_102c755d: ;
    wr32(rd32(esi + 0xcu) + rd32(COW_IMG(0x10343388u) + rd32(esi + 8u) * 4u) * 4u, 0u);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    goto L_102c7571;
L_102c75ad: ;
    eax = rd32(esi + 0x10u);
L_102c75d3: ;
    if (rd32(sp0 + 8u) < eax) goto L_102c75b2;
    t64 = rd8(rd32(esi + 0x14u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 4u)) * 8u + 1u);
    wr32(sp0 - 0x10u, t64);
    t65 = rd32(rd32(esi + 0x14u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 4u)) * 8u + 4u);
    wr32(sp0 - 0x18u, t65);
    if (rd32(rd32(esi + 0x14u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 4u)) * 8u + 4u) >= 0x10u)
    {
        edx = t65;
        loc_10 = t64;
        loc_18 = t65;
        goto L_102c7613;
    }
    ecx = t64;
    edx = t65;
    cf = rd32(rd32(esi + 0x14u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 4u)) * 8u + 4u) < 0x10u;
    pf = PARITY((uint8_t)(rd32(rd32(esi + 0x14u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 4u)) * 8u + 4u) - 0x10u));
    zf = rd32(rd32(esi + 0x14u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 4u)) * 8u + 4u) == 0x10u;
    sf = (int32_t)(rd32(rd32(esi + 0x14u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 4u)) * 8u + 4u) - 0x10u) < 0;
    of = ((rd32(rd32(esi + 0x14u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 4u)) * 8u + 4u) ^ 0x10u) & (rd32(rd32(esi + 0x14u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 4u)) * 8u + 4u) ^ rd32(rd32(esi + 0x14u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 4u)) * 8u + 4u) - 0x10u)) >> 0x1fu;
    wr32(sp0 + 4u, rd32(sp0 + 4u) >> (ecx & 0x1fu));
    t66 = rd32(esi + 0xcu);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - ecx);
    wr32(t66 + rd32(esi + 8u) * 4u, edx);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    goto L_102c76cb;
L_102c75b2: ;
    if (loc_8 == 0u) goto L_102c7826;
    t82 = rd32(sp0 + 8u);
    t83 = rd8(ebx);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 8u, loc_8 - 1u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) | t83 << (t82 & 0x1fu));
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 8u);
    ecx = t82;
    edx = t83 << (t82 & 0x1fu);
    ebx = ebx + 1u;
    loc_8 = loc_8 - 1u;
    goto L_102c75d3;
L_102c7613: ;
    if (edx != 0x12u)
    {
        eax = edx - 0xeu;
    }
    else
    {
        wr32(sp0 - 0x40u, 7u);
        eax = 7u;
    }
    t67 = (edx == 0x12u) * 8u + 3u;
    wr32(sp0 - 0x14u, t67);
    loc_14 = t67;
L_102c7655: ;
    if (rd32(sp0 + 8u) < eax + loc_10)
    {
        ecx = loc_10;
        edx = eax + loc_10;
        goto L_102c7634;
    }
    ecx = loc_10;
    cf = rd32(sp0 + 8u) < eax + loc_10;
    pf = PARITY((uint8_t)(rd32(sp0 + 8u) - (eax + loc_10)));
    zf = rd32(sp0 + 8u) == eax + loc_10;
    sf = (int32_t)(rd32(sp0 + 8u) - (eax + loc_10)) < 0;
    of = ((rd32(sp0 + 8u) ^ eax + loc_10) & (rd32(sp0 + 8u) ^ rd32(sp0 + 8u) - (eax + loc_10))) >> 0x1fu;
    wr32(sp0 + 4u, rd32(sp0 + 4u) >> (ecx & 0x1fu));
    t68 = loc_14 + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 4u));
    wr32(sp0 - 0x14u, t68);
    wr32(sp0 + 4u, rd32(sp0 + 4u) >> (eax & 0x1fu));
    t69 = rd32(esi + 8u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - (eax + loc_10));
    t70 = rd32(esi + 4u);
    if (t68 + t69 > (t70 & 0x1fu) + (t70 >> 5u & 0x1fu) + 0x102u)
    {
        eax = (t70 & 0x1fu) + (t70 >> 5u & 0x1fu) + 0x102u;
        ecx = t69;
        edx = t68 + t69;
        goto L_102c783e;
    }
    eax = (t70 & 0x1fu) + (t70 >> 5u & 0x1fu) + 0x102u;
    ecx = t69;
    edx = t68 + t69;
    loc_14 = t68;
    if (loc_18 != 0x10u) goto L_102c76ba;
    if (ecx < 1u) goto L_102c783e;
    eax = rd32(ecx * 4u + rd32(esi + 0xcu) - 4u);
L_102c76bc: ;
    wr32(ecx * 4u + rd32(esi + 0xcu), eax);
    wr32(sp0 - 0x14u, loc_14 - 1u);
    if (loc_14 != 1u)
    {
        ecx = ecx + 1u;
        loc_14 = loc_14 - 1u;
        goto L_102c76bc;
    }
    ecx = ecx + 1u;
    wr32(esi + 8u, ecx);
    goto L_102c76cb;
L_102c7634: ;
    if (loc_8 == 0u) goto L_102c7826;
    t80 = rd32(sp0 + 8u);
    t81 = rd8(ebx);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 8u, loc_8 - 1u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) | t81 << (t80 & 0x1fu));
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 8u);
    ebx = ebx + 1u;
    loc_8 = loc_8 - 1u;
    goto L_102c7655;
L_102c76ba: ;
    eax = 0u;
    goto L_102c76bc;
L_102c77f5: ;
    wr32(esi, 9u);
    wr32(edi + 0x18u, COW_IMG(0x103c9540u));
L_102c7802: ;
    wr32(sp0 - 0x40u, 0xfffffffdu);
    loc_40 = 0xfffffffdu;
L_102c78fa: ;
    t126 = rd32(sp0 + 4u);
    wr32(esi + 0x20u, t126);
    eax = rd32(sp0 + 8u);
    goto L_102c7903;
L_102c7809: ;
    t96 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x40u, t96);
    loc_40 = t96;
    goto L_102c78fa;
L_102c7811: ;
    wr32(esi, 9u);
    wr32(edi + 0x18u, COW_IMG(0x103c951cu));
    goto L_102c7802;
L_102c7820: ;
    zf = loc_10 + 3u == 0u;
L_102c788a: ;
    if (zf)
    {
        t84 = rd32(esi + 0xcu);
        wr32(sp0 - 0x40u, t84);
        t85 = rd32(edi + 0x28u);
        wr32(sp0 - 0x44u, t85);
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_thiscall_cdecl(g, rd32(edi + 0x24u), ecx, 2, t85, t84);
        t86 = g->edx;
        wr32(esi, 9u);
        ecx = rd32(sp0 - 0x40u);
        edx = t86;
    }
    wr32(sp0 - 0x40u, loc_10);
    loc_40 = loc_10;
    goto L_102c78fa;
L_102c7826: ;
    t123 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x40u, t123);
    t124 = rd32(sp0 + 4u);
    wr32(esi + 0x20u, t124);
    t125 = rd32(sp0 + 8u);
    wr32(esi + 0x1cu, t125);
    wr32(edi + 4u, 0u);
    loc_40 = t123;
    goto L_102c790c;
L_102c783e: ;
    t71 = rd32(esi + 0xcu);
    wr32(sp0 - 0x40u, t71);
    t72 = rd32(edi + 0x28u);
    wr32(sp0 - 0x44u, t72);
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    cow_thiscall_cdecl(g, rd32(edi + 0x24u), ecx, 2, t72, t71);
    t73 = g->ecx;
    t74 = g->edx;
    t75 = rd32(sp0 + 4u);
    wr32(esi, 9u);
    wr32(edi + 0x18u, COW_IMG(0x103c9500u));
    wr32(esi + 0x20u, t75);
    wr32(sp0 - 0x48u, 0xfffffffdu);
    t76 = rd32(sp0 + 8u);
    wr32(esi + 0x1cu, t76);
    t77 = rd32(sp0 - 8u);
    wr32(edi + 4u, t77);
    wr32(sp0 - 0x4cu, edi);
    t78 = rd32(edi);
    wr32(edi, ebx);
    wr32(sp0 - 0x50u, esi);
    wr32(edi + 8u, ebx + rd32(edi + 8u) - t78);
    t79 = rd32(sp0 - 0xcu);
    wr32(esi + 0x34u, t79);
    g->esp = sp0 - 0x40u;
    cow_call_regs(g, COW_IMG(0x102c9860u), g->eax, t73, t74, 1, 4, esi, edi, 0xfffffffdu, rd32(sp0 - 0x44u));
    goto L_102c7925;
L_102c7886: ;
    zf = loc_10 + 3u == 0u;
    goto L_102c788a;
L_102c78a2: ;
    wr32(sp0 - 0x40u, 0xfffffffcu);
    loc_40 = 0xfffffffcu;
    goto L_102c78fa;
L_102c78a6: ;
    wr32(esi, 7u);
L_102c78ac: ;
    t56 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x40u, t56);
    wr32(esi + 0x34u, loc_c);
    wr32(sp0 - 0x44u, edi);
    wr32(sp0 - 0x48u, esi);
    g->eax = loc_c;
    g->esp = sp0 - 0x38u;
    t57 = cow_call_regs(g, COW_IMG(0x102c9860u), g->eax, ecx, edx, 1, 4, esi, edi, t56, loc_3c);
    t58 = g->edx;
    t59 = rd32(esi + 0x34u);
    wr32(sp0 - 0xcu, t59);
    if (rd32(esi + 0x30u) == rd32(esi + 0x34u))
    {
        ecx = t59;
        edx = t58;
        loc_c = t59;
        goto L_102c78ee;
    }
    eax = t57;
    edx = t58;
    loc_c = t59;
    t60 = rd32(sp0 + 4u);
    wr32(esi + 0x20u, t60);
    t61 = rd32(sp0 + 8u);
    wr32(esi + 0x1cu, t61);
    t62 = rd32(sp0 - 8u);
    wr32(edi + 4u, t62);
    t63 = rd32(edi);
    wr32(edi, ebx);
    wr32(edi + 8u, ebx + rd32(edi + 8u) - t63);
    wr32(esi + 0x34u, loc_c);
    ecx = loc_c;
L_102c78eb: ;
    wr32(sp0 - 0x40u, eax);
    loc_40 = eax;
    goto L_102c791b;
L_102c78ee: ;
    wr32(esi, 8u);
L_102c78f4: ;
    wr32(sp0 - 0x40u, 1u);
    loc_40 = 1u;
    goto L_102c78fa;
L_102c78f8: ;
    wr32(sp0 - 0x40u, 0xfffffffeu);
    loc_40 = 0xfffffffeu;
    goto L_102c78fa;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c71e6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c71e6(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
