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
    double d55;
    double d60;
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
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
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
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_10097108;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10097a60u), arg1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
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
    if (rd32(esi) == 1u)
    {
        eax = rd32(esi) - 1u;
        goto L_10096fad;
    }
    eax = rd32(esi) - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10096e55;
    }
    eax = eax - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10096d10;
    }
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu) > 0x168u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu);
        wr32(esi + 0xcu, eax - 0x168u);
    }
    wr32(esi, 1u);
    wr32(esi + 4u, 0u);
    return;
L_10096d10: ;
    g->eax = eax;
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
        g->ebx = 0u;
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
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall(g, COW_IMG(0x10210fc0u), ecx, 1, 0u);
            t10 = g->edx;
            eax = t9;
            edx = t10;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x1012e000u), rd32(COW_IMG(0x10578194u)), 0);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        edx = t12;
        goto L_10096d82;
    }
    wr32(esi + 4u, 0u);
    wr32(esi, 1u);
    g->ebx = in_ebx;
    return;
L_10096d82: ;
    if (rd32(COW_IMG(0x10664520u)) == 0u) goto L_10097108;
    ecx = rd32(COW_IMG(0x10664520u));
    if (rd8(esi + 0x1cu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x1cu);
        edi = esi + 0x1cu;
        goto L_10096dc1;
    }
    edi = esi + 0x1cu;
    t13 = rd32(esi + 0x20u);
    t14 = rd32(arg1 + 0x78u);
    t15 = rd32(arg1 + 0x74u);
    g->eax = t13;
    g->edx = t15;
    g->esp = sp0 - 0x10u;
    t16 = cow_cdecl(g, COW_IMG(0x100780a0u), 5, t15, t14, 0x13u, t13, 0u);
    t17 = g->edx;
    if (t16 != 0u) goto L_10097108;
    edx = t17;
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
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        eax = t18;
        edx = t20;
        goto L_10096df3;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    wr8(edi, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t21 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x60u);
    t22 = g->edx;
    g->ebx = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10097390u), edi, t21, 0u, 0u, 0u, 0u);
    g->ebx = in_ebx;
    return;
L_10096df3: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t23 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578194u)), 0);
    if ((uint8_t)t23 == 0u) goto L_10097108;
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu) > 0x168u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40ddcu);
        wr32(esi + 0xcu, eax - 0x168u);
    }
    if (rd32(rd32(COW_IMG(0x10578194u)) + 0x1cu) == rd32(esi + 0xcu)) goto L_10097108;
    eax = rd32(esi + 0xcu);
    ecx = rd32(COW_IMG(0x10578194u));
    edx = rd32(rd32(COW_IMG(0x10578194u)) + 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t24 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    if (eax <= t24 + 0x168u) goto L_10097108;
    esi = eax;
    wr32(rd32(COW_IMG(0x10578194u)) + 0x1cu, esi);
    g->ebx = in_ebx;
    return;
L_10096e55: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t25 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578194u)), 0);
    t26 = g->edx;
    if ((uint8_t)t25 != 0u)
    {
        eax = t25;
        edx = t26;
    }
    else
    {
        eax = t25;
        edx = t26;
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
            t27 = cow_thiscall(g, COW_IMG(0x10210fc0u), ecx, 1, 0u);
            t28 = g->edx;
            eax = t27;
            edx = t28;
        }
        t29 = rd32(esi + 0xcu);
        g->ebx = 0u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t30 = cow_thiscall(g, COW_IMG(0x1012e0c0u), rd32(COW_IMG(0x10578194u)), 1, t29);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
