/* f_0x10159ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10159ff0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        ecx = self;
        goto L_1015a01b;
    }
    if (rd32(arg1 + 0x14b8u) == 0u)
    {
        ecx = self;
        goto L_1015a01b;
    }
    eax = rd32(arg1 + 0x14b8u);
    g->eax = rd32(eax);
    g->ecx = self;
    g->edx = in_edx;
    t1 = rd32(eax);
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x10159fb0u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t4;
        goto L_1015a622;
    }
    ecx = t3;
L_1015a01b: ;
    ecx = (ecx & 0xffff0000u) | rd16(COW_IMG(0x10621814u));
L_1015a022: ;
    if ((int16_t)((uint16_t)ecx + 1u) < 200)
    {
        ecx = (ecx & 0xffff0000u) | (uint16_t)((uint16_t)ecx + 1u);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | (uint16_t)((uint16_t)ecx + 1u);
        ecx = ecx & 0xffff0000u;
    }
    if (rd8(COW_IMG(0x1060161bu) + (uint32_t)(int16_t)ecx * 0x294u) != 0u) goto L_1015a022;
    wr16(COW_IMG(0x10621814u), (uint16_t)ecx);
    t5 = COW_IMG(0x10601468u) + (uint32_t)(int16_t)ecx * 0x294u;
    edi = t5;
    eax = 0u;
    ecx = 0xa5u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t6 = rd32(rd32(arg1 + 0x14b8u));
    t7 = rd32(arg1 + 0x14b8u);
    wr32(t5, t6);
    if (rd32(arg1 + 0x14b4u) == 0u)
    {
        ecx = t7;
        edx = t6;
        ebx = t5;
    }
    else
    {
        eax = rd32(arg1 + 0x14b4u);
        ecx = t7;
        edx = t6;
        ebx = t5;
        wr16(ebx + 4u, rd16(eax));
    }
    if (rd32(arg1 + 0x14bcu) != 0u)
    {
        eax = rd32(arg1 + 0x14bcu);
        t8 = rd32(eax);
        wr32(ebx + 8u, t8);
        ecx = t8;
    }
    if (rd32(arg1 + 0x14c0u) != 0u)
    {
        eax = rd32(arg1 + 0x14c0u);
        t9 = rd16(eax);
        wr16(ebx + 0xcu, (uint16_t)t9);
        edx = (edx & 0xffff0000u) | t9;
    }
    if (rd32(arg1 + 0x14c4u) != 0u)
    {
        eax = rd32(arg1 + 0x14c4u);
        wr16(ebx + 0xeu, rd16(eax));
    }
    if (rd32(arg1 + 0x14d0u) != 0u)
    {
        eax = rd32(arg1 + 0x14d0u);
        t10 = rd16(eax);
        wr16(ebx + 0x12u, (uint16_t)t10);
        ecx = (ecx & 0xffff0000u) | t10;
    }
    if (rd32(arg1 + 0x14d4u) != 0u)
    {
        eax = rd32(arg1 + 0x14d4u);
        t11 = rd16(eax);
        wr16(ebx + 0x14u, (uint16_t)t11);
        edx = (edx & 0xffff0000u) | t11;
    }
    if (rd32(arg1 + 0x14d8u) != 0u)
    {
        eax = rd32(arg1 + 0x14d8u);
        wr16(ebx + 0x16u, rd16(eax));
    }
    if (rd32(arg1 + 0x14dcu) != 0u)
    {
        eax = rd32(arg1 + 0x14dcu);
        t12 = rd32(eax);
        wr32(ebx + 0x18u, t12);
        ecx = t12;
    }
    if (rd32(arg1 + 0x14e0u) != 0u)
    {
        eax = rd32(arg1 + 0x14e0u);
        t13 = rd8(eax);
        wr8(ebx + 0x3fu, (uint8_t)t13);
        edx = (edx & 0xffffff00u) | t13;
    }
    if (rd32(arg1 + 0x14e4u) != 0u)
    {
        eax = rd32(arg1 + 0x14e4u);
        wr16(ebx + 0x10u, rd16(eax));
    }
    if (rd32(arg1 + 0x14f4u) != 0u)
    {
        eax = rd32(arg1 + 0x14f4u);
        t14 = rd16(eax);
        wr16(ebx + 0x1cu, (uint16_t)t14);
        ecx = (ecx & 0xffff0000u) | t14;
    }
    if (rd32(arg1 + 0x14f8u) != 0u)
    {
        eax = rd32(arg1 + 0x14f8u);
        t15 = rd16(eax);
        wr16(ebx + 0x1eu, (uint16_t)t15);
        edx = (edx & 0xffff0000u) | t15;
    }
    if (rd32(arg1 + 0x14fcu) != 0u)
    {
        eax = rd32(arg1 + 0x14fcu);
        wr16(ebx + 0x20u, rd16(eax));
    }
    if (rd32(arg1 + 0x1500u) != 0u)
    {
        eax = rd32(arg1 + 0x1500u);
        t16 = rd16(eax);
        wr16(ebx + 0x22u, (uint16_t)t16);
        ecx = (ecx & 0xffff0000u) | t16;
    }
    if (rd32(arg1 + 0x1504u) != 0u)
    {
        eax = rd32(arg1 + 0x1504u);
        t17 = rd16(eax);
        wr16(ebx + 0x24u, (uint16_t)t17);
        edx = (edx & 0xffff0000u) | t17;
    }
    if (rd32(arg1 + 0x1508u) == 0u)
    {
        if (rd32(arg1 + 0x1520u) != 0u)
        {
            eax = rd32(arg1 + 0x1520u);
            t18 = rd8(eax);
            wr16(ebx + 0x26u, (uint16_t)t18);
            ecx = (ecx & 0xffff0000u) | t18;
        }
    }
    else
    {
        eax = rd32(arg1 + 0x1508u);
        wr16(ebx + 0x26u, rd16(eax));
    }
    if (rd32(arg1 + 0x1518u) != 0u)
    {
        eax = rd32(arg1 + 0x1518u);
        t19 = rd8(eax);
        wr8(ebx + 0x2cu, (uint8_t)t19);
        edx = (edx & 0xffffff00u) | t19;
    }
    if (rd32(arg1 + 0x1510u) != 0u)
    {
        eax = rd32(arg1 + 0x1510u);
        wr16(ebx + 0x28u, rd16(eax));
    }
    if (rd32(arg1 + 0x1514u) != 0u)
    {
        eax = rd32(arg1 + 0x1514u);
        t20 = rd16(eax);
        wr16(ebx + 0x2au, (uint16_t)t20);
        ecx = (ecx & 0xffff0000u) | t20;
    }
    if (rd32(arg1 + 0x151cu) != 0u)
    {
        eax = rd32(arg1 + 0x151cu);
        t21 = rd8(eax);
        wr8(ebx + 0x2du, (uint8_t)t21);
        edx = (edx & 0xffffff00u) | t21;
    }
    if (rd32(arg1 + 0x1528u) != 0u)
    {
        eax = rd32(arg1 + 0x1528u);
        wr32(ebx + 0x34u, rd32(eax));
    }
    if (rd32(arg1 + 0x1524u) != 0u)
    {
        eax = rd32(arg1 + 0x1524u);
        t22 = rd16(eax);
        wr16(ebx + 0x38u, (uint16_t)t22);
        ecx = (ecx & 0xffff0000u) | t22;
    }
    if (rd32(arg1 + 0x152cu) != 0u)
    {
        eax = rd32(arg1 + 0x152cu);
        t23 = rd16(eax);
        wr16(ebx + 0x3au, (uint16_t)t23);
        edx = (edx & 0xffff0000u) | t23;
    }
    if (rd32(arg1 + 0x1534u) != 0u)
    {
        eax = rd32(arg1 + 0x1534u);
        wr16(ebx + 0x3cu, rd16(eax));
    }
    if (rd32(arg1 + 0x1538u) != 0u)
    {
        eax = rd32(arg1 + 0x1538u);
        t24 = rd8(eax);
        wr8(ebx + 0x3eu, (uint8_t)t24);
        ecx = (ecx & 0xffffff00u) | t24;
    }
    if (rd32(arg1 + 0x153cu) != 0u)
    {
        eax = rd32(arg1 + 0x153cu);
        t25 = rd16(eax);
        wr16(ebx + 0x40u, (uint16_t)t25);
        edx = (edx & 0xffff0000u) | t25;
    }
    if (rd32(arg1 + 0x1540u) != 0u)
    {
        eax = rd32(arg1 + 0x1540u);
        wr16(ebx + 0x42u, rd16(eax));
    }
    if (rd32(arg1 + 0x1544u) != 0u)
    {
        eax = rd32(arg1 + 0x1544u);
        t26 = rd16(eax);
        wr16(ebx + 0x44u, (uint16_t)t26);
        ecx = (ecx & 0xffff0000u) | t26;
    }
    if (rd32(arg1 + 0x1548u) != 0u)
    {
        eax = 0u;
        ecx = ebx + 0x48u;
L_1015a269: ;
        t27 = rd32(eax + rd32(arg1 + 0x1548u));
        wr32(ecx, t27);
        if ((int32_t)(eax + 4u) < 64)
        {
            eax = eax + 4u;
            ecx = ecx + 4u;
            goto L_1015a269;
        }
        ecx = ecx + 4u;
        edx = t27;
    }
    if (rd32(arg1 + 0x1584u) != 0u)
    {
        eax = rd32(arg1 + 0x1584u);
        wr8(ebx + 0x46u, rd8(eax));
    }
    if (rd32(arg1 + 0x154cu) != 0u)
    {
        eax = rd32(arg1 + 0x154cu);
        t28 = rd8(eax);
        wr8(ebx + 0x30u, (uint8_t)t28);
        ecx = (ecx & 0xffffff00u) | t28;
    }
    if (rd32(arg1 + 0x1550u) != 0u)
    {
        eax = rd32(arg1 + 0x1550u);
        t29 = rd8(eax);
        wr8(ebx + 0x2fu, (uint8_t)t29);
        edx = (edx & 0xffffff00u) | t29;
    }
    if (rd32(arg1 + 0x1554u) != 0u)
    {
        eax = rd32(arg1 + 0x1554u);
        wr8(ebx + 0x31u, rd8(eax));
    }
    if (rd32(arg1 + 0x1558u) != 0u)
    {
        eax = rd32(arg1 + 0x1558u);
        t30 = rd16(eax);
        wr16(ebx + 0x32u, (uint16_t)t30);
        ecx = (ecx & 0xffff0000u) | t30;
    }
    if (rd32(arg1 + 0x155cu) != 0u)
    {
        eax = rd32(arg1 + 0x155cu);
        t31 = rd32(eax);
        wr32(ebx + 0x88u, t31);
        edx = t31;
    }
    if (rd32(arg1 + 0x1560u) != 0u)
    {
        eax = rd32(arg1 + 0x1560u);
        wr32(ebx + 0x8cu, rd32(eax));
    }
    if (rd32(arg1 + 0x1564u) != 0u)
    {
        eax = rd32(arg1 + 0x1564u);
        t32 = rd32(eax);
        wr32(ebx + 0x90u, t32);
        ecx = t32;
    }
    if (rd32(arg1 + 0x1568u) != 0u)
    {
        eax = rd32(arg1 + 0x1568u);
        t33 = rd32(eax);
        wr32(ebx + 0x94u, t33);
        edx = t33;
    }
    if (rd32(arg1 + 0x156cu) != 0u)
    {
        eax = rd32(arg1 + 0x156cu);
        wr32(ebx + 0x98u, rd32(eax));
    }
    if (rd32(arg1 + 0x1570u) != 0u)
    {
        eax = rd32(arg1 + 0x1570u);
        t34 = rd32(eax);
        wr32(ebx + 0x9cu, t34);
        ecx = t34;
    }
    if (rd32(arg1 + 0x1574u) != 0u)
    {
        eax = rd32(arg1 + 0x1574u);
        t35 = rd32(eax);
        wr32(ebx + 0xa0u, t35);
        edx = t35;
    }
    if (rd32(arg1 + 0x1578u) != 0u)
    {
        eax = rd32(arg1 + 0x1578u);
        wr16(ebx + 0xa4u, rd16(eax));
    }
    if (rd32(arg1 + 0x157cu) != 0u)
    {
        eax = rd32(arg1 + 0x157cu);
        t36 = rd16(eax);
        wr16(ebx + 0xa6u, (uint16_t)t36);
        ecx = (ecx & 0xffff0000u) | t36;
    }
    if (rd32(arg1 + 0x1584u) != 0u)
    {
        eax = rd32(arg1 + 0x1584u);
        t37 = rd8(eax);
        wr8(ebx + 0x46u, (uint8_t)t37);
        edx = (edx & 0xffffff00u) | t37;
    }
    if (rd32(arg1 + 0x1588u) != 0u)
    {
        eax = rd32(arg1 + 0x1588u);
        wr8(ebx + 0xa8u, rd8(eax));
    }
    if (rd32(arg1 + 0x158cu) != 0u)
    {
        eax = rd32(arg1 + 0x158cu);
        t38 = rd8(eax);
        wr8(ebx + 0xa9u, (uint8_t)t38);
        ecx = (ecx & 0xffffff00u) | t38;
    }
    if (rd32(arg1 + 0x1590u) != 0u)
    {
        eax = rd32(arg1 + 0x1590u);
        t39 = rd8(eax);
        wr8(ebx + 0xaau, (uint8_t)t39);
        edx = (edx & 0xffffff00u) | t39;
    }
    if (rd32(arg1 + 0x1594u) != 0u)
    {
        eax = rd32(arg1 + 0x1594u);
        wr16(ebx + 0xacu, rd16(eax));
    }
    if (rd32(arg1 + 0x1598u) != 0u)
    {
        eax = 0u;
        ecx = ebx + 0xb0u;
L_1015a3df: ;
        t40 = rd32(eax + rd32(arg1 + 0x1598u));
        wr32(ecx, t40);
        if ((int32_t)(eax + 4u) < 256)
        {
            eax = eax + 4u;
            ecx = ecx + 4u;
            goto L_1015a3df;
        }
        ecx = ecx + 4u;
        edx = t40;
    }
    if (rd32(arg1 + 0x159cu) != 0u)
    {
        eax = rd32(arg1 + 0x159cu);
        wr8(ebx + 0x1b0u, rd8(eax));
    }
    if (rd32(arg1 + 0x15a0u) != 0u)
    {
        eax = rd32(arg1 + 0x15a0u);
        wr8(ebx + 0x1b1u, rd8(eax));
    }
    if (rd32(arg1 + 0x15a4u) != 0u)
    {
        eax = rd32(arg1 + 0x15a4u);
        t41 = rd8(eax);
        wr8(ebx + 0x1b2u, (uint8_t)t41);
        edx = (edx & 0xffffff00u) | t41;
    }
    if (rd32(arg1 + 0x14c8u) == 0u)
    {
        wr32(arg1 + 0x14c8u, COW_IMG(0x10621818u));
    }
    t42 = rd32(arg1 + 0x14c8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10312090u), t42, g->ecx, g->edx, 1, 3, ebx + 0x1b4u, t42, 0x20u);
    t43 = g->edx;
    t44 = rd32(COW_IMG(0x10456a28u));
    wr8(ebx + 0x1d2u, 0u);
    if ((int8_t)rd8(t44 + 0x18u) >= 0)
    {
        eax = rd32(t44 + 8u);
        edx = (t43 & 0xffffff00u) | rd8(t44 + 0x18u);
        goto L_1015a483;
    }
    eax = rd32(t44 + 8u);
    edx = (t43 & 0xffffff00u) | rd8(t44 + 0x18u);
    if (eax == 2u) goto L_1015a47c;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_1015a486;
    }
L_1015a47c: ;
    eax = 1u;
L_1015a48c: ;
    t45 = rd32(COW_IMG(0x1015a628u) + eax * 4u);
    switch (t45 - RD)
    {
    case 0x1015a493u: goto L_1015a493;
    case 0x1015a4c8u: goto L_1015a4c8;
    case 0x1015a50au: goto L_1015a50a;
    case 0x1015a5b8u: goto L_1015a5b8;
    default: rt_fatal(g, COW_IMG(0x1015a48cu), "switch");
    }
    return 0;
L_1015a483: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_1015a486: ;
    if (!cf && !zf) goto L_1015a620;
    goto L_1015a48c;
L_1015a493: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t112 = cow_thiscall(g, COW_IMG(0x1015b270u), arg1, 0);
    t113 = g->edx;
    if (t112 == 0u)
    {
        edx = t113;
    }
    else
    {
        eax = t112;
        g->eax = eax;
        g->edx = rd32(eax);
        t114 = rd32(eax);
        g->esp = sp0 - 8u;
        t115 = cow_thiscall(g, rd32(t114 + 4u), eax, 0);
        t116 = g->ecx;
        t117 = g->edx;
        g->eax = ebx + 0x1d4u;
        g->edx = t117;
        t118 = cow_thiscall_cdecl(g, COW_IMG(0x10156b50u), t116, 3, ebx + 0x1d4u, 0xc0u, t115);
        t119 = g->edx;
        if (t118 != 0u)
        {
            edx = t119;
            goto L_1015a620;
        }
L_1015a4c6: ;
        goto L_1015a4c6;
    }
L_1015a620: ;
    eax = ebx;
L_1015a622: ;
    g->edx = edx;
    return eax;
L_1015a4c8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t103 = cow_thiscall(g, COW_IMG(0x1015b270u), arg1, 0);
    t104 = g->edx;
    if (t103 == 0u)
    {
        edx = t104;
        goto L_1015a620;
    }
    eax = t103;
    edx = t104;
    esi = t103;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t105 = cow_thiscall(g, COW_IMG(0x10156860u), esi, 0);
    t106 = g->edx;
    g->edx = t106;
    g->esp = sp0 - 0xcu;
    t107 = cow_thiscall(g, COW_IMG(0x10156850u), esi, 0);
    t108 = g->edx;
    g->edx = t108;
    g->esp = sp0 - 0x10u;
    t109 = cow_thiscall(g, COW_IMG(0x10156840u), esi, 0);
    t110 = g->edx;
    g->edx = t110;
    cow_thiscall_cdecl(g, COW_IMG(0x10156540u), ebx + 0x1d4u, 3, ebx + 0x1d4u, 0xc0u, t109);
    t111 = g->edx;
    g->edx = t111;
    return ebx;
L_1015a50a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t69 = cow_thiscall(g, COW_IMG(0x1015b270u), arg1, 0);
    t70 = g->edx;
    if (t69 == 0u)
    {
        edx = t70;
        goto L_1015a620;
    }
    eax = t69;
    esi = t69;
    g->eax = eax;
    g->edx = rd32(esi);
    t71 = rd32(esi);
    g->esp = sp0 - 8u;
    t72 = cow_thiscall(g, rd32(t71 + 4u), esi, 0);
    t73 = g->edx;
    if (t72 != 0u)
    {
        eax = t72;
        ecx = esi;
        edx = t73;
        goto L_1015a56f;
    }
    eax = t72;
    ecx = esi;
    edx = t73;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t74 = cow_thiscall(g, COW_IMG(0x10156480u), ecx, 0);
    t75 = g->edx;
    g->edx = t75;
    g->esp = sp0 - 0xcu;
    t76 = cow_thiscall(g, COW_IMG(0x10156470u), esi, 0);
    t77 = g->edx;
    g->eax = rd32(esi);
    g->edx = t77;
    t78 = rd32(esi);
    g->esp = sp0 - 0x10u;
    t79 = cow_thiscall(g, rd32(t78 + 0xcu), esi, 0);
    t80 = g->edx;
    g->edx = t80;
    g->esp = sp0 - 0x14u;
    t81 = cow_thiscall(g, COW_IMG(0x10156450u), esi, 0);
    t82 = g->edx;
    g->esp = sp0 - 0x18u;
    t83 = cow_thiscall(g, COW_IMG(0x10156440u), esi, 0);
    g->edx = rd32(esi);
    t84 = rd32(esi);
    g->esp = sp0 - 0x1cu;
    t85 = cow_thiscall(g, rd32(t84 + 8u), esi, 0);
    t86 = g->ecx;
    t87 = g->edx;
    g->edx = t87;
    cow_thiscall_cdecl(g, COW_IMG(0x10155bd0u), t86, 3, ebx + 0x1d4u, 0xc0u, t85);
    t88 = g->edx;
    g->edx = t88;
    return ebx;
L_1015a56f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t89 = cow_thiscall(g, COW_IMG(0x10156480u), ecx, 0);
    t90 = g->edx;
    g->esp = sp0 - 0xcu;
    t91 = cow_thiscall(g, COW_IMG(0x10156470u), esi, 0);
    g->edx = rd32(esi);
    t92 = rd32(esi);
    g->esp = sp0 - 0x10u;
    t93 = cow_thiscall(g, rd32(t92 + 0xcu), esi, 0);
    t94 = g->edx;
    g->edx = t94;
    g->esp = sp0 - 0x14u;
    t95 = cow_thiscall(g, COW_IMG(0x10156450u), esi, 0);
    t96 = g->edx;
    g->edx = t96;
    g->esp = sp0 - 0x18u;
    t97 = cow_thiscall(g, COW_IMG(0x10156440u), esi, 0);
    t98 = g->edx;
    g->eax = rd32(esi);
    g->edx = t98;
    t99 = rd32(esi);
    g->esp = sp0 - 0x1cu;
    t100 = cow_thiscall(g, rd32(t99 + 8u), esi, 0);
    t101 = g->edx;
    g->edx = t101;
    cow_thiscall_cdecl(g, COW_IMG(0x10155c70u), ebx + 0x1d4u, 4, ebx + 0x1d4u, 0xc0u, 1u, t100);
    t102 = g->edx;
    g->edx = t102;
    return ebx;
L_1015a5b8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t46 = cow_thiscall(g, COW_IMG(0x1015b270u), arg1, 0);
    t47 = g->edx;
    if (t46 == 0u)
    {
        edx = t47;
    }
    else
    {
        eax = t46;
        edx = t47;
        esi = t46;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t48 = cow_thiscall(g, COW_IMG(0x10156b40u), esi, 0);
        g->edx = rd32(esi);
        t49 = rd32(esi);
        t50 = cow_thiscall_cdecl(g, rd32(t49 + 0x18u), esi, 1, t48);
        t51 = g->edx;
        g->eax = rd32(esi);
        t52 = rd32(esi);
        g->esp = sp0 - 0x10u;
        t53 = cow_thiscall(g, rd32(t52 + 0x14u), esi, 0);
        g->edx = rd32(esi);
        t54 = rd32(esi);
        t55 = cow_thiscall_cdecl(g, rd32(t54 + 0x20u), esi, 1, t53);
        t56 = g->edx;
        t57 = -(t55 != 0u) + 3u;
        g->eax = t57;
        g->edx = t56;
        g->esp = sp0 - 0x18u;
        t58 = cow_thiscall(g, COW_IMG(0x10156b30u), esi, 0);
        t59 = g->edx;
        g->edx = t59;
        g->esp = sp0 - 0x1cu;
        t60 = cow_thiscall(g, COW_IMG(0x10156b20u), esi, 0);
        t61 = g->edx;
        g->eax = rd32(esi);
        t62 = rd32(esi);
        g->esp = sp0 - 0x20u;
        t63 = cow_thiscall(g, rd32(t62 + 8u), esi, 0);
        g->edx = rd32(esi);
        t64 = rd32(esi);
        g->esp = sp0 - 0x24u;
        t65 = cow_thiscall(g, rd32(t64 + 4u), esi, 0);
        t66 = g->ecx;
        t67 = g->edx;
        g->edx = t67;
        cow_thiscall_cdecl(g, COW_IMG(0x10156870u), t66, 3, ebx + 0x1d4u, 0xc0u, t65);
        t68 = g->edx;
        edx = t68;
    }
    goto L_1015a620;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159ff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
