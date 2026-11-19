/* f_0x1018c980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018c980(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018c98cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c98c;
    case 0x1018c998u: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c998;
    case 0x1018c9a0u: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9a0;
    case 0x1018c9aeu: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9ae;
    case 0x1018c9b0u: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9b0;
    case 0x1018c9b5u: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9b5;
    case 0x1018c9bdu: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9bd;
    case 0x1018c9cbu: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9cb;
    case 0x1018c9cdu: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9cd;
    case 0x1018c9d5u: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9d5;
    case 0x1018c9e3u: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9e3;
    case 0x1018c9ebu: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9eb;
    case 0x1018c9f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9f9;
    case 0x1018c9fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018c9fb;
    case 0x1018ca05u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018ca05;
    case 0x1018ca0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1018ca0f;
    default: break;
    }
#endif

    COW_AT(1018c980)
    if (rd32(self + 0xcu) == 0u)
    {
        edx = in_edx;
        goto L_1018ca0f;
    }
    ecx = rd32(self + 0xcu);
    COW_AT(1018c98c)
    if ((int32_t)arg1 >= (int16_t)rd16(ecx + 0x1cu))
    {
        edx = (uint32_t)(int16_t)rd16(ecx + 0x1cu);
        goto L_1018ca0f;
    }
    COW_AT(1018c998)
    if ((int32_t)arg1 >= (int16_t)rd16(ecx + 0x64u))
    {
    COW_AT(1018c9ae)
        edx = 0u;
    }
    else
    {
    COW_AT(1018c9a0)
        edx = arg1 * 0x34u + rd32(ecx + 0x20u);
    }
    COW_AT(1018c9b0)
    if (rd32(edx) == 0u) goto L_1018ca0f;
    COW_AT(1018c9b5)
    if ((int32_t)arg1 >= (int16_t)rd16(ecx + 0x64u))
    {
    COW_AT(1018c9cb)
        edx = 0u;
    }
    else
    {
    COW_AT(1018c9bd)
        edx = arg1 * 0x34u + rd32(ecx + 0x20u);
    }
    COW_AT(1018c9cd)
    if (rd32(rd32(edx)) == 0u)
    {
        edx = rd32(edx);
        goto L_1018ca0f;
    }
    esi = rd32(rd32(edx));
    COW_AT(1018c9d5)
    if (!(rd32(esi + 0x120u) >> 9u & 1u))
    {
        edx = rd32(esi + 0x120u) >> 9u;
        goto L_1018ca0f;
    }
    COW_AT(1018c9e3)
    if ((int32_t)arg1 >= (int16_t)rd16(ecx + 0x64u))
    {
    COW_AT(1018c9f9)
        eax = 0u;
    }
    else
    {
    COW_AT(1018c9eb)
        eax = arg1 * 0x34u + rd32(ecx + 0x20u);
    }
    COW_AT(1018c9fb)
    if (rd32(esi + 0x78u) != rd32(eax + 4u))
    {
        edx = rd32(esi + 0x78u);
        goto L_1018ca0f;
    }
    edx = rd32(esi + 0x78u);
    COW_AT(1018ca05)
    g->edx = edx;
    return rd32(esi + 0xa0u);
L_1018ca0f: ;
    COW_AT(1018ca0f)
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018c980(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018c98cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018c998u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c9a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c9aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c9b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c9b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c9bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c9cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c9cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c9d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c9e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c9ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018c9f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018c9fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018ca05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018ca0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c980(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1018c980(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
