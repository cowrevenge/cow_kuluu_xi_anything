/* f_0x10033ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10033ea0(Guest* g)
{
    double d1;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d32;
    double d33;
    double d41;
    double d42;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    d1 = (double)rdf32(rd32(sp0 + 4u) + 4u);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        esi = rd32(sp0 + 4u);
    }
    else
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        esi = rd32(sp0 + 4u);
        wr32(esi, 0x3ee66666u);
        wr32(esi + 4u, 0xbf666666u);
        wr32(esi + 8u, 0u);
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = cow_take_float(g);
    d6 = fr(g, d5 * (double)rdf32(COW_IMG(0x1032a85cu)));
    wrf32(sp0 + 4u, (float)d6);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        ecx = t3;
        edx = t4;
        wr32(sp0 + 4u, 0x3f800000u);
    }
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, self + 0x20u);
    wr32(sp0 - 0x20u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x100270a0u), 2, esi, self + 0x20u);
    t7 = g->ecx;
    t8 = g->edx;
    t9 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t9);
    wr32(sp0 - 0x28u, esi);
    g->eax = t9;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x20u;
    t10 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, esi, t9);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x2cu, esi);
    wr32(sp0 - 0x30u, self + 0x20u);
    g->edx = t12;
    g->esp = sp0 - 0x28u;
    t13 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x20u, esi);
    t14 = g->edx;
    wr32(sp0 - 0x34u, self + 0x20u);
    wr32(sp0 - 0x38u, sp0 - 0xcu);
    g->ecx = sp0 - 0xcu;
    g->edx = t14;
    g->esp = sp0 - 0x2cu;
    t15 = cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0xcu, self + 0x20u, self + 0x20u);
    t16 = g->ecx;
    t17 = g->edx;
    d18 = (double)rdf32(sp0 - 4u);
    d19 = (double)rdf32(sp0 - 0xcu);
    wrf32(sp0 + 4u, (float)fr(g, sqrt(fr(g, fr(g, d18 * d18) + fr(g, d19 * d19)))));
    d20 = fr(g, sqrt(fr(g, fr(g, d18 * d18) + fr(g, d19 * d19))));
    if ((cow_fsw(g, d20, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u) != 0u)
    {
        ecx = t16;
        edx = t17;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0xbf800000u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t27 = cow_cdecl(g, COW_IMG(0x10026e50u), 4, sp0 - 0xcu, 0u, 0xbf800000u, 0u);
        t28 = g->ecx;
        t29 = g->edx;
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    else
    {
        eax = cow_fsw(g, d20, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u;
        ecx = t16;
        d21 = (double)rdf32(sp0 - 8u);
        if (!(d21 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            goto L_10033f74;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d22 = -fr(g, atan2((double)rdf32(sp0 - 8u), (double)rdf32(sp0 + 4u)));
        if (!(d22 < (double)rdf32(COW_IMG(0x1032a858u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x1032a858u)), 0u);
            goto L_10033f86;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x1032a858u)), 0u);
L_10033f74: ;
        d23 = (double)(float)-fr(g, fr(g, sin(rdf64(COW_IMG(0x1032a850u)))) * (double)rdf32(sp0 + 4u));
        wrf32(sp0 - 8u, (float)d23);
L_10033f86: ;
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        g->ecx = ecx;
        g->edx = sp0 - 0xcu;
        g->esp = sp0 - 0x14u;
        t24 = cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, sp0 - 0xcu);
        t25 = g->ecx;
        t26 = g->edx;
        eax = t24;
        ecx = t25;
        edx = t26;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t30 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t31 = g->edx;
    d32 = cow_take_float(g);
    d33 = fr(g, d32 * (double)rdf32(COW_IMG(0x1032a85cu)));
    wrf32(sp0 + 4u, (float)d33);
    if ((cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        edx = t31;
    }
    else
    {
        eax = cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        edx = t31;
        wr32(sp0 + 4u, 0x3f800000u);
    }
    wr32(sp0 - 0x18u, self + 0x14u);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    g->ecx = sp0 - 0xcu;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0xcu, self + 0x14u);
    t34 = g->ecx;
    t35 = rd32(sp0 + 4u);
    wr32(sp0 - 0x20u, t35);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = t35;
    g->esp = sp0 - 0x1cu;
    t36 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0xcu, t35);
    t37 = g->edx;
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    wr32(sp0 - 0x2cu, self + 0x14u);
    g->ecx = sp0 - 0xcu;
    g->edx = t37;
    g->esp = sp0 - 0x24u;
    t38 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x14u, sp0 - 0xcu);
    t39 = g->ecx;
    t40 = g->edx;
    d41 = (double)rdf32(self + 0x14u);
    if (!(d41 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t38 & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t39;
        edx = t40;
        x0 = (double)rdf32(self + 0x14u);
    }
    else
    {
        eax = (t38 & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t39;
        edx = t40;
        x0 = (double)rdf32(self + 0x14u);
        x0 = -x0;
    }
    if (!(x0 < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
        d42 = (double)rdf32(self + 0x1cu);
        if (!(d42 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = (double)rdf32(self + 0x1cu);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = (double)rdf32(self + 0x1cu);
            x0 = -x0;
        }
        if (!(x0 < (double)rdf32(COW_IMG(0x10329a18u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
            wr32(self + 0x14u, 0x3c23d70au);
        }
    }
    wr32(sp0 - 0x18u, self + 0x14u);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, self + 0x14u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10033ea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10033ea0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
