/* f_0x102988f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102988f0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_210;
    uint32_t loc_214;
    uint32_t loc_218;
    uint32_t loc_21c;
    uint32_t loc_220;
    uint32_t loc_224;
    uint32_t loc_228;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 648u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    t1 = rd32(sp0 + 8u);
    edi = t1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 + 8u, t1);
    esi = t1 + ~ecx - 5u;
    edi = COW_IMG(0x103bbdb0u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = t1;
        goto L_10298921;
    }
    edx = t1;
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, COW_IMG(0x1034f7fcu));
    t2 = rd32(sp0 + 8u);
    wr32(sp0 - 0x28u, t2);
    t3 = rd32(sp0 + 4u);
    wr8(sp0 + 4u, rd32(t3 + 0x2cu) == 1u);
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), ecx, 2, t2, COW_IMG(0x1034f7fcu));
    t5 = g->edx;
    wr32(sp0 - 0x10u, t4);
    if (t4 != 0u)
    {
        ecx = t4;
        edx = t5;
        edi = t3;
        loc_10 = t4;
        goto L_102a9359;
    }
    eax = t4;
    ecx = t4;
    edx = t5;
    esi = t2;
    wr32(sp0 - 0x24u, 0x27u);
    wr32(sp0 - 0x28u, COW_IMG(0x103be71cu));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b27fcu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103be71cu));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x30u, esi);
    wr32(sp0 - 0x34u, COW_IMG(0x103be664u));
    g->edx = t8;
    g->esp = sp0 - 0x2cu;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be664u), esi);
    t10 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t10;
    return t9 & 0xffffff00u;
L_10298921: ;
    wr32(sp0 - 0x230u, in_ebx);
    wr32(sp0 - 0x234u, in_ebp);
    wr32(sp0 - 0x238u, in_esi);
    wr32(sp0 - 0x23cu, in_edi);
    wr32(sp0 - 0x240u, COW_IMG(0x1034f7fcu));
    t60 = rd32(sp0 + 8u);
    wr32(sp0 - 0x244u, t60);
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t61 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), ecx, 2, t60, COW_IMG(0x1034f7fcu));
    t62 = g->ecx;
    t63 = g->edx;
    if (t61 != 0u)
    {
        esi = t61;
        goto L_102a8ee4;
    }
    eax = t61;
    ecx = t62;
    edx = t63;
    edi = t60;
    wr32(sp0 - 0x240u, 0x192u);
    wr32(sp0 - 0x244u, COW_IMG(0x103be560u));
    wr32(sp0 - 0x248u, COW_IMG(0x103b27fcu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x240u;
    t64 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103be560u));
    t65 = g->ecx;
    t66 = g->edx;
    wr32(sp0 - 0x24cu, edi);
    wr32(sp0 - 0x250u, COW_IMG(0x103be664u));
    g->edx = t66;
    g->esp = sp0 - 0x248u;
    t67 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be664u), edi);
    t68 = g->edx;
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    g->edx = t68;
    return t67 & 0xffffff00u;
L_102a8ee4: ;
    wr32(sp0 - 0x240u, 0x4fu);
    t69 = rd32(sp0 + 8u);
    wr32(sp0 - 0x244u, t69);
    t70 = rd32(rd32(sp0 + 4u) + 0x20u);
    wr32(sp0 - 0x20cu, t70);
    wr32(sp0 - 0x248u, sp0 - 0x1e8u);
    t71 = rd32(rd32(sp0 + 4u) + 0x24u);
    wr32(sp0 - 0x208u, t71);
    wr32(sp0 - 0x1f4u, 0u);
    wr32(sp0 - 0x1f0u, 0xffu);
    g->ecx = ((int32_t)rd32(rd32(sp0 + 4u) + 0x24u) > 1) + 2u;
    g->edx = t69;
    t72 = rd32(rd32(sp0 + 4u) + 0x24u);
    t73 = rd32(rd32(sp0 + 4u) + 0x1cu);
    t74 = rd32(sp0 + 4u);
    t75 = rd32(sp0 - 0x22cu);
    t76 = rd32(rd32(sp0 + 4u) + 0x2cu);
    g->esp = sp0 - 0x23cu;
    cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x1e8u, g->ecx, g->edx, 1, 3, sp0 - 0x1e8u, t69, 0x4fu);
    t77 = g->ecx;
    t78 = g->edx;
    wr32(sp0 - 0x24cu, 0x1aau);
    wr32(sp0 - 0x250u, COW_IMG(0x103be560u));
    t79 = (uint32_t)(int16_t)rd16(sp0 - 0x1fau);
    wr32(sp0 - 0x254u, t79);
    wr32(sp0 - 0x258u, 1u);
    wr32(sp0 - 0x198u, 0u);
    wr32(sp0 - 0x220u, t79);
    g->ecx = t77;
    g->edx = t78;
    g->esp = sp0 - 0x234u;
    t80 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t79, COW_IMG(0x103be560u), 0x1aau, sp0 - 0x1e8u, rd32(sp0 - 0x244u), 0x4fu, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
    t81 = g->ecx;
    t82 = g->edx;
    wr32(sp0 - 0x218u, t80);
    if (t80 != 0u)
    {
        ecx = t81;
        edx = t82;
        ebx = t71;
        ebp = t73;
        edi = t74;
        loc_218 = t80;
        goto L_102a8fcc;
    }
    eax = t80;
    ecx = t81;
    edx = t82;
    edi = t74;
    wr32(sp0 - 0x240u, 0x1abu);
    wr32(sp0 - 0x244u, COW_IMG(0x103be560u));
    wr32(sp0 - 0x248u, COW_IMG(0x103b27fcu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x240u;
    t83 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103be560u));
    t84 = g->edx;
    t85 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x24cu, t85);
    wr32(sp0 - 0x250u, COW_IMG(0x103be62cu));
    g->ecx = t85;
    g->edx = t84;
    g->esp = sp0 - 0x248u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be62cu), t85);
    t86 = g->ecx;
    t87 = g->edx;
    wr32(sp0 - 0x254u, esi);
    g->edi = edi;
    t88 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t87, 1, 3, esi, COW_IMG(0x103be62cu), rd32(sp0 - 0x24cu));
    t89 = g->edx;
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    g->edx = t89;
    return t88 & 0xffffff00u;
L_102a8fcc: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t90 = cow_stdcall(g, COW_IMG(0x102a92f0u), 0);
    t91 = g->ecx;
    t92 = g->edx;
    if (t90 == 0u)
    {
        eax = t90;
        edx = t92;
    }
    else
    {
        eax = t90;
        ecx = t91;
        wr32(sp0 - 0x240u, 1u);
        wr32(sp0 - 0x244u, 2u);
        wr32(sp0 - 0x248u, sp0 - 0x200u);
        g->ecx = ecx;
        g->edx = sp0 - 0x200u;
        g->esp = sp0 - 0x228u;
        cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x200u, 2u, 1u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu));
        t93 = g->ecx;
        t94 = g->edx;
        wr32(sp0 - 0x24cu, 1u);
        wr32(sp0 - 0x250u, 2u);
        wr32(sp0 - 0x254u, sp0 - 0x1fcu);
        g->eax = sp0 - 0x1fcu;
        g->edx = t94;
        g->esp = sp0 - 0x234u;
        t95 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1fcu, 2u, 1u, sp0 - 0x200u, 2u, 1u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
        t96 = g->edx;
        wr32(sp0 - 0x258u, 1u);
        wr32(sp0 - 0x25cu, 2u);
        wr32(sp0 - 0x260u, sp0 - 0x1fau);
        g->ecx = sp0 - 0x1fau;
        g->esp = sp0 - 0x240u;
        t97 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1fau, 2u, 1u, sp0 - 0x1fcu, 2u, 1u, sp0 - 0x200u, 2u);
        t98 = g->ecx;
        wr32(sp0 - 0x264u, 1u);
        wr32(sp0 - 0x268u, 2u);
        wr32(sp0 - 0x26cu, sp0 - 0x1f8u);
        g->ecx = t98;
        g->edx = sp0 - 0x1f8u;
        g->esp = sp0 - 0x24cu;
        cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1f8u, 2u, 1u, sp0 - 0x1fau, 2u, 1u, sp0 - 0x1fcu, 2u);
        t99 = g->ecx;
        t100 = g->edx;
        wr32(sp0 - 0x270u, 1u);
        wr32(sp0 - 0x274u, 2u);
        wr32(sp0 - 0x278u, sp0 - 0x1f6u);
        g->eax = sp0 - 0x1f6u;
        g->edx = t100;
        g->esp = sp0 - 0x258u;
        t101 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1f6u, 2u, 1u, sp0 - 0x1f8u, 2u, 1u, sp0 - 0x1fau, 2u);
        t102 = g->edx;
        wr32(sp0 - 0x27cu, 1u);
        wr32(sp0 - 0x280u, 4u);
        wr32(sp0 - 0x284u, sp0 - 0x1f4u);
        g->ecx = sp0 - 0x1f4u;
        g->esp = sp0 - 0x264u;
        t103 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1f4u, 4u, 1u, sp0 - 0x1f6u, 2u, 1u, sp0 - 0x1f8u, 2u);
        t104 = g->ecx;
        wr32(sp0 - 0x240u, 1u);
        wr32(sp0 - 0x244u, 4u);
        wr32(sp0 - 0x248u, sp0 - 0x1f0u);
        g->ecx = t104;
        g->edx = sp0 - 0x1f0u;
        g->esp = sp0 - 0x228u;
        cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x1f0u, 4u, 1u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu));
        t105 = g->ecx;
        t106 = g->edx;
        wr32(sp0 - 0x24cu, 1u);
        wr32(sp0 - 0x250u, 4u);
        wr32(sp0 - 0x254u, sp0 - 0x198u);
        g->eax = sp0 - 0x198u;
        g->edx = t106;
        g->esp = sp0 - 0x234u;
        t107 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x198u, 4u, 1u, sp0 - 0x1f0u, 4u, 1u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
        t108 = g->edx;
        eax = t107;
        edx = t108;
    }
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, 1u);
    wr32(sp0 - 0x248u, 2u);
    wr32(sp0 - 0x24cu, sp0 - 0x200u);
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x23cu;
    t109 = cow_call_regs(g, COW_IMG(0x10298ab0u), eax, g->ecx, edx, 1, 4, sp0 - 0x200u, 2u, 1u, esi);
    t110 = g->ecx;
    wr32(sp0 - 0x250u, esi);
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 1u);
    wr32(sp0 - 0x25cu, sp0 - 0x1feu);
    g->ecx = t110;
    g->esp = sp0 - 0x24cu;
    cow_call_regs(g, COW_IMG(0x10298ab0u), t109, g->ecx, sp0 - 0x1feu, 1, 4, sp0 - 0x1feu, 1u, 1u, esi);
    t111 = g->ecx;
    t112 = g->edx;
    wr32(sp0 - 0x260u, esi);
    wr32(sp0 - 0x264u, 1u);
    wr32(sp0 - 0x268u, 1u);
    wr32(sp0 - 0x26cu, sp0 - 0x1fdu);
    g->esp = sp0 - 0x25cu;
    t113 = cow_call_regs(g, COW_IMG(0x10298ab0u), sp0 - 0x1fdu, g->ecx, t112, 1, 4, sp0 - 0x1fdu, 1u, 1u, esi);
    t114 = g->edx;
    wr32(sp0 - 0x270u, esi);
    wr32(sp0 - 0x274u, 1u);
    wr32(sp0 - 0x278u, 2u);
    wr32(sp0 - 0x27cu, sp0 - 0x1fcu);
    g->ecx = sp0 - 0x1fcu;
    g->esp = sp0 - 0x26cu;
    t115 = cow_call_regs(g, COW_IMG(0x10298ab0u), t113, g->ecx, t114, 1, 4, sp0 - 0x1fcu, 2u, 1u, esi);
    t116 = g->ecx;
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, 1u);
    wr32(sp0 - 0x248u, 2u);
    wr32(sp0 - 0x24cu, sp0 - 0x1fau);
    g->ecx = t116;
    g->esp = sp0 - 0x23cu;
    cow_call_regs(g, COW_IMG(0x10298ab0u), t115, g->ecx, sp0 - 0x1fau, 1, 4, sp0 - 0x1fau, 2u, 1u, esi);
    t117 = g->ecx;
    t118 = g->edx;
    wr32(sp0 - 0x250u, esi);
    wr32(sp0 - 0x254u, 1u);
    wr32(sp0 - 0x258u, 2u);
    wr32(sp0 - 0x25cu, sp0 - 0x1f8u);
    g->esp = sp0 - 0x24cu;
    t119 = cow_call_regs(g, COW_IMG(0x10298ab0u), sp0 - 0x1f8u, g->ecx, t118, 1, 4, sp0 - 0x1f8u, 2u, 1u, esi);
    t120 = g->edx;
    wr32(sp0 - 0x260u, esi);
    wr32(sp0 - 0x264u, 1u);
    wr32(sp0 - 0x268u, 2u);
    wr32(sp0 - 0x26cu, sp0 - 0x1f6u);
    g->ecx = sp0 - 0x1f6u;
    g->esp = sp0 - 0x25cu;
    t121 = cow_call_regs(g, COW_IMG(0x10298ab0u), t119, g->ecx, t120, 1, 4, sp0 - 0x1f6u, 2u, 1u, esi);
    t122 = g->ecx;
    wr32(sp0 - 0x270u, esi);
    wr32(sp0 - 0x274u, 1u);
    wr32(sp0 - 0x278u, 4u);
    wr32(sp0 - 0x27cu, sp0 - 0x1f4u);
    g->ecx = t122;
    g->esp = sp0 - 0x26cu;
    cow_call_regs(g, COW_IMG(0x10298ab0u), t121, g->ecx, sp0 - 0x1f4u, 1, 4, sp0 - 0x1f4u, 4u, 1u, esi);
    t123 = g->ecx;
    t124 = g->edx;
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, 1u);
    wr32(sp0 - 0x248u, 4u);
    wr32(sp0 - 0x24cu, sp0 - 0x1f0u);
    g->esp = sp0 - 0x23cu;
    t125 = cow_call_regs(g, COW_IMG(0x10298ab0u), sp0 - 0x1f0u, g->ecx, t124, 1, 4, sp0 - 0x1f0u, 4u, 1u, esi);
    t126 = g->edx;
    wr32(sp0 - 0x250u, esi);
    wr32(sp0 - 0x254u, 4u);
    wr32(sp0 - 0x258u, 1u);
    wr32(sp0 - 0x25cu, sp0 - 0x1ecu);
    g->ecx = sp0 - 0x1ecu;
    g->esp = sp0 - 0x24cu;
    t127 = cow_call_regs(g, COW_IMG(0x10298ab0u), t125, g->ecx, t126, 1, 4, sp0 - 0x1ecu, 1u, 4u, esi);
    t128 = g->ecx;
    wr32(sp0 - 0x260u, esi);
    wr32(sp0 - 0x264u, 0x50u);
    wr32(sp0 - 0x268u, 1u);
    wr32(sp0 - 0x26cu, sp0 - 0x1e8u);
    g->ecx = t128;
    g->esp = sp0 - 0x25cu;
    cow_call_regs(g, COW_IMG(0x10298ab0u), t127, g->ecx, sp0 - 0x1e8u, 1, 4, sp0 - 0x1e8u, 1u, 0x50u, esi);
    t129 = g->ecx;
    t130 = g->edx;
    wr32(sp0 - 0x270u, esi);
    wr32(sp0 - 0x274u, 1u);
    wr32(sp0 - 0x278u, 4u);
    wr32(sp0 - 0x27cu, sp0 - 0x198u);
    g->esp = sp0 - 0x26cu;
    t131 = cow_call_regs(g, COW_IMG(0x10298ab0u), sp0 - 0x198u, g->ecx, t130, 1, 4, sp0 - 0x198u, 4u, 1u, esi);
    t132 = g->edx;
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, 0x194u);
    wr32(sp0 - 0x248u, 1u);
    wr32(sp0 - 0x24cu, sp0 - 0x194u);
    g->ecx = sp0 - 0x194u;
    g->esp = sp0 - 0x23cu;
    cow_call_regs(g, COW_IMG(0x10298ab0u), t131, g->ecx, t132, 1, 4, sp0 - 0x194u, 1u, 0x194u, esi);
    t133 = g->ecx;
    t134 = g->edx;
    if (rd8(sp0 - 0x229u) == 0u)
    {
        eax = ebx * ebp;
        edx = (t134 & 0xffffff00u) | rd8(rd32(edi + 0x28u));
        loc_224 = (rd32(sp0 - 0x224u) & 0xffffff00u) | rd8(rd32(edi + 0x28u));
        loc_228 = (rd32(sp0 - 0x228u) & 0xffffff00u) | rd8(rd32(edi + 0x28u));
        edi = rd32(edi + 0x28u);
        wr32(sp0 - 0x214u, edi);
        ecx = edi;
        loc_214 = edi;
    }
    else
    {
        eax = ebx * ebp;
        edx = (t134 & 0xffffff00u) | rd8(rd32(edi + 0x28u));
        loc_224 = (rd32(sp0 - 0x224u) & 0xffffff00u) | rd8(rd32(edi + 0x28u));
        loc_228 = (rd32(sp0 - 0x228u) & 0xffffff00u) | rd8(rd32(edi + 0x28u));
        edi = rd32(edi + 0x28u);
        t135 = edi + (rd32(sp0 - 0x20cu) - 1u) * eax;
        wr32(sp0 - 0x214u, t135);
        eax = -eax;
        ecx = t135;
        loc_214 = t135;
    }
    wr32(sp0 - 0x220u, eax);
    wr32(sp0 - 0x21cu, 0u);
    if ((int32_t)ebx <= 0)
    {
        eax = 0u;
        goto L_102a9204;
    }
    loc_220 = eax;
    eax = 0u;
    loc_21c = 0u;
L_102a9170: ;
    wr32(sp0 - 0x210u, 0u);
    if ((int32_t)rd32(sp0 - 0x20cu) <= 0) goto L_102a91ef;
    edx = rd32(sp0 - 0x20cu);
    ebx = eax + ecx;
    loc_210 = 0u;
L_102a9183: ;
    if ((int32_t)ebp <= 0)
    {
        ecx = 0u;
    }
    else
    {
        ecx = 0u;
        edi = ebx;
L_102a918b: ;
        t136 = rd32(sp0 - 0x218u);
        wr8(ecx + t136, rd8(edi));
        if (rd8(ebx) >= (uint8_t)loc_228)
        {
            eax = (t136 & 0xffffff00u) | rd8(ebx);
            if ((uint8_t)eax > (uint8_t)loc_224)
            {
                loc_224 = (loc_224 & 0xffffff00u) | (uint8_t)eax;
            }
        }
        else
        {
            eax = (t136 & 0xffffff00u) | rd8(ebx);
            loc_228 = (loc_228 & 0xffffff00u) | (uint8_t)eax;
        }
        if ((int32_t)(ecx + 1u) < (int32_t)ebp)
        {
            ecx = ecx + 1u;
            edx = rd32(sp0 - 0x208u);
            edi = edi + rd32(sp0 - 0x208u);
            goto L_102a918b;
        }
        ecx = ecx + 1u;
        edx = rd32(sp0 - 0x208u);
    }
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, ebp);
    wr32(sp0 - 0x248u, 1u);
    t137 = rd32(sp0 - 0x218u);
    wr32(sp0 - 0x24cu, t137);
    g->ecx = ecx;
    g->esp = sp0 - 0x23cu;
    t138 = cow_call_regs(g, COW_IMG(0x10298ab0u), eax, g->ecx, edx, 1, 4, t137, 1u, ebp, esi);
    t139 = g->ecx;
    t140 = g->edx;
    if (t138 != ebp)
    {
        eax = t138;
        ecx = t139;
        edx = t140;
        edi = t137;
        goto L_102a928d;
    }
    edi = t137;
    t141 = rd32(sp0 - 0x210u) + 1u;
    wr32(sp0 - 0x210u, t141);
    if ((int32_t)(rd32(sp0 - 0x210u) + 1u) < (int32_t)rd32(sp0 - 0x20cu))
    {
        eax = t141;
        edx = rd32(sp0 - 0x220u);
        ebx = ebx + rd32(sp0 - 0x220u);
        loc_210 = t141;
        goto L_102a9183;
    }
    eax = rd32(sp0 - 0x21cu);
    ecx = rd32(sp0 - 0x214u);
L_102a91ef: ;
    wr32(sp0 - 0x21cu, eax + 1u);
    if ((int32_t)(eax + 1u) < (int32_t)rd32(sp0 - 0x208u))
    {
        loc_21c = eax + 1u;
        eax = eax + 1u;
        goto L_102a9170;
    }
    eax = eax + 1u;
    edx = rd32(sp0 - 0x208u);
    edx = (edx & 0xffffff00u) | (uint8_t)loc_224;
L_102a9204: ;
    if ((uint8_t)loc_228 != 0u) goto L_102a9211;
    if ((uint8_t)edx == 0xffu) goto L_102a9263;
L_102a9211: ;
    wr32(sp0 - 0x208u, (uint8_t)loc_228);
    wr32(sp0 - 0x204u, (uint8_t)loc_224);
    g->ecx = (uint8_t)loc_228;
    g->edx = (uint8_t)loc_224;
    g->esp = sp0 - 0x23cu;
    t151 = cow_stdcall(g, COW_IMG(0x102a92f0u), 0);
    t152 = g->ecx;
    t153 = g->edx;
    if (t151 == 0u)
    {
        ecx = t152;
        edx = t153;
    }
    else
    {
        ecx = t152;
        edx = t153;
        wr32(sp0 - 0x240u, 2u);
        wr32(sp0 - 0x244u, 4u);
        wr32(sp0 - 0x248u, sp0 - 0x208u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x228u;
        cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 - 0x208u, 4u, 2u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu));
        t154 = g->ecx;
        t155 = g->edx;
        ecx = t154;
        edx = t155;
    }
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x244u, 0xcu);
    wr32(sp0 - 0x248u, esi);
    g->esp = sp0 - 0x23cu;
    t156 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, esi, 0xcu, 0u);
    t157 = g->edx;
    wr32(sp0 - 0x24cu, esi);
    wr32(sp0 - 0x250u, 2u);
    wr32(sp0 - 0x254u, 4u);
    wr32(sp0 - 0x258u, sp0 - 0x208u);
    g->ecx = sp0 - 0x208u;
    g->esp = sp0 - 0x248u;
    cow_call_regs(g, COW_IMG(0x10298ab0u), t156, g->ecx, t157, 1, 4, sp0 - 0x208u, 4u, 2u, esi);
    t158 = g->ecx;
    t159 = g->edx;
    ecx = t158;
    edx = t159;
L_102a9263: ;
    wr32(sp0 - 0x240u, esi);
    g->edi = edi;
    g->ecx = ecx;
    g->esp = sp0 - 0x234u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
    t160 = g->ecx;
    wr32(sp0 - 0x244u, 0x1fau);
    wr32(sp0 - 0x248u, COW_IMG(0x103be560u));
    t161 = rd32(sp0 - 0x218u);
    wr32(sp0 - 0x24cu, t161);
    g->edx = t161;
    g->esp = sp0 - 0x240u;
    t162 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t161, COW_IMG(0x103be560u), 0x1fau);
    t163 = g->edx;
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    g->edx = t163;
    return (t162 & 0xffffff00u) | (uint8_t)(t162 | 0xffu);
L_102a928d: ;
    wr32(sp0 - 0x240u, 0x1e5u);
    wr32(sp0 - 0x244u, COW_IMG(0x103be560u));
    wr32(sp0 - 0x248u, COW_IMG(0x103b379cu));
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be560u));
    t142 = rd32(sp0 + 8u);
    wr32(sp0 - 0x24cu, t142);
    t143 = rd32(sp0 - 0x21cu);
    wr32(sp0 - 0x250u, t143);
    t144 = rd32(sp0 - 0x210u);
    wr32(sp0 - 0x254u, t144);
    wr32(sp0 - 0x258u, COW_IMG(0x103be5f8u));
    g->ecx = t142;
    g->edx = t143;
    g->esp = sp0 - 0x250u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be5f8u), t144);
    t145 = g->ecx;
    t146 = g->edx;
    wr32(sp0 - 0x25cu, esi);
    g->edi = edi;
    g->ecx = t145;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t146, 1, 3, esi, COW_IMG(0x103be5f8u), rd32(sp0 - 0x254u));
    t147 = g->ecx;
    t148 = g->edx;
    wr32(sp0 - 0x260u, 0x1e7u);
    wr32(sp0 - 0x264u, COW_IMG(0x103be560u));
    wr32(sp0 - 0x268u, edi);
    g->edx = t148;
    g->esp = sp0 - 0x25cu;
    t149 = cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103be560u), 0x1e7u);
    t150 = g->edx;
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    g->edx = t150;
    return t149 & 0xffffff00u;
L_102a9359: ;
    t11 = rd32(edi + 0x24u);
    t12 = rd32(edi + 0x1cu);
    wr32(sp0 - 4u, t12);
    if (t11 == 3u)
    {
        ebx = rd32(edi + 0x20u);
        ebp = t12;
        esi = t11 * rd32(edi + 0x1cu);
        goto L_102a94c3;
    }
    eax = t11 - 3u;
    ebx = rd32(edi + 0x20u);
    ebp = t12;
    esi = t11 * rd32(edi + 0x1cu);
    loc_4 = t12;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102a93a9;
    }
    eax = eax - 1u;
    wr32(sp0 - 0x24u, 0x67u);
    wr32(sp0 - 0x28u, COW_IMG(0x103be71cu));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b27fcu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103be71cu));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103be6fcu));
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be6fcu), COW_IMG(0x103b27fcu));
    t16 = g->ecx;
    t17 = g->edx;
    t18 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x34u, t18);
    g->edi = edi;
    t19 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t17, 1, 3, t18, COW_IMG(0x103be6fcu), COW_IMG(0x103b27fcu));
    t20 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t20;
    return t19 & 0xffffff00u;
L_102a93a9: ;
    wr32(sp0 - 0x24u, 0x47u);
    wr32(sp0 - 0x28u, COW_IMG(0x103be71cu));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b27fcu));
    wr32(sp0 - 0xcu, ebp * 3u);
    g->eax = eax;
    g->ecx = ebp * 3u;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103be71cu));
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x30u, COW_IMG(0x103be6ccu));
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be6ccu), COW_IMG(0x103b27fcu));
    t24 = rd32(edi + 0x20u);
    wr32(sp0 - 0x34u, t24);
    t25 = rd32(edi + 0x1cu);
    wr32(sp0 - 0x38u, t25);
    t26 = rd32(sp0 + 8u);
    wr32(sp0 - 0x3cu, t26);
    wr32(sp0 - 0x40u, COW_IMG(0x103be6b8u));
    t27 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x44u, t27);
    g->ebx = ebx;
    g->ecx = t26;
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t27, 1, 5, t27, COW_IMG(0x103be6b8u), t26, t25, t24);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0x48u, 0x49u);
    wr32(sp0 - 0x4cu, COW_IMG(0x103be71cu));
    t30 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x50u, t30);
    wr32(sp0 - 0x54u, 1u);
    g->ecx = t28;
    t31 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t30, COW_IMG(0x103be71cu), 0x49u, rd32(sp0 - 0x44u), COW_IMG(0x103be6b8u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t32 = g->ecx;
    wr32(sp0 - 8u, t31);
    if (t31 != 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t31;
        loc_8 = t31;
        goto L_102a9440;
    }
    eax = t31;
    ecx = t32;
    edx = t31;
    wr32(sp0 - 0x24u, 0x4au);
    wr32(sp0 - 0x28u, COW_IMG(0x103be71cu));
    wr32(sp0 - 0x2cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t33 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be71cu));
    t34 = g->edx;
    t35 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x30u, t35);
    wr32(sp0 - 0x34u, ebp);
    wr32(sp0 - 0x38u, COW_IMG(0x103be684u));
    g->ecx = t35;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be684u), ebp);
    t36 = g->ecx;
    t37 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x3cu, t37);
    g->edi = edi;
    t38 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t37, 1, 3, t37, COW_IMG(0x103be684u), rd32(sp0 - 0x34u));
    t39 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t39;
    return t38 & 0xffffff00u;
L_102a9440: ;
    if (rd8(sp0 + 4u) == 0u)
    {
        t40 = rd32(edi + 0x28u);
        wr32(sp0 + 8u, esi);
        ebp = t40;
    }
    else
    {
        wr32(sp0 + 8u, -esi);
        ebp = rd32(edi + 0x28u) + (ebx - 1u) * esi;
    }
    if ((int32_t)ebx > 0)
    {
        wr32(sp0 + 4u, ebx);
L_102a9476: ;
        if ((int32_t)rd32(sp0 - 4u) > 0)
        {
            eax = rd32(sp0 - 4u);
            ecx = ebp;
            esi = edx;
            edi = eax;
L_102a9484: ;
            eax = 0u;
L_102a9486: ;
            t41 = rd8(eax + ecx);
            wr8(eax + esi, (uint8_t)t41);
            if ((int32_t)(eax + 1u) < 3)
            {
                eax = eax + 1u;
                ebx = (ebx & 0xffffff00u) | t41;
                goto L_102a9486;
            }
            ebx = (ebx & 0xffffff00u) | t41;
            if (edi != 1u)
            {
                ecx = ecx + 4u;
                esi = esi + 3u;
                edi = edi - 1u;
                goto L_102a9484;
            }
            edi = edi - 1u;
        }
        t42 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x24u, t42);
        t43 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x28u, t43);
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, edx);
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x10298ab0u), t42, g->ecx, edx, 1, 4, edx, 1u, t43, t42);
        t44 = g->edx;
        t45 = rd32(sp0 + 4u) - 1u;
        t46 = rd32(sp0 + 8u);
        t47 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t45);
        if (t47 != 1u)
        {
            ebp = ebp + t46;
            goto L_102a9472;
        }
        ecx = t46;
        edx = t44;
    }
L_102a9520: ;
    t57 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x24u, t57);
    g->edi = edi;
    g->esp = sp0 - 0x18u;
    t58 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, t57, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t59 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t59;
    return (t58 & 0xffffff00u) | (uint8_t)(t58 | 0xffu);
L_102a9472: ;
    edx = rd32(sp0 - 8u);
    goto L_102a9476;
L_102a94c3: ;
    wr32(sp0 - 0x24u, ebx);
    wr32(sp0 - 0x28u, ebp);
    t48 = rd32(sp0 + 8u);
    wr32(sp0 - 0x2cu, t48);
    wr32(sp0 - 0x30u, COW_IMG(0x103be6b8u));
    wr32(sp0 - 0x34u, ecx);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x20u;
    t49 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t48, 1, 5, ecx, COW_IMG(0x103be6b8u), t48, ebp, ebx);
    t50 = g->ecx;
    if (rd8(sp0 + 4u) == 0u)
    {
        eax = (t49 & 0xffffff00u) | rd8(sp0 + 4u);
        edx = rd32(edi + 0x28u);
        t54 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x24u, t54);
        wr32(sp0 - 0x28u, esi * ebx);
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, edx);
        g->ecx = t54;
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x10298ab0u), eax, g->ecx, edx, 1, 4, edx, 1u, esi * ebx, t54);
        t55 = g->ecx;
        t56 = g->edx;
        ecx = t55;
        edx = t56;
    }
    else
    {
        ecx = t50;
        edx = rd32(edi + 0x28u);
        if ((int32_t)(ebx - 1u) >= 0)
        {
            eax = ebx - 1u;
            ebx = edx + (ebx - 1u) * esi;
            edi = eax + 1u;
L_102a94f4: ;
            t51 = rd32(sp0 - 0x10u);
            wr32(sp0 - 0x24u, t51);
            wr32(sp0 - 0x28u, esi);
            wr32(sp0 - 0x2cu, 1u);
            wr32(sp0 - 0x30u, ebx);
            g->ecx = ecx;
            g->esp = sp0 - 0x20u;
            cow_call_regs(g, COW_IMG(0x10298ab0u), t51, g->ecx, edx, 1, 4, ebx, 1u, esi, t51);
            t52 = g->ecx;
            t53 = g->edx;
            if (edi != 1u)
            {
                ecx = t52;
                edx = t53;
                ebx = ebx - esi;
                edi = edi - 1u;
                goto L_102a94f4;
            }
            ecx = t52;
            edx = t53;
            edi = edi - 1u;
        }
    }
    goto L_102a9520;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102988f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102988f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
