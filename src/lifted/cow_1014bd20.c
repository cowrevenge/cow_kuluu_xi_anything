/* f_0x1014bd20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1014bd20(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014bd27u: eax = g->eax; in_edx = g->edx; goto E_1014bd27;
    case 0x1014bd2fu: in_edx = g->edx; goto E_1014bd2f;
    case 0x1014bd3fu: eax = g->eax; edx = g->edx; goto E_1014bd3f;
    case 0x1014bd59u: eax = g->eax; edx = g->edx; goto E_1014bd59;
    default: break;
    }
#endif

    COW_AT(1014bd20)
    if (arg1 != 1u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(1014bd27)
        if (arg5 == 0u)
        {
            edx = in_edx;
        }
        else
        {
    COW_AT(1014bd2f)
            g->eax = arg5;
            g->edx = in_edx;
            g->esp = sp0;
            t1 = cow_thiscall(g, COW_IMG(0x10161720u), rd32(COW_IMG(0x10578448u)), 1, arg5);
            t2 = g->edx;
            if (t1 == 0u)
            {
                edx = t2;
            }
            else
            {
                eax = t1;
                edx = t2;
    COW_AT(1014bd3f)
                g->edx = edx;
                g->esp = sp0;
                cow_cdecl(g, COW_IMG(0x10129f00u), 5, arg2, arg3, eax, 0u, 0x80808080u);
                t3 = g->edx;
                edx = t3;
            }
        }
    }
    COW_AT(1014bd59)
    g->edx = edx;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014bd20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014bd27u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014bd2fu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1014bd3fu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014bd59u:
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
void cow_adapter_1014bd20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1014bd20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
