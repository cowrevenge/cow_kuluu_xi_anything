/* f_0x102d9a19 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102d9a19(Guest* g)
{
    double d1;
    double d10;
    double d2;
    double d3;
    double d4;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    double loc_8_f;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d9ab1u: eax = g->eax; edx = g->edx; loc_8_f = rdf32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); goto E_102d9ab1;
    case 0x102d9abbu: edx = g->edx; loc_8_f = rdf32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); goto E_102d9abb;
    case 0x102d9ad4u: edx = g->edx; loc_8_f = rdf32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); goto E_102d9ad4;
    default: break;
    }
#endif

    COW_AT(102d9a19)
    g->st[g->top & 7u] = fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x10u));
    g->st[g->top & 7u] = fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg3 + 0x20u));
    d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg3)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x10u))) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg3 + 0x20u))) + (double)rdf32(arg3 + 0x30u));
    d2 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg3 + 4u)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x14u))) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg3 + 0x24u))) + (double)rdf32(arg3 + 0x34u));
    d3 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg3 + 8u)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x18u))) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg3 + 0x28u))) + (double)rdf32(arg3 + 0x38u));
    d4 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2) * (double)rdf32(arg3 + 0xcu)) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x1cu))) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg3 + 0x2cu))) + (double)rdf32(arg3 + 0x3cu));
    wrf32(arg1, (float)d1);
    wrf32(arg1 + 4u, (float)d2);
    wrf32(arg1 + 8u, (float)d3);
    g->edx = arg3;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x102d6203u), arg2, g->ecx, g->edx, 1, 2, cow_f2bits((double)(float)(double)(float)d4), cow_f2bits((double)(float)1.0));
    t6 = g->edx;
    eax = t5;
    edx = t6;
    loc_8_f = (double)(float)d4;
    COW_AT(102d9ab1)
    if (eax == 0u)
    {
    COW_AT(102d9abb)
        d7 = fr(g, 1.0 / loc_8_f);
        d8 = fr(g, d7 * (double)rdf32(arg1));
        wrf32(arg1, (float)d8);
        d9 = fr(g, d7 * (double)rdf32(arg1 + 4u));
        wrf32(arg1 + 4u, (float)d9);
        d10 = fr(g, d7 * (double)rdf32(arg1 + 8u));
        wrf32(arg1 + 8u, (float)d10);
    }
    COW_AT(102d9ad4)
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d9a19(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d9ab1u:
    {
        uint32_t eax;
        uint32_t edx;
        double loc_8_f;
        eax = g->eax;
        edx = g->edx;
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9abbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        double loc_8_f;
        edx = g->edx;
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9ad4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        double loc_8_f;
        edx = g->edx;
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d9a19(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d9a19(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