L_10096e91: ;
    if (rd32(COW_IMG(0x10664520u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664520u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t32 = cow_thiscall(g, COW_IMG(0x10210fc0u), ecx, 1, 0u);
        t33 = g->edx;
        eax = t32;
        edx = t33;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t34 = cow_thiscall(g, COW_IMG(0x1012e000u), rd32(COW_IMG(0x10578194u)), 0);
    t35 = g->edx;
    if ((uint8_t)t34 == 0u)
    {
        eax = t34;
        edx = t35;
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
        eax = (eax & 0xffffff00u) | rd8(esi + 0x14u);
        edi = esi + 0x14u;
        goto L_10096f22;
    }
    edi = esi + 0x14u;
    t36 = rd32(esi + 0x18u);
    t37 = rd32(arg1 + 0x78u);
    t38 = rd32(arg1 + 0x74u);
    g->eax = t37;
    g->edx = t36;
    g->esp = sp0 - 0x10u;
    t39 = cow_cdecl(g, COW_IMG(0x100780a0u), 5, t38, t37, 0xdu, t36, 0u);
    t40 = g->edx;
    if (t39 != 0u) goto L_10097108;
    edx = t40;
    eax = rd32(esi + 0x18u);
    goto L_10096ef8;
L_10096f22: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t41 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t42 = g->edx;
    if ((uint8_t)t41 != 0u)
    {
        eax = t41;
        edx = t42;
        goto L_10096f4a;
    }
    eax = t41;
    edx = t42;
    wr8(edi, 0u);
    g->ebx = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664524u)), 7, COW_IMG(0x10097370u), edi, 0u, 1u, 0u, 1u, 0u);
    g->ebx = in_ebx;
    return;
L_10096f4a: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t43 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578194u)), 0);
    if ((uint8_t)t43 == 0u) goto L_10097108;
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
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t44 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    if (eax <= t44 + 0x168u) goto L_10097108;
    esi = eax;
    wr32(rd32(COW_IMG(0x10578194u)) + 0x1cu, esi);
    g->ebx = in_ebx;
    return;
L_10096fad: ;
    if (rd32(COW_IMG(0x10664524u)) == 0u) goto L_10096fd8;
    ecx = rd32(COW_IMG(0x10664524u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t45 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t46 = g->edx;
    if ((uint8_t)t45 == 0u)
    {
        eax = t45;
        edx = t46;
        goto L_10096fd8;
    }
    eax = t45;
    edx = t46;
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
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t47 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t48 = g->ecx;
    t49 = g->edx;
    if ((uint8_t)t47 == 0u)
    {
        ecx = t48;
        edx = t49;
        goto L_1009700c;
    }
    eax = t47;
    edx = t49;
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
    t50 = rd32(COW_IMG(0x10097350u) + eax * 4u);
    switch (t50 - RD)
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
    if (rd8(arg1 + 0x1ffu) < 5u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1ffu);
        goto L_10097031;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 0x1ffu);
    if ((uint8_t)eax <= 6u) goto L_10097108;
L_10097031: ;
    wr32(esi + 4u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t89 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t90 = g->edx;
    if ((uint8_t)t89 == 0u)
    {
        eax = t89;
        edx = t90;
        goto L_10097075;
    }
    eax = t89;
    edx = t90;
    g->eax = eax;
    g->edx = edx;
    t91 = rd32(COW_IMG(0x10578258u));
    g->esp = sp0 - 0x10u;
    t92 = cow_thiscall(g, COW_IMG(0x1011ba40u), t91, 0);
    t93 = g->ecx;
    t94 = g->edx;
    if ((uint8_t)t92 != 0u) goto L_10097108;
    eax = t92;
    ecx = t93;
    edx = t94;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t95 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t96 = g->edx;
    if (rd32(esi + 0xcu) <= t95) goto L_10097101;
    eax = t95;
    ecx = rd32(esi + 0xcu);
    edx = t96;
    g->ebx = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10141a60u), rd32(COW_IMG(0x10578258u)), 1, ecx);
    g->ebx = in_ebx;
    return;
