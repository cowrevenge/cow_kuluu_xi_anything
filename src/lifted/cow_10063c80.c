/* f_0x10063c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10063c80(Guest* g)
{
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
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
    double d48;
    double d49;
    double d50;
    double d53;
    double d54;
    double d55;
    double d57;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_a14_f;
    double loc_a18_f;
    double loc_a1c_f;
    double loc_a20_f;
    double loc_a24_f;
    double loc_a28_f;
    uint32_t loc_a2c;
    uint32_t loc_a34;
    uint32_t loc_a38;
    double loc_a3c_f;
    uint32_t loc_a40;
    uint32_t loc_a44;
    double loc_a48_f;
    double loc_a4c_f;
    uint32_t loc_a50;
    uint32_t loc_a60;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t56;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 2680u);

    wr32(sp0 - 0xa50u, in_ebx);
    if ((int16_t)rd16(self + 0x44u) >= 20)
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x44u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xa50u;
        t1 = cow_call_regs(g, COW_IMG(0x10002d80u), eax, g->ecx, g->edx, 1, 0);
        t2 = g->ecx;
        t3 = g->edx;
        d4 = cow_take_float(g);
        if (!(rd8(self + 0x46u) & 1u))
        {
            eax = t1;
            ecx = t2;
            x0 = d4;
            t6 = (uint32_t)(int16_t)rd16(self + 0x44u);
            wr32(sp0 - 0xa40u, t6);
            edx = t6;
            x0 = (double)(int32_t)t6;
        }
        else
        {
            eax = t1;
            edx = t3;
            x0 = d4;
            t5 = (uint32_t)(int16_t)rd16(self + 0x44u);
            wr32(sp0 - 0xa40u, t5);
            ecx = t5;
            x0 = fr(g, fr(g, x0 * (double)(int32_t)t5) * (double)rdf32(COW_IMG(0x10329a08u)));
        }
        fpush(g, x0);
        g->esp = sp0 - 0xa50u;
        t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = t7;
        loc_a50 = rd32(sp0 - 0xa50u);
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x44u);
        eax = (uint32_t)(int16_t)eax;
        loc_a50 = in_ebx;
    }
    wr32(sp0 - 0xa38u, eax);
    if (eax != 0u)
    {
        loc_a38 = eax;
        goto L_10063cde;
    }
    g->ebx = loc_a50;
    return 0u;
L_10063cde: ;
    wr32(sp0 - 8u, 0x271u);
    wr32(sp0 - 0xa54u, in_ebp);
    wr32(sp0 - 0xa58u, in_esi);
    wr32(sp0 - 0xa5cu, in_edi);
    t8 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t9 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t8);
    wr32(sp0 - 0xa60u, t9);
    t10 = rd32(COW_IMG(0x1047bfa8u));
    esi = rd32(COW_IMG(0x1047bfa8u)) + 0xb90u;
    edi = t9;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t11 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0xa5cu;
    cow_thiscall(g, rd32(t11 + 0x18u), rd32(COW_IMG(0x1047cf7cu)), 1, t9);
    t12 = g->edx;
    if (rd32(COW_IMG(0x1047bf34u)) == 0u)
    {
        edx = t12;
        ebp = t9;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047bf34u));
        ebp = t9;
        wr32(sp0 - 0xa60u, ebp);
        wr32(sp0 - 0xa64u, eax);
        wr32(sp0 - 0xa68u, ebp);
        g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t13 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0xa5cu;
        cow_thiscall(g, rd32(t13 + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebp, eax, ebp);
        t14 = g->edx;
        wr32(COW_IMG(0x1047bf34u), 0u);
        edx = t14;
    }
    t15 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t16 = rd32(COW_IMG(0x1047cf7cu));
    t17 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t16 + 0xa90u, t15);
    wr32(sp0 - 0xa60u, t17);
    g->esp = sp0 - 0xa5cu;
    cow_thiscall(g, COW_IMG(0x1006a4a0u), rd32(COW_IMG(0x1047bfa8u)), 1, t17);
    t18 = rd32(t17 + 0x30u);
    wr32(sp0 - 0xa10u, t18);
    t19 = rd32(t17 + 0x34u);
    t20 = rd32(t17 + 0x38u);
    wr32(t17 + 0x30u, 0u);
    wr32(t17 + 0x34u, 0u);
    wr32(t17 + 0x38u, 0u);
    wr32(t17 + 0x3cu, 0x3f800000u);
    wr32(sp0 - 0xa0cu, t19);
    wr32(sp0 - 0xa08u, t20);
    if (rd32(self) == 0u)
    {
        eax = rd32(self);
        edx = t20;
        edi = t17;
        wr32(sp0 - 0xa34u, 0u);
        loc_a2c = rd32(sp0 - 0xa2cu);
        loc_a34 = 0u;
    }
    else
    {
        eax = rd32(self);
        edx = t20;
        edi = t17;
        wr32(sp0 - 0xa2cu, rd32(eax));
        t21 = rd32(rd32(eax) + 0x30u);
        wr32(sp0 - 0xa34u, t21);
        loc_a2c = rd32(eax);
        eax = t21;
        loc_a34 = t21;
    }
    d22 = (double)rdf32(self + 4u);
    d23 = (double)(float)fr(g, fr(g, d22 * d22) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0xa3cu, (float)d23);
    d24 = (double)(float)fr(g, d23 * (double)rdf32(self + 0x28u));
    wrf32(sp0 - 0xa28u, (float)d24);
    d25 = (double)(float)fr(g, d23 * (double)rdf32(self + 0x2cu));
    wrf32(sp0 - 0xa24u, (float)d25);
    d26 = (double)(float)fr(g, d23 * (double)rdf32(self + 0x30u));
    wrf32(sp0 - 0xa20u, (float)d26);
    if (loc_a34 == 0u)
    {
        loc_a3c_f = d23;
        loc_a28_f = d24;
        loc_a24_f = d25;
        loc_a20_f = d26;
    }
    else
    {
        loc_a3c_f = d23;
        loc_a28_f = d24;
        loc_a24_f = d25;
        loc_a20_f = d26;
        if ((int32_t)rd32(self + 0x14u) < 0)
        {
            t27 = rd32(self + 0x10u);
            wr32(sp0 - 0xa60u, t27);
            g->esp = sp0 - 0xa5cu;
            cow_thiscall(g, COW_IMG(0x1006bc10u), sp0 - 0x9c8u, 1, t27);
            loc_a2c = rd32(sp0 - 0xa2cu);
            loc_a34 = rd32(sp0 - 0xa34u);
            loc_a3c_f = (double)rdf32(sp0 - 0xa3cu);
            loc_a28_f = (double)rdf32(sp0 - 0xa28u);
            loc_a24_f = (double)rdf32(sp0 - 0xa24u);
            loc_a20_f = (double)rdf32(sp0 - 0xa20u);
        }
    }
    if ((int32_t)rd32(sp0 - 0xa38u) <= 0)
    {
        edx = rd32(sp0 - 0xa38u);
    }
    else
    {
        edx = rd32(sp0 - 0xa38u);
        esi = rd32(self + 0x40u);
        wr32(sp0 - 0xa40u, edx);
        loc_a40 = edx;
L_10063e09: ;
        wr32(sp0 - 0xa4cu, rd32(esi));
        t28 = rd32(self + 0x18u);
        wr32(sp0 - 0xa30u, t28);
        t29 = rd32(esi + 4u);
        wr32(sp0 - 0xa48u, t29);
        t30 = rd32(esi + 8u);
        wr32(sp0 - 0xa44u, t30);
        d31 = (double)(float)fr(g, loc_a3c_f * (double)rdf32(esi + 0x14u));
        wrf32(sp0 - 0x9ccu, (float)d31);
        d32 = (double)(float)fr(g, fr(g, loc_a3c_f * (double)rdf32(esi + 0xcu)) * cow_bits2f(t28));
        wrf32(sp0 - 0xa04u, (float)d32);
        d33 = (double)(float)fr(g, fr(g, loc_a3c_f * (double)rdf32(esi + 0x10u)) * cow_bits2f(t28));
        wrf32(sp0 - 0xa00u, (float)d33);
        d34 = (double)rdf32(self + 4u);
        d35 = (double)(float)fr(g, d34 * (double)rdf32(esi + 0x1cu));
        wrf32(sp0 - 0x9f4u, (float)d35);
        d36 = (double)(float)fr(g, d34 * (double)rdf32(esi + 0x20u));
        wrf32(sp0 - 0x9f0u, (float)d36);
        d37 = (double)(float)fr(g, d36 + loc_a20_f);
        wrf32(sp0 - 0x9e4u, (float)d37);
        d38 = (double)(float)fr(g, fr(g, fr(g, d34 * (double)rdf32(esi + 0x18u)) + loc_a28_f) + cow_bits2f(rd32(esi)));
        wrf32(sp0 - 0xa1cu, (float)d38);
        d39 = (double)(float)fr(g, cow_bits2f(t29) + fr(g, d35 + loc_a24_f));
        wrf32(sp0 - 0xa18u, (float)d39);
        d40 = (double)(float)fr(g, cow_bits2f(t30) + d37);
        wrf32(sp0 - 0xa14u, (float)d40);
        d41 = (double)(float)fr(g, d40 + fr(g, d31 * cow_bits2f(t28)));
        wrf32(sp0 - 0x9d8u, (float)d41);
        d42 = (double)(float)fr(g, d38 + d32);
        wrf32(sp0 - 0xa4cu, (float)d42);
        wr32(sp0 - 0xa44u, cow_f2bits(d41));
        d43 = (double)(float)fr(g, d39 + d33);
        wrf32(sp0 - 0xa48u, (float)d43);
        if (loc_a34 == 0u)
        {
            esi = esi + 0x24u;
            loc_a1c_f = d38;
            loc_a18_f = d39;
            loc_a14_f = d40;
        }
        else
        {
            edx = t30;
            esi = esi + 0x24u;
            loc_a4c_f = d42;
            loc_a48_f = d43;
            loc_a44 = cow_f2bits(d41);
            loc_a1c_f = d38;
            loc_a18_f = d39;
            loc_a14_f = d40;
            if ((int32_t)rd32(self + 0x14u) < 0)
            {
                eax = rd32(self + 0x14u);
                g->eax = eax;
                g->esp = sp0 - 0xa5cu;
                t44 = cow_thiscall(g, COW_IMG(0x1006bc80u), sp0 - 0x9c8u, 0);
                t45 = cow_divu(g, t44, rd32(sp0 - 0xa34u));
                t46 = cow_modu(g, t44, rd32(sp0 - 0xa34u));
                wr32(sp0 - 0xa60u, t46);
                eax = rd32(sp0 - 0xa2cu);
                ecx = rd32(sp0 - 0xa2cu) + 0x30u;
                edx = t46;
                loc_a2c = rd32(sp0 - 0xa2cu);
                loc_a34 = rd32(sp0 - 0xa34u);
                loc_a3c_f = (double)rdf32(sp0 - 0xa3cu);
                loc_a28_f = (double)rdf32(sp0 - 0xa28u);
                loc_a24_f = (double)rdf32(sp0 - 0xa24u);
                loc_a20_f = (double)rdf32(sp0 - 0xa20u);
                loc_a40 = rd32(sp0 - 0xa40u);
                loc_a4c_f = (double)rdf32(sp0 - 0xa4cu);
                loc_a48_f = (double)rdf32(sp0 - 0xa48u);
                loc_a44 = rd32(sp0 - 0xa44u);
                loc_a1c_f = (double)rdf32(sp0 - 0xa1cu);
                loc_a18_f = (double)rdf32(sp0 - 0xa18u);
                loc_a14_f = (double)rdf32(sp0 - 0xa14u);
                loc_a60 = t46;
            }
            else
            {
                eax = rd32(self + 0x14u);
                wr32(sp0 - 0xa60u, eax);
                ecx = loc_a2c + 0x30u;
                edx = loc_a2c;
                loc_a60 = eax;
            }
            g->eax = eax;
            g->esp = sp0 - 0xa5cu;
            t47 = cow_thiscall(g, COW_IMG(0x10063b50u), ecx, 1, loc_a60);
            d48 = (double)(float)fr(g, (double)rdf32(sp0 - 0xa4cu) + (double)rdf32(t47));
            wrf32(sp0 - 0xa4cu, (float)d48);
            d49 = (double)(float)fr(g, (double)rdf32(sp0 - 0xa48u) + (double)rdf32(t47 + 4u));
            wrf32(sp0 - 0xa48u, (float)d49);
            d50 = (double)(float)fr(g, (double)rdf32(sp0 - 0xa44u) + (double)rdf32(t47 + 8u));
            wrf32(sp0 - 0xa44u, (float)d50);
            loc_a2c = rd32(sp0 - 0xa2cu);
            loc_a34 = rd32(sp0 - 0xa34u);
            loc_a3c_f = (double)rdf32(sp0 - 0xa3cu);
            loc_a28_f = (double)rdf32(sp0 - 0xa28u);
            loc_a24_f = (double)rdf32(sp0 - 0xa24u);
            loc_a20_f = (double)rdf32(sp0 - 0xa20u);
            loc_a40 = rd32(sp0 - 0xa40u);
            loc_a1c_f = (double)rdf32(sp0 - 0xa1cu);
            loc_a18_f = (double)rdf32(sp0 - 0xa18u);
            loc_a14_f = (double)rdf32(sp0 - 0xa14u);
        }
        wr32(sp0 - 0xa60u, sp0 - 0xa4cu);
        wr32(sp0 - 0xa64u, ebp);
        wr32(sp0 - 0xa68u, sp0 - 0xa4cu);
        g->eax = sp0 - 0xa4cu;
        g->esp = sp0 - 0xa5cu;
        t51 = cow_thiscall_cdecl(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0xa4cu, ebp, sp0 - 0xa4cu);
        t52 = rd32(sp0 - 4u);
        wr32(sp0 - 0xa6cu, t52);
        wr32(sp0 - 0xa70u, sp0 - 0xa58u);
        wr32(sp0 - 0xa74u, edi);
        d53 = (double)(float)fr(g, (double)rdf32(sp0 - 0xa58u) + (double)rdf32(sp0 - 0xa1cu));
        wrf32(sp0 - 0xa58u, (float)d53);
        d54 = (double)(float)fr(g, (double)rdf32(sp0 - 0xa54u) + (double)rdf32(sp0 - 0xa18u));
        wrf32(sp0 - 0xa54u, (float)d54);
        d55 = (double)(float)fr(g, (double)rdf32(sp0 - 0xa50u) + (double)rdf32(sp0 - 0xa14u));
        wrf32(sp0 - 0xa50u, (float)d55);
        g->esp = sp0 - 0xa68u;
        cow_thiscall(g, rd32(sp0 - 8u), t52, 3, edi, sp0 - 0xa58u, t52);
        t56 = rd32(sp0 - 0xa40u) - 1u;
        wr32(sp0 - 0xa40u, t56);
        if (rd32(sp0 - 0xa40u) != 1u)
        {
            loc_a2c = rd32(sp0 - 0xa2cu);
            loc_a34 = rd32(sp0 - 0xa34u);
            loc_a3c_f = (double)rdf32(sp0 - 0xa3cu);
            loc_a28_f = (double)rdf32(sp0 - 0xa28u);
            loc_a24_f = (double)rdf32(sp0 - 0xa24u);
            loc_a20_f = (double)rdf32(sp0 - 0xa20u);
            loc_a40 = t56;
            goto L_10063e09;
        }
        edx = rd32(sp0 - 0xa38u);
    }
    d57 = fr(g, (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u) + (double)rdf32(self + 4u));
    wrf32(self + 4u, (float)d57);
    t58 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t59 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t59 + 0xa90u, t58);
    wr32(t58 * 4u + t59 + 0xa10u, edi);
    t60 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t61 = rd32(COW_IMG(0x1047cf7cu));
    t62 = rd32(sp0 - 0xa58u);
    t63 = rd32(sp0 - 0xa5cu);
    wr32(t61 + 0xa90u, t60);
    wr32(t60 * 4u + t61 + 0xa10u, ebp);
    g->ebx = rd32(sp0 - 0xa50u);
    g->esi = t62;
    g->edi = t63;
    g->ebp = rd32(sp0 - 0xa54u);
    return edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10063c80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
