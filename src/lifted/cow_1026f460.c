/* f_0x1026f460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1026f460(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026f472u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026f472;
    case 0x1026f477u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026f477;
    case 0x1026f482u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026f482;
    case 0x1026f488u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026f488;
    default: break;
    }
#endif

    COW_AT(1026f460)
    if ((int32_t)rd32(COW_IMG(0x1099aed8u)) <= 0)
    {
        edx = rd32(COW_IMG(0x1099aed8u));
        goto L_1026f482;
    }
    eax = 0u;
    ecx = rd32(COW_IMG(0x1099aedcu));
    edx = rd32(COW_IMG(0x1099aed8u));
L_1026f472: ;
    COW_AT(1026f472)
    if ((rd8(ecx) & 2u) != 0u) goto L_1026f488;
    COW_AT(1026f477)
    if ((int32_t)(eax + 1u) < (int32_t)edx)
    {
        eax = eax + 1u;
        ecx = ecx + 0xc0u;
        goto L_1026f472;
    }
L_1026f482: ;
    COW_AT(1026f482)
    g->edx = edx;
    return 1u;
L_1026f488: ;
    COW_AT(1026f488)
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026f460(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026f472u:
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
    case 0x1026f477u:
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
    case 0x1026f482u:
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
    case 0x1026f488u:
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
void cow_adapter_1026f460(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1026f460(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
