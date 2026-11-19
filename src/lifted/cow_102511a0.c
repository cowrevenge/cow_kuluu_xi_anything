/* f_0x102511a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102511a0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102511aau: eax = g->eax; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102511aa;
    case 0x102511b1u: eax = g->eax; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102511b1;
    case 0x102511c1u: eax = g->eax; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102511c1;
    case 0x102511c7u: eax = g->eax; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102511c7;
    default: break;
    }
#endif

    COW_AT(102511a0)
    if (rd8(arg1) & 1u)
    {
    COW_AT(102511aa)
        if ((int32_t)rd32(arg1 + 4u) >= 0)
        {
            eax = rd32(arg1 + 4u);
    COW_AT(102511b1)
            g->eax = eax;
            g->esp = sp0 - 4u;
            t1 = cow_thiscall(g, COW_IMG(0x101c4a30u), rd32(COW_IMG(0x10662dccu)), 1, eax);
            if ((uint8_t)t1 != 0u)
            {
    COW_AT(102511c1)
                t2 = (rd32(arg1) & 0xffffff00u) | (uint8_t)(rd32(arg1) | 0x20u);
                wr32(arg1, t2);
            }
        }
    }
    COW_AT(102511c7)
    g->esi = in_esi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102511a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102511aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102511b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102511c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102511c7u:
    {
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102511a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102511a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
