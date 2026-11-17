/* f_0x103085d2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_103085d2(Guest* g)
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
    uint32_t loc_1c;
    uint32_t loc_30;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x3cu, in_ebx);
    wr32(sp0 - 0x40u, in_esi);
    t1 = rd32(arg2 + 4u);
    wr32(sp0 - 0xcu, t1);
    t2 = rd32(rd32(sp0 + 4u) + 0x20u);
    wr32(sp0 - 8u, t2);
    t3 = rd32(rd32(sp0 + 4u) + 0x1cu);
    t4 = rd32(rd32(sp0 + 4u) + 0x30u);
    t5 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t3);
    wr32(sp0 - 0x44u, in_edi);
    wr32(sp0 - 0x18u, rd32(arg2));
    t6 = rd32(t5 + 0x34u);
    wr32(sp0 - 0x10u, t6);
    if (rd32(t5 + 0x34u) >= t4)
    {
        eax = t6;
        ebx = t5;
        edi = rd32(arg2);
        loc_c = t1;
        loc_8 = t2;
        loc_18 = rd32(arg2);
        loc_10 = t6;
        ecx = rd32(ebx + 0x2cu) - eax;
    }
    else
    {
        eax = t6;
        ecx = t4;
        ebx = t5;
        edi = rd32(arg2);
        loc_c = t1;
        loc_8 = t2;
        loc_18 = rd32(arg2);
        loc_10 = t6;
        ecx = ecx - eax - 1u;
    }
    wr32(sp0 - 0x14u, ecx);
    if (rd32(ebx) <= 9u)
    {
        eax = rd32(ebx);
        edx = in_edx;
        loc_4 = in_ebp;
        loc_3c = in_ebx;
        loc_40 = in_esi;
        loc_44 = in_edi;
        loc_14 = ecx;
        goto L_1030864e;
    }
    edx = in_edx;
    loc_4 = in_ebp;
    loc_3c = in_ebx;
    loc_40 = in_esi;
    loc_44 = in_edi;
L_10308619: ;
    wr32(sp0 - 0x48u, 0xfffffffeu);
    loc_48 = 0xfffffffeu;
L_1030861b: ;
    wr32(ebx + 0x20u, loc_8);
    eax = rd32(sp0 + 4u);
L_10308624: ;
    wr32(ebx + 0x1cu, eax);
    wr32(arg2 + 4u, loc_c);
L_1030862d: ;
    wr32(arg2 + 8u, edi + rd32(arg2 + 8u) - rd32(arg2));
    eax = loc_10;
L_10308637: ;
    wr32(arg2, edi);
    wr32(ebx + 0x34u, eax);
L_1030863c: ;
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall_cdecl(g, COW_IMG(0x1030bf60u), ecx, 4, ebx, arg2, loc_48, loc_44);
    t125 = g->edx;
    edx = t125;
L_10308646: ;
    g->ebx = rd32(sp0 - 0x3cu);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_1030864b: ;
    ecx = loc_14;
L_1030864e: ;
    t7 = rd32(COW_IMG(0x10308d45u) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x10308679u: goto L_10308679;
    case 0x10308743u: goto L_10308743;
    case 0x103087a4u: goto L_103087a4;
    case 0x10308894u: goto L_10308894;
    case 0x10308963u: goto L_10308963;
    case 0x10308ae1u: goto L_10308ae1;
    case 0x10308b82u: goto L_10308b82;
    case 0x10308c2au: goto L_10308c2a;
    case 0x10308cf3u: goto L_10308cf3;
    case 0x10308d3eu: goto L_10308d3e;
    default: rt_fatal(g, COW_IMG(0x1030864eu), "switch");
    }
    return;
L_10308655: ;
    if (loc_c == 0u) goto L_10308c72;
    t120 = rd8(edi);
    t121 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 0xcu, loc_c - 1u);
    t122 = loc_8 | t120 << (t121 & 0x1fu);
    wr32(sp0 - 8u, t122);
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 8u);
    wr32(sp0 - 0x18u, edi + 1u);
    ecx = t121;
    loc_c = loc_c - 1u;
    loc_8 = t122;
    loc_18 = edi + 1u;
    edi = edi + 1u;
L_10308679: ;
    if (rd32(sp0 + 4u) < 3u) goto L_10308655;
    wr32(ebx + 0x18u, loc_8 & 1u);
    if ((loc_8 & 7u) >> 1u == 0u) goto L_10308724;
    eax = (loc_8 & 7u) >> 1u;
    ecx = loc_8 & 1u;
    if (eax == 1u) goto L_103086db;
    eax = eax - 1u;
    if (eax == 1u) goto L_103086ca;
    eax = eax - 1u;
    if (eax != 1u)
    {
        edx = 1u;
        goto L_10308c07;
    }
    wr32(ebx, 9u);
    wr32(arg2 + 0x18u, COW_IMG(0x1034960cu));
    wr32(ebx + 0x20u, loc_8 >> 3u);
    wr32(sp0 - 0x48u, 0xfffffffdu);
    eax = rd32(sp0 + 4u) - 3u;
    edx = 1u;
    loc_48 = 0xfffffffdu;
    goto L_10308624;
L_103086ca: ;
    wr32(sp0 - 8u, loc_8 >> 3u);
    wr32(sp0 - 0x48u, 3u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 3u);
    eax = 3u;
    edx = 1u;
    loc_8 = loc_8 >> 3u;
L_103086d4: ;
    wr32(ebx, eax);
L_10308c07: ;
    if (rd32(ebx) <= 9u)
    {
        eax = rd32(ebx);
        edi = loc_18;
        goto L_1030864b;
    }
    edi = loc_18;
    goto L_10308619;
L_103086db: ;
    wr32(sp0 - 0x48u, arg2);
    wr32(sp0 - 0x4cu, sp0 - 0x20u);
    wr32(sp0 - 0x50u, sp0 - 0x24u);
    wr32(sp0 - 0x54u, sp0 - 0x28u);
    wr32(sp0 - 0x58u, sp0 - 0x2cu);
    g->eax = sp0 - 0x2cu;
    g->ecx = ecx;
    g->edx = 1u;
    g->esp = sp0 - 0x48u;
    t107 = cow_cdecl(g, COW_IMG(0x1030bf31u), 4, sp0 - 0x2cu, sp0 - 0x28u, sp0 - 0x24u, sp0 - 0x20u);
    t108 = g->ecx;
    t109 = g->edx;
    wr32(sp0 - 0x5cu, arg2);
    t110 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x60u, t110);
    t111 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x64u, t111);
    t112 = rd32(sp0 - 0x28u);
    wr32(sp0 - 0x68u, t112);
    t113 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x6cu, t113);
    g->esp = sp0 - 0x50u;
    t114 = cow_call_regs(g, COW_IMG(0x1030b481u), g->eax, t108, t109, 1, 7, t113, t112, t111, t110, arg2, sp0 - 0x2cu, sp0 - 0x28u);
    t115 = g->ecx;
    t116 = g->edx;
    wr32(ebx + 4u, t114);
    if (t114 == 0u)
    {
        ecx = t115;
        edx = t116;
        goto L_10308ce6;
    }
    ecx = t115;
    edx = t116;
    t117 = rd32(sp0 - 8u) >> 3u;
    wr32(sp0 - 8u, t117);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 3u);
    wr32(ebx, 6u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = t117;
    loc_18 = rd32(sp0 - 0x18u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_10308c07;
L_10308724: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 3u);
    t118 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t118 - (t118 & 7u));
    wr32(ebx, 1u);
    t119 = loc_8 >> 3u >> (t118 & 7u);
    wr32(sp0 - 8u, t119);
    ecx = t118 & 7u;
    edx = 1u;
    loc_8 = t119;
    goto L_10308c07;
L_10308743: ;
    ecx = rd32(sp0 + 4u);
L_1030876b: ;
    if (ecx < 0x20u) goto L_10308748;
    if (~loc_8 >> 0x10u != (uint16_t)loc_8)
    {
        ecx = ~loc_8 >> 0x10u;
        goto L_10308c1d;
    }
    eax = (uint16_t)loc_8;
    ecx = ~loc_8 >> 0x10u;
    wr32(ebx + 4u, eax);
    t104 = rd32(ebx + 4u);
    wr32(sp0 + 4u, 0u);
    wr32(sp0 - 8u, 0u);
    if (t104 == 0u)
    {
        loc_8 = 0u;
        goto L_10308885;
    }
    wr32(sp0 - 0x48u, 2u);
    eax = 2u;
    loc_8 = 0u;
    goto L_103086d4;
L_10308748: ;
    if (loc_c == 0u) goto L_10308c72;
    t105 = rd8(edi);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 0xcu, loc_c - 1u);
    t106 = loc_8 | t105 << (ecx & 0x1fu);
    wr32(sp0 - 8u, t106);
    wr32(sp0 - 0x18u, edi + 1u);
    wr32(sp0 + 4u, ecx + 8u);
    ecx = ecx + 8u;
    loc_c = loc_c - 1u;
    loc_8 = t106;
    loc_18 = edi + 1u;
    edi = edi + 1u;
    goto L_1030876b;
L_103087a4: ;
    if (loc_c == 0u) goto L_10308c72;
    if (ecx != 0u) goto L_10308845;
    if (loc_10 != rd32(ebx + 0x2cu))
    {
        ecx = rd32(ebx + 0x2cu);
        goto L_103087dd;
    }
    ecx = rd32(ebx + 0x2cu);
    if (rd32(ebx + 0x28u) == rd32(ebx + 0x30u))
    {
        edx = rd32(ebx + 0x28u);
        goto L_103087dd;
    }
    eax = rd32(ebx + 0x30u);
    edx = rd32(ebx + 0x28u);
    cf = rd32(ebx + 0x28u) < rd32(ebx + 0x30u);
    wr32(sp0 - 0x10u, edx);
    if (!cf)
    {
        loc_10 = edx;
        ecx = ecx - edx;
    }
    else
    {
        loc_10 = edx;
        t91 = eax - edx - 1u;
        ecx = t91;
    }
    wr32(sp0 - 0x14u, ecx);
    if (ecx != 0u)
    {
        loc_14 = ecx;
        goto L_10308845;
    }
L_103087dd: ;
    t92 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x48u, t92);
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, ebx);
    wr32(ebx + 0x34u, loc_10);
    g->eax = loc_10;
    g->esp = sp0 - 0x40u;
    t93 = cow_thiscall_cdecl(g, COW_IMG(0x1030bf60u), ecx, 4, ebx, arg2, t92, loc_44);
    t94 = rd32(ebx + 0x30u);
    wr32(sp0 + 0xcu, t93);
    t95 = rd32(ebx + 0x34u);
    wr32(sp0 - 0x10u, t95);
    wr32(sp0 - 0x1cu, t94);
    if (rd32(ebx + 0x34u) >= t94)
    {
        eax = t95;
        loc_10 = t95;
        loc_1c = t94;
        ecx = rd32(ebx + 0x2cu) - eax;
    }
    else
    {
        eax = t95;
        ecx = t94;
        loc_10 = t95;
        loc_1c = t94;
        ecx = ecx - eax - 1u;
    }
    wr32(sp0 - 0x14u, ecx);
    t96 = rd32(ebx + 0x2cu);
    wr32(sp0 - 0x30u, t96);
    if (eax != rd32(ebx + 0x2cu))
    {
        edx = t96;
        loc_14 = ecx;
    }
    else
    {
        loc_14 = ecx;
        loc_30 = t96;
        if (rd32(ebx + 0x28u) == loc_1c)
        {
            edx = loc_1c;
            eax = loc_10;
        }
        else
        {
            eax = rd32(ebx + 0x28u);
            edx = loc_1c;
            cf = rd32(ebx + 0x28u) < loc_1c;
            wr32(sp0 - 0x10u, eax);
            if (!cf)
            {
                loc_10 = eax;
                ecx = loc_30 - eax;
            }
            else
            {
                loc_10 = eax;
                t97 = edx - eax - 1u;
                ecx = t97;
                edx = t97;
            }
            wr32(sp0 - 0x14u, ecx);
            loc_14 = ecx;
        }
    }
    if (ecx == 0u) goto L_10308c31;
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_18 = rd32(sp0 - 0x18u);
L_10308845: ;
    t103 = rd32(ebx + 4u);
    wr32(sp0 + 0xcu, 0u);
    if (t103 <= loc_c)
    {
        eax = t103;
    }
    else
    {
        eax = loc_c;
    }
    if (eax > ecx)
    {
        eax = ecx;
    }
    wr32(sp0 - 0x18u, eax + loc_18);
    wr32(sp0 - 0xcu, loc_c - eax);
    wr32(sp0 - 0x10u, eax + loc_10);
    wr32(sp0 - 0x14u, loc_14 - eax);
    esi = loc_18;
    edi = loc_10;
    ecx = eax >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = eax & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(ebx + 4u, rd32(ebx + 4u) - eax);
    if (rd32(ebx + 4u) != eax)
    {
        edx = eax;
        loc_c = loc_c - eax;
        loc_18 = eax + loc_18;
        loc_10 = eax + loc_10;
        loc_14 = loc_14 - eax;
        goto L_10308c07;
    }
    edx = eax;
    loc_c = loc_c - eax;
    loc_18 = eax + loc_18;
    loc_10 = eax + loc_10;
    loc_14 = loc_14 - eax;
L_10308885: ;
    eax = -(rd32(ebx + 0x18u) != 0u) & 7u;
    goto L_103086d4;
L_10308894: ;
    ecx = rd32(sp0 + 4u);
L_103088b9: ;
    if (ecx < 0xeu) goto L_10308899;
    wr32(ebx + 4u, loc_8 & 0x3fffu);
    if ((loc_8 & 0x1fu) > 0x1du)
    {
        ecx = loc_8 & 0x1fu;
        goto L_10308c52;
    }
    eax = loc_8 & 0x3fffu;
    ecx = loc_8 & 0x1fu;
    if ((eax >> 5u & 0x1fu) > 0x1du) goto L_10308c52;
    eax = eax >> 5u & 0x1fu;
    wr32(sp0 - 0x48u, 4u);
    t8 = eax + ecx + 0x102u;
    wr32(sp0 - 0x4cu, t8);
    t9 = rd32(arg2 + 0x28u);
    wr32(sp0 - 0x50u, t9);
    g->eax = t8;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t10 = cow_thiscall_cdecl(g, rd32(arg2 + 0x20u), ecx, 3, t9, t8, 4u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(ebx + 0xcu, t10);
    if (t10 == 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_10308ce6;
    }
    edx = t12;
    t13 = rd32(sp0 - 8u) >> 0xeu;
    wr32(sp0 - 8u, t13);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 0xeu);
    wr32(ebx + 8u, 0u);
    wr32(ebx, 4u);
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = t13;
    loc_44 = rd32(sp0 - 0x44u);
    loc_10 = rd32(sp0 - 0x10u);
L_10308963: ;
    if (rd32(ebx + 8u) < (rd32(ebx + 4u) >> 0xau) + 4u) goto L_10308918;
L_10308987: ;
    if (rd32(ebx + 8u) < 0x13u) goto L_10308973;
    wr32(sp0 - 0x48u, arg2);
    t14 = rd32(ebx + 0x24u);
    wr32(sp0 - 0x4cu, t14);
    wr32(sp0 - 0x50u, ebx + 0x14u);
    wr32(sp0 - 0x54u, ebx + 0x10u);
    t15 = rd32(ebx + 0xcu);
    wr32(sp0 - 0x58u, t15);
    wr32(ebx + 0x10u, 7u);
    g->eax = ebx + 0x10u;
    g->esp = sp0 - 0x3cu;
    t16 = cow_call_regs(g, COW_IMG(0x1030bdafu), g->eax, ebx + 0x14u, edx, 1, 7, t15, ebx + 0x10u, ebx + 0x14u, t14, arg2, loc_44, loc_40);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x14u, t16);
    if (t16 != 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        loc_14 = t16;
        goto L_10308c61;
    }
    eax = t16;
    edx = t18;
    wr32(ebx + 8u, rd32(ebx + 8u) & eax);
    wr32(ebx, 5u);
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_10 = rd32(sp0 - 0x10u);
L_10308ae1: ;
    t19 = rd32(ebx + 4u);
    if (rd32(ebx + 8u) < (t19 & 0x1fu) + (t19 >> 5u & 0x1fu) + 0x102u)
    {
        ecx = t19 >> 5u & 0x1fu;
        goto L_103089c3;
    }
    t20 = rd32(ebx + 4u);
    wr32(ebx + 0x14u, 0u);
    wr32(sp0 - 0x48u, arg2);
    t21 = rd32(ebx + 0x24u);
    wr32(sp0 - 0x4cu, t21);
    wr32(sp0 - 0x50u, sp0 - 0x34u);
    wr32(sp0 - 0x54u, sp0 - 0x38u);
    wr32(sp0 - 0x58u, sp0 - 0x18u);
    wr32(sp0 - 0x5cu, sp0 - 0x1cu);
    t22 = rd32(ebx + 0xcu);
    wr32(sp0 - 0x60u, t22);
    t23 = (t20 >> 5u & 0x1fu) + 1u;
    wr32(sp0 - 0x64u, t23);
    t24 = (t20 & 0x1fu) + 0x101u;
    wr32(sp0 - 0x68u, t24);
    wr32(sp0 - 0x1cu, 9u);
    wr32(sp0 - 0x18u, 6u);
    g->eax = t24;
    g->esp = sp0 - 0x3cu;
    t25 = cow_call_regs(g, COW_IMG(0x1030be2eu), g->eax, t23, edx, 1, 11, t24, t23, t22, sp0 - 0x1cu, sp0 - 0x18u, sp0 - 0x38u, sp0 - 0x34u, t21, arg2, loc_44, loc_40);
    t26 = g->ecx;
    t27 = g->edx;
    t28 = rd32(ebx + 0xcu);
    wr32(sp0 - 0x6cu, t28);
    wr32(sp0 - 0x14u, t25);
    t29 = rd32(arg2 + 0x28u);
    wr32(sp0 - 0x70u, t29);
    g->edx = t27;
    g->esp = sp0 - 0x68u;
    t30 = cow_thiscall_cdecl(g, rd32(arg2 + 0x24u), t26, 2, t29, t28);
    t31 = g->ecx;
    t32 = g->edx;
    if (rd32(sp0 - 0x14u) != 0u)
    {
        ecx = t31;
        edx = t32;
        goto L_10308cd2;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
    wr32(sp0 - 0x48u, arg2);
    t33 = rd32(sp0 - 0x34u);
    wr32(sp0 - 0x4cu, t33);
    t34 = rd32(sp0 - 0x38u);
    wr32(sp0 - 0x50u, t34);
    wr32(sp0 - 0x54u, 6u);
    wr32(sp0 - 0x58u, 9u);
    g->eax = eax;
    g->esp = sp0 - 0x3cu;
    t35 = cow_call_regs(g, COW_IMG(0x1030b481u), g->eax, ecx, edx, 1, 7, 9u, 6u, t34, t33, arg2, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t36 = g->ecx;
    t37 = g->edx;
    if (t35 == 0u)
    {
        ecx = t36;
        edx = t37;
        goto L_10308ce6;
    }
    eax = t35;
    ecx = t36;
    edx = t37;
    wr32(ebx + 4u, eax);
    wr32(ebx, 6u);
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_10 = rd32(sp0 - 0x10u);
L_10308b82: ;
    t38 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x48u, t38);
    wr32(ebx + 0x20u, loc_8);
    t39 = rd32(sp0 + 4u);
    wr32(ebx + 0x1cu, t39);
    wr32(arg2 + 4u, loc_c);
    wr32(sp0 - 0x4cu, arg2);
    wr32(arg2 + 8u, edi + rd32(arg2 + 8u) - rd32(arg2));
    wr32(arg2, edi);
    wr32(sp0 - 0x50u, ebx);
    wr32(ebx + 0x34u, loc_10);
    g->eax = loc_10;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t40 = cow_cdecl(g, COW_IMG(0x1030b4b5u), 4, ebx, arg2, t38, loc_44);
    t41 = g->ecx;
    t42 = g->edx;
    if (t40 != 1u)
    {
        eax = t40;
        ecx = t41;
        edx = t42;
        goto L_10308d32;
    }
    eax = t40;
    ecx = t41;
    edx = t42;
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 0x48u, arg2);
    t43 = rd32(ebx + 4u);
    wr32(sp0 - 0x4cu, t43);
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x1030ba19u), g->eax, ecx, edx, 1, 4, t43, arg2, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t44 = g->edx;
    t45 = rd32(arg2 + 4u);
    wr32(sp0 - 0xcu, t45);
    t46 = rd32(ebx + 0x20u);
    wr32(sp0 - 8u, t46);
    t47 = rd32(ebx + 0x1cu);
    t48 = rd32(ebx + 0x34u);
    t49 = rd32(arg2);
    wr32(sp0 + 4u, t47);
    wr32(sp0 - 0x18u, t49);
    wr32(sp0 - 0x10u, t48);
    if (t48 >= rd32(ebx + 0x30u))
    {
        ecx = t48;
        edx = t44;
        edi = t49;
        loc_c = t45;
        loc_8 = t46;
        loc_18 = t49;
        loc_10 = t48;
        eax = rd32(ebx + 0x2cu) - loc_10;
    }
    else
    {
        eax = rd32(ebx + 0x30u);
        ecx = t48;
        edx = t44;
        edi = t49;
        loc_c = t45;
        loc_8 = t46;
        loc_18 = t49;
        loc_10 = t48;
        eax = eax - ecx - 1u;
    }
    wr32(sp0 - 0x14u, eax);
    if (rd32(ebx + 0x18u) != 0u) goto L_10308ced;
    loc_14 = eax;
    wr32(ebx, 0u);
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_10308c07;
L_10308899: ;
    if (loc_c == 0u) goto L_10308c72;
    t89 = rd8(edi);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 0xcu, loc_c - 1u);
    t90 = loc_8 | t89 << (ecx & 0x1fu);
    wr32(sp0 - 8u, t90);
    wr32(sp0 + 4u, ecx + 8u);
    ecx = ecx + 8u;
    edi = edi + 1u;
    loc_c = loc_c - 1u;
    loc_8 = t90;
    goto L_103088b9;
L_10308918: ;
    ecx = rd32(sp0 + 4u);
L_1030893d: ;
    if (ecx < 3u) goto L_1030891d;
    wr32(sp0 - 8u, loc_8 >> 3u);
    t86 = rd32(ebx + 0xcu);
    wr32(t86 + rd32(COW_IMG(0x10349560u) + rd32(ebx + 8u) * 4u) * 4u, loc_8 & 7u);
    wr32(ebx + 8u, rd32(ebx + 8u) + 1u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 3u);
    edx = t86;
    loc_8 = loc_8 >> 3u;
    goto L_10308963;
L_1030891d: ;
    if (loc_c == 0u) goto L_10308c72;
    t87 = rd8(edi);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 0xcu, loc_c - 1u);
    t88 = loc_8 | t87 << (ecx & 0x1fu);
    wr32(sp0 - 8u, t88);
    wr32(sp0 + 4u, ecx + 8u);
    ecx = ecx + 8u;
    edi = edi + 1u;
    loc_c = loc_c - 1u;
    loc_8 = t88;
    goto L_1030893d;
L_10308973: ;
    wr32(rd32(ebx + 0xcu) + rd32(COW_IMG(0x10349560u) + rd32(ebx + 8u) * 4u) * 4u, 0u);
    wr32(ebx + 8u, rd32(ebx + 8u) + 1u);
    goto L_10308987;
L_103089c3: ;
    eax = rd32(ebx + 0x10u);
L_103089e9: ;
    if (rd32(sp0 + 4u) < eax) goto L_103089c8;
    t58 = rd8(rd32(ebx + 0x14u) + (rd32(COW_IMG(0x103cff60u) + eax * 4u) & loc_8) * 8u + 1u);
    wr32(sp0 - 0x14u, t58);
    t59 = rd32(rd32(ebx + 0x14u) + (rd32(COW_IMG(0x103cff60u) + eax * 4u) & loc_8) * 8u + 4u);
    wr32(sp0 - 0x30u, t59);
    if (rd32(rd32(ebx + 0x14u) + (rd32(COW_IMG(0x103cff60u) + eax * 4u) & loc_8) * 8u + 4u) >= 0x10u)
    {
        edx = t59;
        loc_14 = t58;
        loc_30 = t59;
        goto L_10308a29;
    }
    ecx = t58;
    edx = t59;
    cf = rd32(rd32(ebx + 0x14u) + (rd32(COW_IMG(0x103cff60u) + eax * 4u) & loc_8) * 8u + 4u) < 0x10u;
    pf = PARITY((uint8_t)(rd32(rd32(ebx + 0x14u) + (rd32(COW_IMG(0x103cff60u) + eax * 4u) & loc_8) * 8u + 4u) - 0x10u));
    zf = rd32(rd32(ebx + 0x14u) + (rd32(COW_IMG(0x103cff60u) + eax * 4u) & loc_8) * 8u + 4u) == 0x10u;
    sf = (int32_t)(rd32(rd32(ebx + 0x14u) + (rd32(COW_IMG(0x103cff60u) + eax * 4u) & loc_8) * 8u + 4u) - 0x10u) < 0;
    of = ((rd32(rd32(ebx + 0x14u) + (rd32(COW_IMG(0x103cff60u) + eax * 4u) & loc_8) * 8u + 4u) ^ 0x10u) & (rd32(rd32(ebx + 0x14u) + (rd32(COW_IMG(0x103cff60u) + eax * 4u) & loc_8) * 8u + 4u) ^ rd32(rd32(ebx + 0x14u) + (rd32(COW_IMG(0x103cff60u) + eax * 4u) & loc_8) * 8u + 4u) - 0x10u)) >> 0x1fu;
    t60 = loc_8 >> (ecx & 0x1fu);
    wr32(sp0 - 8u, t60);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - ecx);
    wr32(rd32(ebx + 0xcu) + rd32(ebx + 8u) * 4u, edx);
    wr32(ebx + 8u, rd32(ebx + 8u) + 1u);
    loc_8 = t60;
    goto L_10308ae1;
L_103089c8: ;
    if (loc_c == 0u) goto L_10308c72;
    t79 = rd32(sp0 + 4u);
    t80 = rd8(edi);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 0xcu, loc_c - 1u);
    t81 = loc_8 | t80 << (t79 & 0x1fu);
    wr32(sp0 - 8u, t81);
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 8u);
    ecx = t79;
    edx = t80 << (t79 & 0x1fu);
    edi = edi + 1u;
    loc_c = loc_c - 1u;
    loc_8 = t81;
    goto L_103089e9;
L_10308a29: ;
    if (edx != 0x12u)
    {
        eax = edx - 0xeu;
    }
    else
    {
        wr32(sp0 - 0x48u, 7u);
        eax = 7u;
    }
    t61 = (edx == 0x12u) * 8u + 3u;
    wr32(sp0 - 0x18u, t61);
    loc_18 = t61;
L_10308a6b: ;
    if (rd32(sp0 + 4u) < eax + loc_14)
    {
        ecx = loc_14;
        edx = eax + loc_14;
        goto L_10308a4a;
    }
    ecx = loc_14;
    cf = rd32(sp0 + 4u) < eax + loc_14;
    pf = PARITY((uint8_t)(rd32(sp0 + 4u) - (eax + loc_14)));
    zf = rd32(sp0 + 4u) == eax + loc_14;
    sf = (int32_t)(rd32(sp0 + 4u) - (eax + loc_14)) < 0;
    of = ((rd32(sp0 + 4u) ^ eax + loc_14) & (rd32(sp0 + 4u) ^ rd32(sp0 + 4u) - (eax + loc_14))) >> 0x1fu;
    t62 = loc_8 >> (ecx & 0x1fu);
    wr32(sp0 - 8u, t62);
    t63 = loc_18 + (rd32(COW_IMG(0x103cff60u) + eax * 4u) & t62);
    wr32(sp0 - 0x18u, t63);
    t64 = t62 >> (eax & 0x1fu);
    wr32(sp0 - 8u, t64);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - (eax + loc_14));
    t65 = rd32(ebx + 4u);
    if (t63 + rd32(ebx + 8u) > (t65 & 0x1fu) + (t65 >> 5u & 0x1fu) + 0x102u)
    {
        eax = (t65 & 0x1fu) + (t65 >> 5u & 0x1fu) + 0x102u;
        ecx = rd32(ebx + 8u);
        edx = t63 + rd32(ebx + 8u);
        loc_8 = t64;
        goto L_10308c8a;
    }
    eax = (t65 & 0x1fu) + (t65 >> 5u & 0x1fu) + 0x102u;
    ecx = rd32(ebx + 8u);
    edx = t63 + rd32(ebx + 8u);
    loc_8 = t64;
    loc_18 = t63;
    if (loc_30 != 0x10u) goto L_10308ad0;
    if (ecx < 1u) goto L_10308c8a;
    eax = rd32(ecx * 4u + rd32(ebx + 0xcu) - 4u);
L_10308ad2: ;
    t66 = rd32(ebx + 0xcu);
    wr32(ecx * 4u + t66, eax);
    wr32(sp0 - 0x18u, loc_18 - 1u);
    if (loc_18 != 1u)
    {
        ecx = ecx + 1u;
        loc_18 = loc_18 - 1u;
        goto L_10308ad2;
    }
    ecx = ecx + 1u;
    edx = t66;
    wr32(ebx + 8u, ecx);
    goto L_10308ae1;
L_10308a4a: ;
    if (loc_c == 0u) goto L_10308c72;
    t76 = rd32(sp0 + 4u);
    t77 = rd8(edi);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 - 0xcu, loc_c - 1u);
    t78 = loc_8 | t77 << (t76 & 0x1fu);
    wr32(sp0 - 8u, t78);
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 8u);
    edi = edi + 1u;
    loc_c = loc_c - 1u;
    loc_8 = t78;
    goto L_10308a6b;
L_10308ad0: ;
    eax = 0u;
    goto L_10308ad2;
L_10308c1d: ;
    wr32(ebx, 9u);
    wr32(arg2 + 0x18u, COW_IMG(0x103495ecu));
L_10308c2a: ;
    wr32(sp0 - 0x48u, 0xfffffffdu);
    loc_48 = 0xfffffffdu;
    goto L_1030861b;
L_10308c31: ;
    t98 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x48u, t98);
    t99 = rd32(sp0 - 8u);
    wr32(ebx + 0x20u, t99);
    t100 = rd32(sp0 + 4u);
    wr32(ebx + 0x1cu, t100);
    t101 = rd32(sp0 - 0xcu);
    wr32(arg2 + 4u, t101);
    t102 = rd32(arg2);
    wr32(arg2 + 8u, edi + rd32(arg2 + 8u) - t102);
    ecx = edi - t102;
    loc_48 = t98;
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_10308637;
L_10308c52: ;
    wr32(ebx, 9u);
    wr32(arg2 + 0x18u, COW_IMG(0x103495c8u));
    goto L_10308c2a;
L_10308c61: ;
    t82 = rd32(ebx + 0xcu);
    wr32(sp0 - 0x48u, t82);
    t83 = rd32(arg2 + 0x28u);
    wr32(sp0 - 0x4cu, t83);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    cow_thiscall_cdecl(g, rd32(arg2 + 0x24u), ecx, 2, t83, t82);
    t84 = g->edx;
    ecx = rd32(sp0 - 0x48u);
    edx = t84;
    zf = rd32(sp0 - 0x14u) + 3u == 0u;
L_10308cd6: ;
    if (zf)
    {
        wr32(ebx, 9u);
    }
    t85 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x48u, t85);
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_48 = t85;
    goto L_1030861b;
L_10308c72: ;
    t123 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x48u, t123);
    wr32(ebx + 0x20u, loc_8);
    t124 = rd32(sp0 + 4u);
    wr32(ebx + 0x1cu, t124);
    wr32(arg2 + 4u, 0u);
    loc_48 = t123;
    goto L_1030862d;
L_10308c8a: ;
    t67 = rd32(ebx + 0xcu);
    wr32(sp0 - 0x48u, t67);
    t68 = rd32(arg2 + 0x28u);
    wr32(sp0 - 0x4cu, t68);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    cow_thiscall_cdecl(g, rd32(arg2 + 0x24u), ecx, 2, t68, t67);
    t69 = g->ecx;
    t70 = g->edx;
    t71 = rd32(sp0 - 8u);
    wr32(ebx, 9u);
    wr32(arg2 + 0x18u, COW_IMG(0x103495acu));
    wr32(ebx + 0x20u, t71);
    t72 = rd32(sp0 + 4u);
    wr32(ebx + 0x1cu, t72);
    t73 = rd32(sp0 - 0xcu);
    wr32(arg2 + 4u, t73);
    wr32(sp0 - 0x50u, 0xfffffffdu);
    wr32(arg2 + 8u, edi + rd32(arg2 + 8u) - rd32(arg2));
    wr32(sp0 - 0x54u, arg2);
    t74 = rd32(sp0 - 0x10u);
    wr32(arg2, edi);
    wr32(sp0 - 0x58u, ebx);
    wr32(ebx + 0x34u, t74);
    g->edx = t70;
    g->esp = sp0 - 0x48u;
    cow_thiscall_cdecl(g, COW_IMG(0x1030bf60u), t69, 4, ebx, arg2, 0xfffffffdu, rd32(sp0 - 0x4cu));
    t75 = g->edx;
    edx = t75;
    goto L_10308646;
L_10308cd2: ;
    zf = rd32(sp0 - 0x14u) + 3u == 0u;
    goto L_10308cd6;
L_10308ce6: ;
    wr32(sp0 - 0x48u, 0xfffffffcu);
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_48 = 0xfffffffcu;
    goto L_1030861b;
L_10308ced: ;
    wr32(ebx, 7u);
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
L_10308cf3: ;
    t50 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x48u, t50);
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, ebx);
    wr32(ebx + 0x34u, loc_10);
    g->eax = loc_10;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t51 = cow_thiscall_cdecl(g, COW_IMG(0x1030bf60u), ecx, 4, ebx, arg2, t50, loc_44);
    t52 = g->edx;
    t53 = rd32(ebx + 0x34u);
    wr32(sp0 - 0x10u, t53);
    if (rd32(ebx + 0x30u) == rd32(ebx + 0x34u))
    {
        ecx = t53;
        edx = t52;
        loc_10 = t53;
        goto L_10308d38;
    }
    eax = t51;
    edx = t52;
    loc_10 = t53;
    t54 = rd32(sp0 - 8u);
    wr32(ebx + 0x20u, t54);
    t55 = rd32(sp0 + 4u);
    wr32(ebx + 0x1cu, t55);
    t56 = rd32(sp0 - 0xcu);
    wr32(arg2 + 4u, t56);
    t57 = rd32(arg2);
    wr32(arg2, edi);
    wr32(arg2 + 8u, edi + rd32(arg2 + 8u) - t57);
    wr32(ebx + 0x34u, loc_10);
    ecx = loc_10;
L_10308d32: ;
    wr32(sp0 - 0x48u, eax);
    loc_48 = eax;
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1030863c;
L_10308d38: ;
    wr32(ebx, 8u);
    loc_4 = rd32(sp0 - 4u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_44 = rd32(sp0 - 0x44u);
L_10308d3e: ;
    wr32(sp0 - 0x48u, 1u);
    loc_48 = 1u;
    goto L_1030861b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103085d2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103085d2(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
