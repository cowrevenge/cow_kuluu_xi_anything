/* f_0x101957b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101957b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101957d8u: eax = g->eax; edx = g->edx; esi = g->esi; zf = g->zf; sf = g->sf; loc_c = rd32(sp0 - 0xcu); goto E_101957d8;
    case 0x101957eau: eax = g->eax; edx = g->edx; esi = g->esi; zf = g->zf; sf = g->sf; goto E_101957ea;
    case 0x101957ecu: eax = g->eax; edx = g->edx; esi = g->esi; zf = g->zf; sf = g->sf; goto E_101957ec;
    case 0x101957f8u: eax = g->eax; edx = g->edx; esi = g->esi; zf = g->zf; sf = g->sf; loc_c = rd32(sp0 - 0xcu); goto E_101957f8;
    default: break;
    }
#endif

    COW_AT(101957b0)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 8u, rd32(arg1));
    wr32(sp0 - 0x10u, sp0 - 8u);
    t1 = rd32(arg1 + 4u);
    wr32(sp0 - 4u, t1);
    g->eax = sp0 - 8u;
    g->edx = t1;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x10310e67u), 1, sp0 - 8u);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        loc_c = in_esi;
        goto L_101957f8;
    }
    eax = t2;
    edx = t3;
    esi = t2;
    loc_c = in_esi;
L_101957d8: ;
    COW_AT(101957d8)
    wr32(sp0 - 0x10u, sp0 + 8u);
    wr32(sp0 - 0x14u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x10310e72u), 2, esi, sp0 + 8u);
    t5 = g->edx;
    if ((int32_t)t4 < 0)
    {
        eax = t4;
        loc_c = rd32(sp0 - 0xcu);
        goto L_101957f8;
    }
    eax = t4;
    edx = t5;
    zf = t4 == 0u;
    sf = (int32_t)t4 < 0;
    COW_AT(101957ea)
    if (zf || sf)
    {
        loc_c = rd32(sp0 - 0xcu);
        goto L_101957d8;
    }
    COW_AT(101957ec)
    g->esi = rd32(sp0 - 0xcu);
    return 1u;
L_101957f8: ;
    COW_AT(101957f8)
    g->esi = loc_c;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101957b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101957d8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101957eau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x101957ecu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x101957f8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101957b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101957b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
