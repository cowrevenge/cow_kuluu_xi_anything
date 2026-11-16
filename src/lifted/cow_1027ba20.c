/* f_0x1027ba20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1027ba20(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d43;
    double d49;
    double d55;
    double d67;
    double d73;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_188_f;
    double loc_18c_f;
    uint32_t loc_190;
    uint32_t loc_194;
    uint32_t loc_198;
    uint32_t loc_19c;
    uint32_t loc_1c0;
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
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
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
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 484u);

    wr32(sp0 - 0x1a4u, in_ebx);
    wr32(sp0 - 0x1a8u, in_ebp);
    wr32(sp0 - 0x1acu, in_esi);
    wr32(sp0 - 0x1b0u, in_edi);
    wr32(sp0 - 0x18cu, 0u);
    wr32(sp0 - 0x188u, 0u);
    if (arg1 != 0u) goto L_1027ba63;
    wr32(sp0 - 0x1b4u, 0x13du);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1b4u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b4368u));
    eax = t1;
    ecx = t2;
    edx = t3;
    loc_1c0 = COW_IMG(0x103b4368u);
L_1027bb35: ;
    g->esp = sp0 - 0x1b8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, loc_1c0, COW_IMG(0x103b379cu));
L_1027bb3d: ;
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
L_1027ba63: ;
    if (arg2 == 4u) goto L_1027ba9c;
    if (arg2 == 1u) goto L_1027ba9c;
    if (arg2 == 2u) goto L_1027ba9c;
    if (arg2 == 3u) goto L_1027ba9c;
    wr32(sp0 - 0x1b4u, 0x145u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1b4u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b4228u));
    eax = t4;
    ecx = t5;
    edx = t6;
    loc_1c0 = COW_IMG(0x103b4228u);
    goto L_1027bb35;
L_1027ba9c: ;
    wr32(sp0 - 0x1b4u, arg1);
    wr32(sp0 - 0x1b8u, 0x50u);
    wr32(sp0 - 0x1bcu, 1u);
    wr32(sp0 - 0x1c0u, sp0 - 0x50u);
    g->esp = sp0 - 0x194u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, in_edx, 1, 11, sp0 - 0x50u, 1u, 0x50u, arg1, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u));
    t7 = g->edx;
    wr32(sp0 - 0x1c4u, arg1);
    wr32(sp0 - 0x1c8u, 0x100u);
    wr32(sp0 - 0x1ccu, sp0 - 0x150u);
    g->ecx = sp0 - 0x150u;
    g->esp = sp0 - 0x1bcu;
    t8 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, t7, 1, 4, sp0 - 0x150u, 0x100u, arg1, sp0 - 0x50u);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_1027bb1c;
    }
    ecx = t9;
    edx = t10;
L_1027bac5: ;
    edi = sp0 - 0x150u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u) goto L_1027bb05;
    ecx = ~ecx - 1u;
    if (rd8(sp0 - 0x150u) == 0xau) goto L_1027bb05;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x150u);
    if ((uint8_t)eax == 0x23u) goto L_1027bb05;
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b435cu));
    wr32(sp0 - 0x1b8u, sp0 - 0x150u);
    g->ebx = arg2;
    g->esp = sp0 - 0x1a8u;
    t11 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, sp0 - 0x150u, 1, 4, sp0 - 0x150u, COW_IMG(0x103b435cu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t12 = g->edx;
    esi = t11;
    edi = COW_IMG(0x103b4350u);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = t12;
        goto L_1027bb4a;
    }
    edx = t12;
L_1027bb05: ;
    wr32(sp0 - 0x1b4u, arg1);
    wr32(sp0 - 0x1b8u, 0x100u);
    wr32(sp0 - 0x1bcu, sp0 - 0x150u);
    g->ecx = sp0 - 0x150u;
    g->esp = sp0 - 0x1acu;
    t128 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x150u, 0x100u, arg1, rd32(sp0 - 0x1b0u));
    t129 = g->ecx;
    t130 = g->edx;
    if (t128 != 0u)
    {
        ecx = t129;
        edx = t130;
        goto L_1027bac5;
    }
    eax = t128;
    ecx = t129;
    edx = t130;
L_1027bb1c: ;
    wr32(sp0 - 0x1b4u, 0x1a0u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1b4u;
    t131 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t132 = g->ecx;
    t133 = g->edx;
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b4324u));
    eax = t131;
    ecx = t132;
    edx = t133;
    loc_1c0 = COW_IMG(0x103b4324u);
    goto L_1027bb35;
L_1027bb4a: ;
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b435cu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->esp = sp0 - 0x1a8u;
    t13 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b435cu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x1bcu, t13);
    g->edx = t15;
    g->esp = sp0 - 0x1b8u;
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t14, 1, t13);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x190u, t16);
    if ((int32_t)t16 >= 1)
    {
        ecx = t17;
        edx = t18;
        esi = t16;
        loc_190 = t16;
        goto L_1027bba4;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    esi = t16;
    wr32(sp0 - 0x1b4u, 0x15fu);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1b4u;
    t19 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x1c0u, esi);
    wr32(sp0 - 0x1c4u, COW_IMG(0x103b4310u));
    wr32(sp0 - 0x1c8u, COW_IMG(0x10362054u));
    wr32(sp0 - 0x1ccu, COW_IMG(0x103b42fcu));
    g->esp = sp0 - 0x1c4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), COW_IMG(0x10362054u));
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
L_1027bba4: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1b0u;
    t22 = cow_stdcall(g, COW_IMG(0x1027b5a0u), 0);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x1b4u, esi);
    wr32(sp0 - 0x1b8u, t22);
    wr32(sp0 - 0x1a0u, t22);
    g->ecx = t23;
    g->esp = sp0 - 0x19cu;
    cow_cdecl(g, COW_IMG(0x1027c4e0u), 7, t22, esi, rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), t22);
    t25 = g->ecx;
    wr32(sp0 - 0x19cu, 0u);
    if ((int32_t)esi <= 0) goto L_1027be2a;
    ecx = t25;
    wr32(sp0 - 0x194u, 0u);
    wr32(sp0 - 0x198u, 0u);
    loc_19c = 0u;
    loc_194 = 0u;
    loc_198 = 0u;
L_1027bbdb: ;
    wr32(sp0 - 0x1b4u, arg1);
    wr32(sp0 - 0x1b8u, 0x100u);
    wr32(sp0 - 0x1bcu, sp0 - 0x150u);
    g->ecx = ecx;
    g->esp = sp0 - 0x1acu;
    t26 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, sp0 - 0x150u, 1, 4, sp0 - 0x150u, 0x100u, arg1, rd32(sp0 - 0x1b0u));
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 == 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_1027be39;
    }
    ecx = t27;
    edx = t28;
    wr32(sp0 - 0x1b4u, 0x16au);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, sp0 - 0x150u);
    g->edx = edx;
    g->esp = sp0 - 0x1b0u;
    t29 = cow_cdecl(g, COW_IMG(0x10291330u), 3, sp0 - 0x150u, COW_IMG(0x103b40ecu), 0x16au);
    t30 = g->edx;
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b435cu));
    wr32(sp0 - 0x1c4u, sp0 - 0x150u);
    g->ebx = arg2;
    g->esp = sp0 - 0x1b4u;
    t31 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, sp0 - 0x150u, t30, 1, 4, sp0 - 0x150u, COW_IMG(0x103b435cu), sp0 - 0x150u, COW_IMG(0x103b40ecu));
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x1c8u, t31);
    g->edx = t33;
    g->esp = sp0 - 0x1c4u;
    cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t32, 1, t31);
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 - 0x1ccu, COW_IMG(0x103b435cu));
    wr32(sp0 - 0x1d0u, 0u);
    g->ebx = arg2;
    g->esp = sp0 - 0x1c0u;
    cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, t34, t35, 1, 4, 0u, COW_IMG(0x103b435cu), rd32(sp0 - 0x1c8u), sp0 - 0x150u);
    t36 = g->ecx;
    t37 = g->edx;
    ecx = t36;
    edx = t37;
    ebp = t29;
    esi = 0u;
L_1027bc32: ;
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->esp = sp0 - 0x1a8u;
    t38 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0x1bcu, t38);
    g->ebx = arg2;
    g->edx = t40;
    g->esp = sp0 - 0x1b0u;
    cow_thiscall_cdecl(g, COW_IMG(0x10313922u), t39, 3, t38, 0u, COW_IMG(0x103b42ecu));
    t41 = g->ecx;
    t42 = g->edx;
    d43 = cow_take_float(g);
    wrf32(esi * 4u + sp0 - 0x178u, (float)d43);
    if ((int32_t)(esi + 1u) < 3)
    {
        ecx = t41;
        edx = t42;
        esi = esi + 1u;
        goto L_1027bc32;
    }
    ecx = t41;
    edx = t42;
    esi = 0u;
L_1027bc53: ;
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->esp = sp0 - 0x1a8u;
    t44 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t45 = g->ecx;
    t46 = g->edx;
    wr32(sp0 - 0x1bcu, t44);
    g->ebx = arg2;
    g->edx = t46;
    g->esp = sp0 - 0x1b0u;
    cow_thiscall_cdecl(g, COW_IMG(0x10313922u), t45, 3, t44, 0u, COW_IMG(0x103b42ecu));
    t47 = g->ecx;
    t48 = g->edx;
    d49 = cow_take_float(g);
    wrf32(esi * 4u + sp0 - 0x160u, (float)d49);
    if ((int32_t)(esi + 1u) < 4)
    {
        ecx = t47;
        edx = t48;
        esi = esi + 1u;
        goto L_1027bc53;
    }
    ecx = t47;
    edx = t48;
    esi = 0u;
L_1027bc74: ;
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->esp = sp0 - 0x1a8u;
    t50 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t51 = g->ecx;
    t52 = g->edx;
    wr32(sp0 - 0x1bcu, t50);
    g->ebx = arg2;
    g->edx = t52;
    g->esp = sp0 - 0x1b0u;
    cow_thiscall_cdecl(g, COW_IMG(0x10313922u), t51, 3, t50, 0u, COW_IMG(0x103b42ecu));
    t53 = g->ecx;
    t54 = g->edx;
    d55 = cow_take_float(g);
    wrf32(esi * 4u + sp0 - 0x16cu, (float)d55);
    if ((int32_t)(esi + 1u) < 3)
    {
        ecx = t53;
        edx = t54;
        esi = esi + 1u;
        goto L_1027bc74;
    }
    ecx = t53;
    edx = t54;
    esi = 0u;
L_1027bc95: ;
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->esp = sp0 - 0x1a8u;
    t56 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t57 = g->ecx;
    t58 = g->edx;
    wr32(sp0 - 0x1bcu, t56);
    g->edx = t58;
    g->esp = sp0 - 0x1b8u;
    t59 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t57, 1, t56);
    t60 = g->ecx;
    t61 = g->edx;
    wr32(esi * 4u + sp0 - 0x184u, t59);
    if ((int32_t)(esi + 1u) < 3)
    {
        ecx = t60;
        edx = t61;
        esi = esi + 1u;
        goto L_1027bc95;
    }
    ecx = t60;
    edx = t61;
    if ((int32_t)arg2 > 2)
    {
        wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
        wr32(sp0 - 0x1b8u, 0u);
        g->ebx = arg2;
        g->esp = sp0 - 0x1a8u;
        t62 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
        t63 = g->ecx;
        t64 = g->edx;
        wr32(sp0 - 0x1bcu, t62);
        g->ebx = arg2;
        g->edx = t64;
        g->esp = sp0 - 0x1b0u;
        cow_thiscall_cdecl(g, COW_IMG(0x10313922u), t63, 3, t62, 0u, COW_IMG(0x103b42ecu));
        t65 = g->ecx;
        t66 = g->edx;
        d67 = cow_take_float(g);
        wrf32(sp0 - 0x18cu, (float)(double)(float)d67);
        ecx = t65;
        edx = t66;
        loc_18c_f = (double)(float)d67;
    }
    if ((int32_t)arg2 > 3)
    {
        wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
        wr32(sp0 - 0x1b8u, 0u);
        g->ebx = arg2;
        g->esp = sp0 - 0x1a8u;
        t68 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
        t69 = g->ecx;
        t70 = g->edx;
        wr32(sp0 - 0x1bcu, t68);
        g->ebx = arg2;
        g->edx = t70;
        g->esp = sp0 - 0x1b0u;
        cow_thiscall_cdecl(g, COW_IMG(0x10313922u), t69, 3, t68, 0u, COW_IMG(0x103b42ecu));
        t71 = g->ecx;
        t72 = g->edx;
        d73 = cow_take_float(g);
        wrf32(sp0 - 0x188u, (float)(double)(float)d73);
        ecx = t71;
        edx = t72;
        loc_188_f = (double)(float)d73;
    }
    if (arg2 == 1u)
    {
        wr32(sp0 - 0x184u, 3u);
        wr32(sp0 - 0x180u, 4u);
        wr32(sp0 - 0x17cu, 3u);
    }
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->esp = sp0 - 0x1a8u;
    t74 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    esi = t74;
    edi = COW_IMG(0x103b42e4u);
    ecx = 7u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t74;
        goto L_1027be8f;
    }
    wr32(sp0 - 0x1b4u, COW_IMG(0x103b42ecu));
    wr32(sp0 - 0x1b8u, 0u);
    g->ebx = arg2;
    g->esp = sp0 - 0x1a8u;
    t75 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, 0u, 1, 4, 0u, COW_IMG(0x103b42ecu), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    t76 = g->ecx;
    t77 = g->edx;
    wr32(sp0 - 0x1bcu, t75);
    g->edx = t77;
    g->esp = sp0 - 0x1b8u;
    t78 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t76, 1, t75);
    t79 = g->ecx;
    t80 = g->edx;
    if ((int32_t)t78 < -1)
    {
        eax = t78;
        ecx = t79;
        edx = t80;
        goto L_1027bf7d;
    }
    eax = t78;
    ecx = t79;
    edx = t80;
    ebx = t78;
    if ((int32_t)ebx >= (int32_t)rd32(sp0 - 0x190u)) goto L_1027bf7d;
    if (ebx != 0xffffffffu) goto L_1027bd68;
    if ((int32_t)rd32(sp0 - 0x198u) > 0)
    {
        eax = rd32(sp0 - 0x198u);
        goto L_1027bf06;
    }
L_1027bd68: ;
    wr32(sp0 - 0x1b4u, sp0 - 0x178u);
    t87 = rd32(sp0 - 0x194u) + rd32(rd32(sp0 - 0x1a0u) + 0x24u);
    wr32(sp0 - 0x1b8u, t87);
    g->eax = sp0 - 0x178u;
    g->edx = edx;
    t88 = rd32(sp0 - 0x198u);
    t89 = rd32(rd32(sp0 - 0x1a0u) + 0x20u);
    g->esp = sp0 - 0x1b4u;
    t90 = cow_cdecl(g, COW_IMG(0x102915d0u), 1, t87);
    t91 = g->edx;
    wr32(sp0 - 0x1bcu, sp0 - 0x160u);
    wr32(sp0 - 0x1c0u, t87);
    g->ecx = sp0 - 0x160u;
    g->esp = sp0 - 0x1bcu;
    t92 = cow_cdecl(g, COW_IMG(0x10291600u), 1, t87);
    t93 = g->ecx;
    wr32(sp0 - 0x1c4u, sp0 - 0x16cu);
    wr32(sp0 - 0x1c8u, t87);
    g->ecx = t93;
    g->edx = sp0 - 0x16cu;
    g->esp = sp0 - 0x1c4u;
    cow_cdecl(g, COW_IMG(0x10291610u), 1, t87);
    t94 = g->ecx;
    t95 = g->edx;
    wr32(sp0 - 0x1ccu, sp0 - 0x184u);
    wr32(sp0 - 0x1d0u, t87);
    g->eax = sp0 - 0x184u;
    g->edx = t95;
    g->esp = sp0 - 0x1c8u;
    t96 = cow_cdecl(g, COW_IMG(0x102916f0u), 2, t87, sp0 - 0x184u);
    t97 = g->edx;
    t98 = rd32(sp0 - 0x18cu);
    wr32(sp0 - 0x1d4u, t98);
    wr32(sp0 - 0x1d8u, t87);
    g->ecx = t98;
    g->esp = sp0 - 0x1d0u;
    t99 = cow_cdecl(g, COW_IMG(0x102917a0u), 2, t87, t98);
    t100 = g->ecx;
    t101 = rd32(sp0 - 0x188u);
    wr32(sp0 - 0x1dcu, t101);
    wr32(sp0 - 0x1e0u, t87);
    g->ecx = t100;
    g->edx = t101;
    g->esp = sp0 - 0x1d8u;
    cow_cdecl(g, COW_IMG(0x102917b0u), 2, t87, t101);
    t102 = g->ecx;
    t103 = g->edx;
    if (rd32(sp0 - 0x198u) == 0u)
    {
        ecx = t102;
        edx = t103;
    }
    else
    {
        edi = t88 + t89;
        wr32(sp0 - 0x1b4u, edi);
        t104 = ebx * 0xf8u + rd32(rd32(sp0 - 0x1a0u) + 0x20u);
        wr32(sp0 - 0x1b8u, t104);
        g->ecx = rd32(sp0 - 0x1a0u);
        g->edx = rd32(rd32(sp0 - 0x1a0u) + 0x20u);
        t105 = rd32(sp0 - 0x1a0u);
        t106 = rd32(rd32(sp0 - 0x1a0u) + 0x20u);
        g->esp = sp0 - 0x1b0u;
        cow_cdecl(g, COW_IMG(0x10291f30u), 2, t104, edi);
        t107 = g->ecx;
        t108 = g->edx;
        ecx = t107;
        edx = t108;
    }
    wr32(sp0 - 0x1b4u, 0x19bu);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, ebp);
    g->esp = sp0 - 0x1b0u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b40ecu), 0x19bu);
    t109 = rd32(sp0 - 0x19cu) + 1u;
    wr32(sp0 - 0x19cu, t109);
    t110 = rd32(sp0 - 0x198u) + 0xf8u;
    wr32(sp0 - 0x198u, t110);
    t111 = rd32(sp0 - 0x194u) + 0x9cu;
    wr32(sp0 - 0x194u, t111);
    if ((int32_t)(rd32(sp0 - 0x19cu) + 1u) < (int32_t)rd32(sp0 - 0x190u))
    {
        ecx = rd32(sp0 - 0x190u);
        loc_19c = t109;
        loc_198 = t110;
        loc_194 = t111;
        goto L_1027bbcd;
    }
L_1027be2a: ;
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return rd32(sp0 - 0x1a0u);
L_1027bbcd: ;
    goto L_1027bbdb;
L_1027be39: ;
    wr32(sp0 - 0x1b4u, 0x168u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1b4u;
    t124 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t125 = g->edx;
    t126 = rd32(sp0 - 0x19cu);
    wr32(sp0 - 0x1c0u, t126);
    wr32(sp0 - 0x1c4u, COW_IMG(0x103b42ccu));
    wr32(sp0 - 0x1c8u, COW_IMG(0x10362054u));
    wr32(sp0 - 0x1ccu, COW_IMG(0x103b42fcu));
    g->ecx = t126;
    g->esp = sp0 - 0x1c4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), COW_IMG(0x10362054u));
    t127 = g->ecx;
    if (rd32(sp0 - 0x1a0u) == 0u) goto L_1027bb3d;
    eax = rd32(sp0 - 0x1a0u);
    ecx = t127;
    wr32(sp0 - 0x1b4u, sp0 - 0x1a0u);
    g->esp = sp0 - 0x1a8u;
    cow_cdecl(g, COW_IMG(0x1027b630u), 3, sp0 - 0x1a0u, rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
L_1027be8f: ;
    wr32(sp0 - 0x1b4u, 0x183u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->edx = 0u;
    g->esp = sp0 - 0x1b4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t118 = g->edx;
    if (ebp != 0u)
    {
        eax = ebp;
        edx = t118;
    }
    else
    {
        edx = t118;
        eax = COW_IMG(0x10362054u);
    }
    t119 = rd32(sp0 - 0x19cu);
    wr32(sp0 - 0x1b4u, t119);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b42b0u));
    wr32(sp0 - 0x1bcu, eax);
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b42fcu));
    g->ecx = t119;
    g->edx = edx;
    g->esp = sp0 - 0x1b8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), eax);
    t120 = g->ecx;
    t121 = g->edx;
    if (rd32(sp0 - 0x1a0u) == 0u)
    {
        ecx = t120;
        edx = t121;
    }
    else
    {
        eax = rd32(sp0 - 0x1a0u);
        ecx = t120;
        wr32(sp0 - 0x1b4u, sp0 - 0x1a0u);
        g->ecx = ecx;
        g->edx = sp0 - 0x1a0u;
        g->esp = sp0 - 0x1a8u;
        cow_cdecl(g, COW_IMG(0x1027b630u), 3, sp0 - 0x1a0u, rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
        t122 = g->ecx;
        t123 = g->edx;
        ecx = t122;
        edx = t123;
    }
    if (ebp == 0u) goto L_1027bb3d;
    wr32(sp0 - 0x1b4u, 0x183u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, ebp);
    g->esp = sp0 - 0x1b0u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b40ecu), 0x183u);
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
L_1027bf06: ;
    wr32(sp0 - 0x1b4u, 0x18au);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->edx = edx;
    g->esp = sp0 - 0x1b4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t81 = g->edx;
    if (ebp != 0u)
    {
        eax = ebp;
        edx = t81;
    }
    else
    {
        edx = t81;
        eax = COW_IMG(0x10362054u);
    }
    t82 = rd32(sp0 - 0x19cu);
    wr32(sp0 - 0x1b4u, t82);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b4290u));
    wr32(sp0 - 0x1bcu, eax);
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b42fcu));
    g->ecx = t82;
    g->edx = edx;
    g->esp = sp0 - 0x1b8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), eax);
    t83 = g->ecx;
    t84 = g->edx;
    if (rd32(sp0 - 0x1a0u) == 0u)
    {
        ecx = t83;
        edx = t84;
    }
    else
    {
        eax = rd32(sp0 - 0x1a0u);
        ecx = t83;
        wr32(sp0 - 0x1b4u, sp0 - 0x1a0u);
        g->ecx = ecx;
        g->edx = sp0 - 0x1a0u;
        g->esp = sp0 - 0x1a8u;
        cow_cdecl(g, COW_IMG(0x1027b630u), 3, sp0 - 0x1a0u, rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
        t85 = g->ecx;
        t86 = g->edx;
        ecx = t85;
        edx = t86;
    }
    if (ebp == 0u) goto L_1027bb3d;
    wr32(sp0 - 0x1b4u, 0x18au);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, ebp);
    g->esp = sp0 - 0x1b0u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b40ecu), 0x18au);
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
L_1027bf7d: ;
    wr32(sp0 - 0x1b4u, 0x187u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, COW_IMG(0x103b379cu));
    g->edx = edx;
    g->esp = sp0 - 0x1b4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t112 = g->edx;
    if (ebp != 0u)
    {
        eax = ebp;
        edx = t112;
    }
    else
    {
        edx = t112;
        eax = COW_IMG(0x10362054u);
    }
    t113 = rd32(sp0 - 0x19cu);
    wr32(sp0 - 0x1b4u, t113);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b426cu));
    wr32(sp0 - 0x1bcu, eax);
    wr32(sp0 - 0x1c0u, COW_IMG(0x103b42fcu));
    g->ecx = t113;
    g->edx = edx;
    g->esp = sp0 - 0x1b8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b42fcu), eax);
    t114 = g->ecx;
    t115 = g->edx;
    if (rd32(sp0 - 0x1a0u) == 0u)
    {
        ecx = t114;
        edx = t115;
    }
    else
    {
        eax = rd32(sp0 - 0x1a0u);
        ecx = t114;
        wr32(sp0 - 0x1b4u, sp0 - 0x1a0u);
        g->ecx = ecx;
        g->edx = sp0 - 0x1a0u;
        g->esp = sp0 - 0x1a8u;
        cow_cdecl(g, COW_IMG(0x1027b630u), 3, sp0 - 0x1a0u, rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu));
        t116 = g->ecx;
        t117 = g->edx;
        ecx = t116;
        edx = t117;
    }
    if (ebp == 0u) goto L_1027bb3d;
    wr32(sp0 - 0x1b4u, 0x187u);
    wr32(sp0 - 0x1b8u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x1bcu, ebp);
    g->esp = sp0 - 0x1b0u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b40ecu), 0x187u);
    g->ebx = rd32(sp0 - 0x1a4u);
    g->esi = rd32(sp0 - 0x1acu);
    g->edi = rd32(sp0 - 0x1b0u);
    g->ebp = rd32(sp0 - 0x1a8u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027ba20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027ba20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
