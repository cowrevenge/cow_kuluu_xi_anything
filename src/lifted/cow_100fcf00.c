/* f_0x100fcf00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_100fcf00(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100fcf0au: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100fcf0a;
    case 0x100fcf15u: ecx = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100fcf15;
    case 0x100fcf24u: ecx = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100fcf24;
    default: break;
    }
#endif

    COW_AT(100fcf00)
    if ((uint8_t)arg1 >= 7u) goto L_100fcf24;
    COW_AT(100fcf0a)
    g->ebx = arg1;
    g->eax = in_eax;
    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x100fcdd0u), self, in_edx, 0);
    if (t1 == 0u) goto L_100fcf24;
    ecx = t1;
    COW_AT(100fcf15)
    g->ebx = in_ebx;
    return rd16(ecx + (uint8_t)arg1 * 4u + 0x7cu);
L_100fcf24: ;
    COW_AT(100fcf24)
    g->ebx = in_ebx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100fcf00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100fcf0au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fcf15u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        ecx = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fcf24u:
    {
        uint32_t ecx;
        uint32_t in_ebx;
        ecx = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100fcf00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100fcf00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
