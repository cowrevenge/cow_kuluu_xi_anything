/* f_0x101c4340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c4340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c434eu: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c434e;
    case 0x101c4359u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c4359;
    case 0x101c435fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c435f;
    case 0x101c4367u: eax = g->eax; ecx = g->ecx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c4367;
    case 0x101c436cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c436c;
    case 0x101c4372u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c4372;
    case 0x101c437eu: eax = g->eax; ecx = g->ecx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c437e;
    case 0x101c4384u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c4384;
    case 0x101c438cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c438c;
    default: break;
    }
#endif

    COW_AT(101c4340)
    if (arg3 == 0u)
    {
        eax = 0u;
        goto L_101c435f;
    }
    eax = 0u;
    ecx = arg3;
    edx = in_edx;
L_101c434e: ;
    COW_AT(101c434e)
    if (rd8(ecx) != 0x20u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx);
        esi = 0u;
        goto L_101c436c;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx);
    COW_AT(101c4359)
    if (ecx + 1u != 0u)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        goto L_101c434e;
    }
    eax = eax + 1u;
L_101c435f: ;
    COW_AT(101c435f)
    return 0xffffffffu;
L_101c4367: ;
    COW_AT(101c4367)
    if (rd8(ecx) == 0x20u) goto L_101c438c;
    edx = arg2;
L_101c436c: ;
    COW_AT(101c436c)
    if (rd8(ecx) == 0u) goto L_101c438c;
    edx = (edx & 0xffffff00u) | rd8(ecx);
    COW_AT(101c4372)
    wr8(arg1 + esi, (uint8_t)edx);
    if ((int32_t)(esi + 1u) > (int32_t)arg2) goto L_101c435f;
    esi = esi + 1u;
    COW_AT(101c437e)
    if (ecx + 1u != 0u)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        goto L_101c4367;
    }
    eax = eax + 1u;
    COW_AT(101c4384)
    return 0xffffffffu;
L_101c438c: ;
    COW_AT(101c438c)
    wr8(arg1 + esi, 0u);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c4340(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c434eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c4359u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c435fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101c4367u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c436cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c4372u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c437eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c4384u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101c438cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4340(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c4340(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
