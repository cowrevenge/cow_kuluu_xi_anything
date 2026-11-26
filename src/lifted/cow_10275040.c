/* f_0x10275040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10275040(Guest* g)
{
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027504au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027504a;
    case 0x10275075u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10275075;
    default: break;
    }
#endif

    COW_AT(10275040)
    g->ecx = self;
    g->edx = in_edx;
    COW_RET(0x1027504au);
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
    COW_AT(1027504a)
    d3 = (double)rdf32(arg1 + 0xcu);
    d4 = (double)rdf32(arg1 + 8u);
    d5 = (double)rdf32(arg1 + 4u);
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0;
    COW_RET(0x10275075u);
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 9, COW_IMG(0x103b27c8u), cow_dlo((double)rdf32(arg1)), cow_dhi((double)rdf32(arg1)), cow_dlo(d5), cow_dhi(d5), cow_dlo(d4), cow_dhi(d4), cow_dlo(d3), cow_dhi(d3));
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(10275075)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10275040(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027504au:
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
    case 0x10275075u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10275040(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10275040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
