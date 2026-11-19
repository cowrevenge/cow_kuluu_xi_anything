/* f_0x1002b390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1002b390(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002b39eu: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1002b39e;
    case 0x1002b3dau: eax = g->eax; goto E_1002b3da;
    default: break;
    }
#endif

    COW_AT(1002b390)
    wr32(sp0 - 0x10u, in_esi);
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x10035290u), 0);
    eax = t1;
    COW_AT(1002b39e)
    t2 = rd32(arg1 * 0x12u + eax + 6u);
    wr32(sp0 - 0xcu, t2);
    t3 = rd32(arg1 * 0x12u + eax + 0xau);
    wr32(sp0 - 8u, t3);
    wr32(sp0 - 0x14u, sp0 - 0xcu);
    t4 = rd32(arg1 * 0x12u + eax + 0xeu);
    wr32(sp0 - 4u, t4);
    wr32(sp0 - 0x18u, arg2);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10028230u), rd32(self + 0x14u) + (uint32_t)(int16_t)rd16(arg1 * 0x12u + eax) * 0x40u, 2, arg2, sp0 - 0xcu);
    COW_AT(1002b3da)
    g->esi = rd32(sp0 - 0x10u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1002b390(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002b39eu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1002b3dau:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1002b390(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1002b390(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
