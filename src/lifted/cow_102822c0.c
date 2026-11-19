/* f_0x102822c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102822c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102822dbu: eax = g->eax; edx = g->edx; goto E_102822db;
    case 0x102822fdu: eax = g->eax; edx = g->edx; goto E_102822fd;
    case 0x10282307u: eax = g->eax; edx = g->edx; goto E_10282307;
    default: break;
    }
#endif

    COW_AT(102822c0)
    wr32(sp0 - 4u, sp0 + 4u);
    wr32(sp0 - 8u, 0u);
    t1 = rd32(COW_IMG(0x1099d638u) + rd32(sp0 + 4u) * 0x28u);
    wr32(sp0 - 0xcu, t1);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t1) + 0x3cu), rd32(t1), 3, t1, 0u, sp0 + 4u);
    COW_AT(102822db)
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    t2 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8fcu);
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 - 0x20u, t3);
    g->edx = t3;
    g->esp = sp0;
    cow_stdcall(g, COW_IMG(0x102d4535u), 8, t3, 0u, 0u, t2, 0u, 0u, 0u, 0u);
    t4 = g->edx;
    edx = t4;
    COW_AT(102822fd)
    t5 = rd32(sp0 + 4u);
    wr32(sp0 - 4u, t5);
    g->eax = t5;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_thiscall(g, rd32(rd32(t5) + 8u), rd32(t5), 1, t5);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(10282307)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102822c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102822dbu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102822fdu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10282307u:
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
void cow_adapter_102822c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102822c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
