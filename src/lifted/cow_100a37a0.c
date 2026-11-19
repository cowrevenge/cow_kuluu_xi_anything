/* f_0x100a37a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100a37a0(Guest* g)
{
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
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a37a8u:  goto E_100a37a8;
    case 0x100a37abu: self = g->ecx; in_edx = g->edx; goto E_100a37ab;
    case 0x100a37afu: self = g->ecx; in_edx = g->edx; goto E_100a37af;
    case 0x100a37d7u: self = g->ecx; in_edx = g->edx; goto E_100a37d7;
    default: break;
    }
#endif

    COW_AT(100a37a0)
    if ((uint8_t)arg2 < 0xcu) goto L_100a37ab;
    COW_AT(100a37a8)
    return arg2 & 0xffffff00u;
L_100a37ab: ;
    COW_AT(100a37ab)
    if ((uint8_t)arg2 > 3u) goto L_100a37d7;
    COW_AT(100a37af)
    t1 = (uint8_t)arg2 + 0x1b2u;
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, t1);
    t3 = g->ecx;
    t4 = g->edx;
    g->eax = arg1;
    t5 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1, COW_IMG(0x1034f7e0u), t2, 0xcu, t1);
    return (t5 & 0xffffff00u) | 1u;
L_100a37d7: ;
    COW_AT(100a37d7)
    g->eax = (uint8_t)arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1b6u);
    t7 = g->edx;
    t8 = cow_cdecl(g, COW_IMG(0x10312031u), 2, arg1, t6);
    return (t8 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a37a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a37a8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        g->esp = sp0;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a37abu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a37afu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100a37d7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a37a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a37a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
