/* f_0x1017a3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1017a3f0(Guest* g)
{
    double d10;
    double d14;
    double d15;
    double d16;
    double d19;
    double d20;
    double d22;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_4_f;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1017a403u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1017a403;
    case 0x1017a44bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1017a44b;
    case 0x1017a46du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1017a46d;
    case 0x1017a472u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1017a472;
    case 0x1017a476u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1017a476;
    case 0x1017a47au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1017a47a;
    case 0x1017a47cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1017a47c;
    case 0x1017a4a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; x0 = ST(0); goto E_1017a4a1;
    case 0x1017a4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; x0 = ST(0); goto E_1017a4a9;
    case 0x1017a4b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1017a4b1;
    case 0x1017a4bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_1017a4bb;
    case 0x1017a4d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; x0 = ST(0); goto E_1017a4d3;
    case 0x1017a511u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; x0 = ST(0); goto E_1017a511;
    default: break;
    }
#endif

    COW_AT(1017a3f0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd16(rd32(sp0 + 4u) + 0x154u) != 0u)
    {
        edx = in_edx;
        esi = rd32(sp0 + 4u);
    }
    else
    {
        esi = rd32(sp0 + 4u);
    COW_AT(1017a403)
        wr16(esi + 0x154u, 1u);
        g->eax = in_eax;
        g->esp = sp0 - 0xcu;
        t1 = cow_fastcall(g, COW_IMG(0x103149e0u), self, in_edx, 0);
        t2 = cow_divs(g, t1, 0x12cu);
        t3 = cow_mods(g, t1, 0x12cu);
        wr32(sp0 + 4u, t3);
        t4 = rd32(sp0 + 4u);
        wrf32(esi + 0x158u, (float)(double)(int32_t)t4);
        g->eax = t2;
        t5 = cow_thiscall(g, COW_IMG(0x101880b0u), rd32(COW_IMG(0x1065cb04u)), 0);
        wr32(sp0 - 0x10u, t5);
        wr32(sp0 - 0x14u, sp0 + 4u);
        g->edx = sp0 + 4u;
        t6 = cow_thiscall(g, COW_IMG(0x101674c0u), self + 0x34428u, 2, sp0 + 4u, t5);
        t7 = g->edx;
        wr32(esi + 0x160u, rd32(t6));
        edx = t7;
    }
    COW_AT(1017a44b)
    t8 = rd32(esi + 0x158u);
    t9 = rd32(esi + 0x160u);
    wr32(sp0 + 4u, t8);
    d10 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10336784u)));
    wrf32(sp0 - 4u, (float)(double)(float)d10);
    if (t9 == 0u)
    {
        eax = t9;
        ecx = t8;
        loc_4_f = (double)(float)d10;
        goto L_1017a4b1;
    }
    eax = t9;
    ecx = t8;
    loc_4_f = (double)(float)d10;
    COW_AT(1017a46d)
    if (rd32(eax) == 0u) goto L_1017a4b1;
    COW_AT(1017a472)
    if (eax == 0u)
    {
    COW_AT(1017a47a)
        eax = 0u;
    }
    else
    {
    COW_AT(1017a476)
        eax = rd32(eax);
    }
    COW_AT(1017a47c)
    wr32(sp0 - 0x10u, cow_f2bits(loc_4_f));
    g->edx = cow_f2bits(loc_4_f);
    g->esp = sp0 - 0xcu;
    t11 = cow_call_regs(g, COW_IMG(0x10054500u), eax, eax, g->edx, 0, 1, cow_f2bits(loc_4_f));
    t12 = g->ecx;
    t13 = g->edx;
    d14 = cow_take_float(g);
    d15 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d14);
    d16 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(esi + 0x15cu, (float)d15);
    if (!(d15 < d16))
    {
        eax = (t11 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, d16, 1u);
        ecx = t12;
        edx = t13;
        x0 = d15;
    }
    else
    {
        eax = (t11 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, d16, 1u);
        ecx = t12;
        edx = t13;
        x0 = d15;
    COW_AT(1017a4a1)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(1017a4a9)
    wrf32(esi + 0x15cu, (float)x0);
    loc_4_f = (double)rdf32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_1017a4bb: ;
    COW_AT(1017a4bb)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t18 = g->edx;
    d19 = cow_take_float(g);
    d20 = fr(g, d19 + (double)rdf32(sp0 + 4u));
    if ((cow_fsw(g, d20, (double)rdf32(COW_IMG(0x10336780u)), 1u) & 0x4100u) != 0u)
    {
        x0 = d20;
        goto L_1017a511;
    }
    eax = cow_fsw(g, d20, (double)rdf32(COW_IMG(0x10336780u)), 1u) & 0x4100u;
    edx = t18;
    x0 = d20;
    COW_AT(1017a4d3)
    t21 = rd32(COW_IMG(0x1065cb04u));
    d22 = fr(g, x0 - (double)rdf32(COW_IMG(0x10336780u)));
    wrf32(sp0 + 4u, (float)d22);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_thiscall(g, COW_IMG(0x101880b0u), t21, 0);
    t24 = g->edx;
    wr32(sp0 - 0x10u, t23);
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->eax = sp0 - 4u;
    t25 = cow_thiscall(g, COW_IMG(0x101674c0u), self + 0x34428u, 2, sp0 - 4u, t23);
    t26 = rd32(sp0 + 4u);
    wr32(esi + 0x160u, rd32(t25));
    wr32(esi + 0x158u, t26);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return;
L_1017a4b1: ;
    COW_AT(1017a4b1)
    wr32(esi + 0x15cu, 0u);
    loc_8 = in_esi;
    loc_c = in_edi;
    goto L_1017a4bb;
L_1017a511: ;
    COW_AT(1017a511)
    wrf32(esi + 0x158u, (float)x0);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1017a3f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1017a403u:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1017a44bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1017a46du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1017a472u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1017a476u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1017a47au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1017a47cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1017a4a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1017a4a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1017a4b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1017a4bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_4_f;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1017a4d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1017a511u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1017a3f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1017a3f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
