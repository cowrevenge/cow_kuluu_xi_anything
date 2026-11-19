/* f_0x10273f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10273f60(Guest* g)
{
    double d3;
    double d5;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10273f79u: edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10273f79;
    case 0x10273f8du: edx = g->edx; esi = g->esi; goto E_10273f8d;
    case 0x10273fabu: edx = g->edx; esi = g->esi; goto E_10273fab;
    case 0x10273fb8u: edx = g->edx; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_10273fb8;
    default: break;
    }
#endif

    COW_AT(10273f60)
    wr32(sp0 - 4u, in_esi);
    if ((rd8(rd32(arg1 + 0x10u) + rd32(sp0 + 8u) * 0xcu) & 2u) == 0u)
    {
        loc_4 = in_esi;
    }
    else
    {
        edx = rd32(arg1 + 0x10u);
        esi = rd32(arg1 + 0x10u) + rd32(sp0 + 8u) * 0xcu;
    COW_AT(10273f79)
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, sp0 + 8u);
        t1 = rd32(esi + 4u);
        wr32(sp0 - 0x18u, t1);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x1026f6f0u), 5, t1, sp0 + 8u, 0u, 0u, 0u);
    COW_AT(10273f8d)
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        t2 = rd32(sp0 + 8u);
        d3 = (double)rdf32(sp0 + 0xcu);
        wrf32(t2, (float)d3);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, sp0 + 8u);
        t4 = rd32(esi + 8u);
        wr32(sp0 - 0x2cu, t4);
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x1026f6f0u), 5, t4, sp0 + 8u, 0u, 0u, 0u);
    COW_AT(10273fab)
        d5 = (double)rdf32(sp0 + 0xcu);
        wrf32(rd32(sp0 + 8u), (float)d5);
        loc_4 = rd32(sp0 - 4u);
    }
    COW_AT(10273fb8)
    g->esi = loc_4;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10273f60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10273f79u:
    {
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10273f8du:
    {
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10273fabu:
    {
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x28u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10273fb8u:
    {
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        edx = g->edx;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10273f60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10273f60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
