/* f_0x1011bdc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1011bdc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011bdd5u: eax = g->eax; edx = g->edx; goto E_1011bdd5;
    case 0x1011bdebu: eax = g->eax; edx = g->edx; goto E_1011bdeb;
    case 0x1011be01u: eax = g->eax; edx = g->edx; goto E_1011be01;
    default: break;
    }
#endif

    COW_AT(1011bdc0)
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t1) + 0xc8u), rd32(t1), 3, t1, 0x1bu, 1u);
    COW_AT(1011bdd5)
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t2) + 0xc8u), rd32(t2), 3, t2, 0x13u, 2u);
    COW_AT(1011bdeb)
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t3;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t4 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0;
    t5 = cow_thiscall(g, rd32(rd32(t3) + 0xc8u), rd32(t3), 3, t3, 0x14u, 2u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(1011be01)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011bdc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011bdd5u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011bdebu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011be01u:
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
void cow_adapter_1011bdc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011bdc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
