/* f_0x1000b460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1000b460(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d15;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t2;
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
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000b47eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1000b47e;
    case 0x1000b483u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1000b483;
    case 0x1000b493u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1000b493;
    case 0x1000b49fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1000b49f;
    case 0x1000b56bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_3c = rd32(sp0 - 0x3cu); x1 = ST(0); x0 = ST(1); goto E_1000b56b;
    case 0x1000b571u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_3c = rd32(sp0 - 0x3cu); x1 = ST(0); x0 = ST(1); goto E_1000b571;
    case 0x1000b582u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_3c = rd32(sp0 - 0x3cu); x1 = ST(0); x0 = ST(1); goto E_1000b582;
    case 0x1000b586u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_3c = rd32(sp0 - 0x3cu); x1 = ST(0); x0 = ST(1); goto E_1000b586;
    case 0x1000b5b5u: ecx = g->ecx; edx = g->edx; self = g->esi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000b5b5;
    case 0x1000b5bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000b5bb;
    case 0x1000b5c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000b5c0;
    case 0x1000b5efu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000b5ef;
    case 0x1000b616u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1000b616;
    case 0x1000b61fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_1000b61f;
    default: break;
    }
#endif

    COW_AT(1000b460)
    d1 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329a20u)));
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    g->edx = in_edx;
    fpush(g, d1);
    g->esp = sp0 - 0x34u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->edx;
    if (t2 <= 0xffu)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        edx = t3;
    COW_AT(1000b47e)
        eax = 0xffu;
    }
    COW_AT(1000b483)
    ecx = eax << 0x18u | 0x808080u;
    eax = COW_IMG(0x1034fef0u);
L_1000b493: ;
    COW_AT(1000b493)
    wr32(eax, ecx);
    if ((int32_t)(eax + 0x1cu) < (int32_t)COW_IMG(0x1034ff60u))
    {
        eax = eax + 0x1cu;
        goto L_1000b493;
    }
    COW_AT(1000b49f)
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, arg1);
    g->eax = rd32(arg1);
    g->edx = edx;
    t4 = rd32(arg1);
    g->esp = sp0 - 0x34u;
    t5 = cow_thiscall(g, rd32(t4 + 0x38u), sp0 - 0x20u, 3, arg1, 0u, sp0 - 0x20u);
    t6 = g->edx;
    t7 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, rd32(t7));
    t8 = rd32(sp0 - 8u);
    wr32(sp0 - 0x28u, t8);
    wr32(sp0 - 0x24u, 0u);
    t9 = rd32(t7);
    d10 = fr(g, fr(g, (double)(int64_t)cow_i64(rd32(t7), 0u) + (double)rdf32(sp0 + 0x10u)) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(COW_IMG(0x1034fee0u), (float)d10);
    d11 = fr(g, (double)rdf32(COW_IMG(0x1034fee0u)) + (double)(int64_t)cow_i64(t8, 0u));
    wr32(COW_IMG(0x1034ff18u), rd32(COW_IMG(0x1034fee0u)));
    wrf32(COW_IMG(0x1034fefcu), (float)d11);
    wrf32(COW_IMG(0x1034ff34u), (float)d11);
    g->eax = t8;
    t12 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
    wr32(sp0 - 0x24u, 0u);
    t13 = rd32(t12 + 4u);
    wr32(sp0 - 0x28u, t13);
    t14 = rd32(sp0 - 4u);
    wr32(sp0 - 0x28u, t14);
    wr32(sp0 - 0x24u, 0u);
    d15 = fr(g, fr(g, (double)(int64_t)cow_i64(t13, 0u) + (double)rdf32(sp0 + 0x14u)) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(COW_IMG(0x1034fee4u), (float)d15);
    t16 = rd32(COW_IMG(0x1034fee4u));
    d17 = fr(g, (double)rdf32(COW_IMG(0x1034fee4u)) + (double)(int64_t)cow_i64(t14, 0u));
    wr32(COW_IMG(0x1034ff00u), t16);
    wrf32(COW_IMG(0x1034ff1cu), (float)d17);
    wrf32(COW_IMG(0x1034ff38u), (float)d17);
    d18 = (double)rdf32(sp0 + 0x18u);
    if (d18 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t16 & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        ecx = t14;
        edx = t13;
        x1 = (double)(int64_t)cow_i64(t14, 0u);
        x0 = (double)(int64_t)cow_i64(t8, 0u);
    }
    else
    {
        eax = (t16 & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        ecx = t14;
        edx = t13;
        x1 = (double)(int64_t)cow_i64(t14, 0u);
        x0 = (double)(int64_t)cow_i64(t8, 0u);
    COW_AT(1000b56b)
        wrf32(sp0 + 0x18u, (float)x0);
    }
    COW_AT(1000b571)
    d19 = (double)rdf32(sp0 + 0x1cu);
    if (d19 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
    COW_AT(1000b582)
        wrf32(sp0 + 0x1cu, (float)x1);
    }
    COW_AT(1000b586)
    d20 = fr(g, (double)rdf32(sp0 + 0x18u) / x0);
    wrf32(COW_IMG(0x1034ff10u), (float)d20);
    wrf32(COW_IMG(0x1034ff48u), (float)d20);
    d21 = fr(g, (double)rdf32(sp0 + 0x1cu) / x1);
    wrf32(COW_IMG(0x1034ff30u), (float)d21);
    wrf32(COW_IMG(0x1034ff4cu), (float)d21);
    if (arg2 == 1u) goto L_1000b5ef;
    COW_AT(1000b5b5)
    if (arg2 == 2u)
    {
        eax = rd32(self + 0xcu);
        goto L_1000b5c0;
    }
    eax = rd32(self + 0xcu);
    COW_AT(1000b5bb)
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x1bu);
    loc_38 = 0u;
    loc_3c = 0x1bu;
L_1000b616: ;
    COW_AT(1000b616)
    wr32(sp0 - 0x40u, eax);
    g->edx = rd32(eax);
    t35 = rd32(eax);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(t35 + 0xc8u), ecx, 3, eax, loc_3c, loc_38);
    t36 = g->edx;
    edx = t36;
L_1000b61f: ;
    COW_AT(1000b61f)
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 7u);
    t37 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t37);
    t38 = rd32(t37);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(t38 + 0xc8u), t38, 3, t37, 7u, 0u);
    t39 = g->ecx;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0xeu);
    t40 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t40);
    g->edx = rd32(t40);
    t41 = rd32(t40);
    cow_thiscall(g, rd32(t41 + 0xc8u), t39, 3, t40, 0xeu, 0u);
    t42 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x89u);
    t43 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t43);
    t44 = rd32(t43);
    cow_thiscall(g, rd32(t44 + 0xc8u), t44, 3, t43, 0x89u, 0u);
    t45 = g->ecx;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x1cu);
    t46 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t46);
    g->edx = rd32(t46);
    t47 = rd32(t46);
    cow_thiscall(g, rd32(t47 + 0xc8u), t45, 3, t46, 0x1cu, 0u);
    t48 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0xfu);
    t49 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t49);
    t50 = rd32(t49);
    cow_thiscall(g, rd32(t50 + 0xc8u), t50, 3, t49, 0xfu, 0u);
    t51 = g->ecx;
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0x10u);
    wr32(sp0 - 0x40u, 0u);
    t52 = rd32(self + 0xcu);
    wr32(sp0 - 0x44u, t52);
    g->edx = rd32(rd32(self + 0xcu));
    t53 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t53 + 0xfcu), t51, 4, t52, 0u, 0x10u, 1u);
    t54 = g->edx;
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0x11u);
    wr32(sp0 - 0x40u, 0u);
    t55 = rd32(self + 0xcu);
    wr32(sp0 - 0x44u, t55);
    t56 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t56 + 0xfcu), t56, 4, t55, 0u, 0x11u, 1u);
    t57 = g->ecx;
    wr32(sp0 - 0x38u, 5u);
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 0u);
    t58 = rd32(self + 0xcu);
    wr32(sp0 - 0x44u, t58);
    g->edx = rd32(rd32(self + 0xcu));
    t59 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t59 + 0xfcu), t57, 4, t58, 0u, 1u, 5u);
    t60 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 2u);
    wr32(sp0 - 0x40u, 0u);
    t61 = rd32(self + 0xcu);
    wr32(sp0 - 0x44u, t61);
    t62 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t62 + 0xfcu), t62, 4, t61, 0u, 2u, 0u);
    t63 = g->ecx;
    wr32(sp0 - 0x38u, 2u);
    wr32(sp0 - 0x3cu, 3u);
    wr32(sp0 - 0x40u, 0u);
    t64 = rd32(self + 0xcu);
    wr32(sp0 - 0x44u, t64);
    g->edx = rd32(rd32(self + 0xcu));
    t65 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t65 + 0xfcu), t63, 4, t64, 0u, 3u, 2u);
    t66 = g->edx;
    wr32(sp0 - 0x38u, 2u);
    wr32(sp0 - 0x3cu, 4u);
    wr32(sp0 - 0x40u, 0u);
    t67 = rd32(self + 0xcu);
    wr32(sp0 - 0x44u, t67);
    t68 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t68 + 0xfcu), t68, 4, t67, 0u, 4u, 2u);
    t69 = g->ecx;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 5u);
    wr32(sp0 - 0x40u, 0u);
    t70 = rd32(self + 0xcu);
    wr32(sp0 - 0x44u, t70);
    g->edx = rd32(rd32(self + 0xcu));
    t71 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t71 + 0xfcu), t69, 4, t70, 0u, 5u, 0u);
    t72 = g->edx;
    wr32(sp0 - 0x38u, 2u);
    wr32(sp0 - 0x3cu, 6u);
    wr32(sp0 - 0x40u, 0u);
    t73 = rd32(self + 0xcu);
    wr32(sp0 - 0x44u, t73);
    t74 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t74 + 0xfcu), t74, 4, t73, 0u, 6u, 2u);
    t75 = g->ecx;
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 1u);
    t76 = rd32(self + 0xcu);
    wr32(sp0 - 0x44u, t76);
    g->edx = rd32(rd32(self + 0xcu));
    t77 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t77 + 0xfcu), t75, 4, t76, 1u, 1u, 1u);
    t78 = g->edx;
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 4u);
    wr32(sp0 - 0x40u, 1u);
    t79 = rd32(self + 0xcu);
    wr32(sp0 - 0x44u, t79);
    t80 = rd32(rd32(self + 0xcu));
    cow_thiscall(g, rd32(t80 + 0xfcu), t80, 4, t79, 1u, 4u, 1u);
    t81 = g->ecx;
    wr32(sp0 - 0x38u, arg1);
    wr32(sp0 - 0x3cu, 0u);
    t82 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t82);
    g->edx = rd32(t82);
    t83 = rd32(t82);
    cow_thiscall(g, rd32(t83 + 0xf4u), t81, 3, t82, 0u, arg1);
    t84 = g->edx;
    wr32(sp0 - 0x38u, 0x144u);
    t85 = rd32(self + 0xcu);
    wr32(sp0 - 0x3cu, t85);
    g->eax = t85;
    g->edx = t84;
    t86 = cow_thiscall(g, rd32(rd32(t85) + 0x130u), rd32(t85), 2, t85, 0x144u);
    t87 = g->edx;
    wr32(sp0 - 0x38u, 0x1cu);
    wr32(sp0 - 0x3cu, COW_IMG(0x1034fee0u));
    wr32(sp0 - 0x40u, 2u);
    wr32(sp0 - 0x44u, 5u);
    g->ebx = 0u;
    cow_thiscall(g, COW_IMG(0x1000cd00u), self, 4, 5u, 2u, COW_IMG(0x1034fee0u), 0x1cu);
    t88 = g->ecx;
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 7u);
    t89 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t89);
    g->edx = rd32(t89);
    t90 = rd32(t89);
    cow_thiscall(g, rd32(t90 + 0xc8u), t88, 3, t89, 7u, 1u);
    t91 = g->edx;
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0xeu);
    t92 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t92);
    t93 = rd32(t92);
    cow_thiscall(g, rd32(t93 + 0xc8u), t93, 3, t92, 0xeu, 1u);
    t94 = g->ecx;
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0x89u);
    t95 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t95);
    g->edx = rd32(t95);
    t96 = rd32(t95);
    cow_thiscall(g, rd32(t96 + 0xc8u), t94, 3, t95, 0x89u, 1u);
    t97 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x1cu);
    t98 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t98);
    t99 = rd32(t98);
    cow_thiscall(g, rd32(t99 + 0xc8u), t99, 3, t98, 0x1cu, 0u);
    t100 = g->ecx;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x1bu);
    t101 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t101);
    g->edx = rd32(t101);
    t102 = rd32(t101);
    cow_thiscall(g, rd32(t102 + 0xc8u), t100, 3, t101, 0x1bu, 0u);
    t103 = g->ecx;
    t104 = g->edx;
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0xfu);
    t105 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t105);
    cow_thiscall(g, rd32(rd32(t105) + 0xc8u), t103, 3, t105, 0xfu, 1u);
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return;
L_1000b5c0: ;
    COW_AT(1000b5c0)
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0x1bu);
    wr32(sp0 - 0x40u, eax);
    t22 = rd32(eax);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(t22 + 0xc8u), t22, 3, eax, 0x1bu, 1u);
    t23 = g->ecx;
    wr32(sp0 - 0x38u, 5u);
    wr32(sp0 - 0x3cu, 0x13u);
    t24 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t24);
    g->edx = rd32(t24);
    t25 = rd32(t24);
    cow_thiscall(g, rd32(t25 + 0xc8u), t23, 3, t24, 0x13u, 5u);
    t26 = g->edx;
    wr32(sp0 - 0x38u, 2u);
    wr32(sp0 - 0x3cu, 0x14u);
    t27 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t27);
    g->edx = t26;
    cow_thiscall(g, rd32(rd32(t27) + 0xc8u), rd32(t27), 3, t27, 0x14u, 2u);
    t28 = g->edx;
    edx = t28;
    goto L_1000b61f;
L_1000b5ef: ;
    COW_AT(1000b5ef)
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0x1bu);
    t29 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t29);
    g->edx = rd32(t29);
    t30 = rd32(t29);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(t30 + 0xc8u), ecx, 3, t29, 0x1bu, 1u);
    t31 = g->edx;
    wr32(sp0 - 0x38u, 5u);
    wr32(sp0 - 0x3cu, 0x13u);
    t32 = rd32(self + 0xcu);
    wr32(sp0 - 0x40u, t32);
    t33 = rd32(t32);
    cow_thiscall(g, rd32(t33 + 0xc8u), t33, 3, t32, 0x13u, 5u);
    t34 = g->ecx;
    wr32(sp0 - 0x38u, 6u);
    wr32(sp0 - 0x3cu, 0x14u);
    eax = rd32(self + 0xcu);
    ecx = t34;
    loc_38 = 6u;
    loc_3c = 0x14u;
    goto L_1000b616;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000b460(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000b47eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1000b483u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1000b493u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1000b49fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1000b56bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1000b571u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1000b582u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1000b586u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1000b5b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        g->eax = arg2 - 1u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1000b5bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1000b5c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1000b5efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1000b616u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1000b61fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000b460(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1000b460(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
