/* f_0x102d89df - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102d89df(Guest* g)
{
    double d1;
    double d12;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t10;
    uint32_t t11;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d8a1fu: in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102d8a1f;
    case 0x102d8a23u: in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102d8a23;
    case 0x102d8a41u: in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102d8a41;
    case 0x102d8a43u: in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102d8a43;
    case 0x102d8a4au: in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102d8a4a;
    case 0x102d8a52u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102d8a52;
    case 0x102d8a58u: in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102d8a58;
    case 0x102d8a5eu: in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102d8a5e;
    case 0x102d8a6cu: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102d8a6c;
    case 0x102d8a73u: in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102d8a73;
    case 0x102d8a77u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102d8a77;
    default: break;
    }
#endif

    COW_AT(102d89df)
    d1 = (double)rdf32(arg1 + 4u);
    d2 = (double)rdf32(arg1 + 8u);
    d3 = (double)rdf32(arg1 + 0xcu);
    d4 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1) * (double)rdf32(arg1)) + fr(g, d1 * d1)) + fr(g, d2 * d2)) + fr(g, d3 * d3));
    if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032ac8cu)), 1u) >> 8u & 0x41u) != 0u)
    {
        x0 = d4;
    COW_AT(102d8a58)
        if (arg2 != 0u)
        {
    COW_AT(102d8a5e)
            wrf32(arg2, (float)1.0);
            wrf32(arg2 + 4u, (float)0.0);
            wrf32(arg2 + 8u, (float)0.0);
        }
    COW_AT(102d8a6c)
        if (arg3 == 0u)
        {
            eax = arg3;
            edx = in_edx;
        }
        else
        {
    COW_AT(102d8a73)
            wrf32(arg3, (float)0.0);
            eax = arg3;
            edx = in_edx;
        }
    }
    else
    {
        x0 = d4;
    COW_AT(102d8a1f)
    COW_AT(102d8a41)
        if (arg2 != 0u)
        {
    COW_AT(102d8a23)
            d5 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(x0)));
            d6 = fr(g, d5 * (double)rdf32(arg1));
            wrf32(arg2, (float)d6);
            d7 = fr(g, d5 * (double)rdf32(arg1 + 4u));
            wrf32(arg2 + 4u, (float)d7);
            d8 = fr(g, d5 * (double)rdf32(arg1 + 8u));
            wrf32(arg2 + 8u, (float)d8);
        }
    COW_AT(102d8a43)
        if (arg3 == 0u)
        {
            eax = arg2;
            edx = in_edx;
        }
        else
        {
    COW_AT(102d8a4a)
            g->eax = arg2;
            g->edx = in_edx;
            d9 = (double)rdf32(arg1 + 0xcu);
            fpush(g, d9);
            g->esp = sp0;
            t10 = cow_cdecl(g, COW_IMG(0x10313820u), 2, in_esi, in_ebp);
            t11 = g->edx;
            d12 = cow_take_float(g);
            eax = t10;
            edx = t11;
            x0 = d12;
    COW_AT(102d8a52)
            wrf32(arg3, (float)fr(g, x0 + x0));
        }
    }
    COW_AT(102d8a77)
    g->esi = in_esi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d89df(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d8a1fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d8a23u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d8a41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d8a43u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d8a4au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102d8a52u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102d8a58u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d8a5eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d8a6cu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d8a73u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d8a77u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d89df(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d89df(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
