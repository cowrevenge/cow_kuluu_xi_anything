/* f_0x101f8650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101f8650(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 272u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f8665u: self = g->ecx; edx = g->edx; goto E_101f8665;
    case 0x101f86a2u: edx = g->edx; goto E_101f86a2;
    default: break;
    }
#endif

    COW_AT(101f8650)
    if ((uint32_t)(int16_t)rd16(self + 0x108u) != arg1)
    {
        edx = (uint32_t)(int16_t)rd16(self + 0x108u);
    COW_AT(101f8665)
        wr32(sp0 - 0x104u, 1u);
        wr32(sp0 - 0x108u, arg1);
        wr16(self + 0x108u, (uint16_t)arg1);
        g->eax = arg1;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0xf8u;
        t1 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, arg1, 1u, rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu));
        t2 = g->ecx;
        t3 = g->edx;
        wr32(sp0 - 0x104u, t1);
        wr32(sp0 - 0x108u, 7u);
        wr32(sp0 - 0x10cu, 0xau);
        g->ecx = t2;
        g->edx = t3;
        g->esp = sp0 - 0x104u;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 7u);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x108u, t4);
        wr32(sp0 - 0x10cu, sp0 - 0x100u);
        g->eax = sp0 - 0x100u;
        g->edx = t6;
        g->esp = sp0 - 0xf8u;
        t7 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t4, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu));
        t8 = g->edx;
        wr32(sp0 - 0x104u, sp0 - 0x100u);
        g->esp = sp0 - 0x100u;
        cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x100u);
    }
    COW_AT(101f86a2)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f8650(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f8665u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f86a2u:
    {
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f8650(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101f8650(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