L_10097075: ;
    g->eax = eax;
    g->edx = edx;
    t97 = rd32(COW_IMG(0x10578194u));
    g->esp = sp0 - 0x10u;
    t98 = cow_thiscall(g, COW_IMG(0x1011ba40u), t97, 0);
    t99 = g->ecx;
    t100 = g->edx;
    if ((uint8_t)t98 != 0u) goto L_10097108;
    eax = t98;
    ecx = t99;
    edx = t100;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t101 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t102 = g->ecx;
    t103 = g->edx;
    if (rd32(esi + 0xcu) <= t101)
    {
        eax = rd32(esi + 0xcu);
        ecx = t102;
        edx = t103;
        goto L_100970c6;
    }
    eax = rd32(esi + 0xcu);
    ecx = t102;
    edx = t103;
    edi = t101;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t104 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 0u);
    t105 = g->edx;
    if ((uint8_t)t104 == 0u)
    {
        edx = t105;
        goto L_100970b2;
    }
    edx = t105;
    if (rd32(esi + 0xcu) >= edi + 0x12cu) goto L_10097108;
L_100970b2: ;
    t106 = rd32(esi + 0xcu);
    g->ebx = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1012e0c0u), rd32(COW_IMG(0x10578194u)), 1, t106);
    g->ebx = in_ebx;
    return;
L_100970c6: ;
    g->esp = sp0 - 0x10u;
    t107 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 0u);
    if ((uint8_t)t107 == 0u) goto L_10097101;
    wr32(esi + 4u, 3u);
    wr32(esi + 0x10u, 0x258u);
    g->ebx = in_ebx;
    return;
L_100970e5: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t70 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t71 = g->ecx;
    t72 = g->edx;
    if ((uint8_t)t70 == 0u)
    {
        eax = t70;
        ecx = t71;
        edx = t72;
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
    t73 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 0u);
    t74 = g->edx;
    if ((uint8_t)t73 == 0u)
    {
        eax = t73;
        ecx = rd32(COW_IMG(0x10578194u));
        edx = t74;
        goto L_1009713f;
    }
    eax = t73;
    ecx = rd32(COW_IMG(0x10578194u));
    edx = t74;
    if (rd8(ecx + 0x24u) == 0u) goto L_10097144;
    if (rd32(ecx + 0x20u) != 0u) goto L_1009713f;
    wr32(esi + 4u, 4u);
    wr32(esi + 0x10u, 0xe10u);
    g->ebx = in_ebx;
    return;
L_1009713f: ;
    if (rd8(ecx + 0x24u) != 0u) goto L_10097101;
L_10097144: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t75 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
    t76 = g->ecx;
    t77 = g->edx;
    if ((uint8_t)t75 != 0u)
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
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t78 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
            t79 = g->ecx;
            t80 = g->edx;
            if (edx <= t78 + 0x168u)
            {
                ecx = t79;
                edx = t80;
                goto L_1009719c;
            }
            eax = t78 + 0x168u;
            ecx = t79;
            edi = edx;
            t81 = rd32(COW_IMG(0x10578194u));
            wr32(t81 + 0x1cu, edi);
            edx = t81;
        }
    }
    else
    {
        eax = t75;
        ecx = t76;
        edx = t77;
        wr32(esi + 4u, 0u);
    }
L_100971bf: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t87 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 0u);
    t88 = g->edx;
    if ((uint8_t)t87 == 0u) goto L_10097108;
    eax = t87;
    edx = t88;
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
    eax = rd32(COW_IMG(0x10578194u));
L_100971a6: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t82 = rd32(esi + 0xcu);
    g->esp = sp0 - 0x10u;
    t83 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t84 = g->ecx;
    t85 = g->edx;
    if (t82 >= t83 + 0x168u)
    {
        eax = t83 + 0x168u;
        ecx = t84;
        edx = t85;
    }
    else
    {
        ecx = t84;
        edx = t85;
        edi = t82;
        t86 = rd32(COW_IMG(0x10578194u));
        wr32(t86 + 0x1cu, edi);
        eax = t86;
    }
    goto L_100971bf;
L_10097209: ;
    wr32(esi + 0xcu, 0u);
    wr32(esi + 4u, 0u);
    g->ebx = in_ebx;
    return;
