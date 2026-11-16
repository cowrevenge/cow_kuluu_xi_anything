/* f_0x102aae00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102aae00(Guest* g)
{
    double d10;
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
    double d11;
    double d110;
    double d111;
    double d112;
    double d113;
    double d114;
    double d115;
    double d116;
    double d117;
    double d118;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
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
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d57;
    double d58;
    double d59;
    double d60;
    double d61;
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
    double d88;
    double d89;
    double d90;
    double d91;
    double d92;
    double d93;
    double d94;
    double d95;
    double d96;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    double loc_20_f;
    double loc_28_f;
    double loc_2c_f;
    double loc_30_f;
    double loc_34_f;
    double loc_38_f;
    double loc_3c_f;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    double loc_4_f;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    double loc_8_f;
    double loc_c_f;
    uint32_t t1;
    uint32_t t119;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = rd32(rd32(sp0 + 4u) + 0x34u);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_102ab838;
    }
    esi = t1;
    loc_44 = t1;
    if (rd32(esi + 0x14u) == 0u)
    {
        eax = rd32(esi + 0x14u);
        goto L_102ab838;
    }
    if (rd32(esi + 0x64u) != 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(esi + 0x64u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x60u;
        cow_cdecl(g, COW_IMG(0x102a99a0u), 6, esi, 4u, 3u, in_edi, in_esi, in_ebx);
        t2 = g->ecx;
        t3 = g->edx;
        ecx = t2;
        edx = t3;
    }
    if (rd32(esi + 0x68u) == 0u)
    {
        eax = rd32(esi + 0x68u);
        g->esp = sp0 - 0x60u;
        cow_cdecl(g, COW_IMG(0x102a99a0u), 6, esi, 5u, 3u, in_edi, in_esi, in_ebx);
    }
    t4 = rd32(esi + 0x64u);
    t5 = rd32(esi + 0x68u);
    if ((int32_t)rd32(esi + 0x14u) <= 0)
    {
        ecx = rd32(esi + 0x54u);
        edx = rd32(esi + 0x5cu);
        loc_50 = t4;
        loc_54 = t5;
    }
    else
    {
        eax = t4;
        ecx = rd32(esi + 0x54u);
        edx = rd32(esi + 0x5cu);
        edi = t5;
        loc_50 = t4;
        loc_54 = t5;
        eax = eax + 8u;
        ebx = 0u;
        ebp = edi - loc_50;
L_102aae73: ;
        wr32(eax - 8u, 0u);
        wr32(eax - 4u, 0u);
        wr32(eax, 0u);
        wr32(edi, 0u);
        wr32(edi + 4u, 0u);
        wr32(eax + ebp, 0u);
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 0x14u))
        {
            eax = eax + 0xcu;
            ebx = ebx + 1u;
            edi = edi + 0xcu;
            goto L_102aae73;
        }
    }
    if (rd32(rd32(rd32(sp0 + 4u) + 0x48u)) != 0u)
    {
        eax = rd32(rd32(rd32(sp0 + 4u) + 0x48u));
        ebx = rd32(rd32(sp0 + 4u) + 0x48u) + 4u;
        edi = 0u;
        loc_60 = 0u;
        loc_5c = 0u;
        loc_40 = eax;
L_102aaec9: ;
        if ((int32_t)rd32(ebx) > 0)
        {
            eax = rd32(ebx);
            ebx = ebx + 4u;
            goto L_102aaeec;
        }
        eax = rd32(ebx);
        ebx = ebx + 4u;
        wr32(sp0 + 4u, -eax);
        if (-eax == 0u) goto L_102ab6cf;
        eax = 0u;
L_102ab2c3: ;
        if (eax != 0u)
        {
            if (eax != 1u)
            {
                loc_60 = edi;
            }
            else
            {
                loc_5c = edi;
            }
            t9 = rd32(sp0 + 4u) - 1u;
            wr32(sp0 + 4u, t9);
            loc_48 = -eax;
        }
        else
        {
            t6 = rd32(ebx + 4u);
            t7 = rd32(sp0 + 4u) - 3u;
            t8 = rd32(ebx);
            wr32(sp0 + 4u, t7);
            ebx = ebx + 8u;
            loc_60 = t6;
            loc_5c = t8;
            loc_48 = 1u;
        }
        d10 = (double)(float)fr(g, (double)rdf32(ecx + loc_5c * 0xcu + 4u) - (double)rdf32(ecx + loc_60 * 0xcu + 4u));
        d11 = (double)(float)fr(g, (double)rdf32(ecx + loc_60 * 0xcu) - (double)rdf32(ecx + rd32(ebx) * 0xcu));
        d12 = (double)(float)fr(g, (double)rdf32(ecx + loc_60 * 0xcu + 4u) - (double)rdf32(ecx + rd32(ebx) * 0xcu + 4u));
        d13 = (double)(float)fr(g, (double)rdf32(ecx + loc_60 * 0xcu + 8u) - (double)rdf32(ecx + rd32(ebx) * 0xcu + 8u));
        d14 = (double)(float)fr(g, (double)rdf32(ecx + rd32(ebx) * 0xcu) - (double)rdf32(ecx + loc_5c * 0xcu));
        d15 = (double)(float)fr(g, (double)rdf32(ecx + rd32(ebx) * 0xcu + 4u) - (double)rdf32(ecx + loc_5c * 0xcu + 4u));
        d16 = (double)(float)fr(g, (double)rdf32(ecx + rd32(ebx) * 0xcu + 8u) - (double)rdf32(ecx + loc_5c * 0xcu + 8u));
        d17 = (double)(float)fr(g, (double)rdf32(edx + loc_5c * 8u) - (double)rdf32(edx + loc_60 * 8u));
        t18 = rd32(ebx) * 2u;
        d19 = (double)(float)fr(g, (double)rdf32(edx + loc_5c * 8u + 4u) - (double)rdf32(edx + loc_60 * 8u + 4u));
        d20 = (double)(float)fr(g, (double)rdf32(edx + loc_60 * 8u) - (double)rdf32(edx + t18 * 4u));
        d21 = (double)(float)fr(g, (double)rdf32(edx + loc_60 * 8u + 4u) - (double)rdf32(edx + t18 * 4u + 4u));
        d22 = (double)(float)fr(g, (double)rdf32(edx + t18 * 4u) - (double)rdf32(edx + loc_5c * 8u));
        d23 = (double)(float)fr(g, (double)rdf32(edx + t18 * 4u + 4u) - (double)rdf32(edx + loc_5c * 8u + 4u));
        d24 = fr(g, fr(g, d19 * d22) - fr(g, d23 * d17));
        if (!(d24 < rdf64(COW_IMG(0x10340b18u))))
        {
            ebp = loc_60 * 3u;
            esi = rd32(ebx) * 3u;
            edi = loc_5c * 3u;
            loc_58 = rd32(ebx);
            ebx = ebx + 4u;
            loc_20_f = d10;
            loc_18_f = d11;
            loc_14_f = d12;
            loc_10_f = d13;
            loc_c_f = d14;
            loc_8_f = d15;
            loc_4_f = d16;
            loc_3c_f = d17;
            loc_38_f = d19;
            loc_34_f = d20;
            loc_30_f = d21;
            loc_2c_f = d22;
            loc_28_f = d23;
            x2 = d24;
            x1 = fr(g, (double)rdf32(ecx + loc_5c * 0xcu + 8u) - (double)rdf32(ecx + loc_60 * 0xcu + 8u));
            x0 = fr(g, (double)rdf32(ecx + loc_5c * 0xcu) - (double)rdf32(ecx + loc_60 * 0xcu));
        }
        else
        {
            eax = (loc_5c * 2u & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, rdf64(COW_IMG(0x10340b18u)), 3u);
            ebp = loc_60 * 3u;
            esi = rd32(ebx) * 3u;
            edi = loc_5c * 3u;
            loc_58 = rd32(ebx);
            ebx = ebx + 4u;
            loc_20_f = d10;
            loc_18_f = d11;
            loc_14_f = d12;
            loc_10_f = d13;
            loc_c_f = d14;
            loc_8_f = d15;
            loc_4_f = d16;
            loc_3c_f = d17;
            loc_38_f = d19;
            loc_34_f = d20;
            loc_30_f = d21;
            loc_2c_f = d22;
            loc_28_f = d23;
            x2 = d24;
            x1 = fr(g, (double)rdf32(ecx + loc_5c * 0xcu + 8u) - (double)rdf32(ecx + loc_60 * 0xcu + 8u));
            x0 = fr(g, (double)rdf32(ecx + loc_5c * 0xcu) - (double)rdf32(ecx + loc_60 * 0xcu));
            if ((cow_fsw(g, x2, rdf64(COW_IMG(0x10340b50u)), 3u) & 0x4100u) == 0u)
            {
                x2 = (double)rdf32(COW_IMG(0x1032a42cu));
            }
        }
        d25 = fr(g, fr(g, fr(g, x0 * -fr(g, loc_28_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2))) - fr(g, loc_c_f * -fr(g, loc_38_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2)))) + (double)rdf32(edi * 4u + loc_50));
        d26 = fr(g, loc_38_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2));
        d27 = fr(g, loc_28_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2));
        d28 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2);
        wrf32(edi * 4u + loc_50, (float)d25);
        d29 = fr(g, fr(g, fr(g, loc_20_f * -d27) - fr(g, loc_8_f * -d26)) + (double)rdf32(edi * 4u + loc_50 + 4u));
        wrf32(edi * 4u + loc_50 + 4u, (float)d29);
        d30 = fr(g, fr(g, fr(g, x1 * -d27) - fr(g, loc_4_f * -d26)) + (double)rdf32(edi * 4u + loc_50 + 8u));
        wrf32(edi * 4u + loc_50 + 8u, (float)d30);
        d31 = fr(g, fr(g, fr(g, x0 * fr(g, loc_2c_f * d28)) - fr(g, loc_c_f * fr(g, loc_3c_f * d28))) + (double)rdf32(edi * 4u + loc_54));
        wrf32(edi * 4u + loc_54, (float)d31);
        d32 = fr(g, fr(g, fr(g, loc_20_f * fr(g, loc_2c_f * d28)) - fr(g, loc_8_f * fr(g, loc_3c_f * d28))) + (double)rdf32(edi * 4u + loc_54 + 4u));
        wrf32(edi * 4u + loc_54 + 4u, (float)d32);
        d33 = fr(g, fr(g, fr(g, x1 * fr(g, loc_2c_f * d28)) - fr(g, loc_4_f * fr(g, loc_3c_f * d28))) + (double)rdf32(edi * 4u + loc_54 + 8u));
        wrf32(edi * 4u + loc_54 + 8u, (float)d33);
        d34 = fr(g, fr(g, loc_30_f * loc_3c_f) - fr(g, loc_34_f * loc_38_f));
        if (!(d34 < rdf64(COW_IMG(0x10340b18u))))
        {
            x2 = d34;
        }
        else
        {
            eax = (loc_54 & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, rdf64(COW_IMG(0x10340b18u)), 3u);
            x2 = d34;
            if ((cow_fsw(g, x2, rdf64(COW_IMG(0x10340b50u)), 3u) & 0x4100u) == 0u)
            {
                x2 = (double)rdf32(COW_IMG(0x1032a42cu));
            }
        }
        d35 = fr(g, fr(g, fr(g, loc_18_f * -fr(g, loc_38_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2))) - fr(g, x0 * -fr(g, loc_30_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2)))) + (double)rdf32(ebp * 4u + loc_50));
        d36 = fr(g, loc_30_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2));
        d37 = fr(g, loc_38_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2));
        d38 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2);
        wrf32(ebp * 4u + loc_50, (float)d35);
        d39 = fr(g, fr(g, fr(g, loc_14_f * -d37) - fr(g, loc_20_f * -d36)) + (double)rdf32(ebp * 4u + loc_50 + 4u));
        wrf32(ebp * 4u + loc_50 + 4u, (float)d39);
        d40 = fr(g, fr(g, fr(g, loc_10_f * -d37) - fr(g, x1 * -d36)) + (double)rdf32(ebp * 4u + loc_50 + 8u));
        wrf32(ebp * 4u + loc_50 + 8u, (float)d40);
        d41 = fr(g, fr(g, fr(g, loc_18_f * fr(g, loc_3c_f * d38)) - fr(g, x0 * fr(g, loc_34_f * d38))) + (double)rdf32(ebp * 4u + loc_54));
        wrf32(ebp * 4u + loc_54, (float)d41);
        d42 = fr(g, fr(g, fr(g, loc_14_f * fr(g, loc_3c_f * d38)) - fr(g, loc_20_f * fr(g, loc_34_f * d38))) + (double)rdf32(ebp * 4u + loc_54 + 4u));
        wrf32(ebp * 4u + loc_54 + 4u, (float)d42);
        d43 = fr(g, fr(g, fr(g, loc_10_f * fr(g, loc_3c_f * d38)) - fr(g, x1 * fr(g, loc_34_f * d38))) + (double)rdf32(ebp * 4u + loc_54 + 8u));
        wrf32(ebp * 4u + loc_54 + 8u, (float)d43);
        d44 = fr(g, fr(g, loc_34_f * loc_28_f) - fr(g, loc_30_f * loc_2c_f));
        if (!(d44 < rdf64(COW_IMG(0x10340b18u))))
        {
            edi = loc_50;
            x0 = d44;
        }
        else
        {
            eax = (loc_54 & 0xffff0000u) | (uint16_t)cow_fsw(g, d44, rdf64(COW_IMG(0x10340b18u)), 1u);
            edi = loc_50;
            x0 = d44;
            if ((cow_fsw(g, x0, rdf64(COW_IMG(0x10340b50u)), 1u) & 0x4100u) == 0u)
            {
                x0 = (double)rdf32(COW_IMG(0x1032a42cu));
            }
        }
        d45 = fr(g, fr(g, fr(g, loc_c_f * -fr(g, loc_30_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0))) - fr(g, loc_18_f * -fr(g, loc_28_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0)))) + (double)rdf32(edi + esi * 4u));
        d46 = fr(g, loc_28_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0));
        d47 = fr(g, loc_30_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0));
        d48 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
        wrf32(edi + esi * 4u, (float)d45);
        d49 = fr(g, fr(g, fr(g, loc_8_f * -d47) - fr(g, loc_14_f * -d46)) + (double)rdf32(edi + esi * 4u + 4u));
        wrf32(edi + esi * 4u + 4u, (float)d49);
        d50 = fr(g, fr(g, fr(g, loc_4_f * -d47) - fr(g, loc_10_f * -d46)) + (double)rdf32(edi + esi * 4u + 8u));
        wrf32(edi + esi * 4u + 8u, (float)d50);
        d51 = fr(g, fr(g, fr(g, loc_c_f * fr(g, loc_34_f * d48)) - fr(g, loc_18_f * fr(g, loc_2c_f * d48))) + (double)rdf32(esi * 4u + loc_54));
        wrf32(esi * 4u + loc_54, (float)d51);
        d52 = fr(g, fr(g, fr(g, loc_8_f * fr(g, loc_34_f * d48)) - fr(g, loc_14_f * fr(g, loc_2c_f * d48))) + (double)rdf32(esi * 4u + loc_54 + 4u));
        wrf32(esi * 4u + loc_54 + 4u, (float)d52);
        d53 = fr(g, fr(g, fr(g, loc_4_f * fr(g, loc_34_f * d48)) - fr(g, loc_10_f * fr(g, loc_2c_f * d48))) + (double)rdf32(esi * 4u + loc_54 + 8u));
        wrf32(esi * 4u + loc_54 + 8u, (float)d53);
        if (rd32(sp0 + 4u) != 0u) goto L_102ab2bb;
L_102ab6c7: ;
        esi = loc_44;
        edi = loc_58;
L_102ab6cf: ;
        if (loc_40 != 1u)
        {
            loc_40 = loc_40 - 1u;
            goto L_102aaec9;
        }
    }
    if ((int32_t)rd32(esi + 0x14u) <= 0)
    {
        eax = rd32(esi + 0x64u);
        edx = rd32(esi + 0x58u);
        goto L_102ab85e;
    }
    eax = rd32(esi + 0x64u);
    ecx = rd32(esi + 0x68u);
    edx = rd32(esi + 0x58u);
    edi = 0u;
L_102ab6f5: ;
    d101 = fr(g, (double)rdf32(eax) - fr(g, fr(g, fr(g, fr(g, (double)rdf32(eax + 8u) * (double)rdf32(edx + 8u)) + fr(g, (double)rdf32(eax + 4u) * (double)rdf32(edx + 4u))) + fr(g, (double)rdf32(edx) * (double)rdf32(eax))) * (double)rdf32(edx)));
    wrf32(eax, (float)d101);
    d102 = fr(g, (double)rdf32(eax + 4u) - fr(g, fr(g, fr(g, fr(g, (double)rdf32(eax + 8u) * (double)rdf32(edx + 8u)) + fr(g, (double)rdf32(eax + 4u) * (double)rdf32(edx + 4u))) + fr(g, (double)rdf32(edx) * (double)rdf32(eax))) * (double)rdf32(edx + 4u)));
    wrf32(eax + 4u, (float)d102);
    d103 = fr(g, (double)rdf32(eax + 8u) - fr(g, fr(g, fr(g, fr(g, (double)rdf32(eax + 8u) * (double)rdf32(edx + 8u)) + fr(g, (double)rdf32(eax + 4u) * (double)rdf32(edx + 4u))) + fr(g, (double)rdf32(edx) * (double)rdf32(eax))) * (double)rdf32(edx + 8u)));
    wrf32(eax + 8u, (float)d103);
    d104 = (double)rdf32(eax + 4u);
    d105 = (double)rdf32(eax + 8u);
    d106 = fr(g, rdf64(COW_IMG(0x1032a100u)) / fr(g, sqrt(fr(g, fr(g, fr(g, d104 * d104) + fr(g, (double)rdf32(eax) * (double)rdf32(eax))) + fr(g, d105 * d105)))));
    d107 = fr(g, d106 * (double)rdf32(eax));
    wrf32(eax, (float)d107);
    d108 = fr(g, d106 * (double)rdf32(eax + 4u));
    wrf32(eax + 4u, (float)d108);
    d109 = fr(g, d106 * (double)rdf32(eax + 8u));
    wrf32(eax + 8u, (float)d109);
    d110 = fr(g, (double)rdf32(ecx) - fr(g, fr(g, fr(g, fr(g, (double)rdf32(edx + 4u) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(edx) * (double)rdf32(ecx))) + fr(g, (double)rdf32(edx + 8u) * (double)rdf32(ecx + 8u))) * (double)rdf32(edx)));
    wrf32(ecx, (float)d110);
    d111 = fr(g, (double)rdf32(ecx + 4u) - fr(g, fr(g, fr(g, fr(g, (double)rdf32(edx + 4u) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(edx) * (double)rdf32(ecx))) + fr(g, (double)rdf32(edx + 8u) * (double)rdf32(ecx + 8u))) * (double)rdf32(edx + 4u)));
    wrf32(ecx + 4u, (float)d111);
    d112 = fr(g, (double)rdf32(ecx + 8u) - fr(g, fr(g, fr(g, fr(g, (double)rdf32(edx + 4u) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(edx) * (double)rdf32(ecx))) + fr(g, (double)rdf32(edx + 8u) * (double)rdf32(ecx + 8u))) * (double)rdf32(edx + 8u)));
    wrf32(ecx + 8u, (float)d112);
    d113 = (double)rdf32(ecx + 4u);
    d114 = (double)rdf32(ecx + 8u);
    d115 = fr(g, rdf64(COW_IMG(0x1032a100u)) / fr(g, sqrt(fr(g, fr(g, fr(g, d113 * d113) + fr(g, (double)rdf32(ecx) * (double)rdf32(ecx))) + fr(g, d114 * d114)))));
    d116 = fr(g, d115 * (double)rdf32(ecx));
    wrf32(ecx, (float)d116);
    d117 = fr(g, d115 * (double)rdf32(ecx + 4u));
    wrf32(ecx + 4u, (float)d117);
    d118 = fr(g, d115 * (double)rdf32(ecx + 8u));
    wrf32(ecx + 8u, (float)d118);
    if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 0x14u))
    {
        eax = eax + 0xcu;
        ecx = ecx + 0xcu;
        edx = edx + 0xcu;
        edi = edi + 1u;
        goto L_102ab6f5;
    }
    eax = eax + 0xcu;
    edx = edx + 0xcu;
    g->edx = edx;
    return eax;
L_102aaee8: ;
    eax = rd32(sp0 + 4u);
L_102aaeec: ;
    t54 = rd32(ebx + 4u);
    t55 = rd32(ebx + 8u);
    t56 = rd32(ebx);
    d57 = fr(g, (double)rdf32(ecx + rd32(ebx) * 0xcu + 4u) - (double)rdf32(ecx + t54 * 0xcu + 4u));
    d58 = fr(g, (double)rdf32(ecx + rd32(ebx) * 0xcu) - (double)rdf32(ecx + t54 * 0xcu));
    wr32(sp0 + 4u, eax - 3u);
    d59 = (double)(float)fr(g, (double)rdf32(ecx + t54 * 0xcu) - (double)rdf32(ecx + t55 * 0xcu));
    d60 = (double)(float)fr(g, (double)rdf32(ecx + t54 * 0xcu + 4u) - (double)rdf32(ecx + t55 * 0xcu + 4u));
    d61 = (double)(float)fr(g, (double)rdf32(ecx + t54 * 0xcu + 8u) - (double)rdf32(ecx + t55 * 0xcu + 8u));
    d62 = (double)(float)fr(g, (double)rdf32(ecx + t55 * 0xcu) - (double)rdf32(ecx + t56 * 0xcu));
    d63 = (double)(float)fr(g, (double)rdf32(ecx + t55 * 0xcu + 4u) - (double)rdf32(ecx + t56 * 0xcu + 4u));
    d64 = (double)(float)fr(g, (double)rdf32(ecx + t55 * 0xcu + 8u) - (double)rdf32(ecx + t56 * 0xcu + 8u));
    d65 = (double)(float)fr(g, (double)rdf32(edx + t56 * 8u) - (double)rdf32(edx + t54 * 8u));
    d66 = (double)(float)fr(g, (double)rdf32(edx + t56 * 8u + 4u) - (double)rdf32(edx + t54 * 8u + 4u));
    d67 = (double)(float)fr(g, (double)rdf32(edx + t54 * 8u) - (double)rdf32(edx + t55 * 8u));
    d68 = (double)(float)fr(g, (double)rdf32(edx + t54 * 8u + 4u) - (double)rdf32(edx + t55 * 8u + 4u));
    d69 = (double)(float)fr(g, (double)rdf32(edx + t55 * 8u) - (double)rdf32(edx + t56 * 8u));
    d70 = (double)(float)fr(g, (double)rdf32(edx + t55 * 8u + 4u) - (double)rdf32(edx + t56 * 8u + 4u));
    d71 = fr(g, fr(g, d66 * d69) - fr(g, d70 * d65));
    if (!(d71 < rdf64(COW_IMG(0x10340b18u))))
    {
        ebx = ebx + 0xcu;
        ebp = t54 * 3u;
        esi = t55 * 3u;
        edi = t56 * 3u;
        loc_60 = t54;
        loc_5c = t56;
        loc_58 = t55;
        loc_20_f = (double)(float)d57;
        loc_18_f = d59;
        loc_14_f = d60;
        loc_10_f = d61;
        loc_c_f = d62;
        loc_8_f = d63;
        loc_4_f = d64;
        loc_3c_f = d65;
        loc_38_f = d66;
        loc_34_f = d67;
        loc_30_f = d68;
        loc_2c_f = d69;
        loc_28_f = d70;
        x2 = d71;
        x1 = fr(g, (double)rdf32(ecx + t56 * 0xcu + 8u) - (double)rdf32(ecx + t54 * 0xcu + 8u));
        x0 = d58;
    }
    else
    {
        eax = (t56 * 2u & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, rdf64(COW_IMG(0x10340b18u)), 3u);
        ebx = ebx + 0xcu;
        ebp = t54 * 3u;
        esi = t55 * 3u;
        edi = t56 * 3u;
        loc_60 = t54;
        loc_5c = t56;
        loc_58 = t55;
        loc_20_f = (double)(float)d57;
        loc_18_f = d59;
        loc_14_f = d60;
        loc_10_f = d61;
        loc_c_f = d62;
        loc_8_f = d63;
        loc_4_f = d64;
        loc_3c_f = d65;
        loc_38_f = d66;
        loc_34_f = d67;
        loc_30_f = d68;
        loc_2c_f = d69;
        loc_28_f = d70;
        x2 = d71;
        x1 = fr(g, (double)rdf32(ecx + t56 * 0xcu + 8u) - (double)rdf32(ecx + t54 * 0xcu + 8u));
        x0 = d58;
        if ((cow_fsw(g, x2, rdf64(COW_IMG(0x10340b50u)), 3u) & 0x4100u) == 0u)
        {
            x2 = (double)rdf32(COW_IMG(0x1032a42cu));
        }
    }
    d72 = fr(g, fr(g, fr(g, x0 * -fr(g, loc_28_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2))) - fr(g, loc_c_f * -fr(g, loc_38_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2)))) + (double)rdf32(edi * 4u + loc_50));
    d73 = fr(g, loc_38_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2));
    d74 = fr(g, loc_28_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2));
    d75 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2);
    wrf32(edi * 4u + loc_50, (float)d72);
    d76 = fr(g, fr(g, fr(g, loc_20_f * -d74) - fr(g, loc_8_f * -d73)) + (double)rdf32(edi * 4u + loc_50 + 4u));
    wrf32(edi * 4u + loc_50 + 4u, (float)d76);
    d77 = fr(g, fr(g, fr(g, x1 * -d74) - fr(g, loc_4_f * -d73)) + (double)rdf32(edi * 4u + loc_50 + 8u));
    wrf32(edi * 4u + loc_50 + 8u, (float)d77);
    d78 = fr(g, fr(g, fr(g, x0 * fr(g, loc_2c_f * d75)) - fr(g, loc_c_f * fr(g, loc_3c_f * d75))) + (double)rdf32(edi * 4u + loc_54));
    wrf32(edi * 4u + loc_54, (float)d78);
    d79 = fr(g, fr(g, fr(g, loc_20_f * fr(g, loc_2c_f * d75)) - fr(g, loc_8_f * fr(g, loc_3c_f * d75))) + (double)rdf32(edi * 4u + loc_54 + 4u));
    wrf32(edi * 4u + loc_54 + 4u, (float)d79);
    d80 = fr(g, fr(g, fr(g, x1 * fr(g, loc_2c_f * d75)) - fr(g, loc_4_f * fr(g, loc_3c_f * d75))) + (double)rdf32(edi * 4u + loc_54 + 8u));
    wrf32(edi * 4u + loc_54 + 8u, (float)d80);
    d81 = fr(g, fr(g, loc_30_f * loc_3c_f) - fr(g, loc_34_f * loc_38_f));
    if (!(d81 < rdf64(COW_IMG(0x10340b18u))))
    {
        x2 = d81;
    }
    else
    {
        eax = (loc_54 & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, rdf64(COW_IMG(0x10340b18u)), 3u);
        x2 = d81;
        if ((cow_fsw(g, x2, rdf64(COW_IMG(0x10340b50u)), 3u) & 0x4100u) == 0u)
        {
            x2 = (double)rdf32(COW_IMG(0x1032a42cu));
        }
    }
    d82 = fr(g, fr(g, fr(g, loc_18_f * -fr(g, loc_38_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2))) - fr(g, x0 * -fr(g, loc_30_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2)))) + (double)rdf32(ebp * 4u + loc_50));
    d83 = fr(g, loc_30_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2));
    d84 = fr(g, loc_38_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2));
    d85 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x2);
    wrf32(ebp * 4u + loc_50, (float)d82);
    d86 = fr(g, fr(g, fr(g, loc_14_f * -d84) - fr(g, loc_20_f * -d83)) + (double)rdf32(ebp * 4u + loc_50 + 4u));
    wrf32(ebp * 4u + loc_50 + 4u, (float)d86);
    d87 = fr(g, fr(g, fr(g, loc_10_f * -d84) - fr(g, x1 * -d83)) + (double)rdf32(ebp * 4u + loc_50 + 8u));
    wrf32(ebp * 4u + loc_50 + 8u, (float)d87);
    d88 = fr(g, fr(g, fr(g, loc_18_f * fr(g, loc_3c_f * d85)) - fr(g, x0 * fr(g, loc_34_f * d85))) + (double)rdf32(ebp * 4u + loc_54));
    wrf32(ebp * 4u + loc_54, (float)d88);
    d89 = fr(g, fr(g, fr(g, loc_14_f * fr(g, loc_3c_f * d85)) - fr(g, loc_20_f * fr(g, loc_34_f * d85))) + (double)rdf32(ebp * 4u + loc_54 + 4u));
    wrf32(ebp * 4u + loc_54 + 4u, (float)d89);
    d90 = fr(g, fr(g, fr(g, loc_10_f * fr(g, loc_3c_f * d85)) - fr(g, x1 * fr(g, loc_34_f * d85))) + (double)rdf32(ebp * 4u + loc_54 + 8u));
    wrf32(ebp * 4u + loc_54 + 8u, (float)d90);
    d91 = fr(g, fr(g, loc_34_f * loc_28_f) - fr(g, loc_30_f * loc_2c_f));
    if (!(d91 < rdf64(COW_IMG(0x10340b18u))))
    {
        edi = loc_50;
        x0 = d91;
    }
    else
    {
        eax = (loc_54 & 0xffff0000u) | (uint16_t)cow_fsw(g, d91, rdf64(COW_IMG(0x10340b18u)), 1u);
        edi = loc_50;
        x0 = d91;
        if ((cow_fsw(g, x0, rdf64(COW_IMG(0x10340b50u)), 1u) & 0x4100u) == 0u)
        {
            x0 = (double)rdf32(COW_IMG(0x1032a42cu));
        }
    }
    d92 = fr(g, fr(g, fr(g, loc_c_f * -fr(g, loc_30_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0))) - fr(g, loc_18_f * -fr(g, loc_28_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0)))) + (double)rdf32(edi + esi * 4u));
    d93 = fr(g, loc_28_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0));
    d94 = fr(g, loc_30_f * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0));
    d95 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
    wrf32(edi + esi * 4u, (float)d92);
    d96 = fr(g, fr(g, fr(g, loc_8_f * -d94) - fr(g, loc_14_f * -d93)) + (double)rdf32(edi + esi * 4u + 4u));
    wrf32(edi + esi * 4u + 4u, (float)d96);
    d97 = fr(g, fr(g, fr(g, loc_4_f * -d94) - fr(g, loc_10_f * -d93)) + (double)rdf32(edi + esi * 4u + 8u));
    wrf32(edi + esi * 4u + 8u, (float)d97);
    d98 = fr(g, fr(g, fr(g, loc_c_f * fr(g, loc_34_f * d95)) - fr(g, loc_18_f * fr(g, loc_2c_f * d95))) + (double)rdf32(esi * 4u + loc_54));
    wrf32(esi * 4u + loc_54, (float)d98);
    d99 = fr(g, fr(g, fr(g, loc_8_f * fr(g, loc_34_f * d95)) - fr(g, loc_14_f * fr(g, loc_2c_f * d95))) + (double)rdf32(esi * 4u + loc_54 + 4u));
    wrf32(esi * 4u + loc_54 + 4u, (float)d99);
    d100 = fr(g, fr(g, fr(g, loc_4_f * fr(g, loc_34_f * d95)) - fr(g, loc_10_f * fr(g, loc_2c_f * d95))) + (double)rdf32(esi * 4u + loc_54 + 8u));
    wrf32(esi * 4u + loc_54 + 8u, (float)d100);
    if (rd32(sp0 + 4u) != 0u) goto L_102aaee8;
    goto L_102ab6c7;
L_102ab2bb: ;
    eax = loc_48;
    edi = loc_58;
    goto L_102ab2c3;
L_102ab838: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t119 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be980u));
    t120 = g->ecx;
    t121 = g->edx;
    g->edx = t121;
    g->esp = sp0 - 0x78u;
    t122 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beafcu));
    t123 = g->edx;
    eax = t122;
    edx = t123;
L_102ab85e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102aae00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102aae00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
