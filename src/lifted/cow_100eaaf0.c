/* f_0x100eaaf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100eaaf0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100eaaf8u: self = g->ecx; goto E_100eaaf8;
    case 0x100eab0eu:  goto E_100eab0e;
    default: break;
    }
#endif

    COW_AT(100eaaf0)
    if ((uint8_t)arg1 != 7u) goto L_100eab0e;
    COW_AT(100eaaf8)
    g->eax = arg1;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x104ca3f8u)), self, 5, 7u, 0u, 0u, 0u, 0u);
    return (t1 & 0xffffff00u) | 1u;
L_100eab0e: ;
    COW_AT(100eab0e)
    g->eax = arg1;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x100eaa20u), 5, arg1, arg2, arg3, arg4, arg5);
    return (t2 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100eaaf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100eaaf8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        self = g->ecx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eab0eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100eaaf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100eaaf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
