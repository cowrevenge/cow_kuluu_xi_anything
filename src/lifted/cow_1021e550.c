/* f_0x1021e550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_1021e550(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1021e561u: eax = g->eax; ecx = g->ecx; edx = g->edx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1021e561;
    case 0x1021e56du: ecx = g->ecx; edx = g->edx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1021e56d;
    case 0x1021e576u: eax = g->eax; ecx = g->ecx; edx = g->edx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1021e576;
    case 0x1021e589u: eax = g->eax; ecx = g->ecx; edx = g->edx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_1021e589;
    case 0x1021e58fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e58f;
    case 0x1021e5a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e5a4;
    case 0x1021e5a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e5a9;
    case 0x1021e5b9u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e5b9;
    case 0x1021e5c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e5c4;
    case 0x1021e5dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e5da;
    case 0x1021e5e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e5e4;
    case 0x1021e5e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e5e9;
    case 0x1021e5f0u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e5f0;
    case 0x1021e604u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e604;
    case 0x1021e611u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e611;
    case 0x1021e61cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e61c;
    case 0x1021e637u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e637;
    case 0x1021e63bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e63b;
    case 0x1021e644u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x14u); goto E_1021e644;
    case 0x1021e646u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_1021e646;
    case 0x1021e650u: ecx = g->ecx; edx = g->edx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); goto E_1021e650;
    case 0x1021e65bu: eax = g->eax; ecx = g->ecx; edx = g->edx; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); goto E_1021e65b;
    default: break;
    }
#endif

    COW_AT(1021e550)
    if (arg1 != 0u) goto L_1021e576;
    COW_AT(1021e561)
    if (arg6 == 0u)
    {
        loc_4 = 0u;
        goto L_1021e65b;
    }
    COW_AT(1021e56d)
    wr8(arg6, 0u);
    return rd32(sp0 + 0x10u);
L_1021e576: ;
    COW_AT(1021e576)
    if ((int32_t)arg5 <= 1)
    {
        loc_4 = 0u;
    }
    else
    {
    COW_AT(1021e589)
        ebp = 1u;
        loc_4 = 0u;
L_1021e58f: ;
    COW_AT(1021e58f)
        if ((int32_t)(ebp & 0x80000007u) >= 0)
        {
            eax = (uint32_t)((int32_t)(ebp + ((uint32_t)((int32_t)ebp >> 0x1fu) & 7u)) >> 3u);
            ecx = ebp & 0x80000007u;
            pf = PARITY(ebp & 7u);
            zf = (ebp & 0x80000007u) == 0u;
            sf = (int32_t)(ebp & 0x80000007u) < 0;
            of = 0u;
        }
        else
        {
            eax = (uint32_t)((int32_t)(ebp + ((uint32_t)((int32_t)ebp >> 0x1fu) & 7u)) >> 3u);
            ecx = ebp & 0x80000007u;
    COW_AT(1021e5a4)
            pf = PARITY((uint8_t)((ecx - 1u | 0xfffffff8u) + 1u));
            zf = (ecx - 1u | 0xfffffff8u) + 1u == 0u;
            sf = (int32_t)((ecx - 1u | 0xfffffff8u) + 1u) < 0;
            of = (ecx - 1u | 0xfffffff8u) + 1u == 0x80000000u;
            ecx = (ecx - 1u | 0xfffffff8u) + 1u;
        }
    COW_AT(1021e5a9)
        if ((rd8(arg1 + eax) & (uint8_t)(1u << (ecx & 0x1fu))) != 0u)
        {
            edx = 1u << (ecx & 0x1fu);
            goto L_1021e611;
        }
        edx = 1u << (ecx & 0x1fu);
    COW_AT(1021e5b9)
        if (((uint8_t)edx & rd8(arg2 + eax)) == 0u) goto L_1021e63b;
        ecx = (arg1 & 0xffffff00u) | rd8(arg2 + eax);
    COW_AT(1021e5c4)
        wr8(arg2 + eax, (uint8_t)~(uint8_t)edx & (uint8_t)ecx);
        if ((int32_t)arg5 <= 0)
        {
            eax = 0u;
            loc_4 = loc_4 + 1u;
            goto L_1021e5e9;
        }
        eax = 0u;
        loc_4 = loc_4 + 1u;
L_1021e5da: ;
    COW_AT(1021e5da)
        if (rd16(arg3 + eax * 2u) == ebp) goto L_1021e5e9;
    COW_AT(1021e5e4)
        if ((int32_t)(eax + 1u) < (int32_t)arg5)
        {
            eax = eax + 1u;
            goto L_1021e5da;
        }
        eax = eax + 1u;
L_1021e5e9: ;
    COW_AT(1021e5e9)
        if ((int32_t)eax < (int32_t)(arg5 - 1u))
        {
    COW_AT(1021e5f0)
            t1 = arg5 - 1u - eax;
            esi = arg3 + eax * 2u + 2u;
            edi = arg3 + eax * 2u;
            ecx = t1;
            while (ecx) { wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u); ecx--; }
            eax = eax + t1;
        }
    COW_AT(1021e604)
        wr16(arg3 + eax * 2u, 0u);
        eax = rd32(sp0 + 0x10u) - 1u;
L_1021e637: ;
    COW_AT(1021e637)
        wr32(sp0 + 0x10u, eax);
L_1021e63b: ;
    COW_AT(1021e63b)
        if ((int32_t)(ebp + 1u) < (int32_t)arg5)
        {
            ebp = ebp + 1u;
            goto L_1021e58f;
        }
    COW_AT(1021e644)
    }
    COW_AT(1021e646)
    if (arg6 != 0u)
    {
    COW_AT(1021e650)
        wr8(arg6, loc_4 != 0u);
    }
L_1021e65b: ;
    COW_AT(1021e65b)
    return rd32(sp0 + 0x10u);
L_1021e611: ;
    COW_AT(1021e611)
    if (((uint8_t)edx & rd8(arg2 + eax)) != 0u) goto L_1021e63b;
    ecx = (arg2 & 0xffffff00u) | rd8(arg2 + eax);
    COW_AT(1021e61c)
    wr8(arg2 + eax, (uint8_t)(ecx | edx));
    t2 = rd32(sp0 + 0x10u);
    wr16(arg3 + t2 * 2u, (uint16_t)ebp);
    eax = t2 + 1u;
    loc_4 = loc_4 + 1u;
    goto L_1021e637;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1021e550(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1021e561u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021e56du:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        g->eax = arg6;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021e576u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021e589u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xcu;
        g->ebp = 1u;
        g->edi = arg5;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021e58fu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e5a4u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e5a9u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->edi = arg5;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1021e5b9u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = arg1;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e5c4u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->esi = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e5dau:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e5e4u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e5e9u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e5f0u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = arg5 - 1u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021e604u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e611u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e61cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e637u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e63bu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1021e644u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1021e646u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1021e650u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1021e65bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1021e550(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1021e550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
