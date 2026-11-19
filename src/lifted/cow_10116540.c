/* f_0x10116540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10116540(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_7c;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 164u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011655cu: ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x7cu); goto E_1011655c;
    case 0x10116565u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x7cu); goto E_10116565;
    case 0x101165e0u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101165e0;
    case 0x101165e7u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101165e7;
    case 0x101165eau: ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_7c = rd32(sp0 - 0x7cu); goto E_101165ea;
    default: break;
    }
#endif

    COW_AT(10116540)
    wr32(sp0 - 0x7cu, in_esi);
    if (rd32(arg1) > 0xfc0u)
    {
        loc_7c = in_esi;
        goto L_101165ea;
    }
    ecx = rd32(arg1);
    COW_AT(1011655c)
    if (ecx < 0x1cu)
    {
        loc_7c = in_esi;
        goto L_101165ea;
    }
    COW_AT(10116565)
    wr32(sp0 - 0x80u, in_ebx);
    wr32(sp0 - 0x84u, in_ebp);
    wr32(sp0 - 0x88u, in_edi);
    t1 = rd32(arg1 + 0x14u);
    wr32(sp0 - 0x70u, t1);
    t2 = rd32(arg1 + 0x18u);
    t3 = rd32(arg1 + 0xcu);
    t4 = rd32(arg1 + 0x10u);
    wr32(arg1 + 0xcu, 0u);
    wr32(sp0 - 0x6cu, t2);
    wr32(arg1 + 0x10u, 0u);
    wr32(sp0 - 0x8cu, sp0 - 0x58u);
    wr32(arg1 + 0x14u, 0u);
    wr32(arg1 + 0x18u, 0u);
    g->edx = sp0 - 0x58u;
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x100d7420u), 1, sp0 - 0x58u);
    t5 = g->edx;
    wr32(sp0 - 0x90u, rd32(arg1));
    wr32(sp0 - 0x94u, arg1);
    wr32(sp0 - 0x98u, sp0 - 0x58u);
    g->ecx = sp0 - 0x58u;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x100d7450u), 3, sp0 - 0x58u, arg1, rd32(arg1));
    t6 = g->ecx;
    wr32(sp0 - 0x9cu, sp0 - 0x58u);
    wr32(sp0 - 0xa0u, sp0 - 0x68u);
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x100d7560u), 4, sp0 - 0x68u, sp0 - 0x58u, sp0 - 0x58u, arg1);
    t7 = rd32(sp0 - 0x6cu);
    t8 = rd32(sp0 - 0x70u);
    wr32(arg1 + 0xcu, t3);
    wr32(arg1 + 0x10u, t4);
    wr32(arg1 + 0x14u, t8);
    wr32(arg1 + 0x18u, t7);
    esi = sp0 - 0x68u;
    edi = arg1 + 0xcu;
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t7;
        goto L_101165e7;
    }
    COW_AT(101165e0)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_101165e7: ;
    COW_AT(101165e7)
    loc_7c = rd32(sp0 - 0x7cu);
L_101165ea: ;
    COW_AT(101165ea)
    g->ebx = in_ebx;
    g->esi = loc_7c;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10116540(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011655cu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x7cu;
        g->eax = 0xffffffffu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10116565u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x7cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101165e0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0xa0u, sp0 - 0x68u);
        wr32(sp0 - 0x9cu, sp0 - 0x58u);
        wr32(sp0 - 0x98u, sp0 - 0x58u);
        wr32(sp0 - 0x8cu, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x101165e7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0xa0u, sp0 - 0x68u);
        wr32(sp0 - 0x9cu, sp0 - 0x58u);
        wr32(sp0 - 0x98u, sp0 - 0x58u);
        wr32(sp0 - 0x8cu, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x101165eau:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_7c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x7cu;
        g->eax = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10116540(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10116540(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
