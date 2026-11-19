/* f_0x10206350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10206350(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_90;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 152u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020636bu: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x88u); in_esi = rd32(sp0 - 0x84u); g->edi = rd32(sp0 - 0x88u); g->esi = rd32(sp0 - 0x84u); goto E_1020636b;
    case 0x10206372u: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x88u); in_esi = rd32(sp0 - 0x84u); g->edi = rd32(sp0 - 0x88u); g->esi = rd32(sp0 - 0x84u); goto E_10206372;
    case 0x1020637cu: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x88u); in_esi = rd32(sp0 - 0x84u); g->edi = rd32(sp0 - 0x88u); g->esi = rd32(sp0 - 0x84u); goto E_1020637c;
    case 0x10206390u: eax = g->eax; ecx = g->ecx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x88u); in_esi = rd32(sp0 - 0x84u); g->edi = rd32(sp0 - 0x88u); g->esi = rd32(sp0 - 0x84u); goto E_10206390;
    case 0x102063a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90 = rd32(sp0 - 0x90u); goto E_102063a2;
    case 0x102063c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_102063c0;
    default: break;
    }
#endif

    COW_AT(10206350)
    wr32(sp0 - 0x84u, in_esi);
    wr32(sp0 - 0x88u, in_edi);
    edi = self + 0x14u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        edx = self + 0x14u;
        loc_84 = in_esi;
        loc_88 = in_edi;
    }
    else
    {
        ecx = ~ecx - 1u;
    COW_AT(1020636b)
        if (rd8(self + 0x24u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
            edx = self + 0x14u;
            loc_84 = in_esi;
            loc_88 = in_edi;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
    COW_AT(10206372)
            wr32(sp0 - 0x8cu, self + 0x14u);
            if (rd8(COW_IMG(0x106643a7u)) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106643a7u));
    COW_AT(10206390)
                wr32(sp0 - 0x90u, 1u);
                wr32(sp0 - 0x94u, 0xau);
                g->eax = eax;
                g->edx = self + 0x14u;
                g->esp = sp0 - 0x8cu;
                t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 1u);
                t5 = g->edx;
                wr32(sp0 - 0x90u, t4);
                wr32(sp0 - 0x94u, sp0 - 0x80u);
                eax = t4;
                ecx = sp0 - 0x80u;
                edx = t5;
                loc_90 = t4;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106643a7u));
    COW_AT(1020637c)
                wr32(sp0 - 0x90u, 0u);
                wr32(sp0 - 0x94u, 0xau);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = self + 0x14u;
                g->esp = sp0 - 0x8cu;
                t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0u);
                t2 = g->ecx;
                t3 = g->edx;
                wr32(sp0 - 0x90u, t1);
                wr32(sp0 - 0x94u, sp0 - 0x80u);
                eax = sp0 - 0x80u;
                ecx = t2;
                edx = t3;
                loc_90 = t1;
            }
    COW_AT(102063a2)
            g->eax = eax;
            g->esp = sp0 - 0x80u;
            t6 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, loc_90, rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u));
            wr32(sp0 - 0x8cu, 1u);
            wr32(sp0 - 0x90u, sp0 - 0x80u);
            g->edx = sp0 - 0x80u;
            g->esp = sp0 - 0x88u;
            t7 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, sp0 - 0x80u, 1u);
            t8 = g->edx;
            wr8(self + 0x24u, 1u);
            eax = t7;
            edx = t8;
            loc_84 = rd32(sp0 - 0x84u);
            loc_88 = rd32(sp0 - 0x88u);
        }
    }
    COW_AT(102063c0)
    g->esi = loc_84;
    g->edi = loc_88;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10206350(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020636bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x88u);
        in_esi = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x88u;
        g->edx = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10206372u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x88u);
        in_esi = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x88u;
        g->edx = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1020637cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x88u);
        in_esi = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x8cu;
        g->edx = self + 0x14u;
        wr32(sp0 - 0x8cu, self + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10206390u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x88u);
        in_esi = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x8cu;
        g->edx = self + 0x14u;
        wr32(sp0 - 0x8cu, self + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x102063a2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x94u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102063c0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
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
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10206350(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10206350(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
