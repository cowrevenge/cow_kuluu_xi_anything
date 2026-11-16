/* f_0x1027e730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1027e730(Guest* g)
{
    double d1;
    double d10;
    double d12;
    double d15;
    double d2;
    double d20;
    double d24;
    double d27;
    double d3;
    double d32;
    double d4;
    double d6;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_4_f;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t5;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)(float)fr(g, (double)rdf32(sp0 + 0x10u) + (double)rdf32(sp0 + 0x14u));
    d2 = fr(g, (double)rdf32(sp0 + 0x10u) + (double)rdf32(sp0 + 0x14u));
    if ((cow_fsw(g, d2, rdf64(COW_IMG(0x10340b50u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d2, rdf64(COW_IMG(0x10340b50u)), 0u) & 0x4100u;
        loc_4_f = d1;
        goto L_1027e789;
    }
    eax = cow_fsw(g, d2, rdf64(COW_IMG(0x10340b50u)), 0u) & 0x4100u;
    loc_4_f = d1;
    if (!(loc_4_f < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, rdf64(COW_IMG(0x10340b18u)), 0u);
        goto L_1027e789;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, rdf64(COW_IMG(0x10340b18u)), 0u);
    wr32(sp0 + 0x14u, 0u);
    wr32(sp0 + 0x10u, 0u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 + 8u, 0u);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x1027a740u), eax, self, in_edx);
    return;
L_1027e789: ;
    d3 = (double)rdf32(sp0 + 0x10u);
    if ((cow_fsw(g, d3, rdf64(COW_IMG(0x10340b50u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d3, rdf64(COW_IMG(0x10340b50u)), 0u) & 0x4100u;
        goto L_1027e7c3;
    }
    eax = cow_fsw(g, d3, rdf64(COW_IMG(0x10340b50u)), 0u) & 0x4100u;
    d4 = (double)rdf32(sp0 + 0x10u);
    if (!(d4 < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, rdf64(COW_IMG(0x10340b18u)), 0u);
        goto L_1027e7c3;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, rdf64(COW_IMG(0x10340b18u)), 0u);
    t5 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027a720u), 2, arg1, t5);
    return;
L_1027e7c3: ;
    d6 = (double)rdf32(sp0 + 0x14u);
    if ((cow_fsw(g, d6, rdf64(COW_IMG(0x10340b50u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d6, rdf64(COW_IMG(0x10340b50u)), 0u) & 0x4100u;
        goto L_1027e7fd;
    }
    eax = cow_fsw(g, d6, rdf64(COW_IMG(0x10340b50u)), 0u) & 0x4100u;
    d7 = (double)rdf32(sp0 + 0x14u);
    if (!(d7 < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, rdf64(COW_IMG(0x10340b18u)), 0u);
        goto L_1027e7fd;
    }
    t8 = rd32(sp0 + 8u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027a720u), 2, arg1, t8);
    return;
L_1027e7fd: ;
    d9 = (double)rdf32(sp0 + 0x10u);
    d10 = (double)rdf32(sp0 + 0x14u);
    if (!(d9 < d10))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, d10, 0u);
        goto L_1027e878;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, d10, 0u);
    t11 = rd32(sp0 + 0xcu);
    d12 = fr(g, (double)rdf32(sp0 + 0x10u) / loc_4_f);
    wrf32(sp0 + 0x10u, (float)d12);
    if (!(d12 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        ecx = self;
        edx = in_edx;
        esi = t11;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        esi = t11;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1027af10u), 1, esi);
        t13 = g->ecx;
        t14 = g->edx;
        d15 = (double)rdf32(sp0 + 0x10u);
        wrf32(sp0 + 0x10u, (float)-d15);
        ecx = t13;
        edx = t14;
    }
    t16 = rd32(sp0 + 8u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_cdecl(g, COW_IMG(0x1027aee0u), 2, t16, esi);
    t18 = g->ecx;
    t19 = g->edx;
    d20 = cow_take_float(g);
    if (!(d20 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        ecx = t18;
        edi = t16;
    }
    else
    {
        eax = (t17 & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t18;
        edx = t19;
        edi = t16;
        g->ecx = ecx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1027af10u), 1, esi);
        t21 = g->ecx;
        ecx = t21;
    }
    t22 = rd32(sp0 + 0x10u);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1027b2e0u), arg1, g->ecx, g->edx, 1, 7, arg1, esi, edi, t22, in_edi, in_esi, cow_f2bits(loc_4_f));
    return;
L_1027e878: ;
    t23 = rd32(sp0 + 8u);
    d24 = fr(g, (double)rdf32(sp0 + 0x14u) / loc_4_f);
    wrf32(sp0 + 0x10u, (float)d24);
    if (!(d24 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        ecx = self;
        edx = in_edx;
        edi = t23;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edi = t23;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1027af10u), 1, edi);
        t25 = g->ecx;
        t26 = g->edx;
        d27 = (double)rdf32(sp0 + 0x10u);
        wrf32(sp0 + 0x10u, (float)-d27);
        ecx = t25;
        edx = t26;
    }
    t28 = rd32(sp0 + 0xcu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t29 = cow_cdecl(g, COW_IMG(0x1027aee0u), 2, edi, t28);
    t30 = g->ecx;
    t31 = g->edx;
    d32 = cow_take_float(g);
    if (!(d32 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t29 & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        esi = t28;
    }
    else
    {
        eax = (t29 & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t30;
        edx = t31;
        esi = t28;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t33 = cow_cdecl(g, COW_IMG(0x1027af10u), 1, esi);
        eax = t33;
    }
    t34 = rd32(sp0 + 0x10u);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1027b2e0u), eax, g->ecx, g->edx, 1, 7, arg1, edi, esi, t34, in_edi, in_esi, cow_f2bits(loc_4_f));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027e730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027e730(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
