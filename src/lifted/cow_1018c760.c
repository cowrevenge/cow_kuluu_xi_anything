/* f_0x1018c760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018c760(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018c766u: eax = g->eax; ecx = g->ecx; goto E_1018c766;
    case 0x1018c771u: eax = g->eax; ecx = g->ecx; goto E_1018c771;
    case 0x1018c776u: eax = g->eax; ecx = g->ecx; goto E_1018c776;
    case 0x1018c77fu: eax = g->eax; ecx = g->ecx; goto E_1018c77f;
    case 0x1018c782u: eax = g->eax; ecx = g->ecx; goto E_1018c782;
    default: break;
    }
#endif

    COW_AT(1018c760)
    ecx = 0u;
L_1018c766: ;
    COW_AT(1018c766)
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) == 0u) goto L_1018c776;
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    COW_AT(1018c771)
    if (rd32(eax + 0x78u) == arg1) goto L_1018c782;
L_1018c776: ;
    COW_AT(1018c776)
    if ((int32_t)(ecx + 1u) < 2304)
    {
        ecx = ecx + 1u;
        goto L_1018c766;
    }
    COW_AT(1018c77f)
    return 0u;
L_1018c782: ;
    COW_AT(1018c782)
    return COW_IMG(0x10480af0u) + ecx * 4u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018c760(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018c766u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c771u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c776u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c77fu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1018c782u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c760(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1018c760(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
