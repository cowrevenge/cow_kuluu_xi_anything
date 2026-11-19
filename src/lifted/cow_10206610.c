/* f_0x10206610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10206610(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020661cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1020661c;
    case 0x1020662du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1020662d;
    default: break;
    }
#endif

    COW_AT(10206610)
    g->edx = in_edx;
    cow_thiscall(g, COW_IMG(0x10206420u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(t1 + 0x38u) == 0u)
    {
        eax = rd32(t1 + 0x38u);
        edx = t2;
        goto L_1020662d;
    }
    eax = rd32(t1 + 0x38u);
    ecx = t1;
    edx = t2;
    COW_AT(1020661c)
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x102064f0u), eax, ecx, edx, 0, 1, 0u);
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x1062193cu));
    wr8(t4 + 0x4cu, 0u);
    g->edx = t3;
    return t4;
L_1020662d: ;
    COW_AT(1020662d)
    wr8(rd32(COW_IMG(0x1062193cu)) + 0x4cu, 0u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10206610(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020661cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1020662du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
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
void cow_adapter_10206610(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10206610(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
