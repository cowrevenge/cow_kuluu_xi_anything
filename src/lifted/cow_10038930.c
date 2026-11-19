/* f_0x10038930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10038930(Guest* g)
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
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10038969u: eax = g->eax; edx = g->edx; goto E_10038969;
    case 0x10038977u: eax = g->eax; edx = g->edx; goto E_10038977;
    case 0x1003897du: eax = g->eax; edx = g->edx; goto E_1003897d;
    case 0x100389a1u: eax = g->eax; edx = g->edx; goto E_100389a1;
    default: break;
    }
#endif

    COW_AT(10038930)
    t1 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047b960u), 0u);
    g->edx = in_edx;
    t2 = cow_thiscall(g, COW_IMG(0x1000a6e0u), t1, 5, 0x100u, 0x100u, COW_IMG(0x1047b960u), 1u, 0u);
    t3 = g->edx;
    wr32(COW_IMG(0x1047b958u), t2);
    if (rd32(rd32(COW_IMG(0x104566e8u)) + 0x18u) == 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
        goto L_100389a1;
    }
    edx = t3;
    COW_AT(10038969)
    t4 = rd32(COW_IMG(0x10456d5cu));
    wr32(COW_IMG(0x1047b964u), t4);
    if (t4 == 0u)
    {
        eax = t4;
    }
    else
    {
        eax = t4;
    COW_AT(10038977)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t5 = cow_thiscall(g, rd32(rd32(eax) + 4u), rd32(eax), 1, eax);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    COW_AT(1003897d)
    g->eax = eax;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x1000a6e0u), rd32(COW_IMG(0x1045666cu)), 5, 0x100u, 0x100u, COW_IMG(0x1047b964u), 1u, 0u);
    wr32(COW_IMG(0x1047b95cu), t7);
    return t7;
L_100389a1: ;
    COW_AT(100389a1)
    wr32(COW_IMG(0x1047b95cu), 0u);
    wr32(COW_IMG(0x1047b964u), 0u);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10038930(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10038969u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10038977u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1003897du:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100389a1u:
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
void cow_adapter_10038930(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10038930(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
