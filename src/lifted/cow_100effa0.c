/* f_0x100effa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100effa0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100effc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100effc8;
    case 0x100effcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100effcf;
    case 0x100effe1u: eax = g->eax; ecx = g->ecx; zf = g->zf; sf = g->sf; goto E_100effe1;
    case 0x100efff3u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100efff3;
    default: break;
    }
#endif

    COW_AT(100effa0)
    t1 = rd32(COW_IMG(0x104df770u));
    wr32(t1 + 0x136acu, 0u);
    wr32(sp0 - 0x6cu, sp0 - 0x68u);
    wr32(sp0 - 0x70u, arg1);
    g->eax = t1;
    g->edx = arg1;
    g->esp = sp0 - 0x68u;
    t2 = cow_cdecl(g, COW_IMG(0x1030ffe1u), 2, arg1, sp0 - 0x68u);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        edx = t3;
        goto L_100efff3;
    }
    eax = t2;
    edx = t3;
    COW_AT(100effc8)
    if (!(rd8(sp0 - 0x68u) & 1u)) goto L_100efff3;
    COW_AT(100effcf)
    t4 = rd32(sp0 - 0x58u);
    if ((t4 & 0x8000u) == 0u)
    {
        eax = t4;
        edx = 0u;
        goto L_100efff3;
    }
    eax = t4;
    zf = (t4 & 0x8000u) == 0u;
    sf = (int32_t)(t4 & 0x8000u) < 0;
    COW_AT(100effe1)
    t5 = rd32(sp0 - 0x54u);
    ecx = t5;
    cf = 0u;
    pf = PARITY(0u);
    of = 0u;
    { /* shrd eax, ecx, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = eax, b = ecx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
    g->edx = 0u;
    return eax & 0x3fu;
L_100efff3: ;
    COW_AT(100efff3)
    g->edx = edx;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100effa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100effc8u:
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
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100effcfu:
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
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100effe1u:
    {
        uint32_t eax;
        uint32_t ecx;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x68u;
        g->edx = 0u;
        g->cf = (uint8_t)(0u);
        g->pf = (uint8_t)(PARITY(0u));
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x6cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100efff3u:
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
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100effa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100effa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
