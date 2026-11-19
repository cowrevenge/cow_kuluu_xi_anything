/* f_0x1000be50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000be50(Guest* g)
{
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    double loc_10_f;
    uint32_t t1;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000be60u: eax = g->eax; self = g->ecx; goto E_1000be60;
    case 0x1000be7au: eax = g->eax; ecx = g->ecx; goto E_1000be7a;
    case 0x1000be92u: eax = g->eax; ecx = g->ecx; goto E_1000be92;
    case 0x1000bea6u: eax = g->eax; ecx = g->ecx; goto E_1000bea6;
    case 0x1000beb6u: eax = g->eax; ecx = g->ecx; goto E_1000beb6;
    case 0x1000bef4u: eax = g->eax; ecx = g->ecx; loc_10_f = rdf32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1000bef4;
    case 0x1000bef7u: eax = g->eax; ecx = g->ecx; loc_10_f = rdf32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1000bef7;
    case 0x1000bf06u: eax = g->eax; ecx = g->ecx; loc_10_f = rdf32(sp0 - 0x10u); goto E_1000bf06;
    case 0x1000bf09u: eax = g->eax; ecx = g->ecx; loc_10_f = rdf32(sp0 - 0x10u); goto E_1000bf09;
    case 0x1000bf1cu: eax = g->eax; ecx = g->ecx; loc_10_f = rdf32(sp0 - 0x10u); goto E_1000bf1c;
    case 0x1000bf1fu: eax = g->eax; ecx = g->ecx; loc_10_f = rdf32(sp0 - 0x10u); goto E_1000bf1f;
    case 0x1000bf27u: eax = g->eax; ecx = g->ecx; goto E_1000bf27;
    default: break;
    }
#endif

    COW_AT(1000be50)
    if (rd32(COW_IMG(0x10456a7cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456a7cu));
        goto L_1000bf27;
    }
    COW_AT(1000be60)
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10017100u), self + 0x1f4u, 3, sp0 - 0xcu, sp0 - 8u, sp0 - 4u);
    eax = t1;
    COW_AT(1000be7a)
    d2 = (double)rdf32(rd32(sp0 + 4u) + 4u);
    if (!(d2 < (double)rdf32(COW_IMG(0x10329a34u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
        goto L_1000bf27;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
    ecx = rd32(sp0 + 4u);
    COW_AT(1000be92)
    d3 = (double)rdf32(ecx + 8u);
    if (!(d3 < (double)rdf32(COW_IMG(0x10329a34u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
        goto L_1000bf27;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
    COW_AT(1000bea6)
    d4 = (double)rdf32(ecx + 0xcu);
    if (!(d4 < (double)rdf32(COW_IMG(0x10329a34u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
        goto L_1000bf27;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
    COW_AT(1000beb6)
    d5 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(ecx + 4u));
    wrf32(sp0 + 4u, (float)d5);
    wrf32(ecx + 4u, (float)d5);
    d6 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(ecx + 8u));
    wrf32(ecx + 8u, (float)d6);
    d7 = fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(ecx + 0xcu));
    wrf32(sp0 - 0x10u, (float)(double)(float)d7);
    wrf32(ecx + 0xcu, (float)d7);
    d8 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
        loc_10_f = (double)(float)d7;
        x0 = d6;
    }
    else
    {
        eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
        loc_10_f = (double)(float)d7;
        x0 = d6;
    COW_AT(1000bef4)
        wr32(ecx + 4u, 0x3f800000u);
    }
    COW_AT(1000bef7)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    COW_AT(1000bf06)
        wr32(ecx + 8u, 0x3f800000u);
    }
    COW_AT(1000bf09)
    if ((cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    COW_AT(1000bf1c)
        wr32(ecx + 0xcu, 0x3f800000u);
    }
    COW_AT(1000bf1f)
    return (eax & 0xffffff00u) | 1u;
L_1000bf27: ;
    COW_AT(1000bf27)
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000be50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000be60u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000be7au:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000be92u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000bea6u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000beb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000bef4u:
    {
        uint32_t eax;
        uint32_t ecx;
        double loc_10_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        loc_10_f = rdf32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->edx = 0x3f800000u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000bef7u:
    {
        uint32_t eax;
        uint32_t ecx;
        double loc_10_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        loc_10_f = rdf32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->edx = 0x3f800000u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000bf06u:
    {
        uint32_t eax;
        uint32_t ecx;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->edx = 0x3f800000u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000bf09u:
    {
        uint32_t eax;
        uint32_t ecx;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->edx = 0x3f800000u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000bf1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->edx = 0x3f800000u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000bf1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000bf27u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000be50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1000be50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
