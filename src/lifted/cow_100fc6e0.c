/* f_0x100fc6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100fc6e0(Guest* g)
{
    uint32_t ecx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100fc6ebu: in_eax = g->eax; ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fc6eb;
    case 0x100fc6efu: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fc6ef;
    case 0x100fc6fau: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fc6fa;
    case 0x100fc70au: esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fc70a;
    case 0x100fc70fu: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fc70f;
    case 0x100fc72au: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fc72a;
    default: break;
    }
#endif

    COW_AT(100fc6e0)
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        esi = rd32(COW_IMG(0x104dfd98u));
        goto L_100fc6ef;
    }
    COW_AT(100fc6eb)
    return in_eax & 0xffffff00u;
L_100fc6ef: ;
    COW_AT(100fc6ef)
    if ((uint16_t)arg1 >= 0x180u) goto L_100fc72a;
    COW_AT(100fc6fa)
    if ((int32_t)(arg1 & 7u) >= 0)
    {
        ecx = arg1 & 7u;
        pf = PARITY(arg1 & 7u);
        zf = (arg1 & 7u) == 0u;
        sf = (int32_t)(arg1 & 7u) < 0;
        of = 0u;
    }
    else
    {
    COW_AT(100fc70a)
        ecx = ((arg1 & 7u) - 1u | 0xfffffff8u) + 1u;
        pf = PARITY((uint8_t)(((arg1 & 7u) - 1u | 0xfffffff8u) + 1u));
        zf = ((arg1 & 7u) - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)(((arg1 & 7u) - 1u | 0xfffffff8u) + 1u) < 0;
        of = ((arg1 & 7u) - 1u | 0xfffffff8u) + 1u == 0x80000000u;
    }
    COW_AT(100fc70f)
    return ((uint8_t)(1u << (ecx & 0x1fu)) & rd8(esi + ((uint16_t)arg1 >> 3u) + 0x3c409u)) != 0u;
L_100fc72a: ;
    COW_AT(100fc72a)
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100fc6e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100fc6ebu:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        in_eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100fc6efu:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100fc6fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fc70au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->ecx = arg1 & 7u;
        g->edx = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fc70fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->edx = (uint16_t)arg1;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100fc72au:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc6e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100fc6e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
