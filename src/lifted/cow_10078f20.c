/* f_0x10078f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10078f20(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_408;
    uint32_t loc_40c;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    cow_frame(g, sp0, 1060u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10078f59u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40cu); in_esi = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x40cu); g->esi = rd32(sp0 - 0x408u); goto E_10078f59;
    case 0x10078f60u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40cu); in_esi = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x40cu); g->esi = rd32(sp0 - 0x408u); goto E_10078f60;
    case 0x10078f7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078f7e;
    case 0x10078f92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078f92;
    case 0x10078f9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_40c = rd32(sp0 - 0x40cu); loc_408 = rd32(sp0 - 0x408u); goto E_10078f9b;
    case 0x10078fadu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078fad;
    case 0x10078febu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078feb;
    case 0x10078ff0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10078ff0;
    default: break;
    }
#endif

    COW_AT(10078f20)
    wr32(sp0 - 0x408u, in_esi);
    wr32(sp0 - 0x40cu, in_edi);
    wr32(sp0 - 0x410u, rd32(COW_IMG(0x103551e4u)));
    wr32(sp0 - 0x414u, rd32(COW_IMG(0x103551e0u)));
    wr32(sp0 - 0x418u, COW_IMG(0x10354de0u));
    wr32(sp0 - 0x41cu, 0u);
    t1 = rd32(COW_IMG(0x103551e0u));
    t2 = rd32(COW_IMG(0x103551e4u));
    wr8(sp0 - 0x404u, 7u);
    wr8(sp0 - 0x403u, 0u);
    wr8(sp0 - 0x402u, 0u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x40cu;
    t3 = cow_cdecl(g, COW_IMG(0x10078350u), 4, 0u, COW_IMG(0x10354de0u), t1, t2);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        esi = t3;
        goto L_10078f60;
    }
    eax = t3;
    edx = t4;
    edi = t2;
    COW_AT(10078f59)
    if (rd32(edi + 4u) == 0u)
    {
        loc_408 = in_esi;
        loc_40c = in_edi;
        goto L_10078f9b;
    }
    esi = rd32(edi + 4u);
L_10078f60: ;
    COW_AT(10078f60)
    wr32(sp0 - 0x410u, esi);
    wr32(sp0 - 0x414u, sp0 - 0x400u);
    g->edx = edx;
    g->esp = sp0 - 0x3f8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), sp0 - 0x400u, 7, sp0 - 0x400u, esi, in_edi, in_esi, rd32(sp0 - 0x404u), rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu));
    t5 = g->ecx;
    t6 = g->edx;
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
        edx = t6;
        loc_408 = in_esi;
        loc_40c = in_edi;
        goto L_10078f9b;
    }
    ecx = ~ecx - 1u;
    COW_AT(10078f7e)
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    wr32(sp0 - 0x414u, eax);
    wr32(sp0 - 0x418u, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x40cu;
    t7 = cow_cdecl(g, COW_IMG(0x100e3400u), 3, 8u, eax, sp0 - 0x400u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 1u)
    {
        edx = t9;
        loc_408 = rd32(sp0 - 0x408u);
        loc_40c = rd32(sp0 - 0x40cu);
        goto L_10078f9b;
    }
    ecx = t8;
    edx = t9;
    COW_AT(10078f92)
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_10078fad;
    }
    loc_408 = rd32(sp0 - 0x408u);
    loc_40c = rd32(sp0 - 0x40cu);
L_10078f9b: ;
    COW_AT(10078f9b)
    g->esi = loc_408;
    g->edi = loc_40c;
    g->edx = edx;
    return -arg3;
L_10078fad: ;
    COW_AT(10078fad)
    wr32(sp0 - 0x410u, esi);
    wr32(sp0 - 0x414u, eax + 0x3c3a4u);
    wr32(sp0 - 0x418u, COW_IMG(0x10358098u));
    wr32(sp0 - 0x41cu, sp0 - 0x400u);
    g->eax = sp0 - 0x400u;
    g->esp = sp0 - 0x408u;
    t10 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10358098u), eax + 0x3c3a4u, esi, rd32(sp0 - 0x40cu));
    wr32(sp0 - 0x410u, 0u);
    wr32(sp0 - 0x414u, 1u);
    wr32(sp0 - 0x418u, 0u);
    wr32(sp0 - 0x41cu, sp0 - 0x404u);
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x40cu;
    t11 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x400u, sp0 - 0x404u, 0u, 1u, 0u);
    t12 = g->edx;
    if (rd32(COW_IMG(0x10662da4u)) == 0u)
    {
        edx = t12;
    }
    else
    {
        eax = t11;
        ecx = rd32(COW_IMG(0x10662da4u));
        edx = t12;
    COW_AT(10078feb)
        g->edx = edx;
        g->esp = sp0 - 0x40cu;
        cow_thiscall(g, COW_IMG(0x101adb80u), ecx, 0);
        t13 = g->edx;
        edx = t13;
    }
    COW_AT(10078ff0)
    g->esi = rd32(sp0 - 0x408u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = edx;
    return arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10078f20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10078f59u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40cu);
        in_esi = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    case 0x10078f60u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40cu);
        in_esi = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    case 0x10078f7eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40cu;
        wr32(sp0 - 0x414u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10078f92u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40cu;
        wr32(sp0 - 0x410u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10078f9bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_408;
        uint32_t loc_40c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_40c = rd32(sp0 - 0x40cu);
        loc_408 = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x40cu;
        (void)sp0;
        return 1;
    }
    case 0x10078fadu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40cu;
        wr32(sp0 - 0x410u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10078febu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40cu;
        wr32(sp0 - 0x420u, sp0 - 0x400u);
        wr32(sp0 - 0x41cu, sp0 - 0x404u);
        (void)sp0;
        return 1;
    }
    case 0x10078ff0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40cu;
        wr32(sp0 - 0x420u, sp0 - 0x400u);
        wr32(sp0 - 0x41cu, sp0 - 0x404u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10078f20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10078f20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
