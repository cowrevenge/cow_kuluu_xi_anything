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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008f373u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x20u); goto E_1008f373;
    case 0x1008f385u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x20u); goto E_1008f385;
    case 0x1008f39au: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x20u); goto E_1008f39a;
    case 0x1008f3d7u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); goto E_1008f3d7;
    case 0x1008f3e7u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); goto E_1008f3e7;
    case 0x1008f3f2u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); goto E_1008f3f2;
    case 0x1008f3f6u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); goto E_1008f3f6;
    case 0x1008f401u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); goto E_1008f401;
    case 0x1008f40au: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1008f40a;
    case 0x1008f413u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1008f413;
    case 0x1008f41du: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1008f41d;
    case 0x1008f42bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1008f42b;
    case 0x1008f44eu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1008f44e;
    case 0x1008f49fu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1008f49f;
    case 0x1008f4bau: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1008f4ba;
    case 0x1008f4d1u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1008f4d1;
    case 0x1008f4d3u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1008f4d3;
    case 0x1008f4e9u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x28u); goto E_1008f4e9;
    case 0x1008f4ebu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = rd32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0x20u); goto E_1008f4eb;
    default: break;
    }
#endif

    COW_AT(1008f360)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(1008f373)
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
    COW_AT(1008f385)
            if ((rd32(self + 0x134u) >> 0x15u & 0xfu) != 2u)
            {
                eax = (rd32(self + 0x134u) >> 0x15u & 0xfu) - 2u;
            }
            else
            {
                eax = (rd32(self + 0x134u) >> 0x15u & 0xfu) - 2u;
    COW_AT(1008f39a)
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
    COW_AT(1008f3d7)
                    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) == 0u)
                    {
                        ebx = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
                    }
                    else
                    {
                        ebx = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
                        eax = (uint16_t)eax;
    COW_AT(1008f3e7)
                        g->eax = eax;
                        g->esp = sp0 - 0x28u;
                        t9 = cow_fastcall(g, COW_IMG(0x1008e1e0u), ebx, edx, 0);
                        t10 = g->edx;
                        if (t9 == 0u)
                        {
                            eax = t9;
                            edx = t10;
                        }
                        else
                        {
                            eax = t9;
                            edx = t10;
    COW_AT(1008f3f2)
                            wr32(sp0 + 4u, ebx);
                        }
    COW_AT(1008f3f6)
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x28u;
                        t11 = cow_thiscall(g, COW_IMG(0x1008e180u), ebx, 0);
                        t12 = g->edx;
                        if (t11 != 0u)
                        {
                            eax = t11;
                            edx = t12;
    COW_AT(1008f401)
                            g->eax = eax;
                            g->esp = sp0 - 0x28u;
                            t13 = cow_thiscall(g, COW_IMG(0x1008e180u), ebx, 0);
                            ebx = t13;
                        }
                    }
                }
    COW_AT(1008f40a)
                eax = COW_IMG(0x10480af0u);
                loc_14 = COW_IMG(0x10480af0u);
L_1008f413: ;
    COW_AT(1008f413)
                if (rd32(eax) != 0u)
                {
                    eax = rd32(eax);
    COW_AT(1008f41d)
                    if (rd32(eax + 0xa0u) != 0u)
                    {
                        esi = rd32(eax + 0xa0u);
    COW_AT(1008f42b)
                        t14 = rd32(sp0 + 4u);
                        t15 = (uint8_t)rd32(self + 0x138u);
                        g->ebx = ebx;
                        g->eax = eax;
                        g->esp = sp0 - 0x28u;
                        t16 = cow_call_regs(g, COW_IMG(0x1008f500u), g->eax, g->ecx, t15, 0, 4, ebx, eax, t15, t14);
                        t17 = g->edx;
                        if ((uint8_t)t16 != 0u)
                        {
                            edx = t17;
    COW_AT(1008f44e)
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
    COW_AT(1008f4d1)
                            }
                            else
                            {
                                eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x1032a98cu)), 1u) & 0x4100u;
                                loc_18_f = d20;
                                x0 = fr(g, (double)rdf32(t26 + 8u) - cow_bits2f(loc_8));
    COW_AT(1008f49f)
                                d28 = fr(g, fr(g, x0 * x0) + fr(g, loc_18_f * loc_18_f));
                                if (d28 <= loc_4_f)
                                {
    COW_AT(1008f4ba)
                                    t29 = ((rd32(esi + 0x88u) & 0xffff00ffu) | (rd32(esi + 0x88u) >> 8u & 0xf9u) << 8u) ^ 0x600u;
                                    wr32(esi + 0x88u, t29);
                                }
                            }
                        }
                    }
                }
    COW_AT(1008f4d3)
                if ((int32_t)(loc_14 + 4u) < (int32_t)COW_IMG(0x10482ef0u))
                {
                    eax = loc_14 + 4u;
                    loc_14 = loc_14 + 4u;
                    goto L_1008f413;
                }
                eax = loc_14 + 4u;
    COW_AT(1008f4e9)
            }
        }
    }
    COW_AT(1008f4eb)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1008f360(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008f373u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1008f385u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1008f39au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1008f3d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1008f3e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1008f3f2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1008f3f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1008f401u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1008f40au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1008f413u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_18_f;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1008f41du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_18_f;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1008f42bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_18_f;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1008f44eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_18_f;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1008f49fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_18_f;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1008f4bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_18_f;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1008f4d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_18_f;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1008f4d3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_18_f;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1008f4e9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_18_f;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1008f4ebu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        double loc_18_f;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1008f360(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1008f360(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
