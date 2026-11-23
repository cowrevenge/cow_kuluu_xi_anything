/* f_0x10032e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=11 */
void cow_fn_10032e70(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d15;
    double d16;
    double d17;
    double d19;
    double d2;
    double d20;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t13;
    uint32_t t14;
    uint32_t t18;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10032e8bu: eax = g->eax; self = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10032e8b;
    case 0x10032ed3u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_10032ed3;
    case 0x10032ed6u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10032ed6;
    case 0x10032eebu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_10032eeb;
    case 0x10032ef0u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_10032ef0;
    case 0x10032f04u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_10032f04;
    case 0x10032f09u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_10032f09;
    case 0x10032f91u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10032f91;
    default: break;
    }
#endif

    COW_AT(10032e70)
    d1 = fr(g, fr(g, (double)rdf32(sp0 + 0x2cu) + (double)rdf32(sp0 + 0x18u)) + (double)rdf32(sp0 + 4u));
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
        x0 = d1;
        goto L_10032ed6;
    }
    eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    x0 = d1;
    COW_AT(10032e8b)
    d2 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) * fr(g, sqrt(fr(g, x0 + (double)rdf32(sp0 + 0x40u)))));
    d3 = fr(g, sqrt(fr(g, x0 + (double)rdf32(sp0 + 0x40u))));
    wrf32(self + 0xcu, (float)d2);
    d4 = fr(g, fr(g, (double)rdf32(sp0 + 0x1cu) - (double)rdf32(sp0 + 0x28u)) * fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / d3));
    d5 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / d3);
    wrf32(self, (float)d4);
    d6 = fr(g, fr(g, (double)rdf32(sp0 + 0x24u) - (double)rdf32(sp0 + 0xcu)) * d5);
    wrf32(self + 4u, (float)d6);
    d7 = fr(g, fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(sp0 + 0x14u)) * d5);
    wrf32(self + 8u, (float)d7);
    g->esp = sp0;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    COW_AT(10032ed3)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_10032ed6: ;
    COW_AT(10032ed6)
    d8 = (double)rdf32(sp0 + 0x18u);
    d9 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d8, d9, 0u) & 0x4100u) != 0u)
    {
        edx = 0u;
    }
    else
    {
    COW_AT(10032eeb)
        edx = 1u;
    }
    COW_AT(10032ef0)
    d10 = (double)rdf32(sp0 + 0x2cu);
    d11 = (double)rdf32(edx * 0x14u + sp0 + 4u);
    if ((cow_fsw(g, d10, d11, 0u) & 0x4100u) == 0u)
    {
    COW_AT(10032f04)
        edx = 2u;
    }
    COW_AT(10032f09)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    d12 = fr(g, fr(g, (double)rdf32(edx * 0x14u + sp0 + 4u) - fr(g, (double)rdf32(sp0 + rd32(COW_IMG(0x1035168cu) + rd32(COW_IMG(0x1035168cu) + edx * 4u) * 4u) * 0x14u + 4u) + (double)rdf32(sp0 + rd32(COW_IMG(0x1035168cu) + edx * 4u) * 0x14u + 4u))) + (double)rdf32(COW_IMG(0x1032961cu)));
    t13 = rd32(COW_IMG(0x1035168cu) + edx * 4u);
    t14 = rd32(COW_IMG(0x1035168cu) + rd32(COW_IMG(0x1035168cu) + edx * 4u) * 4u);
    d15 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) * fr(g, sqrt(d12)));
    wrf32(edx * 4u + self, (float)d15);
    d16 = fr(g, fr(g, (double)rdf32(sp0 + t13 * 0x10u + t14 * 4u + 4u) - (double)rdf32(sp0 + t13 * 4u + t14 * 0x10u + 4u)) * fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / fr(g, sqrt(d12))));
    d17 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / fr(g, sqrt(d12)));
    wrf32(self + 0xcu, (float)d16);
    t18 = rd32(sp0 - 0x10u);
    d19 = fr(g, fr(g, (double)rdf32(edx * 4u + sp0 + t13 * 0x10u + 4u) + (double)rdf32(edx * 0x10u + sp0 + t13 * 4u + 4u)) * d17);
    wrf32(self + t13 * 4u, (float)d19);
    d20 = fr(g, fr(g, (double)rdf32(edx * 4u + sp0 + t14 * 0x10u + 4u) + (double)rdf32(edx * 0x10u + sp0 + t14 * 4u + 4u)) * d17);
    wrf32(self + t14 * 4u, (float)d20);
    t21 = rd32(sp0 - 4u);
    t22 = rd32(sp0 - 8u);
    t23 = rd32(sp0 - 0xcu);
    g->esp = sp0;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    ebx = t21;
    ebp = t22;
    esi = t23;
    edi = t18;
    COW_AT(10032f91)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10032e70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10032e8bu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10032ed3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10032ed6u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10032eebu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10032ef0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10032f04u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10032f09u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10032f91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10032e70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10032e70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 64u);
}
/* COW_ADAPTER END */
