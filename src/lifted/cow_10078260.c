/* f_0x10078260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10078260(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_408;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1056u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10078298u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x408u); g->esi = rd32(sp0 - 0x408u); goto E_10078298;
    case 0x100782a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x408u); g->esi = rd32(sp0 - 0x408u); goto E_100782a5;
    case 0x100782c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100782c5;
    case 0x100782d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100782d8;
    case 0x100782e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_408 = rd32(sp0 - 0x408u); goto E_100782e1;
    case 0x100782f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100782f2;
    case 0x10078330u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078330;
    case 0x10078335u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078335;
    default: break;
    }
#endif

    COW_AT(10078260)
    wr32(sp0 - 0x408u, in_esi);
    wr32(sp0 - 0x40cu, rd32(COW_IMG(0x103551e4u)));
    wr32(sp0 - 0x410u, rd32(COW_IMG(0x103551e0u)));
    wr32(sp0 - 0x414u, COW_IMG(0x10354de0u));
    wr32(sp0 - 0x418u, 0u);
    t1 = rd32(COW_IMG(0x103551e4u));
    t2 = rd32(COW_IMG(0x103551e0u));
    wr8(sp0 - 0x404u, 1u);
    wr8(sp0 - 0x403u, 0u);
    wr8(sp0 - 0x402u, 0u);
    g->eax = t1;
    g->ecx = t2;
    g->edx = in_edx;
    g->esp = sp0 - 0x408u;
    t3 = cow_cdecl(g, COW_IMG(0x10078350u), 4, 0u, COW_IMG(0x10354de0u), t2, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        ecx = t4;
        edx = t5;
        esi = t3;
        goto L_100782a5;
    }
    ecx = t4;
    COW_AT(10078298)
    if (rd32(rd32(COW_IMG(0x103551e4u)) + 4u) == 0u)
    {
        edx = rd32(COW_IMG(0x103551e4u));
        loc_408 = in_esi;
        goto L_100782e1;
    }
    edx = rd32(COW_IMG(0x103551e4u));
    esi = rd32(rd32(COW_IMG(0x103551e4u)) + 4u);
L_100782a5: ;
    COW_AT(100782a5)
    wr32(sp0 - 0x40cu, in_edi);
    wr32(sp0 - 0x410u, esi);
    wr32(sp0 - 0x414u, sp0 - 0x400u);
    g->edx = edx;
    g->esp = sp0 - 0x3f8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), ecx, 7, sp0 - 0x400u, esi, in_edi, in_esi, rd32(sp0 - 0x404u), rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu));
    t6 = g->ecx;
    t7 = g->edx;
    edi = sp0 - 0x400u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x40cu < sp0 - 0x414u;
    pf = PARITY((uint8_t)(sp0 - 0x40cu));
    af = (sp0 - 0x414u ^ sp0 - 0x40cu) >> 4u & 1u;
    zf = sp0 == 0x40cu;
    sf = (int32_t)(sp0 - 0x40cu) < 0;
    of = ((sp0 - 0x414u ^ sp0 - 0x40cu) & (sp0 - 0x40cu ^ 8u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        edx = t7;
        loc_408 = in_esi;
        goto L_100782e1;
    }
    edx = t7;
    COW_AT(100782c5)
    wr32(sp0 - 0x40cu, sp0 - 0x400u);
    wr32(sp0 - 0x410u, eax);
    wr32(sp0 - 0x414u, eax);
    g->eax = eax;
    g->ecx = sp0 - 0x400u;
    g->edx = edx;
    g->esp = sp0 - 0x408u;
    t8 = cow_cdecl(g, COW_IMG(0x100e3400u), 3, eax, eax, sp0 - 0x400u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 1u)
    {
        edx = t10;
        loc_408 = rd32(sp0 - 0x408u);
        goto L_100782e1;
    }
    ecx = t9;
    edx = t10;
    COW_AT(100782d8)
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100782f2;
    }
    loc_408 = rd32(sp0 - 0x408u);
L_100782e1: ;
    COW_AT(100782e1)
    g->esi = loc_408;
    g->edi = in_edi;
    g->edx = edx;
    return -arg3;
L_100782f2: ;
    COW_AT(100782f2)
    wr32(sp0 - 0x40cu, esi);
    wr32(sp0 - 0x410u, eax + 0x3c3a4u);
    wr32(sp0 - 0x414u, COW_IMG(0x10358024u));
    wr32(sp0 - 0x418u, sp0 - 0x400u);
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x404u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10358024u), eax + 0x3c3a4u, esi, rd32(sp0 - 0x408u));
    t11 = g->edx;
    wr32(sp0 - 0x40cu, 0u);
    wr32(sp0 - 0x410u, 1u);
    wr32(sp0 - 0x414u, 0u);
    wr32(sp0 - 0x418u, sp0 - 0x404u);
    wr32(sp0 - 0x41cu, sp0 - 0x400u);
    g->eax = sp0 - 0x404u;
    g->edx = t11;
    g->esp = sp0 - 0x408u;
    t12 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x400u, sp0 - 0x404u, 0u, 1u, 0u);
    t13 = g->edx;
    if (rd32(COW_IMG(0x10662da4u)) == 0u)
    {
        edx = t13;
    }
    else
    {
        eax = t12;
        ecx = rd32(COW_IMG(0x10662da4u));
        edx = t13;
    COW_AT(10078330)
        g->edx = edx;
        g->esp = sp0 - 0x408u;
        cow_thiscall(g, COW_IMG(0x101adb80u), ecx, 0);
        t14 = g->edx;
        edx = t14;
    }
    COW_AT(10078335)
    g->esi = rd32(sp0 - 0x408u);
    g->edi = in_edi;
    g->edx = edx;
    return arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10078260(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10078298u:
    {
        unsigned af;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x408u;
        (void)sp0;
        return 1;
    }
    case 0x100782a5u:
    {
        unsigned af;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x408u;
        (void)sp0;
        return 1;
    }
    case 0x100782c5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x408u;
        wr32(sp0 - 0x414u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x100782d8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x408u;
        wr32(sp0 - 0x40cu, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x100782e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_408;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_408 = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x408u;
        (void)sp0;
        return 1;
    }
    case 0x100782f2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x408u;
        wr32(sp0 - 0x40cu, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10078330u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x408u;
        wr32(sp0 - 0x41cu, sp0 - 0x400u);
        wr32(sp0 - 0x418u, sp0 - 0x404u);
        (void)sp0;
        return 1;
    }
    case 0x10078335u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x408u;
        wr32(sp0 - 0x41cu, sp0 - 0x400u);
        wr32(sp0 - 0x418u, sp0 - 0x404u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10078260(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10078260(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
