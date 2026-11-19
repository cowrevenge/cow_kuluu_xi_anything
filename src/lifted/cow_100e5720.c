/* f_0x100e5720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e5720(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e572bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e572b;
    case 0x100e5733u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e5733;
    case 0x100e5740u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e5740;
    case 0x100e5758u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e5758;
    case 0x100e5763u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e5763;
    case 0x100e5767u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e5767;
    case 0x100e576fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e576f;
    case 0x100e5781u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_100e5781;
    default: break;
    }
#endif

    COW_AT(100e5720)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_100e5781;
    esi = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100e572b)
    if (rd32(sp0 + 4u) == 0u) goto L_100e5767;
    eax = rd32(sp0 + 4u);
    COW_AT(100e5733)
    t1 = rd8(eax);
    wr8(sp0 + 4u, (uint8_t)(t1 + 1u));
    if ((uint8_t)(t1 + 1u) >= 0x10u) goto L_100e5781;
    edx = (in_edx & 0xffffff00u) | (uint8_t)(t1 + 1u);
L_100e5740: ;
    COW_AT(100e5740)
    t2 = rd32(sp0 + 4u);
    if (rd32(esi + (uint8_t)t2 * 0x24u + 0x19adcu) != 0x10u)
    {
        ecx = t2;
        goto L_100e576f;
    }
    COW_AT(100e5758)
    wr8(sp0 + 4u, (uint8_t)((uint8_t)edx + 1u));
    if ((uint8_t)((uint8_t)edx + 1u) < 0x10u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx + 1u);
        goto L_100e5740;
    }
    COW_AT(100e5763)
    return 0u;
L_100e5767: ;
    COW_AT(100e5767)
    wr8(sp0 + 4u, 0u);
    edx = in_edx & 0xffffff00u;
    goto L_100e5740;
L_100e576f: ;
    COW_AT(100e576f)
    return esi + (uint8_t)ecx * 0x24u + 0x19adcu;
L_100e5781: ;
    COW_AT(100e5781)
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e5720(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e572bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e5733u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e5740u:
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
    case 0x100e5758u:
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
    case 0x100e5763u:
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
    case 0x100e5767u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e576fu:
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
    case 0x100e5781u:
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
void cow_adapter_100e5720(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e5720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
