/* f_0x10257510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10257510(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10257518u: eax = g->eax; goto E_10257518;
    case 0x1025751bu: eax = g->eax; edx = g->edx; goto E_1025751b;
    case 0x10257528u: eax = g->eax; edx = g->edx; goto E_10257528;
    case 0x1025752bu: edx = g->edx; goto E_1025752b;
    case 0x10257533u: eax = g->eax; edx = g->edx; goto E_10257533;
    case 0x10257536u: edx = g->edx; goto E_10257536;
    case 0x10257542u: eax = g->eax; edx = g->edx; goto E_10257542;
    case 0x10257545u: eax = g->eax; edx = g->edx; goto E_10257545;
    default: break;
    }
#endif

    COW_AT(10257510)
    if (arg1 != 0u) goto L_1025751b;
    COW_AT(10257518)
    return 0u;
L_1025751b: ;
    COW_AT(1025751b)
    if (arg2 < rd16(arg1)) goto L_1025752b;
    edx = rd16(arg1);
    COW_AT(10257528)
    g->edx = edx;
    return 0u;
L_1025752b: ;
    COW_AT(1025752b)
    if (rd32(arg1 + arg2 * 8u + 8u) == 0u)
    {
        edx = rd32(arg1 + arg2 * 8u + 8u);
        goto L_10257536;
    }
    edx = rd32(arg1 + arg2 * 8u + 8u);
    COW_AT(10257533)
    g->edx = edx;
    return 0u;
L_10257536: ;
    COW_AT(10257536)
    if (rd16(arg1 + rd32(arg1 + arg2 * 8u + 4u)) == 1u)
    {
        eax = arg1 + rd32(arg1 + arg2 * 8u + 4u);
        goto L_10257545;
    }
    COW_AT(10257542)
    g->edx = edx;
    return 0u;
L_10257545: ;
    COW_AT(10257545)
    g->edx = edx;
    return eax + 0x1cu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10257510(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10257518u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1025751bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10257528u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1025752bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = arg2;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10257533u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10257536u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = arg2;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10257542u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10257545u:
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
void cow_adapter_10257510(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10257510(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
