/* f_0x102c4e6e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c4e6e(Guest* g)
{
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d80;
    double d81;
    double d82;
    double d83;
    double d87;
    double d88;
    double d89;
    double d90;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_20;
    double loc_20_f;
    double loc_24_f;
    double loc_28_f;
    double loc_2c_f;
    double loc_30_f;
    double loc_34_f;
    double loc_38_f;
    double loc_3c_f;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_54;
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
    uint32_t t5;
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
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t9;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 188u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x40u, in_ebx);
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    wr32(sp0 - 0x4cu, 4u);
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102c4eaa;
    }
    eax = rd32(arg1 + 0x68u);
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8be8u));
    wr32(sp0 - 0x50u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t1 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c8be8u), in_edi, in_esi);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    loc_4c = COW_IMG(0x103c8be8u);
L_102c4e8f: ;
    ecx = loc_4c;
    loc_4 = rd32(sp0 - 4u);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_48 = rd32(sp0 - 0x48u);
L_102c4e91: ;
    if (rd32(sp0 + 0xcu) == 0x20u) goto L_102c4ee0;
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8bccu));
    loc_4c = COW_IMG(0x103c8bccu);
L_102c4e9c: ;
    wr32(sp0 - 0x50u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t5 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_4c);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x54u, t8);
    eax = t5;
    ecx = t6;
    edx = t7;
    loc_54 = t8;
    loc_4c = rd32(sp0 - 0x4cu);
L_102c5246: ;
    wr32(sp0 - 0x58u, arg1);
    g->esp = sp0 - 0x44u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, arg1, loc_54, rd32(sp0 - 0x50u), loc_4c, rd32(sp0 - 0x48u));
L_102c524f: ;
    g->ebx = rd32(sp0 - 0x40u);
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c4eaa: ;
    if ((eax & 4u) == 0u) goto L_102c4eb5;
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8bb4u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_40 = in_ebx;
    loc_44 = in_esi;
    loc_48 = in_edi;
    loc_4c = COW_IMG(0x103c8bb4u);
    goto L_102c4e9c;
L_102c4eb5: ;
    if ((eax & 2u) == 0u) goto L_102c4ec6;
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8b98u));
    wr32(sp0 - 0x50u, arg1);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    t3 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8b98u));
    t4 = g->edx;
    eax = t3;
    edx = t4;
    loc_4c = COW_IMG(0x103c8b98u);
    goto L_102c4e8f;
L_102c4ec6: ;
    if (arg2 == 0u)
    {
        eax = arg2;
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_40 = in_ebx;
        loc_44 = in_esi;
        loc_48 = in_edi;
        goto L_102c4e91;
    }
    if ((rd32(arg2 + 8u) & 4u) == 0u)
    {
        eax = rd32(arg2 + 8u);
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_40 = in_ebx;
        loc_44 = in_esi;
        loc_48 = in_edi;
        goto L_102c4e91;
    }
    eax = rd32(arg2 + 8u);
    if ((eax >> 8u & 8u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_40 = in_ebx;
        loc_44 = in_esi;
        loc_48 = in_edi;
        goto L_102c4e91;
    }
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8b80u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_40 = in_ebx;
    loc_44 = in_esi;
    loc_48 = in_edi;
    loc_4c = COW_IMG(0x103c8b80u);
    goto L_102c4e9c;
L_102c4ee0: ;
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, sp0 + 4u);
    wr32(sp0 - 0x54u, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x40u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 + 4u, 4u, loc_48, loc_44);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x58u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x54u;
    t11 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 + 0xcu, t11);
    wr32(sp0 - 0x5cu, 4u);
    wr32(sp0 - 0x60u, sp0 + 4u);
    wr32(sp0 - 0x64u, arg1);
    g->ecx = t12;
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, t13, 1, 5, arg1, sp0 + 4u, 4u, sp0 + 4u, arg1);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x68u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = t15;
    g->esp = sp0 - 0x64u;
    t16 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t17 = g->edx;
    if (rd32(sp0 + 0xcu) > 0x13880u)
    {
        eax = t16;
        ecx = rd32(sp0 + 0xcu);
        edx = t17;
        goto L_102c5239;
    }
    eax = t16;
    ecx = rd32(sp0 + 0xcu);
    edx = t17;
    if (eax > 0x13880u) goto L_102c5239;
    if (eax + ecx > 0x186a0u)
    {
        edx = eax + ecx;
        goto L_102c5239;
    }
    edx = eax + ecx;
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, sp0 + 4u);
    wr32(sp0 - 0x54u, arg1);
    wr32(sp0 - 0x1cu, ecx);
    g->ecx = ecx;
    g->esp = sp0 - 0x40u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 + 4u, 4u, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x58u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0x54u;
    t20 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 + 0xcu, t20);
    wr32(sp0 - 0x5cu, 4u);
    wr32(sp0 - 0x60u, sp0 + 4u);
    wr32(sp0 - 0x64u, arg1);
    g->ecx = t21;
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, t22, 1, 5, arg1, sp0 + 4u, 4u, sp0 + 4u, arg1);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x68u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = t24;
    g->esp = sp0 - 0x64u;
    t25 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t26 = g->edx;
    if (rd32(sp0 + 0xcu) > 0x13880u)
    {
        eax = t25;
        ecx = rd32(sp0 + 0xcu);
        edx = t26;
        goto L_102c522a;
    }
    eax = t25;
    ecx = rd32(sp0 + 0xcu);
    edx = t26;
    if (eax > 0x13880u) goto L_102c522a;
    if (eax + ecx > 0x186a0u)
    {
        edx = eax + ecx;
        goto L_102c522a;
    }
    edx = eax + ecx;
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, sp0 + 4u);
    wr32(sp0 - 0x54u, arg1);
    wr32(sp0 - 0x14u, ecx);
    g->ecx = ecx;
    g->esp = sp0 - 0x40u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 + 4u, 4u, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x58u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = t27;
    g->edx = t28;
    g->esp = sp0 - 0x54u;
    t29 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 + 0xcu, t29);
    wr32(sp0 - 0x5cu, 4u);
    wr32(sp0 - 0x60u, sp0 + 4u);
    wr32(sp0 - 0x64u, arg1);
    g->ecx = t30;
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, t31, 1, 5, arg1, sp0 + 4u, 4u, sp0 + 4u, arg1);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x68u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = t33;
    g->esp = sp0 - 0x64u;
    t34 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t35 = g->edx;
    if (rd32(sp0 + 0xcu) > 0x13880u)
    {
        eax = t34;
        ecx = rd32(sp0 + 0xcu);
        edx = t35;
        goto L_102c521b;
    }
    eax = t34;
    ecx = rd32(sp0 + 0xcu);
    edx = t35;
    if (eax > 0x13880u) goto L_102c521b;
    if (eax + ecx > 0x186a0u)
    {
        edx = eax + ecx;
        goto L_102c521b;
    }
    edx = eax + ecx;
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, sp0 + 4u);
    wr32(sp0 - 0x54u, arg1);
    wr32(sp0 - 0xcu, ecx);
    g->ecx = ecx;
    g->esp = sp0 - 0x40u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 + 4u, 4u, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x58u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = t36;
    g->edx = t37;
    g->esp = sp0 - 0x54u;
    t38 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 + 0xcu, t38);
    wr32(sp0 - 0x5cu, 4u);
    wr32(sp0 - 0x60u, sp0 + 4u);
    wr32(sp0 - 0x64u, arg1);
    g->ecx = t39;
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, t40, 1, 5, arg1, sp0 + 4u, 4u, sp0 + 4u, arg1);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(sp0 - 0x68u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = t41;
    g->edx = t42;
    g->esp = sp0 - 0x64u;
    t43 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t44 = g->ecx;
    t45 = g->edx;
    wr32(sp0 - 0x20u, t43);
    if (rd32(sp0 + 0xcu) > 0x13880u)
    {
        eax = rd32(sp0 + 0xcu);
        ecx = t44;
        edx = t45;
        goto L_102c520c;
    }
    eax = rd32(sp0 + 0xcu);
    ecx = t44;
    edx = t45;
    ebx = t43;
    loc_20 = t43;
    if (ebx > 0x13880u) goto L_102c520c;
    if (eax + ebx > 0x186a0u)
    {
        eax = eax + ebx;
        goto L_102c520c;
    }
    eax = eax + ebx;
    d46 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x1032c140u)));
    wrf32(sp0 - 0x3cu, (float)d46);
    d47 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x18u) * (double)rdf32(COW_IMG(0x1032c140u)));
    wrf32(sp0 - 0x38u, (float)d47);
    d48 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x14u) * (double)rdf32(COW_IMG(0x1032c140u)));
    wrf32(sp0 - 0x34u, (float)d48);
    d49 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0x10u) * (double)rdf32(COW_IMG(0x1032c140u)));
    wrf32(sp0 - 0x30u, (float)d49);
    d50 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 0xcu) * (double)rdf32(COW_IMG(0x1032c140u)));
    wrf32(sp0 - 0x2cu, (float)d50);
    d51 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 - 8u) * (double)rdf32(COW_IMG(0x1032c140u)));
    wrf32(sp0 - 0x28u, (float)d51);
    d52 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032c140u)));
    wrf32(sp0 - 0x24u, (float)d52);
    d53 = (double)(float)fr(g, (double)(int32_t)loc_20 * (double)rdf32(COW_IMG(0x1032c140u)));
    wrf32(sp0 - 0x20u, (float)d53);
    if ((rd8(arg2 + 9u) & 8u) == 0u)
    {
        loc_20_f = d53;
        loc_3c_f = d46;
        loc_38_f = d47;
        loc_34_f = d48;
        loc_30_f = d49;
        loc_2c_f = d50;
        loc_28_f = d51;
        loc_24_f = d52;
        wrf64(sp0 - 0x50u, loc_20_f);
        wrf64(sp0 - 0x58u, loc_24_f);
        wrf64(sp0 - 0x60u, loc_28_f);
        wrf64(sp0 - 0x68u, loc_2c_f);
        wrf64(sp0 - 0x70u, loc_30_f);
        wrf64(sp0 - 0x78u, loc_34_f);
        wrf64(sp0 - 0x80u, loc_38_f);
        wrf64(sp0 - 0x88u, loc_3c_f);
        wr32(sp0 - 0x8cu, arg2);
        wr32(sp0 - 0x90u, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x68u;
        t94 = cow_call_regs(g, COW_IMG(0x102c7b2eu), eax, g->ecx, g->edx, 1, 10, arg1, arg2, cow_dlo(loc_3c_f), cow_dhi(loc_3c_f), cow_dlo(loc_38_f), cow_dhi(loc_38_f), cow_dlo(loc_34_f), cow_dhi(loc_34_f), cow_dlo(loc_30_f), cow_dhi(loc_30_f));
        t95 = g->ecx;
        t96 = g->edx;
        wr32(sp0 - 0x94u, ebx);
        t97 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x98u, t97);
        t98 = rd32(sp0 - 8u);
        wr32(sp0 - 0x9cu, t98);
        t99 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0xa0u, t99);
        t100 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0xa4u, t100);
        t101 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0xa8u, t101);
        t102 = rd32(sp0 - 0x18u);
        wr32(sp0 - 0xacu, t102);
        t103 = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0xb0u, t103);
        wr32(sp0 - 0xb4u, arg2);
        wr32(sp0 - 0xb8u, arg1);
        g->ecx = t95;
        g->edx = t96;
        g->esp = sp0 - 0x90u;
        t104 = cow_cdecl(g, COW_IMG(0x102c7d5eu), 10, arg1, arg2, t103, t102, t101, t100, t99, t98, t97, ebx);
        t105 = g->ecx;
        t106 = g->edx;
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x50u, arg1);
        g->esp = sp0 - 0x3cu;
        cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t106, 1, 5, arg1, 0u, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    }
    else
    {
        loc_20_f = d53;
        loc_3c_f = d46;
        loc_38_f = d47;
        loc_34_f = d48;
        loc_30_f = d49;
        loc_2c_f = d50;
        loc_28_f = d51;
        loc_24_f = d52;
        t54 = rd32(sp0 - 0x1cu) - 0x7a26u;
        wr32(sp0 - 0x4cu, t54);
        g->eax = t54;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t55 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t54);
        t56 = g->edx;
        if ((int32_t)t55 > 1000)
        {
            eax = t55;
            ecx = rd32(sp0 - 0x4cu);
            edx = t56;
            goto L_102c512e;
        }
        ecx = rd32(sp0 - 0x4cu);
        edx = t56;
        t57 = rd32(sp0 - 0x18u) - 0x8084u;
        wr32(sp0 - 0x4cu, t57);
        g->eax = t57;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t58 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t57);
        t59 = g->edx;
        if ((int32_t)t58 > 1000)
        {
            eax = t58;
            ecx = rd32(sp0 - 0x4cu);
            edx = t59;
            goto L_102c512e;
        }
        ecx = rd32(sp0 - 0x4cu);
        edx = t59;
        t60 = rd32(sp0 - 0x14u) - 0xfa00u;
        wr32(sp0 - 0x4cu, t60);
        g->eax = t60;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t61 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t60);
        t62 = g->edx;
        if ((int32_t)t61 > 1000)
        {
            eax = t61;
            ecx = rd32(sp0 - 0x4cu);
            edx = t62;
            goto L_102c512e;
        }
        ecx = rd32(sp0 - 0x4cu);
        edx = t62;
        t63 = rd32(sp0 - 0x10u) - 0x80e8u;
        wr32(sp0 - 0x4cu, t63);
        g->eax = t63;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t64 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t63);
        t65 = g->edx;
        if ((int32_t)t64 > 1000)
        {
            eax = t64;
            ecx = rd32(sp0 - 0x4cu);
            edx = t65;
            goto L_102c512e;
        }
        ecx = rd32(sp0 - 0x4cu);
        edx = t65;
        t66 = rd32(sp0 - 0xcu) - 0x7530u;
        wr32(sp0 - 0x4cu, t66);
        g->eax = t66;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t67 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t66);
        t68 = g->edx;
        if ((int32_t)t67 > 1000)
        {
            eax = t67;
            ecx = rd32(sp0 - 0x4cu);
            edx = t68;
            goto L_102c512e;
        }
        ecx = rd32(sp0 - 0x4cu);
        edx = t68;
        t69 = rd32(sp0 - 8u) - 0xea60u;
        wr32(sp0 - 0x4cu, t69);
        g->eax = t69;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t70 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t69);
        t71 = g->edx;
        if ((int32_t)t70 > 1000)
        {
            eax = t70;
            ecx = rd32(sp0 - 0x4cu);
            edx = t71;
            goto L_102c512e;
        }
        ecx = rd32(sp0 - 0x4cu);
        edx = t71;
        t72 = rd32(sp0 + 0xcu) - 0x3a98u;
        wr32(sp0 - 0x4cu, t72);
        g->eax = t72;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t73 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t72);
        t74 = g->edx;
        if ((int32_t)t73 > 1000)
        {
            eax = t73;
            ecx = rd32(sp0 - 0x4cu);
            edx = t74;
            goto L_102c512e;
        }
        eax = t73;
        ecx = rd32(sp0 - 0x4cu);
        edx = t74;
        wr32(sp0 - 0x4cu, ebx - 0x1770u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t75 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, ebx - 0x1770u);
        t76 = g->edx;
        if ((int32_t)t75 <= 1000)
        {
            eax = t75;
            ecx = rd32(sp0 - 0x4cu);
            edx = t76;
            goto L_102c5192;
        }
        eax = t75;
        ecx = rd32(sp0 - 0x4cu);
        edx = t76;
        ebx = ebx - 0x1770u;
L_102c512e: ;
        wr32(sp0 - 0x4cu, COW_IMG(0x103c8b48u));
        wr32(sp0 - 0x50u, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t77 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8b48u));
        t78 = g->ecx;
        t79 = g->edx;
        d80 = (double)rdf32(sp0 - 0x30u);
        wrf64(sp0 - 0x50u, d80);
        d81 = (double)rdf32(sp0 - 0x34u);
        wrf64(sp0 - 0x58u, d81);
        d82 = (double)rdf32(sp0 - 0x38u);
        wrf64(sp0 - 0x60u, d82);
        d83 = (double)rdf32(sp0 - 0x3cu);
        wrf64(sp0 - 0x68u, d83);
        wr32(sp0 - 0x6cu, COW_IMG(0x103c8b2cu));
        wr32(sp0 - 0x70u, COW_IMG(0x103d03e0u));
        g->ebx = ebx;
        g->ecx = t78;
        g->esp = sp0 - 0x5cu;
        t84 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t79, 1, 5, COW_IMG(0x103d03e0u), COW_IMG(0x103c8b2cu), cow_dlo(d83), cow_dhi(d83), cow_dlo(d82));
        t85 = g->ecx;
        t86 = g->edx;
        d87 = (double)rdf32(sp0 - 0x20u);
        wrf64(sp0 - 0x50u, d87);
        d88 = (double)rdf32(sp0 - 0x24u);
        wrf64(sp0 - 0x58u, d88);
        d89 = (double)rdf32(sp0 - 0x28u);
        wrf64(sp0 - 0x60u, d89);
        d90 = (double)rdf32(sp0 - 0x2cu);
        wrf64(sp0 - 0x68u, d90);
        wr32(sp0 - 0x6cu, COW_IMG(0x103c8b10u));
        wr32(sp0 - 0x70u, COW_IMG(0x103d03e0u));
        g->ebx = ebx;
        g->ecx = t85;
        t91 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t86, 1, 5, COW_IMG(0x103d03e0u), COW_IMG(0x103c8b10u), cow_dlo(d90), cow_dhi(d90), cow_dlo(d89));
        t92 = g->ecx;
        t93 = g->edx;
        eax = t91;
        ecx = t92;
        edx = t93;
L_102c5192: ;
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x50u, arg1);
        g->esp = sp0 - 0x3cu;
        cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    }
    goto L_102c524f;
L_102c520c: ;
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8af8u));
    wr32(sp0 - 0x50u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t107 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8af8u));
    t108 = g->ecx;
    t109 = g->edx;
    wr32(sp0 - 0x54u, 0u);
    eax = t107;
    ecx = t108;
    edx = t109;
    loc_54 = 0u;
    loc_4c = COW_IMG(0x103c8af8u);
    goto L_102c5246;
L_102c521b: ;
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8adcu));
    wr32(sp0 - 0x50u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t110 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8adcu));
    t111 = g->ecx;
    t112 = g->edx;
    wr32(sp0 - 0x54u, 8u);
    eax = t110;
    ecx = t111;
    edx = t112;
    loc_54 = 8u;
    loc_4c = COW_IMG(0x103c8adcu);
    goto L_102c5246;
L_102c522a: ;
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8ac4u));
    wr32(sp0 - 0x50u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t113 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8ac4u));
    t114 = g->ecx;
    t115 = g->edx;
    wr32(sp0 - 0x54u, 0x10u);
    eax = t113;
    ecx = t114;
    edx = t115;
    loc_54 = 0x10u;
    loc_4c = COW_IMG(0x103c8ac4u);
    goto L_102c5246;
L_102c5239: ;
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8aa8u));
    wr32(sp0 - 0x50u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t116 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8aa8u));
    t117 = g->ecx;
    t118 = g->edx;
    wr32(sp0 - 0x54u, 0x18u);
    eax = t116;
    ecx = t117;
    edx = t118;
    loc_54 = 0x18u;
    loc_4c = COW_IMG(0x103c8aa8u);
    goto L_102c5246;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c4e6e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c4e6e(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
