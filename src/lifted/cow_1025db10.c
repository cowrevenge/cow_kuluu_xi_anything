/* f_0x1025db10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1025db10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025dcfcu: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1025dcfc;
    case 0x1025dd1du: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1025dd1d;
    default: break;
    }
#endif

    COW_AT(1025db10)
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = rd32(t1);
    t4 = cow_thiscall(g, rd32(t3 + 0xfcu), t3, 4, t1, 0u, 0x12u, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    t7 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t8 = g->ecx;
    g->edx = rd32(t7);
    t9 = rd32(t7);
    t10 = cow_thiscall(g, rd32(t9 + 0xfcu), t8, 4, t7, 1u, 0x12u, 1u);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t14 = g->edx;
    g->edx = t14;
    t15 = rd32(t13);
    t16 = cow_thiscall(g, rd32(t15 + 0xfcu), t15, 4, t13, 0u, 1u, 5u);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    t19 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t20 = g->ecx;
    g->edx = rd32(t19);
    t21 = rd32(t19);
    t22 = cow_thiscall(g, rd32(t21 + 0xfcu), t20, 4, t19, 1u, 1u, 1u);
    t23 = g->ecx;
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t26 = g->edx;
    g->edx = t26;
    t27 = rd32(t25);
    t28 = cow_thiscall(g, rd32(t27 + 0xfcu), t27, 4, t25, 0u, 4u, 5u);
    t29 = g->ecx;
    t30 = g->edx;
    g->ecx = t29;
    t31 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t32 = g->ecx;
    g->edx = rd32(t31);
    t33 = rd32(t31);
    t34 = cow_thiscall(g, rd32(t33 + 0xfcu), t32, 4, t31, 1u, 4u, 1u);
    t35 = g->ecx;
    t36 = g->edx;
    g->edx = t36;
    t37 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t38 = g->edx;
    g->edx = t38;
    t39 = rd32(t37);
    t40 = cow_thiscall(g, rd32(t39 + 0xfcu), t39, 4, t37, 0u, 2u, 2u);
    t41 = g->ecx;
    t42 = g->edx;
    g->ecx = t41;
    t43 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t44 = g->ecx;
    g->edx = rd32(t43);
    t45 = rd32(t43);
    t46 = cow_thiscall(g, rd32(t45 + 0xfcu), t44, 4, t43, 1u, 2u, 2u);
    t47 = g->ecx;
    t48 = g->edx;
    g->edx = t48;
    t49 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t50 = g->edx;
    g->edx = t50;
    t51 = rd32(t49);
    t52 = cow_thiscall(g, rd32(t51 + 0xfcu), t51, 4, t49, 0u, 3u, 1u);
    t53 = g->ecx;
    t54 = g->edx;
    g->ecx = t53;
    t55 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t56 = g->ecx;
    g->edx = rd32(t55);
    t57 = rd32(t55);
    t58 = cow_thiscall(g, rd32(t57 + 0xfcu), t56, 4, t55, 1u, 3u, 1u);
    t59 = g->ecx;
    t60 = g->edx;
    g->edx = t60;
    t61 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t62 = g->edx;
    g->edx = t62;
    t63 = rd32(t61);
    t64 = cow_thiscall(g, rd32(t63 + 0xfcu), t63, 4, t61, 0u, 5u, 2u);
    t65 = g->ecx;
    t66 = g->edx;
    g->ecx = t65;
    t67 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t68 = g->ecx;
    g->edx = rd32(t67);
    t69 = rd32(t67);
    t70 = cow_thiscall(g, rd32(t69 + 0xfcu), t68, 4, t67, 1u, 5u, 2u);
    t71 = g->ecx;
    t72 = g->edx;
    g->edx = t72;
    t73 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t74 = g->edx;
    g->edx = t74;
    t75 = rd32(t73);
    t76 = cow_thiscall(g, rd32(t75 + 0xfcu), t75, 4, t73, 0u, 6u, 1u);
    t77 = g->ecx;
    t78 = g->edx;
    g->ecx = t77;
    t79 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t80 = g->ecx;
    g->edx = rd32(t79);
    t81 = rd32(t79);
    t82 = cow_thiscall(g, rd32(t81 + 0xfcu), t80, 4, t79, 1u, 6u, 1u);
    t83 = g->ecx;
    t84 = g->edx;
    g->edx = t84;
    t85 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t86 = g->edx;
    g->edx = t86;
    t87 = rd32(t85);
    t88 = cow_thiscall(g, rd32(t87 + 0xc8u), t87, 3, t85, 0x16u, 1u);
    t89 = g->ecx;
    t90 = g->edx;
    g->ecx = t89;
    t91 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t92 = g->ecx;
    g->edx = rd32(t91);
    t93 = rd32(t91);
    t94 = cow_thiscall(g, rd32(t93 + 0xc8u), t92, 3, t91, 7u, 0u);
    t95 = g->ecx;
    t96 = g->edx;
    g->edx = t96;
    t97 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t98 = g->edx;
    g->edx = t98;
    t99 = rd32(t97);
    t100 = cow_thiscall(g, rd32(t99 + 0xc8u), t99, 3, t97, 0xeu, 0u);
    t101 = g->ecx;
    t102 = g->edx;
    g->ecx = t101;
    t103 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t104 = g->ecx;
    g->edx = rd32(t103);
    t105 = rd32(t103);
    t106 = cow_thiscall(g, rd32(t105 + 0xc8u), t104, 3, t103, 0x1bu, 1u);
    t107 = g->ecx;
    t108 = g->edx;
    g->edx = t108;
    t109 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t110 = g->edx;
    g->edx = t110;
    t111 = rd32(t109);
    t112 = cow_thiscall(g, rd32(t111 + 0xc8u), t111, 3, t109, 0xfu, 1u);
    t113 = g->ecx;
    t114 = g->edx;
    g->ecx = t113;
    t115 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t116 = g->ecx;
    g->edx = rd32(t115);
    t117 = rd32(t115);
    t118 = cow_thiscall(g, rd32(t117 + 0xc8u), t116, 3, t115, 0x19u, 5u);
    t119 = g->ecx;
    t120 = g->edx;
    g->edx = t120;
    t121 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t122 = g->edx;
    g->edx = t122;
    t123 = rd32(t121);
    t124 = cow_thiscall(g, rd32(t123 + 0xc8u), t123, 3, t121, 0x18u, 0u);
    t125 = g->ecx;
    t126 = g->edx;
    g->ecx = t125;
    t127 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t128 = g->ecx;
    g->edx = rd32(t127);
    t129 = rd32(t127);
    t130 = cow_thiscall(g, rd32(t129 + 0xc8u), t128, 3, t127, 0xabu, 1u);
    t131 = g->ecx;
    t132 = g->edx;
    g->edx = t132;
    t133 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t134 = g->edx;
    g->edx = t134;
    t135 = rd32(t133);
    t136 = cow_thiscall(g, rd32(t135 + 0xc8u), t135, 3, t133, 0x13u, 5u);
    t137 = g->ecx;
    t138 = g->edx;
    g->ecx = t137;
    t139 = cow_stdcall(g, COW_IMG(0x1025d770u), 0);
    t140 = g->ecx;
    g->edx = rd32(t139);
    t141 = rd32(t139);
    cow_thiscall(g, rd32(t141 + 0xc8u), t140, 3, t139, 0x14u, 2u);
    t142 = g->edx;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x10669470u))) + 0x24u), rd32(COW_IMG(0x10669470u)), 0);
    ebx = 0x1fu;
    esi = COW_IMG(0x10669488u);
    edi = 0x12cu;
L_1025dcfc: ;
    COW_AT(1025dcfc)
    g->eax = esi - 0x10u;
    g->esp = sp0 - 0xcu;
    t143 = cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x10669470u))) + 0x20u), rd32(COW_IMG(0x10669470u)), 5, 0x10u, edi - 0x19u, esi, esi - 0x10u, 0u);
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 0x810u;
        edi = edi - 0x19u;
        goto L_1025dcfc;
    }
    eax = t143;
    COW_AT(1025dd1d)
    g->edx = rd32(rd32(COW_IMG(0x10669470u)));
    t144 = rd32(rd32(COW_IMG(0x10669470u)));
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t144 + 0x28u), rd32(COW_IMG(0x10669470u)), 0);
    t145 = g->edx;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t145;
    return cow_tailcall(g, rd32(rd32(rd32(COW_IMG(0x10669470u))) + 0x2cu), rd32(rd32(COW_IMG(0x10669470u))), rd32(COW_IMG(0x10669470u)), t145);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025db10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025dcfcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1025dd1du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025db10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025db10(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
