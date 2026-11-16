/* f_0x100aa940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_100aa940(Guest* g)
{
    double d24;
    double d30;
    double d36;
    double d37;
    double d38;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t5;
    uint32_t t6;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (arg1 == 0u) goto L_100aaad5;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t2 = g->edx;
    if (t1 - 2u > 0x3cu)
    {
        edx = t2;
        goto L_100aa96f;
    }
    eax = t1 - 2u;
    edx = t2;
    t3 = rd32(COW_IMG(0x100aaae0u) + rd8(COW_IMG(0x100aaae8u) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x100aa96fu: goto L_100aa96f;
    case 0x100aaad5u: goto L_100aaad5;
    default: rt_fatal(g, COW_IMG(0x100aa968u), "switch");
    }
    return;
L_100aa96f: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t5 = g->edx;
    wr32(sp0 - 0x1cu, t4);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t4);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t8 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t9 = g->edx;
        wr32(sp0 - 0x1cu, t8);
        t10 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t8);
        if ((uint8_t)t10 == 0u)
        {
            eax = t10;
            wr32(sp0 - 0x1cu, in_ebx);
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t11 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
            t12 = rd32(t11);
            wr32(self + 0x150u, t12);
            g->eax = t12;
            t13 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
            t14 = rd32(t13 + 4u);
            wr32(self + 0x154u, t14);
            g->eax = t14;
            t15 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
            t16 = rd32(t15 + 8u);
            wr32(self + 0x158u, t16);
            g->eax = t16;
            t17 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
            t18 = rd32(t17 + 0xcu);
            t19 = rd32(self);
            wr32(self + 0x14cu, arg3);
            wr32(self + 0x15cu, t18);
            g->eax = t18;
            g->edx = t19;
            t20 = cow_thiscall(g, rd32(t19 + 0x1bcu), self, 0);
            t21 = g->edx;
            g->eax = rd32(arg1);
            t22 = rd32(arg1);
            t23 = cow_thiscall(g, rd32(t22 + 0x1bcu), arg1, 0);
            d24 = (double)(float)fr(g, (double)rdf32(t20) - (double)rdf32(t23));
            wrf32(sp0 - 0x10u, (float)d24);
            g->edx = rd32(self);
            t25 = rd32(self);
            t26 = cow_thiscall(g, rd32(t25 + 0x1bcu), self, 0);
            t27 = g->edx;
            g->eax = rd32(arg1);
            t28 = rd32(arg1);
            t29 = cow_thiscall(g, rd32(t28 + 0x1bcu), arg1, 0);
            d30 = (double)(float)fr(g, (double)rdf32(t26 + 4u) - (double)rdf32(t29 + 4u));
            wrf32(sp0 - 0xcu, (float)d30);
            g->edx = rd32(self);
            t31 = rd32(self);
            t32 = cow_thiscall(g, rd32(t31 + 0x1bcu), self, 0);
            t33 = g->edx;
            g->eax = rd32(arg1);
            t34 = rd32(arg1);
            t35 = cow_thiscall(g, rd32(t34 + 0x1bcu), arg1, 0);
            wr32(sp0 - 0x20u, sp0 - 0x10u);
            wr32(sp0 - 0x24u, sp0 - 0x10u);
            d36 = (double)(float)fr(g, (double)rdf32(t32 + 8u) - (double)rdf32(t35 + 8u));
            wrf32(sp0 - 8u, (float)d36);
            g->esp = sp0 - 0x18u;
            cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x10u, sp0 - 0x10u, in_ebx);
            wr32(sp0 - 0x28u, arg3);
            wr32(sp0 - 0x2cu, sp0 - 0x10u);
            wr32(sp0 - 0x30u, self + 0x130u);
            g->esp = sp0 - 0x24u;
            cow_cdecl(g, COW_IMG(0x100272e0u), 3, self + 0x130u, sp0 - 0x10u, arg3);
            d37 = (double)rdf32(sp0 + 0x14u);
            d38 = (double)rdf32(COW_IMG(0x103295d8u));
            wr32(self + 0x140u, arg4);
            if (d37 != d38)
            {
                eax = (arg4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, d38, 1u);
                x0 = d37;
            }
            else
            {
                eax = (arg4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, d38, 1u);
                x0 = d37;
                x0 = (double)rdf32(COW_IMG(0x1032961cu));
            }
            t39 = rd8(self + 0x102u);
            wrf32(self + 0x144u, (float)x0);
            wrf32(self + 0x148u, (float)x0);
            wr32(self + 0x114u, arg2);
            if ((uint8_t)t39 == 0u)
            {
                eax = (eax & 0xffffff00u) | t39;
                g->eax = eax;
                g->edx = rd32(self);
                t40 = rd32(self);
                g->esp = sp0 - 0x18u;
                t41 = cow_thiscall(g, rd32(t40 + 0x160u), self, 0);
                t42 = g->edx;
                cow_thiscall(g, COW_IMG(0x10083300u), self, 0);
            }
            wr8(self + 0x102u, 1u);
        }
    }
L_100aaad5: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aa940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100aa940(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
