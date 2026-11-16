/* f_0x102421e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102421e0(Guest* g)
{
    double d104;
    double d105;
    double d106;
    double d107;
    double d109;
    double d110;
    double d111;
    double d12;
    double d13;
    double d14;
    double d16;
    double d17;
    double d18;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d33;
    double d35;
    double d36;
    double d39;
    double d42;
    double d43;
    double d5;
    double d56;
    double d57;
    double d58;
    double d59;
    double d6;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d7;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d88;
    double d90;
    double d91;
    double d94;
    double d97;
    double d98;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    double loc_48_f;
    uint32_t loc_4c;
    double loc_4c_f;
    double loc_50_f;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t108;
    uint32_t t11;
    uint32_t t15;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
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
    uint32_t t60;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t78;
    uint32_t t8;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t89;
    uint32_t t9;
    uint32_t t92;
    uint32_t t93;
    uint32_t t95;
    uint32_t t96;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 144u);

    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, in_ebp);
    wr32(sp0 - 0x64u, in_esi);
    wr32(sp0 - 0x68u, in_edi);
    wr32(sp0 - 0x58u, rd32(COW_IMG(0x1066908cu)));
    t1 = rd32(self + 0x14u);
    wr32(sp0 - 0x54u, t1);
    if (rd32(COW_IMG(0x1066908cu)) != 0xffffffffu)
    {
        eax = t1;
        ebx = rd32(COW_IMG(0x1066908cu));
        ebp = t1 * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0x34u;
        edi = rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x34u;
        loc_58 = rd32(COW_IMG(0x1066908cu));
        loc_54 = t1;
        if (rd32(sp0 + 4u) != 0u) goto L_10242237;
        if (eax == ebx) goto L_10242989;
L_1024224c: ;
        wr32(self + 0xb38u, 0u);
        wr32(self + 0xb3cu, 0u);
        wr32(self + 0xb40u, 0u);
        wr32(self + 0xb44u, 0u);
        if (rd32(ebp + 0x34u) == 0u)
        {
            wr32(sp0 - 0x20u, rd32(COW_IMG(0x10388748u)));
            wr32(sp0 - 0x1cu, rd32(COW_IMG(0x1038874cu)));
            wr32(sp0 - 0x18u, rd32(COW_IMG(0x10388750u)));
            wr32(sp0 - 0x14u, rd32(COW_IMG(0x10388754u)));
            loc_5c = in_ebx;
            loc_60 = in_ebp;
            loc_64 = in_esi;
            loc_68 = in_edi;
        }
        else
        {
            wr32(sp0 - 0x6cu, sp0 - 0x20u);
            wr32(sp0 - 0x70u, 7u);
            g->eax = rd32(rd32(ebp + 0x78u));
            t2 = rd32(rd32(ebp + 0x78u));
            g->esp = sp0 - 0x68u;
            t3 = cow_thiscall(g, rd32(t2 + 0x1c4u), rd32(ebp + 0x78u), 2, 7u, sp0 - 0x20u);
            t4 = rd32(sp0 - 0x58u);
            wr32(ebp + 0xacu, (uint8_t)t3);
            if ((uint8_t)t3 == 0u)
            {
                ebx = t4;
                wr32(sp0 - 0x20u, rd32(COW_IMG(0x10388738u)));
                wr32(sp0 - 0x1cu, rd32(COW_IMG(0x1038873cu)));
                wr32(sp0 - 0x14u, rd32(COW_IMG(0x10388744u)));
                wr32(sp0 - 0x18u, rd32(COW_IMG(0x10388740u)));
                eax = rd32(sp0 - 0x54u);
            }
            else
            {
                ebx = t4;
                d5 = (double)(float)fr(g, (double)rdf32(sp0 - 0x20u) - (double)rdf32(ebp + 0x7cu));
                wrf32(sp0 - 0x20u, (float)d5);
                d6 = (double)(float)fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(ebp + 0x80u));
                wrf32(sp0 - 0x1cu, (float)d6);
                d7 = (double)(float)fr(g, (double)rdf32(sp0 - 0x18u) - (double)rdf32(ebp + 0x84u));
                wrf32(sp0 - 0x18u, (float)d7);
                eax = rd32(sp0 - 0x54u);
            }
        }
        if (rd32(edi + 0x34u) == 0u)
        {
            wr32(sp0 - 0x30u, rd32(COW_IMG(0x10388768u)));
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1038876cu)));
            wr32(sp0 - 0x28u, rd32(COW_IMG(0x10388770u)));
            wr32(sp0 - 0x24u, rd32(COW_IMG(0x10388774u)));
        }
        else
        {
            wr32(sp0 - 0x6cu, sp0 - 0x30u);
            wr32(sp0 - 0x70u, 7u);
            t8 = rd32(edi + 0x78u);
            t9 = rd32(rd32(edi + 0x78u));
            wr32(sp0 + 4u, t8);
            g->eax = t9;
            g->esp = sp0 - 0x68u;
            t10 = cow_thiscall(g, rd32(t9 + 0x1c4u), t8, 2, 7u, sp0 - 0x30u);
            t11 = rd32(sp0 - 0x58u);
            wr32(edi + 0xacu, (uint8_t)t10);
            if ((uint8_t)t10 == 0u)
            {
                ebx = t11;
                wr32(sp0 - 0x30u, rd32(COW_IMG(0x10388758u)));
                wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1038875cu)));
                wr32(sp0 - 0x24u, rd32(COW_IMG(0x10388764u)));
                wr32(sp0 - 0x28u, rd32(COW_IMG(0x10388760u)));
                eax = rd32(sp0 - 0x54u);
            }
            else
            {
                ebx = t11;
                d12 = (double)(float)fr(g, (double)rdf32(sp0 - 0x30u) - (double)rdf32(edi + 0x7cu));
                wrf32(sp0 - 0x30u, (float)d12);
                d13 = (double)(float)fr(g, (double)rdf32(sp0 - 0x2cu) - (double)rdf32(edi + 0x80u));
                wrf32(sp0 - 0x2cu, (float)d13);
                d14 = (double)(float)fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(edi + 0x84u));
                wrf32(sp0 - 0x28u, (float)d14);
                eax = rd32(sp0 - 0x54u);
            }
        }
        if ((ebx - eax ^ (uint32_t)((int32_t)(ebx - eax) >> 0x1fu)) - (uint32_t)((int32_t)(ebx - eax) >> 0x1fu) == 1u)
        {
            ebx = ebx - eax;
            goto L_10242415;
        }
        t15 = eax;
        eax = (ebx - t15 ^ (uint32_t)((int32_t)(ebx - t15) >> 0x1fu)) - (uint32_t)((int32_t)(ebx - t15) >> 0x1fu);
        ebx = ebx - t15;
        if (eax == 0xfu) goto L_10242415;
        if (ebx == 0u) goto L_10242415;
        wr32(sp0 - 0x44u, rd32(COW_IMG(0x10388784u)));
        d16 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x10388778u)) + (double)rdf32(self + 0xb48u));
        wrf32(sp0 - 0x50u, (float)d16);
        d17 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1038877cu)) + (double)rdf32(self + 0xb4cu));
        wrf32(sp0 - 0x4cu, (float)d17);
        d18 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x10388780u)) + (double)rdf32(self + 0xb50u));
        wrf32(sp0 - 0x48u, (float)d18);
        loc_44 = rd32(COW_IMG(0x10388784u));
        loc_50_f = d16;
        loc_4c_f = d17;
        loc_48_f = d18;
L_102424b8: ;
        wr32(sp0 - 0x6cu, 0x40000000u);
        t30 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x44u);
        wr32(sp0 - 0x40u, t30);
        t31 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x48u);
        wr32(sp0 - 0x3cu, t31);
        t32 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x4cu);
        wr32(sp0 - 0x38u, t32);
        d33 = (double)(float)fr(g, cow_bits2f(t30) - loc_50_f);
        wrf32(sp0 - 0x40u, (float)d33);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        t34 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x50u);
        wr32(sp0 - 0x34u, t34);
        d35 = (double)(float)fr(g, cow_bits2f(t31) - loc_4c_f);
        wrf32(sp0 - 0x3cu, (float)d35);
        d36 = (double)(float)fr(g, cow_bits2f(t32) - loc_48_f);
        wrf32(sp0 - 0x38u, (float)d36);
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x40u, sp0 - 0x40u, 0x40000000u);
        t37 = rd32(sp0 - 0x34u);
        t38 = rd32(sp0 - 0x50u);
        d39 = fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(sp0 - 0x50u));
        wr32(self + 0xbb4u, t37);
        t40 = rd32(sp0 - 0x48u);
        wr32(self + 0xbb8u, t38);
        wrf32(sp0 - 0x40u, (float)(double)(float)d39);
        t41 = rd32(sp0 - 0x44u);
        d42 = fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0x4cu));
        wr32(self + 0xbc0u, t40);
        wr32(self + 0xbc4u, t41);
        wrf32(sp0 - 0x3cu, (float)(double)(float)d42);
        d43 = (double)(float)fr(g, (double)rdf32(sp0 - 0x38u) + (double)rdf32(sp0 - 0x48u));
        wrf32(sp0 - 0x38u, (float)d43);
        wrf32(self + 0xba8u, (float)d39);
        wr32(self + 0xbb0u, cow_f2bits(d43));
        t44 = rd32(sp0 - 0x4cu);
        wrf32(self + 0xbacu, (float)d42);
        wr32(self + 0xbbcu, t44);
        t45 = rd32(edi + 0x9cu);
        wr32(sp0 - 0x40u, t45);
        t46 = rd32(edi + 0xa0u);
        wr32(sp0 - 0x3cu, t46);
        t47 = rd32(edi + 0xa4u);
        wr32(sp0 - 0x38u, t47);
        t48 = rd32(edi + 0xa8u);
        wr32(sp0 - 0x34u, t48);
        if (rd32(edi + 0x34u) == 0u)
        {
            ecx = t48;
            loc_40 = t45;
            loc_3c = t46;
            loc_38 = t47;
            loc_34 = t48;
        }
        else
        {
            loc_40 = t45;
            loc_3c = t46;
            loc_38 = t47;
            loc_34 = t48;
            wr32(sp0 - 0x6cu, sp0 - 0x10u);
            wr32(sp0 - 0x70u, 7u);
            g->eax = sp0 - 0x10u;
            t49 = rd32(sp0 + 4u);
            g->esp = sp0 - 0x68u;
            t50 = cow_thiscall(g, rd32(rd32(t49) + 0x1c4u), t49, 2, 7u, sp0 - 0x10u);
            t51 = g->ecx;
            if ((uint8_t)t50 == 0u)
            {
                ecx = t51;
            }
            else
            {
                t52 = rd32(edi + 0x8cu);
                wr32(sp0 - 0x40u, t52);
                t53 = rd32(edi + 0x90u);
                wr32(sp0 - 0x3cu, t53);
                t54 = rd32(edi + 0x94u);
                wr32(sp0 - 0x38u, t54);
                t55 = rd32(edi + 0x98u);
                wr32(sp0 - 0x34u, t55);
                ecx = t55;
                loc_40 = t52;
                loc_3c = t53;
                loc_38 = t54;
                loc_34 = t55;
            }
        }
        wr32(sp0 - 0x6cu, 0x40000000u);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        d56 = (double)(float)fr(g, cow_bits2f(loc_38) + (double)rdf32(sp0 - 0x28u));
        wrf32(sp0 - 0x38u, (float)d56);
        d57 = (double)(float)fr(g, fr(g, cow_bits2f(loc_40) + (double)rdf32(sp0 - 0x30u)) - (double)rdf32(sp0 - 0x50u));
        wrf32(sp0 - 0x40u, (float)d57);
        d58 = (double)(float)fr(g, fr(g, cow_bits2f(loc_3c) + (double)rdf32(sp0 - 0x2cu)) - (double)rdf32(sp0 - 0x4cu));
        wrf32(sp0 - 0x3cu, (float)d58);
        d59 = (double)(float)fr(g, d56 - (double)rdf32(sp0 - 0x48u));
        wrf32(sp0 - 0x38u, (float)d59);
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x40u, sp0 - 0x40u, 0x40000000u);
        t60 = rd32(sp0 - 0x34u);
        d61 = fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(sp0 - 0x50u));
        wr32(self + 0xbd4u, t60);
        wrf32(sp0 - 0x40u, (float)(double)(float)d61);
        d62 = (double)(float)fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0x4cu));
        wrf32(sp0 - 0x3cu, (float)d62);
        d63 = (double)(float)fr(g, (double)rdf32(sp0 - 0x38u) + (double)rdf32(sp0 - 0x48u));
        wrf32(sp0 - 0x38u, (float)d63);
        d64 = fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0x4cu));
        wrf32(self + 0xbc8u, (float)d61);
        wr32(self + 0xbd0u, cow_f2bits(d63));
        wrf32(self + 0xbccu, (float)d64);
        if ((ebx ^ (uint32_t)((int32_t)ebx >> 0x1fu)) - (uint32_t)((int32_t)ebx >> 0x1fu) == 1u) goto L_1024270b;
        eax = (ebx ^ (uint32_t)((int32_t)ebx >> 0x1fu)) - (uint32_t)((int32_t)ebx >> 0x1fu);
        if (eax == 0xfu) goto L_1024270b;
        if (ebx == 0u) goto L_1024270b;
        sf = (int32_t)ebx < 0;
        if (!sf)
        {
            eax = ebx;
            edx = (uint32_t)((int32_t)ebx >> 0x1fu);
            eax = rd32(sp0 - 0x54u) + (uint32_t)((int32_t)(eax - edx) >> 1u);
        }
        else
        {
            eax = ebx;
            edx = (uint32_t)((int32_t)ebx >> 0x1fu);
            eax = rd32(sp0 - 0x58u) - (uint32_t)((int32_t)(eax - edx) >> 1u);
        }
        d65 = (double)(float)(double)rdf32(eax * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0xb0u);
        wrf32(sp0 - 0x50u, (float)d65);
        t66 = rd32(eax * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0xb4u);
        wr32(sp0 - 0x4cu, t66);
        t67 = rd32(eax * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0xb8u);
        wr32(sp0 - 0x48u, t67);
        t68 = rd32(eax * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0xbcu);
        wr32(sp0 - 0x44u, t68);
        eax = t68;
        loc_50_f = d65;
        loc_4c = t66;
        loc_48 = t67;
        loc_44 = t68;
L_10242792: ;
        wr32(sp0 - 0x6cu, 0x3f4ccccdu);
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        wr32(sp0 - 0x74u, sp0 - 0x50u);
        d79 = (double)(float)fr(g, loc_50_f - (double)rdf32(self + 0xb48u));
        wrf32(sp0 - 0x50u, (float)d79);
        d80 = (double)(float)fr(g, cow_bits2f(loc_4c) - (double)rdf32(self + 0xb4cu));
        wrf32(sp0 - 0x4cu, (float)d80);
        d81 = (double)(float)fr(g, cow_bits2f(loc_48) - (double)rdf32(self + 0xb50u));
        wrf32(sp0 - 0x48u, (float)d81);
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x50u, sp0 - 0x50u, 0x3f4ccccdu);
        wr32(sp0 - 0x78u, 0x40000000u);
        d82 = (double)(float)fr(g, (double)rdf32(sp0 - 0x50u) + (double)rdf32(self + 0xb48u));
        wrf32(sp0 - 0x50u, (float)d82);
        d83 = (double)(float)fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(self + 0xb4cu));
        wrf32(sp0 - 0x4cu, (float)d83);
        d84 = (double)(float)fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(self + 0xb50u));
        wrf32(sp0 - 0x48u, (float)d84);
        t85 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x50u);
        wr32(sp0 - 0x40u, t85);
        t86 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x54u);
        wr32(sp0 - 0x3cu, t86);
        t87 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x58u);
        wr32(sp0 - 0x38u, t87);
        d88 = (double)(float)fr(g, cow_bits2f(t85) - d82);
        wrf32(sp0 - 0x40u, (float)d88);
        wr32(sp0 - 0x7cu, sp0 - 0x40u);
        wr32(sp0 - 0x80u, sp0 - 0x40u);
        t89 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x5cu);
        wr32(sp0 - 0x34u, t89);
        d90 = (double)(float)fr(g, cow_bits2f(t86) - d83);
        wrf32(sp0 - 0x3cu, (float)d90);
        d91 = (double)(float)fr(g, cow_bits2f(t87) - d84);
        wrf32(sp0 - 0x38u, (float)d91);
        g->esp = sp0 - 0x74u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x40u, sp0 - 0x40u, 0x40000000u);
        t92 = rd32(sp0 - 0x34u);
        t93 = rd32(sp0 - 0x50u);
        d94 = fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(sp0 - 0x50u));
        wr32(self + 0xb84u, t92);
        t95 = rd32(sp0 - 0x48u);
        wr32(self + 0xb88u, t93);
        wrf32(sp0 - 0x40u, (float)(double)(float)d94);
        t96 = rd32(sp0 - 0x44u);
        d97 = fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0x4cu));
        wr32(self + 0xb90u, t95);
        wr32(self + 0xb94u, t96);
        wrf32(sp0 - 0x3cu, (float)(double)(float)d97);
        d98 = (double)(float)fr(g, (double)rdf32(sp0 - 0x38u) + (double)rdf32(sp0 - 0x48u));
        wrf32(sp0 - 0x38u, (float)d98);
        wrf32(self + 0xb78u, (float)d94);
        wr32(self + 0xb80u, cow_f2bits(d98));
        t99 = rd32(sp0 - 0x4cu);
        wrf32(self + 0xb7cu, (float)d97);
        wr32(self + 0xb8cu, t99);
        t100 = rd32(edi + 0x7cu);
        wr32(sp0 - 0x40u, t100);
        t101 = rd32(edi + 0x80u);
        wr32(sp0 - 0x3cu, t101);
        t102 = rd32(edi + 0x84u);
        wr32(sp0 - 0x38u, t102);
        wr32(sp0 - 0x84u, 0x40000000u);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        wr32(sp0 - 0x8cu, sp0 - 0x40u);
        t103 = rd32(edi + 0x88u);
        wr32(sp0 - 0x34u, t103);
        d104 = (double)(float)fr(g, cow_bits2f(t102) + (double)rdf32(sp0 - 0x28u));
        wrf32(sp0 - 0x38u, (float)d104);
        d105 = (double)(float)fr(g, fr(g, cow_bits2f(t100) + (double)rdf32(sp0 - 0x30u)) - (double)rdf32(sp0 - 0x50u));
        wrf32(sp0 - 0x40u, (float)d105);
        d106 = (double)(float)fr(g, fr(g, cow_bits2f(t101) + (double)rdf32(sp0 - 0x2cu)) - (double)rdf32(sp0 - 0x4cu));
        wrf32(sp0 - 0x3cu, (float)d106);
        d107 = (double)(float)fr(g, d104 - (double)rdf32(sp0 - 0x48u));
        wrf32(sp0 - 0x38u, (float)d107);
        g->esp = sp0 - 0x80u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x40u, sp0 - 0x40u, 0x40000000u);
        t108 = rd32(sp0 - 0x34u);
        d109 = fr(g, (double)rdf32(sp0 - 0x38u) + (double)rdf32(sp0 - 0x48u));
        d110 = fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0x4cu));
        d111 = fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(sp0 - 0x50u));
        wr32(self + 0xba4u, t108);
        wrf32(sp0 - 0x38u, (float)(double)(float)d109);
        wrf32(self + 0xb98u, (float)d111);
        wr32(self + 0xba0u, cow_f2bits((double)(float)d109));
        wrf32(self + 0xb9cu, (float)d110);
        wr32(self + 0x14u, rd32(COW_IMG(0x1066908cu)));
    }
L_10242989: ;
    return;
L_10242237: ;
    if (rd32(ebp + 0x34u) == 0u) goto L_10242989;
    if (rd32(ebp + 0xacu) != 0u) goto L_10242989;
    goto L_1024224c;
L_10242415: ;
    wr32(sp0 - 0x6cu, 0x3f000000u);
    t19 = rd32(ebp + 0x9cu);
    wr32(sp0 - 0x50u, t19);
    t20 = rd32(ebp + 0xa0u);
    wr32(sp0 - 0x4cu, t20);
    t21 = rd32(ebp + 0xa4u);
    wr32(sp0 - 0x48u, t21);
    t22 = rd32(ebp + 0xa8u);
    wr32(sp0 - 0x44u, t22);
    wr32(sp0 - 0x70u, sp0 - 0x50u);
    wr32(sp0 - 0x74u, sp0 - 0x50u);
    d23 = (double)(float)fr(g, cow_bits2f(t19) + (double)rdf32(edi + 0x9cu));
    wrf32(sp0 - 0x50u, (float)d23);
    d24 = (double)(float)fr(g, cow_bits2f(t20) + (double)rdf32(edi + 0xa0u));
    wrf32(sp0 - 0x4cu, (float)d24);
    d25 = (double)(float)fr(g, d24 + (double)rdf32(sp0 - 0x1cu));
    wrf32(sp0 - 0x4cu, (float)d25);
    d26 = (double)(float)fr(g, fr(g, cow_bits2f(t21) + (double)rdf32(edi + 0xa4u)) + (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x48u, (float)d26);
    d27 = (double)(float)fr(g, fr(g, d23 + (double)rdf32(sp0 - 0x20u)) + (double)rdf32(sp0 - 0x30u));
    wrf32(sp0 - 0x50u, (float)d27);
    d28 = (double)(float)fr(g, d25 + (double)rdf32(sp0 - 0x2cu));
    wrf32(sp0 - 0x4cu, (float)d28);
    d29 = (double)(float)fr(g, d26 + (double)rdf32(sp0 - 0x28u));
    wrf32(sp0 - 0x48u, (float)d29);
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x50u, sp0 - 0x50u, 0x3f000000u);
    goto L_102424b8;
L_1024270b: ;
    wr32(sp0 - 0x6cu, 0x3f000000u);
    t69 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x50u);
    wr32(sp0 - 0x50u, t69);
    t70 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x54u);
    wr32(sp0 - 0x4cu, t70);
    t71 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x58u);
    wr32(sp0 - 0x48u, t71);
    t72 = rd32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x5cu);
    wr32(sp0 - 0x44u, t72);
    wr32(sp0 - 0x70u, sp0 - 0x50u);
    wr32(sp0 - 0x74u, sp0 - 0x50u);
    d73 = (double)(float)fr(g, cow_bits2f(t69) + (double)rdf32(edi + 0x7cu));
    wrf32(sp0 - 0x50u, (float)d73);
    d74 = (double)(float)fr(g, cow_bits2f(t70) + (double)rdf32(edi + 0x80u));
    wrf32(sp0 - 0x4cu, (float)d74);
    d75 = (double)(float)fr(g, d73 + (double)rdf32(sp0 - 0x30u));
    wrf32(sp0 - 0x50u, (float)d75);
    d76 = (double)(float)fr(g, d74 + (double)rdf32(sp0 - 0x2cu));
    wrf32(sp0 - 0x4cu, (float)d76);
    d77 = (double)(float)fr(g, fr(g, cow_bits2f(t71) + (double)rdf32(edi + 0x84u)) + (double)rdf32(sp0 - 0x28u));
    wrf32(sp0 - 0x48u, (float)d77);
    g->eax = sp0 - 0x50u;
    g->esp = sp0 - 0x68u;
    t78 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x50u, sp0 - 0x50u, 0x3f000000u);
    eax = t78;
    goto L_10242792;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102421e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102421e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
