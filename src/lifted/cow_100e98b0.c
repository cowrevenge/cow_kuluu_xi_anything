/* f_0x100e98b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e98b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e98b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e98b9;
    case 0x100e98c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e98c3;
    case 0x100e98d1u: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e98d1;
    case 0x100e98d5u: ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e98d5;
    case 0x100e98f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e98f8;
    case 0x100e9900u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e9900;
    case 0x100e990du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e990d;
    default: break;
    }
#endif

    COW_AT(100e98b0)
    if (arg1 != 0u)
    {
        esi = arg1;
        goto L_100e98c3;
    }
    COW_AT(100e98b9)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_100e990d;
    esi = rd32(COW_IMG(0x104dfd98u));
L_100e98c3: ;
    COW_AT(100e98c3)
    if ((uint8_t)arg2 == 0u) goto L_100e990d;
    edx = esi + 0x57d8u;
    COW_AT(100e98d1)
    if ((uint8_t)arg2 >= 0x14u) goto L_100e990d;
    COW_AT(100e98d5)
    if (rd32(edx + rd8(edx + (uint8_t)arg2 + 0x3d5cu) * 0x70u + 0x14u) == 0u) goto L_100e990d;
    eax = edx + rd8(edx + (uint8_t)arg2 + 0x3d5cu) * 0x70u;
    ecx = rd32(edx + rd8(edx + (uint8_t)arg2 + 0x3d5cu) * 0x70u + 0x14u);
    COW_AT(100e98f8)
    if (rd32(esi + 0x3c390u) == ecx) goto L_100e990d;
    COW_AT(100e9900)
    return -(rd16(eax + 0x1au) != 0u) & ecx;
L_100e990d: ;
    COW_AT(100e990d)
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e98b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e98b9u:
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
    case 0x100e98c3u:
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
    case 0x100e98d1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e98d5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e98f8u:
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
    case 0x100e9900u:
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
    case 0x100e990du:
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
void cow_adapter_100e98b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e98b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
