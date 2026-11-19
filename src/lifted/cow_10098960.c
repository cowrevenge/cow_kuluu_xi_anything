/* f_0x10098960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10098960(Guest* g)
{
    uint32_t ecx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1009896au: pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1009896a;
    case 0x1009897du: pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1009897d;
    case 0x10098982u: ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10098982;
    case 0x1009898fu: ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1009898f;
    default: break;
    }
#endif

    COW_AT(10098960)
    if ((uint16_t)arg1 >= 0x40u) goto L_1009898f;
    COW_AT(1009896a)
    if ((int32_t)(arg1 & 0x1fu) >= 0)
    {
        ecx = arg1 & 0x1fu;
        pf = PARITY(arg1 & 0x1fu);
        zf = (arg1 & 0x1fu) == 0u;
        sf = (int32_t)(arg1 & 0x1fu) < 0;
        of = 0u;
    }
    else
    {
    COW_AT(1009897d)
        ecx = ((arg1 & 0x1fu) - 1u | 0xffffffe0u) + 1u;
        pf = PARITY((uint8_t)(((arg1 & 0x1fu) - 1u | 0xffffffe0u) + 1u));
        zf = ((arg1 & 0x1fu) - 1u | 0xffffffe0u) + 1u == 0u;
        sf = (int32_t)(((arg1 & 0x1fu) - 1u | 0xffffffe0u) + 1u) < 0;
        of = ((arg1 & 0x1fu) - 1u | 0xffffffe0u) + 1u == 0x80000000u;
    }
    COW_AT(10098982)
    return rd32(COW_IMG(0x1047fe30u) + ((uint16_t)arg1 >> 5u) * 4u) >> (ecx & 0x1fu) & 1u;
L_1009898f: ;
    COW_AT(1009898f)
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10098960(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1009896au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009897du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        g->eax = (uint16_t)arg1 >> 5u;
        g->ecx = arg1 & 0x1fu;
        (void)sp0;
        return 1;
    }
    case 0x10098982u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        g->eax = (uint16_t)arg1 >> 5u;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1009898fu:
    {
        uint32_t ecx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10098960(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10098960(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
