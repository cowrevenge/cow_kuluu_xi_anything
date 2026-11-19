/* f_0x100aa1f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100aa1f0(Guest* g)
{
    double d13;
    double d14;
    double d15;
    double d18;
    double d19;
    double d2;
    double d21;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_24_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t16;
    uint32_t t17;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100aa1fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100aa1fc;
    case 0x100aa221u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100aa221;
    case 0x100aa251u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa251;
    case 0x100aa25eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa25e;
    case 0x100aa27au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100aa27a;
    case 0x100aa2b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100aa2b9;
    case 0x100aa2cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa2cf;
    case 0x100aa2e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa2e2;
    case 0x100aa2f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa2f8;
    case 0x100aa309u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa309;
    case 0x100aa31fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa31f;
    case 0x100aa32eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa32e;
    case 0x100aa348u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100aa348;
    case 0x100aa358u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100aa358;
    default: break;
    }
#endif

    COW_AT(100aa1f0)
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    g->esp = sp0 - 0x2cu;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    d2 = cow_take_float(g);
    eax = t1;
    x0 = d2;
    COW_AT(100aa1fc)
    wrf32(sp0 - 0x24u, (float)(double)(float)x0);
    t3 = rd32(sp0 + 4u);
    d4 = fr(g, (double)rdf32(self + 0x108u) - (double)(float)x0);
    wrf32(self + 0x108u, (float)d4);
    if (!(d4 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edi = t3;
        loc_24_f = (double)(float)x0;
        goto L_100aa27a;
    }
    edi = t3;
    COW_AT(100aa221)
    wr32(sp0 - 0x30u, edi);
    t5 = rd32(self + 0xc4u);
    wr32(edi, t5);
    t6 = rd32(self + 0xc8u);
    wr32(edi + 4u, t6);
    t7 = rd32(self + 0xccu);
    wr32(edi + 8u, t7);
    t8 = rd32(self + 0xd0u);
    wr32(edi + 0xcu, t8);
    wr32(sp0 - 0x34u, self + 0x5c4u);
    g->eax = t8;
    g->ecx = self + 0x5c4u;
    g->esp = sp0 - 0x2cu;
    t9 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x5c4u, edi);
    t10 = g->ecx;
    eax = t9;
    ecx = t10;
    COW_AT(100aa251)
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, self + 0x5fcu);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t11 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x5fcu, edi);
    eax = t11;
    COW_AT(100aa25e)
    wr32(self + 0x608u, 0x3f800000u);
    wr8(self + 0x104u, 0u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return eax;
L_100aa27a: ;
    COW_AT(100aa27a)
    t12 = rd32(self + 0xccu);
    d13 = fr(g, (double)rdf32(self + 0xc4u) - (double)rdf32(edi));
    wr32(sp0 - 8u, t12);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    wrf32(sp0 - 0x20u, (float)(double)(float)d13);
    d14 = fr(g, (double)rdf32(self + 0xc8u) - (double)rdf32(edi + 4u));
    wrf32(sp0 - 0x1cu, (float)(double)(float)d14);
    d15 = fr(g, cow_bits2f(t12) - (double)rdf32(edi + 8u));
    wrf32(sp0 - 0x18u, (float)(double)(float)d15);
    g->eax = t12;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x2cu;
    t16 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x20u, sp0 - 0x20u);
    t17 = g->edx;
    d18 = cow_take_float(g);
    eax = t16;
    edx = t17;
    x0 = d18;
    COW_AT(100aa2b9)
    wrf32(sp0 + 4u, (float)fr(g, sqrt(x0)));
    if (!(fr(g, sqrt(x0)) < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x10329a18u)), 0u);
        goto L_100aa2f8;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    COW_AT(100aa2cf)
    d19 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_100aa2f8;
    }
    COW_AT(100aa2e2)
    t20 = rd32(sp0 - 0x2cu);
    wr32(self + 0x108u, 0u);
    wr8(self + 0x104u, 0u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = t20;
    return 0u;
L_100aa2f8: ;
    COW_AT(100aa2f8)
    d21 = (double)rdf32(sp0 + 4u);
    if (!(d21 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100aa31f;
    COW_AT(100aa309)
    t22 = rd32(sp0 - 0x2cu);
    wr32(self + 0x108u, 0u);
    wr8(self + 0x104u, 0u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = t22;
    return 0u;
L_100aa31f: ;
    COW_AT(100aa31f)
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->esp = sp0 - 0x28u;
    t23 = cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x20u, sp0 - 0x20u, rd32(sp0 - 0x2cu));
    eax = t23;
    COW_AT(100aa32e)
    d24 = fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(self + 0x10cu));
    d25 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d24, d25, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d24, d25, 1u) & 0x4100u;
        x0 = d24;
    }
    else
    {
        eax = cow_fsw(g, d24, d25, 1u) & 0x4100u;
        x0 = d24;
    COW_AT(100aa348)
        d26 = (double)rdf32(sp0 + 4u);
        wr32(self + 0x108u, 0u);
        x0 = d26;
    }
    COW_AT(100aa358)
    d27 = fr(g, fr(g, (double)rdf32(sp0 - 0x20u) * x0) + (double)rdf32(edi));
    wrf32(edi, (float)d27);
    d28 = fr(g, fr(g, (double)rdf32(sp0 - 0x1cu) * x0) + (double)rdf32(edi + 4u));
    wrf32(edi + 4u, (float)d28);
    d29 = fr(g, fr(g, x0 * (double)rdf32(sp0 - 0x18u)) + (double)rdf32(edi + 8u));
    wrf32(edi + 8u, (float)d29);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100aa1f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100aa1fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100aa221u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100aa251u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100aa25eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100aa27au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100aa2b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100aa2cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100aa2e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100aa2f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100aa309u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100aa31fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100aa32eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100aa348u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100aa358u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100aa1f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100aa1f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
