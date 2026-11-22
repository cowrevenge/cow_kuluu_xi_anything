/* f_0x10061630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10061630(Guest* g)
{
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_4_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10061639u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_10061639;
    case 0x1006163du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006163d;
    case 0x10061642u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_10061642;
    case 0x10061667u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->esi = rd32(sp0 - 8u); goto E_10061667;
    case 0x10061677u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 8u); goto E_10061677;
    case 0x1006167cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 8u); goto E_1006167c;
    case 0x1006168bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 8u); goto E_1006168b;
    case 0x10061690u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 8u); goto E_10061690;
    case 0x10061695u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 8u); goto E_10061695;
    case 0x100616a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 8u); goto E_100616a4;
    default: break;
    }
#endif

    COW_AT(10061630)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10061110u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10061639)
    if ((uint8_t)eax == 0u) goto L_10061642;
    COW_AT(1006163d)
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10061642: ;
    COW_AT(10061642)
    g->edx = edx;
    d4 = rdf64(COW_IMG(0x1032abc8u));
    d5 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, (double)rdf32(self + 0x74u) / (double)rdf32(self + 0x80u))) * fr(g, (double)rdf32(self + 0x7cu) - (double)rdf32(self + 0x78u))) + (double)rdf32(self + 0x78u));
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x103138fau), eax, ecx, g->edx, 1, 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    x1 = d4;
    x0 = d5;
    COW_AT(10061667)
    if (rd8(self + 0x84u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x84u);
        loc_4_f = (double)(float)x1;
        goto L_10061690;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x84u);
    loc_4_f = (double)(float)x1;
    COW_AT(10061677)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10061520u), self, 0);
    eax = t8;
    COW_AT(1006167c)
    g->eax = eax;
    g->edx = rd32(eax);
    t9 = rd32(eax);
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, rd32(t9 + 0x418u), eax, 1, cow_f2bits(loc_4_f));
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(1006168b)
    g->esi = in_esi;
    g->edx = edx;
    fpush(g, x0);
    return eax & 0xffffff00u;
L_10061690: ;
    COW_AT(10061690)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x10061520u), self, 0);
    eax = t12;
    COW_AT(10061695)
    g->eax = eax;
    g->edx = rd32(eax);
    t13 = rd32(eax);
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, rd32(t13 + 0x410u), eax, 1, cow_f2bits(loc_4_f));
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(100616a4)
    g->esi = in_esi;
    g->edx = edx;
    fpush(g, x0);
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10061630(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10061639u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1006163du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10061642u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10061667u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10061677u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        double x0;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1006167cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1006168bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10061690u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        double x0;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10061695u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100616a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10061630(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10061630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
