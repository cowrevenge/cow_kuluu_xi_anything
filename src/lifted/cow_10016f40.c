/* f_0x10016f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10016f40(Guest* g)
{
    uint32_t eax;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10016f49u: eax = g->eax; self = g->ecx; goto E_10016f49;
    case 0x10016f52u: eax = g->eax; self = g->ecx; goto E_10016f52;
    case 0x10016f57u: eax = g->eax; goto E_10016f57;
    default: break;
    }
#endif

    COW_AT(10016f40)
    if (rd32(COW_IMG(0x10456a34u)) != 0u)
    {
    COW_AT(10016f49)
        if (rd32(COW_IMG(0x10456a40u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10456a40u));
    COW_AT(10016f52)
            g->esp = sp0;
            cow_thiscall_cdecl(g, eax, self, 1, 1u);
        }
    }
    COW_AT(10016f57)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10016f40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10016f49u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10016f52u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10016f57u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10016f40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10016f40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
