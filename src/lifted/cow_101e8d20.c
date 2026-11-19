/* f_0x101e8d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101e8d20(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e8d4cu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101e8d4c;
    case 0x101e8d6au: eax = g->eax; edx = g->edx; self = g->esi; goto E_101e8d6a;
    case 0x101e8d7cu: eax = g->eax; edx = g->edx; self = g->esi; goto E_101e8d7c;
    case 0x101e8d8au: eax = g->eax; edx = g->edx; goto E_101e8d8a;
    default: break;
    }
#endif

    COW_AT(101e8d20)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 8u, arg1);
    wr32(sp0 - 0x10u, 0u);
    t1 = (uint32_t)(int16_t)rd16(self + 0x14u);
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, arg2, 0u);
    eax = t2;
    COW_AT(101e8d4c)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    t3 = (uint32_t)(int16_t)rd16(self + 0x14u);
    wr32(sp0 - 4u, t3);
    wr32(sp0 - 0x1cu, 1u);
    t4 = rd32(self + 8u);
    wr32(sp0 - 0x20u, t4);
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t4, 1u, 1u, 0u, 0u);
    t5 = g->edx;
    edx = t5;
    COW_AT(101e8d6a)
    t6 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t6);
    t7 = rd32(sp0 - 8u);
    wr32(sp0 - 0x14u, t7);
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x10119110u), t6, rd32(self + 8u), g->edx, 0, 2, t7, t6);
    eax = t8;
    COW_AT(101e8d7c)
    t9 = rd32(self + 8u);
    wr32(sp0 - 0x10u, t9);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x1015e530u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, t9);
    COW_AT(101e8d8a)
    g->esi = rd32(sp0 - 0xcu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e8d20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e8d4cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 8u, arg1);
        (void)sp0;
        return 1;
    }
    case 0x101e8d6au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101e8d7cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101e8d8au:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8d20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101e8d20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
