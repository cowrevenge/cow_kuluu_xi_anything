/* f_0x10159420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10159420(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015942fu: eax = g->eax; goto E_1015942f;
    case 0x10159432u: eax = g->eax; goto E_10159432;
    default: break;
    }
#endif

    COW_AT(10159420)
    if (rd32(COW_IMG(0x10578770u) + arg1 * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10578770u) + arg1 * 4u);
        goto L_10159432;
    }
    eax = rd32(COW_IMG(0x10578770u) + arg1 * 4u);
    COW_AT(1015942f)
    return eax & 0xffffff00u;
L_10159432: ;
    COW_AT(10159432)
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, eax, arg1, 2, arg1, arg2);
    return (t1 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10159420(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015942fu:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10159432u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10159420(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10159420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
