/* f_0x100e8220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e8220(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e8239u: eax = g->eax; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100e8239;
    case 0x100e8245u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100e8245;
    case 0x100e82aau: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100e82aa;
    case 0x100e82beu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100e82be;
    case 0x100e82d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100e82d2;
    case 0x100e82deu: eax = g->eax; ecx = g->ecx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100e82de;
    default: break;
    }
#endif

    COW_AT(100e8220)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x3d4u) != 2u) goto L_100e82de;
    eax = rd32(COW_IMG(0x104df770u));
    COW_AT(100e8239)
    if (rd32(eax + 0x5f0u) != 2u) goto L_100e82de;
    COW_AT(100e8245)
    wr32(sp0 - 0xcu, 1u);
    wr32(eax + 0x3d4u, 3u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x5f0u, 3u);
    t1 = rd32(COW_IMG(0x104df770u));
    t2 = rd32(rd32(COW_IMG(0x104df770u)) + rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) * 0x100u + 0xb2cu);
    t3 = rd32(rd32(COW_IMG(0x104df770u)) + rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) * 0x100u + 0xb28u);
    ecx = t2;
    edx = t3;
    cf = rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) >> 0x18u & 1u;
    pf = PARITY(0u);
    zf = rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) << 8u == 0u;
    sf = (int32_t)(rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) << 8u) < 0;
    of = rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) << 8u >> 0x1fu ^ (rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) >> 0x18u & 1u);
    { /* shrd edx, ecx, 1 */ { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = edx, b = ecx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edx = (uint32_t)(r); } } }
    wr32(sp0 - 8u, edx);
    t4 = ecx >> 1u & 0xfffu;
    wr32(sp0 - 4u, t4);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, COW_IMG(0x10361e30u));
    wr32(sp0 - 0x18u, t1 + 0x818u);
    t5 = rd32(t1 + 0x5e8u);
    wr32(sp0 - 0x1cu, t5);
    g->ecx = t1 + 0x818u;
    g->edx = t5;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x103104a6u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    ecx = t6;
    edx = t7;
    COW_AT(100e82aa)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 1u);
    t8 = rd32(COW_IMG(0x104df770u)) + 0x810u;
    wr32(sp0 - 0x28u, t8);
    g->eax = t8;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t9 = cow_stdcall(g, COW_IMG(0x103104b1u), 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(100e82be)
    t11 = rd32(COW_IMG(0x104df770u)) + 0x810u;
    wr32(sp0 - 0x2cu, t11);
    wr32(sp0 - 0x30u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_stdcall(g, COW_IMG(0x103104c7u), 0);
    t12 = g->edx;
    edx = t12;
    COW_AT(100e82d2)
    g->edx = edx;
    return 1u;
L_100e82de: ;
    COW_AT(100e82de)
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e8220(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e8239u:
    {
        unsigned cf;
        uint32_t eax;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 8u;
        g->ecx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100e8245u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100e82aau:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100e82beu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100e82d2u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x100e82deu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8220(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e8220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
