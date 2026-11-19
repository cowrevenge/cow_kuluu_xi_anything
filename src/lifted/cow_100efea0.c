/* f_0x100efea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100efea0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 124u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100efecdu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_100efecd;
    case 0x100efed4u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_100efed4;
    case 0x100efee5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_100efee5;
    case 0x100eff03u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_100eff03;
    case 0x100eff0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_100eff0e;
    default: break;
    }
#endif

    COW_AT(100efea0)
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    wr32(sp0 - 0x74u, sp0 - 0x68u);
    wr32(sp0 - 0x78u, arg1);
    t1 = rd32(COW_IMG(0x104df770u));
    wr32(t1 + 0x136acu, 0u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t2 = cow_cdecl(g, COW_IMG(0x1030ffe1u), 2, arg1, sp0 - 0x68u);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        edx = t3;
        esi = 0xffffffffu;
        goto L_100eff03;
    }
    edx = t3;
    COW_AT(100efecd)
    if (!(rd8(sp0 - 0x68u) & 1u))
    {
        esi = 0xffffffffu;
        goto L_100eff03;
    }
    COW_AT(100efed4)
    t4 = rd32(sp0 - 0x58u);
    if ((t4 & 0x8000u) == 0u)
    {
        edx = 0u;
        esi = 0xffffffffu;
        goto L_100eff03;
    }
    eax = t4 & 0x8000u;
    ecx = t4;
    zf = (t4 & 0x8000u) == 0u;
    sf = (int32_t)(t4 & 0x8000u) < 0;
    COW_AT(100efee5)
    t5 = rd32(sp0 - 0x54u);
    edx = t5;
    cf = 0u;
    pf = PARITY(0u);
    of = 0u;
    { /* shrd ecx, edx, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = ecx, b = edx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); ecx = (uint32_t)(r); } } }
    wr32(sp0 - 0x74u, ecx & 0x3fu);
    wr32(sp0 - 0x78u, arg1);
    g->eax = eax;
    g->edx = edx >> 0x10u;
    g->esp = sp0 - 0x70u;
    t6 = cow_cdecl(g, COW_IMG(0x1031002eu), 2, arg1, ecx & 0x3fu);
    t7 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        edx = t7;
        esi = t6;
        goto L_100eff0e;
    }
    edx = t7;
    esi = t6;
L_100eff03: ;
    COW_AT(100eff03)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, esi);
L_100eff0e: ;
    COW_AT(100eff0e)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100efea0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100efecdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        g->esi = 0xffffffffu;
        g->edi = arg1;
        wr32(sp0 - 0x74u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100efed4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        g->esi = 0xffffffffu;
        g->edi = arg1;
        wr32(sp0 - 0x74u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100efee5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        g->edi = arg1;
        g->cf = (uint8_t)(0u);
        g->pf = (uint8_t)(PARITY(0u));
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x74u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100eff03u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x100eff0eu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100efea0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100efea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
