/* f_0x102cf0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102cf0a0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d4;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    double loc_14_f;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102cf0c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_102cf0c0;
    case 0x102cf0c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102cf0c8;
    case 0x102cf0edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102cf0ed;
    case 0x102cf0fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102cf0fd;
    case 0x102cf102u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102cf102;
    case 0x102cf110u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102cf110;
    case 0x102cf127u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102cf127;
    case 0x102cf12fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102cf12f;
    case 0x102cf173u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102cf173;
    case 0x102cf1c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102cf1c9;
    case 0x102cf1d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102cf1d2;
    case 0x102cf1e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102cf1e0;
    case 0x102cf21cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102cf21c;
    case 0x102cf233u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_102cf233;
    default: break;
    }
#endif

    COW_AT(102cf0a0)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0xcu, 0u);
    t1 = rd32(sp0 + 4u);
    t2 = 0x228u - rd32(sp0 + 4u);
    wr32(sp0 - 4u, t2);
    ecx = t1;
    edx = 0u;
    ebx = t1;
    ebp = t2;
    loc_18 = in_ebx;
    loc_1c = in_ebp;
    loc_20 = in_esi;
    loc_24 = in_edi;
    loc_c = 0u;
    loc_4 = t2;
L_102cf0c8: ;
    COW_AT(102cf0c8)
    wr32(sp0 - 0x10u, 0x40000000u);
    wr32(sp0 - 0x14u, 0x40000000u);
    t3 = rd32(ecx + 0x2cu);
    d4 = (double)rdf32(COW_IMG(0x10329990u));
    wr32(sp0 + 4u, 0x40000000u);
    if ((int32_t)edx <= (int32_t)t3)
    {
        eax = t3;
        loc_14 = 0x40000000u;
        x0 = d4;
    }
    else
    {
        x0 = d4;
    COW_AT(102cf0ed)
        t5 = rd32(rd32(ecx + 0x28u));
        t6 = rd32(rd32(ecx + 0x28u) + 4u);
        wr32(sp0 + 4u, t5);
        wr32(sp0 - 0x14u, t6);
        eax = t6;
        loc_14 = t6;
    }
    COW_AT(102cf0fd)
    if ((int32_t)edx <= (int32_t)rd32(ecx + 0x14u))
    {
        loc_10 = 0x40000000u;
    }
    else
    {
    COW_AT(102cf102)
        t7 = rd32(rd32(ecx + 0x10u) + 4u);
        wr32(sp0 - 0x10u, t7);
        eax = rd32(ecx + 0x10u);
        loc_10 = t7;
        x0 = (double)rdf32(rd32(ecx + 0x10u));
    }
    COW_AT(102cf110)
    d8 = (double)rdf32(sp0 + 4u);
    if (d8 != x0)
    {
        edx = rd32(ebx);
        esi = rd32(ebx + 0x18u);
        goto L_102cf12f;
    }
    edx = rd32(ebx);
    esi = rd32(ebx + 0x18u);
    COW_AT(102cf127)
    if (esi == edx)
    {
        edi = 0xffffff00u;
        goto L_102cf1d2;
    }
L_102cf12f: ;
    COW_AT(102cf12f)
    d9 = fr(g, (double)rdf32(edx) - (double)rdf32(esi));
    wr32(sp0 - 8u, 0xfffffff8u);
    d10 = fr(g, fr(g, x0 - (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    d11 = fr(g, fr(g, (double)rdf32(edx + 4u) - (double)rdf32(esi + 4u)) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    d12 = fr(g, d9 * (double)rdf32(COW_IMG(0x1032a3bcu)));
    wrf32(sp0 + 4u, (float)d10);
    d13 = fr(g, fr(g, cow_bits2f(loc_10) - cow_bits2f(loc_14)) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    wrf32(sp0 - 0x14u, (float)(double)(float)d13);
    eax = ebp + ebx;
    edi = 0xfffffff8u;
    loc_14_f = (double)(float)d13;
    loc_8 = 0xfffffff8u;
    x2 = d11;
    x1 = d12;
L_102cf173: ;
    COW_AT(102cf173)
    wr32(sp0 - 8u, edi + 1u);
    d14 = fr(g, (double)rdf32(eax + rd32(ecx + 0x58u)) - fr(g, fr(g, fr(g, fr(g, (double)(int32_t)loc_8 * x2) + (double)rdf32(edx + 4u)) * (double)rdf32(eax + rd32(ecx + 0x1b98u))) + fr(g, fr(g, fr(g, (double)(int32_t)loc_8 * x1) + (double)rdf32(edx)) * (double)rdf32(eax + rd32(ecx + 0x58u)))));
    d15 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)loc_8 * x2) + (double)rdf32(edx + 4u)) * (double)rdf32(eax + rd32(ecx + 0x1b98u))) + fr(g, fr(g, fr(g, (double)(int32_t)loc_8 * x1) + (double)rdf32(edx)) * (double)rdf32(eax + rd32(ecx + 0x58u))));
    wrf32(eax + rd32(ecx + 0x1b98u), (float)fr(g, fr(g, fr(g, (double)(int32_t)loc_8 * loc_14_f) + cow_bits2f(loc_10)) * d14));
    d16 = fr(g, fr(g, fr(g, (double)(int32_t)loc_8 * (double)rdf32(sp0 + 4u)) + x0) * d15);
    wrf32(eax + rd32(ecx + 0x58u), (float)d16);
    if ((int32_t)(edi + 1u) < 0)
    {
        eax = eax + 0x10u;
        edi = edi + 1u;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14_f = (double)rdf32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        goto L_102cf173;
    }
    COW_AT(102cf1c9)
    edi = 0xffffff08u;
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_c = rd32(sp0 - 0xcu);
    loc_4 = rd32(sp0 - 4u);
    loc_10 = rd32(sp0 - 0x10u);
L_102cf1d2: ;
    COW_AT(102cf1d2)
    eax = edi * 0x10u + loc_c * 4u + 0x1228u;
L_102cf1e0: ;
    COW_AT(102cf1e0)
    d17 = (double)rdf32(eax + rd32(ecx + 0x58u));
    d18 = fr(g, fr(g, (double)rdf32(eax + rd32(ecx + 0x1b98u)) * (double)rdf32(edx + 4u)) + fr(g, d17 * (double)rdf32(edx)));
    wrf32(eax + rd32(ecx + 0x58u), (float)fr(g, d18 * x0));
    d19 = fr(g, fr(g, d17 - d18) * (double)rdf32(sp0 - 0x10u));
    wrf32(eax + rd32(ecx + 0x1b98u), (float)d19);
    if ((int32_t)(edi + 1u) < 0)
    {
        eax = eax + 0x10u;
        edi = edi + 1u;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102cf1e0;
    }
    COW_AT(102cf21c)
    t20 = rd32(sp0 - 0xcu) + 1u;
    t21 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0xcu, t20);
    if ((int32_t)(t21 + 1u) < 4)
    {
        ebx = ebx + 4u;
        loc_c = t20;
        goto L_102cf0c0;
    }
    COW_AT(102cf233)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return;
L_102cf0c0: ;
    COW_AT(102cf0c0)
    edx = loc_c;
    ebp = rd32(sp0 - 4u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_4 = rd32(sp0 - 4u);
    goto L_102cf0c8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102cf0a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102cf0c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102cf0c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102cf0edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x10u, 0x40000000u);
        (void)sp0;
        return 1;
    }
    case 0x102cf0fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x10u, 0x40000000u);
        (void)sp0;
        return 1;
    }
    case 0x102cf102u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102cf110u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102cf127u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        g->edi = 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x102cf12fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102cf173u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102cf1c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102cf1d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102cf1e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102cf21cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102cf233u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102cf0a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102cf0a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
