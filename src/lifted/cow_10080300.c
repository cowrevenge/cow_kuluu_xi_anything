/* f_0x10080300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10080300(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10080309u: ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 4u); goto E_10080309;
    case 0x10080317u: ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 4u); goto E_10080317;
    case 0x10080322u: ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 4u); goto E_10080322;
    case 0x10080329u: ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 4u); goto E_10080329;
    case 0x10080332u: ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 4u); goto E_10080332;
    case 0x10080334u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 4u); goto E_10080334;
    case 0x1008033cu: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 4u); goto E_1008033c;
    default: break;
    }
#endif

    COW_AT(10080300)
    ecx = 0u;
    edx = in_edx;
L_10080309: ;
    COW_AT(10080309)
    if (rd16(COW_IMG(0x1032cbb0u) + ecx * 4u) == 0xffffu)
    {
        eax = 0u;
        goto L_1008033c;
    }
    edx = (edx & 0xffff0000u) | rd16(COW_IMG(0x1032cbb0u) + ecx * 4u);
    COW_AT(10080317)
    if (rd16(COW_IMG(0x1032cbb2u) + ecx * 4u) == 0xffffu)
    {
        eax = 0u;
        goto L_1008033c;
    }
    COW_AT(10080322)
    if (arg1 == (uint32_t)(int16_t)edx) goto L_10080334;
    edx = (uint32_t)(int16_t)edx;
    COW_AT(10080329)
    if ((int32_t)(ecx + 1u) < 228)
    {
        ecx = ecx + 1u;
        goto L_10080309;
    }
    COW_AT(10080332)
    return 0u;
L_10080334: ;
    COW_AT(10080334)
    eax = (uint32_t)(int16_t)rd16(COW_IMG(0x1032cbb2u) + ecx * 4u);
L_1008033c: ;
    COW_AT(1008033c)
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10080300(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10080309u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10080317u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10080322u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10080329u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10080332u:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10080334u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1008033cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10080300(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10080300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
