/* f_0x1018c8c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018c8c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018c8c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c8c8;
    case 0x1018c8d4u: eax = g->eax; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c8d4;
    case 0x1018c8dcu: eax = g->eax; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c8dc;
    case 0x1018c8eau: eax = g->eax; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c8ea;
    case 0x1018c8ecu: eax = g->eax; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c8ec;
    case 0x1018c8f1u: eax = g->eax; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c8f1;
    case 0x1018c8f9u: eax = g->eax; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c8f9;
    case 0x1018c907u: eax = g->eax; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c907;
    case 0x1018c909u: eax = g->eax; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c909;
    case 0x1018c911u: eax = g->eax; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c911;
    case 0x1018c919u: eax = g->eax; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c919;
    case 0x1018c927u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c927;
    case 0x1018c929u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c929;
    case 0x1018c933u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c933;
    case 0x1018c935u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1018c935;
    default: break;
    }
#endif

    COW_AT(1018c8c0)
    if (rd32(self + 0xcu) == 0u)
    {
        edx = rd32(self + 0xcu);
        goto L_1018c933;
    }
    edx = rd32(self + 0xcu);
    COW_AT(1018c8c8)
    if ((int32_t)arg1 >= (int16_t)rd16(edx + 0x1cu)) goto L_1018c933;
    COW_AT(1018c8d4)
    if ((int32_t)arg1 >= (int16_t)rd16(edx + 0x64u))
    {
    COW_AT(1018c8ea)
        eax = 0u;
    }
    else
    {
    COW_AT(1018c8dc)
        eax = arg1 * 0x34u + rd32(edx + 0x20u);
    }
    COW_AT(1018c8ec)
    if (rd32(eax) == 0u) goto L_1018c933;
    COW_AT(1018c8f1)
    if ((int32_t)arg1 >= (int16_t)rd16(edx + 0x64u))
    {
    COW_AT(1018c907)
        eax = 0u;
    }
    else
    {
    COW_AT(1018c8f9)
        eax = arg1 * 0x34u + rd32(edx + 0x20u);
    }
    COW_AT(1018c909)
    if (rd32(rd32(eax)) == 0u) goto L_1018c933;
    eax = rd32(rd32(eax));
    COW_AT(1018c911)
    if ((int32_t)arg1 >= (int16_t)rd16(edx + 0x64u))
    {
    COW_AT(1018c927)
        ecx = 0u;
    }
    else
    {
    COW_AT(1018c919)
        ecx = arg1 * 0x34u + rd32(edx + 0x20u);
    }
    COW_AT(1018c929)
    if (rd32(eax + 0x78u) == rd32(ecx + 4u))
    {
        edx = rd32(eax + 0x78u);
        goto L_1018c935;
    }
    edx = rd32(eax + 0x78u);
L_1018c933: ;
    COW_AT(1018c933)
    eax = 0u;
L_1018c935: ;
    COW_AT(1018c935)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018c8c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018c8c8u:
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
    case 0x1018c8d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c8dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c8eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c8ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c8f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c8f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c907u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c909u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c911u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c919u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c927u:
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
    case 0x1018c929u:
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
    case 0x1018c933u:
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
    case 0x1018c935u:
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
void cow_adapter_1018c8c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1018c8c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
