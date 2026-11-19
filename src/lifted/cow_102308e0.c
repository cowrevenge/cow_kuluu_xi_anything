/* f_0x102308e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102308e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102308e9u: in_eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102308e9;
    case 0x102308ecu: eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102308ec;
    case 0x102308f6u: ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102308f6;
    case 0x102308f9u: ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102308f9;
    case 0x1023090du: eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1023090d;
    case 0x10230912u: eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_10230912;
    default: break;
    }
#endif

    COW_AT(102308e0)
    if ((rd8(COW_IMG(0x104807ecu)) & 4u) != 0u) goto L_102308ec;
    COW_AT(102308e9)
    return in_eax & 0xffffff00u;
L_102308ec: ;
    COW_AT(102308ec)
    if ((uint16_t)arg1 >= 0xe000u) goto L_102308f9;
    COW_AT(102308f6)
    return arg1 & 0xffffff00u;
L_102308f9: ;
    COW_AT(102308f9)
    t1 = (uint16_t)(arg1 + 0x2000u);
    if ((int32_t)(t1 & 0x80000007u) >= 0)
    {
        eax = t1;
        ecx = t1 & 0x80000007u;
        pf = PARITY(t1 & 7u);
        zf = (t1 & 0x80000007u) == 0u;
        sf = (int32_t)(t1 & 0x80000007u) < 0;
        of = 0u;
    }
    else
    {
        eax = t1;
        ecx = t1 & 0x80000007u;
    COW_AT(1023090d)
        pf = PARITY((uint8_t)((ecx - 1u | 0xfffffff8u) + 1u));
        zf = (ecx - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)((ecx - 1u | 0xfffffff8u) + 1u) < 0;
        of = (ecx - 1u | 0xfffffff8u) + 1u == 0x80000000u;
        ecx = (ecx - 1u | 0xfffffff8u) + 1u;
    }
    COW_AT(10230912)
    return (eax >> 3u & 0xffffff00u) | (rd8(COW_IMG(0x104805e0u) + (eax >> 3u)) & (uint8_t)((ecx & 0x1fu) != 0u ? (uint8_t)(1u << (ecx & 0x1fu)) : 1u)) != 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102308e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102308e9u:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        in_eax = g->eax;
        ecx = g->ecx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102308ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102308f6u:
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
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102308f9u:
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
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1023090du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10230912u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102308e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102308e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
