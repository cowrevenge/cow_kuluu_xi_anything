/* f_0x100c4410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100c4410(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, self + 0x34u);
    wr32(self + 0x770u, 0u);
    wr32(self + 0x774u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x34u, sp0 - 0x10u);
    wr32(self + 0x738u, 0u);
    wr32(self + 0x734u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, self + 0x44u);
    wr32(self + 0x73cu, 0u);
    wr32(self + 0x740u, 0x3f800000u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x28u;
    t1 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x44u, sp0 - 0x10u);
    d2 = (double)rdf32(self + 0x44u);
    if ((cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d3 = fr(g, (double)rdf32(self + 0x44u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d3);
    }
    d4 = (double)rdf32(self + 0x44u);
    if (!(d4 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d5 = fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x44u, (float)d5);
    }
    d6 = (double)rdf32(self + 0x48u);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d7 = fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d7);
    }
    d8 = (double)rdf32(self + 0x48u);
    if (!(d8 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        d9 = fr(g, (double)rdf32(self + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x48u, (float)d9);
    }
    d10 = (double)rdf32(self + 0x4cu);
    if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        d11 = fr(g, (double)rdf32(self + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d11);
    }
    d12 = (double)rdf32(self + 0x4cu);
    if (d12 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
        d13 = fr(g, (double)rdf32(self + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(self + 0x4cu, (float)d13);
    }
    wr32(self + 0x744u, 0u);
    wr32(self + 0x748u, 0u);
    wr32(self + 0x74cu, 0u);
    wr32(self + 0x750u, 0x3f800000u);
    wr32(self + 0x754u, 0u);
    wr32(self + 0x758u, 0u);
    t14 = rd32(self);
    wr32(self + 0x75cu, 0u);
    wr32(sp0 - 0x24u, arg1);
    wr32(self + 0x760u, 0x3f800000u);
    g->eax = t14;
    g->edx = 0x3f800000u;
    g->esp = sp0 - 0x20u;
    t15 = cow_thiscall(g, rd32(t14 + 0x290u), self, 1, arg1);
    t16 = g->edx;
    wr32(sp0 - 0x24u, 0x656e7566u);
    wr32(sp0 - 0x28u, 0x2eu);
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(arg1), 3, sp0 - 0x14u, 0x2eu, 0x656e7566u);
    t18 = g->edx;
    if (rd32(sp0 - 0x14u) != 0u)
    {
        eax = t17;
        ecx = rd32(sp0 - 0x14u);
        edx = t18;
        goto L_100c45d0;
    }
    eax = t17;
    wr32(sp0 - 0x24u, 0x6e75665fu);
    wr32(sp0 - 0x28u, 0x2eu);
    wr32(sp0 - 0x2cu, sp0 + 4u);
    g->eax = eax;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0x20u;
    t19 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(arg1), 3, sp0 + 4u, 0x2eu, 0x6e75665fu);
    t20 = g->edx;
    wr32(sp0 - 0x14u, rd32(t19));
    if (rd32(t19) == 0u)
    {
        edx = t20;
        loc_14 = rd32(t19);
        goto L_100c460e;
    }
    eax = rd32(t19);
    ecx = rd32(t19);
    edx = t20;
    if (rd32(eax) != 0u)
    {
        wr32(self + 0x770u, 1u);
    }
L_100c45d0: ;
    wr32(sp0 - 0x24u, ecx);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t33 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, ecx);
    wr32(self + 0x5c4u, t33);
    wr32(self + 0x774u, 4u);
    wr8(self + 0x778u, 1u);
L_100c45f3: ;
    wr32(self + 0x76cu, 0u);
    wr32(self + 0x768u, 0u);
    wr32(self + 0x764u, 0u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_100c460e: ;
    if ((rd32(rd32(arg1) + 0x24u) & 0x7fu) != 1u)
    {
        eax = rd32(rd32(arg1) + 0x24u) & 0x7fu;
    }
    else
    {
        eax = rd32(rd32(arg1) + 0x24u) & 0x7fu;
        ecx = rd32(arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t21 = cow_thiscall(g, COW_IMG(0x10072240u), ecx, 0);
        t22 = g->edx;
        if (t21 == 0u)
        {
            eax = t21;
            edx = t22;
            loc_14 = rd32(sp0 - 0x14u);
        }
        else
        {
            eax = t21;
            edx = t22;
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0x2eu);
            wr32(sp0 - 0x2cu, sp0 + 4u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t23 = cow_thiscall(g, COW_IMG(0x10072290u), eax, 3, sp0 + 4u, 0x2eu, 0u);
            t24 = g->edx;
            wr32(sp0 - 0x24u, rd32(t23));
            wr32(sp0 - 0x14u, rd32(t23));
            g->eax = rd32(t23);
            g->edx = t24;
            t25 = rd32(t23);
            t26 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t25);
            t27 = g->edx;
            wr32(self + 0x5c4u, t26);
            eax = t26;
            edx = t27;
            loc_14 = rd32(sp0 - 0x14u);
        }
    }
    if (rd32(self + 0x5c4u) == 0u)
    {
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x2eu);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        g->eax = eax;
        g->edx = sp0 + 4u;
        g->esp = sp0 - 0x20u;
        t28 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(arg1), 3, sp0 + 4u, 0x2eu, 0u);
        t29 = g->edx;
        wr32(sp0 - 0x24u, rd32(t28));
        wr32(sp0 - 0x14u, rd32(t28));
        g->eax = rd32(t28);
        g->edx = t29;
        t30 = rd32(t28);
        t31 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t30);
        t32 = g->edx;
        wr32(self + 0x5c4u, t31);
        edx = t32;
        loc_14 = rd32(sp0 - 0x14u);
    }
    if (loc_14 == 0u)
    {
        eax = loc_14;
    }
    else
    {
        eax = loc_14;
        if (rd32(eax) == 0u)
        {
            eax = rd32(eax);
        }
        else
        {
            eax = rd32(eax);
            if (rd8(eax + 0x20u) == 0x5fu)
            {
                wr32(self + 0x770u, 1u);
            }
        }
    }
    wr32(sp0 - 0x24u, arg1);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x100c46b0u), self, 1, arg1);
    goto L_100c45f3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c4410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c4410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
