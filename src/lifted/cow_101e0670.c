/* f_0x101e0670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e0670(Guest* g)
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
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e0678u: self = g->ecx; in_edx = g->edx; goto E_101e0678;
    case 0x101e0690u: eax = g->eax; edx = g->edx; goto E_101e0690;
    default: break;
    }
#endif

    COW_AT(101e0670)
    if ((int32_t)arg1 <= 0)
    {
        eax = arg1;
        edx = in_edx;
    }
    else
    {
    COW_AT(101e0678)
        t1 = (self & 0xffff0000u) | rd16(arg2);
        t2 = (in_edx & 0xffffff00u) | rd8(arg2 + 2u);
        g->eax = arg2;
        g->edx = t2;
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x101e0d30u), rd32(COW_IMG(0x106634acu)), 3, t2, t1, arg1);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    COW_AT(101e0690)
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, rd32(COW_IMG(0x10578204u)), edx, 0, 4, 0u, 0u, 0u, 0u);
    t5 = g->edx;
    t6 = rd32(rd32(COW_IMG(0x106634acu)) + 8u);
    g->eax = rd32(COW_IMG(0x106634acu));
    t7 = rd32(COW_IMG(0x106634acu));
    t8 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t5, 2, t6, 0u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e0670(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e0678u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101e0690u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0670(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101e0670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
