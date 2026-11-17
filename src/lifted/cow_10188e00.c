/* f_0x10188e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10188e00(Guest* g)
{
    double d12;
    double d13;
    double d14;
    double d18;
    double d22;
    double d3;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_18_f;
    uint32_t loc_1c;
    double loc_1c_f;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x24u, in_esi);
    if (rd32(self - 0x1cu) == 1u) goto L_10188e1d;
    wr32(rd32(sp0 + 4u), 0xffffffffu);
    return;
L_10188e1d: ;
    t1 = rd32(sp0 + 4u);
    wr32(t1, 0u);
    if (self + 0x24u == 0u)
    {
        loc_24 = in_esi;
    }
    else
    {
        esi = t1;
        if (arg2 == 0u)
        {
            g->eax = arg2;
            g->esp = sp0 - 0x24u;
            t5 = cow_thiscall(g, COW_IMG(0x10186fa0u), self, 0);
            d6 = (double)(float)(double)rdf32(t5 + 8u);
            wrf32(sp0 - 0x18u, (float)d6);
            wr32(sp0 - 0x20u, rd32(t5));
            t7 = rd32(t5 + 4u);
            wr32(sp0 - 0x1cu, t7);
            ecx = rd32(t5);
            edx = t7;
            loc_18_f = d6;
            loc_20 = rd32(t5);
            loc_1c = t7;
            x0 = (double)rdf32(t5 + 8u);
        }
        else
        {
            if (arg2 != 1u)
            {
                ecx = self;
                edx = self + 0x24u;
                loc_18_f = (double)rdf32(sp0 - 0x18u);
                loc_20 = rd32(sp0 - 0x20u);
                loc_1c = rd32(sp0 - 0x1cu);
                x0 = (double)rdf32(sp0 - 0x18u);
            }
            else
            {
                g->eax = arg2 - 1u;
                g->esp = sp0 - 0x24u;
                t2 = cow_thiscall(g, COW_IMG(0x10186f20u), self, 0);
                d3 = (double)(float)(double)rdf32(t2 + 8u);
                wrf32(sp0 - 0x18u, (float)d3);
                wr32(sp0 - 0x20u, rd32(t2));
                t4 = rd32(t2 + 4u);
                wr32(sp0 - 0x1cu, t4);
                ecx = rd32(t2);
                edx = t4;
                loc_18_f = d3;
                loc_20 = rd32(t2);
                loc_1c = t4;
                x0 = (double)rdf32(t2 + 8u);
            }
        }
        if (rd32(COW_IMG(0x10456a7cu)) == 0u)
        {
            eax = rd32(COW_IMG(0x10456a7cu));
            loc_24 = in_esi;
        }
        else
        {
            eax = rd32(COW_IMG(0x10456a7cu));
            if (!(cow_bits2f(loc_20) < (double)rdf32(COW_IMG(0x10329a34u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_20), (double)rdf32(COW_IMG(0x10329a34u)), 1u);
                loc_24 = in_esi;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_20), (double)rdf32(COW_IMG(0x10329a34u)), 1u);
                if (!(cow_bits2f(loc_1c) < (double)rdf32(COW_IMG(0x10329a34u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_1c), (double)rdf32(COW_IMG(0x10329a34u)), 1u);
                    loc_24 = in_esi;
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_1c), (double)rdf32(COW_IMG(0x10329a34u)), 1u);
                    if (!(x0 < (double)rdf32(COW_IMG(0x10329a34u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a34u)), 1u);
                        loc_24 = in_esi;
                    }
                    else
                    {
                        wr32(sp0 - 0x28u, sp0 - 8u);
                        wr32(sp0 - 0x2cu, sp0 - 0xcu);
                        wr32(sp0 - 0x30u, sp0 - 0x10u);
                        g->eax = rd32(COW_IMG(0x1045666cu));
                        g->edx = sp0 - 0x10u;
                        t8 = rd32(COW_IMG(0x1045666cu));
                        g->esp = sp0 - 0x24u;
                        t9 = cow_thiscall(g, COW_IMG(0x10017100u), t8 + 0x1f4u, 3, sp0 - 0x10u, sp0 - 0xcu, sp0 - 8u);
                        t10 = g->ecx;
                        t11 = g->edx;
                        d12 = (double)(float)fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(sp0 - 0x20u));
                        wrf32(sp0 - 0x20u, (float)d12);
                        d13 = (double)(float)fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 - 0x1cu));
                        wrf32(sp0 - 0x1cu, (float)d13);
                        if ((cow_fsw(g, d12, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u) != 0u)
                        {
                            eax = cow_fsw(g, d12, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                            ecx = t10;
                            edx = t11;
                            loc_1c_f = d13;
                            x0 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 - 0x18u));
                        }
                        else
                        {
                            eax = cow_fsw(g, d12, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                            ecx = t10;
                            edx = t11;
                            loc_1c_f = d13;
                            x0 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 - 0x18u));
                            wr32(sp0 - 0x20u, 0x3f800000u);
                        }
                        if ((cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u) != 0u)
                        {
                            eax = cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                        }
                        else
                        {
                            eax = cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                            wr32(sp0 - 0x1cu, 0x3f800000u);
                        }
                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u) != 0u)
                        {
                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                            loc_20 = rd32(sp0 - 0x20u);
                            loc_1c = rd32(sp0 - 0x1cu);
                            loc_24 = rd32(sp0 - 0x24u);
                        }
                        else
                        {
                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                            loc_20 = rd32(sp0 - 0x20u);
                            loc_1c = rd32(sp0 - 0x1cu);
                            loc_24 = rd32(sp0 - 0x24u);
                            x0 = (double)rdf32(COW_IMG(0x1032961cu));
                        }
                    }
                }
            }
        }
        g->ecx = ecx;
        g->edx = edx;
        d14 = fr(g, cow_bits2f(loc_20) * (double)rdf32(COW_IMG(0x1032ae60u)));
        fpush(g, d14);
        g->esp = sp0 - 0x24u;
        t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t16 = g->ecx;
        t17 = g->edx;
        d18 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x1032ae60u)));
        wr8(sp0 + 6u, (uint8_t)t15);
        g->ecx = t16;
        g->edx = t17;
        fpush(g, d18);
        t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), t15, g->ecx, g->edx, 1, 0);
        t20 = g->ecx;
        t21 = g->edx;
        d22 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032ae60u)));
        wr8(sp0 + 5u, (uint8_t)t19);
        fpush(g, d22);
        t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), t19, g->ecx, g->edx, 1, 0);
        wr8(sp0 + 4u, (uint8_t)t23);
        wr8(sp0 + 7u, 0u);
        t24 = rd32(sp0 + 4u);
        wr32(esi, t24);
        loc_24 = rd32(sp0 - 0x24u);
    }
    g->esi = loc_24;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10188e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10188e00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
