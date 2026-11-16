/* f_0x102f2c9b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102f2c9b(Guest* g)
{
    double d100;
    double d101;
    double d102;
    double d103;
    double d104;
    double d105;
    double d106;
    double d107;
    double d108;
    double d109;
    double d110;
    double d111;
    double d112;
    double d113;
    double d115;
    double d116;
    double d117;
    double d118;
    double d119;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
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
    double d88;
    double d89;
    double d90;
    double d91;
    double d92;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_18_f;
    double loc_1c_f;
    double loc_20_f;
    uint32_t loc_24;
    double loc_24_f;
    uint32_t loc_28;
    uint32_t loc_2c;
    double loc_34_f;
    double loc_38_f;
    double loc_44_f;
    double loc_48_f;
    double loc_4c_f;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    double loc_8_f;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_b0;
    uint32_t loc_b4;
    uint32_t loc_b8;
    uint32_t loc_bc;
    uint32_t loc_c;
    uint32_t loc_c0;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t114;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t7;
    uint32_t t70;
    uint32_t t8;
    uint32_t t9;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    double x0;
    double x1;
    double x2;
    double x3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 756u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x2d8u, in_ebx);
    wr32(sp0 - 0x2dcu, in_esi);
    wr32(sp0 - 0x2e0u, in_edi);
    if (rd32(sp0 + 8u) == 0u) goto L_102f2cf8;
    wr32(sp0 - 0x2e4u, 0x10u);
    eax = in_eax;
    ecx = in_eax + 0xcu;
    esi = 0u;
    edi = 0x10u;
L_102f2cba: ;
    if (!((double)rdf32(ecx) < (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x10329a08u)), 0u);
        esi = esi + 1u;
    }
    if (edi != 1u)
    {
        ecx = ecx + 0x10u;
        edi = edi - 1u;
        goto L_102f2cba;
    }
    if (esi != 0x10u) goto L_102f2cea;
    wr16(arg1 + 2u, rd16(arg1 + 2u) | 0xffffu);
    wr32(arg1 + 4u, 0xffffffffu);
    wr16(arg1, 0u);
L_102f3495: ;
    return 0u;
L_102f2cea: ;
    t1 = -(0u < esi) + 4u;
    wr32(sp0 - 0x10u, t1);
    loc_10 = t1;
L_102f2cff: ;
    wr32(sp0 - 0x2e4u, 0x40u);
    edi = sp0 - 0x1d4u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = 0u;
    g->esp = sp0 - 0x2d4u;
    cow_thiscall_cdecl(g, COW_IMG(0x102f22efu), ecx, 3, in_edi, in_esi, in_ebx);
    t2 = g->edx;
    t3 = sp0 - 0x1ccu - in_eax;
    wr32(sp0 - 0x58u, t3);
    t4 = sp0 - 0x1c8u - in_eax;
    wr32(sp0 - 0xb8u, t4);
    t5 = sp0 - 0x1c4u - in_eax;
    wr32(sp0 - 0xc0u, t5);
    t6 = sp0 - 0x1acu - in_eax;
    wr32(sp0 - 0x5cu, t6);
    t7 = sp0 - 0x1a8u - in_eax;
    wr32(sp0 - 0xb4u, t7);
    t8 = sp0 - 0x1a4u - in_eax;
    wr32(sp0 - 0xacu, t8);
    t9 = sp0 - 0x19cu - in_eax;
    wr32(sp0 - 0x28u, t9);
    t10 = sp0 - 0x198u - in_eax;
    wr32(sp0 - 0xbcu, t10);
    t11 = sp0 - 0x194u - in_eax;
    wr32(sp0 - 0xa4u, t11);
    t12 = sp0 - 0x18cu - in_eax;
    wr32(sp0 - 0x2cu, t12);
    t13 = sp0 - 0x188u - in_eax;
    wr32(sp0 - 0xa0u, t13);
    wr32(sp0 + 8u, t2);
    t14 = sp0 - 0x184u - in_eax;
    wr32(sp0 - 0xb0u, t14);
    t15 = sp0 - 0x1d4u - in_eax;
    wr32(sp0 - 0xa8u, t15);
    eax = in_eax + 8u;
    ecx = 0u;
    esi = t15;
    loc_58 = t3;
    loc_b8 = t4;
    loc_c0 = t5;
    loc_5c = t6;
    loc_b4 = t7;
    loc_ac = t8;
    loc_28 = t9;
    loc_bc = t10;
    loc_a4 = t11;
    loc_2c = t12;
    loc_a0 = t13;
    loc_b0 = t14;
    loc_a8 = t15;
L_102f2dbd: ;
    d16 = (double)(float)fr(g, (double)rdf32(ecx + sp0 - 0x1d4u) + (double)rdf32(eax - 8u));
    wrf32(sp0 - 0x20u, (float)d16);
    d17 = (double)(float)fr(g, (double)rdf32(eax - 4u) + (double)rdf32(ecx + sp0 - 0x1d0u));
    wrf32(sp0 - 0x1cu, (float)d17);
    d18 = (double)(float)fr(g, (double)rdf32(eax + esi) + (double)rdf32(eax));
    wrf32(sp0 - 0x18u, (float)d18);
    d19 = (double)(float)fr(g, fr(g, d16 * (double)rdf32(COW_IMG(0x10346164u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 8u, (float)d19);
    wr32(sp0 - 0xc4u, (uint32_t)fist32(g, d19));
    wr32(sp0 - 8u, (uint32_t)fist32(g, d19));
    d20 = (double)(float)fr(g, (double)(int32_t)(uint32_t)fist32(g, d19) * (double)rdf32(COW_IMG(0x1034617cu)));
    wrf32(sp0 - 0x24u, (float)d20);
    d21 = fr(g, (double)(int32_t)(uint32_t)fist32(g, d19) * (double)rdf32(COW_IMG(0x1034617cu)));
    wrf32(ecx + sp0 - 0x2d4u, (float)d21);
    d22 = (double)(float)fr(g, fr(g, d17 * (double)rdf32(COW_IMG(0x10346160u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 8u, (float)d22);
    wr32(sp0 - 0x50u, (uint32_t)fist32(g, d22));
    wr32(sp0 - 8u, (uint32_t)fist32(g, d22));
    d23 = (double)(float)fr(g, (double)(int32_t)(uint32_t)fist32(g, d22) * (double)rdf32(COW_IMG(0x10346178u)));
    wrf32(sp0 - 8u, (float)d23);
    d24 = fr(g, (double)(int32_t)(uint32_t)fist32(g, d22) * (double)rdf32(COW_IMG(0x10346178u)));
    wrf32(ecx + sp0 - 0x2d0u, (float)d24);
    d25 = (double)(float)fr(g, fr(g, d18 * (double)rdf32(COW_IMG(0x10346164u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0xcu, (float)d25);
    wr32(sp0 - 0x54u, (uint32_t)fist32(g, d25));
    wr32(sp0 - 0xcu, (uint32_t)fist32(g, d25));
    t26 = rd32(sp0 + 8u) & 3u;
    wr32(sp0 - 0xcu, t26);
    t27 = rd32(sp0 + 8u);
    d28 = fr(g, (double)(int32_t)(uint32_t)fist32(g, d25) * (double)rdf32(COW_IMG(0x1034617cu)));
    wrf32(eax + sp0 - in_eax - 0x2d4u, (float)d28);
    wrf32(eax + sp0 - in_eax - 0x2d0u, (float)1.0);
    d29 = (double)(float)fr(g, d17 - d23);
    wrf32(sp0 - 0x38u, (float)d29);
    d30 = (double)(float)fr(g, d18 - d28);
    wrf32(sp0 - 0x34u, (float)d30);
    if ((t27 & 3u) == 3u)
    {
        loc_20_f = d16;
        loc_1c_f = d17;
        loc_18_f = d18;
        loc_8_f = d23;
        loc_24_f = d20;
        loc_c = t26;
        loc_38_f = d29;
        loc_34_f = d30;
        x3 = fr(g, d18 - d28);
        x2 = fr(g, d17 - d23);
        x1 = fr(g, d16 - d20);
        x0 = d28;
    }
    else
    {
        loc_20_f = d16;
        loc_1c_f = d17;
        loc_18_f = d18;
        loc_8_f = d23;
        loc_24_f = d20;
        loc_c = t26;
        loc_38_f = d29;
        loc_34_f = d30;
        x3 = fr(g, d18 - d28);
        x2 = fr(g, d17 - d23);
        x1 = fr(g, d16 - d20);
        x0 = d28;
        d31 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x10348408u))) + (double)rdf32(eax + loc_58));
        d32 = (double)rdf32(COW_IMG(0x10348408u));
        wrf32(eax + loc_58, (float)d31);
        d33 = fr(g, fr(g, x2 * d32) + (double)rdf32(eax + loc_b8));
        wrf32(eax + loc_b8, (float)d33);
        d34 = fr(g, fr(g, x3 * d32) + (double)rdf32(eax + loc_c0));
        wrf32(eax + loc_c0, (float)d34);
    }
    if (ecx >= 0xc0u) goto L_102f2f73;
    if (loc_c != 0u)
    {
        d35 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x10348404u))) + (double)rdf32(eax + loc_5c));
        d36 = (double)rdf32(COW_IMG(0x10348404u));
        wrf32(eax + loc_5c, (float)d35);
        d37 = fr(g, fr(g, x2 * d36) + (double)rdf32(eax + loc_b4));
        wrf32(eax + loc_b4, (float)d37);
        d38 = fr(g, fr(g, x3 * d36) + (double)rdf32(eax + loc_ac));
        wrf32(eax + loc_ac, (float)d38);
    }
    d39 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x10348400u))) + (double)rdf32(eax + loc_28));
    d40 = (double)rdf32(COW_IMG(0x10348400u));
    wrf32(eax + loc_28, (float)d39);
    d41 = fr(g, fr(g, x2 * d40) + (double)rdf32(eax + loc_bc));
    wrf32(eax + loc_bc, (float)d41);
    d42 = fr(g, fr(g, x3 * d40) + (double)rdf32(eax + loc_a4));
    wrf32(eax + loc_a4, (float)d42);
    if (loc_c == 3u) goto L_102f2f77;
    d43 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(eax + loc_2c));
    wrf32(eax + loc_2c, (float)d43);
    d44 = fr(g, fr(g, loc_38_f * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(eax + loc_a0));
    wrf32(eax + loc_a0, (float)d44);
    d45 = fr(g, fr(g, loc_34_f * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(eax + loc_b0));
    wrf32(eax + loc_b0, (float)d45);
L_102f2f79: ;
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
    d46 = fr(g, loc_24_f * (double)rdf32(COW_IMG(0x103cd420u)));
    wrf32(ecx + sp0 - 0x2d4u, (float)d46);
    d47 = fr(g, loc_8_f * (double)rdf32(COW_IMG(0x103cd424u)));
    wrf32(ecx + sp0 - 0x2d0u, (float)d47);
    d48 = fr(g, x0 * (double)rdf32(COW_IMG(0x103cd428u)));
    wrf32(eax + sp0 - in_eax - 0x2d4u, (float)d48);
    if (ecx + 0x10u < 0x100u)
    {
        eax = eax + 0x10u;
        ecx = ecx + 0x10u;
        goto L_102f2dba;
    }
    ecx = ecx + 0x10u;
    wr32(sp0 + 8u, rd32(COW_IMG(0x109b262cu)));
    g->fcw = rd16(sp0 + 8u);
    t49 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x2e4u, t49);
    wr32(sp0 - 0x2e8u, sp0 - 0x2d4u);
    wr32(sp0 - 0x2ecu, sp0 - 0x20u);
    wr32(sp0 - 0x2f0u, sp0 - 0x4cu);
    g->edx = sp0 - 0x2d0u - in_eax;
    g->esp = sp0 - 0x2e0u;
    t50 = cow_call_regs(g, COW_IMG(0x102f2730u), sp0 - 0x4cu, g->ecx, g->edx, 1, 4, sp0 - 0x4cu, sp0 - 0x20u, sp0 - 0x2d4u, t49);
    t51 = g->edx;
    d52 = (double)(float)fr(g, (double)rdf32(sp0 - 0x4cu) * (double)rdf32(COW_IMG(0x103cd430u)));
    wrf32(sp0 - 0xd4u, (float)d52);
    d53 = (double)(float)fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(COW_IMG(0x103cd434u)));
    wrf32(sp0 - 0xd0u, (float)d53);
    d54 = (double)(float)fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(COW_IMG(0x103cd438u)));
    wrf32(sp0 - 0xccu, (float)d54);
    d55 = (double)(float)fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(COW_IMG(0x103cd430u)));
    wrf32(sp0 - 0x3cu, (float)d55);
    d56 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x103cd434u)));
    wrf32(sp0 - 0x38u, (float)d56);
    d57 = (double)(float)fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(COW_IMG(0x103cd438u)));
    wrf32(sp0 - 0x34u, (float)d57);
    g->edx = t51;
    t58 = cow_call_regs(g, COW_IMG(0x102f2331u), t50, sp0 - 0xd4u, g->edx, 1, 0);
    t59 = g->edx;
    wr32(sp0 - 0x28u, t58);
    g->edx = t59;
    t60 = cow_call_regs(g, COW_IMG(0x102f2331u), t58, sp0 - 0x3cu, g->edx, 1, 0);
    t61 = g->edx;
    wr32(sp0 - 0x2cu, t60);
    if (rd32(sp0 - 0x10u) != 4u)
    {
        edx = t61;
        esi = t58;
        edi = t60;
        loc_2c = t60;
        goto L_102f305c;
    }
    edx = t61;
    esi = t58;
    edi = t60;
    loc_2c = t60;
    if ((uint16_t)esi != (uint16_t)edi) goto L_102f305c;
    wr32(arg1 + 4u, 0u);
    wr16(arg1, (uint16_t)esi);
    wr16(arg1 + 2u, (uint16_t)edi);
    goto L_102f3495;
L_102f2cf8: ;
    wr32(sp0 - 0x10u, 4u);
    loc_10 = 4u;
    goto L_102f2cff;
L_102f2dba: ;
    esi = loc_a8;
    goto L_102f2dbd;
L_102f2f73: ;
L_102f2f77: ;
    goto L_102f2f79;
L_102f305c: ;
    g->esp = sp0 - 0x2e0u;
    cow_call_regs(g, COW_IMG(0x102f21afu), sp0 - 0xd4u, esi, edx, 1, 0);
    t62 = g->edx;
    t63 = cow_call_regs(g, COW_IMG(0x102f21afu), sp0 - 0x3cu, edi, t62, 1, 0);
    d64 = (double)(float)fr(g, (double)rdf32(sp0 - 0xd4u) * (double)rdf32(COW_IMG(0x103cd420u)));
    wrf32(sp0 - 0x4cu, (float)d64);
    d65 = (double)(float)fr(g, (double)rdf32(sp0 - 0xd0u) * (double)rdf32(COW_IMG(0x103cd424u)));
    wrf32(sp0 - 0x48u, (float)d65);
    d66 = (double)(float)fr(g, (double)rdf32(sp0 - 0xccu) * (double)rdf32(COW_IMG(0x103cd428u)));
    wrf32(sp0 - 0x44u, (float)d66);
    d67 = (double)(float)fr(g, (double)rdf32(sp0 - 0x3cu) * (double)rdf32(COW_IMG(0x103cd420u)));
    wrf32(sp0 - 0x20u, (float)d67);
    d68 = (double)(float)fr(g, (double)rdf32(sp0 - 0x38u) * (double)rdf32(COW_IMG(0x103cd424u)));
    wrf32(sp0 - 0x1cu, (float)d68);
    d69 = (double)(float)fr(g, (double)rdf32(sp0 - 0x34u) * (double)rdf32(COW_IMG(0x103cd428u)));
    wrf32(sp0 - 0x18u, (float)d69);
    if (rd32(sp0 - 0x10u) == 3u != -((uint16_t)edi < (uint16_t)esi) + 1u)
    {
        wr16(arg1 + 2u, (uint16_t)esi);
        wr16(arg1, (uint16_t)edi);
        esi = sp0 - 0x20u;
        edi = sp0 - 0x9cu;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        esi = sp0 - 0x4cu;
    }
    else
    {
        wr16(arg1, (uint16_t)esi);
        wr16(arg1 + 2u, (uint16_t)edi);
        esi = sp0 - 0x4cu;
        edi = sp0 - 0x9cu;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        esi = sp0 - 0x20u;
    }
    t70 = rd32(sp0 - 0x10u);
    edi = sp0 - 0x8cu;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    if (t70 != 3u)
    {
        eax = t70;
        x0 = fr(g, (double)rdf32(sp0 - 0x8cu) - (double)rdf32(sp0 - 0x9cu));
        wr32(sp0 - 0x24u, COW_IMG(0x103483e4u));
        d78 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a84cu)) * x0) + (double)rdf32(sp0 - 0x9cu));
        wrf32(sp0 - 0x7cu, (float)d78);
        d79 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a84cu)) * fr(g, (double)rdf32(sp0 - 0x88u) - (double)rdf32(sp0 - 0x98u))) + (double)rdf32(sp0 - 0x98u));
        wrf32(sp0 - 0x78u, (float)d79);
        d80 = fr(g, (double)rdf32(sp0 - 0x84u) - (double)rdf32(sp0 - 0x94u));
        d81 = fr(g, (double)rdf32(sp0 - 0x88u) - (double)rdf32(sp0 - 0x98u));
        wrf32(sp0 + 8u, (float)d80);
        d82 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a84cu)) * d80) + (double)rdf32(sp0 - 0x94u));
        wrf32(sp0 - 0x74u, (float)d82);
        d83 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a84cu)) * fr(g, (double)rdf32(sp0 - 0x80u) - (double)rdf32(sp0 - 0x90u))) + (double)rdf32(sp0 - 0x90u));
        wrf32(sp0 - 0x70u, (float)d83);
        d84 = (double)(float)fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x9cu));
        wrf32(sp0 - 0x6cu, (float)d84);
        d85 = (double)(float)fr(g, fr(g, d81 * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x98u));
        wrf32(sp0 - 0x68u, (float)d85);
        d86 = (double)(float)fr(g, fr(g, d80 * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x94u));
        wrf32(sp0 - 0x64u, (float)d86);
        d87 = fr(g, (double)rdf32(sp0 - 0x80u) - (double)rdf32(sp0 - 0x90u));
        d88 = (double)(float)fr(g, fr(g, d87 * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x90u));
        wrf32(sp0 - 0x60u, (float)d88);
        loc_24 = COW_IMG(0x103483e4u);
        x2 = d80;
        x1 = d81;
    }
    else
    {
        eax = t70;
        x0 = fr(g, (double)rdf32(sp0 - 0x8cu) - (double)rdf32(sp0 - 0x9cu));
        wr32(sp0 - 0x24u, COW_IMG(0x103483f4u));
        d71 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x10329a08u)) * x0) + (double)rdf32(sp0 - 0x9cu));
        wrf32(sp0 - 0x7cu, (float)d71);
        d72 = fr(g, (double)rdf32(sp0 - 0x88u) - (double)rdf32(sp0 - 0x98u));
        d73 = (double)(float)fr(g, fr(g, d72 * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(sp0 - 0x98u));
        wrf32(sp0 - 0x78u, (float)d73);
        d74 = fr(g, (double)rdf32(sp0 - 0x84u) - (double)rdf32(sp0 - 0x94u));
        d75 = (double)rdf32(COW_IMG(0x10329a08u));
        wrf32(sp0 + 8u, (float)d74);
        d76 = (double)(float)fr(g, fr(g, d74 * d75) + (double)rdf32(sp0 - 0x94u));
        wrf32(sp0 - 0x74u, (float)d76);
        d77 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x80u) - (double)rdf32(sp0 - 0x90u)) * d75) + (double)rdf32(sp0 - 0x90u));
        wrf32(sp0 - 0x70u, (float)d77);
        loc_24 = COW_IMG(0x103483f4u);
        x2 = d75;
        x1 = d72;
    }
    wrf32(sp0 - 0x20u, (float)(double)(float)x0);
    d89 = (double)rdf32(sp0 + 8u);
    wr32(sp0 + 8u, eax - 1u);
    if ((int32_t)(eax - 1u) >= 0)
    {
        eax = eax - 1u;
        loc_20_f = (double)(float)x0;
        x2 = (double)(int32_t)rd32(sp0 + 8u);
        x0 = x1;
        x1 = d89;
    }
    else
    {
        eax = eax - 1u;
        loc_20_f = (double)(float)x0;
        x2 = (double)(int32_t)rd32(sp0 + 8u);
        x0 = x1;
        x1 = d89;
        x2 = fr(g, x2 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    wrf32(sp0 - 8u, (float)(double)(float)x2);
    if (rd16(sp0 - 0x28u) == rd16(sp0 - 0x2cu))
    {
        loc_8_f = (double)(float)x2;
        x2 = 0.0;
    }
    else
    {
        loc_8_f = (double)(float)x2;
        x2 = fr(g, loc_8_f / fr(g, fr(g, fr(g, x1 * x1) + fr(g, x0 * x0)) + fr(g, loc_20_f * loc_20_f)));
    }
    wr32(sp0 - 0x2e4u, 0x40u);
    d90 = (double)(float)fr(g, loc_20_f * x2);
    wrf32(sp0 - 0x20u, (float)d90);
    edi = sp0 - 0x1d4u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    d91 = (double)(float)fr(g, x2 * x0);
    wrf32(sp0 - 0x1cu, (float)d91);
    d92 = (double)(float)fr(g, x2 * x1);
    wrf32(sp0 - 0x18u, (float)d92);
    g->edx = 0u;
    g->esp = sp0 - 0x2d4u;
    cow_thiscall_cdecl(g, COW_IMG(0x102f22efu), ecx, 3, rd32(sp0 - 0x2e0u), rd32(sp0 - 0x2dcu), rd32(sp0 - 0x2d8u));
    t93 = g->edx;
    wr32(sp0 - 0xcu, sp0 - 0x1d4u);
    t94 = sp0 - 0x1d0u - in_eax;
    wr32(sp0 - 0x2cu, t94);
    t95 = sp0 - 0x1c0u - in_eax;
    wr32(sp0 - 0x58u, t95);
    t96 = sp0 - 0x1a0u - in_eax;
    wr32(sp0 - 0x54u, t96);
    wr32(sp0 + 8u, t93);
    t97 = sp0 - 0x180u - in_eax;
    wr32(sp0 - 0x50u, t97);
    eax = t97;
    ecx = in_eax + 4u;
    edx = t93;
    loc_c = sp0 - 0x1d4u;
    loc_2c = t94;
    loc_58 = t95;
    loc_54 = t96;
    loc_50 = t97;
L_102f329e: ;
    if (rd32(sp0 - 0x10u) != 3u) goto L_102f32c2;
    d98 = (double)rdf32(ecx + 8u);
    if (!(d98 < (double)rdf32(COW_IMG(0x10329a08u)))) goto L_102f32c2;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d98, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    edx = edx >> 2u | 0xc0000000u;
L_102f3470: ;
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
    wr32(sp0 - 0xcu, loc_c + 0x10u);
    if (rd32(sp0 + 8u) < 0x10u)
    {
        ecx = ecx + 0x10u;
        loc_c = loc_c + 0x10u;
        goto L_102f329e;
    }
    wr32(sp0 + 8u, rd32(COW_IMG(0x109b262cu)));
    g->fcw = rd16(sp0 + 8u);
    wr32(arg1 + 4u, edx);
    goto L_102f3495;
L_102f32c2: ;
    d99 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x103cd420u)) * (double)rdf32(ecx - 4u)) + (double)rdf32(loc_c));
    wrf32(sp0 - 0x4cu, (float)d99);
    d100 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x103cd424u)) * (double)rdf32(ecx)) + (double)rdf32(ecx + rd32(sp0 - 0xa8u)));
    wrf32(sp0 - 0x48u, (float)d100);
    d101 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x103cd428u)) * (double)rdf32(ecx + 4u)) + (double)rdf32(ecx + loc_2c));
    wrf32(sp0 - 0x44u, (float)d101);
    d102 = fr(g, fr(g, fr(g, fr(g, d99 - (double)rdf32(sp0 - 0x9cu)) * (double)rdf32(sp0 - 0x20u)) + fr(g, fr(g, d101 - (double)rdf32(sp0 - 0x94u)) * (double)rdf32(sp0 - 0x18u))) + fr(g, fr(g, d100 - (double)rdf32(sp0 - 0x98u)) * (double)rdf32(sp0 - 0x1cu)));
    if (!(d102 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (loc_2c & 0xffff0000u) | (uint16_t)cow_fsw(g, d102, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        loc_4c_f = d99;
        loc_48_f = d100;
        loc_44_f = d101;
        x0 = d102;
        d103 = (double)rdf32(sp0 - 8u);
        if (cow_fsw(g, x0, d103, 1u) >> 8u & 1u)
        {
            d104 = (double)(float)fr(g, x0 + (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x28u, (float)d104);
            wr32(sp0 - 0x5cu, (uint32_t)fist32(g, d104));
            eax = rd32((uint32_t)fist32(g, d104) * 4u + rd32(sp0 - 0x24u));
        }
        else
        {
            eax = 1u;
        }
    }
    else
    {
        loc_4c_f = d99;
        loc_48_f = d100;
        loc_44_f = d101;
        x0 = d102;
        eax = 0u;
    }
    d105 = (double)(float)fr(g, fr(g, loc_48_f - (double)rdf32(eax * 0x10u + sp0 - 0x98u)) * (double)rdf32(ecx + sp0 - in_eax - 0x2ccu));
    wrf32(sp0 - 0x38u, (float)d105);
    d106 = (double)(float)fr(g, fr(g, loc_44_f - (double)rdf32(eax * 0x10u + sp0 - 0x94u)) * (double)rdf32(ecx + sp0 - in_eax - 0x2ccu));
    wrf32(sp0 - 0x34u, (float)d106);
    if ((rd32(sp0 + 8u) & 3u) == 3u)
    {
        edx = edx >> 2u | eax << 0x1eu;
        ebx = rd32(sp0 + 8u) & 3u;
        loc_38_f = d105;
        loc_34_f = d106;
        x1 = fr(g, fr(g, loc_48_f - (double)rdf32(eax * 0x10u + sp0 - 0x98u)) * (double)rdf32(ecx + sp0 - in_eax - 0x2ccu));
        x0 = fr(g, fr(g, loc_4c_f - (double)rdf32(eax * 0x10u + sp0 - 0x9cu)) * (double)rdf32(ecx + sp0 - in_eax - 0x2ccu));
        eax = eax << 4u;
    }
    else
    {
        edx = edx >> 2u | eax << 0x1eu;
        ebx = rd32(sp0 + 8u) & 3u;
        loc_38_f = d105;
        loc_34_f = d106;
        x1 = fr(g, fr(g, loc_48_f - (double)rdf32(eax * 0x10u + sp0 - 0x98u)) * (double)rdf32(ecx + sp0 - in_eax - 0x2ccu));
        x0 = fr(g, fr(g, loc_4c_f - (double)rdf32(eax * 0x10u + sp0 - 0x9cu)) * (double)rdf32(ecx + sp0 - in_eax - 0x2ccu));
        d107 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x10348408u))) + (double)rdf32(ecx + rd32(sp0 - 0xb8u)));
        wrf32(ecx + rd32(sp0 - 0xb8u), (float)d107);
        d108 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348408u)) * x1) + (double)rdf32(ecx + rd32(sp0 - 0xc0u)));
        wrf32(ecx + rd32(sp0 - 0xc0u), (float)d108);
        d109 = fr(g, fr(g, loc_34_f * (double)rdf32(COW_IMG(0x10348408u))) + (double)rdf32(ecx + loc_58));
        wrf32(ecx + loc_58, (float)d109);
        eax = ecx + loc_58;
    }
    if (rd32(sp0 + 8u) >= 0xcu) goto L_102f346c;
    if (ebx != 0u)
    {
        d110 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x10348404u))) + (double)rdf32(ecx + rd32(sp0 - 0xb4u)));
        wrf32(ecx + rd32(sp0 - 0xb4u), (float)d110);
        d111 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10348404u)) * x1) + (double)rdf32(ecx + rd32(sp0 - 0xacu)));
        wrf32(ecx + rd32(sp0 - 0xacu), (float)d111);
        d112 = fr(g, fr(g, loc_34_f * (double)rdf32(COW_IMG(0x10348404u))) + (double)rdf32(ecx + loc_54));
        wrf32(ecx + loc_54, (float)d112);
    }
    d113 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x10348400u))) + (double)rdf32(ecx + rd32(sp0 - 0xbcu)));
    wrf32(ecx + rd32(sp0 - 0xbcu), (float)d113);
    t114 = rd32(sp0 - 0xa4u);
    d115 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x10348400u))) + (double)rdf32(ecx + rd32(sp0 - 0xa4u)));
    wrf32(ecx + t114, (float)d115);
    d116 = fr(g, fr(g, loc_34_f * (double)rdf32(COW_IMG(0x10348400u))) + (double)rdf32(ecx + sp0 - in_eax - 0x190u));
    wrf32(ecx + sp0 - in_eax - 0x190u, (float)d116);
    if (ebx == 3u)
    {
        eax = ecx + t114;
        goto L_102f346e;
    }
    d117 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(ecx + rd32(sp0 - 0xa0u)));
    wrf32(ecx + rd32(sp0 - 0xa0u), (float)d117);
    d118 = fr(g, fr(g, loc_38_f * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(ecx + rd32(sp0 - 0xb0u)));
    wrf32(ecx + rd32(sp0 - 0xb0u), (float)d118);
    d119 = fr(g, fr(g, loc_34_f * (double)rdf32(COW_IMG(0x1032a9f0u))) + (double)rdf32(ecx + loc_50));
    wrf32(ecx + loc_50, (float)d119);
    eax = ecx + loc_50;
    goto L_102f3470;
L_102f346c: ;
L_102f346e: ;
    goto L_102f3470;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f2c9b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f2c9b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
