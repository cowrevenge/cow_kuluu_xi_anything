/* f_0x10262020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10262020(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026204fu: self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1026204f;
    case 0x10262060u: self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10262060;
    default: break;
    }
#endif

    COW_AT(10262020)
    wr32(self + 8u, arg1);
    wr32(self + 4u, 0u);
    wr32(self + 0x10u, 1u);
    wr32(self, COW_IMG(0x10340780u));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(arg1 + 0xcu) + 4u), rd32(arg1 + 0xcu), 1, arg1 + 0xcu);
    if (arg2 != 0u) goto L_10262060;
    COW_AT(1026204f)
    g->eax = arg2;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x10u), rd32(self + 8u), 0);
    wr32(self + 0xcu, t1);
    g->esi = in_esi;
    return self;
L_10262060: ;
    COW_AT(10262060)
    t2 = rd32(arg2 + 4u);
    wr32(self + 4u, t2);
    t3 = rd32(arg2 + 0xcu);
    wr32(self + 0xcu, t3);
    g->esi = in_esi;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10262020(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026204fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_esi;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10262060u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_esi;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10262020(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10262020(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
