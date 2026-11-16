/* f_0x10294fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10294fb0(Guest* g)
{
    double d1;
    double d10;
    double d13;
    double d18;
    double d2;
    double d22;
    double d25;
    double d3;
    double d30;
    double d5;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_4_f;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t31;
    uint32_t t32;
    uint32_t t4;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)(float)fr(g, (double)rdf32(sp0 + 0x10u) + (double)rdf32(sp0 + 0x14u));
    d2 = fabs(fr(g, (double)rdf32(sp0 + 0x10u) + (double)rdf32(sp0 + 0x14u)));
    if (!(d2 < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, rdf64(COW_IMG(0x10340b18u)), 0u);
        loc_4_f = d1;
        goto L_10294ff8;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, rdf64(COW_IMG(0x10340b18u)), 0u);
    wr32(sp0 + 0x14u, 0u);
    wr32(sp0 + 0x10u, 0u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 + 8u, 0u);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x1027a740u), eax, self, in_edx);
    return;
L_10294ff8: ;
    d3 = fabs((double)rdf32(sp0 + 0x10u));
    if (!(d3 < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, rdf64(COW_IMG(0x10340b18u)), 0u);
        goto L_10295021;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, rdf64(COW_IMG(0x10340b18u)), 0u);
    t4 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027a720u), 2, arg1, t4);
    return;
L_10295021: ;
    d5 = fabs((double)rdf32(sp0 + 0x14u));
    if (!(d5 < rdf64(COW_IMG(0x10340b18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, rdf64(COW_IMG(0x10340b18u)), 0u);
        goto L_1029504a;
    }
    t6 = rd32(sp0 + 8u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027a720u), 2, arg1, t6);
    return;
L_1029504a: ;
    d7 = (double)rdf32(sp0 + 0x10u);
    d8 = (double)rdf32(sp0 + 0x14u);
    if (!(d7 < d8))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, d8, 0u);
        goto L_102950c5;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, d8, 0u);
    t9 = rd32(sp0 + 0xcu);
    d10 = fr(g, (double)rdf32(sp0 + 0x10u) / loc_4_f);
    wrf32(sp0 + 0x10u, (float)d10);
    if (!(d10 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        ecx = self;
        edx = in_edx;
        esi = t9;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        esi = t9;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1027af10u), 1, esi);
        t11 = g->ecx;
        t12 = g->edx;
        d13 = (double)rdf32(sp0 + 0x10u);
        wrf32(sp0 + 0x10u, (float)-d13);
        ecx = t11;
        edx = t12;
    }
    t14 = rd32(sp0 + 8u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_cdecl(g, COW_IMG(0x1027aee0u), 2, t14, esi);
    t16 = g->ecx;
    t17 = g->edx;
    d18 = cow_take_float(g);
    if (!(d18 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        ecx = t16;
        edi = t14;
    }
    else
    {
        eax = (t15 & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t16;
        edx = t17;
        edi = t14;
        g->ecx = ecx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1027af10u), 1, esi);
        t19 = g->ecx;
        ecx = t19;
    }
    t20 = rd32(sp0 + 0x10u);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1027b2e0u), arg1, g->ecx, g->edx, 1, 7, arg1, esi, edi, t20, in_edi, in_esi, cow_f2bits(loc_4_f));
    return;
L_102950c5: ;
    t21 = rd32(sp0 + 8u);
    d22 = fr(g, (double)rdf32(sp0 + 0x14u) / loc_4_f);
    wrf32(sp0 + 0x10u, (float)d22);
    if (!(d22 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        ecx = self;
        edx = in_edx;
        edi = t21;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edi = t21;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1027af10u), 1, edi);
        t23 = g->ecx;
        t24 = g->edx;
        d25 = (double)rdf32(sp0 + 0x10u);
        wrf32(sp0 + 0x10u, (float)-d25);
        ecx = t23;
        edx = t24;
    }
    t26 = rd32(sp0 + 0xcu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t27 = cow_cdecl(g, COW_IMG(0x1027aee0u), 2, edi, t26);
    t28 = g->ecx;
    t29 = g->edx;
    d30 = cow_take_float(g);
    if (!(d30 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t27 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        esi = t26;
    }
    else
    {
        eax = (t27 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t28;
        edx = t29;
        esi = t26;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t31 = cow_cdecl(g, COW_IMG(0x1027af10u), 1, esi);
        eax = t31;
    }
    t32 = rd32(sp0 + 0x10u);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1027b2e0u), eax, g->ecx, g->edx, 1, 7, arg1, edi, esi, t32, in_edi, in_esi, cow_f2bits(loc_4_f));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10294fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10294fb0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
