/* f_0x102511d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102511d0(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102511dbu: eax = g->eax; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102511db;
    case 0x102511eau: eax = g->eax; esi = g->esi; goto E_102511ea;
    case 0x102511f4u: eax = g->eax; esi = g->esi; goto E_102511f4;
    case 0x102511fau: eax = g->eax; esi = g->esi; goto E_102511fa;
    case 0x1025120fu: eax = g->eax; esi = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1025120f;
    default: break;
    }
#endif

    COW_AT(102511d0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (!(rd8(rd32(sp0 + 4u)) & 1u))
    {
        loc_4 = self;
        loc_8 = in_esi;
    }
    else
    {
        esi = rd32(sp0 + 4u);
    COW_AT(102511db)
        wr32(sp0 - 0xcu, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 - 4u);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1026f510u), 2, sp0 - 4u, sp0 + 4u);
    COW_AT(102511ea)
        if ((int32_t)rd32(esi + 0xcu) < 0)
        {
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
        else
        {
            eax = rd32(esi + 0xcu);
    COW_AT(102511f4)
            if ((int32_t)eax >= (int32_t)rd32(sp0 + 4u))
            {
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
            }
            else
            {
    COW_AT(102511fa)
                d1 = (double)rdf32(sp0 + 8u);
                wrf32(eax * 0xc0u + rd32(sp0 - 4u) + 0x9cu, (float)d1);
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
            }
        }
    }
    COW_AT(1025120f)
    g->esi = loc_8;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102511d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102511dbu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x102511eau:
    {
        uint32_t eax;
        uint32_t esi;
        eax = g->eax;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102511f4u:
    {
        uint32_t eax;
        uint32_t esi;
        eax = g->eax;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102511fau:
    {
        uint32_t eax;
        uint32_t esi;
        eax = g->eax;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1025120fu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102511d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102511d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
