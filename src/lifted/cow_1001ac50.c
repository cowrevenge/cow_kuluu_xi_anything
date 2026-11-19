/* f_0x1001ac50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_1001ac50(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001ac6au: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1001ac6a;
    case 0x1001ac72u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1001ac72;
    case 0x1001ac9du: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1001ac9d;
    default: break;
    }
#endif

    COW_AT(1001ac50)
    wr32(sp0 - 4u, in_esi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t1);
    wr32(sp0 - 0xcu, 0x2bu);
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10073ba0u), 3, sp0 + 4u, 0x2bu, t1);
    t2 = g->edx;
    edx = t2;
    COW_AT(1001ac6a)
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(sp0 + 4u);
    COW_AT(1001ac72)
        t3 = rd32(sp0 + 0x20u);
        wr32(sp0 - 8u, t3);
        t4 = rd32(sp0 + 0x1cu);
        wr32(sp0 - 0xcu, t4);
        t5 = rd32(sp0 + 0x18u);
        wr32(sp0 - 0x10u, t5);
        t6 = rd32(sp0 + 0x14u);
        wr32(sp0 - 0x14u, t6);
        t7 = rd32(sp0 + 0x10u);
        wr32(sp0 - 0x18u, t7);
        t8 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x1cu, t8);
        t9 = rd32(sp0 + 8u);
        wr32(sp0 - 0x20u, t9);
        wr32(sp0 - 0x24u, eax);
        g->eax = eax;
        g->edx = t9;
        g->esp = sp0 - 4u;
        t10 = cow_thiscall(g, COW_IMG(0x1001acb0u), self, 8, eax, t9, t8, t7, t6, t5, t4, t3);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    COW_AT(1001ac9d)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001ac50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001ac6au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1001ac72u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1001ac9du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001ac50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1001ac50(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
