/* f_0x10008f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10008f00(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10008f09u: eax = g->eax; goto E_10008f09;
    case 0x10008f12u: eax = g->eax; goto E_10008f12;
    case 0x10008f1fu: eax = g->eax; goto E_10008f1f;
    default: break;
    }
#endif

    COW_AT(10008f00)
    if (rd32(COW_IMG(0x1045654cu)) == 0u) goto L_10008f1f;
    COW_AT(10008f09)
    if (rd32(COW_IMG(0x10456558u)) == 0u) goto L_10008f1f;
    eax = rd32(COW_IMG(0x10456558u));
    COW_AT(10008f12)
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, eax, arg1, 1, arg1);
    return t1;
L_10008f1f: ;
    COW_AT(10008f1f)
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10008f00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10008f09u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10008f12u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10008f1fu:
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
void cow_adapter_10008f00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10008f00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
