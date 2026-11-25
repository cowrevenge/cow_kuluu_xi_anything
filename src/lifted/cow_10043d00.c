/* f_0x10043d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10043d00(Guest* g)
{
    double d1;
    double d10;
    double d3;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10043d24u: eax = g->eax; self = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10043d24;
    case 0x10043d2du: eax = g->eax; edx = g->edx; goto E_10043d2d;
    case 0x10043d34u: eax = g->eax; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10043d34;
    case 0x10043d8fu: eax = g->eax; edx = g->edx; self = g->esi; goto E_10043d8f;
    case 0x10043d9fu: eax = g->eax; edx = g->edx; goto E_10043d9f;
    default: break;
    }
#endif

    COW_AT(10043d00)
    wr32(sp0 - 0x10u, in_esi);
    d1 = fr(g, (double)rdf32(self + 0x74u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    t2 = rd32(COW_IMG(0x1047bfa8u));
    d3 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x74u, (float)d1);
    if (!(d1 < d3))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
        x0 = d1;
        goto L_10043d34;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
    x0 = d1;
    COW_AT(10043d24)
    wr32(sp0 - 0x14u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t4 = rd32(self);
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, rd32(t4 + 0x18u), self, 1, 1u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(10043d2d)
    g->esi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10043d34: ;
    COW_AT(10043d34)
    d7 = fr(g, fr(g, fr(g, (double)rdf32(self + 0x8cu) - (double)rdf32(self + 0x80u)) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x78u)))) + (double)rdf32(self + 0x80u));
    d8 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x78u)));
    wrf32(sp0 - 0xcu, (float)(double)(float)d7);
    d9 = fr(g, fr(g, fr(g, (double)rdf32(self + 0x90u) - (double)rdf32(self + 0x84u)) * d8) + (double)rdf32(self + 0x84u));
    wrf32(sp0 - 8u, (float)(double)(float)d9);
    d10 = fr(g, fr(g, fr(g, (double)rdf32(self + 0x94u) - (double)rdf32(self + 0x88u)) * d8) + (double)rdf32(self + 0x88u));
    wrf32(sp0 - 4u, (float)(double)(float)d10);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    eax = t11;
    COW_AT(10043d8f)
    wr32(sp0 - 0x14u, sp0 - 0xcu);
    t12 = rd32(self + 0x7cu);
    wr32(sp0 - 0x18u, t12);
    g->eax = eax;
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x100acea0u), eax, 2, t12, sp0 - 0xcu);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(10043d9f)
    g->esi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10043d00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10043d24u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10043d2du:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10043d34u:
    {
        uint32_t eax;
        uint32_t self;
        double x0;
        eax = g->eax;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10043d8fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10043d9fu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10043d00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10043d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
