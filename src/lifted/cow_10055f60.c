/* f_0x10055f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10055f60(Guest* g)
{
    double d1;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
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
    double d6;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t edx;
    uint32_t esi;
    uint32_t t10;
    uint32_t t11;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    double xin0 = ST(0);
    double xin1 = ST(1);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10056133u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; x0 = ST(0); goto E_10056133;
    case 0x1005613bu: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; x0 = ST(0); goto E_1005613b;
    case 0x10056151u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; x0 = ST(0); goto E_10056151;
    default: break;
    }
#endif

    COW_AT(10055f60)
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    d1 = fr(g, (double)rdf32(rd32(sp0 + 4u)) - (double)rdf32(rd32(sp0 + 8u)));
    wrf32(sp0 - 0x24u, (float)(double)(float)d1);
    d2 = fr(g, (double)rdf32(rd32(sp0 + 4u) + 4u) - (double)rdf32(rd32(sp0 + 8u) + 4u));
    wr32(sp0 - 0x30u, cow_f2bits((double)(float)d1));
    wrf32(sp0 - 0x20u, (float)(double)(float)d2);
    d3 = fr(g, (double)rdf32(rd32(sp0 + 4u) + 8u) - (double)rdf32(rd32(sp0 + 8u) + 8u));
    wr32(sp0 - 0x2cu, cow_f2bits((double)(float)d2));
    t4 = rd32(sp0 + 8u);
    t5 = rd32(sp0 + 4u);
    wrf32(sp0 + 4u, (float)d3);
    wrf32(sp0 - 0x1cu, (float)(double)(float)d3);
    d6 = fr(g, (double)rdf32(t5) - (double)rdf32(arg4));
    wr32(sp0 - 0x28u, cow_f2bits((double)(float)d3));
    t7 = rd32(sp0 + 4u);
    wr32(sp0 - 0x1cu, t7);
    wr32(sp0 - 4u, t7);
    wrf32(sp0 - 0x18u, (float)(double)(float)d6);
    d8 = fr(g, (double)rdf32(t5 + 4u) - (double)rdf32(arg4 + 4u));
    wr32(sp0 - 0x44u, sp0 - 0xcu);
    wrf32(sp0 - 0x14u, (float)(double)(float)d8);
    d9 = fr(g, (double)rdf32(t5 + 8u) - (double)rdf32(arg4 + 8u));
    wrf32(sp0 - 0x10u, (float)(double)(float)d9);
    wrf32(sp0 - 0x24u, (float)(double)(float)d1);
    wrf32(sp0 - 0x20u, (float)(double)(float)d2);
    wr32(sp0 - 0xcu, cow_f2bits((double)(float)d1));
    wr32(sp0 - 8u, cow_f2bits((double)(float)d2));
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x94u), rd32(COW_IMG(0x1047cf7cu)), 1, sp0 - 0xcu);
    ebp = t4;
    esi = t5;
    COW_AT(10056001)
    t10 = rd32(COW_IMG(0x1047cf7cu));
    wrf32(sp0 + 8u, (float)xin0);
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    g->eax = sp0 - 0x30u;
    g->esp = sp0 - 0x40u;
    t11 = cow_thiscall(g, rd32(rd32(t10) + 0xa0u), t10, 1, sp0 - 0x30u);
    eax = t11;
    COW_AT(10056018)
    d12 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x28u) * (double)rdf32(sp0 - 0x10u)) + fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(sp0 - 0x14u))) + fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(sp0 - 0x18u)));
    d13 = fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(sp0 - 0x14u));
    d14 = fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 + 4u, (float)-d12);
    d15 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 0xffffffffu) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 0xffffffffu) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 0xffffffffu) & 0x4100u;
    COW_AT(10056051)
        wr32(sp0 + 4u, 0u);
    }
    COW_AT(10056059)
    d16 = (double)rdf32(sp0 + 4u);
    d17 = -(double)rdf32(sp0 + 8u);
    if (!(d16 < d17))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, d17, 0u);
        x0 = -(double)rdf32(sp0 + 8u);
    COW_AT(10056072)
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, d17, 0u);
        x0 = -(double)rdf32(sp0 + 8u);
    COW_AT(1005606c)
        wrf32(sp0 + 4u, (float)x0);
    }
    COW_AT(10056074)
    d18 = fr(g, (double)rdf32(sp0 - 0x28u) * (double)rdf32(sp0 + 4u));
    d19 = fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(sp0 + 4u));
    d20 = fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(sp0 + 4u));
    wr32(sp0 - 0x44u, arg3);
    wrf32(sp0 - 0x28u, (float)(double)(float)d18);
    d21 = fr(g, d20 + (double)rdf32(esi));
    wrf32(sp0 - 0x30u, (float)(double)(float)d21);
    d22 = fr(g, d19 + (double)rdf32(esi + 4u));
    wrf32(sp0 - 0x2cu, (float)(double)(float)d22);
    d23 = fr(g, (double)(float)d18 + (double)rdf32(esi + 8u));
    wrf32(sp0 - 0x28u, (float)(double)(float)d23);
    d24 = fr(g, (double)(float)d21 - (double)rdf32(arg4));
    wrf32(arg3, (float)d24);
    d25 = fr(g, (double)rdf32(sp0 - 0x2cu) - (double)rdf32(arg4 + 4u));
    wrf32(arg3 + 4u, (float)d25);
    d26 = fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(arg4 + 8u));
    wrf32(arg3 + 8u, (float)d26);
    g->eax = eax;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t27 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x40u;
    t28 = cow_thiscall(g, rd32(t27 + 0x94u), rd32(COW_IMG(0x1047cf7cu)), 1, rd32(sp0 - 0x44u));
    t29 = g->edx;
    eax = t28;
    edx = t29;
    COW_AT(100560d9)
    d30 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0xffffffffu) & 0x4100u) != 0u)
    {
        x0 = xin1;
    }
    else
    {
        eax = cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0xffffffffu) & 0x4100u;
    COW_AT(100560ec)
        d31 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / xin1);
        d32 = fr(g, d31 * (double)rdf32(arg3));
        d33 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - -fr(g, (double)rdf32(sp0 + 4u) / (double)rdf32(sp0 + 8u))) * (double)rdf32(esi + 0xcu)) + fr(g, -fr(g, (double)rdf32(sp0 + 4u) / (double)rdf32(sp0 + 8u)) * (double)rdf32(ebp + 0xcu)));
        wrf32(arg3, (float)d32);
        d34 = fr(g, d31 * (double)rdf32(arg3 + 4u));
        wrf32(arg3 + 4u, (float)d34);
        d35 = fr(g, d31 * (double)rdf32(arg3 + 8u));
        wrf32(arg3 + 8u, (float)d35);
        d36 = fr(g, xin1 - d33);
        if (!(d36 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            x0 = d36;
        }
        else
        {
            x0 = d36;
    COW_AT(10056133)
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
        }
    COW_AT(1005613b)
        d37 = fr(g, x0 * (double)rdf32(arg3));
        wrf32(arg3, (float)d37);
        d38 = fr(g, x0 * (double)rdf32(arg3 + 4u));
        wrf32(arg3 + 4u, (float)d38);
        d39 = fr(g, x0 * (double)rdf32(arg3 + 8u));
        wrf32(arg3 + 8u, (float)d39);
    }
    COW_AT(10056151)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    g->edx = edx;
    g->top = (g->top + 2u) & 7u;
    fpush(g, x0);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10055f60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10056133u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        x0 = ST(0);
        g->esp = sp0 - 0x40u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1005613bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        x0 = ST(0);
        g->esp = sp0 - 0x40u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10056151u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        x0 = ST(0);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     10056001: reads xin0, xin1, which no location holds here
     10056018: reads xin1, which no location holds here
     10056051: reads xin1, which no location holds here
     10056059: reads xin1, which no location holds here
     1005606c: reads xin1, which no location holds here
     10056072: reads xin1, which no location holds here
     10056074: reads xin1, which no location holds here
     100560d9: reads xin1, which no location holds here
     100560ec: reads xin1, which no location holds here
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10055f60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10055f60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
