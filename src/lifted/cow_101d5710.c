/* f_0x101d5710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101d5710(Guest* g)
{
    double d22;
    double d24;
    double d25;
    double d26;
    double d27;
    double d31;
    double d32;
    double d35;
    double d36;
    double d4;
    double d48;
    double d51;
    double d60;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d91;
    double d92;
    double d94;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    double loc_34_f;
    double loc_3c_f;
    double loc_40_f;
    double loc_44_f;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t23;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t33;
    uint32_t t34;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t61;
    uint32_t t7;
    uint32_t t8;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t93;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_ebp);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x28u, 0x4e6e6b28u);
    wr32(sp0 - 0x2cu, 0x4e6e6b28u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0u);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t1 * 4u) == 0u)
    {
        eax = t1;
        goto L_101d5ca0;
    }
    eax = t1;
    ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t1 * 4u);
    t2 = rd32(ecx + 0xa0u);
    wr32(sp0 - 0x24u, t2);
    if (rd32(ecx + 0xa0u) == 0u) goto L_101d5ca0;
    edi = t2;
    loc_24 = t2;
    if (rd32(sp0 + 8u) != 0u)
    {
        ecx = rd32(sp0 + 8u);
        edx = rd32(sp0 + 0xcu);
        goto L_101d5784;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(sp0 + 0xcu);
    if (edx == 0u) goto L_101d5ca0;
L_101d5784: ;
    wr32(sp0 - 8u, edi);
    if (rd8(self + 0x24u) != 2u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
        loc_8 = edi;
        d4 = (double)(float)(double)(int32_t)rd32(sp0 + 8u);
        wrf32(sp0 - 0x34u, (float)d4);
        loc_34_f = d4;
        x0 = (double)(int32_t)rd32(sp0 + 0xcu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
        loc_8 = edi;
        wr32(sp0 + 8u, -ecx);
        t3 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, -edx);
        wrf32(sp0 - 0x34u, (float)(double)(float)(double)(int32_t)t3);
        loc_34_f = (double)(float)(double)(int32_t)t3;
        x0 = (double)(int32_t)rd32(sp0 + 8u);
    }
    wrf32(sp0 - 0x30u, (float)(double)(float)x0);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t5 = cow_thiscall(g, rd32(rd32(edi) + 0x1bcu), edi, 0);
    t6 = rd32(t5);
    t7 = rd32(edi);
    wr32(sp0 + 4u, t6);
    g->eax = t6;
    g->edx = t7;
    t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), edi, 0);
    t9 = g->edx;
    wr32(sp0 - 0x5cu, edi);
    t10 = rd32(t8 + 8u);
    wr32(sp0 - 0x40u, t10);
    g->eax = t10;
    g->edx = t9;
    t11 = cow_thiscall(g, COW_IMG(0x101d3ef0u), self, 1, edi);
    t12 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        edx = t12;
        loc_44_f = cow_bits2f(0u);
        goto L_101d58eb;
    }
    eax = t11;
    edx = t12;
    esi = t11;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t13 = cow_thiscall(g, COW_IMG(0x101cead0u), esi, 0);
    t14 = g->edx;
    wr32(sp0 - 0x1cu, t13);
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x101cebe0u), esi, 0);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        edx = t16;
        goto L_101d58c2;
    }
    eax = t15;
    edx = t16;
    wr32(sp0 - 0x5cu, sp0 + 0xcu);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t17 = cow_thiscall(g, COW_IMG(0x101ce0e0u), esi, 1, sp0 + 0xcu);
    g->edx = rd32(edi);
    t18 = rd32(edi);
    t19 = cow_thiscall(g, rd32(t18 + 0x1bcu), edi, 0);
    t20 = g->edx;
    t21 = rd32(sp0 + 0xcu);
    d22 = (double)rdf32(t19 + 4u);
    wrf32(sp0 + 8u, (float)-d22);
    if (t21 > 3u)
    {
        eax = t21;
        edx = t20;
        goto L_101d58eb;
    }
    eax = t21;
    edx = t20;
    t23 = rd32(COW_IMG(0x101d5cacu) + eax * 4u);
    switch (t23 - RD)
    {
    case 0x101d5839u: goto L_101d5839;
    case 0x101d5871u: goto L_101d5871;
    case 0x101d58a6u: goto L_101d58a6;
    case 0x101d58b4u: goto L_101d58b4;
    default: rt_fatal(g, COW_IMG(0x101d5832u), "switch");
    }
    return 0;
L_101d5839: ;
    d27 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(sp0 - 0x40u));
    wrf32(sp0 - 0x40u, (float)d27);
    loc_40_f = d27;
L_101d5845: ;
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, self + 0x4cu);
    wr32(sp0 - 0x18u, 0u);
    ebx = self + 0x4cu;
    ebp = self;
    loc_14 = 0u;
    loc_10 = self + 0x4cu;
    loc_18 = 0u;
L_101d591e: ;
    if (rd32(ebx) == 0u) goto L_101d5c1f;
    ecx = rd32(ebx);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t37 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
    t38 = g->ecx;
    t39 = g->edx;
    if (t37 == 0u)
    {
        edx = t39;
        goto L_101d5c1f;
    }
    eax = t37;
    ecx = t38;
    edx = t39;
    esi = t37;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t40 = cow_stdcall(g, COW_IMG(0x10085240u), 0);
    t41 = g->edx;
    if (t40 == 0u)
    {
        edx = t41;
        goto L_101d5c1f;
    }
    eax = t40;
    edx = t41;
L_101d5944: ;
    if (eax == esi) goto L_101d5958;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t42 = cow_thiscall(g, COW_IMG(0x10085270u), eax, 0);
    t43 = g->edx;
    if (t42 != 0u)
    {
        eax = t42;
        edx = t43;
        goto L_101d5944;
    }
    edx = t43;
L_101d5c1f: ;
    wr32(sp0 - 0x18u, loc_18 + 1u);
    if ((int32_t)(loc_18 + 1u) < 81)
    {
        eax = loc_18 + 1u;
        ebx = ebx + 4u;
        loc_18 = loc_18 + 1u;
        goto L_101d5916;
    }
    wr32(sp0 - 0x14u, loc_14 + 1u);
    wr32(sp0 - 0x10u, loc_10 + 0x144u);
    if ((int32_t)(loc_14 + 1u) < 2)
    {
        eax = loc_14 + 1u;
        ebx = loc_10 + 0x144u;
        loc_14 = loc_14 + 1u;
        loc_10 = loc_10 + 0x144u;
        goto L_101d5904;
    }
    eax = loc_14 + 1u;
    d94 = fr(g, cow_bits2f(loc_2c) - (double)rdf32(sp0 - 0x28u));
    if (!(d94 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d94, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d94;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d94, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d94;
        x0 = -x0;
    }
    if (!(x0 < (double)rdf32(COW_IMG(0x1032a378u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
        goto L_101d5c80;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
    if (loc_c != 0u)
    {
        esi = loc_c;
        goto L_101d5c88;
    }
L_101d5c80: ;
    esi = rd32(sp0 - 8u);
L_101d5c84: ;
    if (esi == 0u) goto L_101d5c9d;
L_101d5c88: ;
    if (rd32(esi + 0x70u) == 0u)
    {
        eax = rd32(esi + 0x70u);
        goto L_101d5c9d;
    }
    eax = rd32(esi + 0x70u);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (eax & 0xffff0000u) | rd16(eax + 0x74u);
L_101d5871: ;
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, self + 0x4cu);
    wr32(sp0 - 0x18u, 0u);
    d26 = (double)(float)fr(g, (double)rdf32(sp0 - 0x40u) - (double)rdf32(sp0 + 8u));
    wrf32(sp0 - 0x40u, (float)d26);
    ebx = self + 0x4cu;
    ebp = self;
    loc_14 = 0u;
    loc_10 = self + 0x4cu;
    loc_18 = 0u;
    loc_40_f = d26;
    goto L_101d591e;
L_101d58a6: ;
    d25 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(sp0 + 4u));
    wrf32(sp0 + 4u, (float)d25);
    goto L_101d5845;
L_101d58b4: ;
    d24 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 4u, (float)d24);
    goto L_101d5845;
L_101d58c2: ;
    t28 = rd32(esi + 0x6cu);
    wr32(sp0 - 0x38u, t28);
    g->eax = t28;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t29 = cow_thiscall(g, COW_IMG(0x101ceb90u), esi, 0);
    t30 = g->edx;
    d31 = cow_take_float(g);
    d32 = (double)(float)fr(g, d31 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x48u, (float)d32);
    g->edx = t30;
    t33 = cow_thiscall(g, COW_IMG(0x101cebb0u), esi, 0);
    t34 = g->edx;
    d35 = cow_take_float(g);
    d36 = (double)(float)fr(g, d35 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x44u, (float)d36);
    eax = t33;
    edx = t34;
    loc_44_f = d36;
L_101d58eb: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, self + 0x4cu);
    wr32(sp0 - 0x18u, 0u);
    ebx = self + 0x4cu;
    ebp = self;
    loc_14 = 0u;
    loc_10 = self + 0x4cu;
    loc_18 = 0u;
    goto L_101d591e;
L_101d5904: ;
    wr32(sp0 - 0x18u, 0u);
    ebp = rd32(sp0 - 0x20u);
    edi = rd32(sp0 - 0x24u);
    loc_18 = 0u;
    goto L_101d591e;
L_101d5916: ;
    ebp = rd32(sp0 - 0x20u);
    edi = rd32(sp0 - 0x24u);
    goto L_101d591e;
L_101d5958: ;
    if (esi == edi) goto L_101d5c1f;
    g->eax = eax;
    g->edx = rd32(esi);
    t44 = rd32(esi);
    g->esp = sp0 - 0x58u;
    t45 = cow_thiscall(g, rd32(t44 + 0x1bcu), esi, 0);
    t46 = g->edx;
    t47 = rd32(esi);
    d48 = fr(g, (double)rdf32(t45) - (double)rdf32(sp0 + 4u));
    wrf32(sp0 + 0xcu, (float)d48);
    g->eax = t47;
    g->edx = t46;
    t49 = cow_thiscall(g, rd32(t47 + 0x1bcu), esi, 0);
    t50 = g->edx;
    wr32(sp0 - 0x5cu, esi);
    d51 = fr(g, (double)rdf32(t49 + 8u) - (double)rdf32(sp0 - 0x40u));
    wrf32(sp0 + 8u, (float)d51);
    g->edx = t50;
    t52 = cow_thiscall(g, COW_IMG(0x101d3ef0u), ebp, 1, esi);
    t53 = g->edx;
    if (t52 == 0u)
    {
        edx = t53;
        goto L_101d5a03;
    }
    eax = t52;
    edx = t53;
    edi = t52;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t54 = cow_thiscall(g, COW_IMG(0x101cebe0u), edi, 0);
    t55 = g->edx;
    if ((uint8_t)t54 == 0u)
    {
        edx = t55;
        goto L_101d5a03;
    }
    eax = t54;
    edx = t55;
    wr32(sp0 - 0x5cu, sp0 - 4u);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t56 = cow_thiscall(g, COW_IMG(0x101ce0e0u), edi, 1, sp0 - 4u);
    g->edx = rd32(esi);
    t57 = rd32(esi);
    t58 = cow_thiscall(g, rd32(t57 + 0x1bcu), esi, 0);
    t59 = g->edx;
    d60 = (double)(float)-(double)rdf32(t58 + 4u);
    wrf32(sp0 - 0x3cu, (float)d60);
    if (rd32(sp0 - 4u) > 3u)
    {
        edx = t59;
        goto L_101d5a03;
    }
    eax = rd32(sp0 - 4u);
    edx = t59;
    loc_3c_f = d60;
    t61 = rd32(COW_IMG(0x101d5cbcu) + eax * 4u);
    switch (t61 - RD)
    {
    case 0x101d59d1u: goto L_101d59d1;
    case 0x101d59dfu: goto L_101d59df;
    case 0x101d59edu: goto L_101d59ed;
    case 0x101d59f7u: goto L_101d59f7;
    default: rt_fatal(g, COW_IMG(0x101d59cau), "switch");
    }
    return 0;
L_101d59d1: ;
    d63 = fr(g, loc_3c_f + (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d63);
L_101d5a03: ;
    if (rd32(sp0 - 0x1cu) != 0u)
    {
        eax = rd32(sp0 - 0x1cu);
        goto L_101d5a4e;
    }
    eax = rd32(sp0 - 0x1cu);
    d64 = (double)rdf32(sp0 + 0xcu);
    if (!(d64 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d64, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d64, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
        x0 = -x0;
    }
    d65 = (double)rdf32(sp0 + 8u);
    if (!(d65 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
        x1 = -x1;
    }
    d66 = fr(g, x1 + x0);
    if (d66 < (double)rdf32(COW_IMG(0x1032a378u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d66, (double)rdf32(COW_IMG(0x1032a378u)), 1u);
        goto L_101d5c84;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d66, (double)rdf32(COW_IMG(0x1032a378u)), 1u);
L_101d5a4e: ;
    d67 = (double)rdf32(sp0 - 0x34u);
    if (!(d67 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d67, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = rd32(sp0 - 0x38u);
        goto L_101d5ab6;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d67, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = rd32(sp0 - 0x38u);
    if (ecx == 0u) goto L_101d5a84;
    d68 = (double)rdf32(sp0 + 0xcu);
    if ((cow_fsw(g, d68, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) == 0u) goto L_101d5c1f;
    eax = cow_fsw(g, d68, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    x0 = (double)rdf32(sp0 + 0xcu);
L_101d5afd: ;
    x0 = -x0;
L_101d5aff: ;
    d75 = (double)rdf32(sp0 + 8u);
    if (!(d75 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d75, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d75, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
        x1 = -x1;
    }
    if (x0 < x1) goto L_101d5c1f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, x1, 0u);
L_101d5b25: ;
    d76 = (double)rdf32(sp0 - 0x30u);
    if (!(d76 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_101d5b5f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    if (ecx == 0u) goto L_101d5b53;
    d77 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d77, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) == 0u) goto L_101d5c1f;
    eax = cow_fsw(g, d77, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
L_101d5b91: ;
    d82 = (double)rdf32(sp0 + 0xcu);
    if (!(d82 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d82, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d82, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
        x0 = -x0;
    }
    d83 = (double)rdf32(sp0 + 8u);
    if (!(d83 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
        x1 = -x1;
    }
    if ((cow_fsw(g, x0, x1, 0u) & 0x4100u) == 0u) goto L_101d5c1f;
    eax = cow_fsw(g, x0, x1, 0u) & 0x4100u;
L_101d5bcc: ;
    d84 = (double)rdf32(sp0 + 8u);
    d85 = (double)rdf32(sp0 + 0xcu);
    wrf32(sp0 + 8u, (float)fr(g, fr(g, d84 * d84) + fr(g, d85 * d85)));
    d86 = fr(g, fr(g, d84 * d84) + fr(g, d85 * d85));
    d87 = (double)rdf32(sp0 - 0x28u);
    if (!(d86 < d87))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d86, d87, 0u);
    }
    else
    {
        wr32(sp0 - 8u, esi);
        t88 = rd32(sp0 + 8u);
        wr32(sp0 - 0x28u, t88);
        eax = t88;
        loc_8 = esi;
        loc_28 = t88;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t89 = cow_thiscall(g, COW_IMG(0x101cead0u), rd32(ebx), 0);
    t90 = g->edx;
    if (t89 != 0u)
    {
        edx = t90;
    }
    else
    {
        eax = t89;
        edx = t90;
        d91 = (double)rdf32(sp0 + 8u);
        d92 = (double)rdf32(sp0 - 0x2cu);
        if (d91 < d92)
        {
            wr32(sp0 - 0xcu, esi);
            t93 = rd32(sp0 + 8u);
            wr32(sp0 - 0x2cu, t93);
            loc_c = esi;
            loc_2c = t93;
        }
    }
    goto L_101d5c1f;
L_101d59df: ;
    d62 = fr(g, (double)rdf32(sp0 + 8u) - loc_3c_f);
    wrf32(sp0 + 8u, (float)d62);
    goto L_101d5a03;
L_101d59ed: ;
    x0 = fr(g, loc_3c_f + (double)rdf32(sp0 + 0xcu));
L_101d59ff: ;
    wrf32(sp0 + 0xcu, (float)x0);
    goto L_101d5a03;
L_101d59f7: ;
    x0 = fr(g, (double)rdf32(sp0 + 0xcu) - loc_3c_f);
    goto L_101d59ff;
L_101d5a84: ;
    d69 = -(double)rdf32(sp0 - 0x48u);
    d70 = (double)rdf32(sp0 + 0xcu);
    if (d69 <= d70) goto L_101d5c1f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, d70, 0u);
    d71 = (double)rdf32(sp0 + 0xcu);
    if (!(d71 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_101d5ab0;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    x0 = (double)rdf32(sp0 + 0xcu);
    goto L_101d5afd;
L_101d5ab0: ;
    x0 = (double)rdf32(sp0 + 0xcu);
    goto L_101d5aff;
L_101d5ab6: ;
    d72 = (double)rdf32(sp0 - 0x34u);
    if ((cow_fsw(g, d72, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d72, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_101d5b25;
    }
    eax = cow_fsw(g, d72, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    if (ecx == 0u)
    {
        x0 = (double)rdf32(sp0 + 0xcu);
        goto L_101d5ad9;
    }
    x0 = (double)rdf32(sp0 + 0xcu);
    if (x0 <= (double)rdf32(COW_IMG(0x103295d8u))) goto L_101d5c1f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_101d5ae8: ;
    d74 = (double)rdf32(sp0 + 0xcu);
    if (!(d74 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d74, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
        goto L_101d5aff;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d74, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    x0 = (double)rdf32(sp0 + 0xcu);
    goto L_101d5afd;
L_101d5ad9: ;
    d73 = (double)rdf32(sp0 - 0x48u);
    if (x0 <= d73) goto L_101d5c1f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d73, 0u);
    goto L_101d5ae8;
L_101d5b53: ;
    d78 = -(double)rdf32(sp0 - 0x44u);
    d79 = (double)rdf32(sp0 + 8u);
    if (d78 <= d79) goto L_101d5c1f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d78, d79, 0u);
    goto L_101d5b91;
L_101d5b5f: ;
    d80 = (double)rdf32(sp0 - 0x30u);
    if ((cow_fsw(g, d80, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d80, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_101d5bcc;
    }
    eax = cow_fsw(g, d80, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    if (ecx == 0u)
    {
        x0 = (double)rdf32(sp0 + 8u);
        goto L_101d5b82;
    }
    x0 = (double)rdf32(sp0 + 8u);
    if (x0 <= (double)rdf32(COW_IMG(0x103295d8u))) goto L_101d5c1f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    goto L_101d5b91;
L_101d5b82: ;
    d81 = (double)rdf32(sp0 - 0x44u);
    if (x0 <= d81) goto L_101d5c1f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d81, 0u);
    goto L_101d5b91;
L_101d5c9d: ;
    eax = eax & 0xffff0000u;
L_101d5ca0: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d5710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d5710(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
