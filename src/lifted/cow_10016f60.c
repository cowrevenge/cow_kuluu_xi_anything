/* f_0x10016f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10016f60(Guest* g)
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
    uint32_t t1;
    uint32_t t10;
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
    uint32_t self = g->ecx;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 272u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10016f73u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016f73;
    case 0x10016f7du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016f7d;
    case 0x10016fcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016fcb;
    case 0x10016fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10016fe5;
    default: break;
    }
#endif

    COW_AT(10016f60)
    eax = arg2;
    ecx = self;
L_10016f73: ;
    COW_AT(10016f73)
    t1 = rd8(eax);
    wr8(eax + sp0 - arg2 - 0x104u, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_10016f73;
    }
    ecx = (ecx & 0xffffff00u) | t1;
    COW_AT(10016f7d)
    wr32(sp0 - 0x108u, in_edi);
    edi = sp0 - 0x104u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = rd32(COW_IMG(0x10350738u));
    t3 = rd32(COW_IMG(0x1035073cu));
    t4 = rd32(COW_IMG(0x10350740u));
    wr32(edi - 1u, t2);
    t5 = rd16(COW_IMG(0x10350744u));
    wr32(edi + 3u, t3);
    t6 = rd8(COW_IMG(0x10350746u));
    wr32(edi + 7u, t4);
    wr32(sp0 - 0x10cu, sp0 - 0x104u);
    wr16(edi + 0xbu, (uint16_t)t5);
    wr8(edi + 0xdu, (uint8_t)t6);
    g->eax = (t2 & 0xffff0000u) | t5;
    g->ecx = (t3 & 0xffffff00u) | t6;
    g->edx = sp0 - 0x104u;
    g->esp = sp0 - 0x108u;
    t7 = cow_stdcall(g, rd32(COW_IMG(0x10329134u)), 1, sp0 - 0x104u);   /* kernel32.dll!LoadLibraryA */
    t8 = g->ecx;
    t9 = g->edx;
    wr32(COW_IMG(0x10456a44u), t7);
    if (t7 == 0u)
    {
        eax = t7;
        goto L_10016fe5;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10016fcb)
    wr32(sp0 - 0x108u, COW_IMG(0x1035072cu));
    wr32(sp0 - 0x10cu, eax);
    g->eax = eax;
    g->esp = sp0 - 0x104u;
    t10 = cow_stdcall(g, rd32(COW_IMG(0x10329138u)), 2, eax, COW_IMG(0x1035072cu));   /* kernel32.dll!GetProcAddress */
    wr32(COW_IMG(0x10456a48u), t10);
    g->edi = in_edi;
    return (t10 & 0xffffff00u) | 1u;
L_10016fe5: ;
    COW_AT(10016fe5)
    g->edi = in_edi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10016f60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10016f73u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = sp0 - 0x104u - arg2;
        (void)sp0;
        return 1;
    }
    case 0x10016f7du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x10016fcbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        wr32(sp0 - 0x10cu, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x10016fe5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        wr32(sp0 - 0x10cu, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10016f60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10016f60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
