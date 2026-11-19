/* f_0x10282490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10282490(Guest* g)
{
    uint32_t eax;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102824a2u: eax = g->eax; self = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102824a2;
    case 0x102824abu: eax = g->eax; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102824ab;
    case 0x102824c5u: eax = g->eax; self = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102824c5;
    case 0x102824ddu: eax = g->eax; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102824dd;
    default: break;
    }
#endif

    COW_AT(10282490)
    if (arg1 == rd32(rd32(COW_IMG(0x1099d200u)) + 0x914u)) goto L_102824dd;
    COW_AT(102824a2)
    if (arg1 == 0u)
    {
        eax = rd32(COW_IMG(0x1066941cu));
        goto L_102824c5;
    }
    eax = rd32(COW_IMG(0x1066941cu));
    COW_AT(102824ab)
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0xeu, 1u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x914u, arg1);
    g->esi = in_esi;
    return;
L_102824c5: ;
    COW_AT(102824c5)
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), self, 3, eax, 0xeu, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x914u, arg1);
L_102824dd: ;
    COW_AT(102824dd)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10282490(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102824a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102824abu:
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
    case 0x102824c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102824ddu:
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
void cow_adapter_10282490(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10282490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
