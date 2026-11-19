/* f_0x1000aea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1000aea0(Guest* g)
{
    double d1;
    double d10;
    double d18;
    double d19;
    double d20;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_18_f;
    uint32_t loc_1c;
    uint32_t loc_24;
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
    uint32_t t2;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000aeceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000aece;
    case 0x1000aef8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000aef8;
    case 0x1000af15u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000af15;
    case 0x1000af22u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000af22;
    case 0x1000af98u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); goto E_1000af98;
    case 0x1000afa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); goto E_1000afa4;
    case 0x1000b1a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); goto E_1000b1a2;
    default: break;
    }
#endif

    COW_AT(1000aea0)
    g->ecx = self;
    g->edx = in_edx;
    d1 = (double)rdf32(self + 0x178u);
    fpush(g, d1);
    g->esp = sp0 - 0x20u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    d5 = (double)rdf32(self + 0x174u);
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = g->edx;
    if (t2 * t6 == 0x4000u)
    {
        eax = t6;
        edx = t7;
        loc_1c = in_esi;
    }
    else
    {
        eax = t6;
        edx = t7;
    COW_AT(1000aece)
        d8 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x178u) * (double)rdf32(self + 0x174u)) * (double)rdf32(COW_IMG(0x10329a1cu)));
        d9 = fr(g, fr(g, (double)rdf32(self + 0x178u) * (double)rdf32(self + 0x174u)) * (double)rdf32(COW_IMG(0x10329a1cu)));
        if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
        {
            eax = rd32(self + 0xcu);
            ecx = rd32(rd32(self + 0xcu));
    COW_AT(1000af15)
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x13u, 1u);
            t12 = g->ecx;
            ecx = t12;
            loc_24 = 3u;
        }
        else
        {
            eax = rd32(self + 0xcu);
            ecx = rd32(rd32(self + 0xcu));
            loc_18_f = d8;
    COW_AT(1000aef8)
            d10 = (double)(float)fr(g, loc_18_f - (double)rdf32(COW_IMG(0x1032961cu)));
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x13u, 3u);
            t11 = g->ecx;
            ecx = t11;
            loc_24 = 2u;
        }
    COW_AT(1000af22)
        t13 = rd32(self + 0xcu);
        g->eax = t13;
        g->edx = rd32(t13);
        t14 = rd32(t13);
        g->esp = sp0 - 0x24u;
        t15 = cow_thiscall(g, rd32(t14 + 0xc8u), ecx, 2, t13, 0x14u);
        t16 = g->ecx;
        t17 = g->edx;
        d18 = (double)(float)fr(g, cow_bits2f(in_esi) * (double)rdf32(self + 0x180u));
        d19 = (double)(float)fr(g, cow_bits2f(in_esi) * (double)rdf32(self + 0x184u));
        g->ecx = t16;
        g->edx = t17;
        d20 = fr(g, cow_bits2f(in_esi) * (double)rdf32(self + 0x17cu));
        fpush(g, d20);
        g->esp = sp0 - 0x28u;
        t21 = cow_call_regs(g, COW_IMG(0x10311c6cu), t15, g->ecx, g->edx, 1, 0);
        t22 = g->ecx;
        t23 = g->edx;
        g->ecx = t22;
        g->edx = t23;
        fpush(g, d18);
        t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), t21, g->ecx, g->edx, 1, 0);
        t25 = g->ecx;
        t26 = g->edx;
        g->edx = t26;
        fpush(g, d19);
        t27 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t24, g->ecx, g->edx, 1, 0);
        t28 = g->edx;
        t29 = (((uint8_t)t21 | 0xffff8000u) << 8u | (uint8_t)t24) << 8u;
        eax = COW_IMG(0x1034fe50u);
        ecx = t29 | (uint8_t)t27;
        edx = t28;
L_1000af98: ;
    COW_AT(1000af98)
        wr32(eax, ecx);
        if ((int32_t)(eax + 0x14u) < (int32_t)COW_IMG(0x1034fea0u))
        {
            eax = eax + 0x14u;
            goto L_1000af98;
        }
        eax = eax + 0x14u;
    COW_AT(1000afa4)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t30 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
        t31 = g->ecx;
        t32 = g->edx;
        t33 = rd32(t30);
        wrf32(COW_IMG(0x1034fe40u), (float)(double)(int64_t)cow_i64(t33, 0u));
        g->eax = t33;
        g->edx = t32;
        t34 = cow_thiscall(g, COW_IMG(0x10009e00u), t31, 0);
        t35 = g->edx;
        t36 = rd32(t34);
        wrf32(COW_IMG(0x1034fe68u), (float)(double)(int64_t)cow_i64(t36, 0u));
        t37 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
        t38 = g->ecx;
        t39 = rd32(t37 + 8u);
        wrf32(COW_IMG(0x1034fe54u), (float)(double)(int64_t)cow_i64(t39, 0u));
        g->edx = t39;
        t40 = cow_thiscall(g, COW_IMG(0x10009e00u), t38, 0);
        t41 = g->ecx;
        t42 = g->edx;
        t43 = rd32(t40 + 8u);
        wrf32(COW_IMG(0x1034fe7cu), (float)(double)(int64_t)cow_i64(t43, 0u));
        g->eax = t43;
        g->edx = t42;
        t44 = cow_thiscall(g, COW_IMG(0x10009e00u), t41, 0);
        t45 = g->edx;
        t46 = rd32(t44 + 4u);
        wrf32(COW_IMG(0x1034fe44u), (float)(double)(int64_t)cow_i64(t46, 0u));
        t47 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
        t48 = g->ecx;
        t49 = rd32(t47 + 4u);
        wrf32(COW_IMG(0x1034fe58u), (float)(double)(int64_t)cow_i64(t49, 0u));
        g->edx = t49;
        t50 = cow_thiscall(g, COW_IMG(0x10009e00u), t48, 0);
        t51 = g->ecx;
        t52 = g->edx;
        t53 = rd32(t50 + 0xcu);
        wrf32(COW_IMG(0x1034fe6cu), (float)(double)(int64_t)cow_i64(t53, 0u));
        g->eax = t53;
        t54 = cow_thiscall(g, COW_IMG(0x10009e00u), t51, 0);
        t55 = rd32(t54 + 0xcu);
        wrf32(COW_IMG(0x1034fe80u), (float)(double)(int64_t)cow_i64(t55, 0u));
        t56 = rd32(self + 0xcu);
        g->edx = rd32(t56);
        t57 = rd32(t56);
        cow_thiscall(g, rd32(t57 + 0xc8u), t55, 3, t56, 7u, 0u);
        t58 = g->edx;
        t59 = rd32(self + 0xcu);
        t60 = rd32(t59);
        cow_thiscall(g, rd32(t60 + 0xc8u), t60, 3, t59, 0xeu, 0u);
        t61 = g->ecx;
        t62 = rd32(self + 0xcu);
        g->edx = rd32(t62);
        t63 = rd32(t62);
        cow_thiscall(g, rd32(t63 + 0xc8u), t61, 3, t62, 0x89u, 0u);
        t64 = g->edx;
        t65 = rd32(self + 0xcu);
        t66 = rd32(t65);
        cow_thiscall(g, rd32(t66 + 0xc8u), t66, 3, t65, 0x1cu, 0u);
        t67 = g->ecx;
        t68 = rd32(self + 0xcu);
        g->edx = rd32(t68);
        t69 = rd32(t68);
        cow_thiscall(g, rd32(t69 + 0xc8u), t67, 3, t68, 0x1bu, 1u);
        t70 = g->edx;
        t71 = rd32(self + 0xcu);
        t72 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t72 + 0xfcu), t72, 4, t71, 0u, 1u, 2u);
        t73 = g->ecx;
        t74 = rd32(self + 0xcu);
        g->edx = rd32(rd32(self + 0xcu));
        t75 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t75 + 0xfcu), t73, 4, t74, 0u, 2u, 1u);
        t76 = g->edx;
        t77 = rd32(self + 0xcu);
        t78 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t78 + 0xfcu), t78, 4, t77, 0u, 4u, 2u);
        t79 = g->ecx;
        t80 = rd32(self + 0xcu);
        g->edx = rd32(rd32(self + 0xcu));
        t81 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t81 + 0xfcu), t79, 4, t80, 0u, 5u, 1u);
        t82 = g->edx;
        t83 = rd32(self + 0xcu);
        t84 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t84 + 0xfcu), t84, 4, t83, 1u, 1u, 1u);
        t85 = g->ecx;
        t86 = rd32(self + 0xcu);
        g->edx = rd32(rd32(self + 0xcu));
        t87 = rd32(rd32(self + 0xcu));
        cow_thiscall(g, rd32(t87 + 0xfcu), t85, 4, t86, 1u, 4u, 1u);
        t88 = g->edx;
        t89 = rd32(self + 0xcu);
        g->eax = t89;
        g->edx = t88;
        t90 = cow_thiscall(g, rd32(rd32(t89) + 0x130u), rd32(t89), 2, t89, 0x44u);
        t91 = g->edx;
        cow_thiscall(g, COW_IMG(0x1000cd00u), self, 4, 5u, 2u, COW_IMG(0x1034fe40u), 0x14u);
        t92 = g->ecx;
        t93 = rd32(self + 0xcu);
        g->edx = rd32(t93);
        t94 = rd32(t93);
        cow_thiscall(g, rd32(t94 + 0xc8u), t92, 3, t93, 7u, 1u);
        t95 = g->edx;
        t96 = rd32(self + 0xcu);
        t97 = rd32(t96);
        cow_thiscall(g, rd32(t97 + 0xc8u), t97, 3, t96, 0xeu, 1u);
        t98 = g->ecx;
        t99 = rd32(self + 0xcu);
        g->edx = rd32(t99);
        t100 = rd32(t99);
        cow_thiscall(g, rd32(t100 + 0xc8u), t98, 3, t99, 0x89u, 1u);
        t101 = g->edx;
        t102 = rd32(self + 0xcu);
        g->eax = t102;
        t103 = rd32(t102);
        t104 = cow_thiscall(g, rd32(t103 + 0xc8u), t103, 3, t102, 0x1cu, 0u);
        t105 = g->ecx;
        t106 = rd32(self + 0xcu);
        g->edx = rd32(rd32(self + 0xcu));
        t107 = rd32(rd32(self + 0xcu));
        g->esp = sp0 - 0x20u;
        t108 = cow_thiscall(g, rd32(t107 + 0xc8u), t105, 4, t106, 0x1bu, 0u, loc_24);
        t109 = g->edx;
        eax = t108;
        edx = t109;
        loc_1c = t55;
    }
    COW_AT(1000b1a2)
    g->ebx = in_ebx;
    g->esi = loc_1c;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000aea0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000aeceu:
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000aef8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000af15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000af22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1000af98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1000afa4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1000b1a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_1c;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000aea0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1000aea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
