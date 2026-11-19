/* f_0x102a0010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a0010(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_22c;
    uint32_t loc_230;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 592u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a002fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x21cu); in_esi = rd32(sp0 - 0x218u); in_ebp = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebp = rd32(sp0 - 0x214u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x21cu); g->esi = rd32(sp0 - 0x218u); goto E_102a002f;
    case 0x102a0052u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x21cu); in_esi = rd32(sp0 - 0x218u); in_ebp = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebp = rd32(sp0 - 0x214u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x21cu); g->esi = rd32(sp0 - 0x218u); goto E_102a0052;
    case 0x102a006du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_102a006d;
    case 0x102a00a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a00a5;
    case 0x102a00b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_102a00b6;
    case 0x102a00d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a00d9;
    case 0x102a00eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a00ee;
    case 0x102a0108u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a0108;
    case 0x102a012bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a012b;
    case 0x102a0141u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a0141;
    case 0x102a0155u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a0155;
    case 0x102a0178u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a0178;
    case 0x102a018eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a018e;
    case 0x102a019eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a019e;
    case 0x102a01c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a01c1;
    case 0x102a01dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a01db;
    case 0x102a01efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a01ef;
    case 0x102a0204u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a0204;
    case 0x102a0219u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a0219;
    case 0x102a0251u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a0251;
    case 0x102a0268u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a0268;
    case 0x102a026cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a026c;
    case 0x102a0280u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_22c = rd32(sp0 - 0x22cu); goto E_102a0280;
    case 0x102a02b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a02b7;
    case 0x102a02c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a02c1;
    case 0x102a02c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a02c5;
    case 0x102a02cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a02cf;
    case 0x102a02dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a02dc;
    case 0x102a02fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a02fc;
    case 0x102a031cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a031c;
    case 0x102a033cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102a033c;
    case 0x102a035au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_230 = rd32(sp0 - 0x230u); loc_22c = rd32(sp0 - 0x22cu); goto E_102a035a;
    default: break;
    }
#endif

    COW_AT(102a0010)
    wr32(sp0 - 0x210u, in_ebx);
    wr32(sp0 - 0x214u, in_ebp);
    wr32(sp0 - 0x218u, in_esi);
    wr32(sp0 - 0x21cu, in_edi);
    wr32(sp0 - 0x220u, sp0 - 0x208u);
    g->ebx = 0u;
    g->eax = sp0 - 0x208u;
    g->esp = sp0 - 0x21cu;
    t1 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, self, in_edx, 1, 1, sp0 - 0x208u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_102a0052;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102a002f)
    wr32(sp0 - 0x220u, 0x33bu);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x22cu, COW_IMG(0x103bd0acu));
    wr32(sp0 - 0x230u, COW_IMG(0x103bcb40u));
    eax = t4;
    ecx = t5;
    edx = t6;
    ebx = 0u;
    loc_22c = COW_IMG(0x103bd0acu);
    loc_230 = COW_IMG(0x103bcb40u);
L_102a035a: ;
    COW_AT(102a035a)
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x228u;
    t120 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, loc_230, loc_22c);
    t121 = g->edx;
    g->ebx = rd32(sp0 - 0x210u);
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->ebp = rd32(sp0 - 0x214u);
    g->edx = t121;
    return t120 & 0xffffff00u;
L_102a0052: ;
    COW_AT(102a0052)
    wr32(sp0 - 0x220u, 2u);
    t7 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x224u, t7);
    wr32(sp0 - 0x228u, arg1);
    g->eax = eax;
    g->ecx = t7;
    g->edx = edx;
    g->esp = sp0 - 0x204u;
    t8 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t7, 2u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        ecx = t9;
        edx = t10;
        goto L_102a00a5;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(102a006d)
    wr32(sp0 - 0x220u, 0x33bu);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x220u;
    t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t12 = g->ecx;
    t13 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x22cu, t13);
    wr32(sp0 - 0x230u, COW_IMG(0x103bd0acu));
    wr32(sp0 - 0x234u, COW_IMG(0x103bcb24u));
    g->ebx = 0u;
    g->edx = t13;
    g->esp = sp0 - 0x22cu;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb24u), COW_IMG(0x103bd0acu));
    t15 = g->edx;
    g->ebx = rd32(sp0 - 0x210u);
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->ebp = rd32(sp0 - 0x214u);
    g->edx = t15;
    return t14 & 0xffffff00u;
L_102a00a5: ;
    COW_AT(102a00a5)
    wr32(sp0 - 0x220u, sp0 - 0x204u);
    g->ebx = 0u;
    g->eax = sp0 - 0x204u;
    g->esp = sp0 - 0x21cu;
    t16 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x204u);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        eax = t16;
        edx = t18;
        goto L_102a00d9;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    COW_AT(102a00b6)
    wr32(sp0 - 0x220u, 0x33cu);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t19 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x22cu, COW_IMG(0x103bd09cu));
    wr32(sp0 - 0x230u, COW_IMG(0x103bc94cu));
    eax = t19;
    ecx = t20;
    edx = t21;
    ebx = 0u;
    loc_22c = COW_IMG(0x103bd09cu);
    loc_230 = COW_IMG(0x103bc94cu);
    goto L_102a035a;
L_102a00d9: ;
    COW_AT(102a00d9)
    wr32(sp0 - 0x220u, sp0 - 0x20cu);
    g->ebx = 0u;
    g->eax = eax;
    g->esp = sp0 - 0x21cu;
    t22 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x20cu, edx, 1, 1, sp0 - 0x20cu);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        ebx = 0u;
        ebp = 0u;
        goto L_102a0219;
    }
    eax = t22;
    ecx = t23;
    ebx = 0u;
L_102a00ee: ;
    COW_AT(102a00ee)
    wr32(sp0 - 0x220u, COW_IMG(0x103b42e4u));
    t25 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x224u, t25);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x208u;
    t26 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t25, 1, 7, t25, COW_IMG(0x103b42e4u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu));
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 != 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_102a031c;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(102a0108)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t29 = cow_stdcall(g, COW_IMG(0x10291b90u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    g->ecx = t30;
    g->edx = t31;
    t32 = cow_stdcall(g, COW_IMG(0x10291380u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x220u, sp0 - 0x20cu);
    g->ebx = t32;
    g->eax = sp0 - 0x20cu;
    t35 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, t33, t34, 1, 1, sp0 - 0x20cu);
    t36 = g->ecx;
    t37 = g->edx;
    if ((uint8_t)t35 == 0u)
    {
        eax = t35;
        ecx = t36;
        ebx = t32;
        ebp = t29;
        goto L_102a0204;
    }
    eax = t35;
    edx = t37;
    ebx = t32;
    ebp = t29;
L_102a012b: ;
    COW_AT(102a012b)
    wr32(sp0 - 0x220u, COW_IMG(0x103bd090u));
    t38 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x224u, t38);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x208u;
    t39 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t38, edx, 1, 7, t38, COW_IMG(0x103bd090u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu));
    t40 = g->ecx;
    t41 = g->edx;
    if (t39 != 0u)
    {
        ecx = t40;
        edx = t41;
        goto L_102a0178;
    }
    eax = t39;
    ecx = t40;
    COW_AT(102a0141)
    wr32(sp0 - 0x220u, ebx + 0x5cu);
    g->eax = eax;
    g->edx = ebx + 0x5cu;
    g->esp = sp0 - 0x214u;
    t42 = cow_thiscall_cdecl(g, COW_IMG(0x102afd10u), ecx, 3, ebx + 0x5cu, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u));
    t43 = g->ecx;
    t44 = g->edx;
    if ((uint8_t)t42 != 0u)
    {
        eax = t42;
        edx = t44;
        goto L_102a01ef;
    }
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(102a0155)
    wr32(sp0 - 0x220u, 0x342u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t45 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t46 = g->ecx;
    t47 = g->edx;
    wr32(sp0 - 0x22cu, COW_IMG(0x103bd090u));
    wr32(sp0 - 0x230u, COW_IMG(0x103bcea4u));
    eax = t45;
    ecx = t46;
    edx = t47;
    loc_22c = COW_IMG(0x103bd090u);
    loc_230 = COW_IMG(0x103bcea4u);
    goto L_102a035a;
L_102a0178: ;
    COW_AT(102a0178)
    wr32(sp0 - 0x220u, COW_IMG(0x1038fcb8u));
    t48 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x224u, t48);
    g->ebx = ebx;
    g->eax = t48;
    g->esp = sp0 - 0x208u;
    t49 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t48, COW_IMG(0x1038fcb8u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu));
    t50 = g->ecx;
    t51 = g->edx;
    if (t49 != 0u)
    {
        eax = t49;
        ecx = t50;
        goto L_102a01c1;
    }
    eax = t49;
    edx = t51;
    COW_AT(102a018e)
    wr32(sp0 - 0x220u, ebx + 0x78u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x214u;
    t52 = cow_thiscall_cdecl(g, COW_IMG(0x102afd10u), ebx + 0x78u, 3, ebx + 0x78u, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u));
    t53 = g->ecx;
    t54 = g->edx;
    if ((uint8_t)t52 != 0u)
    {
        eax = t52;
        edx = t54;
        goto L_102a01ef;
    }
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(102a019e)
    wr32(sp0 - 0x220u, 0x343u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t55 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t56 = g->ecx;
    t57 = g->edx;
    wr32(sp0 - 0x22cu, COW_IMG(0x1038fcb8u));
    wr32(sp0 - 0x230u, COW_IMG(0x103bcea4u));
    eax = t55;
    ecx = t56;
    edx = t57;
    loc_22c = COW_IMG(0x1038fcb8u);
    loc_230 = COW_IMG(0x103bcea4u);
    goto L_102a035a;
L_102a01c1: ;
    COW_AT(102a01c1)
    wr32(sp0 - 0x220u, COW_IMG(0x103bd088u));
    t58 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x224u, t58);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x208u;
    t59 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t58, 1, 7, t58, COW_IMG(0x103bd088u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu));
    t60 = g->ecx;
    t61 = g->edx;
    if (t59 != 0u)
    {
        eax = t59;
        ecx = t60;
        edx = t61;
        goto L_102a02fc;
    }
    ecx = t60;
    edx = t61;
    COW_AT(102a01db)
    wr32(sp0 - 0x220u, ebx + 0x68u);
    g->eax = ebx + 0x68u;
    g->edx = edx;
    g->esp = sp0 - 0x214u;
    t62 = cow_thiscall_cdecl(g, COW_IMG(0x102afd50u), ecx, 3, ebx + 0x68u, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u));
    t63 = g->ecx;
    t64 = g->edx;
    if ((uint8_t)t62 == 0u)
    {
        eax = t62;
        ecx = t63;
        edx = t64;
        goto L_102a02dc;
    }
    eax = t62;
    edx = t64;
L_102a01ef: ;
    COW_AT(102a01ef)
    wr32(sp0 - 0x220u, sp0 - 0x20cu);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x21cu;
    t65 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x20cu, edx, 1, 1, sp0 - 0x20cu);
    t66 = g->ecx;
    t67 = g->edx;
    if ((uint8_t)t65 != 0u)
    {
        eax = t65;
        edx = t67;
        goto L_102a012b;
    }
    eax = t65;
    ecx = t66;
L_102a0204: ;
    COW_AT(102a0204)
    wr32(sp0 - 0x220u, sp0 - 0x20cu);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x21cu;
    t74 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x20cu, 1, 1, sp0 - 0x20cu);
    t75 = g->ecx;
    t76 = g->edx;
    if ((uint8_t)t74 != 0u)
    {
        eax = t74;
        ecx = t75;
        goto L_102a00ee;
    }
    eax = t74;
    ecx = t75;
    edx = t76;
L_102a0219: ;
    COW_AT(102a0219)
    wr32(sp0 - 0x220u, 0u);
    wr32(sp0 - 0x224u, 0u);
    wr32(sp0 - 0x228u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x21cu;
    t80 = cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), ecx, 3, 0u, 0u, 0u);
    t81 = g->ecx;
    t82 = rd32(sp0 - 0x204u);
    wr32(sp0 - 0x220u, t82);
    g->ecx = t81;
    g->edx = t82;
    g->esp = sp0 - 0x220u;
    t83 = cow_stdcall(g, COW_IMG(0x102afdf0u), 0);
    t84 = g->ecx;
    t85 = g->edx;
    wr32(sp0 - 0x224u, t83);
    wr32(sp0 - 0x228u, sp0 - 0x200u);
    g->eax = sp0 - 0x200u;
    g->edx = t85;
    g->esp = sp0 - 0x21cu;
    t86 = cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), t84, 3, sp0 - 0x200u, t83, rd32(sp0 - 0x220u));
    t87 = g->edx;
    wr32(sp0 - 0x22cu, sp0 - 0x200u);
    g->edi = arg1;
    g->edx = t87;
    g->esp = sp0 - 0x228u;
    t88 = cow_thiscall_cdecl(g, COW_IMG(0x1028a280u), sp0 - 0x200u, 1, sp0 - 0x200u);
    t89 = g->ecx;
    t90 = g->edx;
    if ((uint8_t)t88 == 0u)
    {
        eax = t88;
        ecx = t89;
        edx = t90;
        goto L_102a033c;
    }
    eax = t88;
    ecx = t89;
    COW_AT(102a0251)
    wr32(sp0 - 0x220u, sp0 - 0x200u);
    g->eax = eax;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x214u;
    t91 = cow_thiscall_cdecl(g, COW_IMG(0x102b09c0u), ecx, 3, sp0 - 0x200u, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u));
    t92 = g->ecx;
    t93 = g->edx;
    if (t91 == 0u)
    {
        eax = t91;
        ecx = t92;
        edx = t93;
        goto L_102a033c;
    }
    eax = t91;
    ecx = t92;
    edx = t93;
    esi = t91;
    COW_AT(102a0268)
    if (ebp != 0u)
    {
    COW_AT(102a026c)
        wr32(sp0 - 0x220u, ebx);
        wr32(sp0 - 0x224u, ebp);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x21cu;
        cow_cdecl(g, COW_IMG(0x10291f20u), 2, ebp, ebx);
        t94 = g->ecx;
        t95 = g->edx;
        t96 = rd32(esi + 0x1cu);
        wr32(sp0 - 0x228u, t96);
        wr32(sp0 - 0x22cu, ebp);
        g->eax = t96;
        g->esp = sp0 - 0x224u;
        t97 = cow_cdecl(g, COW_IMG(0x10291f30u), 2, ebp, t96);
        eax = t97;
    }
    COW_AT(102a0280)
    t98 = rd32(arg1 + 0x44u);
    wr32(sp0 - 0x220u, t98);
    wr32(sp0 - 0x224u, 2u);
    t99 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x228u, t99);
    wr32(sp0 - 0x22cu, arg1);
    g->edx = t99;
    g->esp = sp0 - 0x21cu;
    cow_thiscall_cdecl(g, COW_IMG(0x102799e0u), t98, 4, arg1, t99, 2u, t98);
    t100 = g->edx;
    t101 = rd32(arg1 + 0x44u);
    wr32(sp0 - 0x230u, t101);
    wr32(sp0 - 0x234u, 2u);
    t102 = rd32(sp0 - 0x204u);
    wr32(sp0 - 0x238u, t102);
    wr32(sp0 - 0x23cu, arg1);
    g->eax = t101;
    g->edx = t100;
    g->esp = sp0 - 0x22cu;
    t103 = cow_thiscall_cdecl(g, COW_IMG(0x10279910u), t102, 4, arg1, t102, 2u, t101);
    t104 = g->ecx;
    t105 = g->edx;
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, arg1);
    g->edx = t105;
    g->esp = sp0 - 0x230u;
    t106 = cow_thiscall_cdecl(g, COW_IMG(0x10279550u), t104, 5, arg1, esi, arg1, rd32(sp0 - 0x238u), 2u);
    t107 = g->ecx;
    t108 = g->edx;
    wr32(sp0 - 0x248u, esi);
    wr32(sp0 - 0x24cu, arg1);
    g->edx = t108;
    g->esp = sp0 - 0x240u;
    t109 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), t107, 3, arg1, esi, arg1);
    t110 = g->ecx;
    t111 = g->edx;
    if (ebp == 0u)
    {
        eax = t109;
        ecx = t110;
        edx = t111;
    }
    else
    {
        eax = t109;
        ecx = t110;
        edx = t111;
    COW_AT(102a02b7)
        wr32(sp0 - 0x220u, ebp);
        wr32(sp0 - 0x224u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x218u;
        t112 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), ecx, 3, arg1, ebp, rd32(sp0 - 0x21cu));
        t113 = g->ecx;
        t114 = g->edx;
        eax = t112;
        ecx = t113;
        edx = t114;
    }
    COW_AT(102a02c1)
    if (ebx != 0u)
    {
    COW_AT(102a02c5)
        wr32(sp0 - 0x220u, ebx);
        wr32(sp0 - 0x224u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x218u;
        t115 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), ecx, 3, arg1, ebx, rd32(sp0 - 0x21cu));
        t116 = g->edx;
        eax = t115;
        edx = t116;
    }
    COW_AT(102a02cf)
    g->ebx = rd32(sp0 - 0x210u);
    g->esi = rd32(sp0 - 0x218u);
    g->edi = rd32(sp0 - 0x21cu);
    g->ebp = rd32(sp0 - 0x214u);
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_102a02dc: ;
    COW_AT(102a02dc)
    wr32(sp0 - 0x220u, 0x344u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t68 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t69 = g->ecx;
    t70 = g->edx;
    wr32(sp0 - 0x22cu, COW_IMG(0x103bd088u));
    wr32(sp0 - 0x230u, COW_IMG(0x103bd064u));
    eax = t68;
    ecx = t69;
    edx = t70;
    loc_22c = COW_IMG(0x103bd088u);
    loc_230 = COW_IMG(0x103bd064u);
    goto L_102a035a;
L_102a02fc: ;
    COW_AT(102a02fc)
    wr32(sp0 - 0x220u, 0x346u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t71 = g->ecx;
    t72 = g->edx;
    t73 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x22cu, t73);
    wr32(sp0 - 0x230u, COW_IMG(0x103bd044u));
    eax = t73;
    ecx = t71;
    edx = t72;
    loc_22c = t73;
    loc_230 = COW_IMG(0x103bd044u);
    goto L_102a035a;
L_102a031c: ;
    COW_AT(102a031c)
    wr32(sp0 - 0x220u, 0x34bu);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x220u;
    t77 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t78 = g->edx;
    t79 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x22cu, t79);
    wr32(sp0 - 0x230u, COW_IMG(0x103bd020u));
    eax = t77;
    ecx = t79;
    edx = t78;
    loc_22c = t79;
    loc_230 = COW_IMG(0x103bd020u);
    goto L_102a035a;
L_102a033c: ;
    COW_AT(102a033c)
    wr32(sp0 - 0x220u, 0x355u);
    wr32(sp0 - 0x224u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x228u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x220u;
    t117 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t118 = g->ecx;
    t119 = rd32(sp0 - 0x204u);
    wr32(sp0 - 0x22cu, t119);
    wr32(sp0 - 0x230u, COW_IMG(0x103bcffcu));
    eax = t117;
    ecx = t118;
    edx = t119;
    loc_22c = t119;
    loc_230 = COW_IMG(0x103bcffcu);
    goto L_102a035a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a0010(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a002fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x21cu);
        in_esi = rd32(sp0 - 0x218u);
        in_ebp = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x21cu;
        g->ebx = 0u;
        wr32(sp0 - 0x220u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x102a0052u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x21cu);
        in_esi = rd32(sp0 - 0x218u);
        in_ebp = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x21cu;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x220u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x102a006du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a00a5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->ebx = 0u;
        g->ebp = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a00b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->ebx = 0u;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102a00d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->ebx = 0u;
        g->ebp = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102a00eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x102a0108u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a012bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x102a0141u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0155u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x102a0178u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a018eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a019eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x102a01c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a01dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a01efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0204u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x102a0219u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x102a0251u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0268u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        wr32(sp0 - 0x220u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a026cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        wr32(sp0 - 0x220u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0280u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_22c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_22c = rd32(sp0 - 0x22cu);
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a02b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a02c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a02c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a02cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x102a02dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x102a02fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x102a031cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x102a033cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x21cu;
        wr32(sp0 - 0x22cu, sp0 - 0x200u);
        wr32(sp0 - 0x228u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a035au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_22c;
        uint32_t loc_230;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_230 = rd32(sp0 - 0x230u);
        loc_22c = rd32(sp0 - 0x22cu);
        g->esp = sp0 - 0x230u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a0010(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a0010(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
