/* f_0x1022de70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022de70(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022de87u: self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1022de87;
    case 0x1022deaeu:  goto E_1022deae;
    default: break;
    }
#endif

    COW_AT(1022de70)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10221be0u), self, 2, sp0 - 4u, sp0 - 8u);
    COW_AT(1022de87)
    wr32(sp0 - 0x10u, 0x80808080u);
    wr32(sp0 - 0x14u, 0u);
    t1 = rd32(COW_IMG(0x1066833cu) + rd32(self + 0x6cu) * 4u);
    wr32(sp0 - 0x18u, t1);
    t2 = rd32(sp0 - 8u) + 0xau;
    wr32(sp0 - 0x1cu, t2);
    t3 = rd32(sp0 - 4u) + 0x3cu;
    wr32(sp0 - 0x20u, t3);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10129f00u), 5, t3, t2, t1, 0u, 0x80808080u);
    COW_AT(1022deae)
    g->esi = rd32(sp0 - 0xcu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022de70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022de87u:
    {
        uint32_t self;
        uint32_t in_esi;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1022deaeu:
    {
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022de70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1022de70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
