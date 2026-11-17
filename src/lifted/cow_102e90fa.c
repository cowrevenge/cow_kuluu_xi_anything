/* f_0x102e90fa - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e90fa(Guest* g)
{
    double d10;
    double d100;
    double d101;
    double d103;
    double d104;
    double d105;
    double d106;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
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
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
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
    double d4;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d5;
    double d52;
    double d53;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d6;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d7;
    double d71;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d8;
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
    double d9;
    double d97;
    double d99;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_104_f;
    uint32_t loc_10c;
    double loc_120_f;
    double loc_134_f;
    double loc_138_f;
    double loc_13c_f;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_314;
    uint32_t loc_318;
    uint32_t loc_31c;
    uint32_t loc_4;
    uint32_t loc_48;
    double loc_4c_f;
    double loc_50_f;
    double loc_54_f;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_8;
    double loc_84_f;
    uint32_t loc_88;
    uint32_t loc_8c;
    double loc_90_f;
    double loc_94_f;
    double loc_98_f;
    double loc_9c_f;
    double loc_ac_f;
    uint32_t loc_b0;
    double loc_b8_f;
    double loc_bc_f;
    uint32_t loc_c;
    double loc_c0_f;
    uint32_t t1;
    uint32_t t102;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
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
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t2;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t51;
    uint32_t t54;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t70;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t98;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 824u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x58u, self);
    wr32(sp0 - 0x314u, in_ebx);
    wr32(sp0 - 0x318u, in_esi);
    wr32(sp0 - 0x31cu, in_edi);
    t1 = rd32(self + 0x460u);
    wr32(sp0 - 0x24u, t1);
    wr32(sp0 - 0x20u, 0u);
    t2 = (rd32(self + 0x460u) != 2u) + 1u;
    wr32(sp0 - 0x10cu, t2);
    if ((rd32(self + 0x460u) != 2u) + 1u == 0u)
    {
        loc_4 = in_ebp;
        loc_314 = in_ebx;
        loc_318 = in_esi;
        loc_31c = in_edi;
        goto L_102ea024;
    }
    ecx = t1;
    loc_24 = t1;
    loc_10c = t2;
    loc_4 = in_ebp;
    loc_58 = self;
    loc_314 = in_ebx;
    loc_318 = in_esi;
    loc_31c = in_edi;
    loc_20 = 0u;
    loc_b0 = rd32(sp0 - 0xb0u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_8 = rd32(sp0 - 8u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_c = rd32(sp0 - 0xcu);
    loc_64 = rd32(sp0 - 0x64u);
    loc_60 = rd32(sp0 - 0x60u);
    loc_8c = rd32(sp0 - 0x8cu);
    loc_88 = rd32(sp0 - 0x88u);
    x1 = (double)rdf32(COW_IMG(0x103295d8u));
    x0 = (double)rdf32(COW_IMG(0x1032a3f0u));
L_102e913c: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    loc_10 = 0u;
    loc_14 = 0u;
    loc_2c = 0u;
L_102e9147: ;
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    loc_28 = 0u;
    loc_48 = 0u;
    loc_5c = 0u;
L_102e915c: ;
    if (loc_2c == 0u)
    {
        ebx = loc_5c;
    }
    else
    {
        ebx = loc_5c;
        wr32(ebx * 0x10u + loc_20 * 0x68u + loc_24 * 0xd0u + loc_58 + 0x58u, loc_28);
        wr32(ebx * 0x10u + loc_20 * 0x68u + loc_24 * 0xd0u + loc_58 + 0x60u, loc_48);
        ecx = loc_58;
    }
    if (ebx == 0u) goto L_102e953b;
    eax = ebx;
    if (eax == 1u) goto L_102e9488;
    eax = eax - 1u;
    if (eax == 1u) goto L_102e93d5;
    eax = eax - 1u;
    if (eax == 1u) goto L_102e9322;
    eax = eax - 1u;
    if (eax == 1u) goto L_102e926f;
    eax = eax - 1u;
    if (eax != 1u) goto L_102e95ef;
    wrf32(sp0 - 0x184u, (float)(double)(float)x0);
    wrf32(sp0 - 0x180u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x17cu, (float)(double)(float)1.0);
    esi = sp0 - 0x184u;
    edi = sp0 - 0x44u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x2a4u, (float)(double)(float)1.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x2a0u, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x29cu, (float)(double)(float)1.0);
    wrf32(sp0 - 0x16cu, (float)(double)(float)0.0);
    esi = sp0 - 0x2a4u;
    edi = sp0 - 0x80u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x168u, (float)(double)(float)x0);
    wrf32(sp0 - 0x164u, (float)(double)(float)1.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x244u, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x240u, (float)(double)(float)1.0);
    wrf32(sp0 - 0x23cu, (float)(double)(float)1.0);
    esi = sp0 - 0x16cu;
    edi = sp0 - 0x38u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x148u, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x144u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x140u, (float)(double)(float)1.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x244u;
    edi = sp0 - 0x74u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x148u;
L_102e95e9: ;
    edi = sp0 - 0xa8u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
L_102e95ef: ;
    if (loc_24 == 2u) goto L_102e97ad;
    eax = loc_24 - 2u;
    if (eax == 1u) goto L_102e96e6;
    eax = eax - 1u;
    if (eax != 1u) goto L_102e97c7;
    wr32(sp0 - 0xb0u, 0u);
    if (loc_20 == 0u)
    {
        eax = loc_20;
        goto L_102e9676;
    }
    eax = loc_20;
    if (eax != 1u)
    {
        loc_b0 = 0u;
        goto L_102e97c7;
    }
    eax = eax - 1u;
    if (ebx == 5u) goto L_102e967d;
    wr32(sp0 - 0x18u, 4u);
    d3 = (double)rdf32(sp0 - 0x3cu);
    if ((cow_fsw(g, d3, x1, 2u) >> 8u & 0x41u) == 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, x1, 2u);
        loc_18 = 4u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, x1, 2u);
        wr32(sp0 - 0x18u, 0u);
        loc_18 = 0u;
    }
    wr32(sp0 - 8u, 0xcu);
    d4 = (double)rdf32(sp0 - 0x78u);
    if ((cow_fsw(g, d4, x1, 2u) >> 8u & 0x41u) == 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, x1, 2u);
        loc_8 = 0xcu;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, x1, 2u);
        wr32(sp0 - 8u, 0x10u);
        loc_8 = 0x10u;
    }
    wr32(sp0 - 0x1cu, 4u);
    d5 = (double)rdf32(sp0 - 0x30u);
    if ((cow_fsw(g, d5, x1, 2u) >> 8u & 0x41u) == 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, x1, 2u);
        loc_1c = 4u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, x1, 2u);
        wr32(sp0 - 0x1cu, 0u);
        loc_1c = 0u;
    }
    d6 = (double)rdf32(sp0 - 0x6cu);
    if ((cow_fsw(g, d6, x1, 1u) >> 8u & 0x41u) != 0u) goto L_102e9749;
L_102e96da: ;
    wr32(sp0 - 0xcu, 0xcu);
    loc_b0 = 0u;
    loc_c = 0xcu;
L_102e97c9: ;
    if (loc_1c != loc_c)
    {
        if (loc_18 != loc_8)
        {
            if (loc_b0 == 0u)
            {
                if (loc_2c != 0u)
                {
                    if (loc_1c <= loc_c)
                    {
                        edi = loc_1c;
                        d71 = (double)(float)fr(g, (double)rdf32(sp0 - 0x74u) - (double)rdf32(sp0 - 0x38u));
                        wrf32(sp0 - 0x98u, (float)d71);
                        d72 = (double)(float)fr(g, (double)rdf32(sp0 - 0x70u) - (double)rdf32(sp0 - 0x34u));
                        wrf32(sp0 - 0x90u, (float)d72);
                        d73 = (double)(float)fr(g, (double)rdf32(sp0 - 0x6cu) - (double)rdf32(sp0 - 0x30u));
                        wrf32(sp0 - 0x84u, (float)d73);
                        edx = 0u;
                        loc_98_f = d71;
                        loc_90_f = d72;
                        loc_84_f = d73;
L_102e9c7b: ;
                        wr32(sp0 - 0x4cu, edi);
                        if ((int32_t)edi >= 0)
                        {
                            x1 = (double)(int32_t)edi;
                        }
                        else
                        {
                            x1 = (double)(int32_t)edi;
                            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
                        }
                        d74 = (double)(float)fr(g, x1 * (double)rdf32(COW_IMG(0x1032a9f0u)));
                        wrf32(sp0 - 0x104u, (float)d74);
                        d75 = (double)(float)fr(g, fr(g, loc_98_f * fr(g, x1 * (double)rdf32(COW_IMG(0x1032a9f0u)))) + (double)rdf32(sp0 - 0x38u));
                        wrf32(sp0 - 0x13cu, (float)d75);
                        d76 = (double)(float)fr(g, fr(g, loc_90_f * fr(g, x1 * (double)rdf32(COW_IMG(0x1032a9f0u)))) + (double)rdf32(sp0 - 0x34u));
                        wrf32(sp0 - 0x138u, (float)d76);
                        d77 = (double)(float)fr(g, fr(g, loc_84_f * fr(g, x1 * (double)rdf32(COW_IMG(0x1032a9f0u)))) + (double)rdf32(sp0 - 0x30u));
                        wrf32(sp0 - 0x134u, (float)d77);
                        if (loc_18 <= loc_8)
                        {
                            esi = loc_18;
                            loc_104_f = d74;
                            loc_13c_f = d75;
                            loc_138_f = d76;
                            loc_134_f = d77;
                            d78 = (double)(float)fr(g, (double)rdf32(sp0 - 0x80u) - (double)rdf32(sp0 - 0x44u));
                            wrf32(sp0 - 0x94u, (float)d78);
                            d79 = (double)(float)fr(g, (double)rdf32(sp0 - 0x7cu) - (double)rdf32(sp0 - 0x40u));
                            wrf32(sp0 - 0x9cu, (float)d79);
                            d80 = (double)(float)fr(g, (double)rdf32(sp0 - 0x78u) - (double)rdf32(sp0 - 0x3cu));
                            wrf32(sp0 - 0xacu, (float)d80);
                            d81 = (double)(float)fr(g, 1.0 - loc_104_f);
                            wrf32(sp0 - 0x4cu, (float)d81);
                            loc_4c_f = d81;
                            loc_94_f = d78;
                            loc_9c_f = d79;
                            loc_ac_f = d80;
L_102e9cf7: ;
                            wr32(sp0 - 0xc0u, esi);
                            if ((int32_t)esi >= 0)
                            {
                                x0 = (double)(int32_t)esi;
                            }
                            else
                            {
                                x0 = (double)(int32_t)esi;
                                x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
                            }
                            wr32(sp0 - 0x320u, sp0 - 0x298u);
                            d82 = (double)(float)fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9f0u)));
                            wrf32(sp0 - 0x108u, (float)d82);
                            wr32(sp0 - 0x324u, sp0 - 0x2b0u);
                            d83 = (double)(float)fr(g, fr(g, loc_ac_f * fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9f0u)))) + (double)rdf32(sp0 - 0x3cu));
                            wrf32(sp0 - 0x2f0u, (float)d83);
                            d84 = fr(g, fr(g, loc_94_f * fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9f0u)))) + (double)rdf32(sp0 - 0x44u));
                            d85 = (double)(float)fr(g, d84 + loc_13c_f);
                            wrf32(sp0 - 0x310u, (float)d85);
                            d86 = (double)(float)fr(g, d85 - (double)rdf32(sp0 - 0xa8u));
                            wrf32(sp0 - 0x298u, (float)d86);
                            d87 = fr(g, fr(g, fr(g, loc_9c_f * fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9f0u)))) + (double)rdf32(sp0 - 0x40u)) + loc_138_f);
                            d88 = (double)(float)fr(g, d87 - (double)rdf32(sp0 - 0xa4u));
                            wrf32(sp0 - 0x294u, (float)d88);
                            d89 = (double)(float)fr(g, fr(g, d83 + loc_134_f) - (double)rdf32(sp0 - 0xa0u));
                            wrf32(sp0 - 0x290u, (float)d89);
                            g->edx = edx;
                            g->esp = sp0 - 0x31cu;
                            cow_stdcall(g, COW_IMG(0x102d64b1u), 2, sp0 - 0x2b0u, sp0 - 0x298u);
                            t90 = g->edx;
                            t91 = rd32(sp0 - 0x20u);
                            wr32(sp0 - 0x320u, t91);
                            t92 = rd32(sp0 - 0x24u);
                            wr32(sp0 - 0x324u, t92);
                            wr32(sp0 - 0x328u, sp0 - 0x2b0u);
                            t93 = rd32(sp0 - 0x10u);
                            wr32(sp0 - 0x32cu, t93);
                            g->ecx = rd32(sp0 - 0x58u);
                            g->edx = t90;
                            t94 = rd32(sp0 - 0x58u);
                            cow_stdcall(g, COW_IMG(0x102e9000u), 4, t93, sp0 - 0x2b0u, t92, t91);
                            t95 = g->ecx;
                            t96 = g->edx;
                            d97 = fr(g, 1.0 - (double)rdf32(sp0 - 0x108u));
                            wr32(rd32(sp0 - 0x10u) + 0xcu, 0xffffffffu);
                            wrf32(rd32(sp0 - 0x10u) + 0x10u, (float)d97);
                            t98 = rd32(sp0 - 0x10u);
                            d99 = (double)rdf32(sp0 - 0x4cu);
                            wrf32(t98 + 0x14u, (float)d99);
                            d100 = (double)rdf32(sp0 - 0x2a8u);
                            if (!(d100 < (double)rdf32(COW_IMG(0x103295d8u))))
                            {
                                eax = (t98 & 0xffff0000u) | (uint16_t)cow_fsw(g, d100, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                ecx = t95;
                                edx = t96;
                                goto L_102e9ddc;
                            }
                            eax = (t98 & 0xffff0000u) | (uint16_t)cow_fsw(g, d100, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            ecx = t95;
                            edx = t96;
                            if (rd32(sp0 - 0x20u) == 0u) goto L_102e9df5;
L_102e9ddc: ;
                            d101 = (double)rdf32(sp0 - 0x2a8u);
                            if ((cow_fsw(g, d101, (double)rdf32(COW_IMG(0x103295d8u)), 0u) >> 8u & 0x41u) != 0u) goto L_102e9e2c;
                            if (rd32(sp0 - 0x20u) != 1u) goto L_102e9e2c;
L_102e9df5: ;
                            if (rd32(sp0 - 0x24u) == 4u)
                            {
                                wr32(rd32(sp0 - 0x10u) + 0xcu, 0xffffffu);
                            }
                            if (rd32(sp0 - 0x24u) == 3u)
                            {
                                t102 = rd32(sp0 - 0x10u);
                                d103 = fr(g, (double)rdf32(rd32(sp0 - 0x10u)) * (double)rdf32(COW_IMG(0x10329990u)));
                                d104 = (double)rdf32(COW_IMG(0x10329990u));
                                wrf32(t102, (float)d103);
                                d105 = fr(g, (double)rdf32(t102 + 4u) * d104);
                                wrf32(t102 + 4u, (float)d105);
                                d106 = fr(g, (double)rdf32(t102 + 8u) * d104);
                                wrf32(t102 + 8u, (float)d106);
                            }
L_102e9e2c: ;
                            t107 = rd32(sp0 - 0x10u) + 0x18u;
                            wr32(sp0 - 0x10u, t107);
                            if (esi + 1u <= rd32(sp0 - 8u))
                            {
                                esi = esi + 1u;
                                loc_4 = rd32(sp0 - 4u);
                                loc_58 = rd32(sp0 - 0x58u);
                                loc_314 = rd32(sp0 - 0x314u);
                                loc_318 = rd32(sp0 - 0x318u);
                                loc_31c = rd32(sp0 - 0x31cu);
                                loc_24 = rd32(sp0 - 0x24u);
                                loc_20 = rd32(sp0 - 0x20u);
                                loc_10c = rd32(sp0 - 0x10cu);
                                loc_10 = t107;
                                loc_14 = rd32(sp0 - 0x14u);
                                loc_2c = rd32(sp0 - 0x2cu);
                                loc_28 = rd32(sp0 - 0x28u);
                                loc_48 = rd32(sp0 - 0x48u);
                                loc_5c = rd32(sp0 - 0x5cu);
                                loc_b0 = rd32(sp0 - 0xb0u);
                                loc_18 = rd32(sp0 - 0x18u);
                                loc_8 = rd32(sp0 - 8u);
                                loc_1c = rd32(sp0 - 0x1cu);
                                loc_c = rd32(sp0 - 0xcu);
                                loc_98_f = (double)rdf32(sp0 - 0x98u);
                                loc_90_f = (double)rdf32(sp0 - 0x90u);
                                loc_84_f = (double)rdf32(sp0 - 0x84u);
                                loc_4c_f = (double)rdf32(sp0 - 0x4cu);
                                loc_13c_f = (double)rdf32(sp0 - 0x13cu);
                                loc_138_f = (double)rdf32(sp0 - 0x138u);
                                loc_134_f = (double)rdf32(sp0 - 0x134u);
                                loc_94_f = (double)rdf32(sp0 - 0x94u);
                                loc_9c_f = (double)rdf32(sp0 - 0x9cu);
                                loc_ac_f = (double)rdf32(sp0 - 0xacu);
                                loc_64 = rd32(sp0 - 0x64u);
                                loc_60 = rd32(sp0 - 0x60u);
                                loc_8c = rd32(sp0 - 0x8cu);
                                loc_88 = rd32(sp0 - 0x88u);
                                goto L_102e9cf7;
                            }
                            loc_10 = t107;
                            loc_4 = rd32(sp0 - 4u);
                            loc_58 = rd32(sp0 - 0x58u);
                            loc_314 = rd32(sp0 - 0x314u);
                            loc_318 = rd32(sp0 - 0x318u);
                            loc_31c = rd32(sp0 - 0x31cu);
                            loc_24 = rd32(sp0 - 0x24u);
                            loc_20 = rd32(sp0 - 0x20u);
                            loc_10c = rd32(sp0 - 0x10cu);
                            loc_14 = rd32(sp0 - 0x14u);
                            loc_2c = rd32(sp0 - 0x2cu);
                            loc_28 = rd32(sp0 - 0x28u);
                            loc_48 = rd32(sp0 - 0x48u);
                            loc_5c = rd32(sp0 - 0x5cu);
                            loc_b0 = rd32(sp0 - 0xb0u);
                            loc_18 = rd32(sp0 - 0x18u);
                            loc_8 = rd32(sp0 - 8u);
                            loc_1c = rd32(sp0 - 0x1cu);
                            loc_c = rd32(sp0 - 0xcu);
                            loc_98_f = (double)rdf32(sp0 - 0x98u);
                            loc_90_f = (double)rdf32(sp0 - 0x90u);
                            loc_84_f = (double)rdf32(sp0 - 0x84u);
                            loc_64 = rd32(sp0 - 0x64u);
                            loc_60 = rd32(sp0 - 0x60u);
                            loc_8c = rd32(sp0 - 0x8cu);
                            loc_88 = rd32(sp0 - 0x88u);
                            x0 = (double)rdf32(COW_IMG(0x1032a3f0u));
                        }
                        if (edi + 1u <= loc_c)
                        {
                            edi = edi + 1u;
                            goto L_102e9c7b;
                        }
                    }
                    if (loc_1c < loc_c)
                    {
                        edi = loc_1c;
                        esi = loc_8;
L_102e9e55: ;
                        if (loc_18 < esi)
                        {
                            edx = loc_18;
                            eax = (esi - edx + 1u) * (edi - loc_1c) - edx;
L_102e9e6b: ;
                            wr16(loc_14, (uint16_t)(eax + edx + loc_28));
                            t108 = rd16(loc_14);
                            wr16(loc_14 + 2u, (uint16_t)(esi + ((t108 & 0xffff0000u) | (uint16_t)(t108 - (uint16_t)loc_18)) + 1u));
                            t109 = rd16(loc_14);
                            wr16(loc_14 + 4u, (uint16_t)(t109 + 1u));
                            t110 = rd16(loc_14 + 4u);
                            wr16(loc_14 + 6u, (uint16_t)t110);
                            t111 = rd16(loc_14 + 2u);
                            wr16(loc_14 + 8u, (uint16_t)t111);
                            wr16(loc_14 + 0xau, (uint16_t)(rd16(loc_14 + 2u) + 1u));
                            wr32(sp0 - 0x14u, loc_14 + 0xcu);
                            if (edx + 1u < esi)
                            {
                                edx = edx + 1u;
                                loc_14 = loc_14 + 0xcu;
                                goto L_102e9e6b;
                            }
                            loc_14 = loc_14 + 0xcu;
                        }
                        if (edi + 1u < loc_c)
                        {
                            edi = edi + 1u;
                            goto L_102e9e55;
                        }
                    }
                }
                t112 = loc_48 + (loc_c * 6u - loc_1c * 6u) * (loc_8 - loc_18);
                wr32(sp0 - 0x48u, t112);
                t113 = loc_28 + (loc_c - loc_1c + 1u) * (loc_8 - loc_18 + 1u);
                wr32(sp0 - 0x28u, t113);
                ecx = loc_1c * 6u;
                loc_28 = t113;
                loc_48 = t112;
            }
            else
            {
                eax = loc_b0;
                if (eax == 1u)
                {
                    if (loc_2c != 0u)
                    {
                        wr32(sp0 - 8u, loc_8 >> 1u);
                        wr32(sp0 - 0x68u, 0u);
                        d19 = (double)(float)fr(g, (double)rdf32(sp0 - 0x80u) - (double)rdf32(sp0 - 0x44u));
                        wrf32(sp0 - 0x94u, (float)d19);
                        d20 = (double)(float)fr(g, (double)rdf32(sp0 - 0x7cu) - (double)rdf32(sp0 - 0x40u));
                        wrf32(sp0 - 0x9cu, (float)d20);
                        d21 = (double)(float)fr(g, (double)rdf32(sp0 - 0x78u) - (double)rdf32(sp0 - 0x3cu));
                        wrf32(sp0 - 0xacu, (float)d21);
                        d22 = (double)(float)fr(g, (double)rdf32(sp0 - 0x74u) - (double)rdf32(sp0 - 0x38u));
                        wrf32(sp0 - 0x98u, (float)d22);
                        d23 = (double)(float)fr(g, (double)rdf32(sp0 - 0x70u) - (double)rdf32(sp0 - 0x34u));
                        wrf32(sp0 - 0x90u, (float)d23);
                        d24 = (double)(float)fr(g, (double)rdf32(sp0 - 0x6cu) - (double)rdf32(sp0 - 0x30u));
                        wrf32(sp0 - 0x84u, (float)d24);
                        loc_8 = loc_8 >> 1u;
                        loc_68 = 0u;
                        loc_94_f = d19;
                        loc_9c_f = d20;
                        loc_ac_f = d21;
                        loc_98_f = d22;
                        loc_90_f = d23;
                        loc_84_f = d24;
L_102e9838: ;
                        if (loc_68 == 0u) goto L_102e98f2;
                        eax = loc_68;
                        if (eax == 1u) goto L_102e98af;
                        eax = eax - 1u;
                        if (eax == 1u) goto L_102e987e;
                        eax = eax - 1u;
                        if (eax != 1u) goto L_102e992a;
                        wrf32(sp0 - 0xe8u, (float)(double)(float)0.0);
                        wrf32(sp0 - 0xe4u, (float)(double)(float)1.0);
                        wr32(sp0 - 0x64u, cow_f2bits((double)(float)0.0));
                        wrf32(sp0 - 0xf0u, (float)(double)(float)0.0);
                        wr32(sp0 - 0x60u, cow_f2bits((double)(float)1.0));
                        wrf32(sp0 - 0xecu, (float)(double)(float)0.0);
                        wr32(sp0 - 0x8cu, cow_f2bits((double)(float)0.0));
                        eax = cow_f2bits((double)(float)0.0);
                        loc_64 = cow_f2bits((double)(float)0.0);
                        loc_60 = cow_f2bits((double)(float)1.0);
                        loc_8c = cow_f2bits((double)(float)0.0);
L_102e9927: ;
                        wr32(sp0 - 0x88u, eax);
                        loc_88 = eax;
L_102e992a: ;
                        d25 = (double)(float)fr(g, cow_bits2f(loc_8c) - cow_bits2f(loc_64));
                        wrf32(sp0 - 0x120u, (float)d25);
                        d26 = (double)(float)fr(g, cow_bits2f(loc_88) - cow_bits2f(loc_60));
                        wrf32(sp0 - 0xc0u, (float)d26);
                        ebx = 0u;
                        loc_120_f = d25;
                        loc_c0_f = d26;
L_102e9941: ;
                        wr32(sp0 - 0x4cu, ebx);
                        if ((int32_t)ebx >= 0)
                        {
                            x1 = (double)(int32_t)ebx;
                        }
                        else
                        {
                            x1 = (double)(int32_t)ebx;
                            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
                        }
                        d27 = (double)(float)fr(g, fr(g, loc_120_f * fr(g, x1 * (double)rdf32(COW_IMG(0x1032a9f0u)))) + cow_bits2f(loc_64));
                        wrf32(sp0 - 0x54u, (float)d27);
                        d28 = (double)(float)fr(g, fr(g, loc_c0_f * fr(g, x1 * (double)rdf32(COW_IMG(0x1032a9f0u)))) + cow_bits2f(loc_60));
                        wrf32(sp0 - 0x50u, (float)d28);
                        if (loc_8 == 0u)
                        {
                            loc_54_f = d27;
                            loc_50_f = d28;
                        }
                        else
                        {
                            eax = loc_8;
                            loc_54_f = d27;
                            loc_50_f = d28;
                            wr32(sp0 - 0x4cu, eax - 1u);
                            if ((int32_t)(eax - 1u) >= 0)
                            {
                                x0 = (double)(int32_t)(eax - 1u);
                            }
                            else
                            {
                                x0 = (double)(int32_t)(eax - 1u);
                                x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
                            }
                            wrf32(sp0 - 0x4cu, (float)(double)(float)x0);
                            d29 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x10329a08u)) - loc_54_f);
                            wrf32(sp0 - 0xb8u, (float)d29);
                            d30 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x10329a08u)) - loc_50_f);
                            wrf32(sp0 - 0xbcu, (float)d30);
                            edx = 0u;
                            esi = 0u;
                            loc_4c_f = (double)(float)x0;
                            loc_b8_f = d29;
                            loc_bc_f = d30;
L_102e99ad: ;
                            wr32(sp0 - 0xb4u, esi);
                            if ((int32_t)esi >= 0)
                            {
                                x0 = (double)(int32_t)esi;
                            }
                            else
                            {
                                x0 = (double)(int32_t)esi;
                                x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
                            }
                            wr32(sp0 - 0x320u, sp0 - 0x268u);
                            wr32(sp0 - 0x324u, sp0 - 0x2ecu);
                            d31 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032a3ccu)) * fr(g, x0 / loc_4c_f));
                            wrf32(sp0 - 0xb4u, (float)d31);
                            d32 = (double)(float)fr(g, fr(g, loc_94_f * fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3ccu)) * fr(g, x0 / loc_4c_f)) * loc_b8_f) + loc_54_f)) + (double)rdf32(sp0 - 0x44u));
                            wrf32(sp0 - 0xccu, (float)d32);
                            d33 = (double)(float)fr(g, fr(g, loc_9c_f * fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3ccu)) * fr(g, x0 / loc_4c_f)) * loc_b8_f) + loc_54_f)) + (double)rdf32(sp0 - 0x40u));
                            wrf32(sp0 - 0xc8u, (float)d33);
                            d34 = (double)(float)fr(g, fr(g, loc_ac_f * fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032a3ccu)) * fr(g, x0 / loc_4c_f)) * loc_b8_f) + loc_54_f)) + (double)rdf32(sp0 - 0x3cu));
                            wrf32(sp0 - 0xc4u, (float)d34);
                            d35 = (double)(float)fr(g, fr(g, loc_98_f * fr(g, fr(g, d31 * loc_bc_f) + loc_50_f)) + (double)rdf32(sp0 - 0x38u));
                            wrf32(sp0 - 0xd8u, (float)d35);
                            d36 = (double)(float)fr(g, fr(g, loc_90_f * fr(g, fr(g, d31 * loc_bc_f) + loc_50_f)) + (double)rdf32(sp0 - 0x34u));
                            wrf32(sp0 - 0xd4u, (float)d36);
                            d37 = fr(g, x0 / loc_4c_f);
                            d38 = (double)(float)fr(g, fr(g, d37 * loc_b8_f) + loc_54_f);
                            wrf32(sp0 - 0x130u, (float)d38);
                            d39 = (double)(float)fr(g, fr(g, d37 * loc_bc_f) + loc_50_f);
                            wrf32(sp0 - 0x12cu, (float)d39);
                            d40 = (double)(float)fr(g, d35 + d32);
                            wrf32(sp0 - 0x250u, (float)d40);
                            d41 = (double)(float)fr(g, d36 + d33);
                            wrf32(sp0 - 0x24cu, (float)d41);
                            d42 = (double)(float)fr(g, d40 - (double)rdf32(sp0 - 0xa8u));
                            wrf32(sp0 - 0x268u, (float)d42);
                            d43 = (double)(float)fr(g, d41 - (double)rdf32(sp0 - 0xa4u));
                            wrf32(sp0 - 0x264u, (float)d43);
                            d44 = (double)(float)fr(g, fr(g, fr(g, fr(g, loc_84_f * fr(g, fr(g, d31 * loc_bc_f) + loc_50_f)) + (double)rdf32(sp0 - 0x30u)) + d34) - (double)rdf32(sp0 - 0xa0u));
                            wrf32(sp0 - 0x260u, (float)d44);
                            g->edx = edx;
                            g->esp = sp0 - 0x31cu;
                            cow_stdcall(g, COW_IMG(0x102d64b1u), 2, sp0 - 0x2ecu, sp0 - 0x268u);
                            t45 = g->edx;
                            t46 = rd32(sp0 - 0x20u);
                            wr32(sp0 - 0x320u, t46);
                            t47 = rd32(sp0 - 0x24u);
                            wr32(sp0 - 0x324u, t47);
                            wr32(sp0 - 0x328u, sp0 - 0x2ecu);
                            t48 = rd32(sp0 - 0x10u);
                            wr32(sp0 - 0x32cu, t48);
                            g->ecx = rd32(sp0 - 0x58u);
                            g->edx = t45;
                            t49 = rd32(sp0 - 0x58u);
                            cow_stdcall(g, COW_IMG(0x102e9000u), 4, t48, sp0 - 0x2ecu, t47, t46);
                            t50 = g->ecx;
                            t51 = g->edx;
                            d52 = fr(g, 1.0 - (double)rdf32(sp0 - 0x130u));
                            wr32(rd32(sp0 - 0x10u) + 0xcu, 0xffffffffu);
                            wrf32(rd32(sp0 - 0x10u) + 0x10u, (float)d52);
                            d53 = fr(g, 1.0 - (double)rdf32(sp0 - 0x12cu));
                            wrf32(rd32(sp0 - 0x10u) + 0x14u, (float)d53);
                            t54 = rd32(sp0 - 0x10u) + 0x18u;
                            wr32(sp0 - 0x10u, t54);
                            if (esi + 1u < rd32(sp0 - 8u))
                            {
                                ecx = t50;
                                edx = t51;
                                esi = esi + 1u;
                                loc_4 = rd32(sp0 - 4u);
                                loc_58 = rd32(sp0 - 0x58u);
                                loc_314 = rd32(sp0 - 0x314u);
                                loc_318 = rd32(sp0 - 0x318u);
                                loc_31c = rd32(sp0 - 0x31cu);
                                loc_24 = rd32(sp0 - 0x24u);
                                loc_20 = rd32(sp0 - 0x20u);
                                loc_10c = rd32(sp0 - 0x10cu);
                                loc_10 = t54;
                                loc_14 = rd32(sp0 - 0x14u);
                                loc_2c = rd32(sp0 - 0x2cu);
                                loc_28 = rd32(sp0 - 0x28u);
                                loc_48 = rd32(sp0 - 0x48u);
                                loc_5c = rd32(sp0 - 0x5cu);
                                loc_b0 = rd32(sp0 - 0xb0u);
                                loc_18 = rd32(sp0 - 0x18u);
                                loc_8 = rd32(sp0 - 8u);
                                loc_1c = rd32(sp0 - 0x1cu);
                                loc_c = rd32(sp0 - 0xcu);
                                loc_68 = rd32(sp0 - 0x68u);
                                loc_94_f = (double)rdf32(sp0 - 0x94u);
                                loc_9c_f = (double)rdf32(sp0 - 0x9cu);
                                loc_ac_f = (double)rdf32(sp0 - 0xacu);
                                loc_98_f = (double)rdf32(sp0 - 0x98u);
                                loc_90_f = (double)rdf32(sp0 - 0x90u);
                                loc_84_f = (double)rdf32(sp0 - 0x84u);
                                loc_64 = rd32(sp0 - 0x64u);
                                loc_60 = rd32(sp0 - 0x60u);
                                loc_8c = rd32(sp0 - 0x8cu);
                                loc_88 = rd32(sp0 - 0x88u);
                                loc_120_f = (double)rdf32(sp0 - 0x120u);
                                loc_c0_f = (double)rdf32(sp0 - 0xc0u);
                                loc_4c_f = (double)rdf32(sp0 - 0x4cu);
                                loc_54_f = (double)rdf32(sp0 - 0x54u);
                                loc_50_f = (double)rdf32(sp0 - 0x50u);
                                loc_b8_f = (double)rdf32(sp0 - 0xb8u);
                                loc_bc_f = (double)rdf32(sp0 - 0xbcu);
                                goto L_102e99ad;
                            }
                            ecx = t50;
                            loc_10 = t54;
                            loc_4 = rd32(sp0 - 4u);
                            loc_58 = rd32(sp0 - 0x58u);
                            loc_314 = rd32(sp0 - 0x314u);
                            loc_318 = rd32(sp0 - 0x318u);
                            loc_31c = rd32(sp0 - 0x31cu);
                            loc_24 = rd32(sp0 - 0x24u);
                            loc_20 = rd32(sp0 - 0x20u);
                            loc_10c = rd32(sp0 - 0x10cu);
                            loc_14 = rd32(sp0 - 0x14u);
                            loc_2c = rd32(sp0 - 0x2cu);
                            loc_28 = rd32(sp0 - 0x28u);
                            loc_48 = rd32(sp0 - 0x48u);
                            loc_5c = rd32(sp0 - 0x5cu);
                            loc_b0 = rd32(sp0 - 0xb0u);
                            loc_18 = rd32(sp0 - 0x18u);
                            loc_8 = rd32(sp0 - 8u);
                            loc_1c = rd32(sp0 - 0x1cu);
                            loc_c = rd32(sp0 - 0xcu);
                            loc_68 = rd32(sp0 - 0x68u);
                            loc_94_f = (double)rdf32(sp0 - 0x94u);
                            loc_9c_f = (double)rdf32(sp0 - 0x9cu);
                            loc_ac_f = (double)rdf32(sp0 - 0xacu);
                            loc_98_f = (double)rdf32(sp0 - 0x98u);
                            loc_90_f = (double)rdf32(sp0 - 0x90u);
                            loc_84_f = (double)rdf32(sp0 - 0x84u);
                            loc_64 = rd32(sp0 - 0x64u);
                            loc_60 = rd32(sp0 - 0x60u);
                            loc_8c = rd32(sp0 - 0x8cu);
                            loc_88 = rd32(sp0 - 0x88u);
                            loc_120_f = (double)rdf32(sp0 - 0x120u);
                            loc_c0_f = (double)rdf32(sp0 - 0xc0u);
                            loc_54_f = (double)rdf32(sp0 - 0x54u);
                            loc_50_f = (double)rdf32(sp0 - 0x50u);
                            x0 = (double)rdf32(COW_IMG(0x1032a3f0u));
                        }
                        d55 = (double)(float)fr(g, fr(g, loc_ac_f * loc_54_f) + (double)rdf32(sp0 - 0x3cu));
                        wrf32(sp0 - 0xc4u, (float)d55);
                        d56 = (double)(float)fr(g, fr(g, loc_90_f * loc_50_f) + (double)rdf32(sp0 - 0x34u));
                        wrf32(sp0 - 0xd4u, (float)d56);
                        d57 = (double)(float)fr(g, fr(g, loc_84_f * loc_50_f) + (double)rdf32(sp0 - 0x30u));
                        wrf32(sp0 - 0xd0u, (float)d57);
                        d58 = (double)(float)fr(g, fr(g, fr(g, loc_98_f * loc_50_f) + (double)rdf32(sp0 - 0x38u)) + fr(g, fr(g, loc_94_f * loc_54_f) + (double)rdf32(sp0 - 0x44u)));
                        wrf32(sp0 - 0x304u, (float)d58);
                        d59 = (double)(float)fr(g, d58 - (double)rdf32(sp0 - 0xa8u));
                        wrf32(sp0 - 0x280u, (float)d59);
                        d60 = fr(g, d56 + fr(g, fr(g, loc_9c_f * loc_54_f) + (double)rdf32(sp0 - 0x40u)));
                        d61 = (double)(float)fr(g, d60 - (double)rdf32(sp0 - 0xa4u));
                        wrf32(sp0 - 0x27cu, (float)d61);
                        d62 = (double)(float)fr(g, fr(g, d57 + d55) - (double)rdf32(sp0 - 0xa0u));
                        wrf32(sp0 - 0x278u, (float)d62);
                        esi = sp0 - 0x280u;
                        edi = loc_10;
                        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                        d63 = (double)rdf32(COW_IMG(0x10329a08u));
                        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                        wr32(loc_10 + 0xcu, 0xffffffffu);
                        wrf32(loc_10 + 0x10u, (float)d63);
                        d64 = (double)rdf32(COW_IMG(0x10329a08u));
                        wrf32(loc_10 + 0x14u, (float)d64);
                        wr32(sp0 - 0x10u, loc_10 + 0x18u);
                        if (ebx + 1u <= loc_c)
                        {
                            ebx = ebx + 1u;
                            loc_10 = loc_10 + 0x18u;
                            goto L_102e9941;
                        }
                        loc_10 = loc_10 + 0x18u;
                        if (loc_c == 0u) goto L_102e9c12;
                        esi = 0u;
L_102e9b9c: ;
                        if (loc_8 != 0u)
                        {
                            eax = (esi + (loc_c + 1u) * loc_68) * (loc_8 + 1u);
                            edx = 0u;
L_102e9bb4: ;
                            wr16(loc_14, (uint16_t)(eax + edx + loc_28));
                            t65 = rd16(loc_14);
                            wr16(loc_14 + 2u, (uint16_t)(((t65 & 0xffff0000u) | (uint16_t)(t65 + (uint16_t)loc_8)) + 1u));
                            t66 = rd16(loc_14);
                            wr16(loc_14 + 4u, (uint16_t)(t66 + 1u));
                            t67 = rd16(loc_14 + 4u);
                            wr16(loc_14 + 6u, (uint16_t)t67);
                            t68 = rd16(loc_14 + 2u);
                            wr16(loc_14 + 8u, (uint16_t)t68);
                            wr16(loc_14 + 0xau, (uint16_t)(rd16(loc_14 + 2u) + 1u));
                            wr32(sp0 - 0x14u, loc_14 + 0xcu);
                            if (edx + 1u < loc_8)
                            {
                                edx = edx + 1u;
                                loc_14 = loc_14 + 0xcu;
                                goto L_102e9bb4;
                            }
                            ecx = loc_14;
                            loc_14 = loc_14 + 0xcu;
                        }
                        if (esi + 1u < loc_c)
                        {
                            esi = esi + 1u;
                            goto L_102e9b9c;
                        }
L_102e9c12: ;
                        wr32(sp0 - 0x68u, loc_68 + 1u);
                        if (loc_68 + 1u < 4u)
                        {
                            loc_68 = loc_68 + 1u;
                            goto L_102e9838;
                        }
                    }
                    t69 = loc_28 + (loc_c * 4u + 4u) * (loc_8 + 1u);
                    wr32(sp0 - 0x28u, t69);
                    t70 = loc_48 + loc_c * loc_8 * 0x18u;
                    wr32(sp0 - 0x48u, t70);
                    ecx = loc_48;
                    loc_28 = t69;
                    loc_48 = t70;
                }
            }
        }
    }
L_102e9ef7: ;
    if (loc_2c != 0u)
    {
        t114 = loc_28 - rd32(loc_20 * 0x68u + loc_24 * 0xd0u + loc_58 + loc_5c * 0x10u + 0x58u);
        t115 = rd32(loc_20 * 0x68u + loc_24 * 0xd0u + loc_58 + loc_5c * 0x10u + 0x60u);
        wr32(loc_20 * 0x68u + loc_24 * 0xd0u + loc_58 + loc_5c * 0x10u + 0x5cu, t114);
        wr32(loc_20 * 0x68u + loc_24 * 0xd0u + loc_58 + loc_5c * 0x10u + 0x64u, loc_48 - t115);
        ecx = loc_48 - t115;
    }
    wr32(sp0 - 0x5cu, loc_5c + 1u);
    if (loc_5c + 1u < 6u)
    {
        loc_5c = loc_5c + 1u;
        goto L_102e9156;
    }
    if (loc_2c == 0u) goto L_102e9f76;
    eax = loc_2c;
    if (eax != 1u) goto L_102e9ffb;
    t116 = rd32(loc_20 * 0x68u + loc_24 * 0xd0u + loc_58 + 0x50u);
    wr32(sp0 - 0x320u, t116);
    g->edx = 0u;
    t117 = rd32(rd32(loc_20 * 0x68u + loc_24 * 0xd0u + loc_58 + 0x50u));
    g->esp = sp0 - 0x31cu;
    cow_thiscall(g, rd32(t117 + 0x30u), t117, 1, t116);
    t118 = g->ecx;
    t119 = g->edx;
    t120 = rd32(loc_20 * 0x68u + loc_24 * 0xd0u + loc_58 + 0x54u);
    wr32(sp0 - 0x320u, t120);
    cow_thiscall(g, rd32(rd32(rd32(loc_20 * 0x68u + loc_24 * 0xd0u + loc_58 + 0x54u)) + 0x30u), t118, 1, t120);
    t121 = g->ecx;
    ecx = t121;
L_102e9ff5: ;
    loc_4 = rd32(sp0 - 4u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_314 = rd32(sp0 - 0x314u);
    loc_318 = rd32(sp0 - 0x318u);
    loc_31c = rd32(sp0 - 0x31cu);
    loc_24 = rd32(sp0 - 0x24u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_10c = rd32(sp0 - 0x10cu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_b0 = rd32(sp0 - 0xb0u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_8 = rd32(sp0 - 8u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_c = rd32(sp0 - 0xcu);
    loc_64 = rd32(sp0 - 0x64u);
    loc_60 = rd32(sp0 - 0x60u);
    loc_8c = rd32(sp0 - 0x8cu);
    loc_88 = rd32(sp0 - 0x88u);
    x0 = (double)rdf32(COW_IMG(0x1032a3f0u));
L_102e9ffb: ;
    wr32(sp0 - 0x2cu, loc_2c + 1u);
    if (loc_2c + 1u < 2u)
    {
        loc_2c = loc_2c + 1u;
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
        goto L_102e9147;
    }
    x1 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(sp0 - 0x20u, loc_20 + 1u);
    if (loc_20 + 1u < loc_10c)
    {
        loc_20 = loc_20 + 1u;
        goto L_102e913c;
    }
L_102ea024: ;
    eax = 0u;
L_102ea026: ;
    g->ebx = loc_314;
    g->esi = loc_318;
    g->edi = loc_31c;
    g->ebp = loc_4;
    return eax;
L_102e9156: ;
    x1 = (double)rdf32(COW_IMG(0x103295d8u));
    goto L_102e915c;
L_102e926f: ;
    wrf32(sp0 - 0x2c8u, (float)(double)(float)1.0);
    wrf32(sp0 - 0x2c4u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x2c0u, (float)(double)(float)x0);
    wrf32(sp0 - 0x19cu, (float)(double)(float)x0);
    esi = sp0 - 0x2c8u;
    edi = sp0 - 0x44u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x198u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x194u, (float)(double)(float)x0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x25cu, (float)(double)(float)0.0);
    wrf32(sp0 - 0x258u, (float)(double)(float)x0);
    esi = sp0 - 0x19cu;
    edi = sp0 - 0x80u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x254u, (float)(double)(float)x0);
    wrf32(sp0 - 0x1b4u, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x1b0u, (float)(double)(float)1.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x1acu, (float)(double)(float)x0);
    wrf32(sp0 - 0x2bcu, (float)(double)(float)0.0);
    esi = sp0 - 0x25cu;
    edi = sp0 - 0x38u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x2b8u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x2b4u, (float)(double)(float)x0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x1b4u;
    edi = sp0 - 0x74u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x2bcu;
    goto L_102e95e9;
L_102e9322: ;
    wrf32(sp0 - 0x1ccu, (float)(double)(float)1.0);
    wrf32(sp0 - 0x1c8u, (float)(double)(float)x0);
    wrf32(sp0 - 0x1c4u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x274u, (float)(double)(float)x0);
    esi = sp0 - 0x1ccu;
    edi = sp0 - 0x44u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x270u, (float)(double)(float)x0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x26cu, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x1e4u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x1e0u, (float)(double)(float)x0);
    esi = sp0 - 0x274u;
    edi = sp0 - 0x80u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x1dcu, (float)(double)(float)1.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x2e0u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x2dcu, (float)(double)(float)x0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x2d8u, (float)(double)(float)x0);
    wrf32(sp0 - 0x1fcu, (float)(double)(float)0.0);
    wrf32(sp0 - 0x1f8u, (float)(double)(float)x0);
    esi = sp0 - 0x1e4u;
    edi = sp0 - 0x38u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x1f4u, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x2e0u;
    edi = sp0 - 0x74u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x1fcu;
    goto L_102e95e9;
L_102e93d5: ;
    wrf32(sp0 - 0x28cu, (float)(double)(float)1.0);
    wrf32(sp0 - 0x288u, (float)(double)(float)1.0);
    wrf32(sp0 - 0x284u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x214u, (float)(double)(float)x0);
    esi = sp0 - 0x28cu;
    edi = sp0 - 0x44u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x210u, (float)(double)(float)1.0);
    wrf32(sp0 - 0x20cu, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x2d4u, (float)(double)(float)0.0);
    esi = sp0 - 0x214u;
    edi = sp0 - 0x80u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x2d0u, (float)(double)(float)1.0);
    wrf32(sp0 - 0x2ccu, (float)(double)(float)x0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x22cu, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x228u, (float)(double)(float)1.0);
    wrf32(sp0 - 0x224u, (float)(double)(float)1.0);
    esi = sp0 - 0x2d4u;
    edi = sp0 - 0x38u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x154u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x150u, (float)(double)(float)1.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x14cu, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x22cu;
    edi = sp0 - 0x74u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x154u;
    goto L_102e95e9;
L_102e9488: ;
    wrf32(sp0 - 0x160u, (float)(double)(float)x0);
    wrf32(sp0 - 0x15cu, (float)(double)(float)0.0);
    wrf32(sp0 - 0x158u, (float)(double)(float)x0);
    esi = sp0 - 0x160u;
    edi = sp0 - 0x44u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x178u, (float)(double)(float)x0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x174u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x170u, (float)(double)(float)1.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x190u, (float)(double)(float)x0);
    wrf32(sp0 - 0x18cu, (float)(double)(float)x0);
    esi = sp0 - 0x178u;
    edi = sp0 - 0x80u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x188u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x1a8u, (float)(double)(float)x0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x1a4u, (float)(double)(float)1.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x1a0u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x1c0u, (float)(double)(float)x0);
    esi = sp0 - 0x190u;
    edi = sp0 - 0x38u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x1bcu, (float)(double)(float)0.0);
    wrf32(sp0 - 0x1b8u, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x1a8u;
    edi = sp0 - 0x74u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x1c0u;
    goto L_102e95e9;
L_102e953b: ;
    wrf32(sp0 - 0x1d8u, (float)(double)(float)1.0);
    wrf32(sp0 - 0x1d4u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x1d0u, (float)(double)(float)1.0);
    esi = sp0 - 0x1d8u;
    edi = sp0 - 0x44u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x1f0u, (float)(double)(float)1.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x1ecu, (float)(double)(float)0.0);
    wrf32(sp0 - 0x1e8u, (float)(double)(float)x0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x208u, (float)(double)(float)1.0);
    wrf32(sp0 - 0x204u, (float)(double)(float)x0);
    esi = sp0 - 0x1f0u;
    edi = sp0 - 0x80u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x200u, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x220u, (float)(double)(float)1.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x21cu, (float)(double)(float)1.0);
    wrf32(sp0 - 0x218u, (float)(double)(float)0.0);
    esi = sp0 - 0x208u;
    edi = sp0 - 0x38u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x238u, (float)(double)(float)1.0);
    wrf32(sp0 - 0x234u, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 - 0x230u, (float)(double)(float)0.0);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x220u;
    edi = sp0 - 0x74u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    esi = sp0 - 0x238u;
    goto L_102e95e9;
L_102e9676: ;
    wr32(sp0 - 0x320u, 4u);
    if (ebx != 4u) goto L_102e9690;
    ecx = 4u;
L_102e967d: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0xcu, 0u);
    loc_b0 = 0u;
    loc_18 = 0u;
    loc_8 = 0u;
    loc_1c = 0u;
    loc_c = 0u;
    goto L_102e9ef7;
L_102e9690: ;
    wr32(sp0 - 0x18u, 4u);
    d7 = (double)rdf32(sp0 - 0x3cu);
    if (d7 < x1)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, x1, 2u);
        loc_18 = 4u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, x1, 2u);
        wr32(sp0 - 0x18u, 0u);
        loc_18 = 0u;
    }
    wr32(sp0 - 8u, 0xcu);
    d8 = (double)rdf32(sp0 - 0x78u);
    if (d8 < x1)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, x1, 2u);
        loc_8 = 0xcu;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, x1, 2u);
        wr32(sp0 - 8u, 0x10u);
        loc_8 = 0x10u;
    }
    wr32(sp0 - 0x1cu, 4u);
    d9 = (double)rdf32(sp0 - 0x30u);
    if (d9 < x1)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, x1, 2u);
        loc_1c = 4u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, x1, 2u);
        wr32(sp0 - 0x1cu, 0u);
        loc_1c = 0u;
    }
    d10 = (double)rdf32(sp0 - 0x6cu);
    if (!(d10 < x1))
    {
        ecx = 4u;
        goto L_102e9749;
    }
    ecx = 4u;
    goto L_102e96da;
L_102e96e6: ;
    wr32(sp0 - 0xb0u, 0u);
    if (loc_20 == 0u)
    {
        eax = loc_20;
        goto L_102e9752;
    }
    eax = loc_20;
    if (eax != 1u)
    {
        loc_b0 = 0u;
        goto L_102e97c7;
    }
    eax = eax - 1u;
    wr32(sp0 - 0x18u, 7u);
    d11 = (double)rdf32(sp0 - 0x3cu);
    if ((cow_fsw(g, d11, x1, 2u) >> 8u & 0x41u) == 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, x1, 2u);
        loc_18 = 7u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, x1, 2u);
        wr32(sp0 - 0x18u, 0u);
        loc_18 = 0u;
    }
    wr32(sp0 - 8u, 9u);
    d12 = (double)rdf32(sp0 - 0x78u);
    if ((cow_fsw(g, d12, x1, 2u) >> 8u & 0x41u) == 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, x1, 2u);
        loc_8 = 9u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, x1, 2u);
        wr32(sp0 - 8u, 0x10u);
        loc_8 = 0x10u;
    }
    wr32(sp0 - 0x1cu, 7u);
    d13 = (double)rdf32(sp0 - 0x30u);
    if ((cow_fsw(g, d13, x1, 2u) >> 8u & 0x41u) == 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, x1, 2u);
        loc_1c = 7u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, x1, 2u);
        wr32(sp0 - 0x1cu, 0u);
        loc_1c = 0u;
    }
    d14 = (double)rdf32(sp0 - 0x6cu);
    if ((cow_fsw(g, d14, x1, 1u) >> 8u & 0x41u) == 0u) goto L_102e97a4;
L_102e9749: ;
    wr32(sp0 - 0xcu, 0x10u);
    loc_b0 = 0u;
    loc_c = 0x10u;
    goto L_102e97c9;
L_102e9752: ;
    wr32(sp0 - 0x18u, 7u);
    d15 = (double)rdf32(sp0 - 0x3cu);
    if (d15 < x1)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, x1, 2u);
        loc_18 = 7u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, x1, 2u);
        wr32(sp0 - 0x18u, 0u);
        loc_18 = 0u;
    }
    wr32(sp0 - 8u, 9u);
    d16 = (double)rdf32(sp0 - 0x78u);
    if (d16 < x1)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, x1, 2u);
        loc_8 = 9u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, x1, 2u);
        wr32(sp0 - 8u, 0x10u);
        loc_8 = 0x10u;
    }
    wr32(sp0 - 0x1cu, 7u);
    d17 = (double)rdf32(sp0 - 0x30u);
    if (d17 < x1)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, x1, 2u);
        loc_1c = 7u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, x1, 2u);
        wr32(sp0 - 0x1cu, 0u);
        loc_1c = 0u;
    }
    d18 = (double)rdf32(sp0 - 0x6cu);
    if (!(d18 < x1)) goto L_102e9749;
L_102e97a4: ;
    wr32(sp0 - 0xcu, 9u);
    loc_b0 = 0u;
    loc_c = 9u;
    goto L_102e97c9;
L_102e97ad: ;
    wr32(sp0 - 0x320u, 0x10u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0xb0u, ebx == 4u);
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 0xcu, 0x10u);
    loc_b0 = ebx == 4u;
    loc_18 = 0u;
    loc_1c = 0u;
    loc_8 = 0x10u;
    loc_c = 0x10u;
L_102e97c7: ;
    goto L_102e97c9;
L_102e987e: ;
    wrf32(sp0 - 0x100u, (float)(double)(float)1.0);
    wrf32(sp0 - 0xfcu, (float)(double)(float)1.0);
    wr32(sp0 - 0x64u, cow_f2bits((double)(float)1.0));
    wrf32(sp0 - 0xe0u, (float)(double)(float)0.0);
    wr32(sp0 - 0x60u, cow_f2bits((double)(float)1.0));
    wrf32(sp0 - 0xdcu, (float)(double)(float)1.0);
    wr32(sp0 - 0x8cu, cow_f2bits((double)(float)0.0));
    eax = cow_f2bits((double)(float)1.0);
    loc_64 = cow_f2bits((double)(float)1.0);
    loc_60 = cow_f2bits((double)(float)1.0);
    loc_8c = cow_f2bits((double)(float)0.0);
    goto L_102e9927;
L_102e98af: ;
    wrf32(sp0 - 0x11cu, (float)(double)(float)1.0);
    wrf32(sp0 - 0x118u, (float)(double)(float)0.0);
    wr32(sp0 - 0x64u, cow_f2bits((double)(float)1.0));
    wrf32(sp0 - 0x128u, (float)(double)(float)1.0);
    wr32(sp0 - 0x60u, cow_f2bits((double)(float)0.0));
    wrf32(sp0 - 0x124u, (float)(double)(float)1.0);
    wr32(sp0 - 0x8cu, cow_f2bits((double)(float)1.0));
    eax = cow_f2bits((double)(float)1.0);
    loc_64 = cow_f2bits((double)(float)1.0);
    loc_60 = cow_f2bits((double)(float)0.0);
    loc_8c = cow_f2bits((double)(float)1.0);
    goto L_102e9927;
L_102e98f2: ;
    wrf32(sp0 - 0x114u, (float)(double)(float)0.0);
    wrf32(sp0 - 0x110u, (float)(double)(float)0.0);
    wr32(sp0 - 0x64u, cow_f2bits((double)(float)0.0));
    wrf32(sp0 - 0xf8u, (float)(double)(float)1.0);
    wr32(sp0 - 0x60u, cow_f2bits((double)(float)0.0));
    wrf32(sp0 - 0xf4u, (float)(double)(float)0.0);
    wr32(sp0 - 0x8cu, cow_f2bits((double)(float)1.0));
    eax = cow_f2bits((double)(float)0.0);
    loc_64 = cow_f2bits((double)(float)0.0);
    loc_60 = cow_f2bits((double)(float)0.0);
    loc_8c = cow_f2bits((double)(float)1.0);
    goto L_102e9927;
L_102e9f76: ;
    t122 = loc_20 * 0x68u + loc_24 * 0xd0u + loc_58 + 0x50u;
    wr32(sp0 - 0x320u, t122);
    wr32(sp0 - 0x324u, 1u);
    wr32(sp0 - 0x328u, 0x142u);
    wr32(sp0 - 0x32cu, 8u);
    wr32(sp0 - 0x330u, loc_28 * 0x18u);
    t123 = rd32(loc_58 + 8u);
    wr32(sp0 - 0x334u, t123);
    g->eax = t123;
    g->esp = sp0 - 0x31cu;
    t124 = cow_thiscall(g, rd32(rd32(rd32(loc_58 + 8u)) + 0x5cu), loc_28 * 0x18u, 6, t123, loc_28 * 0x18u, 8u, 0x142u, 1u, t122);
    if ((int32_t)t124 < 0)
    {
        eax = t124;
        loc_4 = rd32(sp0 - 4u);
        loc_314 = rd32(sp0 - 0x314u);
        loc_318 = rd32(sp0 - 0x318u);
        loc_31c = rd32(sp0 - 0x31cu);
        goto L_102ea026;
    }
    ebx = loc_58;
    esi = loc_20 * 0x68u + loc_24 * 0xd0u + loc_58;
    edi = t122;
    wr32(sp0 - 0x320u, 0u);
    wr32(sp0 - 0x324u, sp0 - 0x10u);
    wr32(sp0 - 0x328u, 0u);
    wr32(sp0 - 0x32cu, 0u);
    wr32(sp0 - 0x330u, rd32(edi));
    g->eax = 0u;
    g->esp = sp0 - 0x31cu;
    t125 = cow_thiscall(g, rd32(rd32(rd32(edi)) + 0x2cu), rd32(rd32(edi)), 5, rd32(edi), 0u, 0u, sp0 - 0x10u, 0u);
    if ((int32_t)t125 < 0)
    {
        eax = t125;
        loc_4 = rd32(sp0 - 4u);
        loc_314 = rd32(sp0 - 0x314u);
        loc_318 = rd32(sp0 - 0x318u);
        loc_31c = rd32(sp0 - 0x31cu);
        goto L_102ea026;
    }
    wr32(sp0 - 0x320u, esi + 0x54u);
    wr32(sp0 - 0x324u, 1u);
    wr32(sp0 - 0x328u, 0x65u);
    wr32(sp0 - 0x32cu, 8u);
    t126 = rd32(sp0 - 0x48u) * 2u;
    wr32(sp0 - 0x330u, t126);
    t127 = rd32(ebx + 8u);
    wr32(sp0 - 0x334u, t127);
    g->eax = t127;
    g->edx = t126;
    g->esp = sp0 - 0x31cu;
    t128 = cow_thiscall(g, rd32(rd32(rd32(ebx + 8u)) + 0x60u), rd32(rd32(ebx + 8u)), 6, t127, t126, 8u, 0x65u, 1u, esi + 0x54u);
    t129 = g->edx;
    if ((int32_t)t128 < 0)
    {
        eax = t128;
        loc_4 = rd32(sp0 - 4u);
        loc_314 = rd32(sp0 - 0x314u);
        loc_318 = rd32(sp0 - 0x318u);
        loc_31c = rd32(sp0 - 0x31cu);
        goto L_102ea026;
    }
    edx = t129;
    esi = esi + 0x54u;
    wr32(sp0 - 0x320u, 0u);
    wr32(sp0 - 0x324u, sp0 - 0x14u);
    wr32(sp0 - 0x328u, 0u);
    wr32(sp0 - 0x32cu, 0u);
    wr32(sp0 - 0x330u, rd32(esi));
    g->eax = rd32(rd32(esi));
    t130 = rd32(rd32(esi));
    g->esp = sp0 - 0x31cu;
    t131 = cow_thiscall(g, rd32(t130 + 0x2cu), sp0 - 0x14u, 5, rd32(esi), 0u, 0u, sp0 - 0x14u, 0u);
    t132 = g->ecx;
    if ((int32_t)t131 < 0)
    {
        eax = t131;
        loc_4 = rd32(sp0 - 4u);
        loc_314 = rd32(sp0 - 0x314u);
        loc_318 = rd32(sp0 - 0x318u);
        loc_31c = rd32(sp0 - 0x31cu);
        goto L_102ea026;
    }
    ecx = t132;
    goto L_102e9ff5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e90fa(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e90fa(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
