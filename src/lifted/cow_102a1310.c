/* f_0x102a1310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a1310(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_34;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a1327u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_102a1327;
    case 0x102a1356u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_102a1356;
    case 0x102a136eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a136e;
    case 0x102a13a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a13a2;
    case 0x102a13b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a13b3;
    case 0x102a13e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a13e2;
    case 0x102a13f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a13f6;
    case 0x102a1419u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a1419;
    case 0x102a142au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a142a;
    case 0x102a1459u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a1459;
    case 0x102a146du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a146d;
    case 0x102a1490u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a1490;
    case 0x102a14a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a14a1;
    case 0x102a14d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a14d0;
    case 0x102a14d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102a14d9;
    case 0x102a1503u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a1503;
    case 0x102a1540u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_20 = rd32(sp0 - 0x20u); goto E_102a1540;
    case 0x102a1550u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a1550;
    case 0x102a1561u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_20 = rd32(sp0 - 0x20u); goto E_102a1561;
    case 0x102a156fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_20 = rd32(sp0 - 0x20u); goto E_102a156f;
    case 0x102a157fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a157f;
    case 0x102a1590u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_102a1590;
    case 0x102a1592u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a1592;
    case 0x102a15c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a15c1;
    case 0x102a15f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_20 = rd32(sp0 - 0x20u); goto E_102a15f0;
    case 0x102a1601u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a1601;
    case 0x102a1630u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a1630;
    case 0x102a164au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a164a;
    case 0x102a165bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a165b;
    case 0x102a168au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a168a;
    case 0x102a169eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a169e;
    case 0x102a16bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102a16bc;
    case 0x102a16dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a16db;
    case 0x102a16ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a16ec;
    case 0x102a171bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a171b;
    case 0x102a17a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a17a5;
    default: break;
    }
#endif

    COW_AT(102a1310)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x2cu;
    t1 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, self, in_edx, 1, 1, sp0 - 0xcu);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_102a1356;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102a1327)
    wr32(sp0 - 0x30u, 0x4aeu);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x3cu, COW_IMG(0x103bd20cu));
    wr32(sp0 - 0x40u, COW_IMG(0x103bcb40u));
    g->edx = t6;
    g->esp = sp0 - 0x38u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bd20cu));
    t8 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t8;
    return t7 & 0xffffff00u;
L_102a1356: ;
    COW_AT(102a1356)
    wr32(sp0 - 0x30u, 2u);
    t9 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x34u, t9);
    wr32(sp0 - 0x38u, arg1);
    g->eax = eax;
    g->ecx = t9;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t10 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t9, 2u, in_edi, in_esi, in_ebx, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_102a13a2;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(102a136e)
    wr32(sp0 - 0x30u, 0x4aeu);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x30u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t14 = g->ecx;
    t15 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x3cu, t15);
    wr32(sp0 - 0x40u, COW_IMG(0x103bd20cu));
    wr32(sp0 - 0x44u, COW_IMG(0x103bcb24u));
    g->edx = t15;
    g->esp = sp0 - 0x3cu;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb24u), COW_IMG(0x103bd20cu));
    t17 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t17;
    return t16 & 0xffffff00u;
L_102a13a2: ;
    COW_AT(102a13a2)
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x2cu;
    t18 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x10u);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        eax = t18;
        edx = t20;
        goto L_102a13e2;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(102a13b3)
    wr32(sp0 - 0x30u, 0x4afu);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x3cu, COW_IMG(0x103bd1f4u));
    wr32(sp0 - 0x40u, COW_IMG(0x103bcb40u));
    g->edx = t23;
    g->esp = sp0 - 0x38u;
    t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bd1f4u));
    t25 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t25;
    return t24 & 0xffffff00u;
L_102a13e2: ;
    COW_AT(102a13e2)
    wr32(sp0 - 0x30u, 3u);
    t26 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x34u, t26);
    wr32(sp0 - 0x38u, arg1);
    g->eax = eax;
    g->ecx = t26;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t27 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t26, 3u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 != 0u)
    {
        ecx = t28;
        edx = t29;
        goto L_102a1419;
    }
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(102a13f6)
    wr32(sp0 - 0x30u, 0x4afu);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x30u;
    t30 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t31 = g->ecx;
    t32 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t32);
    wr32(sp0 - 0x34u, 3u);
    eax = t30;
    ecx = t31;
    edx = t32;
    ebx = in_ebx;
    loc_34 = 3u;
L_102a16bc: ;
    COW_AT(102a16bc)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t115 = cow_cdecl(g, COW_IMG(0x1027a1e0u), 1, loc_34);
    t116 = g->ecx;
    t117 = g->edx;
    wr32(sp0 - 0x34u, t115);
    wr32(sp0 - 0x38u, COW_IMG(0x103bcbe8u));
    g->ebx = ebx;
    g->edx = t117;
    t118 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcbe8u), t115);
    t119 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t119;
    return t118 & 0xffffff00u;
L_102a1419: ;
    COW_AT(102a1419)
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    g->eax = sp0 - 0x14u;
    g->esp = sp0 - 0x2cu;
    t33 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x14u);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint8_t)t33 != 0u)
    {
        eax = t33;
        edx = t35;
        goto L_102a1459;
    }
    eax = t33;
    ecx = t34;
    edx = t35;
    COW_AT(102a142a)
    wr32(sp0 - 0x30u, 0x4b0u);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t37 = g->ecx;
    t38 = g->edx;
    wr32(sp0 - 0x3cu, COW_IMG(0x103bd1e0u));
    wr32(sp0 - 0x40u, COW_IMG(0x103bcb40u));
    g->edx = t38;
    g->esp = sp0 - 0x38u;
    t39 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bd1e0u));
    t40 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t40;
    return t39 & 0xffffff00u;
L_102a1459: ;
    COW_AT(102a1459)
    wr32(sp0 - 0x30u, 3u);
    t41 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x34u, t41);
    wr32(sp0 - 0x38u, arg1);
    g->eax = eax;
    g->ecx = t41;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t42 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t41, 3u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t43 = g->ecx;
    t44 = g->edx;
    if ((uint8_t)t42 != 0u)
    {
        ecx = t43;
        edx = t44;
        goto L_102a1490;
    }
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(102a146d)
    wr32(sp0 - 0x30u, 0x4b0u);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x30u;
    t45 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t46 = g->ecx;
    t47 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x30u, t47);
    wr32(sp0 - 0x34u, 3u);
    eax = t45;
    ecx = t46;
    edx = t47;
    ebx = in_ebx;
    loc_34 = 3u;
    goto L_102a16bc;
L_102a1490: ;
    COW_AT(102a1490)
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->eax = sp0 - 0x1cu;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t48 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, sp0 - 0x1cu);
    t49 = g->ecx;
    t50 = g->edx;
    if ((uint8_t)t48 != 0u)
    {
        ecx = t49;
        edx = t50;
        goto L_102a14d0;
    }
    eax = t48;
    ecx = t49;
    edx = t50;
    COW_AT(102a14a1)
    wr32(sp0 - 0x30u, 0x4b1u);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t51 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t52 = g->ecx;
    t53 = g->edx;
    wr32(sp0 - 0x3cu, COW_IMG(0x103bd1ccu));
    wr32(sp0 - 0x40u, COW_IMG(0x103bca3cu));
    g->edx = t53;
    g->esp = sp0 - 0x38u;
    t54 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bd1ccu));
    t55 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t55;
    return t54 & 0xffffff00u;
L_102a14d0: ;
    COW_AT(102a14d0)
    if ((int32_t)rd32(sp0 - 0x1cu) >= 1)
    {
        eax = rd32(sp0 - 0x1cu);
        goto L_102a1503;
    }
    eax = rd32(sp0 - 0x1cu);
    COW_AT(102a14d9)
    wr32(sp0 - 0x30u, 0x4b3u);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t56 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t57 = g->ecx;
    t58 = g->edx;
    wr32(sp0 - 0x3cu, COW_IMG(0x103bd1a4u));
    g->edx = t58;
    g->esp = sp0 - 0x34u;
    t59 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd1a4u), COW_IMG(0x103b379cu));
    t60 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t60;
    return t59 & 0xffffff00u;
L_102a1503: ;
    COW_AT(102a1503)
    wr32(sp0 - 0x30u, 0x4b7u);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, 4u);
    wr32(sp0 - 0x3cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t61 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, eax, 4u, COW_IMG(0x103bc974u), 0x4b7u, rd32(sp0 - 0x2cu));
    t62 = g->edx;
    wr32(sp0 - 0x40u, 0x4b8u);
    wr32(sp0 - 0x44u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x48u, 4u);
    t63 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x4cu, t63);
    g->edx = t62;
    g->esp = sp0 - 0x38u;
    t64 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t63, 4u, COW_IMG(0x103bc974u), 0x4b8u, rd32(sp0 - 0x3cu));
    t65 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    if ((int32_t)rd32(sp0 - 0x1cu) <= 0)
    {
        ecx = rd32(sp0 - 0x1cu);
        edx = t65;
        ebx = t64;
        edi = t61;
        goto L_102a1561;
    }
    eax = 0u;
    ecx = rd32(sp0 - 0x1cu);
    ebx = t64;
    edi = t61;
    loc_20 = 0u;
L_102a1540: ;
    COW_AT(102a1540)
    t66 = eax * 4u + edi;
    wr32(sp0 - 0x30u, t66);
    g->eax = eax;
    g->edx = t66;
    g->esp = sp0 - 0x2cu;
    t67 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, t66);
    t68 = g->ecx;
    t69 = g->edx;
    if ((uint8_t)t67 == 0u)
    {
        eax = t67;
        ecx = t68;
        edx = t69;
        goto L_102a1592;
    }
    edx = t69;
    COW_AT(102a1550)
    t70 = rd32(sp0 - 0x20u) + 1u;
    t71 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x20u, t70);
    if ((int32_t)(t71 + 1u) < (int32_t)rd32(sp0 - 0x1cu))
    {
        eax = t70;
        ecx = rd32(sp0 - 0x1cu);
        loc_20 = t70;
        goto L_102a1540;
    }
    ecx = rd32(sp0 - 0x1cu);
L_102a1561: ;
    COW_AT(102a1561)
    wr32(sp0 - 0x20u, 0u);
    if ((int32_t)ecx <= 0)
    {
        eax = 0u;
        loc_20 = 0u;
        goto L_102a15f0;
    }
    eax = 0u;
    loc_20 = 0u;
L_102a156f: ;
    COW_AT(102a156f)
    t77 = eax * 4u + ebx;
    wr32(sp0 - 0x30u, t77);
    g->eax = t77;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t78 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, t77);
    t79 = g->ecx;
    t80 = g->edx;
    if ((uint8_t)t78 == 0u)
    {
        eax = t78;
        ecx = t79;
        edx = t80;
        goto L_102a15c1;
    }
    edx = t80;
    COW_AT(102a157f)
    t81 = rd32(sp0 - 0x20u) + 1u;
    t82 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x20u, t81);
    if ((int32_t)(t82 + 1u) < (int32_t)rd32(sp0 - 0x1cu))
    {
        eax = t81;
        ecx = rd32(sp0 - 0x1cu);
        loc_20 = t81;
        goto L_102a156f;
    }
    eax = t81;
    loc_20 = t81;
    COW_AT(102a1590)
L_102a15f0: ;
    COW_AT(102a15f0)
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t88 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 8u, edx, 1, 1, sp0 - 8u);
    t89 = g->ecx;
    t90 = g->edx;
    if ((uint8_t)t88 != 0u)
    {
        eax = t88;
        ecx = t89;
        goto L_102a1630;
    }
    eax = t88;
    ecx = t89;
    edx = t90;
    COW_AT(102a1601)
    wr32(sp0 - 0x30u, 0x4beu);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t91 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t92 = g->ecx;
    t93 = g->edx;
    wr32(sp0 - 0x3cu, COW_IMG(0x103bd274u));
    wr32(sp0 - 0x40u, COW_IMG(0x103bc94cu));
    g->ebx = ebx;
    g->edx = t93;
    g->esp = sp0 - 0x38u;
    t94 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc94cu), COW_IMG(0x103bd274u));
    t95 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t95;
    return t94 & 0xffffff00u;
L_102a1592: ;
    COW_AT(102a1592)
    wr32(sp0 - 0x30u, 0x4bau);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t72 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t73 = g->ecx;
    t74 = g->edx;
    wr32(sp0 - 0x3cu, COW_IMG(0x103bd190u));
    wr32(sp0 - 0x40u, COW_IMG(0x103bca3cu));
    g->ebx = ebx;
    g->edx = t74;
    g->esp = sp0 - 0x38u;
    t75 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bd190u));
    t76 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t76;
    return t75 & 0xffffff00u;
L_102a15c1: ;
    COW_AT(102a15c1)
    wr32(sp0 - 0x30u, 0x4bcu);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t83 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t84 = g->ecx;
    t85 = g->edx;
    wr32(sp0 - 0x3cu, COW_IMG(0x103bd180u));
    wr32(sp0 - 0x40u, COW_IMG(0x103bca3cu));
    g->ebx = ebx;
    g->edx = t85;
    g->esp = sp0 - 0x38u;
    t86 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bd180u));
    t87 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t87;
    return t86 & 0xffffff00u;
L_102a1630: ;
    COW_AT(102a1630)
    wr32(sp0 - 0x30u, COW_IMG(0x103bd264u));
    t96 = rd32(sp0 - 8u);
    wr32(sp0 - 0x34u, t96);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t97 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t96, 1, 7, t96, COW_IMG(0x103bd264u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t98 = g->ecx;
    t99 = g->edx;
    if (t97 != 0u)
    {
        eax = t97;
        ecx = t98;
        edx = t99;
        goto L_102a17a5;
    }
    ecx = t98;
    edx = t99;
    COW_AT(102a164a)
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    g->ebx = ebx;
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x2cu;
    t100 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x18u);
    t101 = g->ecx;
    t102 = g->edx;
    if ((uint8_t)t100 != 0u)
    {
        eax = t100;
        edx = t102;
        goto L_102a168a;
    }
    eax = t100;
    ecx = t101;
    edx = t102;
    COW_AT(102a165b)
    wr32(sp0 - 0x30u, 0x4c0u);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t103 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t104 = g->ecx;
    t105 = g->edx;
    wr32(sp0 - 0x3cu, COW_IMG(0x103bd0acu));
    wr32(sp0 - 0x40u, COW_IMG(0x103bcb40u));
    g->ebx = ebx;
    g->edx = t105;
    g->esp = sp0 - 0x38u;
    t106 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bd0acu));
    t107 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t107;
    return t106 & 0xffffff00u;
L_102a168a: ;
    COW_AT(102a168a)
    wr32(sp0 - 0x30u, 2u);
    t108 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x34u, t108);
    wr32(sp0 - 0x38u, arg1);
    g->eax = eax;
    g->ecx = t108;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t109 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t108, 2u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t110 = g->ecx;
    t111 = g->edx;
    if ((uint8_t)t109 != 0u)
    {
        ecx = t110;
        edx = t111;
        goto L_102a16db;
    }
    eax = t109;
    ecx = t110;
    edx = t111;
    COW_AT(102a169e)
    wr32(sp0 - 0x30u, 0x4c0u);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x30u;
    t112 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t113 = g->ecx;
    t114 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x30u, t114);
    wr32(sp0 - 0x34u, 2u);
    eax = t112;
    ecx = t113;
    edx = t114;
    loc_34 = 2u;
    goto L_102a16bc;
L_102a16db: ;
    COW_AT(102a16db)
    wr32(sp0 - 0x30u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t120 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, sp0 - 4u);
    t121 = g->ecx;
    t122 = g->edx;
    if ((uint8_t)t120 != 0u)
    {
        eax = t120;
        goto L_102a171b;
    }
    eax = t120;
    ecx = t121;
    edx = t122;
    COW_AT(102a16ec)
    wr32(sp0 - 0x30u, 0x4c1u);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t123 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t124 = g->ecx;
    t125 = g->edx;
    wr32(sp0 - 0x3cu, COW_IMG(0x103bd250u));
    wr32(sp0 - 0x40u, COW_IMG(0x103bca3cu));
    g->ebx = ebx;
    g->edx = t125;
    g->esp = sp0 - 0x38u;
    t126 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bd250u));
    t127 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t127;
    return t126 & 0xffffff00u;
L_102a171b: ;
    COW_AT(102a171b)
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    t128 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x34u, t128);
    wr32(sp0 - 0x38u, arg1);
    g->eax = eax;
    g->edx = t128;
    g->esp = sp0 - 0x2cu;
    t129 = cow_cdecl(g, COW_IMG(0x10279d70u), 3, arg1, t128, sp0 - 0x20u);
    t130 = g->edx;
    t131 = rd32(sp0 - 4u);
    wr32(sp0 - 0x30u, t131);
    wr32(sp0 - 0x34u, t129);
    wr32(sp0 - 0x38u, t131);
    wr32(sp0 - 0x3cu, t129);
    g->edx = t130;
    g->esp = sp0 - 0x28u;
    t132 = cow_cdecl(g, COW_IMG(0x1027c9a0u), 5, t129, t131, t129, t131, rd32(sp0 - 0x2cu));
    t133 = g->edx;
    wr32(sp0 - 0x38u, t132 + 0x24u);
    wr32(sp0 - 0x3cu, ebx);
    wr32(sp0 - 0x40u, edi);
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    t134 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x48u, t134);
    wr32(sp0 - 0x4cu, arg1);
    g->eax = sp0 - 0x20u;
    g->ecx = t134;
    g->esp = sp0 - 0x40u;
    t135 = cow_cdecl(g, COW_IMG(0x10279d90u), 3, arg1, t134, sp0 - 0x20u);
    t136 = g->ecx;
    wr32(sp0 - 0x44u, t135);
    wr32(sp0 - 0x48u, sp0 - 0x20u);
    t137 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x4cu, t137);
    wr32(sp0 - 0x50u, arg1);
    g->eax = t137;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x44u;
    t138 = cow_cdecl(g, COW_IMG(0x10279d90u), 3, arg1, t137, sp0 - 0x20u);
    t139 = g->edx;
    wr32(sp0 - 0x48u, t138);
    t140 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x4cu, t140);
    wr32(sp0 - 0x50u, 1u);
    g->ecx = t140;
    g->esp = sp0 - 0x2cu;
    t141 = cow_cdecl(g, COW_IMG(0x1028dde0u), 9, 1u, t140, t138, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t142 = g->ecx;
    t143 = rd32(arg1 + 0x44u);
    wr32(sp0 - 0x54u, t143);
    wr32(sp0 - 0x58u, 2u);
    t144 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x5cu, t144);
    wr32(sp0 - 0x60u, arg1);
    g->eax = t144;
    g->edx = t143;
    g->esp = sp0 - 0x50u;
    t145 = cow_thiscall_cdecl(g, COW_IMG(0x102799e0u), t142, 4, arg1, t144, 2u, t143);
    t146 = g->ecx;
    t147 = g->edx;
    wr32(sp0 - 0x64u, t141);
    wr32(sp0 - 0x68u, arg1);
    g->edx = t147;
    g->esp = sp0 - 0x54u;
    t148 = cow_thiscall_cdecl(g, COW_IMG(0x10279550u), t146, 5, arg1, t141, arg1, rd32(sp0 - 0x5cu), 2u);
    t149 = g->ecx;
    t150 = g->edx;
    wr32(sp0 - 0x6cu, t141);
    wr32(sp0 - 0x70u, arg1);
    g->edx = t150;
    g->esp = sp0 - 0x64u;
    t151 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), t149, 3, arg1, t141, arg1);
    t152 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t152;
    return (t151 & 0xffffff00u) | (uint8_t)(t151 | 0xffu);
L_102a17a5: ;
    COW_AT(102a17a5)
    wr32(sp0 - 0x30u, 0x4c3u);
    wr32(sp0 - 0x34u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x38u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t153 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t154 = g->ecx;
    t155 = g->edx;
    wr32(sp0 - 0x3cu, COW_IMG(0x103bd218u));
    g->ebx = ebx;
    g->edx = t155;
    g->esp = sp0 - 0x34u;
    t156 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd218u), COW_IMG(0x103b379cu));
    t157 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = t157;
    return t156 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a1310(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a1327u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        wr32(sp0 - 0x24u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a1356u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        wr32(sp0 - 0x24u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a136eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a13a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a13b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102a13e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102a13f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a1419u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a142au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102a1459u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102a146du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a1490u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a14a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102a14d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102a14d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102a1503u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102a1540u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1550u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1561u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a156fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a157fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1590u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1592u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a15c1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a15f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1601u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102a1630u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        wr32(sp0 - 0x30u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102a164au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a165bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102a168au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102a169eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a16bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x102a16dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a16ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a171bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        wr32(sp0 - 0x30u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a17a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a1310(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a1310(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
