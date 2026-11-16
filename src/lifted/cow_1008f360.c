/* f_0x1008f360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1008f360(Guest* g)
{
    double d20;
    double d24;
    double d27;
    double d28;
    double d3;
    double d6;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    double loc_18_f;
    double loc_4_f;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t29;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        t1 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 7u);
        t2 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            eax = t1;
        }
        else
        {
            edx = t2;
            if ((rd32(self + 0x134u) >> 0x15u & 0xfu) != 2u)
            {
                eax = (rd32(self + 0x134u) >> 0x15u & 0xfu) - 2u;
            }
            else
            {
                g->esp = sp0 - 0x28u;
                cow_thiscall(g, COW_IMG(0x1009aec0u), self, 0);
                d3 = cow_take_float(g);
                t4 = rd32(rd32(sp0 + 4u));
                t5 = rd32(rd32(sp0 + 4u) + 8u);
                d6 = (double)(float)fr(g, d3 * d3);
                t7 = rd32(rd32(sp0 + 4u) + 4u);
                t8 = rd16(self + 0x2a6u);
                wr32(sp0 + 4u, 0u);
                if ((uint16_t)t8 == 0u)
                {
                    ebx = 0u;
                    loc_10 = t4;
                    loc_8 = t5;
                    loc_4_f = d6;
                    loc_c = t7;
                }
                else
                {
                    eax = (t5 & 0xffff0000u) | t8;
                    edx = t7;
                    loc_10 = t4;
                    loc_8 = t5;
                    loc_4_f = d6;
                    loc_c = t7;
                    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) == 0u)
                    {
                        ebx = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
                    }
                    else
                    {
                        ebx = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
                        g->esp = sp0 - 0x28u;
                        t9 = cow_fastcall(g, COW_IMG(0x1008e1e0u), ebx, edx, 0);
                        t10 = g->edx;
                        if (t9 == 0u)
                        {
                            edx = t10;
                        }
                        else
                        {
                            edx = t10;
                            wr32(sp0 + 4u, ebx);
                        }
                        g->edx = edx;
                        g->esp = sp0 - 0x28u;
                        t11 = cow_thiscall(g, COW_IMG(0x1008e180u), ebx, 0);
                        t12 = g->edx;
                        if (t11 != 0u)
                        {
                            edx = t12;
                            g->esp = sp0 - 0x28u;
                            t13 = cow_thiscall(g, COW_IMG(0x1008e180u), ebx, 0);
                            ebx = t13;
                        }
                    }
                }
                eax = COW_IMG(0x10480af0u);
                loc_14 = COW_IMG(0x10480af0u);
L_1008f413: ;
                if (rd32(eax) != 0u)
                {
                    eax = rd32(eax);
                    if (rd32(eax + 0xa0u) != 0u)
                    {
                        esi = rd32(eax + 0xa0u);
                        t14 = rd32(sp0 + 4u);
                        t15 = (uint8_t)rd32(self + 0x138u);
                        g->ebx = ebx;
                        g->esp = sp0 - 0x28u;
                        t16 = cow_call_regs(g, COW_IMG(0x1008f500u), g->eax, g->ecx, t15, 0, 4, ebx, eax, t15, t14);
                        t17 = g->edx;
                        if ((uint8_t)t16 != 0u)
                        {
                            edx = t17;
                            g->eax = rd32(esi);
                            t18 = rd32(esi);
                            g->esp = sp0 - 0x28u;
                            t19 = cow_thiscall(g, rd32(t18 + 0x1bcu), esi, 0);
                            d20 = (double)(float)fr(g, (double)rdf32(t19) - cow_bits2f(loc_10));
                            g->edx = rd32(esi);
                            t21 = rd32(esi);
                            t22 = cow_thiscall(g, rd32(t21 + 0x1bcu), esi, 0);
                            t23 = g->edx;
                            d24 = (double)(float)fr(g, (double)rdf32(t22 + 4u) - cow_bits2f(loc_c));
                            g->eax = rd32(esi);
                            t25 = rd32(esi);
                            t26 = cow_thiscall(g, rd32(t25 + 0x1bcu), esi, 0);
                            d27 = fr(g, d24 * d24);
                            if ((cow_fsw(g, d27, (double)rdf32(COW_IMG(0x1032a98cu)), 1u) & 0x4100u) == 0u)
                            {
                                x0 = fr(g, (double)rdf32(t26 + 8u) - cow_bits2f(loc_8));
                            }
                            else
                            {
                                eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x1032a98cu)), 1u) & 0x4100u;
                                loc_18_f = d20;
                                x0 = fr(g, (double)rdf32(t26 + 8u) - cow_bits2f(loc_8));
                                d28 = fr(g, fr(g, x0 * x0) + fr(g, loc_18_f * loc_18_f));
                                if (d28 <= loc_4_f)
                                {
                                    t29 = ((rd32(esi + 0x88u) & 0xffff00ffu) | (rd32(esi + 0x88u) >> 8u & 0xf9u) << 8u) ^ 0x600u;
                                    wr32(esi + 0x88u, t29);
                                }
                            }
                        }
                    }
                }
                if ((int32_t)(loc_14 + 4u) < (int32_t)COW_IMG(0x10482ef0u))
                {
                    eax = loc_14 + 4u;
                    loc_14 = loc_14 + 4u;
                    goto L_1008f413;
                }
                eax = loc_14 + 4u;
            }
        }
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008f360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008f360(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
