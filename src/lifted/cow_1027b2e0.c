/* f_0x1027b2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1027b2e0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edi;
    uint32_t esi;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027b323u: eax = g->eax; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027b323;
    case 0x1027b33cu: eax = g->eax; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027b33c;
    case 0x1027b345u: eax = g->eax; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027b345;
    case 0x1027b37du: eax = g->eax; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027b37d;
    case 0x1027b38bu: eax = g->eax; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027b38b;
    case 0x1027b3c9u: eax = g->eax; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027b3c9;
    default: break;
    }
#endif

    COW_AT(1027b2e0)
    d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u)) * (double)rdf32(rd32(sp0 + 0xcu))) + fr(g, (double)rdf32(rd32(sp0 + 8u) + 8u) * (double)rdf32(rd32(sp0 + 0xcu) + 8u))) + fr(g, (double)rdf32(rd32(sp0 + 8u) + 4u) * (double)rdf32(rd32(sp0 + 0xcu) + 4u))) + fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 0xcu) * (double)rdf32(rd32(sp0 + 8u) + 0xcu)));
    t2 = rd32(sp0 + 8u);
    t3 = rd32(sp0 + 0xcu);
    wrf32(sp0 + 8u, (float)d1);
    d4 = fr(g, d1 + rdf64(COW_IMG(0x1032a100u)));
    if ((cow_fsw(g, d4, rdf64(COW_IMG(0x10340b28u)), 0u) & 0x4100u) != 0u)
    {
        esi = t2;
        goto L_1027b3c9;
    }
    eax = cow_fsw(g, d4, rdf64(COW_IMG(0x10340b28u)), 0u) & 0x4100u;
    esi = t2;
    edi = t3;
    COW_AT(1027b323)
    d5 = fr(g, rdf64(COW_IMG(0x1032a100u)) - (double)rdf32(sp0 + 8u));
    if ((cow_fsw(g, d5, rdf64(COW_IMG(0x10340b28u)), 0u) & 0x4100u) != 0u)
    {
    COW_AT(1027b37d)
        x1 = (double)rdf32(sp0 + 0x10u);
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0x10u));
    }
    else
    {
        eax = cow_fsw(g, d5, rdf64(COW_IMG(0x10340b28u)), 0u) & 0x4100u;
    COW_AT(1027b33c)
        d6 = (double)rdf32(sp0 + 8u);
        fpush(g, d6);
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10313820u), 2, in_edi, in_esi);
        d7 = cow_take_float(g);
        x0 = d7;
    COW_AT(1027b345)
        wrf32(sp0 + 8u, (float)x0);
        d8 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sin(x0)));
        wrf32(sp0 + 0xcu, (float)d8);
        x1 = fr(g, fr(g, sin(fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(sp0 + 0x10u)))) * (double)rdf32(sp0 + 0xcu));
        x0 = fr(g, fr(g, sin(fr(g, fr(g, rdf64(COW_IMG(0x1032a100u)) - (double)rdf32(sp0 + 0x10u)) * (double)rdf32(sp0 + 8u)))) * (double)rdf32(sp0 + 0xcu));
    }
    COW_AT(1027b38b)
    d9 = fr(g, fr(g, x0 * (double)rdf32(esi)) + fr(g, x1 * (double)rdf32(edi)));
    wrf32(arg1, (float)d9);
    d10 = fr(g, fr(g, x0 * (double)rdf32(esi + 4u)) + fr(g, x1 * (double)rdf32(edi + 4u)));
    wrf32(arg1 + 4u, (float)d10);
    d11 = fr(g, fr(g, x0 * (double)rdf32(esi + 8u)) + fr(g, x1 * (double)rdf32(edi + 8u)));
    wrf32(arg1 + 8u, (float)d11);
    d12 = fr(g, fr(g, x1 * (double)rdf32(edi + 0xcu)) + fr(g, x0 * (double)rdf32(esi + 0xcu)));
    wrf32(arg1 + 0xcu, (float)d12);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_1027b3c9: ;
    COW_AT(1027b3c9)
    d13 = (double)rdf32(esi + 4u);
    wrf32(arg1, (float)-d13);
    wr32(arg1 + 4u, rd32(esi));
    d14 = (double)rdf32(esi + 0xcu);
    wrf32(arg1 + 8u, (float)-d14);
    t15 = rd32(esi + 8u);
    d16 = fr(g, rdf64(COW_IMG(0x1032ab90u)) - (double)rdf32(sp0 + 0x10u));
    wr32(arg1 + 0xcu, t15);
    d17 = fr(g, sin(fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x1032df98u)))));
    d18 = fr(g, sin(fr(g, d16 * rdf64(COW_IMG(0x10340b38u)))));
    d19 = fr(g, fr(g, d17 * (double)rdf32(arg1)) + fr(g, d18 * (double)rdf32(esi)));
    wrf32(arg1, (float)d19);
    d20 = fr(g, fr(g, d18 * (double)rdf32(esi + 4u)) + fr(g, d17 * (double)rdf32(arg1 + 4u)));
    wrf32(arg1 + 4u, (float)d20);
    d21 = fr(g, fr(g, d17 * (double)rdf32(arg1 + 8u)) + fr(g, d18 * (double)rdf32(esi + 8u)));
    wrf32(arg1 + 8u, (float)d21);
    d22 = fr(g, fr(g, d17 * (double)rdf32(arg1 + 0xcu)) + fr(g, d18 * (double)rdf32(esi + 0xcu)));
    wrf32(arg1 + 0xcu, (float)d22);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027b2e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027b323u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1027b33cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1027b345u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1027b37du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1027b38bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1027b3c9u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027b2e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1027b2e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
