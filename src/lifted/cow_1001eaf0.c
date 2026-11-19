/* f_0x1001eaf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001eaf0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d9;
    uint32_t eax;
    uint32_t edx;
    double loc_4_f;
    double loc_8_f;
    uint32_t t12;
    uint32_t t13;
    uint32_t t7;
    uint32_t t8;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001eb27u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1001eb27;
    case 0x1001eb35u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1001eb35;
    case 0x1001eb46u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1001eb46;
    case 0x1001eb54u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1001eb54;
    case 0x1001eb63u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 0xcu); goto E_1001eb63;
    case 0x1001eb73u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 0xcu); goto E_1001eb73;
    case 0x1001eb7bu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->esi = rd32(sp0 - 0xcu); goto E_1001eb7b;
    case 0x1001eba0u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1001eba0;
    default: break;
    }
#endif

    COW_AT(1001eaf0)
    d1 = (double)(float)fr(g, (double)rdf32(self + 0x50u) - (double)rdf32(self + 0x44u));
    d2 = (double)(float)fr(g, (double)rdf32(self + 0x58u) - (double)rdf32(self + 0x4cu));
    d3 = fr(g, fr(g, atan2(fr(g, (double)rdf32(self + 0x58u) - (double)rdf32(self + 0x4cu)), d1)) + (double)rdf32(sp0 + 4u));
    wrf32(sp0 + 4u, (float)d3);
    if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_8_f = d1;
        loc_4_f = d2;
    }
    else
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_8_f = d1;
        loc_4_f = d2;
    COW_AT(1001eb27)
        d4 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 + 4u, (float)d4);
    }
    COW_AT(1001eb35)
    d5 = (double)rdf32(sp0 + 4u);
    if (d5 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
    COW_AT(1001eb46)
        d6 = fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 + 4u, (float)d6);
    }
    COW_AT(1001eb54)
    g->eax = cow_f2bits(loc_8_f);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x10027680u), 2, cow_f2bits(loc_4_f), cow_f2bits(loc_8_f));
    t8 = g->edx;
    d9 = cow_take_float(g);
    eax = t7;
    edx = t8;
    x0 = d9;
    COW_AT(1001eb63)
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(1001eb73)
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    COW_AT(1001eb7b)
    d10 = fr(g, fr(g, fr(g, cos((double)rdf32(sp0 + 4u))) * x0) + (double)rdf32(self + 0x44u));
    wrf32(self + 0x50u, (float)d10);
    d11 = fr(g, fr(g, fr(g, sin((double)rdf32(sp0 + 4u))) * x0) + (double)rdf32(self + 0x4cu));
    wrf32(self + 0x58u, (float)d11);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x10021c10u), self, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(1001eba0)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001eaf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001eb27u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001eb35u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001eb46u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001eb54u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001eb63u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001eb73u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001eb7bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001eba0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001eaf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1001eaf0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
