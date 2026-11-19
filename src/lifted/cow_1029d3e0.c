/* f_0x1029d3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1029d3e0(Guest* g)
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
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 568u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029d401u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x21cu); in_esi = rd32(sp0 - 0x218u); g->edi = rd32(sp0 - 0x21cu); g->esi = rd32(sp0 - 0x218u); goto E_1029d401;
    case 0x1029d432u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x21cu); in_esi = rd32(sp0 - 0x218u); g->edi = rd32(sp0 - 0x21cu); g->esi = rd32(sp0 - 0x218u); goto E_1029d432;
    case 0x1029d44du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d44d;
    case 0x1029d483u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d483;
    case 0x1029d494u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d494;
    case 0x1029d4c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d4c5;
    case 0x1029d4dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d4df;
    case 0x1029d4f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d4f0;
    case 0x1029d521u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d521;
    case 0x1029d55cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d55c;
    case 0x1029d565u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d565;
    case 0x1029d572u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d572;
    case 0x1029d588u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d588;
    case 0x1029d5b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d5b9;
    case 0x1029d5eau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d5ea;
    case 0x1029d604u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d604;
    case 0x1029d615u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d615;
    case 0x1029d646u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d646;
    case 0x1029d657u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d657;
    case 0x1029d688u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d688;
    case 0x1029d691u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d691;
    case 0x1029d6a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d6a2;
    case 0x1029d6b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d6b6;
    case 0x1029d6d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d6d2;
    case 0x1029d6e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d6e2;
    case 0x1029d6feu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1029d6fe;
    default: break;
    }
#endif

    COW_AT(1029d3e0)
    wr32(sp0 - 0x218u, in_esi);
    wr32(sp0 - 0x21cu, in_edi);
    wr32(sp0 - 0x220u, sp0 - 0x20cu);
    wr32(sp0 - 0x214u, 0u);
    g->eax = sp0 - 0x20cu;
    g->esp = sp0 - 0x21cu;
    t1 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, self, in_edx, 1, 1, sp0 - 0x20cu);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1029d432;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1029d401)
    wr32(sp0 - 0x220u, 0x1a4u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x22cu, COW_IMG(0x103bcb5cu));
    wr32(sp0 - 0x230u, COW_IMG(0x103bcb40u));
    g->edx = t6;
    g->esp = sp0 - 0x228u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bcb5cu));
    t8 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t8;
    return t7 & 0xffffff00u;
L_1029d432: ;
    COW_AT(1029d432)
    wr32(sp0 - 0x220u, 0u);
    t9 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x224u, t9);
    wr32(sp0 - 0x228u, arg1);
    g->eax = eax;
    g->ecx = t9;
    g->edx = edx;
    g->esp = sp0 - 0x204u;
    t10 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t9, 0u, in_edi, in_esi, 0u, rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_1029d483;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(1029d44d)
    wr32(sp0 - 0x220u, 0x1a4u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x220u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t14 = g->ecx;
    t15 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x22cu, t15);
    wr32(sp0 - 0x230u, COW_IMG(0x103bcb5cu));
    wr32(sp0 - 0x234u, COW_IMG(0x103bcb24u));
    g->edx = t15;
    g->esp = sp0 - 0x22cu;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb24u), COW_IMG(0x103bcb5cu));
    t17 = g->edx;
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t17;
    return t16 & 0xffffff00u;
L_1029d483: ;
    COW_AT(1029d483)
    wr32(sp0 - 0x220u, sp0 - 0x210u);
    g->eax = sp0 - 0x210u;
    g->esp = sp0 - 0x21cu;
    t18 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x210u);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        eax = t18;
        edx = t20;
        goto L_1029d4c5;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(1029d494)
    wr32(sp0 - 0x220u, 0x1a5u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x22cu, COW_IMG(0x103bcb14u));
    wr32(sp0 - 0x230u, COW_IMG(0x103bc94cu));
    g->edx = t23;
    g->esp = sp0 - 0x228u;
    t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc94cu), COW_IMG(0x103bcb14u));
    t25 = g->edx;
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t25;
    return t24 & 0xffffff00u;
L_1029d4c5: ;
    COW_AT(1029d4c5)
    wr32(sp0 - 0x220u, COW_IMG(0x103905fcu));
    t26 = rd32(sp0 - 0x210u);
    wr32(sp0 - 0x224u, t26);
    g->eax = eax;
    g->esp = sp0 - 0x208u;
    t27 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t26, edx, 1, 7, t26, COW_IMG(0x103905fcu), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu));
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 != 0u)
    {
        ecx = t28;
        edx = t29;
        goto L_1029d5ea;
    }
    eax = t27;
    ecx = t28;
    COW_AT(1029d4df)
    wr32(sp0 - 0x220u, sp0 - 0x214u);
    g->eax = eax;
    g->esp = sp0 - 0x21cu;
    t30 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x214u, 1, 1, sp0 - 0x214u);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 != 0u)
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        goto L_1029d521;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
    COW_AT(1029d4f0)
    wr32(sp0 - 0x220u, 0x1a8u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t33 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 - 0x22cu, COW_IMG(0x103bcb04u));
    wr32(sp0 - 0x230u, COW_IMG(0x103bc94cu));
    g->edx = t35;
    g->esp = sp0 - 0x228u;
    t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc94cu), COW_IMG(0x103bcb04u));
    t37 = g->edx;
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t37;
    return t36 & 0xffffff00u;
L_1029d521: ;
    COW_AT(1029d521)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t38 = cow_stdcall(g, COW_IMG(0x10298b50u), 0);
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0x220u, 0u);
    wr32(sp0 - 0x224u, 0u);
    wr32(sp0 - 0x228u, 0u);
    g->edx = t40;
    cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), t39, 3, 0u, 0u, 0u);
    t41 = g->ecx;
    t42 = g->edx;
    t43 = rd32(sp0 - 0x214u);
    wr32(sp0 - 0x220u, t43);
    g->eax = t43;
    g->edx = t42;
    g->esp = sp0 - 0x220u;
    t44 = cow_stdcall(g, COW_IMG(0x102afdf0u), 0);
    t45 = g->edx;
    wr32(sp0 - 0x224u, t44);
    wr32(sp0 - 0x228u, sp0 - 0x200u);
    g->esp = sp0 - 0x21cu;
    t46 = cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), sp0 - 0x200u, 3, sp0 - 0x200u, t44, rd32(sp0 - 0x220u));
    t47 = g->ecx;
    wr32(sp0 - 0x22cu, sp0 - 0x200u);
    g->edi = t38;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x228u;
    t48 = cow_thiscall_cdecl(g, COW_IMG(0x1028a280u), t47, 1, sp0 - 0x200u);
    t49 = g->ecx;
    t50 = g->edx;
    if ((uint8_t)t48 == 0u)
    {
        eax = t48;
        ecx = t49;
        edx = t50;
        goto L_1029d5b9;
    }
    eax = t48;
    ecx = t49;
    edx = t50;
    edi = t38;
    COW_AT(1029d55c)
    if (rd8(COW_IMG(0x109a2795u)) == 0u) goto L_1029d572;
    COW_AT(1029d565)
    t51 = (rd32(edi + 0x20u) & 0xffffff00u) | (uint8_t)(rd32(edi + 0x20u) | 8u);
    wr32(edi + 0x20u, t51);
L_1029d6b6: ;
    COW_AT(1029d6b6)
    t92 = rd32(arg1 + 0x24u);
    wr32(sp0 - 0x220u, t92);
    wr32(sp0 - 0x224u, 0u);
    t93 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x228u, t93);
    wr32(sp0 - 0x22cu, arg1);
    g->edx = t92;
    g->esp = sp0 - 0x21cu;
    cow_thiscall_cdecl(g, COW_IMG(0x102799e0u), ecx, 4, arg1, t93, 0u, t92);
    t94 = g->ecx;
    t95 = g->edx;
    if (rd32(sp0 - 0x214u) == 0u)
    {
        eax = rd32(sp0 - 0x214u);
        ecx = t94;
        edx = t95;
    }
    else
    {
        eax = rd32(sp0 - 0x214u);
        edx = t95;
    COW_AT(1029d6d2)
        t96 = rd32(arg1 + 0x24u);
        wr32(sp0 - 0x220u, t96);
        wr32(sp0 - 0x224u, 0u);
        wr32(sp0 - 0x228u, eax);
        wr32(sp0 - 0x22cu, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x21cu;
        t97 = cow_thiscall_cdecl(g, COW_IMG(0x10279910u), t96, 4, arg1, eax, 0u, t96);
        t98 = g->ecx;
        t99 = g->edx;
        eax = t97;
        ecx = t98;
        edx = t99;
    }
    COW_AT(1029d6e2)
    wr32(sp0 - 0x220u, edi);
    wr32(sp0 - 0x224u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x210u;
    t100 = cow_thiscall_cdecl(g, COW_IMG(0x10279470u), ecx, 5, arg1, edi, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u));
    t101 = g->ecx;
    t102 = g->edx;
    wr32(sp0 - 0x228u, edi);
    wr32(sp0 - 0x22cu, arg1);
    g->edx = t102;
    g->esp = sp0 - 0x220u;
    t103 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), t101, 3, arg1, edi, arg1);
    t104 = g->edx;
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t104;
    return (t103 & 0xffffff00u) | (uint8_t)(t103 | 0xffu);
L_1029d572: ;
    COW_AT(1029d572)
    wr32(sp0 - 0x220u, sp0 - 0x200u);
    wr32(sp0 - 0x224u, edi);
    g->eax = sp0 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t52 = cow_thiscall_cdecl(g, COW_IMG(0x10298cb0u), ecx, 2, edi, sp0 - 0x200u);
    t53 = g->ecx;
    t54 = g->edx;
    if (t52 == 0u)
    {
        ecx = t53;
        goto L_1029d6b6;
    }
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(1029d588)
    wr32(sp0 - 0x220u, 0x1b2u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t55 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t56 = g->edx;
    t57 = rd32(sp0 - 0x214u);
    wr32(sp0 - 0x22cu, t57);
    wr32(sp0 - 0x230u, COW_IMG(0x103bcae8u));
    g->edx = t56;
    g->esp = sp0 - 0x228u;
    t58 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcae8u), t57);
    t59 = g->edx;
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t59;
    return t58 & 0xffffff00u;
L_1029d5b9: ;
    COW_AT(1029d5b9)
    wr32(sp0 - 0x220u, 0x1b7u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x220u;
    t60 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t61 = g->ecx;
    t62 = rd32(sp0 - 0x214u);
    wr32(sp0 - 0x22cu, t62);
    wr32(sp0 - 0x230u, COW_IMG(0x103bcae8u));
    g->edx = t62;
    g->esp = sp0 - 0x228u;
    t63 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcae8u), t62);
    t64 = g->edx;
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t64;
    return t63 & 0xffffff00u;
L_1029d5ea: ;
    COW_AT(1029d5ea)
    wr32(sp0 - 0x220u, COW_IMG(0x103bcae0u));
    t65 = rd32(sp0 - 0x210u);
    wr32(sp0 - 0x224u, t65);
    g->eax = t65;
    g->esp = sp0 - 0x208u;
    t66 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t65, COW_IMG(0x103bcae0u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu));
    t67 = g->ecx;
    t68 = g->edx;
    if (t66 != 0u)
    {
        eax = t66;
        ecx = t67;
        edx = t68;
        goto L_1029d6fe;
    }
    eax = t66;
    edx = t68;
    COW_AT(1029d604)
    wr32(sp0 - 0x220u, sp0 - 0x204u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t69 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), sp0 - 0x204u, 1, sp0 - 0x204u);
    t70 = g->ecx;
    t71 = g->edx;
    if ((uint8_t)t69 != 0u)
    {
        eax = t69;
        ecx = t70;
        goto L_1029d646;
    }
    eax = t69;
    ecx = t70;
    edx = t71;
    COW_AT(1029d615)
    wr32(sp0 - 0x220u, 0x1bbu);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t72 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t73 = g->ecx;
    t74 = g->edx;
    wr32(sp0 - 0x22cu, COW_IMG(0x103bcad0u));
    wr32(sp0 - 0x230u, COW_IMG(0x103bca3cu));
    g->edx = t74;
    g->esp = sp0 - 0x228u;
    t75 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bcad0u));
    t76 = g->edx;
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t76;
    return t75 & 0xffffff00u;
L_1029d646: ;
    COW_AT(1029d646)
    wr32(sp0 - 0x220u, sp0 - 0x208u);
    g->eax = eax;
    g->edx = sp0 - 0x208u;
    g->esp = sp0 - 0x21cu;
    t77 = cow_thiscall_cdecl(g, COW_IMG(0x102afce0u), ecx, 1, sp0 - 0x208u);
    t78 = g->ecx;
    t79 = g->edx;
    if ((uint8_t)t77 != 0u)
    {
        eax = t77;
        ecx = t78;
        edx = t79;
        goto L_1029d688;
    }
    eax = t77;
    ecx = t78;
    edx = t79;
    COW_AT(1029d657)
    wr32(sp0 - 0x220u, 0x1bcu);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t80 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t81 = g->ecx;
    t82 = g->edx;
    wr32(sp0 - 0x22cu, COW_IMG(0x103bcabcu));
    wr32(sp0 - 0x230u, COW_IMG(0x103bca98u));
    g->edx = t82;
    g->esp = sp0 - 0x228u;
    t83 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca98u), COW_IMG(0x103bcabcu));
    t84 = g->edx;
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t84;
    return t83 & 0xffffff00u;
L_1029d688: ;
    COW_AT(1029d688)
    if (rd8(COW_IMG(0x109a2795u)) == 0u)
    {
    COW_AT(1029d6a2)
        t88 = rd32(sp0 - 0x208u);
        wr32(sp0 - 0x220u, t88);
        t89 = rd32(sp0 - 0x204u);
        wr32(sp0 - 0x224u, t89);
        g->eax = t88;
        g->ecx = t89;
        g->esp = sp0 - 0x21cu;
        t90 = cow_cdecl(g, COW_IMG(0x10298dc0u), 2, t89, t88);
        t91 = g->ecx;
        ecx = t91;
        edi = t90;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x109a2795u));
    COW_AT(1029d691)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x21cu;
        t85 = cow_stdcall(g, COW_IMG(0x10298b50u), 0);
        t86 = g->ecx;
        t87 = (rd32(t85 + 0x20u) & 0xffffff00u) | (uint8_t)(rd32(t85 + 0x20u) | 0xau);
        wr32(t85 + 0x20u, t87);
        ecx = t86;
        edi = t85;
    }
    goto L_1029d6b6;
L_1029d6fe: ;
    COW_AT(1029d6fe)
    wr32(sp0 - 0x220u, 0x1c5u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x220u;
    t105 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t106 = g->ecx;
    t107 = rd32(sp0 - 0x210u);
    wr32(sp0 - 0x22cu, t107);
    wr32(sp0 - 0x230u, COW_IMG(0x103bca6cu));
    g->edx = t107;
    g->esp = sp0 - 0x228u;
    t108 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca6cu), t107);
    t109 = g->edx;
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->edx = t109;
    return t108 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029d3e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029d401u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x21cu);
        in_esi = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x1029d432u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x21cu);
        in_esi = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        wr32(sp0 - 0x214u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1029d44du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x1029d483u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029d494u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x220u, sp0 - 0x210u);
        (void)sp0;
        return 1;
    }
    case 0x1029d4c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x210u);
        (void)sp0;
        return 1;
    }
    case 0x1029d4dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029d4f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x220u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x1029d521u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x1029d55cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1029d565u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1029d572u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1029d588u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        wr32(sp0 - 0x220u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1029d5b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1029d5eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029d604u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029d615u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x1029d646u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x1029d657u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x220u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x1029d688u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x1029d691u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x1029d6a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x1029d6b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029d6d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029d6e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029d6feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029d3e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1029d3e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
