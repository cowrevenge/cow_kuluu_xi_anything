/* f_0x10096c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10096c90(Guest* g)
{
    double d53;
    double d58;
    uint32_t eax;
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
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
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
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_10097108;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10097a60u), arg1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        esi = rd32(sp0 + 8u);
        goto L_100972a7;
    }
    edx = t2;
    esi = rd32(sp0 + 8u);
    if (rd32(esi + 0xcu) == 0u)
    {
        if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu) > 0x168u)
        {
            eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu);
            wr32(esi + 0xcu, eax - 0x168u);
        }
    }
    if (rd32(esi) == 1u) goto L_10096fad;
    eax = rd32(esi) - 1u;
    if (eax == 1u) goto L_10096e55;
    eax = eax - 1u;
    if (eax == 1u) goto L_10096d10;
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu) > 0x168u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu);
        wr32(esi + 0xcu, eax - 0x168u);
    }
    wr32(esi, 1u);
    wr32(esi + 4u, 0u);
    return;
L_10096d10: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578194u)), 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = t3;
        edx = t4;
        if (rd8(arg1 + 0x1ffu) < 5u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1ffu);
            goto L_10096d2d;
        }
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1ffu);
        if ((uint8_t)eax <= 6u) goto L_10096d4c;
L_10096d2d: ;
        if (rd32(COW_IMG(0x10664520u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10664520u));
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t5 = cow_thiscall(g, COW_IMG(0x10210fc0u), ecx, 1, 0u);
            eax = t5;
        }
        t6 = rd32(esi + 0xcu);
        g->eax = eax;
        g->edx = t6;
        g->esp = sp0 - 0x10u;
        t7 = cow_thiscall(g, COW_IMG(0x1012e0c0u), rd32(COW_IMG(0x10578194u)), 1, t6);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
L_10096d4c: ;
    if (rd32(COW_IMG(0x10664520u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664520u));
        if (rd32(ecx + 0x14u) != COW_IMG(0x10097390u))
        {
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10210fc0u), ecx, 1, 0u);
            t9 = g->edx;
            edx = t9;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x1012e000u), rd32(COW_IMG(0x10578194u)), 0);
    t11 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        edx = t11;
        goto L_10096d82;
    }
    wr32(esi + 4u, 0u);
    wr32(esi, 1u);
    return;
L_10096d82: ;
    if (rd32(COW_IMG(0x10664520u)) == 0u) goto L_10097108;
    ecx = rd32(COW_IMG(0x10664520u));
    if (rd8(esi + 0x1cu) == 0u)
    {
        edi = esi + 0x1cu;
        goto L_10096dc1;
    }
    edi = esi + 0x1cu;
    t12 = rd32(esi + 0x20u);
    t13 = rd32(arg1 + 0x78u);
    t14 = rd32(arg1 + 0x74u);
    g->eax = t12;
    g->edx = t14;
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x100780a0u), 5, t14, t13, 0x13u, t12, 0u);
    t16 = g->edx;
    if (t15 != 0u) goto L_10097108;
    edx = t16;
    eax = rd32(esi + 0x20u);
L_10096ef8: ;
    wr8(edi, 0u);
    if (eax != 0u) goto L_10096eb0;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1012e180u), rd32(COW_IMG(0x10578194u)), 0);
    wr32(esi + 4u, 4u);
    wr32(esi + 0x10u, 0x4b0u);
    wr32(esi, 1u);
    g->ebx = in_ebx;
    return;
L_10096dc1: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        edx = t19;
        goto L_10096df3;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    wr8(edi, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t20 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x60u);
    t21 = g->edx;
    g->ebx = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10097390u), edi, t20, 0u, 0u, 0u, 0u);
    g->ebx = in_ebx;
    return;
L_10096df3: ;
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578194u)), 0);
    if ((uint8_t)t22 == 0u) goto L_10097108;
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu) > 0x168u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu);
        wr32(esi + 0xcu, eax - 0x168u);
    }
    if (rd32(rd32(COW_IMG(0x10578194u)) + 0x1cu) == rd32(esi + 0xcu)) goto L_10097108;
    eax = rd32(esi + 0xcu);
    ecx = rd32(COW_IMG(0x10578194u));
    edx = rd32(rd32(COW_IMG(0x10578194u)) + 0x1cu);
    g->esp = sp0 - 0x10u;
    t23 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    if (eax <= t23 + 0x168u) goto L_10097108;
    esi = eax;
    wr32(rd32(COW_IMG(0x10578194u)) + 0x1cu, esi);
    g->ebx = in_ebx;
    return;
L_10096e55: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t24 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578194u)), 0);
    t25 = g->edx;
    if ((uint8_t)t24 != 0u)
    {
        eax = t24;
        edx = t25;
    }
    else
    {
        eax = t24;
        edx = t25;
        if (rd8(arg1 + 0x1ffu) < 5u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1ffu);
            goto L_10096e72;
        }
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1ffu);
        if ((uint8_t)eax <= 6u) goto L_10096e91;
L_10096e72: ;
        if (rd32(COW_IMG(0x10664524u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10664524u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t26 = cow_thiscall(g, COW_IMG(0x10210fc0u), ecx, 1, 0u);
            t27 = g->edx;
            eax = t26;
            edx = t27;
        }
        t28 = rd32(esi + 0xcu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t29 = cow_thiscall(g, COW_IMG(0x1012e0c0u), rd32(COW_IMG(0x10578194u)), 1, t28);
        t30 = g->edx;
        eax = t29;
        edx = t30;
    }
L_10096e91: ;
    if (rd32(COW_IMG(0x10664520u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664520u));
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10210fc0u), ecx, 1, 0u);
        t31 = g->edx;
        edx = t31;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t32 = cow_thiscall(g, COW_IMG(0x1012e000u), rd32(COW_IMG(0x10578194u)), 0);
    t33 = g->edx;
    if ((uint8_t)t32 == 0u)
    {
        eax = t32;
        edx = t33;
        goto L_10096ebe;
    }
L_10096eb0: ;
    wr32(esi + 4u, 0u);
    wr32(esi, 1u);
    g->ebx = in_ebx;
    return;
L_10096ebe: ;
    if (rd32(COW_IMG(0x10664524u)) == 0u) goto L_10097108;
    ecx = rd32(COW_IMG(0x10664524u));
    if (rd8(esi + 0x14u) == 0u)
    {
        edi = esi + 0x14u;
        goto L_10096f22;
    }
    edi = esi + 0x14u;
    t34 = rd32(esi + 0x18u);
    t35 = rd32(arg1 + 0x78u);
    t36 = rd32(arg1 + 0x74u);
    g->eax = t35;
    g->edx = t34;
    g->esp = sp0 - 0x10u;
    t37 = cow_cdecl(g, COW_IMG(0x100780a0u), 5, t36, t35, 0xdu, t34, 0u);
    t38 = g->edx;
    if (t37 != 0u) goto L_10097108;
    edx = t38;
    eax = rd32(esi + 0x18u);
    goto L_10096ef8;
L_10096f22: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t39 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t40 = g->edx;
    if ((uint8_t)t39 != 0u)
    {
        edx = t40;
        goto L_10096f4a;
    }
    edx = t40;
    wr8(edi, 0u);
    g->ebx = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664524u)), 7, COW_IMG(0x10097370u), edi, 0u, 1u, 0u, 1u, 0u);
    g->ebx = in_ebx;
    return;
L_10096f4a: ;
    g->esp = sp0 - 0x10u;
    t41 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578194u)), 0);
    if ((uint8_t)t41 == 0u) goto L_10097108;
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu) <= 0x168u)
    {
        edx = rd32(COW_IMG(0x104dfd98u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu);
        edx = rd32(COW_IMG(0x104dfd98u));
        wr32(esi + 0xcu, eax - 0x168u);
    }
    if (rd32(rd32(COW_IMG(0x10578194u)) + 0x1cu) == rd32(esi + 0xcu)) goto L_10097108;
    eax = rd32(esi + 0xcu);
    ecx = rd32(rd32(COW_IMG(0x10578194u)) + 0x1cu);
    g->esp = sp0 - 0x10u;
    t42 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    if (eax <= t42 + 0x168u) goto L_10097108;
    esi = eax;
    wr32(rd32(COW_IMG(0x10578194u)) + 0x1cu, esi);
    g->ebx = in_ebx;
    return;
L_10096fad: ;
    if (rd32(COW_IMG(0x10664524u)) == 0u) goto L_10096fd8;
    ecx = rd32(COW_IMG(0x10664524u));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t43 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t44 = g->edx;
    if ((uint8_t)t43 == 0u)
    {
        edx = t44;
        goto L_10096fd8;
    }
    eax = t43;
    edx = t44;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10210fc0u), rd32(COW_IMG(0x10664524u)), 1, 0u);
    wr8(esi + 0x14u, 0u);
    wr8(esi + 8u, 1u);
    g->ebx = in_ebx;
    return;
L_10096fd8: ;
    if (rd32(COW_IMG(0x10664520u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10664520u));
        goto L_1009700c;
    }
    ecx = rd32(COW_IMG(0x10664520u));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t45 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t46 = g->ecx;
    t47 = g->edx;
    if ((uint8_t)t45 == 0u)
    {
        ecx = t46;
        edx = t47;
        goto L_1009700c;
    }
    eax = t45;
    edx = t47;
    if (rd32(rd32(COW_IMG(0x10664520u)) + 0x14u) != COW_IMG(0x10097390u))
    {
        ecx = rd32(COW_IMG(0x10664520u));
        goto L_1009700c;
    }
    ecx = rd32(COW_IMG(0x10664520u));
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10210fc0u), ecx, 1, 0u);
    wr8(esi + 0x1cu, 0u);
    wr8(esi + 8u, 1u);
    g->ebx = in_ebx;
    return;
L_1009700c: ;
    if (rd32(esi + 4u) > 4u) goto L_10097108;
    eax = rd32(esi + 4u);
    t48 = rd32(COW_IMG(0x10097350u) + eax * 4u);
    switch (t48 - RD)
    {
    case 0x1009701fu: goto L_1009701f;
    case 0x100970e5u: goto L_100970e5;
    case 0x10097214u: goto L_10097214;
    case 0x1009726au: goto L_1009726a;
    case 0x10097295u: goto L_10097295;
    default: rt_fatal(g, COW_IMG(0x10097018u), "switch");
    }
    return;
L_1009701f: ;
    if (rd8(arg1 + 0x1ffu) < 5u) goto L_10097031;
    eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1ffu);
    if ((uint8_t)eax <= 6u) goto L_10097108;
L_10097031: ;
    wr32(esi + 4u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t87 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t88 = g->edx;
    if ((uint8_t)t87 == 0u)
    {
        edx = t88;
        goto L_10097075;
    }
    edx = t88;
    g->edx = edx;
    t89 = rd32(COW_IMG(0x10578258u));
    g->esp = sp0 - 0x10u;
    t90 = cow_thiscall(g, COW_IMG(0x1011ba40u), t89, 0);
    t91 = g->ecx;
    t92 = g->edx;
    if ((uint8_t)t90 != 0u) goto L_10097108;
    ecx = t91;
    edx = t92;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t93 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t94 = g->edx;
    if (rd32(esi + 0xcu) <= t93) goto L_10097101;
    eax = t93;
    ecx = rd32(esi + 0xcu);
    edx = t94;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10141a60u), rd32(COW_IMG(0x10578258u)), 1, ecx);
    g->ebx = in_ebx;
    return;
L_10097075: ;
    g->edx = edx;
    t95 = rd32(COW_IMG(0x10578194u));
    g->esp = sp0 - 0x10u;
    t96 = cow_thiscall(g, COW_IMG(0x1011ba40u), t95, 0);
    t97 = g->ecx;
    t98 = g->edx;
    if ((uint8_t)t96 != 0u) goto L_10097108;
    ecx = t97;
    edx = t98;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t99 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t100 = g->ecx;
    t101 = g->edx;
    if (rd32(esi + 0xcu) <= t99)
    {
        eax = rd32(esi + 0xcu);
        ecx = t100;
        edx = t101;
        goto L_100970c6;
    }
    eax = rd32(esi + 0xcu);
    ecx = t100;
    edx = t101;
    edi = t99;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t102 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 0u);
    t103 = g->edx;
    if ((uint8_t)t102 == 0u)
    {
        edx = t103;
        goto L_100970b2;
    }
    edx = t103;
    if (rd32(esi + 0xcu) >= edi + 0x12cu) goto L_10097108;
L_100970b2: ;
    t104 = rd32(esi + 0xcu);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1012e0c0u), rd32(COW_IMG(0x10578194u)), 1, t104);
    g->ebx = in_ebx;
    return;
L_100970c6: ;
    g->esp = sp0 - 0x10u;
    t105 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 0u);
    if ((uint8_t)t105 == 0u) goto L_10097101;
    wr32(esi + 4u, 3u);
    wr32(esi + 0x10u, 0x258u);
    g->ebx = in_ebx;
    return;
L_100970e5: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t68 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t69 = g->ecx;
    t70 = g->edx;
    if ((uint8_t)t68 == 0u)
    {
        eax = t68;
        ecx = t69;
        edx = t70;
        goto L_1009710d;
    }
    if (rd32(rd32(COW_IMG(0x10578258u)) + 0x24u) == 2u) goto L_10097101;
    eax = rd32(rd32(COW_IMG(0x10578258u)) + 0x24u);
    if (eax != 1u) goto L_10097108;
L_10097101: ;
    wr32(esi + 4u, 2u);
L_10097108: ;
    g->ebx = in_ebx;
    return;
L_1009710d: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t71 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 0u);
    t72 = g->edx;
    if ((uint8_t)t71 == 0u)
    {
        ecx = rd32(COW_IMG(0x10578194u));
        edx = t72;
        goto L_1009713f;
    }
    ecx = rd32(COW_IMG(0x10578194u));
    edx = t72;
    if (rd8(ecx + 0x24u) == 0u) goto L_10097144;
    if (rd32(ecx + 0x20u) != 0u) goto L_1009713f;
    wr32(esi + 4u, 4u);
    wr32(esi + 0x10u, 0xe10u);
    g->ebx = in_ebx;
    return;
L_1009713f: ;
    if (rd8(ecx + 0x24u) != 0u) goto L_10097101;
L_10097144: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t73 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t74 = g->ecx;
    t75 = g->edx;
    if ((uint8_t)t73 != 0u)
    {
        if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu) > 0x168u)
        {
            eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu);
            wr32(esi + 0xcu, eax - 0x168u);
        }
        if (rd32(rd32(COW_IMG(0x10578194u)) + 0x1cu) == rd32(esi + 0xcu))
        {
            eax = rd32(COW_IMG(0x10578194u));
            ecx = rd32(rd32(COW_IMG(0x10578194u)) + 0x1cu);
            edx = rd32(esi + 0xcu);
        }
        else
        {
            eax = rd32(COW_IMG(0x10578194u));
            ecx = rd32(rd32(COW_IMG(0x10578194u)) + 0x1cu);
            edx = rd32(esi + 0xcu);
            if (rd8(eax + 0x25u) != 0u) goto L_100971a6;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t76 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
            t77 = g->ecx;
            t78 = g->edx;
            if (edx <= t76 + 0x168u)
            {
                ecx = t77;
                edx = t78;
                goto L_1009719c;
            }
            eax = t76 + 0x168u;
            ecx = t77;
            edi = edx;
            t79 = rd32(COW_IMG(0x10578194u));
            wr32(t79 + 0x1cu, edi);
            edx = t79;
        }
    }
    else
    {
        eax = t73;
        ecx = t74;
        edx = t75;
        wr32(esi + 4u, 0u);
    }
L_100971bf: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t85 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 0u);
    t86 = g->edx;
    if ((uint8_t)t85 == 0u) goto L_10097108;
    eax = t85;
    edx = t86;
    if (rd8(rd32(COW_IMG(0x10578194u)) + 0x25u) != 0u) goto L_10097108;
    ecx = rd32(COW_IMG(0x10578194u));
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1012e180u), ecx, 0);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu) <= 0x168u) goto L_10097209;
    eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu);
    wr32(esi + 4u, 0u);
    wr32(esi + 0xcu, eax - 0x168u);
    g->ebx = in_ebx;
    return;
L_1009719c: ;
    if (rd8(rd32(COW_IMG(0x10578194u)) + 0x25u) == 0u)
    {
        eax = rd32(COW_IMG(0x10578194u));
        goto L_100971bf;
    }
L_100971a6: ;
    g->ecx = ecx;
    g->edx = edx;
    t80 = rd32(esi + 0xcu);
    g->esp = sp0 - 0x10u;
    t81 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t82 = g->ecx;
    t83 = g->edx;
    if (t80 >= t81 + 0x168u)
    {
        eax = t81 + 0x168u;
        ecx = t82;
        edx = t83;
    }
    else
    {
        ecx = t82;
        edx = t83;
        edi = t80;
        t84 = rd32(COW_IMG(0x10578194u));
        wr32(t84 + 0x1cu, edi);
        eax = t84;
    }
    goto L_100971bf;
L_10097209: ;
    wr32(esi + 0xcu, 0u);
    wr32(esi + 4u, 0u);
    g->ebx = in_ebx;
    return;
L_10097214: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t60 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t61 = g->ecx;
    if ((uint8_t)t60 == 0u)
    {
        ecx = t61;
        t65 = rd32(arg1 + 0x78u);
        t66 = rd32(arg1 + 0x74u);
        eax = t66;
        edx = t65;
    }
    else
    {
        t62 = -(rd32(rd32(COW_IMG(0x10578258u)) + 0x24u) != 1u) + 2u;
        t63 = rd32(arg1 + 0x78u);
        t64 = rd32(arg1 + 0x74u);
        eax = t63;
        ecx = t64;
        edx = rd32(COW_IMG(0x10578258u));
    }
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t67 = cow_stdcall(g, COW_IMG(0x100780a0u), 0);
    if (t67 != 0u) goto L_10097108;
    wr32(esi + 4u, 3u);
    wr32(esi + 0x10u, 0x258u);
    g->ebx = in_ebx;
    return;
L_1009726a: ;
    t54 = rd32(esi + 0x10u);
    wrf32(sp0 + 8u, (float)(double)(int32_t)t54);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t55 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t56 = g->ecx;
    t57 = g->edx;
    d58 = cow_take_float(g);
    eax = t55;
    ecx = t56;
    edx = t57;
    x0 = fr(g, (double)rdf32(sp0 + 8u) - d58);
L_1009727a: ;
    fpush(g, x0);
    g->esp = sp0 - 0x10u;
    t59 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    wr32(esi + 0x10u, t59);
    if ((int32_t)t59 >= 0) goto L_10097108;
    wr32(esi + 0x10u, 0u);
    wr32(esi + 4u, 0u);
    g->ebx = in_ebx;
    return;
L_10097295: ;
    t49 = rd32(esi + 0x10u);
    wrf32(sp0 + 8u, (float)(double)(int32_t)t49);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t50 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t51 = g->ecx;
    t52 = g->edx;
    d53 = cow_take_float(g);
    eax = t50;
    ecx = t51;
    edx = t52;
    x0 = fr(g, (double)rdf32(sp0 + 8u) - d53);
    goto L_1009727a;
L_100972a7: ;
    if (rd32(COW_IMG(0x10664524u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664524u));
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t106 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
        t107 = g->edx;
        if ((uint8_t)t106 == 0u)
        {
            edx = t107;
        }
        else
        {
            eax = t106;
            edx = t107;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10210fc0u), rd32(COW_IMG(0x10664524u)), 1, 0u);
            t108 = g->edx;
            wr8(esi + 0x14u, 0u);
            wr8(esi + 8u, 1u);
            edx = t108;
        }
    }
    if (rd32(COW_IMG(0x10664520u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664520u));
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t109 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
        t110 = g->edx;
        if ((uint8_t)t109 == 0u)
        {
            edx = t110;
        }
        else
        {
            eax = t109;
            edx = t110;
            if (rd32(rd32(COW_IMG(0x10664520u)) + 0x14u) == COW_IMG(0x10097390u))
            {
                ecx = rd32(COW_IMG(0x10664520u));
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x10210fc0u), ecx, 1, 0u);
                t111 = g->edx;
                wr8(esi + 0x1cu, 0u);
                wr8(esi + 8u, 1u);
                edx = t111;
            }
        }
    }
    if ((int32_t)rd32(esi) < 2)
    {
        eax = rd32(esi);
    }
    else
    {
        eax = rd32(esi);
        if ((int32_t)eax <= 3)
        {
            wr8(esi + 0x14u, 0u);
            wr8(esi + 0x1cu, 0u);
            wr8(esi + 8u, 1u);
        }
    }
    t112 = rd8(esi + 8u);
    wr8(esi + 0x1cu, 0u);
    wr8(esi + 0x14u, 0u);
    wr32(esi + 0x10u, 0u);
    wr32(esi + 0xcu, 0u);
    wr32(esi + 4u, 0u);
    wr32(esi, 0u);
    if ((uint8_t)t112 == 0u)
    {
        eax = (eax & 0xffffff00u) | t112;
        wr8(esi + 8u, 0u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | t112;
        wr8(esi + 8u, 1u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t113 = cow_thiscall(g, COW_IMG(0x1012e180u), rd32(COW_IMG(0x10578194u)), 0);
    t114 = g->edx;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = t114;
    cow_tailcall(g, COW_IMG(0x10141ad0u), t113, rd32(COW_IMG(0x10578258u)), t114);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10096c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10096c90(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
