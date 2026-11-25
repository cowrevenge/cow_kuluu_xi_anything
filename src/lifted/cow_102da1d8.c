/* f_0x102da1d8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102da1d8(Guest* g)
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
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t edx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102da1eau: edx = g->edx; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102da1ea;
    default: break;
    }
#endif

    COW_AT(102da1d8)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102d9345u), sp0 - 0x14u, self, g->edx, 0, 2, sp0 - 0x14u, arg3);
    t1 = g->edx;
    edx = t1;
    COW_AT(102da1ea)
    d2 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(arg2 + 4u)) + fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(arg2))) + fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(arg2 + 0xcu))) + fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(arg2 + 8u)));
    d3 = (double)(float)-(double)rdf32(sp0 - 0xcu);
    wrf32(sp0 - 0x1cu, (float)d3);
    d4 = (double)(float)-(double)rdf32(sp0 - 8u);
    wrf32(sp0 - 0x18u, (float)d4);
    d5 = -(double)rdf32(sp0 - 0x14u);
    d6 = fr(g, fr(g, d5 * (double)rdf32(arg2)) + d2);
    d7 = (double)rdf32(sp0 - 8u);
    d8 = (double)rdf32(sp0 - 0xcu);
    d9 = (double)rdf32(sp0 - 0x10u);
    wrf32(arg1, (float)d6);
    d10 = fr(g, -d9 * (double)rdf32(arg2));
    wrf32(arg1 + 0x10u, (float)d10);
    d11 = fr(g, -d8 * (double)rdf32(arg2));
    wrf32(arg1 + 0x20u, (float)d11);
    d12 = fr(g, -d7 * (double)rdf32(arg2));
    wrf32(arg1 + 0x30u, (float)d12);
    d13 = fr(g, d5 * (double)rdf32(arg2 + 4u));
    wrf32(arg1 + 4u, (float)d13);
    d14 = fr(g, fr(g, -d9 * (double)rdf32(arg2 + 4u)) + d2);
    wrf32(arg1 + 0x14u, (float)d14);
    d15 = fr(g, -d8 * (double)rdf32(arg2 + 4u));
    wrf32(arg1 + 0x24u, (float)d15);
    d16 = fr(g, -d7 * (double)rdf32(arg2 + 4u));
    wrf32(arg1 + 0x34u, (float)d16);
    d17 = fr(g, d5 * (double)rdf32(arg2 + 8u));
    wrf32(arg1 + 8u, (float)d17);
    d18 = fr(g, -d9 * (double)rdf32(arg2 + 8u));
    wrf32(arg1 + 0x18u, (float)d18);
    d19 = fr(g, fr(g, -d8 * (double)rdf32(arg2 + 8u)) + d2);
    wrf32(arg1 + 0x28u, (float)d19);
    d20 = fr(g, -d7 * (double)rdf32(arg2 + 8u));
    wrf32(arg1 + 0x38u, (float)d20);
    d21 = fr(g, d5 * (double)rdf32(arg2 + 0xcu));
    wrf32(arg1 + 0xcu, (float)d21);
    d22 = fr(g, -d9 * (double)rdf32(arg2 + 0xcu));
    wrf32(arg1 + 0x1cu, (float)d22);
    d23 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(arg2 + 0xcu));
    wrf32(arg1 + 0x2cu, (float)d23);
    d24 = fr(g, fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(arg2 + 0xcu)) + d2);
    wrf32(arg1 + 0x3cu, (float)d24);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102da1d8(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102da1eau:
    {
        uint32_t edx;
        uint32_t in_ebp;
        edx = g->edx;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102da1d8(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102da1d8(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
