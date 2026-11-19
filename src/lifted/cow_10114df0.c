/* f_0x10114df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10114df0(Guest* g)
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10114e02u: eax = g->eax; edx = g->edx; goto E_10114e02;
    case 0x10114e12u: eax = g->eax; edx = g->edx; goto E_10114e12;
    case 0x10114e21u: eax = g->eax; edx = g->edx; goto E_10114e21;
    default: break;
    }
#endif

    COW_AT(10114df0)
    g->edx = in_edx;
    t1 = cow_thiscall(g, COW_IMG(0x100dbe10u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x101c8d10u), 1, t1);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_10114e21;
    }
    eax = t4;
    COW_AT(10114e02)
    t6 = cow_divs(g, rd32(eax + 4u), 0xau);
    t7 = cow_mods(g, rd32(eax + 4u), 0xau);
    if ((int32_t)t7 >= 5)
    {
        eax = t6;
        edx = t7;
        goto L_10114e21;
    }
    eax = t6;
    edx = t7;
    COW_AT(10114e12)
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x101092c0u), eax, arg4, g->edx, 0, 1, COW_IMG(0x10354010u));
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_10114e21: ;
    COW_AT(10114e21)
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x101092c0u), eax, arg4, g->edx, 0, 1, COW_IMG(0x10353b90u));
    t11 = g->edx;
    g->edx = t11;
    return t10;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10114df0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10114e02u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10114e12u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10114e21u:
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
void cow_adapter_10114df0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10114df0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
