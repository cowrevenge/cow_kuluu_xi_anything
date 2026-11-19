/* f_0x101c3e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101c3e40(Guest* g)
{
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 548u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c3e5fu:  goto E_101c3e5f;
    case 0x101c3e7eu:  goto E_101c3e7e;
    default: break;
    }
#endif

    COW_AT(101c3e40)
    wr32(sp0 - 0x204u, arg4);
    wr32(sp0 - 0x208u, 0x1ffu);
    wr32(sp0 - 0x20cu, sp0 - 0x200u);
    wr32(sp0 - 0x210u, arg2);
    g->esp = sp0 - 0x200u;
    cow_cdecl(g, COW_IMG(0x1030ff10u), 4, arg2, sp0 - 0x200u, 0x1ffu, arg4);
    COW_AT(101c3e5f)
    wr32(sp0 - 0x214u, arg1);
    wr32(sp0 - 0x218u, sp0 - 0x200u);
    wr32(sp0 - 0x21cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x220u, arg3);
    g->esp = sp0 - 0x20cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, arg3, COW_IMG(0x10350ff8u), sp0 - 0x200u, arg1, arg2);
    COW_AT(101c3e7e)
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c3e40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c3e5fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        g->esp = sp0 - 0x210u;
        wr32(sp0 - 0x210u, arg2);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101c3e7eu:
    {
        g->esp = sp0 - 0x220u;
        wr32(sp0 - 0x218u, sp0 - 0x200u);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c3e40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c3e40(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
