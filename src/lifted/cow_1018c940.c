/* f_0x1018c940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018c940(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018c947u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1018c947;
    case 0x1018c94eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1018c94e;
    case 0x1018c954u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1018c954;
    case 0x1018c962u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1018c962;
    case 0x1018c96eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1018c96e;
    case 0x1018c975u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1018c975;
    default: break;
    }
#endif

    COW_AT(1018c940)
    if (rd32(self + 0xcu) == 0u)
    {
        edx = in_edx;
        goto L_1018c975;
    }
    ecx = rd32(self + 0xcu);
    COW_AT(1018c947)
    if (rd32(ecx + 4u) == 0u)
    {
        edx = in_edx;
        goto L_1018c975;
    }
    eax = rd32(ecx + 4u);
    COW_AT(1018c94e)
    if (rd32(eax) == 0u)
    {
        edx = in_edx;
        goto L_1018c975;
    }
    eax = rd32(eax);
    COW_AT(1018c954)
    if (!(rd32(eax + 0x120u) >> 9u & 1u))
    {
        edx = rd32(eax + 0x120u) >> 9u;
        goto L_1018c975;
    }
    COW_AT(1018c962)
    if (rd32(eax + 0x78u) != rd32(ecx + 8u))
    {
        edx = rd32(eax + 0x78u);
        goto L_1018c975;
    }
    edx = rd32(eax + 0x78u);
    COW_AT(1018c96e)
    g->edx = edx;
    return rd32(eax + 0xa0u);
L_1018c975: ;
    COW_AT(1018c975)
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018c940(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018c947u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1018c94eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1018c954u:
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
    case 0x1018c962u:
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
    case 0x1018c96eu:
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
    case 0x1018c975u:
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
void cow_adapter_1018c940(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1018c940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
