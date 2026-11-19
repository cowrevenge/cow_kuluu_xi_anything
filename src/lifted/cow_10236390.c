/* f_0x10236390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10236390(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_24;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102363aau: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102363aa;
    case 0x102363b6u: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102363b6;
    case 0x102363bbu: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102363bb;
    case 0x102363c7u: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102363c7;
    case 0x102363ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102363cc;
    case 0x102363d8u: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102363d8;
    case 0x102363e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102363e2;
    case 0x102363fau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_102363fa;
    case 0x1023641au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023641a;
    case 0x10236427u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_10236427;
    default: break;
    }
#endif

    COW_AT(10236390)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_stdcall(g, COW_IMG(0x102361b0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = cow_fastcall(g, COW_IMG(0x103149e0u), t2, t3, 0);
    t5 = cow_divs(g, t4, 0x64u);
    t6 = cow_mods(g, t4, 0x64u);
    if ((int32_t)t6 >= 40)
    {
        eax = t5;
        edx = t6;
    COW_AT(102363b6)
        if ((int32_t)edx >= 55)
        {
    COW_AT(102363c7)
            if ((int32_t)edx >= 58)
            {
    COW_AT(102363d8)
                wr32(sp0 - 0x20u, sp0 - 0x1cu);
                g->ecx = 0x64u;
                g->edx = sp0 - 0x1cu;
                g->esp = sp0 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x10236fe0u), 1, sp0 - 0x1cu);
                t13 = g->ecx;
                t14 = g->edx;
                ecx = t13;
                edx = t14;
            }
            else
            {
    COW_AT(102363cc)
                wr32(sp0 - 0x20u, sp0 - 0x1cu);
                g->ecx = sp0 - 0x1cu;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x10236da0u), 1, sp0 - 0x1cu);
                t11 = g->ecx;
                t12 = g->edx;
                ecx = t11;
                edx = t12;
            }
        }
        else
        {
    COW_AT(102363bb)
            wr32(sp0 - 0x20u, sp0 - 0x1cu);
            g->ecx = 0x64u;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x10236ba0u), 1, sp0 - 0x1cu);
            t9 = g->ecx;
            t10 = g->edx;
            ecx = t9;
            edx = t10;
        }
    }
    else
    {
        eax = t5;
    COW_AT(102363aa)
        wr32(sp0 - 0x20u, sp0 - 0x1cu);
        g->ecx = 0x64u;
        g->edx = sp0 - 0x1cu;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10236a60u), 1, sp0 - 0x1cu);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    COW_AT(102363e2)
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u <= 0xfu)
    {
        ecx = ~ecx - 1u;
        loc_20 = in_esi;
        loc_24 = in_edi;
    }
    else
    {
        ecx = ~ecx - 1u;
    COW_AT(102363fa)
        wr32(sp0 - 0x28u, sp0 - 0x1cu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x10236da0u), 1, sp0 - 0x1cu);
        t15 = g->ecx;
        t16 = g->edx;
        edi = sp0 - 0x1cu;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = sp0 - 0x24u < sp0 - 0x28u;
        pf = PARITY((uint8_t)(sp0 - 0x24u));
        af = (sp0 - 0x28u ^ sp0 - 0x24u) >> 4u & 1u;
        zf = sp0 == 0x24u;
        sf = (int32_t)(sp0 - 0x24u) < 0;
        of = ((sp0 - 0x28u ^ sp0 - 0x24u) & (sp0 - 0x24u ^ 4u)) >> 0x1fu;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (~ecx - 1u <= 0xfu)
        {
            ecx = ~ecx - 1u;
            loc_20 = in_esi;
            loc_24 = in_edi;
        }
        else
        {
            edx = t16;
    COW_AT(1023641a)
            wr32(sp0 - 0x28u, sp0 - 0x1cu);
            g->eax = eax;
            g->ecx = sp0 - 0x1cu;
            g->esp = sp0 - 0x24u;
            t17 = cow_cdecl(g, COW_IMG(0x10236450u), 1, sp0 - 0x1cu);
            t18 = g->ecx;
            eax = t17;
            ecx = t18;
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
        }
    }
    COW_AT(10236427)
    wr32(sp0 - 0x28u, 0xfu);
    wr32(sp0 - 0x2cu, sp0 - 0x1cu);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg1, sp0 - 0x1cu, 0xfu);
    wr8(arg1 + 0xfu, 0u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10236390(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102363aau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ecx = 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102363b6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ecx = 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102363bbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ecx = 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102363c7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ecx = 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102363ccu:
    {
        unsigned af;
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
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102363d8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1cu;
        g->ecx = 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x102363e2u:
    {
        unsigned af;
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
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102363fau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1023641au:
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
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10236427u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        uint32_t loc_24;
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
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10236390(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10236390(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
