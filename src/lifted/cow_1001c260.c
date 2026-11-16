/* f_0x1001c260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1001c260(Guest* g)
{
    double d1;
    double d10;
    double d13;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d26;
    double d27;
    double d28;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d38;
    double d39;
    double d40;
    double d42;
    double d44;
    double d45;
    double d46;
    double d47;
    double d49;
    double d5;
    double d50;
    double d51;
    double d52;
    double d59;
    double d6;
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
    double d7;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t29;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t41;
    uint32_t t43;
    uint32_t t48;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    if ((int32_t)(rd32(self + 0x14a8u) - 1u) >= 0)
    {
        ebx = rd32(self + 0x14a8u) - 1u;
    }
    else
    {
        ebx = rd32(self + 0x14a8u) - 1u;
        ebx = ebx + 0x50u;
    }
    if ((int32_t)rd32(self + 0x14acu) <= 0)
    {
        eax = rd32(self + 0x14acu);
        edx = in_edx;
    }
    else
    {
        edx = in_edx;
        ebp = 0u;
        edi = ebx << 4u;
L_1001c28a: ;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        d1 = (double)(float)fr(g, (double)rdf32(edi + self + 0x40u) - (double)rdf32(edi + self + 0x540u));
        wrf32(sp0 - 0x20u, (float)d1);
        d2 = (double)(float)fr(g, (double)rdf32(edi + self + 0x44u) - (double)rdf32(edi + self + 0x544u));
        wrf32(sp0 - 0x1cu, (float)d2);
        d3 = (double)(float)fr(g, (double)rdf32(edi + self + 0x48u) - (double)rdf32(edi + self + 0x548u));
        wrf32(sp0 - 0x18u, (float)d3);
        g->ecx = sp0 - 0x20u;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x20u, sp0 - 0x20u);
        t4 = g->ecx;
        d5 = cow_take_float(g);
        d6 = (double)(float)fr(g, sqrt(d5));
        wrf32(sp0 - 0x2cu, (float)d6);
        d7 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d6);
        wrf32(sp0 - 0x40u, (float)d7);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        g->eax = sp0 - 0x20u;
        t8 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x20u, sp0 - 0x20u, cow_f2bits(d7));
        t9 = rd32(self + 0x150cu);
        wr32(sp0 - 0x28u, t9);
        d10 = fr(g, (double)rdf32(sp0 - 0x2cu) - (double)rdf32(self + 0x150cu));
        if (!(d10 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            loc_28 = t9;
        }
        else
        {
            t11 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x28u, t11);
            loc_28 = t11;
        }
        t12 = rd32(self + 0x1510u);
        wr32(sp0 - 0x24u, t12);
        d13 = fr(g, (double)rdf32(sp0 - 0x2cu) - (double)rdf32(self + 0x1510u));
        if (!(d13 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            loc_24 = t12;
        }
        else
        {
            t14 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x24u, t14);
            loc_24 = t14;
        }
        wr32(sp0 - 0x40u, loc_28);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x10u, sp0 - 0x20u, loc_28);
        t15 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x4cu, t15);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x20u, sp0 - 0x20u, t15);
        d16 = fr(g, (double)rdf32(edi + self + 0x40u) - (double)rdf32(sp0 - 0x10u));
        wrf32(edi + self + 0x40u, (float)d16);
        wr32(sp0 - 0x2cu, edi + 0x40u);
        d17 = fr(g, (double)rdf32(edi + self + 0x44u) - (double)rdf32(sp0 - 0xcu));
        wrf32(edi + self + 0x44u, (float)d17);
        d18 = fr(g, (double)rdf32(edi + self + 0x48u) - (double)rdf32(sp0 - 8u));
        wrf32(edi + self + 0x48u, (float)d18);
        d19 = fr(g, (double)rdf32(sp0 - 0x20u) + (double)rdf32(edi + self + 0x540u));
        wrf32(edi + self + 0x540u, (float)d19);
        d20 = fr(g, (double)rdf32(sp0 - 0x1cu) + (double)rdf32(edi + self + 0x544u));
        wrf32(edi + self + 0x544u, (float)d20);
        d21 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(edi + self + 0x548u));
        wrf32(edi + self + 0x548u, (float)d21);
        if ((int32_t)(ebx - 1u) >= 0)
        {
            eax = ebx - 1u;
            edx = edi + 0x40u;
            ebp = ebp + 1u;
            ebx = eax;
            edi = edi - 0x10u;
        }
        else
        {
            eax = ebx - 1u;
            edx = edi + 0x40u;
            ebp = ebp + 1u;
            ebx = eax + 0x50u;
            edi = edi + 0x4f0u;
        }
        if ((int32_t)ebp < (int32_t)rd32(self + 0x14acu)) goto L_1001c28a;
    }
    if ((int32_t)rd32(self + 0x14acu) <= 1)
    {
        ecx = rd32(self + 0x14acu);
    }
    else
    {
        ecx = rd32(self + 0x14acu);
        if ((int32_t)(rd32(self + 0x14a8u) - 1u) >= 0)
        {
            eax = rd32(self + 0x14a8u) - 1u;
        }
        else
        {
            eax = rd32(self + 0x14a8u) - 1u;
            eax = eax + 0x50u;
        }
        if ((int32_t)(eax - 1u) >= 0)
        {
            ebp = eax - 1u;
        }
        else
        {
            ebp = eax - 1u;
            ebp = ebp + 0x50u;
        }
        wr32(sp0 - 0x28u, 0u);
        if ((int32_t)(ecx - 1u) <= 0)
        {
            ecx = ecx - 1u;
        }
        else
        {
            edi = ebp << 4u;
            loc_28 = 0u;
L_1001c42b: ;
            if ((int32_t)(ebp + 1u) <= 79)
            {
                eax = edi + 0x10u;
                ebx = ebp + 1u;
            }
            else
            {
                eax = edi + 0x10u;
                ebx = ebp + 1u;
                eax = eax - 0x500u;
            }
            t22 = edi + self + 0x40u;
            wr32(sp0 - 0x40u, t22);
            t23 = eax + self + 0x40u;
            wr32(sp0 - 0x44u, t23);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            g->eax = sp0 - 0x20u;
            g->esp = sp0 - 0x3cu;
            t24 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x20u, t23, t22);
            wr32(sp0 - 0x4cu, sp0 - 0x20u);
            wr32(sp0 - 0x50u, sp0 - 0x20u);
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x48u;
            cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x20u, sp0 - 0x20u);
            t25 = g->edx;
            d26 = cow_take_float(g);
            d27 = (double)(float)fr(g, sqrt(d26));
            wrf32(sp0 - 0x2cu, (float)d27);
            d28 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d27);
            wrf32(sp0 - 0x40u, (float)d28);
            wr32(sp0 - 0x44u, sp0 - 0x20u);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            g->ecx = sp0 - 0x20u;
            g->esp = sp0 - 0x3cu;
            cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x20u, sp0 - 0x20u, cow_f2bits(d28));
            t29 = g->ecx;
            d30 = (double)(float)fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(self + 0x1514u));
            wrf32(sp0 - 0x40u, (float)d30);
            wr32(sp0 - 0x44u, sp0 - 0x20u);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x20u, sp0 - 0x20u, cow_f2bits(d30));
            d31 = fr(g, (double)rdf32(sp0 - 0x20u) + (double)rdf32(edi + self + 0x40u));
            wrf32(edi + self + 0x40u, (float)d31);
            d32 = fr(g, (double)rdf32(sp0 - 0x1cu) + (double)rdf32(edi + self + 0x44u));
            wrf32(edi + self + 0x44u, (float)d32);
            d33 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(edi + self + 0x48u));
            wrf32(edi + self + 0x48u, (float)d33);
            if ((int32_t)ebx <= 79)
            {
                eax = edi + 0x10u;
            }
            else
            {
                eax = edi + 0x10u;
                eax = eax - 0x500u;
            }
            t34 = edi + self + 0x540u;
            wr32(sp0 - 0x40u, t34);
            t35 = eax + self + 0x540u;
            wr32(sp0 - 0x44u, t35);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            g->eax = sp0 - 0x20u;
            g->esp = sp0 - 0x3cu;
            t36 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x20u, t35, t34);
            wr32(sp0 - 0x4cu, sp0 - 0x20u);
            wr32(sp0 - 0x50u, sp0 - 0x20u);
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x48u;
            cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x20u, sp0 - 0x20u);
            t37 = g->edx;
            d38 = cow_take_float(g);
            d39 = (double)(float)fr(g, sqrt(d38));
            wrf32(sp0 - 0x2cu, (float)d39);
            d40 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d39);
            wrf32(sp0 - 0x40u, (float)d40);
            wr32(sp0 - 0x44u, sp0 - 0x20u);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            g->ecx = sp0 - 0x20u;
            g->esp = sp0 - 0x3cu;
            cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x20u, sp0 - 0x20u, cow_f2bits(d40));
            t41 = g->ecx;
            d42 = (double)(float)fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(self + 0x1518u));
            wrf32(sp0 - 0x40u, (float)d42);
            wr32(sp0 - 0x44u, sp0 - 0x20u);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x20u, sp0 - 0x20u, cow_f2bits(d42));
            t43 = rd32(sp0 - 0x28u);
            d44 = fr(g, (double)rdf32(sp0 - 0x20u) + (double)rdf32(edi + self + 0x540u));
            wrf32(edi + self + 0x540u, (float)d44);
            wr32(sp0 - 0x28u, t43 + 1u);
            d45 = fr(g, (double)rdf32(sp0 - 0x1cu) + (double)rdf32(edi + self + 0x544u));
            wrf32(edi + self + 0x544u, (float)d45);
            d46 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(edi + self + 0x548u));
            wrf32(edi + self + 0x548u, (float)d46);
            if ((int32_t)(ebp - 1u) >= 0)
            {
                eax = ebp - 1u;
                edx = t43 + 1u;
                loc_28 = t43 + 1u;
                ebp = eax;
                edi = edi - 0x10u;
            }
            else
            {
                eax = ebp - 1u;
                edx = t43 + 1u;
                loc_28 = t43 + 1u;
                ebp = eax + 0x50u;
                edi = edi + 0x4f0u;
            }
            if ((int32_t)loc_28 < (int32_t)(rd32(self + 0x14acu) - 1u)) goto L_1001c42b;
            eax = loc_28;
            ecx = rd32(self + 0x14acu) - 1u;
        }
    }
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    d47 = cow_take_float(g);
    t48 = rd32(self + 0x14a8u);
    d49 = fr(g, (double)rdf32(self + 0x14c8u) - d47);
    wrf32(self + 0x14c8u, (float)d49);
    if ((int32_t)(t48 - 1u) >= 0)
    {
        eax = t48 - 1u;
    }
    else
    {
        eax = t48 - 1u;
        eax = eax + 0x50u;
    }
    wr32(sp0 - 0x2cu, eax);
    wr32(sp0 - 0x28u, 0u);
    if ((int32_t)rd32(self + 0x14acu) > 0)
    {
        loc_2c = eax;
        eax = rd32(self + 0x14acu);
        edi = loc_2c << 4u;
        loc_28 = 0u;
L_1001c5eb: ;
        d50 = fr(g, (double)rdf32(edi + self + 0xa4cu) - (double)rdf32(self + 0x14f8u));
        wrf32(edi + self + 0xa4cu, (float)d50);
        d51 = fr(g, (double)rdf32(edi + self + 0xf4cu) - (double)rdf32(self + 0x1508u));
        wrf32(edi + self + 0xf4cu, (float)d51);
        d52 = (double)rdf32(self + 0x14c8u);
        if (!(d52 <= (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
            wr32(sp0 - 0x40u, self + 0x14ecu);
            t53 = edi + self + 0xa40u;
            wr32(sp0 - 0x44u, t53);
            t54 = edi + self + 0xa40u;
            wr32(sp0 - 0x48u, t54);
            wr32(sp0 - 0x24u, edi + 0xa40u);
            g->ecx = t54;
            g->esp = sp0 - 0x3cu;
            cow_cdecl(g, COW_IMG(0x10027120u), 3, t54, t53, self + 0x14ecu);
            t55 = g->ecx;
            wr32(sp0 - 0x4cu, self + 0x14ecu);
            t56 = edi + self + 0xf40u;
            wr32(sp0 - 0x50u, t56);
            t57 = edi + self + 0xf40u;
            wr32(sp0 - 0x54u, t57);
            g->eax = t57;
            g->esp = sp0 - 0x48u;
            t58 = cow_cdecl(g, COW_IMG(0x10027120u), 3, t57, t56, self + 0x14ecu);
            eax = t58;
        }
        d59 = (double)rdf32(edi + self + 0xa40u);
        if (!(d59 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d59, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            goto L_1001c6a2;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d59, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        wr32(edi + self + 0xa40u, 0u);
L_1001c680: ;
L_1001c685: ;
        d61 = (double)rdf32(edi + self + 0xa44u);
        if (!(d61 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d61, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d62 = (double)rdf32(edi + self + 0xa44u);
            if ((cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
                wr32(edi + self + 0xa44u, 0x437f0000u);
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d61, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            wr32(edi + self + 0xa44u, 0u);
        }
        d63 = (double)rdf32(edi + self + 0xa48u);
        if (!(d63 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d64 = (double)rdf32(edi + self + 0xa48u);
            if ((cow_fsw(g, d64, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d64, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d64, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
                wr32(edi + self + 0xa48u, 0x437f0000u);
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            wr32(edi + self + 0xa48u, 0u);
        }
        d65 = (double)rdf32(edi + self + 0xa4cu);
        if (!(d65 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d66 = (double)rdf32(edi + self + 0xa4cu);
            if ((cow_fsw(g, d66, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d66, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d66, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
                wr32(edi + self + 0xa4cu, 0x437f0000u);
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            wr32(edi + self + 0xa4cu, 0u);
        }
        d67 = (double)rdf32(edi + self + 0xf40u);
        if (!(d67 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d67, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d68 = (double)rdf32(edi + self + 0xf40u);
            if ((cow_fsw(g, d68, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d68, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d68, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
                wr32(edi + self + 0xf40u, 0x437f0000u);
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d67, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            wr32(edi + self + 0xf40u, 0u);
        }
        d69 = (double)rdf32(edi + self + 0xf44u);
        if (!(d69 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d70 = (double)rdf32(edi + self + 0xf44u);
            if ((cow_fsw(g, d70, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d70, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d70, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
                wr32(edi + self + 0xf44u, 0x437f0000u);
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            wr32(edi + self + 0xf44u, 0u);
        }
        d71 = (double)rdf32(edi + self + 0xf48u);
        if (!(d71 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d72 = (double)rdf32(edi + self + 0xf48u);
            if ((cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
                wr32(edi + self + 0xf48u, 0x437f0000u);
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            wr32(edi + self + 0xf48u, 0u);
        }
        d73 = (double)rdf32(edi + self + 0xf4cu);
        if (!(d73 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d73, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d74 = (double)rdf32(edi + self + 0xf4cu);
            if ((cow_fsw(g, d74, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u) == 0u)
            {
                wr32(edi + self + 0xf4cu, 0x437f0000u);
            }
        }
        else
        {
            wr32(edi + self + 0xf4cu, 0u);
        }
        wr32(sp0 - 0x28u, loc_28 + 1u);
        if ((int32_t)(loc_2c - 1u) >= 0)
        {
            eax = loc_2c - 1u;
            loc_28 = loc_28 + 1u;
            edi = edi - 0x10u;
        }
        else
        {
            eax = loc_2c - 1u;
            loc_28 = loc_28 + 1u;
            eax = eax + 0x50u;
            edi = edi + 0x4f0u;
        }
        wr32(sp0 - 0x2cu, eax);
        if ((int32_t)loc_28 < (int32_t)rd32(self + 0x14acu))
        {
            loc_2c = eax;
            goto L_1001c5eb;
        }
    }
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    return;
L_1001c6a2: ;
    d60 = (double)rdf32(edi + self + 0xa40u);
    if ((cow_fsw(g, d60, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d60, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
        goto L_1001c680;
    }
    eax = cow_fsw(g, d60, (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
    wr32(edi + self + 0xa40u, 0x437f0000u);
    goto L_1001c685;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001c260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001c260(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
