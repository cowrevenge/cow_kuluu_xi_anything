/* f_0x100b5630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b5630(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d15;
    double d16;
    double d17;
    double d2;
    double d20;
    double d21;
    double d24;
    double d25;
    double d28;
    double d3;
    double d30;
    double d36;
    double d37;
    double d4;
    double d45;
    double d48;
    double d52;
    double d6;
    double d60;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    uint32_t loc_1c;
    double loc_c_f;
    uint32_t t1;
    uint32_t t14;
    uint32_t t18;
    uint32_t t19;
    uint32_t t22;
    uint32_t t23;
    uint32_t t26;
    uint32_t t27;
    uint32_t t29;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t46;
    uint32_t t47;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x1cu, in_esi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 == 0u)
    {
        edx = t1;
        g->eax = rd16(self + 2u);
        t40 = rd16(self + 2u);
        g->esp = sp0 - 0x1cu;
        t41 = cow_fastcall(g, COW_IMG(0x1008af20u), rd32(COW_IMG(0x10480af0u) + t40 * 4u), edx, 0);
        t42 = g->edx;
        wr32(sp0 - 0x20u, 2u);
        g->edx = t42;
        t43 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t44 = g->edx;
        wr32(sp0 - 4u, t43);
        wr32(sp0 - 0x20u, 4u);
        d45 = fr(g, (double)(int32_t)t43 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(self + rd16(self + 0x258u) * 0x20u + 0x28u, (float)d45);
        t46 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        wr32(sp0 - 4u, t46);
        wr32(sp0 - 0x20u, 6u);
        t47 = rd16(self + 0x258u);
        d48 = fr(g, (double)(int32_t)t46 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(self + t47 * 0x20u + 0x30u, (float)d48);
        g->edx = t47 << 5u;
        t49 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        t50 = g->edx;
        wr32(sp0 - 4u, t49);
        wr32(sp0 - 0x20u, 8u);
        t51 = rd16(self + 0x258u);
        d52 = fr(g, (double)(int32_t)t49 * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(self + t51 * 0x20u + 0x2cu, (float)d52);
        g->eax = t51 << 5u;
        t53 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
        wr16(self + rd16(self + 0x258u) * 0x20u + 0x38u, (uint16_t)t53);
        wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    }
    else
    {
        eax = t1;
        if (eax == 1u)
        {
            d2 = (double)(float)fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x28u) - (double)rdf32(rd32(self + 0x260u) + 0x140u));
            wrf32(sp0 - 0x14u, (float)d2);
            d3 = (double)(float)fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x30u) - (double)rdf32(rd32(self + 0x260u) + 0x148u));
            wrf32(sp0 - 0x10u, (float)d3);
            d4 = (double)(float)fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu) - (double)rdf32(rd32(self + 0x260u) + 0x144u));
            wrf32(sp0 - 0x18u, (float)d4);
            t5 = rd32(self + 0x260u);
            wrf32(t5 + 0x154u, (float)fr(g, atan2(-d3, d2)));
            d6 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d4 * d4) + fr(g, d3 * d3)) + fr(g, d2 * d2))));
            wrf32(sp0 - 0xcu, (float)d6);
            if ((int16_t)rd16(self + rd16(self + 0x258u) * 0x20u + 0x38u) <= 0)
            {
                eax = t5;
                loc_18_f = d4;
                goto L_100b5766;
            }
            ecx = rd16(self + 0x258u) << 5u;
            loc_14_f = d2;
            loc_10_f = d3;
            loc_18_f = d4;
            loc_c_f = d6;
            t7 = rd32(rd32(self + 0x260u) + 0x168u);
            wr32(sp0 - 8u, t7);
            g->esp = sp0 - 0x1cu;
            t8 = cow_call_regs(g, COW_IMG(0x10014cf0u), t7, g->ecx, g->edx, 1, 0);
            d9 = cow_take_float(g);
            d10 = fr(g, fr(g, d9 * (double)rdf32(sp0 - 8u)) * (double)rdf32(COW_IMG(0x1032b160u)));
            d11 = (double)rdf32(sp0 - 0xcu);
            if ((cow_fsw(g, d10, d11, 0u) & 0x100u) != 0u) goto L_100b57cd;
            d12 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x28u);
            wrf32(rd32(self + 0x260u) + 0x140u, (float)d12);
            d13 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu);
            wrf32(rd32(self + 0x260u) + 0x144u, (float)d13);
            t14 = rd32(self + 0x260u);
            d15 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x30u);
            wrf32(t14 + 0x148u, (float)d15);
            eax = t14;
L_100b5766: ;
            wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
            loc_1c = in_esi;
L_100b576e: ;
            t31 = (uint32_t)(int16_t)rd16(self + rd16(self + 0x258u) * 0x20u + 0x38u);
            wr32(sp0 - 4u, t31);
            wrf32(sp0 - 4u, (float)(double)(float)(double)(int32_t)t31);
            g->ecx = rd16(self + 0x258u) << 5u;
            g->edx = t31;
            t32 = rd16(self + 0x258u);
            g->esp = sp0 - 0x1cu;
            t33 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t34 = g->ecx;
            t35 = g->edx;
            d36 = cow_take_float(g);
            d37 = fr(g, (double)rdf32(sp0 - 4u) - d36);
            fpush(g, d37);
            t38 = cow_call_regs(g, COW_IMG(0x10311c6cu), t33, g->ecx, g->edx, 1, 0);
            wr16(self + rd16(self + 0x258u) * 0x20u + 0x38u, (uint16_t)t38);
            t39 = rd16(self + 2u);
            wr8(self + 0x25au, 1u);
            wr32(rd32(COW_IMG(0x10480af0u) + t39 * 4u) + 0x124u, rd32(rd32(COW_IMG(0x10480af0u) + t39 * 4u) + 0x124u) | 0x20000u);
        }
    }
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd16(self + 2u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(sp0 - 0x20u, in_edi);
        t54 = rd32(ecx + 0x120u);
        if (!((rd32(ecx + 0x128u) >> 0xeu | t54 >> 0x15u | t54 >> 0x14u) & 1u))
        {
            t55 = rd32(rd32(self + 0x260u) + 0x144u);
            wr32(sp0 - 8u, t55);
            t56 = rd32(rd32(self + 0x260u) + 0x148u);
            wr32(sp0 - 4u, t56);
            t57 = rd32(rd32(self + 0x260u) + 0x140u);
            wr32(sp0 - 0xcu, t57);
            wr32(sp0 - 0x20u, sp0 - 0x18u);
            if (eax != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
            {
                eax = t55;
                ecx = t57;
                edx = t56;
                wr32(sp0 - 0x24u, edx);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, ecx);
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t59 = cow_thiscall(g, COW_IMG(0x10181300u), rd32(COW_IMG(0x10631f24u)), 4, ecx, eax, edx, sp0 - 0x18u);
                eax = t59;
            }
            else
            {
                eax = t55;
                ecx = t57;
                edx = t56;
                wr32(sp0 - 0x24u, 0x42480000u);
                wr32(sp0 - 0x28u, edx);
                wr32(sp0 - 0x2cu, eax);
                wr32(sp0 - 0x30u, ecx);
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t58 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, ecx, eax, edx, 0x42480000u, sp0 - 0x18u);
                eax = t58;
            }
            if ((uint8_t)eax == 1u)
            {
                d60 = (double)rdf32(sp0 - 0x18u);
                wrf32(rd32(self + 0x260u) + 0x144u, (float)d60);
            }
        }
    }
    return;
L_100b57cd: ;
    d16 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0xcu));
    wrf32(sp0 - 0xcu, (float)d16);
    d17 = (double)(float)fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0xcu)) * (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x18u, (float)d17);
    t18 = rd32(rd32(self + 0x260u) + 0x140u);
    wr32(sp0 - 4u, t18);
    t19 = rd32(rd32(self + 0x260u) + 0x168u);
    wr32(sp0 - 8u, t19);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10014cf0u), rd32(self + 0x260u), g->ecx, g->edx, 1, 0);
    d20 = cow_take_float(g);
    d21 = fr(g, fr(g, fr(g, fr(g, d20 * (double)rdf32(sp0 - 8u)) * (double)rdf32(COW_IMG(0x1032b160u))) * fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 - 0x14u))) + (double)rdf32(sp0 - 4u));
    wrf32(rd32(self + 0x260u) + 0x140u, (float)d21);
    t22 = rd32(rd32(self + 0x260u) + 0x144u);
    wr32(sp0 - 8u, t22);
    t23 = rd32(rd32(self + 0x260u) + 0x168u);
    wr32(sp0 - 4u, t23);
    cow_call_regs(g, COW_IMG(0x10014cf0u), rd32(self + 0x260u), g->ecx, g->edx, 1, 0);
    d24 = cow_take_float(g);
    d25 = fr(g, fr(g, fr(g, fr(g, d24 * (double)rdf32(sp0 - 4u)) * (double)rdf32(COW_IMG(0x1032b160u))) * (double)rdf32(sp0 - 0x18u)) + (double)rdf32(sp0 - 8u));
    wrf32(rd32(self + 0x260u) + 0x144u, (float)d25);
    t26 = rd32(rd32(self + 0x260u) + 0x148u);
    wr32(sp0 - 8u, t26);
    t27 = rd32(rd32(self + 0x260u) + 0x168u);
    wr32(sp0 - 4u, t27);
    cow_call_regs(g, COW_IMG(0x10014cf0u), rd32(self + 0x260u), g->ecx, g->edx, 1, 0);
    d28 = cow_take_float(g);
    t29 = rd32(self + 0x260u);
    d30 = fr(g, fr(g, fr(g, fr(g, d28 * (double)rdf32(sp0 - 4u)) * (double)rdf32(COW_IMG(0x1032b160u))) * fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 - 0x10u))) + (double)rdf32(sp0 - 8u));
    wrf32(t29 + 0x148u, (float)d30);
    eax = t29;
    goto L_100b576e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b5630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b5630(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
