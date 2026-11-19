/* f_0x10286fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10286fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10286fc8u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10286fc8;
    case 0x10286fe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10286fe2;
    case 0x10287197u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10287197;
    case 0x102871c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102871c5;
    case 0x102871d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102871d0;
    case 0x102871e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102871e2;
    case 0x102871e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102871e7;
    case 0x102871f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102871f4;
    case 0x1028720au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028720a;
    case 0x10287236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10287236;
    default: break;
    }
#endif

    COW_AT(10286fb0)
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2788u));
        ecx = self;
        edx = in_edx;
        ebx = rd32(sp0 + 8u) + 0x14u;
        esi = rd32(sp0 + 0xcu);
        edi = rd32(sp0 + 8u);
    }
    else
    {
        eax = rd32(COW_IMG(0x109a2788u));
        ebx = rd32(sp0 + 8u) + 0x14u;
        esi = rd32(sp0 + 0xcu);
        edi = rd32(sp0 + 8u);
    COW_AT(10286fc8)
        g->eax = eax;
        g->ecx = self;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, esi, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->ebx = ebx;
        g->eax = rd32(COW_IMG(0x109a2788u));
        g->ecx = t2;
        t4 = rd32(COW_IMG(0x109a2788u));
        g->esp = sp0 - 0xcu;
        t5 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, t4, COW_IMG(0x103b86a8u), t1, esi, in_edi);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    COW_AT(10286fe2)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, esi, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 + 0xcu, t8);
    g->ebx = ebx;
    g->ecx = t9;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x102860e0u), g->eax, g->ecx, t10, 1, 6, edi, esi, esi, in_edi, in_esi, in_ebp);
    t12 = g->ecx;
    t13 = g->edx;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x10287300u), g->eax, g->ecx, t13, 1, 6, ebx, esi, edi, esi, esi, in_edi);
    t15 = g->edx;
    t16 = rd32(edi + 0x4cu);
    g->ecx = t16;
    g->edx = t15;
    g->esp = sp0 - 0x24u;
    t17 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t16);
    t18 = g->ecx;
    t19 = g->edx;
    g->ecx = t18;
    g->esp = sp0 - 0x18u;
    t20 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t17, esi, arg1, t16, ebx, esi, edi);
    t21 = g->ecx;
    t22 = rd32(edi + 0x50u);
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0x34u;
    t23 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t22);
    t24 = g->ecx;
    t25 = g->edx;
    g->ecx = t24;
    g->edx = t25;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t23, esi, arg1, t22, t17, esi, arg1);
    t26 = g->ecx;
    t27 = g->edx;
    t28 = rd32(edi + 0x54u);
    g->eax = t28;
    g->ecx = t26;
    g->edx = t27;
    g->esp = sp0 - 0x44u;
    t29 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t28);
    t30 = g->ecx;
    t31 = g->edx;
    g->edx = t31;
    g->esp = sp0 - 0x38u;
    t32 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t29, esi, arg1, t28, t23, esi, arg1);
    t33 = g->edx;
    t34 = rd32(edi + 0x58u);
    g->ecx = t34;
    g->edx = t33;
    g->esp = sp0 - 0x10u;
    t35 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t34);
    t36 = g->ecx;
    t37 = g->edx;
    g->ecx = t36;
    g->esp = sp0 - 4u;
    t38 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t35, esi, arg1, t34, in_edi, in_esi, in_ebp);
    t39 = g->ecx;
    t40 = rd32(edi + 0x5cu);
    g->ecx = t39;
    g->edx = t40;
    g->esp = sp0 - 0x20u;
    t41 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t40);
    t42 = g->ecx;
    t43 = g->edx;
    g->ecx = t42;
    g->edx = t43;
    g->esp = sp0 - 0x14u;
    t44 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t41, esi, arg1, t40, t35, esi, arg1);
    t45 = g->ecx;
    t46 = g->edx;
    g->ecx = t45;
    g->edx = t46;
    g->esp = sp0 - 0x30u;
    t47 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, 0u);
    t48 = g->ecx;
    t49 = g->edx;
    g->ecx = t48;
    g->edx = t49;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t47, esi, arg1, 0u, t41, esi, arg1);
    t50 = g->ecx;
    t51 = g->edx;
    t52 = rd32(edi + 0x64u);
    g->eax = t52;
    g->ecx = t50;
    g->edx = t51;
    g->esp = sp0 - 0x40u;
    t53 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t52);
    t54 = g->ecx;
    t55 = g->edx;
    g->ecx = t54;
    g->edx = t55;
    g->esp = sp0 - 0x34u;
    t56 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t53, esi, arg1, t52, t47, esi, arg1);
    t57 = g->ecx;
    t58 = g->edx;
    wr32(edi + 0x68u, 0u);
    g->edx = t58;
    g->esp = sp0 - 0x10u;
    t59 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t57, 2, 0u, esi);
    t60 = g->edx;
    t61 = rd32(edi + 0x6cu);
    g->esp = sp0 - 4u;
    t62 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t61, 7, t61, esi, 0u, esi, in_edi, in_esi, in_ebp);
    t63 = g->ecx;
    t64 = rd32(edi + 0x70u);
    g->edx = t64;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t63, 7, t64, esi, t61, esi, 0u, esi, in_edi);
    t65 = g->ecx;
    t66 = g->edx;
    t67 = rd32(edi + 0x74u);
    g->eax = t67;
    g->edx = t66;
    g->esp = sp0 - 0x14u;
    t68 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t65, 7, t67, esi, t64, esi, t61, esi, 0u);
    t69 = g->edx;
    t70 = rd32(edi + 0x78u);
    g->esp = sp0 - 0x1cu;
    t71 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t70, 7, t70, esi, t67, esi, t64, esi, t61);
    t72 = g->ecx;
    t73 = rd32(edi + 0x7cu);
    g->edx = t73;
    g->esp = sp0 - 0x24u;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t72, 7, t73, esi, t70, esi, t67, esi, t64);
    t74 = g->ecx;
    t75 = g->edx;
    t76 = rd32(edi + 0x80u);
    g->eax = t76;
    g->edx = t75;
    g->esp = sp0 - 0x2cu;
    t77 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t74, 7, t76, esi, t73, esi, t70, esi, t67);
    t78 = g->edx;
    t79 = rd32(edi + 0x84u);
    g->ecx = t79;
    g->esp = sp0 - 0x34u;
    t80 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t79, esi, t76, esi, t73, esi, t70);
    t81 = g->ecx;
    t82 = rd32(edi + 0x88u);
    g->ecx = t81;
    g->edx = t82;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 2, t82, esi);
    t83 = g->ecx;
    t84 = g->edx;
    t85 = rd32(edi + 0x8cu);
    g->eax = t85;
    g->edx = t84;
    g->esp = sp0 - 4u;
    t86 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t85, esi, t82, esi, in_edi, in_esi, in_ebp);
    t87 = g->edx;
    t88 = rd32(edi + 0x90u);
    g->ecx = t88;
    g->esp = sp0 - 0xcu;
    t89 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t88, esi, t85, esi, t82, esi, in_edi);
    t90 = g->ecx;
    t91 = rd32(edi + 0x94u);
    g->ecx = t90;
    g->edx = t91;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t91, esi, t88, esi, t85, esi, t82);
    t92 = g->ecx;
    t93 = g->edx;
    t94 = rd32(edi + 0x98u);
    g->eax = t94;
    g->edx = t93;
    g->esp = sp0 - 0x1cu;
    t95 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t94, esi, t91, esi, t88, esi, t85);
    t96 = g->edx;
    t97 = rd32(edi + 0x9cu);
    g->ecx = t97;
    g->esp = sp0 - 0x24u;
    t98 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t97, esi, t94, esi, t91, esi, t88);
    t99 = g->ecx;
    t100 = rd32(edi + 0xa0u);
    g->ecx = t99;
    g->edx = t100;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t100, esi, t97, esi, t94, esi, t91);
    t101 = g->ecx;
    t102 = g->edx;
    t103 = rd32(edi + 0xa4u);
    g->eax = t103;
    g->edx = t102;
    g->esp = sp0 - 0x34u;
    t104 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t103, esi, t100, esi, t97, esi, t94);
    t105 = g->edx;
    t106 = rd32(edi + 0xa8u);
    g->ecx = t106;
    g->esp = sp0 - 0x10u;
    t107 = cow_cdecl(g, COW_IMG(0x10285fb0u), 2, t106, esi);
    t108 = g->ecx;
    t109 = rd32(edi + 0xacu);
    g->ecx = t108;
    g->edx = t109;
    g->esp = sp0 - 0x18u;
    t110 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t109);
    t111 = g->ecx;
    t112 = g->edx;
    g->ecx = t111;
    g->edx = t112;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t110, esi, arg1, t109, t106, esi, in_edi);
    t113 = g->ecx;
    t114 = g->edx;
    t115 = rd32(edi + 0xb0u);
    g->eax = t115;
    g->ecx = t113;
    g->edx = t114;
    g->esp = sp0 - 0x28u;
    t116 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t115);
    t117 = g->ecx;
    t118 = g->edx;
    g->edx = t118;
    g->esp = sp0 - 0x1cu;
    t119 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t116, esi, arg1, t115, t110, esi, arg1);
    t120 = g->edx;
    t121 = rd32(edi + 0xb4u);
    g->ecx = t121;
    g->esp = sp0 - 0x24u;
    t122 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t121, esi, t116, esi, arg1, t115, t110);
    t123 = g->ecx;
    wr32(sp0 + 8u, 0xau);
    eax = t122;
    ecx = t123;
    ebx = edi + 0xbcu;
    ebp = t116;
L_10287197: ;
    COW_AT(10287197)
    t124 = rd32(ebx - 4u);
    g->edx = t124;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), ecx, 2, t124, esi);
    t125 = g->ecx;
    t126 = g->edx;
    g->eax = rd32(ebx);
    g->edx = t126;
    t127 = rd32(ebx);
    g->esp = sp0 - 4u;
    t128 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t125, 7, t127, esi, t124, esi, in_edi, in_esi, in_ebp);
    t129 = g->edx;
    t130 = rd32(ebx + 4u);
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t130, 7, t130, esi, t127, esi, t124, esi, in_edi);
    t131 = g->ecx;
    t132 = rd32(sp0 + 8u) - 1u;
    t133 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t132);
    if (t133 != 1u)
    {
        eax = t132;
        ecx = t131;
        ebx = ebx + 0xcu;
        goto L_10287197;
    }
    eax = t132;
    ecx = t131;
    COW_AT(102871c5)
    ebx = 0xau;
    edi = edi + 0x130u;
L_102871d0: ;
    COW_AT(102871d0)
    g->eax = eax;
    g->edx = rd32(edi);
    t134 = rd32(edi);
    g->esp = sp0 - 0x10u;
    t135 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), ecx, 2, t134, esi);
    t136 = g->ecx;
    t137 = g->edx;
    if (ebx != 1u)
    {
        eax = t135;
        ecx = t136;
        ebx = ebx - 1u;
        edi = edi + 4u;
        goto L_102871d0;
    }
    eax = t135;
    ecx = t136;
    edx = t137;
    ebx = ebx - 1u;
    COW_AT(102871e2)
    edi = 0xau;
L_102871e7: ;
    COW_AT(102871e7)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t138 = cow_cdecl(g, COW_IMG(0x10285fb0u), 2, ebp, esi);
    t139 = g->ecx;
    t140 = g->edx;
    if (edi != 1u)
    {
        eax = t138;
        ecx = t139;
        edx = t140;
        edi = edi - 1u;
        goto L_102871e7;
    }
    eax = t138;
    ecx = t139;
    edx = t140;
    COW_AT(102871f4)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t141 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, esi, in_edi, in_esi);
    t142 = g->ecx;
    t143 = g->edx;
    if (t141 - rd32(sp0 + 0xcu) == 0x180u)
    {
        eax = t141 - rd32(sp0 + 0xcu);
        goto L_10287236;
    }
    eax = t141 - rd32(sp0 + 0xcu);
    ecx = t142;
    edx = t143;
    edi = rd32(sp0 + 0xcu);
    COW_AT(1028720a)
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t144 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b867cu), in_edi);
    t145 = g->ecx;
    t146 = g->edx;
    g->ecx = t145;
    t147 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t146, 1, 3, esi, COW_IMG(0x103b867cu), in_edi);
    t148 = g->ecx;
    t149 = g->edx;
    g->ebx = ebx;
    g->eax = t147 - edi;
    g->esp = sp0 - 0x1cu;
    t150 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), 0x180u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return t150 & 0xffffff00u;
L_10287236: ;
    COW_AT(10287236)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10286fb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10286fc8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10286fe2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10287197u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102871c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102871d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102871e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102871e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102871f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028720au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10287236u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10286fb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10286fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
