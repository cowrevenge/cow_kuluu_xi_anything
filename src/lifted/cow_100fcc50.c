/* f_0x100fcc50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fcc50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100fcc5fu: eax = g->eax; ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcc5f;
    case 0x100fcc6bu: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcc6b;
    case 0x100fcc9du: eax = g->eax; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcc9d;
    case 0x100fccabu: eax = g->eax; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fccab;
    case 0x100fccb2u: eax = g->eax; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fccb2;
    case 0x100fccc2u: esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fccc2;
    case 0x100fccc8u: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fccc8;
    case 0x100fccd7u: esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fccd7;
    case 0x100fccdcu: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fccdc;
    case 0x100fccf6u: esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fccf6;
    case 0x100fccfcu: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fccfc;
    case 0x100fcd02u: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcd02;
    case 0x100fcd11u: esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcd11;
    case 0x100fcd16u: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcd16;
    case 0x100fcd30u: eax = g->eax; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcd30;
    case 0x100fcd34u: eax = g->eax; ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcd34;
    case 0x100fcd3eu: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcd3e;
    case 0x100fcd4du: esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcd4d;
    case 0x100fcd52u: ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcd52;
    case 0x100fcd6cu: eax = g->eax; ecx = g->ecx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->esi = rd32(sp0 - 4u); goto E_100fcd6c;
    default: break;
    }
#endif

    COW_AT(100fcc50)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100fcd6c;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100fcc5f)
    if ((uint8_t)arg1 >= 2u)
    {
        eax = arg1;
        goto L_100fcd6c;
    }
    COW_AT(100fcc6b)
    if (rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u) != (uint8_t)(arg2 >> 8u))
    {
        eax = rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u);
        goto L_100fcd6c;
    }
    eax = rd8(ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u);
    esi = ecx + (uint8_t)arg1 * 0x9cu + 0x40c44u;
    COW_AT(100fcc9d)
    if ((uint8_t)eax == 0x11u)
    {
        eax = (uint8_t)eax - 0x11u;
        goto L_100fcd30;
    }
    eax = (uint8_t)eax - 0x11u;
    COW_AT(100fccab)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100fcd6c;
    }
    COW_AT(100fccb2)
    if ((uint8_t)arg2 != 1u) goto L_100fccf6;
    COW_AT(100fccc2)
    if ((uint16_t)arg3 >= 0x100u) goto L_100fccf6;
    COW_AT(100fccc8)
    if ((int32_t)(arg3 & 7u) >= 0)
    {
        ecx = arg3 & 7u;
        pf = PARITY(arg3 & 7u);
        zf = (arg3 & 7u) == 0u;
        sf = (int32_t)(arg3 & 7u) < 0;
        of = 0u;
    }
    else
    {
    COW_AT(100fccd7)
        ecx = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u;
        pf = PARITY((uint8_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u));
        zf = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u) < 0;
        of = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0x80000000u;
    }
    COW_AT(100fccdc)
    return ((uint16_t)arg3 >> 3u & 0xffffff00u) | (uint8_t)(1u << (ecx & 0x1fu) & (((uint16_t)arg3 >> 3u & 0xffffff00u) | rd8(esi + ((uint16_t)arg3 >> 3u) + 0x14u))) != 0u;
L_100fccf6: ;
    COW_AT(100fccf6)
    if ((uint8_t)arg2 != 2u)
    {
        eax = arg3;
        goto L_100fcd6c;
    }
    COW_AT(100fccfc)
    if ((uint16_t)arg3 >= 0x100u)
    {
        eax = arg3;
        goto L_100fcd6c;
    }
    COW_AT(100fcd02)
    if ((int32_t)(arg3 & 7u) >= 0)
    {
        ecx = arg3 & 7u;
        pf = PARITY(arg3 & 7u);
        zf = (arg3 & 7u) == 0u;
        sf = (int32_t)(arg3 & 7u) < 0;
        of = 0u;
    }
    else
    {
    COW_AT(100fcd11)
        ecx = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u;
        pf = PARITY((uint8_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u));
        zf = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u) < 0;
        of = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0x80000000u;
    }
    COW_AT(100fcd16)
    return ((uint16_t)arg3 >> 3u & 0xffffff00u) | (uint8_t)(1u << (ecx & 0x1fu) & (((uint16_t)arg3 >> 3u & 0xffffff00u) | rd8(esi + ((uint16_t)arg3 >> 3u) + 0x34u))) != 0u;
L_100fcd30: ;
    COW_AT(100fcd30)
    if ((uint8_t)arg2 != 0u) goto L_100fcd6c;
    COW_AT(100fcd34)
    if ((uint16_t)arg3 >= 0x40u)
    {
        eax = arg3;
        goto L_100fcd6c;
    }
    COW_AT(100fcd3e)
    if ((int32_t)(arg3 & 7u) >= 0)
    {
        ecx = arg3 & 7u;
        pf = PARITY(arg3 & 7u);
        zf = (arg3 & 7u) == 0u;
        sf = (int32_t)(arg3 & 7u) < 0;
        of = 0u;
    }
    else
    {
    COW_AT(100fcd4d)
        ecx = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u;
        pf = PARITY((uint8_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u));
        zf = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)(((arg3 & 7u) - 1u | 0xfffffff8u) + 1u) < 0;
        of = ((arg3 & 7u) - 1u | 0xfffffff8u) + 1u == 0x80000000u;
    }
    COW_AT(100fcd52)
    return ((uint16_t)arg3 >> 3u & 0xffffff00u) | (uint8_t)(1u << (ecx & 0x1fu) & (((uint16_t)arg3 >> 3u & 0xffffff00u) | rd8(esi + ((uint16_t)arg3 >> 3u) + 4u))) != 0u;
L_100fcd6c: ;
    COW_AT(100fcd6c)
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100fcc50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100fcc5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
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
    case 0x100fcc6bu:
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
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fcc9du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100fccabu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100fccb2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100fccc2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = arg3;
        g->ecx = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x100fccc8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fccd7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = (uint16_t)arg3;
        g->ecx = arg3 & 7u;
        (void)sp0;
        return 1;
    }
    case 0x100fccdcu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = (uint16_t)arg3;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100fccf6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = arg3;
        g->ecx = (uint8_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x100fccfcu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fcd02u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fcd11u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = (uint16_t)arg3;
        g->ecx = arg3 & 7u;
        (void)sp0;
        return 1;
    }
    case 0x100fcd16u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = (uint16_t)arg3;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100fcd30u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100fcd34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
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
    case 0x100fcd3eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fcd4du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = (uint16_t)arg3;
        g->ecx = arg3 & 7u;
        (void)sp0;
        return 1;
    }
    case 0x100fcd52u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->eax = (uint16_t)arg3;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100fcd6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
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
void cow_adapter_100fcc50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100fcc50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
