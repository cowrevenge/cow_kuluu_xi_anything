/* f_0x10274630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10274630(Guest* g)
{
    double d3;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027463au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027463a;
    case 0x10274657u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10274657;
    default: break;
    }
#endif

    COW_AT(10274630)
    g->ecx = self;
    g->edx = in_edx;
    COW_RET(0x1027463au);
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
    COW_AT(1027463a)
    d3 = (double)rdf32(arg1 + 4u);
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0;
    COW_RET(0x10274657u);
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 5, COW_IMG(0x103b27b4u), cow_dlo((double)rdf32(arg1)), cow_dhi((double)rdf32(arg1)), cow_dlo(d3), cow_dhi(d3));
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(10274657)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10274630(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027463au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10274657u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10274630(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10274630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
