/* f_0x1024de40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1024de40(Guest* g)
{
    double d10;
    double d14;
    double d15;
    double d16;
    double d17;
    double d19;
    double d20;
    double d21;
    double d22;
    double d30;
    double d31;
    double d32;
    double d34;
    double d35;
    double d36;
    double d37;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_48;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t18;
    uint32_t t2;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t33;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, sp0 - 0x2cu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10271eb0u), 1, sp0 - 0x2cu);
    t1 = g->ecx;
    t2 = g->edx;
    if (!(rd32(sp0 - 0x2cu) >> 8u & 1u))
    {
        ecx = t1;
        esi = rd32(sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x38u);
        wr32(sp0 - 0x44u, 0u);
        t3 = rd32(esi + 0x1cu);
        wr32(sp0 - 0x48u, t3);
        eax = t3;
        edx = sp0 - 0x38u;
        loc_48 = t3;
    }
    else
    {
        eax = rd32(sp0 - 0x2cu);
        edx = t2;
        esi = rd32(sp0 + 4u);
        wr32(sp0 - 0x40u, sp0 - 0x38u);
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x48u, 6u);
        ecx = sp0 - 0x38u;
        loc_48 = 6u;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t4 = cow_cdecl(g, COW_IMG(0x10273390u), 3, loc_48, 0u, sp0 - 0x38u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x40u, 6u);
    wr32(sp0 - 0x44u, 0x3fu);
    g->edx = t6;
    g->esp = sp0 - 0x34u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t5, 4, 0x3fu, 6u, in_esi, rd32(sp0 - 0x38u));
    t8 = g->ecx;
    t9 = g->edx;
    d10 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)-d10);
    wr32(sp0 - 0x48u, 7u);
    wr32(sp0 - 0x4cu, 0x3fu);
    g->edx = t9;
    g->esp = sp0 - 0x3cu;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), t8, 4, 0x3fu, 7u, 0x3fu, 6u);
    t12 = g->ecx;
    t13 = g->edx;
    d14 = cow_take_float(g);
    wrf32(sp0 - 0x30u, (float)(double)(float)-d14);
    d15 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1033cd60u)));
    wrf32(sp0 + 4u, (float)d15);
    d16 = (double)(float)fr(g, d15 - (double)rdf32(esi + 0x44u));
    wrf32(sp0 - 0x34u, (float)d16);
    d17 = fabs(fr(g, d15 - (double)rdf32(esi + 0x44u)));
    wrf64(sp0 - 0x28u, d17);
    t18 = cow_call_regs(g, COW_IMG(0x10014cf0u), t11, g->ecx, g->edx, 1, 0);
    d19 = cow_take_float(g);
    d20 = fr(g, d19 * (double)rdf32(COW_IMG(0x1033cd5cu)));
    d21 = rdf64(sp0 - 0x28u);
    if (d20 < d21)
    {
        eax = (t18 & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, d21, 0u);
        d22 = (double)rdf32(sp0 - 0x34u);
        if (!(d22 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            x0 = (double)rdf32(esi + 0x44u);
            x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x1033cd5cu)));
        }
        else
        {
            x0 = (double)rdf32(esi + 0x44u);
            x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x1033cd5cu)));
        }
        wrf32(sp0 + 4u, (float)x0);
    }
    t23 = rd32(sp0 + 4u);
    wr32(esi + 0x44u, t23);
    wr32(sp0 - 0x40u, t23);
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x1027abf0u), 2, sp0 - 0x20u, t23);
    t24 = rd32(sp0 - 0x38u) + 0x68u;
    wr32(sp0 - 0x48u, t24);
    wr32(sp0 - 0x4cu, sp0 - 0x20u);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x44u;
    t25 = cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x10u, sp0 - 0x20u, t24);
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    t26 = rd32(sp0 - 0x38u) + 0x68u;
    wr32(sp0 - 0x58u, t26);
    g->ecx = sp0 - 0x10u;
    g->edx = t26;
    g->esp = sp0 - 0x50u;
    t27 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, t26, sp0 - 0x10u);
    t28 = g->ecx;
    t29 = g->edx;
    d30 = (double)rdf32(sp0 - 0x30u);
    if ((cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
        ecx = t28;
        edx = t29;
        x0 = (double)rdf32(sp0 - 0x30u);
        x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1033cd54u)));
    }
    else
    {
        eax = cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
        ecx = t28;
        edx = t29;
        x0 = (double)rdf32(sp0 - 0x30u);
        x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1033cd58u)));
    }
    wrf32(sp0 + 4u, (float)x0);
    d31 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(esi + 0x48u));
    wrf32(sp0 - 0x34u, (float)d31);
    d32 = fabs(fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(esi + 0x48u)));
    wrf64(sp0 - 0x28u, d32);
    g->esp = sp0 - 0x3cu;
    t33 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    d34 = cow_take_float(g);
    d35 = fr(g, d34 * (double)rdf32(COW_IMG(0x1033cd5cu)));
    d36 = rdf64(sp0 - 0x28u);
    if (d35 < d36)
    {
        eax = (t33 & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, d36, 0u);
        d37 = (double)rdf32(sp0 - 0x34u);
        if (!(d37 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            x0 = (double)rdf32(esi + 0x48u);
            x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x1033cd5cu)));
        }
        else
        {
            x0 = (double)rdf32(esi + 0x48u);
            x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x1033cd5cu)));
        }
        wrf32(sp0 + 4u, (float)x0);
    }
    t38 = rd32(sp0 + 4u);
    wr32(esi + 0x48u, t38);
    wr32(sp0 - 0x40u, t38);
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x1027abc0u), 2, sp0 - 0x20u, t38);
    wr32(sp0 - 0x48u, sp0 - 0x20u);
    t39 = rd32(sp0 - 0x38u) + 0x68u;
    wr32(sp0 - 0x4cu, t39);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x10u, t39, sp0 - 0x20u);
    t40 = g->edx;
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    t41 = rd32(sp0 - 0x38u) + 0x68u;
    wr32(sp0 - 0x58u, t41);
    g->eax = sp0 - 0x10u;
    g->ecx = t41;
    g->esp = sp0 - 0x50u;
    t42 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, t41, sp0 - 0x10u);
    t43 = g->ecx;
    t44 = rd32(sp0 - 0x38u);
    wr32(sp0 - 0x5cu, t44);
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x1026e210u), 1, t44);
    g->esi = rd32(sp0 - 0x3cu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024de40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024de40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
