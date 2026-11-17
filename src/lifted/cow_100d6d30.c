/* f_0x100d6d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100d6d30(Guest* g)
{
    double d19;
    double d22;
    double d31;
    double d32;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if ((rd32(self + 0x840u) & 0x80000u) != 0u)
    {
        eax = in_eax;
    }
    else
    {
        if (rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u) == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u);
            eax = rd32(eax);
        }
        wr32(sp0 - 0xcu, eax);
        wr32(sp0 - 0x10u, rd32(COW_IMG(0x1035f60cu)));
        g->eax = eax;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x1003af10u), rd32(COW_IMG(0x1047b970u)), 2, rd32(COW_IMG(0x1035f60cu)), eax);
        wr32(self + 0x868u, t1);
        t2 = rd32(self + 0x840u) | 0x80000u;
        wr32(self + 0x840u, t2);
        eax = t2;
    }
    wr32(sp0 - 0xcu, in_ebx);
    t3 = rd32(self + 0x868u);
    wr32(COW_IMG(0x104570f4u), t3);
    if ((rd8(self + 0x840u) & 8u) == 0u)
    {
        edx = t3;
        wr32(sp0 - 0x10u, 0x76657665u);
        wr32(sp0 - 0x14u, 0xau);
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->eax = rd32(self);
        t4 = rd32(self);
        g->esp = sp0 - 0xcu;
        t5 = cow_thiscall(g, rd32(t4 + 0x1ecu), self, 3, sp0 - 4u, 0xau, 0x76657665u);
        wr32(self + 0x858u, rd32(t5));
        t6 = rd32(self + 0x840u) | 8u;
        wr32(self + 0x840u, t6);
    }
    t7 = rd32(self + 0x858u);
    wr32(COW_IMG(0x1045745cu), t7);
    if ((rd8(self + 0x840u) & 0x10u) != 0u)
    {
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_ebx;
    }
    else
    {
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0x5eu);
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->esp = sp0 - 0xcu;
        t8 = cow_thiscall(g, rd32(rd32(self) + 0x1ecu), self, 3, sp0 - 4u, 0x5eu, 0u);
        wr32(self + 0x85cu, rd32(t8));
        t9 = rd32(self + 0x840u) | 0x10u;
        t10 = rd32(self + 0x85cu);
        wr32(self + 0x840u, t9);
        wr32(self + 0x714u, t10);
        if (rd32(self + 0x70u) == 0u)
        {
            loc_4 = self;
            loc_8 = in_esi;
            loc_c = in_ebx;
        }
        else
        {
            eax = rd32(self + 0x70u);
            t11 = rd32(eax + 0x120u);
            if (t11 >> 7u & 1u) goto L_100d6e34;
            eax = t11;
            if (!(eax >> 8u & 1u))
            {
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
                loc_c = rd32(sp0 - 0xcu);
                goto L_100d6e3e;
            }
L_100d6e34: ;
            wr32(self + 0x8ecu, 0x40800000u);
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
        }
    }
L_100d6e3e: ;
    if (rd32(self + 0x85cu) == 0u)
    {
        eax = rd32(self + 0x85cu);
    }
    else
    {
        eax = rd32(self + 0x85cu);
        if (rd32(eax) != 0u)
        {
            if ((rd8(self + 0x840u) & 0x20u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x840u);
            }
            else
            {
                wr32(sp0 - 0x10u, 0x6f6e686fu);
                wr32(sp0 - 0x14u, 0xau);
                wr32(sp0 - 0x18u, sp0 - 4u);
                g->eax = sp0 - 4u;
                g->esp = sp0 - 0xcu;
                t12 = cow_thiscall(g, rd32(rd32(self) + 0x1ecu), self, 3, sp0 - 4u, 0xau, 0x6f6e686fu);
                wr32(self + 0x860u, rd32(t12));
                t13 = rd32(self + 0x840u) | 0x20u;
                wr32(self + 0x840u, t13);
                eax = t13;
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
                loc_c = rd32(sp0 - 0xcu);
            }
        }
    }
    g->eax = eax;
    g->edx = rd32(self);
    t14 = rd32(self);
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, rd32(t14 + 0x6cu), self, 0);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        ebx = rd32(sp0 - 0xcu);
    }
    else
    {
        edx = t16;
        ebx = rd32(sp0 - 0xcu);
        g->eax = rd32(self);
        t17 = rd32(self);
        g->esp = sp0 - 8u;
        t18 = cow_thiscall(g, rd32(t17 + 0x414u), self, 0);
        d19 = cow_take_float(g);
        wrf32(COW_IMG(0x10457100u), (float)d19);
        g->edx = rd32(self);
        t20 = rd32(self);
        cow_thiscall(g, rd32(t20 + 0x41cu), self, 0);
        t21 = g->edx;
        d22 = cow_take_float(g);
        wrf32(COW_IMG(0x104570f8u), (float)d22);
        g->eax = rd32(self);
        t23 = rd32(self);
        t24 = cow_thiscall(g, rd32(t23 + 0x40cu), self, 0);
        wr32(COW_IMG(0x104574b0u), t24);
        wr32(sp0 - 0xcu, sp0 - 4u);
        g->eax = sp0 - 4u;
        t25 = cow_thiscall(g, rd32(rd32(self) + 0x408u), self, 1, sp0 - 4u);
        t26 = g->ecx;
        t27 = rd32(t25);
        wr32(COW_IMG(0x10457268u), t27);
        wr8(COW_IMG(0x104570fcu), t27 != 0u);
        eax = t27;
    }
    g->eax = eax;
    g->edx = rd32(self);
    t28 = rd32(self);
    g->esp = sp0 - 8u;
    t29 = cow_thiscall(g, rd32(t28 + 0x70u), self, 0);
    t30 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        eax = t29;
    }
    else
    {
        edx = t30;
        d31 = (double)rdf32(self + 0x744u);
        wrf32(COW_IMG(0x10457458u), (float)d31);
        d32 = (double)rdf32(self + 0x744u);
        wrf32(COW_IMG(0x1045726cu), (float)d32);
        g->eax = rd32(self);
        t33 = rd32(self);
        g->esp = sp0 - 8u;
        t34 = cow_thiscall(g, rd32(t33 + 0x2cu), self, 0);
        wr8(COW_IMG(0x104572b0u), 1u);
        t35 = 0x80000000u - (t34 & 0xff000000u) | 0x808080u;
        wr32(COW_IMG(0x104574b4u), t35);
        eax = t34 & 0xff000000u;
    }
    g->edx = rd32(self);
    t36 = rd32(self);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t36 + 0x74u), self, 0);
    t37 = g->edx;
    g->eax = rd32(self);
    t38 = rd32(self);
    t39 = cow_thiscall(g, rd32(t38 + 0x78u), self, 0);
    if ((uint8_t)t39 == 0u)
    {
        esi = rd32(sp0 - 8u);
    }
    else
    {
        esi = rd32(sp0 - 8u);
        wr8(COW_IMG(0x104570f0u), 1u);
    }
    g->ebx = ebx;
    g->esi = esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d6d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d6d30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
