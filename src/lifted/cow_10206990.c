/* f_0x10206990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10206990(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10206998u: in_edx = g->edx; goto E_10206998;
    case 0x102069b9u: edx = g->edx; goto E_102069b9;
    default: break;
    }
#endif

    COW_AT(10206990)
    if ((uint8_t)arg2 == 0u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(10206998)
        t1 = (in_edx & 0xffff0000u) | rd16(rd32(rd32(COW_IMG(0x10664420u)) + 0xcu));
        t2 = (rd32(rd32(COW_IMG(0x10664420u)) + 0xcu) & 0xffffff00u) | rd8(rd32(rd32(COW_IMG(0x10664420u)) + 0xcu) + 2u);
        g->eax = t2;
        g->edx = rd32(rd32(COW_IMG(0x10664420u)));
        t3 = rd32(COW_IMG(0x10664420u));
        t4 = rd32(rd32(COW_IMG(0x10664420u)));
        g->esp = sp0;
        t5 = cow_thiscall_cdecl(g, rd32(t4 + 0x54u), t3, 3, t2, t1, 0u);
        t6 = g->ecx;
        t7 = g->edx;
        g->edx = t7;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x100f0e70u), 1, t5);
        t8 = g->edx;
        edx = t8;
    }
    COW_AT(102069b9)
    g->eax = rd32(COW_IMG(0x10664420u));
    t9 = rd32(COW_IMG(0x10664420u));
    g->esp = sp0;
    t10 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t9);
    t11 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10664420u)) + 0xau);
    t12 = cow_call_regs(g, COW_IMG(0x101f7080u), t10, rd32(COW_IMG(0x10663740u)), t11, 0, 2, t11, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10206990(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10206998u:
    {
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102069b9u:
    {
        uint32_t edx;
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
void cow_adapter_10206990(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10206990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
