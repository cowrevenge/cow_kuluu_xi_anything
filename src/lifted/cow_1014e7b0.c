/* f_0x1014e7b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1014e7b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014e7c4u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e7c4;
    case 0x1014e7d3u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e7d3;
    case 0x1014e7f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e7f3;
    case 0x1014e7fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e7fa;
    case 0x1014e81cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e81c;
    case 0x1014e830u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e830;
    case 0x1014e83du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e83d;
    case 0x1014e84eu: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e84e;
    case 0x1014e855u: in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e855;
    case 0x1014e86du: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e86d;
    case 0x1014e889u: in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e889;
    case 0x1014e8a1u: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e8a1;
    case 0x1014e8bdu: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e8bd;
    case 0x1014e8d9u: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e8d9;
    case 0x1014e8f5u: in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e8f5;
    case 0x1014e903u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e903;
    case 0x1014e915u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e915;
    case 0x1014e923u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e923;
    case 0x1014e936u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e936;
    case 0x1014e954u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e954;
    case 0x1014e970u: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e970;
    case 0x1014e98cu: in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e98c;
    case 0x1014e9a4u: in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e9a4;
    case 0x1014e9b2u: in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e9b2;
    case 0x1014e9c0u: in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e9c0;
    case 0x1014e9ceu: edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e9ce;
    case 0x1014e9dcu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e9dc;
    case 0x1014e9fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014e9fb;
    case 0x1014ea02u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014ea02;
    case 0x1014ea32u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014ea32;
    case 0x1014ea56u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014ea56;
    default: break;
    }
#endif

    COW_AT(1014e7b0)
    if ((uint32_t)(int16_t)arg1 - 3u > 0x19u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_1014ea56;
    }
    COW_AT(1014e7c4)
    t1 = rd32(COW_IMG(0x1014ea5cu) + rd8(COW_IMG(0x1014ea6cu) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x1014e7d3u: goto L_1014e7d3;
    case 0x1014e830u: goto L_1014e830;
    case 0x1014e9dcu: goto L_1014e9dc;
    case 0x1014ea56u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_1014ea56;
    default: rt_fatal(g, COW_IMG(0x1014e7ccu), "switch");
    }
    return 0;
L_1014e7d3: ;
    COW_AT(1014e7d3)
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371b4cu), 1u, 0u);
    t107 = g->ecx;
    if (rd32(rd32(COW_IMG(0x1057823cu)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
    }
    else
    {
        ecx = t107;
        edx = rd32(COW_IMG(0x1057823cu));
    COW_AT(1014e7f3)
        if (rd32(self + 8u) == 0u)
        {
            eax = rd32(self + 8u);
        }
        else
        {
            eax = rd32(self + 8u);
    COW_AT(1014e7fa)
            t108 = (eax & 0xffff0000u) | rd16(eax + 0x4cu);
            g->esp = sp0 - 8u;
            t109 = cow_call_regs(g, COW_IMG(0x101403d0u), t108, g->ecx, edx, 1, 1, t108);
            t110 = g->edx;
            t111 = (t109 & 0xffff0000u) | (uint8_t)t109;
            g->esp = sp0 - 4u;
            t112 = cow_call_regs(g, COW_IMG(0x10118db0u), t111, rd32(rd32(COW_IMG(0x1057823cu)) + 8u), g->edx, 0, 2, t111, 0u);
            eax = t112;
        }
    }
    COW_AT(1014e81c)
    t113 = rd32(self + 8u);
    g->edx = t113;
    g->esp = sp0 - 4u;
    t114 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t113, 1u);
    t115 = g->edx;
    g->esi = in_esi;
    g->edx = t115;
    return t114;
L_1014e830: ;
    COW_AT(1014e830)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_1014ea56;
    }
    COW_AT(1014e83d)
    if ((uint32_t)(int16_t)arg2 - 1u > 0xeu)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1014ea56;
    }
    COW_AT(1014e84e)
    t20 = rd32(COW_IMG(0x1014ea88u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t20 - RD)
    {
    case 0x1014e855u: goto L_1014e855;
    case 0x1014e86du: goto L_1014e86d;
    case 0x1014e889u: goto L_1014e889;
    case 0x1014e8a1u: goto L_1014e8a1;
    case 0x1014e8bdu: goto L_1014e8bd;
    case 0x1014e8d9u: goto L_1014e8d9;
    case 0x1014e8f5u: goto L_1014e8f5;
    case 0x1014e970u: goto L_1014e970;
    case 0x1014e98cu: goto L_1014e98c;
    case 0x1014e9a4u: goto L_1014e9a4;
    case 0x1014e9b2u: goto L_1014e9b2;
    case 0x1014e9c0u: goto L_1014e9c0;
    case 0x1014e9ceu: goto L_1014e9ce;
    default: rt_fatal(g, COW_IMG(0x1014e84eu), "switch");
    }
    return 0;
L_1014e855: ;
    COW_AT(1014e855)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t102 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x10371b40u), 0u);
    t103 = g->ecx;
    t104 = g->edx;
    g->edx = t104;
    t105 = cow_thiscall(g, COW_IMG(0x10037b90u), t103, 0);
    t106 = g->edx;
    g->esi = in_esi;
    g->edx = t106;
    return t105;
L_1014e86d: ;
    COW_AT(1014e86d)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t97 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371b2cu), 1u, 0u);
    t98 = g->ecx;
    t99 = g->edx;
    g->edx = t99;
    t100 = cow_thiscall(g, COW_IMG(0x10037b90u), t98, 0);
    t101 = g->edx;
    g->esi = in_esi;
    g->edx = t101;
    return t100;
L_1014e889: ;
    COW_AT(1014e889)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t92 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x10371b24u), 0u);
    t93 = g->ecx;
    t94 = g->edx;
    g->edx = t94;
    t95 = cow_thiscall(g, COW_IMG(0x10037b90u), t93, 0);
    t96 = g->edx;
    g->esi = in_esi;
    g->edx = t96;
    return t95;
L_1014e8a1: ;
    COW_AT(1014e8a1)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t87 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371b10u), 1u, 0u);
    t88 = g->ecx;
    t89 = g->edx;
    g->edx = t89;
    t90 = cow_thiscall(g, COW_IMG(0x10037b90u), t88, 0);
    t91 = g->edx;
    g->esi = in_esi;
    g->edx = t91;
    return t90;
L_1014e8bd: ;
    COW_AT(1014e8bd)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t82 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371afcu), 1u, 0u);
    t83 = g->ecx;
    t84 = g->edx;
    g->edx = t84;
    t85 = cow_thiscall(g, COW_IMG(0x10037b90u), t83, 0);
    t86 = g->edx;
    g->esi = in_esi;
    g->edx = t86;
    return t85;
L_1014e8d9: ;
    COW_AT(1014e8d9)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t77 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371ae8u), 1u, 0u);
    t78 = g->ecx;
    t79 = g->edx;
    g->edx = t79;
    t80 = cow_thiscall(g, COW_IMG(0x10037b90u), t78, 0);
    t81 = g->edx;
    g->esi = in_esi;
    g->edx = t81;
    return t80;
L_1014e8f5: ;
    COW_AT(1014e8f5)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t49 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    t50 = g->ecx;
    t51 = g->edx;
    if ((uint8_t)t49 == 0u)
    {
        eax = t49;
        edx = t51;
        goto L_1014e954;
    }
    ecx = t50;
    edx = t51;
    COW_AT(1014e903)
    g->eax = rd32(COW_IMG(0x104dfd98u));
    g->ecx = ecx;
    g->edx = edx;
    t52 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 4u;
    t53 = cow_cdecl(g, COW_IMG(0x100f9680u), 1, t52);
    t54 = g->ecx;
    t55 = g->edx;
    if ((uint8_t)t53 != 0u)
    {
        eax = t53;
        edx = t55;
        goto L_1014e923;
    }
    eax = t53;
    ecx = t54;
    edx = t55;
    COW_AT(1014e915)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t56 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t57 = g->ecx;
    t58 = g->edx;
    g->edx = t58;
    t59 = cow_thiscall(g, COW_IMG(0x10037b90u), t57, 0);
    t60 = g->edx;
    g->esi = in_esi;
    g->edx = t60;
    return t59;
L_1014e923: ;
    COW_AT(1014e923)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t61 = cow_cdecl(g, COW_IMG(0x100f9600u), 1, rd32(COW_IMG(0x104dfd98u)));
    t62 = g->edx;
    if (t61 == 0u)
    {
        eax = t61;
        edx = t62;
        goto L_1014e954;
    }
    eax = t61;
    edx = t62;
    COW_AT(1014e936)
    g->eax = eax;
    g->edx = edx;
    t63 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 4u;
    t64 = cow_thiscall(g, COW_IMG(0x10129e30u), t63, 1, 0xbcu);
    t65 = g->ecx;
    t66 = g->edx;
    g->edx = t66;
    t67 = cow_thiscall(g, COW_IMG(0x10037c50u), t65, 0);
    t68 = g->ecx;
    t69 = g->edx;
    g->edx = t69;
    t70 = cow_thiscall(g, COW_IMG(0x10037b90u), t68, 0);
    t71 = g->edx;
    g->esi = in_esi;
    g->edx = t71;
    return t70;
L_1014e954: ;
    COW_AT(1014e954)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t72 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371ad4u), 1u, 0u);
    t73 = g->ecx;
    t74 = g->edx;
    g->edx = t74;
    t75 = cow_thiscall(g, COW_IMG(0x10037b90u), t73, 0);
    t76 = g->edx;
    g->esi = in_esi;
    g->edx = t76;
    return t75;
L_1014e970: ;
    COW_AT(1014e970)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t44 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371ac0u), 1u, 0u);
    t45 = g->ecx;
    t46 = g->edx;
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x10037b90u), t45, 0);
    t48 = g->edx;
    g->esi = in_esi;
    g->edx = t48;
    return t47;
L_1014e98c: ;
    COW_AT(1014e98c)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t39 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x10371ab8u), 0u);
    t40 = g->ecx;
    t41 = g->edx;
    g->edx = t41;
    t42 = cow_thiscall(g, COW_IMG(0x10037b90u), t40, 0);
    t43 = g->edx;
    g->esi = in_esi;
    g->edx = t43;
    return t42;
L_1014e9a4: ;
    COW_AT(1014e9a4)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t34 = cow_thiscall(g, COW_IMG(0x10160960u), arg2, 0);
    t35 = g->ecx;
    t36 = g->edx;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x10037b90u), t35, 0);
    t38 = g->edx;
    g->esi = in_esi;
    g->edx = t38;
    return t37;
L_1014e9b2: ;
    COW_AT(1014e9b2)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t29 = cow_thiscall(g, COW_IMG(0x101609f0u), arg2, 0);
    t30 = g->ecx;
    t31 = g->edx;
    g->edx = t31;
    t32 = cow_thiscall(g, COW_IMG(0x10037b90u), t30, 0);
    t33 = g->edx;
    g->esi = in_esi;
    g->edx = t33;
    return t32;
L_1014e9c0: ;
    COW_AT(1014e9c0)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t24 = cow_stdcall(g, COW_IMG(0x102174c0u), 0);
    t25 = g->ecx;
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x10037b90u), t25, 0);
    t28 = g->edx;
    g->esi = in_esi;
    g->edx = t28;
    return t27;
L_1014e9ce: ;
    COW_AT(1014e9ce)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = rd32(self);
    t21 = rd32(self);
    g->esp = sp0 - 4u;
    t22 = cow_thiscall(g, rd32(t21 + 0x18u), self, 2, 4u, arg2);
    t23 = g->edx;
    g->esi = in_esi;
    g->edx = t23;
    return t22;
L_1014e9dc: ;
    COW_AT(1014e9dc)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371b4cu), 0u, 0u);
    t2 = g->edx;
    if (rd32(rd32(COW_IMG(0x1057823cu)) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x1057823cu));
        edx = t2;
    }
    else
    {
        ecx = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
        edx = t2;
    COW_AT(1014e9fb)
        if (rd32(self + 8u) == 0u)
        {
            eax = rd32(self + 8u);
        }
        else
        {
            eax = rd32(self + 8u);
    COW_AT(1014ea02)
            t3 = (eax & 0xffff0000u) | rd16(eax + 0x4cu);
            g->ecx = ecx;
            g->esp = sp0 - 8u;
            t4 = cow_call_regs(g, COW_IMG(0x101403d0u), t3, g->ecx, edx, 1, 1, t3);
            t5 = g->ecx;
            t6 = (t5 & 0xffff0000u) | (uint8_t)t4;
            g->edx = rd32(COW_IMG(0x1057823cu));
            t7 = rd32(COW_IMG(0x1057823cu));
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10118db0u), t4, rd32(t7 + 8u), g->edx, 0, 2, t6, 0u);
            t8 = g->edx;
            g->eax = rd32(COW_IMG(0x1057823cu));
            g->edx = t8;
            t9 = rd32(COW_IMG(0x1057823cu));
            t10 = cow_thiscall(g, COW_IMG(0x10118830u), rd32(t9 + 8u), 0);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
    }
    COW_AT(1014ea32)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10371b4cu));
    t13 = g->edx;
    t14 = rd32(self + 8u);
    g->edx = t13;
    t15 = cow_call_regs(g, COW_IMG(0x1015e790u), t12, COW_IMG(0x10621838u), g->edx, 0, 2, t14, 1u);
    t16 = g->ecx;
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x10037bf0u), t16, 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
L_1014ea56: ;
    COW_AT(1014ea56)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014e7b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014e7c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1014e7d3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1014e7f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014e7fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014e81cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014e830u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014e83du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014e84eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014e855u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014e86du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014e889u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014e8a1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014e8bdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014e8d9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014e8f5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014e903u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014e915u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014e923u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014e936u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014e954u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014e970u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014e98cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014e9a4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014e9b2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014e9c0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014e9ceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1014e9dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1014e9fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014ea02u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014ea32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014ea56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1014e7b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1014e7b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
