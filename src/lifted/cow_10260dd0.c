/* f_0x10260dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10260dd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10260dfcu: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_10260dfc;
    case 0x10260e09u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_10260e09;
    default: break;
    }
#endif

    COW_AT(10260dd0)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327898u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
        loc_c = t1;
    }
    else
    {
        eax = rd32(self + 0x14u);
        loc_c = t1;
    COW_AT(10260dfc)
        wr32(sp0 - 0x18u, eax);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t2 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t3 = g->edx;
        wr32(self + 0x14u, 0u);
        eax = t2;
        edx = t3;
        loc_c = rd32(sp0 - 0xcu);
    }
    COW_AT(10260e09)
    wr32(sp0 - 4u, 0xffffffffu);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t4 = cow_fastcall(g, COW_IMG(0x10265980u), self + 4u, edx, 0);
    t5 = g->edx;
    t6 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t6);
    g->esi = in_esi;
    g->edx = t5;
    return t4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10260dd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10260dfcu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10260e09u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10260dd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10260dd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
