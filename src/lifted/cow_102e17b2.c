/* f_0x102e17b2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e17b2(Guest* g)
{
    double d10;
    double d11;
    double d13;
    double d14;
    double d15;
    double d16;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d23;
    double d24;
    double d25;
    double d26;
    double d28;
    double d29;
    double d3;
    double d30;
    double d31;
    double d4;
    double d5;
    double d6;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t12;
    uint32_t t17;
    uint32_t t22;
    uint32_t t27;
    uint32_t t7;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e17c1u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e17c1;
    case 0x102e17c8u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e17c8;
    case 0x102e17cfu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e17cf;
    case 0x102e17d8u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e17d8;
    case 0x102e17dfu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e17df;
    case 0x102e17edu: eax = g->eax; self = g->ecx; edx = g->edx; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e17ed;
    case 0x102e17f5u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e17f5;
    case 0x102e183eu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e183e;
    case 0x102e1843u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1843;
    case 0x102e1851u: eax = g->eax; self = g->ecx; edx = g->edx; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1851;
    case 0x102e1865u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1865;
    case 0x102e18b6u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e18b6;
    case 0x102e18bbu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e18bb;
    case 0x102e18c4u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e18c4;
    case 0x102e18ccu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e18cc;
    case 0x102e18dau: eax = g->eax; self = g->ecx; edx = g->edx; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e18da;
    case 0x102e18e2u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e18e2;
    case 0x102e192fu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e192f;
    case 0x102e1934u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1934;
    case 0x102e1942u: eax = g->eax; self = g->ecx; edx = g->edx; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1942;
    case 0x102e1956u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1956;
    case 0x102e19a3u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e19a3;
    case 0x102e19a8u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e19a8;
    case 0x102e19b2u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e19b2;
    case 0x102e19b9u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e19b9;
    case 0x102e19c7u: eax = g->eax; self = g->ecx; edx = g->edx; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e19c7;
    case 0x102e19dbu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e19db;
    case 0x102e1a2cu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1a2c;
    case 0x102e1a2eu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1a2e;
    case 0x102e1a38u: eax = g->eax; self = g->ecx; edx = g->edx; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1a38;
    case 0x102e1a4cu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1a4c;
    case 0x102e1a99u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1a99;
    case 0x102e1a9du: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102e1a9d;
    default: break;
    }
#endif

    COW_AT(102e17b2)
    if (rd32(self + 8u) == 1u) goto L_102e19a8;
    eax = rd32(self + 8u) - 1u;
    COW_AT(102e17c1)
    if (eax == 1u) goto L_102e18bb;
    eax = eax - 1u;
    COW_AT(102e17c8)
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    COW_AT(102e17cf)
    if (rd32(self + 0x1048u) == 1u) goto L_102e1843;
    eax = rd32(self + 0x1048u) - 1u;
    COW_AT(102e17d8)
    if (eax != 1u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(102e17df)
        t1 = rd32(self + 0x1058u);
        if (t1 == 0u)
        {
            edx = in_edx;
        }
        else
        {
    COW_AT(102e17ed)
            eax = arg1 + 8u;
            edx = 0u;
            esi = 0u;
L_102e17f5: ;
    COW_AT(102e17f5)
            d2 = (double)rdf32(eax - 8u);
            wrf32(edx + rd32(self + 0x104cu), (float)d2);
            d3 = (double)rdf32(eax - 4u);
            wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d3);
            d4 = (double)rdf32(eax);
            wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d4);
            d5 = (double)rdf32(eax + 4u);
            d6 = fr(g, fr(g, d5 + d5) - (double)rdf32(COW_IMG(0x1032961cu)));
            wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d6);
            if (esi + 1u < rd32(self + 0x1058u))
            {
                eax = eax + 0x10u;
                edx = edx + 0x10u;
                esi = esi + 1u;
                goto L_102e17f5;
            }
            edx = edx + 0x10u;
    COW_AT(102e183e)
        }
    }
L_102e1a9d: ;
    COW_AT(102e1a9d)
    g->edx = edx;
    return rd32(self + 0x104cu);
L_102e1843: ;
    COW_AT(102e1843)
    t7 = rd32(self + 0x1058u);
    if (t7 == 0u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    COW_AT(102e1851)
    eax = arg1 + 8u;
    edx = 0u;
    esi = 0u;
    x1 = (double)rdf32(COW_IMG(0x1032961cu));
    x0 = (double)rdf32(COW_IMG(0x10329990u));
L_102e1865: ;
    COW_AT(102e1865)
    d8 = fr(g, fr(g, (double)rdf32(eax - 8u) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu), (float)d8);
    d9 = fr(g, fr(g, (double)rdf32(eax - 4u) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d9);
    d10 = fr(g, fr(g, (double)rdf32(eax) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d10);
    d11 = fr(g, fr(g, (double)rdf32(eax + 4u) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d11);
    if (esi + 1u < rd32(self + 0x1058u))
    {
        eax = eax + 0x10u;
        edx = edx + 0x10u;
        esi = esi + 1u;
        goto L_102e1865;
    }
    edx = edx + 0x10u;
    COW_AT(102e18b6)
L_102e1a99: ;
    COW_AT(102e1a99)
    goto L_102e1a9d;
L_102e18bb: ;
    COW_AT(102e18bb)
    if (rd32(self + 0x1048u) == 1u) goto L_102e1934;
    eax = rd32(self + 0x1048u) - 1u;
    COW_AT(102e18c4)
    if (eax != 2u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(102e18cc)
        t12 = rd32(self + 0x1058u);
        if (t12 == 0u)
        {
            edx = in_edx;
        }
        else
        {
    COW_AT(102e18da)
            eax = arg1 + 8u;
            edx = 0u;
            esi = 0u;
L_102e18e2: ;
    COW_AT(102e18e2)
            d13 = (double)rdf32(eax - 8u);
            wrf32(edx + rd32(self + 0x104cu), (float)d13);
            d14 = (double)rdf32(eax - 4u);
            wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d14);
            d15 = (double)rdf32(eax);
            wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d15);
            d16 = fr(g, fr(g, (double)rdf32(eax + 4u) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d16);
            if (esi + 1u < rd32(self + 0x1058u))
            {
                eax = eax + 0x10u;
                edx = edx + 0x10u;
                esi = esi + 1u;
                goto L_102e18e2;
            }
            edx = edx + 0x10u;
    COW_AT(102e192f)
        }
    }
    goto L_102e1a9d;
L_102e1934: ;
    COW_AT(102e1934)
    t17 = rd32(self + 0x1058u);
    if (t17 == 0u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    COW_AT(102e1942)
    eax = arg1 + 8u;
    edx = 0u;
    esi = 0u;
    x1 = (double)rdf32(COW_IMG(0x1032961cu));
    x0 = (double)rdf32(COW_IMG(0x10329990u));
L_102e1956: ;
    COW_AT(102e1956)
    d18 = fr(g, fr(g, (double)rdf32(eax - 8u) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu), (float)d18);
    d19 = fr(g, fr(g, (double)rdf32(eax - 4u) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d19);
    d20 = fr(g, fr(g, (double)rdf32(eax) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d20);
    d21 = (double)rdf32(eax + 4u);
    wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d21);
    if (esi + 1u < rd32(self + 0x1058u))
    {
        eax = eax + 0x10u;
        edx = edx + 0x10u;
        esi = esi + 1u;
        goto L_102e1956;
    }
    edx = edx + 0x10u;
    COW_AT(102e19a3)
    goto L_102e1a99;
L_102e19a8: ;
    COW_AT(102e19a8)
    if (rd32(self + 0x1048u) == 2u) goto L_102e1a2e;
    eax = rd32(self + 0x1048u) - 2u;
    COW_AT(102e19b2)
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    COW_AT(102e19b9)
    t22 = rd32(self + 0x1058u);
    if (t22 == 0u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    COW_AT(102e19c7)
    eax = arg1 + 8u;
    edx = 0u;
    esi = 0u;
    x1 = (double)rdf32(COW_IMG(0x10329a08u));
    x0 = (double)rdf32(COW_IMG(0x1032961cu));
L_102e19db: ;
    COW_AT(102e19db)
    d23 = fr(g, fr(g, (double)rdf32(eax - 8u) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu), (float)d23);
    d24 = fr(g, fr(g, (double)rdf32(eax - 4u) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d24);
    d25 = fr(g, fr(g, (double)rdf32(eax) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d25);
    d26 = fr(g, fr(g, (double)rdf32(eax + 4u) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d26);
    if (esi + 1u < rd32(self + 0x1058u))
    {
        eax = eax + 0x10u;
        edx = edx + 0x10u;
        esi = esi + 1u;
        goto L_102e19db;
    }
    edx = edx + 0x10u;
    COW_AT(102e1a2c)
    goto L_102e1a99;
L_102e1a2e: ;
    COW_AT(102e1a2e)
    t27 = rd32(self + 0x1058u);
    if (t27 == 0u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    COW_AT(102e1a38)
    eax = arg1 + 8u;
    edx = 0u;
    esi = 0u;
    x1 = (double)rdf32(COW_IMG(0x10329a08u));
    x0 = (double)rdf32(COW_IMG(0x1032961cu));
L_102e1a4c: ;
    COW_AT(102e1a4c)
    d28 = fr(g, fr(g, (double)rdf32(eax - 8u) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu), (float)d28);
    d29 = fr(g, fr(g, (double)rdf32(eax - 4u) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d29);
    d30 = fr(g, fr(g, (double)rdf32(eax) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d30);
    d31 = (double)rdf32(eax + 4u);
    wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d31);
    if (esi + 1u < rd32(self + 0x1058u))
    {
        eax = eax + 0x10u;
        edx = edx + 0x10u;
        esi = esi + 1u;
        goto L_102e1a4c;
    }
    edx = edx + 0x10u;
    goto L_102e1a99;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e17b2(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e17c1u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e17c8u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e17cfu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e17d8u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e17dfu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e17edu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e17f5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e183eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1843u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1851u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e1865u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e18b6u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e18bbu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e18c4u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e18ccu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e18dau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e18e2u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e192fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1934u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1942u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e1956u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e19a3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e19a8u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e19b2u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e19b9u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e19c7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e19dbu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1a2cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1a2eu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1a38u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e1a4cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1a99u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1a9du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e17b2(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e17b2(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
