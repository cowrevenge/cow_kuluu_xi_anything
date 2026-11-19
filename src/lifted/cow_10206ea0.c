/* f_0x10206ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10206ea0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10206ea8u: eax = g->eax; edx = g->edx; goto E_10206ea8;
    case 0x10206ee9u: eax = g->eax; edx = g->edx; goto E_10206ee9;
    default: break;
    }
#endif

    COW_AT(10206ea0)
    if ((uint8_t)arg2 != 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
    COW_AT(10206ea8)
        g->edx = arg1;
        g->esp = sp0;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x10664428u))) + 0x58u), rd32(COW_IMG(0x10664428u)), 1, arg1);
        t1 = g->edx;
        g->eax = rd32(COW_IMG(0x10664428u));
        t2 = rd32(COW_IMG(0x10664428u));
        t3 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t2);
        t4 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10664428u)) + 8u);
        t5 = rd32(COW_IMG(0x10663740u));
        t6 = cow_call_regs(g, COW_IMG(0x101f7080u), t3, t5, t4, 0, 2, t4, 0u);
        t7 = g->ecx;
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x4cu);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    COW_AT(10206ee9)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10206ea0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10206ea8u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10206ee9u:
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
void cow_adapter_10206ea0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10206ea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
