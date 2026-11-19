/* f_0x100ef8f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100ef8f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    cow_frame(g, sp0, 16u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ef907u: ecx = g->ecx; goto E_100ef907;
    case 0x100ef912u: eax = g->eax; ecx = g->ecx; goto E_100ef912;
    case 0x100ef919u: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); goto E_100ef919;
    default: break;
    }
#endif

    COW_AT(100ef8f0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 4u, 0u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u) == 0u)
    {
        eax = 0u;
        loc_4 = 0u;
    }
    else
    {
        ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    COW_AT(100ef907)
        wr32(sp0 - 8u, sp0 - 4u);
        wr32(sp0 - 0xcu, ecx);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x101164b0u), 2, ecx, sp0 - 4u);
    COW_AT(100ef912)
        eax = rd32(sp0 - 4u);
        loc_4 = rd32(sp0 - 4u);
    }
    COW_AT(100ef919)
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ef8f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ef907u:
    {
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 4u;
        g->eax = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ef912u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ef919u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ef8f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ef8f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
