/* f_0x101d8800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101d8800(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d884bu: self = g->ecx; goto E_101d884b;
    case 0x101d885fu: self = g->ecx; goto E_101d885f;
    default: break;
    }
#endif

    COW_AT(101d8800)
    wr16(self + 0x898u, (uint16_t)arg1);
    wr32(self + 0x89cu, arg4);
    wr16(self + 0x89au, (uint16_t)arg2);
    wr16(COW_IMG(0x106633f0u), 0u);
    wr32(COW_IMG(0x106633f4u), 0u);
    wr16(COW_IMG(0x106633f8u), 0u);
    wr8(COW_IMG(0x106633fau), 0u);
    wr32(COW_IMG(0x106633fcu), 0u);
    if ((uint8_t)arg3 == 0u) goto L_101d885f;
    COW_AT(101d884b)
    t1 = rd16(self + 0x898u);
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x1020a9d0u), 0u, self, g->edx, 0, 6, 7u, t1, 0u, 0u, 0u, 0u);
    return t2;
L_101d885f: ;
    COW_AT(101d885f)
    t3 = rd16(self + 0x898u);
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t3, self, g->edx, 0, 6, 6u, t3, 0u, 0u, 0u, 0u);
    return t4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d8800(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d884bu:
    {
        uint32_t self;
        self = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = 0u;
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101d885fu:
    {
        uint32_t self;
        self = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101d8800(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101d8800(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
