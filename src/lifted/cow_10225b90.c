/* f_0x10225b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10225b90(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_44;
    uint32_t loc_48;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10225b9du: eax = g->eax; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_10225b9d;
    case 0x10225baeu: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_10225bae;
    case 0x10225bceu: ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_10225bce;
    case 0x10225be4u: ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_10225be4;
    case 0x10225bf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10225bf7;
    case 0x10225c06u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10225c06;
    default: break;
    }
#endif

    COW_AT(10225b90)
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    if (arg1 == 0u)
    {
        loc_44 = in_esi;
        loc_48 = in_edi;
    }
    else
    {
    COW_AT(10225b9d)
        edi = arg1 + 8u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (~ecx == 1u)
        {
            loc_44 = in_esi;
            loc_48 = in_edi;
        }
        else
        {
    COW_AT(10225bae)
            wr8(sp0 - 0x40u, rd8(COW_IMG(0x103d3c84u)));
            edi = sp0 - 0x3fu;
            eax = 0u;
            ecx = 0xfu;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
            wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
            if (arg1 + 0x18u == 0u)
            {
    COW_AT(10225be4)
                wr32(sp0 - 0x4cu, arg1 + 8u);
                wr32(sp0 - 0x50u, COW_IMG(0x10386248u));
                wr32(sp0 - 0x54u, sp0 - 0x40u);
                g->ecx = ecx;
                g->edx = sp0 - 0x40u;
                g->esp = sp0 - 0x40u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x10386248u), arg1 + 8u, in_edi, in_esi);
                t3 = g->ecx;
                t4 = g->edx;
                ecx = t3;
                edx = t4;
            }
            else
            {
    COW_AT(10225bce)
                wr32(sp0 - 0x4cu, arg1 + 0x18u);
                wr32(sp0 - 0x50u, arg1 + 8u);
                wr32(sp0 - 0x54u, COW_IMG(0x1038624cu));
                wr32(sp0 - 0x58u, sp0 - 0x40u);
                g->ecx = sp0 - 0x40u;
                g->edx = arg1;
                g->esp = sp0 - 0x44u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1038624cu), arg1 + 8u, arg1 + 0x18u, in_edi);
                t1 = g->ecx;
                t2 = g->edx;
                ecx = t1;
                edx = t2;
            }
    COW_AT(10225bf7)
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, sp0 - 0x40u);
            g->esp = sp0 - 0x48u;
            cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x40u, 0u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
        }
    }
    COW_AT(10225c06)
    g->esi = loc_44;
    g->edi = loc_48;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10225b90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10225b9du:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10225baeu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->edx = arg1;
        g->esi = arg1 + 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225bceu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->eax = arg1 + 0x18u;
        g->edx = arg1;
        g->esi = arg1 + 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225be4u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->eax = arg1 + 0x18u;
        g->esi = arg1 + 8u;
        (void)sp0;
        return 1;
    }
    case 0x10225bf7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10225c06u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_44;
        uint32_t loc_48;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10225b90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10225b90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
