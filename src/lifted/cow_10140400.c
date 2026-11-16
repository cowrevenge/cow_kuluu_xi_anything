/* f_0x10140400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10140400(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 3u > 0x19u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_101406e3;
    }
    t1 = rd32(COW_IMG(0x101406e8u) + rd8(COW_IMG(0x101406f8u) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x10140423u: goto L_10140423;
    case 0x1014047bu: goto L_1014047b;
    case 0x101406d3u: goto L_101406d3;
    case 0x101406e3u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_101406e3;
    default: rt_fatal(g, COW_IMG(0x1014041cu), "switch");
    }
    return 0;
L_10140423: ;
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->esp = sp0 - 8u;
    t121 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10370068u), 1u, 0u);
    t122 = g->ecx;
    if (rd32(rd32(COW_IMG(0x10578468u)) + 8u) == 0u)
    {
        eax = t121;
    }
    else
    {
        ecx = t122;
        edx = rd32(COW_IMG(0x10578468u));
        edi = rd32(rd32(COW_IMG(0x10578468u)) + 8u);
        if (rd32(self + 8u) == 0u)
        {
            eax = rd32(self + 8u);
        }
        else
        {
            eax = rd32(self + 8u);
            t123 = (eax & 0xffffff00u) | rd8(eax + 0x4cu);
            g->ecx = ecx;
            g->esp = sp0 - 0xcu;
            t124 = cow_call_regs(g, COW_IMG(0x101403a0u), t123, g->ecx, edx, 1, 1, t123);
            t125 = g->ecx;
            t126 = g->edx;
            t127 = (t125 & 0xffff0000u) | (uint8_t)t124;
            g->esp = sp0 - 8u;
            t128 = cow_call_regs(g, COW_IMG(0x10118db0u), t124, edi, g->edx, 0, 2, t127, 0u);
            eax = t128;
        }
    }
    t129 = rd32(self + 8u);
    g->edx = t129;
    g->esp = sp0 - 8u;
    t130 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t129, 1u);
    t131 = g->edx;
    g->edx = t131;
    return t130;
L_1014047b: ;
    if ((uint32_t)(int16_t)arg2 - 1u > 0xeu)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101406e3;
    }
    t5 = rd32(COW_IMG(0x10140714u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t5 - RD)
    {
    case 0x10140493u: goto L_10140493;
    case 0x101404d5u: goto L_101404d5;
    case 0x10140539u: goto L_10140539;
    case 0x10140555u: goto L_10140555;
    case 0x1014058cu: goto L_1014058c;
    case 0x101405c4u: goto L_101405c4;
    case 0x101405d2u: goto L_101405d2;
    case 0x101405eeu: goto L_101405ee;
    case 0x10140626u: goto L_10140626;
    case 0x10140653u: goto L_10140653;
    case 0x10140691u: goto L_10140691;
    case 0x101406adu: goto L_101406ad;
    case 0x101406c5u: goto L_101406c5;
    default: rt_fatal(g, COW_IMG(0x1014048cu), "switch");
    }
    return 0;
L_10140493: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t107 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t108 = g->edx;
    if ((uint8_t)t107 == 0u)
    {
        edx = t108;
        goto L_101404b2;
    }
    eax = t107;
    edx = t108;
    g->eax = eax;
    g->edx = edx;
    t109 = rd32(COW_IMG(0x105782b0u));
    g->esp = sp0 - 4u;
    t110 = cow_thiscall(g, COW_IMG(0x10144d10u), t109, 1, 0u);
    t111 = g->ecx;
    t112 = g->edx;
    g->edx = t112;
    t113 = cow_thiscall(g, COW_IMG(0x10037b90u), t111, 0);
    t114 = g->edx;
    g->edx = t114;
    return t113;
L_101404b2: ;
    t115 = rd32(COW_IMG(0x105783e4u));
    wr8(t115 + 0x1cu, 1u);
    g->eax = t115;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t116 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f818u), 1u, 0u);
    t117 = g->ecx;
    t118 = g->edx;
    eax = t116;
    ecx = t117;
    edx = t118;
L_101404cc: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t119 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t120 = g->edx;
    g->edx = t120;
    return t119;
L_101404d5: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t88 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t89 = g->ecx;
    t90 = g->edx;
    if ((uint8_t)t88 == 0u)
    {
        eax = t88;
        ecx = t89;
        edx = t90;
        goto L_101404ec;
    }
    eax = t88;
    ecx = t89;
    edx = t90;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t91 = cow_stdcall(g, COW_IMG(0x10141ba0u), 0);
    t92 = g->ecx;
    t93 = g->edx;
    g->edx = t93;
    t94 = cow_thiscall(g, COW_IMG(0x10037b90u), t92, 0);
    t95 = g->edx;
    g->edx = t95;
    return t94;
L_101404ec: ;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u)) goto L_10140509;
    if (rd8(COW_IMG(0x10485640u)) == 0x12u)
    {
        eax = (eax & 0xffffff00u) | 0x12u;
        goto L_1014051d;
    }
    eax = (eax & 0xffffff00u) | 0x12u;
    if (rd8(COW_IMG(0x10485642u)) == (uint8_t)eax) goto L_1014051d;
L_10140509: ;
    g->ecx = rd32(COW_IMG(0x105781a8u));
    g->edx = edx;
    t101 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 4u;
    t102 = cow_call_regs(g, COW_IMG(0x10133130u), eax, g->ecx, g->edx, 1, 0);
    t103 = g->ecx;
    t104 = g->edx;
    g->edx = t104;
    t105 = cow_thiscall(g, COW_IMG(0x10037b90u), t103, 0);
    t106 = g->edx;
    g->edx = t106;
    return t105;
L_1014051d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t96 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10370054u), 1u, 0u);
    t97 = g->ecx;
    t98 = g->edx;
    g->edx = t98;
    t99 = cow_thiscall(g, COW_IMG(0x10037b90u), t97, 0);
    t100 = g->edx;
    g->edx = t100;
    return t99;
L_10140539: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t83 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10370040u), 1u, 0u);
    t84 = g->ecx;
    t85 = g->edx;
    g->edx = t85;
    t86 = cow_thiscall(g, COW_IMG(0x10037b90u), t84, 0);
    t87 = g->edx;
    g->edx = t87;
    return t86;
L_10140555: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0 - 4u;
    t75 = cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e2cu)), 2, 0u, 1u);
    wr8(rd32(COW_IMG(0x10663740u)) + 0x90u, 1u);
    g->edx = rd32(COW_IMG(0x10663754u));
    t76 = rd32(COW_IMG(0x10663740u));
    t77 = rd32(COW_IMG(0x10663754u));
    t78 = cow_thiscall(g, COW_IMG(0x101f23a0u), t76, 1, t77);
    t79 = g->ecx;
    t80 = g->edx;
    g->edx = t80;
    t81 = cow_thiscall(g, COW_IMG(0x10037b90u), t79, 0);
    t82 = g->edx;
    g->edx = t82;
    return t81;
L_1014058c: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t63 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t64 = g->edx;
    if ((uint8_t)t63 == 0u)
    {
        eax = t63;
        edx = t64;
        goto L_101405b1;
    }
    eax = t63;
    edx = t64;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t65 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037002cu), 1u, 0u);
    t66 = g->ecx;
    t67 = g->edx;
    g->edx = t67;
    t68 = cow_thiscall(g, COW_IMG(0x10037b90u), t66, 0);
    t69 = g->edx;
    g->edx = t69;
    return t68;
L_101405b1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t70 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036ff80u), 1u, 0u);
    t71 = g->ecx;
    t72 = g->edx;
    g->edx = t72;
    t73 = cow_thiscall(g, COW_IMG(0x10037b90u), t71, 0);
    t74 = g->edx;
    g->edx = t74;
    return t73;
L_101405c4: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t58 = cow_stdcall(g, COW_IMG(0x102016e0u), 0);
    t59 = g->ecx;
    t60 = g->edx;
    g->edx = t60;
    t61 = cow_thiscall(g, COW_IMG(0x10037b90u), t59, 0);
    t62 = g->edx;
    g->edx = t62;
    return t61;
L_101405d2: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t53 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10370018u), 1u, 0u);
    t54 = g->ecx;
    t55 = g->edx;
    g->edx = t55;
    t56 = cow_thiscall(g, COW_IMG(0x10037b90u), t54, 0);
    t57 = g->edx;
    g->edx = t57;
    return t56;
L_101405ee: ;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t39 = cow_call_regs(g, COW_IMG(0x101cc350u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 1u, 1u);
    t40 = g->ecx;
    t41 = g->edx;
    if ((uint8_t)t39 == 0u)
    {
        eax = t39;
        edx = t41;
        goto L_1014060c;
    }
    eax = t39;
    ecx = t40;
    edx = t41;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t42 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t43 = g->ecx;
    t44 = g->edx;
    g->edx = t44;
    t45 = cow_thiscall(g, COW_IMG(0x10037b90u), t43, 0);
    t46 = g->edx;
    g->edx = t46;
    return t45;
L_1014060c: ;
    g->eax = eax;
    g->edx = edx;
    t47 = rd32(COW_IMG(0x10663520u));
    g->esp = sp0 - 4u;
    t48 = cow_thiscall(g, COW_IMG(0x101e4470u), t47, 3, 0u, 0u, 0u);
    t49 = g->ecx;
    t50 = g->edx;
    g->edx = t50;
    t51 = cow_thiscall(g, COW_IMG(0x10037b90u), t49, 0);
    t52 = g->edx;
    g->edx = t52;
    return t51;
L_10140626: ;
    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10664494u));
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t32 = cow_thiscall(g, COW_IMG(0x1020a600u), ecx, 1, 0u);
        t33 = g->edx;
        eax = t32;
        edx = t33;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t34 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10370004u), 1u, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x10037b90u), t35, 0);
    t38 = g->edx;
    g->edx = t38;
    return t37;
L_10140653: ;
    if (rd32(self + 0x14u) != 1u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        ecx = arg2;
        edx = in_edx;
        goto L_1014067e;
    }
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t19 = cow_stdcall(g, COW_IMG(0x100f0c50u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_1014067e;
    }
    eax = t19;
    edx = t21;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t22 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036fff0u), 1u, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x10037b90u), t23, 0);
    t26 = g->edx;
    g->edx = t26;
    return t25;
L_1014067e: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t27 = cow_cdecl(g, COW_IMG(0x101f7810u), 1, 0u);
    t28 = g->ecx;
    t29 = g->edx;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x10037b90u), t28, 0);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_10140691: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036ffdcu), 1u, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x10037b90u), t15, 0);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_101406ad: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x1013fe70u), self, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_101404cc;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101406c5: ;
    g->eax = rd32(self);
    g->edx = in_edx;
    t6 = rd32(self);
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, rd32(t6 + 0x18u), self, 2, 4u, arg2);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_101406d3: ;
    t2 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x1015e790u), (uint32_t)(int16_t)arg1 - 3u, COW_IMG(0x10621838u), g->edx, 0, 2, t2, 1u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_101406e3: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10140400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10140400(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
