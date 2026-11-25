/* f_0x10055bf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10055bf0(Guest* g)
{
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10055c31u: esi = g->esi; in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x18u); goto E_10055c31;
    case 0x10055c68u: esi = g->esi; in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x18u); goto E_10055c68;
    default: break;
    }
#endif

    COW_AT(10055bf0)
    t1 = rd32(self + 0xcu);
    t2 = rd32(self + 4u);
    t3 = rd32(self + 8u);
    t4 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t5 = rd32(COW_IMG(0x1047cf7cu));
    t6 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    t7 = rd32(self);
    wr32(t5 + 0xa90u, t4);
    g->esp = sp0 - 0x18u;
    COW_RET(0x10055c31u);
    cow_thiscall(g, COW_IMG(0x100746a0u), t6, 0);
    esi = t6;
    loc_14 = t1;
    loc_10 = t7;
    loc_c = t2;
    loc_8 = t3;
    COW_AT(10055c31)
    wr32(esi + 0x3cu, 0x3f800000u);
    wr32(esi + 0x28u, loc_14);
    wr32(esi + 0x30u, loc_10);
    wr32(esi + 0x14u, loc_14);
    wr32(esi, loc_14);
    wr32(esi + 0x34u, loc_c);
    wr32(esi + 0x38u, loc_8);
    g->esp = sp0 - 0x20u;
    COW_RET(0x10055c68u);
    cow_stdcall(g, COW_IMG(0x10044850u), 0);
    COW_AT(10055c68)
    t8 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t9 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t9 + 0xa90u, t8);
    wr32(t8 * 4u + t9 + 0xa10u, esi);
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10055bf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10055c31u:
    {
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10055c68u:
    {
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10055bf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10055bf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
