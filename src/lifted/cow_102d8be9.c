/* f_0x102d8be9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102d8be9(Guest* g)
{
    double d3;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d8bfbu: in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102d8bfb;
    default: break;
    }
#endif

    COW_AT(102d8be9)
    wr32(sp0 - 4u, in_ebp);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x20u, sp0 - 0x18u);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102d64b1u), sp0 - 0x18u, self, g->edx, 0, 2, sp0 - 0x18u, t1);
    COW_AT(102d8bfb)
    t2 = rd32(sp0 + 4u) + 0xcu;
    d3 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(sp0 - 8u, t2);
    t4 = rd32(sp0 + 4u);
    wrf32(sp0 + 4u, (float)d3);
    wr32(sp0 - 0xcu, sp0 + 8u);
    d5 = fr(g, cos((double)rdf32(sp0 + 4u)));
    d6 = fr(g, sin((double)rdf32(sp0 + 4u)));
    wrf32(t2, (float)d5);
    wrf32(sp0 + 8u, (float)d6);
    d7 = fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(sp0 + 8u));
    wrf32(t4, (float)d7);
    d8 = fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(sp0 + 8u));
    wrf32(t4 + 4u, (float)d8);
    d9 = fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(sp0 + 8u));
    wrf32(t4 + 8u, (float)d9);
    g->ebp = rd32(sp0 - 4u);
    g->edx = t2;
    return t4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d8be9(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d8bfbu:
    {
        uint32_t in_ebp;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d8be9(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d8be9(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
