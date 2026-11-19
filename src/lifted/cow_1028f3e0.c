/* f_0x1028f3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1028f3e0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028f419u: eax = g->eax; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028f419;
    default: break;
    }
#endif

    COW_AT(1028f3e0)
    t1 = rd32(arg2 * 0x30u + rd32(arg1 + 0x40u) + 4u) + 1u;
    t2 = rd32(arg2 * 0x30u + rd32(arg1 + 0x40u) + 8u);
    t3 = rd32(arg1 + 0x40u);
    t4 = rd32(arg2 * 0x30u + rd32(arg1 + 0x40u) + 4u);
    wr32(arg2 * 0x30u + t3 + 4u, t1);
    g->eax = t1;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t1 * 4u, 4, t2, t1 * 4u, COW_IMG(0x103ba694u), 0x2c2u);
    eax = t5;
    esi = arg2 * 0x30u + t3;
    edi = t4;
    COW_AT(1028f419)
    wr32(esi + 8u, eax);
    wr32(eax + edi * 4u, arg3);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028f3e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028f419u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028f3e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1028f3e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
