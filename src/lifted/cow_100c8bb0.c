/* f_0x100c8bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100c8bb0(Guest* g)
{
    double d10;
    double d13;
    double d32;
    double d36;
    double d41;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg3, 0x3f800000u);
    t1 = rd32(self + 0x7c8u);
    wr32(arg2, t1);
    g->eax = t1;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    if (t2 - 1u > 0x52u)
    {
        eax = t2 - 1u;
        goto L_100c8bed;
    }
    eax = t2 - 1u;
    t3 = rd32(COW_IMG(0x100c8e58u) + rd8(COW_IMG(0x100c8e74u) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x100c8be5u: goto L_100c8be5;
    case 0x100c8bedu: goto L_100c8bed;
    case 0x100c8c36u: ecx = rd8(COW_IMG(0x100c8e74u) + eax); goto L_100c8c36;
    case 0x100c8c60u: goto L_100c8c60;
    case 0x100c8c83u: ecx = rd8(COW_IMG(0x100c8e74u) + eax); goto L_100c8c83;
    case 0x100c8ca9u: goto L_100c8ca9;
    case 0x100c8cd0u: goto L_100c8cd0;
    default: rt_fatal(g, COW_IMG(0x100c8bdeu), "switch");
    }
    return;
L_100c8be5: ;
    edx = rd32(self + 0x7d4u);
L_100c8beb: ;
    wr32(arg2, edx);
L_100c8bed: ;
    d9 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032a84cu)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032a84cu)), 1u) & 0x4100u;
        x0 = (double)rdf32(sp0 + 4u);
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u;
            d13 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329d38u)));
            wrf32(arg3, (float)d13);
            t14 = rd32(self + 0x7ccu);
            wr32(arg2, t14);
        }
    }
    else
    {
        eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032a84cu)), 1u) & 0x4100u;
        x0 = (double)rdf32(sp0 + 4u);
        d10 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329d38u)));
        wrf32(arg3, (float)d10);
        if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x1032a3acu)), 0u) & 0x4100u) != 0u)
        {
            t12 = rd32(self + 0x7ccu);
            wr32(arg2, t12);
            eax = t12;
        }
        else
        {
            eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x1032a3acu)), 0u) & 0x4100u;
            wr32(arg3, arg1);
            t11 = rd32(self + 0x7d0u);
            wr32(arg2, t11);
        }
    }
    g->eax = eax;
    g->edx = rd32(self);
    t15 = rd32(self);
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, rd32(t15 + 0x340u), self, 0);
    t17 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        eax = t16;
        edx = t17;
        goto L_100c8d52;
    }
    edx = t17;
    g->eax = rd32(self);
    g->edx = edx;
    t18 = rd32(self);
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, rd32(t18 + 0x330u), self, 0);
    t20 = g->edx;
    if ((uint8_t)t19 != 0u)
    {
        eax = t19;
        edx = t20;
        goto L_100c8dde;
    }
    eax = t19;
    edx = t20;
L_100c8d52: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t22 = g->edx;
    if (t21 != 2u)
    {
        eax = t21;
        edx = t22;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t24 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t25 = g->edx;
        g->edx = t25;
        t26 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t24);
        t27 = g->edx;
        if ((uint8_t)t26 != 0u)
        {
            edx = t27;
            goto L_100c8dc7;
        }
        eax = t26;
        edx = t27;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t28 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t29 = g->edx;
        g->edx = t29;
        t30 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t28);
        t31 = g->edx;
        if ((uint8_t)t30 != 0u)
        {
            edx = t31;
            goto L_100c8dc7;
        }
        edx = t31;
        if (rd32(self + 0x598u) == 2u)
        {
            eax = rd32(self + 0x598u) - 2u;
            goto L_100c8dbf;
        }
        eax = rd32(self + 0x598u) - 2u;
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_100c8db7;
        }
        eax = eax - 1u;
        if (eax != 1u)
        {
            eax = eax - 1u;
        }
        else
        {
            eax = eax - 1u;
            wr32(arg2, 0x206c766du);
        }
    }
    else
    {
        edx = t22;
        if ((int32_t)rd32(self + 0x598u) < 2)
        {
            eax = rd32(self + 0x598u);
        }
        else
        {
            eax = rd32(self + 0x598u);
            if ((int32_t)eax <= 4)
            {
                t23 = rd32(self + 0x7ccu);
                wr32(arg2, t23);
            }
        }
    }
L_100c8dde: ;
    d32 = (double)rdf32(self + 0x8bcu);
    if ((cow_fsw(g, d32, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t33 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t34 = g->edx;
        t35 = (-(t33 != 1u) & 0xf6000000u) + 0x2a706d6au;
        wr32(arg2, t35);
        wr32(arg3, 0x3f800000u);
        eax = t35;
        edx = t34;
    }
    d36 = fr(g, (double)rdf32(self + 0x7e0u) * (double)rdf32(arg3));
    wrf32(arg3, (float)d36);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t37 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t38 = g->edx;
    if (t37 == 2u)
    {
        eax = t37;
        goto L_100c8e33;
    }
    eax = t37;
    edx = t38;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t39 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    if (t39 != 7u) goto L_100c8e50;
    eax = t39;
L_100c8e33: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t40 = cow_thiscall(g, rd32(rd32(self) + 0x1a0u), self, 0);
    d41 = cow_take_float(g);
    if (d41 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        wr32(arg3, 0x3f800000u);
    }
L_100c8e50: ;
    return;
L_100c8c36: ;
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) == 0u) goto L_100c8c54;
    eax = rd32(COW_IMG(0x104568fcu));
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, rd32(rd32(self) + 0x200u), self, 0);
    if ((uint8_t)t7 == 0u) goto L_100c8cf7;
L_100c8c54: ;
    wr32(arg2, 0x20726f63u);
    return;
L_100c8c60: ;
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
        goto L_100c8c78;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
    edx = rd32(self + 0x7d8u);
    goto L_100c8beb;
L_100c8c78: ;
    wr32(arg2, 0x20316866u);
    goto L_100c8bed;
L_100c8c83: ;
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) == 0u) goto L_100c8c9d;
    eax = rd32(COW_IMG(0x104568fcu));
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, rd32(rd32(self) + 0x200u), self, 0);
    if ((uint8_t)t6 == 0u) goto L_100c8cf7;
L_100c8c9d: ;
    wr32(arg2, 0x20316973u);
    return;
L_100c8ca9: ;
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) == 0u) goto L_100c8cc4;
    eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, rd32(rd32(self) + 0x200u), self, 0);
    if ((uint8_t)t5 == 0u) goto L_100c8cf7;
L_100c8cc4: ;
    wr32(arg2, 0x20316963u);
    return;
L_100c8cd0: ;
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) == 0u) goto L_100c8ceb;
    eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, rd32(rd32(self) + 0x200u), self, 0);
    if ((uint8_t)t4 == 0u) goto L_100c8cf7;
L_100c8ceb: ;
    wr32(arg2, 0x20317872u);
    return;
L_100c8cf7: ;
    t8 = rd32(self + 0x7d8u);
    wr32(arg2, t8);
    return;
L_100c8db7: ;
    wr32(arg2, 0x2062766du);
    goto L_100c8dde;
L_100c8dbf: ;
    wr32(arg2, 0x2072766du);
    goto L_100c8dde;
L_100c8dc7: ;
    if (rd32(self + 0x598u) == 2u)
    {
        eax = rd32(self + 0x598u) - 2u;
        goto L_100c8dd8;
    }
    eax = rd32(self + 0x598u) - 2u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_100c8db7;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100c8dde;
    }
    eax = eax - 1u;
L_100c8dd8: ;
    wr32(arg2, 0x206b6c77u);
    goto L_100c8dde;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c8bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c8bb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
