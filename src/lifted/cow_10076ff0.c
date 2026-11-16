/* f_0x10076ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10076ff0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d96;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_158;
    uint32_t loc_15c;
    uint32_t loc_160;
    uint32_t loc_164;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 368u);

    wr32(sp0 - 0x148u, in_ebp);
    wr32(sp0 - 0x14cu, in_esi);
    if (arg1 != 0u) goto L_10077010;
    return 0u;
L_10077010: ;
    if (rd8(arg1) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        goto L_10077021;
    }
    return 0u;
L_10077021: ;
    if ((uint8_t)eax == 0x3cu) goto L_10077030;
    return 0u;
L_10077030: ;
    wr32(sp0 - 0x150u, in_ebx);
    wr32(sp0 - 0x154u, in_edi);
    wr32(sp0 - 0x158u, arg1);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357860u));
    g->esp = sp0 - 0x140u;
    t1 = cow_call_regs(g, COW_IMG(0x10077ba0u), eax, self, in_edx, 1, 7, COW_IMG(0x10357860u), arg1, in_edi, in_ebx, in_esi, in_ebp, rd32(sp0 - 0x144u));
    t2 = g->edx;
    if (t1 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t1;
    edx = t2;
    if (rd16(eax + 6u) - 1u > 0x1eu)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd16(eax + 6u) - 1u;
    t3 = rd32(COW_IMG(0x100778d0u) + ecx * 4u);
    switch (t3 - RD)
    {
    case 0x1007705fu: goto L_1007705f;
    case 0x100770cbu: goto L_100770cb;
    case 0x10077114u: goto L_10077114;
    case 0x1007712au: goto L_1007712a;
    case 0x10077172u: goto L_10077172;
    case 0x100771b7u: goto L_100771b7;
    case 0x100771e1u: goto L_100771e1;
    case 0x10077220u: goto L_10077220;
    case 0x10077270u: goto L_10077270;
    case 0x1007729eu: goto L_1007729e;
    case 0x100772dau: goto L_100772da;
    case 0x100772fbu: goto L_100772fb;
    case 0x10077320u: goto L_10077320;
    case 0x10077332u: goto L_10077332;
    case 0x1007736cu: goto L_1007736c;
    case 0x10077399u: goto L_10077399;
    case 0x100773c8u: goto L_100773c8;
    case 0x10077404u: goto L_10077404;
    case 0x10077440u: goto L_10077440;
    case 0x100774beu: goto L_100774be;
    case 0x100774ddu: goto L_100774dd;
    case 0x10077534u: goto L_10077534;
    case 0x1007757au: goto L_1007757a;
    case 0x10077599u: goto L_10077599;
    case 0x100775dcu: goto L_100775dc;
    case 0x10077668u: goto L_10077668;
    case 0x100776b6u: goto L_100776b6;
    case 0x100776cfu: goto L_100776cf;
    case 0x10077717u: goto L_10077717;
    case 0x1007772cu: goto L_1007772c;
    case 0x1007777cu: goto L_1007777c;
    default: rt_fatal(g, COW_IMG(0x10077058u), "switch");
    }
    return 0;
L_1007705f: ;
    if ((uint8_t)arg2 != 0u) goto L_10077077;
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    if (rd8(COW_IMG(0x1047d495u)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
L_10077077: ;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    if (rd32(ecx + 0xc4u) != 0u)
    {
        ecx = ecx + 0x28u;
    }
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t117 = cow_thiscall(g, COW_IMG(0x101598b0u), ecx, 0);
    t118 = g->ecx;
    t119 = g->edx;
    if (t117 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t117;
    ecx = t118;
    edx = t119;
    if (rd16(eax + 0x210u) != 0u)
    {
        ebp = eax + 0x214u;
    }
    else
    {
        ebp = eax + 0x7cu;
    }
    wr32(sp0 - 0x158u, eax + 0x74u);
    g->esp = sp0 - 0x154u;
    cow_cdecl(g, COW_IMG(0x10077cf0u), 1, eax + 0x74u);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return ebp;
L_100770cb: ;
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    g->esp = sp0 - 0x154u;
    t116 = cow_call_regs(g, COW_IMG(0x10077d80u), eax, g->ecx, g->edx, 1, 0);
    eax = t116;
L_100770df: ;
    if (eax == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    if (rd16(eax + 0x210u) == 0u) goto L_10077104;
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return eax + 0x214u;
L_10077104: ;
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return eax + 0x7cu;
L_10077114: ;
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    g->esp = sp0 - 0x154u;
    t115 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    eax = t115;
    goto L_100770df;
L_1007712a: ;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t112 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t113 = g->edx;
    if (t112 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t112;
    edx = t113;
    if (rd32(eax + 0xa0u) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    t114 = rd8(eax + 0xecu);
    wr32(sp0 - 0x158u, t114);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fd8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fd8u), t114, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077172: ;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t107 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t108 = g->edx;
    if (t107 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t107;
    edx = t108;
    if (rd32(eax + 0xa0u) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd32(eax + 0xa0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t109 = cow_call_regs(g, COW_IMG(0x100875f0u), eax, g->ecx, g->edx, 1, 0);
    t110 = g->ecx;
    t111 = g->edx;
    wr32(sp0 - 0x158u, t109);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fd8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fd8u), t109, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100771b7: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t104 = cow_call_regs(g, COW_IMG(0x10087610u), eax, g->ecx, g->edx, 1, 0);
    t105 = g->ecx;
    t106 = g->edx;
    wr32(sp0 - 0x158u, t104);
    wr32(sp0 - 0x15cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10352ff0u), t104, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100771e1: ;
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t99 = cow_thiscall(g, COW_IMG(0x100f94d0u), ecx, 0);
    t100 = g->ecx;
    t101 = g->edx;
    if (t99 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t99;
    ecx = t100;
    edx = t101;
    if (rd32(eax) != 1u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    t102 = (edx & 0xffff0000u) | rd16(eax + 0x10u);
    wr32(sp0 - 0x158u, t102);
    g->esp = sp0 - 0x154u;
    t103 = cow_cdecl(g, COW_IMG(0x1008a8e0u), 1, t102);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t103;
L_10077220: ;
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    wr32(sp0 - 0x158u, sp0 - 0x144u);
    wr32(sp0 - 0x15cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t94 = cow_stdcall(g, COW_IMG(0x1021f030u), 2, 0u, sp0 - 0x144u);
    t95 = g->edx;
    d96 = cow_take_float(g);
    if (d96 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (t94 & 0xffff0000u) | (uint16_t)cow_fsw(g, d96, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t95;
    t97 = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x144u) + 0x74u);
    wr32(sp0 - 0x158u, t97);
    g->esp = sp0 - 0x154u;
    t98 = cow_cdecl(g, COW_IMG(0x1008a8e0u), 1, t97);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t98;
L_10077270: ;
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    g->esp = sp0 - 0x154u;
    t93 = cow_stdcall(g, COW_IMG(0x10077d40u), 0);
    if (t93 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x103553e8u);
L_1007729e: ;
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = rd32(COW_IMG(0x1057876cu));
    t92 = -(rd8(eax + 0x9cu) != 0u) & eax + 0x9cu;
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t92;
L_100772da: ;
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    g->esp = sp0 - 0x154u;
    t91 = cow_stdcall(g, COW_IMG(0x100fc4e0u), 0);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t91;
L_100772fb: ;
    if (rd32(COW_IMG(0x106643a8u)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd32(COW_IMG(0x106643a8u));
    t89 = (uint32_t)(int8_t)rd8(eax + 5u);
    wr32(sp0 - 0x158u, t89);
    g->esp = sp0 - 0x154u;
    t90 = cow_stdcall(g, COW_IMG(0x10202c90u), 1, t89);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t90;
L_10077320: ;
    g->ebx = in_ebx;
    g->esp = sp0 - 0x154u;
    t88 = cow_stdcall(g, COW_IMG(0x100e3e30u), 0);
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t88;
L_10077332: ;
    wr32(sp0 - 0x158u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t85 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t86 = g->edx;
    if (t85 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t85;
    edx = t86;
    t87 = rd32(eax + 0x28u);
    wr32(sp0 - 0x158u, t87);
    wr32(sp0 - 0x15cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10352ff0u), t87, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_1007736c: ;
    wr32(sp0 - 0x158u, 0u);
    g->esp = sp0 - 0x154u;
    t83 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t84 = g->ecx;
    if (t83 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t83;
    ecx = t84;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = rd32(eax + 0x20u);
    edx = rd32(COW_IMG(0x10485638u));
L_10077554: ;
    wr32(sp0 - 0x158u, edx);
    wr32(sp0 - 0x15cu, eax);
    loc_158 = edx;
    loc_15c = eax;
L_10077556: ;
    wr32(sp0 - 0x160u, COW_IMG(0x10357fbcu));
    wr32(sp0 - 0x164u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x150u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fbcu), loc_15c, loc_158, rd32(sp0 - 0x154u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077399: ;
    wr32(sp0 - 0x158u, 0u);
    g->esp = sp0 - 0x154u;
    t81 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    if (t81 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t81;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    wr32(sp0 - 0x158u, rd32(COW_IMG(0x1048563cu)));
    t82 = rd32(eax + 0x24u);
    wr32(sp0 - 0x15cu, t82);
    ecx = rd32(COW_IMG(0x1048563cu));
    edx = t82;
    loc_158 = rd32(COW_IMG(0x1048563cu));
    loc_15c = t82;
    goto L_10077556;
L_100773c8: ;
    wr32(sp0 - 0x158u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t78 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t79 = g->edx;
    if (t78 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t78;
    edx = t79;
    t80 = rd8(eax + 0x2cu);
    wr32(sp0 - 0x158u, t80);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fd8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fd8u), t80, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077404: ;
    wr32(sp0 - 0x158u, 0u);
    g->esp = sp0 - 0x154u;
    t75 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t76 = g->ecx;
    if (t75 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t75;
    ecx = t76;
    t77 = rd8(eax + 0x2du);
    wr32(sp0 - 0x158u, t77);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fd8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fd8u), t77, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077440: ;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    if (rd8(COW_IMG(0x10485642u)) == 0u) goto L_100774ae;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485642u));
    wr32(sp0 - 0x158u, rd8(COW_IMG(0x10485643u)));
    wr32(sp0 - 0x15cu, (uint8_t)eax);
    wr32(sp0 - 0x160u, 2u);
    g->eax = eax;
    g->edx = (uint8_t)eax;
    g->esp = sp0 - 0x158u;
    t63 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 2u, (uint8_t)eax);
    t64 = g->edx;
    wr32(sp0 - 0x15cu, t63);
    t65 = (uint8_t)(rd32(COW_IMG(0x10485640u)) >> 8u);
    wr32(sp0 - 0x160u, t65);
    t66 = (uint8_t)rd32(COW_IMG(0x10485640u));
    wr32(sp0 - 0x164u, t66);
    wr32(sp0 - 0x168u, 2u);
    g->eax = t66;
    g->ecx = t65;
    g->edx = t64;
    g->esp = sp0 - 0x160u;
    t67 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 2u, t66);
    t68 = g->ecx;
    t69 = g->edx;
    wr32(sp0 - 0x164u, t67);
    wr32(sp0 - 0x168u, COW_IMG(0x10357fccu));
    wr32(sp0 - 0x16cu, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x158u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fccu), t67, rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100774ae: ;
    t70 = (uint8_t)(rd32(COW_IMG(0x10485640u)) >> 8u);
    wr32(sp0 - 0x158u, t70);
    t71 = (uint8_t)rd32(COW_IMG(0x10485640u));
    wr32(sp0 - 0x15cu, t71);
    eax = t71;
    edx = t70;
    loc_15c = t71;
    loc_158 = t70;
L_10077505: ;
    wr32(sp0 - 0x160u, 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x158u;
    t72 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 2u, loc_15c);
    t73 = g->ecx;
    t74 = g->edx;
    wr32(sp0 - 0x15cu, t72);
    wr32(sp0 - 0x160u, COW_IMG(0x10357fc4u));
    wr32(sp0 - 0x164u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x150u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fc4u), t72, rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100774be: ;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    t61 = (uint8_t)(rd32(COW_IMG(0x10485640u)) >> 8u);
    wr32(sp0 - 0x158u, t61);
    t62 = (uint8_t)rd32(COW_IMG(0x10485640u));
    wr32(sp0 - 0x15cu, t62);
    eax = t62;
    ecx = t61;
    loc_15c = t62;
    loc_158 = t61;
    goto L_10077505;
L_100774dd: ;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    if (rd8(COW_IMG(0x10485642u)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485642u));
    wr32(sp0 - 0x158u, rd8(COW_IMG(0x10485643u)));
    wr32(sp0 - 0x15cu, (uint8_t)eax);
    ecx = (uint8_t)eax;
    edx = rd8(COW_IMG(0x10485643u));
    loc_15c = (uint8_t)eax;
    loc_158 = rd8(COW_IMG(0x10485643u));
    goto L_10077505;
L_10077534: ;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (uint16_t)rd32(COW_IMG(0x10485644u));
    edx = rd16(COW_IMG(0x10485646u));
    goto L_10077554;
L_1007757a: ;
    wr32(sp0 - 0x158u, 1u);
    g->ebx = in_ebx;
    g->esp = sp0 - 0x154u;
    t60 = cow_cdecl(g, COW_IMG(0x101f7600u), 1, 1u);
    if (t60 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t60;
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return eax;
L_10077599: ;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    wr32(sp0 - 0x158u, 0u);
    g->esp = sp0 - 0x154u;
    t57 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    if ((uint8_t)t57 != 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t57;
    wr32(sp0 - 0x158u, 1u);
    t58 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    wr32(sp0 - 0x15cu, t58);
    g->ebx = in_ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14cu;
    t59 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, t58, 1u, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return t59;
L_100775dc: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t50 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t51 = g->ecx;
    t52 = g->edx;
    if (t50 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t50;
    ecx = t51;
    edx = t52;
    esi = t50;
    wr32(sp0 - 0x158u, 1u);
    wr32(sp0 - 0x15cu, 1u);
    g->ecx = ecx;
    g->esp = sp0 - 0x154u;
    t53 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 1u);
    t54 = g->ecx;
    if ((uint8_t)t53 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t53;
    ecx = t54;
    if (rd8(esi + 0x1ffu) < 5u) goto L_10077611;
    eax = (eax & 0xffffff00u) | rd8(esi + 0x1ffu);
    if ((uint8_t)eax <= 6u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
L_10077611: ;
    if (!(rd32(esi + 0x130u) >> 8u & 1u)) goto L_10077643;
    eax = 0u;
L_10077620: ;
    t55 = rd8(COW_IMG(0x10357fb8u) + eax);
    wr8(COW_IMG(0x1047d360u) + eax, (uint8_t)t55);
    if ((uint8_t)t55 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t55;
        goto L_10077620;
    }
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077643: ;
    eax = 0u;
L_10077645: ;
    t56 = rd8(COW_IMG(0x10357fb4u) + eax);
    wr8(COW_IMG(0x1047d360u) + eax, (uint8_t)t56);
    if ((uint8_t)t56 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t56;
        goto L_10077645;
    }
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077668: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t44 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t45 = g->ecx;
    t46 = g->edx;
    if (t44 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t44;
    ecx = t45;
    edx = t46;
    esi = t44;
    wr32(sp0 - 0x158u, 1u);
    wr32(sp0 - 0x15cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t47 = cow_call_regs(g, COW_IMG(0x101cc350u), eax, g->ecx, g->edx, 1, 2, 1u, 1u);
    t48 = g->edx;
    if ((uint8_t)t47 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    edx = t48;
    t49 = rd32(esi + 0x27cu);
    wr32(sp0 - 0x158u, t49);
    wr32(sp0 - 0x15cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10352ff0u), t49, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100776b6: ;
    if ((uint8_t)arg2 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    g->esp = sp0 - 0x154u;
    t43 = cow_call_regs(g, COW_IMG(0x101cc550u), eax, g->ecx, g->edx, 1, 0);
    eax = t43;
    goto L_100770df;
L_100776cf: ;
    g->esp = sp0 - 0x154u;
    t41 = cow_call_regs(g, COW_IMG(0x101cc550u), eax, g->ecx, g->edx, 1, 0);
    if (t41 == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t41;
    if (rd32(eax + 0xa0u) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd32(eax + 0xa0u);
    t42 = rd8(eax + 0xecu);
    wr32(sp0 - 0x158u, t42);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fd8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fd8u), t42, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_10077717: ;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    g->ebx = in_ebx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t38 = cow_thiscall(g, COW_IMG(0x10159380u), ecx, 0);
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
L_1007774f: ;
    if (eax == 0u)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    wr32(sp0 - 0x158u, eax);
    wr32(sp0 - 0x15cu, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x1034f7e0u), eax, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_1007772c: ;
    wr32(sp0 - 0x158u, 0x12u);
    t29 = (eax & 0xffffff00u) | rd8(eax + 5u);
    wr32(sp0 - 0x15cu, t29);
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t30 = cow_thiscall_cdecl(g, COW_IMG(0x10223040u), ecx, 2, t29, 0x12u);
    t31 = g->ecx;
    t32 = g->edx;
    if ((int32_t)t30 < 0)
    {
        ebp = 0u;
        goto L_100778c1;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
    wr32(sp0 - 0x158u, eax);
    g->esp = sp0 - 0x158u;
    t33 = cow_call_regs(g, COW_IMG(0x10223930u), eax, ecx, edx, 1, 0);
    t34 = g->edx;
    g->ebx = in_ebx;
    g->ecx = t33;
    g->edx = t34;
    g->esp = sp0 - 0x154u;
    t35 = cow_stdcall(g, COW_IMG(0x10223a90u), 1, rd32(sp0 - 0x158u));
    t36 = g->ecx;
    t37 = g->edx;
    eax = t35;
    ecx = t36;
    edx = t37;
    goto L_1007774f;
L_1007777c: ;
    wr32(sp0 - 0x158u, 0u);
    wr32(sp0 - 0x15cu, 0u);
    wr32(sp0 - 0x160u, 0xffu);
    wr32(sp0 - 0x164u, sp0 - 0x100u);
    t4 = arg1 + rd8(eax + 4u);
    edi = t4;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t5 = ~ecx - 1u;
    wr32(sp0 - 0x168u, t5);
    wr32(sp0 - 0x16cu, t4);
    g->eax = eax;
    g->edx = t4;
    g->esp = sp0 - 0x154u;
    t6 = cow_thiscall(g, COW_IMG(0x101b7280u), rd32(COW_IMG(0x10662d40u)), 6, t4, t5, sp0 - 0x100u, 0xffu, 0u, 0u);
    t7 = g->edx;
    if (rd8(sp0 - 0x100u) == 0u)
    {
        ecx = 0u;
        goto L_100777e5;
    }
    eax = (t6 & 0xffffff00u) | rd8(sp0 - 0x100u);
    ecx = 0u;
    edx = t7 & 0xffffff00u;
    esi = sp0 - 0x100u;
L_100777ba: ;
    if ((uint8_t)eax != 0x20u)
    {
        esi = esi + 1u;
        goto L_100777c3;
    }
    esi = esi + 1u;
    zf = (uint8_t)edx == 0u;
L_100777d8: ;
    if (zf) goto L_100777e5;
L_100777da: ;
    wr8(ecx + sp0 - 0x140u, (uint8_t)eax);
    if (rd8(esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        ecx = ecx + 1u;
        goto L_100777ba;
    }
    ecx = ecx + 1u;
L_100777e5: ;
    wr8(ecx + sp0 - 0x140u, 0u);
    wr32(sp0 - 0x158u, sp0 - 0x140u);
    g->ebx = 0u;
    g->edx = sp0 - 0x140u;
    g->esp = sp0 - 0x154u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x10076a70u), ecx, 1, sp0 - 0x140u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x15cu, 1u);
    wr32(sp0 - 0x160u, 0u);
    wr32(sp0 - 0x164u, t8);
    wr32(sp0 - 0x144u, 0xffffffffu);
    g->esp = sp0 - 0x158u;
    t11 = cow_call_regs(g, COW_IMG(0x1022b430u), t8, t9, t10, 1, 3, t8, 0u, 1u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)t11 < 0)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        esi = t8;
        goto L_10077844;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    esi = t8;
    wr32(sp0 - 0x158u, eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t14 = cow_cdecl(g, COW_IMG(0x1022b2f0u), 1, eax);
    t15 = g->ecx;
    t16 = g->edx;
    if ((int32_t)t14 >= 0)
    {
        ecx = t15;
        edx = t16;
        ebx = 0u;
        edi = t14;
        goto L_10077887;
    }
    ecx = t15;
    edx = t16;
    ebx = 0u;
    edi = t14;
L_1007781d: ;
    wr32(sp0 - 0x158u, 0u);
    wr32(sp0 - 0x15cu, 0u);
    wr32(sp0 - 0x160u, 1u);
    wr32(sp0 - 0x164u, 0u);
    wr32(sp0 - 0x168u, esi);
    g->esp = sp0 - 0x138u;
    t17 = cow_call_regs(g, COW_IMG(0x10222e20u), g->eax, ecx, edx, 1, 12, esi, 0u, 1u, 0u, 0u, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), 0xffffffffu, rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu));
    t18 = g->ecx;
    t19 = g->edx;
    if ((int32_t)t17 < 0)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        if (eax == 0xfffffffeu)
        {
            ebx = ebx + 1u;
        }
    }
    else
    {
        eax = t17;
        edx = t19;
        wr32(sp0 - 0x158u, sp0 - 0x144u);
        wr32(sp0 - 0x15cu, eax);
        g->edx = edx;
        g->esp = sp0 - 0x154u;
        t20 = cow_thiscall_cdecl(g, COW_IMG(0x10222c90u), sp0 - 0x144u, 2, eax, sp0 - 0x144u);
        t21 = g->ecx;
        t22 = g->edx;
        ecx = t21;
        edx = t22;
        edi = t20;
    }
    if (ebx == 0u) goto L_10077883;
    if ((int32_t)edi >= 0) goto L_10077887;
    wr32(sp0 - 0x158u, esi);
    wr32(sp0 - 0x15cu, COW_IMG(0x10357fa8u));
    wr32(sp0 - 0x160u, COW_IMG(0x1047d360u));
    g->ebx = ebx;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), COW_IMG(0x10357fa8u), esi, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return COW_IMG(0x1047d360u);
L_100777c3: ;
    if ((uint8_t)eax != 0x22u) goto L_100777ce;
    edx = (edx & 0xffffff00u) | (uint8_t)edx == 0u;
    goto L_100777da;
L_100777ce: ;
    if ((uint8_t)eax == 0x3cu) goto L_100777e5;
    if ((uint8_t)eax == 0xfdu) goto L_100777e5;
    zf = (uint8_t)((uint8_t)eax - 0x3eu) == 0u;
    goto L_100777d8;
L_10077844: ;
    if (eax != 0xfffffffeu)
    {
        ebx = 0u;
        edi = 0xffffffffu;
    }
    else
    {
        ebx = 1u;
        edi = 0xffffffffu;
    }
    goto L_1007781d;
L_10077883: ;
    if ((int32_t)edi < 0)
    {
        ebp = 0u;
        goto L_100778c1;
    }
L_10077887: ;
    if ((int32_t)rd32(sp0 - 0x144u) < 0)
    {
        wr32(sp0 - 0x158u, edi);
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14cu;
        t26 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, edi, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u));
        t27 = g->ecx;
        t28 = g->edx;
        wr32(sp0 - 0x15cu, t26);
        wr32(sp0 - 0x160u, esi);
        wr32(sp0 - 0x164u, COW_IMG(0x10357f90u));
        ecx = t27;
        edx = t28;
        loc_15c = t26;
        loc_160 = esi;
        loc_164 = COW_IMG(0x10357f90u);
    }
    else
    {
        eax = rd32(sp0 - 0x144u);
        wr32(sp0 - 0x158u, eax);
        wr32(sp0 - 0x15cu, edi);
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x150u;
        t23 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, edi, eax, rd32(sp0 - 0x154u));
        t24 = g->ecx;
        t25 = g->edx;
        wr32(sp0 - 0x15cu, t23);
        wr32(sp0 - 0x160u, esi);
        wr32(sp0 - 0x164u, COW_IMG(0x10357f98u));
        ecx = t24;
        edx = t25;
        loc_15c = t23;
        loc_160 = esi;
        loc_164 = COW_IMG(0x10357f98u);
    }
    wr32(sp0 - 0x168u, COW_IMG(0x1047d360u));
    g->ebx = ebx;
    g->esp = sp0 - 0x154u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x1047d360u), loc_164, loc_160, loc_15c, rd32(sp0 - 0x158u));
    ebp = COW_IMG(0x1047d360u);
L_100778c1: ;
    g->ebx = rd32(sp0 - 0x150u);
    g->esi = rd32(sp0 - 0x14cu);
    g->edi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x148u);
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10076ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10076ff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
