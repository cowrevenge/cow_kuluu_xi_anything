/* f_0x102ef252 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102ef252(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ef25du: eax = g->eax; in_edx = g->edx; goto E_102ef25d;
    case 0x102ef266u: eax = g->eax; edx = g->edx; goto E_102ef266;
    default: break;
    }
#endif

    COW_AT(102ef252)
    if (rd32(arg1 + 0x44u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0x44u);
    COW_AT(102ef25d)
        g->edx = in_edx;
        g->esp = sp0;
        cow_thiscall_cdecl(g, eax, arg1, 2, arg1, arg2);
        t1 = g->edx;
        edx = t1;
    }
    COW_AT(102ef266)
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ef252(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ef25du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef266u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef252(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ef252(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
