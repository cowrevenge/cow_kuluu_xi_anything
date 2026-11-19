/* f_0x102309d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102309d0(Guest* g)
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102309d9u: in_eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_102309d9;
    case 0x102309e2u: eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_102309e2;
    case 0x102309ecu: ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_102309ec;
    case 0x10230a00u: eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_10230a00;
    case 0x10230a05u: eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_10230a05;
    case 0x10230a19u: eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_10230a19;
    case 0x10230a23u: eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_10230a23;
    case 0x10230a28u: eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_10230a28;
    case 0x10230a2cu: eax = g->eax; ecx = g->ecx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_10230a2c;
    default: break;
    }
#endif

    COW_AT(102309d0)
    if (arg2 == 0u)
    {
        eax = in_eax;
        goto L_10230a2c;
    }
    COW_AT(102309d9)
    if ((rd8(COW_IMG(0x104807ecu)) & 4u) == 0u)
    {
        eax = in_eax;
        goto L_10230a2c;
    }
    COW_AT(102309e2)
    if ((uint16_t)arg1 < 0xe000u)
    {
        eax = arg1;
        goto L_10230a2c;
    }
    COW_AT(102309ec)
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
    COW_AT(10230a00)
        pf = PARITY((uint8_t)((ecx - 1u | 0xfffffff8u) + 1u));
        zf = (ecx - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)((ecx - 1u | 0xfffffff8u) + 1u) < 0;
        of = (ecx - 1u | 0xfffffff8u) + 1u == 0x80000000u;
        ecx = (ecx - 1u | 0xfffffff8u) + 1u;
    }
    COW_AT(10230a05)
    if ((rd8(COW_IMG(0x104805e0u) + (eax >> 3u)) & (uint8_t)(1u << (ecx & 0x1fu))) == 0u)
    {
        eax = (eax >> 3u & 0xffffff00u) | rd8(COW_IMG(0x104805e0u) + (eax >> 3u));
        goto L_10230a2c;
    }
    COW_AT(10230a19)
    if (rd32(arg2 + 0x1560u) == 0u)
    {
        eax = rd32(arg2 + 0x1560u);
        goto L_10230a2c;
    }
    eax = rd32(arg2 + 0x1560u);
    COW_AT(10230a23)
    if (rd32(eax) != 0u) goto L_10230a2c;
    COW_AT(10230a28)
    return (eax & 0xffffff00u) | 1u;
L_10230a2c: ;
    COW_AT(10230a2c)
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102309d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102309d9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102309e2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102309ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10230a00u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10230a05u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 4u;
        g->esi = arg2;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x10230a19u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10230a23u:
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
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10230a28u:
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
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10230a2cu:
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
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102309d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102309d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
