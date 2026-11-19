/* f_0x10317f7b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10317f7b(Guest* g)
{
    double d1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10317fb0u: g->ebp = rd32(sp0 - 4u); goto E_10317fb0;
    case 0x10317fb5u: g->ebp = rd32(sp0 - 4u); goto E_10317fb5;
    default: break;
    }
#endif

    COW_AT(10317f7b)
    d1 = fr(g, rdf64(COW_IMG(0x1034a2c8u)) - fr(g, fr(g, rdf64(COW_IMG(0x1034a2c8u)) / rdf64(COW_IMG(0x1034a2d0u))) * rdf64(COW_IMG(0x1034a2d0u))));
    if (!(d1 > rdf64(COW_IMG(0x1034a1e0u)))) goto L_10317fb5;
    COW_AT(10317fb0)
    return 1u;
L_10317fb5: ;
    COW_AT(10317fb5)
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10317f7b(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10317fb0u:
    {
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317fb5u:
    {
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10317f7b(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10317f7b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