L_10097214: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t62 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t63 = g->ecx;
    if ((uint8_t)t62 == 0u)
    {
        ecx = t63;
        t67 = rd32(arg1 + 0x78u);
        t68 = rd32(arg1 + 0x74u);
        eax = t68;
        edx = t67;
    }
    else
    {
        t64 = -(rd32(rd32(COW_IMG(0x10578258u)) + 0x24u) != 1u) + 2u;
        t65 = rd32(arg1 + 0x78u);
        t66 = rd32(arg1 + 0x74u);
        eax = t65;
        ecx = t66;
        edx = rd32(COW_IMG(0x10578258u));
    }
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t69 = cow_stdcall(g, COW_IMG(0x100780a0u), 0);
    if (t69 != 0u) goto L_10097108;
    wr32(esi + 4u, 3u);
    wr32(esi + 0x10u, 0x258u);
    g->ebx = in_ebx;
    return;
L_1009726a: ;
    t56 = rd32(esi + 0x10u);
    wrf32(sp0 + 8u, (float)(double)(int32_t)t56);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t57 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t58 = g->ecx;
    t59 = g->edx;
    d60 = cow_take_float(g);
    eax = t57;
    ecx = t58;
    edx = t59;
    x0 = fr(g, (double)rdf32(sp0 + 8u) - d60);
L_1009727a: ;
    fpush(g, x0);
    g->esp = sp0 - 0x10u;
    t61 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    wr32(esi + 0x10u, t61);
    if ((int32_t)t61 >= 0) goto L_10097108;
    wr32(esi + 0x10u, 0u);
    wr32(esi + 4u, 0u);
    g->ebx = in_ebx;
    return;
L_10097295: ;
    t51 = rd32(esi + 0x10u);
    wrf32(sp0 + 8u, (float)(double)(int32_t)t51);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t52 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t53 = g->ecx;
    t54 = g->edx;
    d55 = cow_take_float(g);
    eax = t52;
    ecx = t53;
    edx = t54;
    x0 = fr(g, (double)rdf32(sp0 + 8u) - d55);
    goto L_1009727a;
L_100972a7: ;
    if (rd32(COW_IMG(0x10664524u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664524u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t108 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
        t109 = g->edx;
        if ((uint8_t)t108 == 0u)
        {
            eax = t108;
            edx = t109;
        }
        else
        {
            eax = t108;
            edx = t109;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t110 = cow_thiscall(g, COW_IMG(0x10210fc0u), rd32(COW_IMG(0x10664524u)), 1, 0u);
            t111 = g->edx;
            wr8(esi + 0x14u, 0u);
            wr8(esi + 8u, 1u);
            eax = t110;
            edx = t111;
        }
    }
    if (rd32(COW_IMG(0x10664520u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664520u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t112 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
        t113 = g->edx;
        if ((uint8_t)t112 == 0u)
        {
            edx = t113;
        }
        else
        {
            eax = t112;
            edx = t113;
            if (rd32(rd32(COW_IMG(0x10664520u)) + 0x14u) == COW_IMG(0x10097390u))
            {
                ecx = rd32(COW_IMG(0x10664520u));
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x10210fc0u), ecx, 1, 0u);
                t114 = g->edx;
                wr8(esi + 0x1cu, 0u);
                wr8(esi + 8u, 1u);
                edx = t114;
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
    t115 = rd8(esi + 8u);
    wr8(esi + 0x1cu, 0u);
    wr8(esi + 0x14u, 0u);
    wr32(esi + 0x10u, 0u);
    wr32(esi + 0xcu, 0u);
    wr32(esi + 4u, 0u);
    wr32(esi, 0u);
    if ((uint8_t)t115 == 0u)
    {
        eax = (eax & 0xffffff00u) | t115;
        wr8(esi + 8u, 0u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | t115;
        wr8(esi + 8u, 1u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t116 = cow_thiscall(g, COW_IMG(0x1012e180u), rd32(COW_IMG(0x10578194u)), 0);
    t117 = g->edx;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = t117;
    cow_tailcall(g, COW_IMG(0x10141ad0u), t116, rd32(COW_IMG(0x10578258u)), t117);
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
