/* f_0x100d93e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100d93e0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_frame(g, sp0, 412u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d93f6u: eax = g->eax; goto E_100d93f6;
    default: break;
    }
#endif

    COW_AT(100d93e0)
    wr32(sp0 - 0x194u, sp0 - 0x190u);
    wr32(sp0 - 0x198u, 0x101u);
    g->eax = sp0 - 0x190u;
    g->esp = sp0 - 0x190u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329478u)), 2, 0x101u, sp0 - 0x190u);   /* ws2_32.dll!WSAStartup */
    eax = t1;
    COW_AT(100d93f6)
    return eax != 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d93e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d93f6u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x190u;
        wr32(sp0 - 0x194u, sp0 - 0x190u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d93e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d93e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
