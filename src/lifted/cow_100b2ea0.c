/* f_0x100b2ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2ea0(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d18;
    double d19;
    double d2;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d3;
    double d33;
    double d37;
    double d39;
    double d4;
    double d46;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    uint32_t loc_1c;
    double loc_c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t16;
    uint32_t t17;
    uint32_t t20;
    uint32_t t21;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x1cu, in_esi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t1;
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t29 = cow_fastcall(g, COW_IMG(0x1008af20u), rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u), edx, 0);
        t30 = g->edx;
        wr32(sp0 - 0x20u, 2u);
        t31 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr32(sp0 - 4u, t31);
        wr32(sp0 - 0x20u, 4u);
        t32 = rd16(self + 0x258u);
        d33 = fr(g, (double)(int32_t)t31 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(self + t32 * 0x20u + 0x28u, (float)d33);
        g->edx = t32 << 5u;
        t34 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t35 = g->edx;
        wr32(sp0 - 4u, t34);
        wr32(sp0 - 0x20u, 6u);
        t36 = rd16(self + 0x258u);
        d37 = fr(g, (double)(int32_t)t34 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(self + t36 * 0x20u + 0x30u, (float)d37);
        g->eax = t36 << 5u;
        t38 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        wr32(sp0 - 4u, t38);
        d39 = fr(g, (double)(int32_t)t38 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu, (float)d39);
        wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
        loc_1c = in_esi;
    }
    else
    {
        eax = t1;
        if (eax != 1u)
        {
            loc_1c = in_esi;
        }
        else
        {
            d2 = (double)(float)fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x28u) - (double)rdf32(rd32(self + 0x260u) + 0x140u));
            wrf32(sp0 - 0x14u, (float)d2);
            d3 = (double)(float)fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu) - (double)rdf32(rd32(self + 0x260u) + 0x144u));
            wrf32(sp0 - 0x18u, (float)d3);
            d4 = (double)(float)fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x30u) - (double)rdf32(rd32(self + 0x260u) + 0x148u));
            wrf32(sp0 - 0x10u, (float)d4);
            t5 = rd16(self + 0x258u);
            t6 = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu);
            d7 = fr(g, atan2(-fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x30u) - (double)rdf32(rd32(self + 0x260u) + 0x148u)), d2));
            wrf32(rd32(self + 0x260u) + 0x154u, (float)d7);
            d8 = (double)(float)fr(g, sqrt(fr(g, fr(g, d4 * d4) + fr(g, d2 * d2))));
            wrf32(sp0 - 0xcu, (float)d8);
            if (t6 == 0u)
            {
                loc_18_f = d3;
                goto L_100b300c;
            }
            ecx = self + t5 * 0x20u;
            loc_14_f = d2;
            loc_18_f = d3;
            loc_10_f = d4;
            loc_c_f = d8;
            t9 = rd32(rd32(self + 0x260u) + 0x168u);
            wr32(sp0 - 8u, t9);
            g->esp = sp0 - 0x1cu;
            t10 = cow_call_regs(g, COW_IMG(0x10014cf0u), t9, g->ecx, g->edx, 1, 0);
            d11 = cow_take_float(g);
            d12 = fr(g, fr(g, d11 * (double)rdf32(sp0 - 8u)) * (double)rdf32(COW_IMG(0x1032b160u)));
            d13 = (double)rdf32(sp0 - 0xcu);
            if ((cow_fsw(g, d12, d13, 0u) & 0x100u) == 0u) goto L_100b300c;
            d14 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0xcu));
            wrf32(sp0 - 0xcu, (float)d14);
            d15 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0xcu)) * (double)rdf32(sp0 - 0x18u));
            wrf32(sp0 - 0x18u, (float)d15);
            t16 = rd32(rd32(self + 0x260u) + 0x140u);
            wr32(sp0 - 4u, t16);
            t17 = rd32(rd32(self + 0x260u) + 0x168u);
            wr32(sp0 - 8u, t17);
            g->esp = sp0 - 0x1cu;
            cow_call_regs(g, COW_IMG(0x10014cf0u), rd32(self + 0x260u), g->ecx, g->edx, 1, 0);
            d18 = cow_take_float(g);
            d19 = fr(g, fr(g, fr(g, fr(g, d18 * (double)rdf32(sp0 - 8u)) * (double)rdf32(COW_IMG(0x1032b160u))) * fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 - 0x14u))) + (double)rdf32(sp0 - 4u));
            wrf32(rd32(self + 0x260u) + 0x140u, (float)d19);
            t20 = rd32(rd32(self + 0x260u) + 0x148u);
            wr32(sp0 - 8u, t20);
            t21 = rd32(rd32(self + 0x260u) + 0x168u);
            wr32(sp0 - 4u, t21);
            cow_call_regs(g, COW_IMG(0x10014cf0u), rd32(self + 0x260u), g->ecx, g->edx, 1, 0);
            d22 = cow_take_float(g);
            d23 = fr(g, fr(g, fr(g, fr(g, d22 * (double)rdf32(sp0 - 4u)) * (double)rdf32(COW_IMG(0x1032b160u))) * fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 - 0x10u))) + (double)rdf32(sp0 - 8u));
            wrf32(rd32(self + 0x260u) + 0x148u, (float)d23);
L_100b3068: ;
            d27 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu);
            wrf32(rd32(self + 0x260u) + 0x144u, (float)d27);
            t28 = rd16(self + 2u);
            wr8(self + 0x25au, 1u);
            wr32(rd32(COW_IMG(0x10480af0u) + t28 * 4u) + 0x124u, rd32(rd32(COW_IMG(0x10480af0u) + t28 * 4u) + 0x124u) | 0x20000u);
        }
    }
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd16(self + 2u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(sp0 - 0x20u, in_edi);
        t40 = rd32(ecx + 0x120u);
        if (!((rd32(ecx + 0x128u) >> 0xeu | t40 >> 0x15u | t40 >> 0x14u) & 1u))
        {
            t41 = rd32(rd32(self + 0x260u) + 0x144u);
            wr32(sp0 - 8u, t41);
            t42 = rd32(rd32(self + 0x260u) + 0x148u);
            wr32(sp0 - 4u, t42);
            t43 = rd32(rd32(self + 0x260u) + 0x140u);
            wr32(sp0 - 0xcu, t43);
            wr32(sp0 - 0x20u, sp0 - 0x18u);
            if (eax != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
            {
                eax = t41;
                ecx = t43;
                edx = t42;
                wr32(sp0 - 0x24u, edx);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, ecx);
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t45 = cow_thiscall(g, COW_IMG(0x10181300u), rd32(COW_IMG(0x10631f24u)), 4, ecx, eax, edx, sp0 - 0x18u);
                eax = t45;
            }
            else
            {
                eax = t41;
                ecx = t43;
                edx = t42;
                wr32(sp0 - 0x24u, 0x42480000u);
                wr32(sp0 - 0x28u, edx);
                wr32(sp0 - 0x2cu, eax);
                wr32(sp0 - 0x30u, ecx);
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t44 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, ecx, eax, edx, 0x42480000u, sp0 - 0x18u);
                eax = t44;
            }
            if ((uint8_t)eax == 1u)
            {
                d46 = (double)rdf32(sp0 - 0x18u);
                wrf32(rd32(self + 0x260u) + 0x144u, (float)d46);
            }
        }
    }
    g->esi = loc_1c;
    return;
L_100b300c: ;
    d24 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x28u);
    wrf32(rd32(self + 0x260u) + 0x140u, (float)d24);
    d25 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu);
    wrf32(rd32(self + 0x260u) + 0x144u, (float)d25);
    d26 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x30u);
    wrf32(rd32(self + 0x260u) + 0x148u, (float)d26);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    loc_1c = in_esi;
    goto L_100b3068;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2ea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b2ea0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
