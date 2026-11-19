/* f_0x101f8d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_101f8d50(Guest* g)
{
    uint32_t eax;
    uint32_t loc_4;
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
    case 0x101f8d5du: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f8d5d;
    case 0x101f8d77u: eax = g->eax; self = g->esi; goto E_101f8d77;
    case 0x101f8d95u: eax = g->eax; loc_4 = rd32(sp0 - 4u); goto E_101f8d95;
    default: break;
    }
#endif

    COW_AT(101f8d50)
    wr32(sp0 - 4u, in_esi);
    if ((int32_t)rd32(self + 0xfcu) < 0)
    {
        loc_4 = in_esi;
    }
    else
    {
        eax = rd32(self + 0xfcu);
    COW_AT(101f8d5d)
        t1 = rd32(sp0 + 0x10u);
        wr32(sp0 - 8u, t1);
        t2 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0xcu, t2);
        wr32(sp0 - 0x10u, sp0 + 0x10u);
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        wr32(sp0 - 0x18u, eax);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x101f7570u), 3, eax, sp0 + 0xcu, sp0 + 0x10u);
    COW_AT(101f8d77)
        t3 = rd32(sp0 + 0x10u);
        wr32(sp0 - 8u, t3);
        t4 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0xcu, t4);
        wr32(sp0 - 0x10u, arg2);
        wr32(sp0 - 0x14u, arg1);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x101f8cf0u), self, 4, arg1, arg2, t4, t3);
        loc_4 = rd32(sp0 - 4u);
    }
    COW_AT(101f8d95)
    g->esi = loc_4;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f8d50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f8d5du:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101f8d77u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        wr32(sp0 - 0x10u, sp0 + 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101f8d95u:
    {
        uint32_t eax;
        uint32_t loc_4;
        eax = g->eax;
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
void cow_adapter_101f8d50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101f8d50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
