/* f_0x100d09b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_100d09b0(Guest* g)
{
    double d10;
    double d14;
    double d18;
    double d22;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t edx;
    double loc_4_f;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d09c5u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100d09c5;
    case 0x100d09d1u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d09d1;
    case 0x100d09dau: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100d09da;
    case 0x100d09fau: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d09fa;
    case 0x100d0a0du: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d0a0d;
    case 0x100d0a24u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d0a24;
    case 0x100d0a37u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d0a37;
    case 0x100d0a4eu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d0a4e;
    case 0x100d0a61u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100d0a61;
    default: break;
    }
#endif

    COW_AT(100d09b0)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t2 = g->edx;
    if (rd32(t1) == 0u)
    {
        eax = rd32(t1);
        edx = t2;
        goto L_100d09d1;
    }
    eax = rd32(t1);
    edx = t2;
    COW_AT(100d09c5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x10035250u), eax + 8u, 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_100d09da;
    }
    eax = t3;
    edx = t4;
L_100d09d1: ;
    COW_AT(100d09d1)
    g->esi = in_esi;
    g->edx = edx;
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return eax;
L_100d09da: ;
    COW_AT(100d09da)
    d5 = (double)(float)fr(g, (double)rdf32(eax + 4u) - (double)rdf32(eax));
    g->eax = rd32(self);
    g->edx = edx;
    t6 = rd32(self);
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, rd32(t6 + 0x110u), self, 0);
    t8 = g->edx;
    d9 = cow_take_float(g);
    if (!(d9 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t7 & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_4_f = d5;
        goto L_100d0a61;
    }
    eax = (t7 & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t8;
    loc_4_f = d5;
    COW_AT(100d09fa)
    d10 = (double)rdf32(self + 0x75cu);
    if (!(d10 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100d0a4e;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100d0a0d)
    g->eax = eax;
    g->edx = rd32(self);
    t11 = rd32(self);
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, rd32(t11 + 0x110u), self, 0);
    t13 = g->edx;
    d14 = cow_take_float(g);
    if (!(d14 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t13;
        goto L_100d0a37;
    }
    eax = (t12 & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t13;
    COW_AT(100d0a24)
    g->esi = in_esi;
    g->edx = edx;
    fpush(g, fr(g, fr(g, (double)rdf32(self + 0x754u) * loc_4_f) * (double)rdf32(COW_IMG(0x10331398u))));
    return eax;
L_100d0a37: ;
    COW_AT(100d0a37)
    g->eax = rd32(self);
    g->edx = edx;
    t15 = rd32(self);
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, rd32(t15 + 0x110u), self, 0);
    t17 = g->edx;
    d18 = cow_take_float(g);
    g->esi = in_esi;
    g->edx = t17;
    fpush(g, fr(g, fr(g, d18 * loc_4_f) * (double)rdf32(COW_IMG(0x10331398u))));
    return t16;
L_100d0a4e: ;
    COW_AT(100d0a4e)
    g->esi = in_esi;
    g->edx = edx;
    fpush(g, fr(g, fr(g, (double)rdf32(self + 0x75cu) * loc_4_f) * (double)rdf32(COW_IMG(0x10331398u))));
    return eax;
L_100d0a61: ;
    COW_AT(100d0a61)
    g->eax = eax;
    g->edx = rd32(self);
    t19 = rd32(self);
    g->esp = sp0 - 8u;
    t20 = cow_thiscall(g, rd32(t19 + 0x110u), self, 0);
    t21 = g->edx;
    d22 = cow_take_float(g);
    g->esi = in_esi;
    g->edx = t21;
    fpush(g, fr(g, fr(g, d22 * loc_4_f) * (double)rdf32(COW_IMG(0x10331398u))));
    return t20;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d09b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d09c5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100d09d1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d09dau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d09fau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d0a0du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d0a24u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d0a37u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d0a4eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100d0a61u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d09b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d09b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
