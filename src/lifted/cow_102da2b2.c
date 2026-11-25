/* f_0x102da2b2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102da2b2(Guest* g)
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
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102da2c4u: edx = g->edx; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102da2c4;
    default: break;
    }
#endif

    COW_AT(102da2b2)
    wr32(sp0 - 4u, in_ebp);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t1);
    wr32(sp0 - 0x1cu, sp0 - 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x102d9345u), sp0 - 0x14u, self, g->edx, 0, 2, sp0 - 0x14u, t1);
    t2 = g->edx;
    edx = t2;
    COW_AT(102da2c4)
    d3 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(COW_IMG(0x1032c084u)));
    d4 = fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(COW_IMG(0x1032c084u)));
    d5 = fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(COW_IMG(0x1032c084u)));
    wrf32(sp0 + 8u, (float)d3);
    d6 = fr(g, fr(g, (double)rdf32(sp0 - 0x14u) * d5) + (double)rdf32(COW_IMG(0x1032961cu)));
    d7 = (double)rdf32(COW_IMG(0x1032961cu));
    wrf32(arg1, (float)d6);
    d8 = fr(g, d4 * (double)rdf32(sp0 - 0x14u));
    wrf32(arg1 + 4u, (float)d8);
    d9 = fr(g, d3 * (double)rdf32(sp0 - 0x14u));
    wrf32(arg1 + 8u, (float)d9);
    wrf32(arg1 + 0xcu, (float)0.0);
    d10 = fr(g, (double)rdf32(sp0 - 0x10u) * d5);
    wrf32(arg1 + 0x10u, (float)d10);
    d11 = fr(g, fr(g, (double)rdf32(sp0 - 0x10u) * d4) + d7);
    wrf32(arg1 + 0x14u, (float)d11);
    d12 = fr(g, d3 * (double)rdf32(sp0 - 0x10u));
    wrf32(arg1 + 0x18u, (float)d12);
    wrf32(arg1 + 0x1cu, (float)0.0);
    d13 = fr(g, (double)rdf32(sp0 - 0xcu) * d5);
    wrf32(arg1 + 0x20u, (float)d13);
    d14 = fr(g, (double)rdf32(sp0 - 0xcu) * d4);
    wrf32(arg1 + 0x24u, (float)d14);
    d15 = fr(g, fr(g, (double)rdf32(sp0 - 0xcu) * d3) + d7);
    wrf32(arg1 + 0x28u, (float)d15);
    wrf32(arg1 + 0x2cu, (float)0.0);
    d16 = fr(g, (double)rdf32(sp0 - 8u) * d5);
    wrf32(arg1 + 0x30u, (float)d16);
    d17 = fr(g, (double)rdf32(sp0 - 8u) * d4);
    wrf32(arg1 + 0x34u, (float)d17);
    d18 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 + 8u));
    wrf32(arg1 + 0x38u, (float)d18);
    wrf32(arg1 + 0x3cu, (float)1.0);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102da2b2(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102da2c4u:
    {
        uint32_t edx;
        uint32_t in_ebp;
        edx = g->edx;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102da2b2(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102da2b2(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
