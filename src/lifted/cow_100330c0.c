/* f_0x100330c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100330c0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d16;
    double d17;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d3;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100330fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_100330fb;
    case 0x10033118u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_10033118;
    case 0x10033129u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_10033129;
    case 0x10033158u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_10033158;
    case 0x10033173u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_10033173;
    case 0x1003318cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_1003318c;
    case 0x10033195u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10033195;
    case 0x100331c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x18u); goto E_100331c9;
    case 0x100331d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100331d7;
    default: break;
    }
#endif

    COW_AT(100330c0)
    wr32(sp0 - 0x18u, in_esi);
    d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 4u) + 8u) * (double)rdf32(self + 8u)) + fr(g, (double)rdf32(rd32(sp0 + 4u) + 4u) * (double)rdf32(self + 4u))) + fr(g, (double)rdf32(rd32(sp0 + 4u)) * (double)rdf32(self))) + fr(g, (double)rdf32(self + 0xcu) * (double)rdf32(rd32(sp0 + 4u) + 0xcu)));
    t2 = rd32(sp0 + 4u);
    wrf32(sp0 + 4u, (float)d1);
    d3 = (double)rdf32(sp0 + 8u);
    if (d3 != (double)rdf32(COW_IMG(0x1032961cu)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        ecx = t2;
        goto L_10033118;
    }
    ecx = t2;
    COW_AT(100330fb)
    wr32(self, rd32(ecx));
    t4 = rd32(ecx + 4u);
    wr32(self + 4u, t4);
    t5 = rd32(ecx + 8u);
    wr32(self + 8u, t5);
    t6 = rd32(ecx + 0xcu);
    wr32(self + 0xcu, t6);
    g->esi = in_esi;
    g->edx = t4;
    return t5;
L_10033118: ;
    COW_AT(10033118)
    d7 = (double)rdf32(sp0 + 4u);
    if (!(d7 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
    COW_AT(10033158)
        wr32(sp0 - 0x10u, rd32(ecx));
        t13 = rd32(ecx + 4u);
        wr32(sp0 - 0xcu, t13);
        t14 = rd32(ecx + 8u);
        wr32(sp0 - 8u, t14);
        t15 = rd32(ecx + 0xcu);
        wr32(sp0 - 4u, t15);
        eax = t15;
        edx = t14;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10033129)
        d8 = (double)rdf32(sp0 + 4u);
        wrf32(sp0 + 4u, (float)-d8);
        d9 = (double)(float)-(double)rdf32(ecx);
        wrf32(sp0 - 0x10u, (float)d9);
        d10 = (double)(float)-(double)rdf32(ecx + 4u);
        wrf32(sp0 - 0xcu, (float)d10);
        d11 = (double)(float)-(double)rdf32(ecx + 8u);
        wrf32(sp0 - 8u, (float)d11);
        d12 = (double)(float)-(double)rdf32(ecx + 0xcu);
        wrf32(sp0 - 4u, (float)d12);
        edx = in_edx;
    }
    COW_AT(10033173)
    d16 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 4u));
    if ((cow_fsw(g, d16, (double)rdf32(COW_IMG(0x1032a42cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d16, (double)rdf32(COW_IMG(0x1032a42cu)), 0u) & 0x4100u;
    COW_AT(100331c9)
        loc_18 = in_esi;
        x1 = (double)rdf32(sp0 + 8u);
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 8u));
    }
    else
    {
        eax = cow_fsw(g, d16, (double)rdf32(COW_IMG(0x1032a42cu)), 0u) & 0x4100u;
    COW_AT(1003318c)
        g->eax = eax;
        g->edx = edx;
        d17 = (double)rdf32(sp0 + 4u);
        fpush(g, d17);
        g->esp = sp0 - 0x10u;
        t18 = cow_cdecl(g, COW_IMG(0x10313820u), 2, in_esi, rd32(sp0 - 0x14u));
        t19 = g->edx;
        d20 = cow_take_float(g);
        eax = t18;
        edx = t19;
        x0 = d20;
    COW_AT(10033195)
        wrf32(sp0 + 4u, (float)x0);
        d21 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sin(x0)));
        wrf32(sp0 - 0x14u, (float)(double)(float)d21);
        loc_18 = rd32(sp0 - 0x18u);
        x1 = fr(g, fr(g, sin(fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(sp0 + 8u)))) * (double)(float)d21);
        x0 = fr(g, fr(g, sin(fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 8u)) * (double)rdf32(sp0 + 4u)))) * (double)(float)d21);
    }
    COW_AT(100331d7)
    d22 = fr(g, fr(g, x0 * (double)rdf32(self)) + fr(g, x1 * (double)rdf32(sp0 - 0x10u)));
    wrf32(self, (float)d22);
    d23 = fr(g, fr(g, (double)rdf32(sp0 - 0xcu) * x1) + fr(g, x0 * (double)rdf32(self + 4u)));
    wrf32(self + 4u, (float)d23);
    d24 = fr(g, fr(g, (double)rdf32(sp0 - 8u) * x1) + fr(g, x0 * (double)rdf32(self + 8u)));
    wrf32(self + 8u, (float)d24);
    d25 = fr(g, fr(g, x0 * (double)rdf32(self + 0xcu)) + fr(g, x1 * (double)rdf32(sp0 - 4u)));
    wrf32(self + 0xcu, (float)d25);
    g->esi = loc_18;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100330c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100330fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10033118u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10033129u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10033158u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10033173u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1003318cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10033195u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100331c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100331d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100330c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100330c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
