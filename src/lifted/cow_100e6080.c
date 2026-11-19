/* f_0x100e6080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100e6080(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e60a4u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100e60a4;
    case 0x100e60a9u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100e60a9;
    case 0x100e60b2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100e60b2;
    case 0x100e60c4u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100e60c4;
    case 0x100e60ccu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100e60cc;
    case 0x100e60d1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100e60d1;
    case 0x100e60dcu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100e60dc;
    case 0x100e60e1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100e60e1;
    case 0x100e60e2u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100e60e2;
    default: break;
    }
#endif

    COW_AT(100e6080)
    edi = arg1 + 0x2cec8u;
    eax = 0u;
    ecx = 0x20u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)(uint16_t)arg3 > 0)
    {
    COW_AT(100e60a4)
        ebx = in_ebx;
        edi = 0u;
L_100e60a9: ;
    COW_AT(100e60a9)
        if (rd16(arg2 + edi * 2u) == 0u)
        {
            ecx = (ecx & 0xffff0000u) | rd16(arg2 + edi * 2u);
        }
        else
        {
            ecx = (ecx & 0xffff0000u) | rd16(arg2 + edi * 2u);
    COW_AT(100e60b2)
            if ((int32_t)((uint16_t)ecx >> 3u) >= 352)
            {
                ecx = (uint16_t)ecx;
            }
            else
            {
                eax = (uint16_t)ecx >> 3u;
                ecx = (uint16_t)ecx;
    COW_AT(100e60c4)
                if ((int32_t)(ecx & 0x80000007u) >= 0)
                {
                    pf = PARITY(ecx & 7u);
                    zf = (ecx & 0x80000007u) == 0u;
                    sf = (int32_t)(ecx & 0x80000007u) < 0;
                    ecx = ecx & 0x80000007u;
                    of = 0u;
                }
                else
                {
                    ecx = ecx & 0x80000007u;
    COW_AT(100e60cc)
                    pf = PARITY((uint8_t)((ecx - 1u | 0xfffffff8u) + 1u));
                    zf = (ecx - 1u | 0xfffffff8u) + 1u == 0u;
                    sf = (int32_t)((ecx - 1u | 0xfffffff8u) + 1u) < 0;
                    of = (ecx - 1u | 0xfffffff8u) + 1u == 0x80000000u;
                    ecx = (ecx - 1u | 0xfffffff8u) + 1u;
                }
    COW_AT(100e60d1)
                wr8(arg1 + eax + 0x2cde8u, (uint8_t)(rd8(arg1 + eax + 0x2cde8u) | ((ecx & 0x1fu) != 0u ? (uint8_t)(1u << (ecx & 0x1fu)) : 1u)));
                ebx = (ebx & 0xffffff00u) | (uint8_t)((ecx & 0x1fu) != 0u ? (uint8_t)(1u << (ecx & 0x1fu)) : 1u);
            }
        }
    COW_AT(100e60dc)
        if ((int32_t)(edi + 1u) < (int32_t)(uint16_t)arg3)
        {
            edi = edi + 1u;
            goto L_100e60a9;
        }
    COW_AT(100e60e1)
    }
    COW_AT(100e60e2)
    wr8(arg1 + 0x2cf4au, 1u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e6080(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e60a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xcu;
        g->ebp = (uint16_t)arg3;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100e60a9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->edx = arg2;
        g->ebp = (uint16_t)arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e60b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->edx = arg2;
        g->ebp = (uint16_t)arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e60c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->edx = arg2;
        g->ebp = (uint16_t)arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e60ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->edx = arg2;
        g->ebp = (uint16_t)arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e60d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->edx = arg2;
        g->ebp = (uint16_t)arg3;
        g->esi = arg1;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100e60dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->edx = arg2;
        g->ebp = (uint16_t)arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e60e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e60e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e6080(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100e6080(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
