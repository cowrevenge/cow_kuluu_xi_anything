/* f_0x10045d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10045d40(Guest* g)
{
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
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

    t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t2 = rd32(COW_IMG(0x1047cf7cu));
    t3 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t2 + 0xa90u, t1);
    if (!(rd8(self + 0x10cu) & 1u))
    {
        edi = t3;
        loc_8 = t3;
        goto L_10045d7d;
    }
    edi = t3;
    loc_8 = t3;
    if ((rd32(self + 0x10cu) & 0x1c0u) == 0u)
    {
        eax = rd32(self + 0x10cu);
        goto L_10045d9f;
    }
L_10045d7d: ;
    t4 = rd32(self + 0x10cu);
    if (!(t4 >> 2u & 1u))
    {
        eax = t4;
        edx = in_edx;
        goto L_10045ef5;
    }
    eax = t4;
    if (!(eax >> 3u & 1u))
    {
        edx = eax >> 3u;
        goto L_10045ef5;
    }
L_10045d9f: ;
    if ((eax & 4u) == 0u) goto L_10045df6;
    if ((eax & 8u) == 0u) goto L_10045df6;
    esi = self + 0x60u;
    edi = self + 0xa0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t5 = rd32(self + 0x188u);
    wr32(self + 0xd0u, t5);
    t6 = rd32(self + 0x18cu);
    wr32(self + 0xd4u, t6);
    t7 = rd32(self + 0x190u);
    wr32(self + 0xd8u, t7);
    g->edx = t7;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100746a0u), loc_8, 0);
    t8 = g->edx;
    wr32(loc_8 + 0x14u, 0xbf800000u);
    g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t9 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t10 = cow_thiscall(g, rd32(t9 + 0x20u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0xa0u, loc_8, self + 0xa0u);
    eax = t10;
L_10045e2c: ;
    d14 = (double)rdf32(self + 0xd8u);
    if (!(d14 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(self + 0xd8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(self + 0xd8u);
        x0 = -x0;
    }
    if (!(x0 < (double)rdf32(COW_IMG(0x1032a39cu))))
    {
        if ((rd32(self + 0x10cu) & 4u) != 0u)
        {
            eax = rd32(self + 0x10cu);
            if ((eax & 8u) != 0u)
            {
                d22 = (double)rdf32(self + 0xd8u);
                wrf32(self + 0xd8u, (float)-d22);
                d23 = (double)rdf32(self + 0xd4u);
                wrf32(self + 0xd4u, (float)-d23);
            }
        }
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a39cu)), 0u);
        d15 = (double)rdf32(self + 0xd8u);
        if (d15 != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            d16 = fr(g, (double)rdf32(COW_IMG(0x1032a39cu)) / (double)rdf32(self + 0xd8u));
            d17 = fr(g, d16 * (double)rdf32(self + 0xd8u));
            wrf32(self + 0xd8u, (float)-d17);
            d18 = fr(g, d16 * (double)rdf32(self + 0xa0u));
            wrf32(self + 0xa0u, (float)d18);
            d19 = fr(g, d16 * (double)rdf32(self + 0xb4u));
            wrf32(self + 0xb4u, (float)d19);
            d20 = fr(g, d16 * (double)rdf32(self + 0xd0u));
            wrf32(self + 0xd0u, (float)d20);
            d21 = fr(g, d16 * (double)rdf32(self + 0xd4u));
            wrf32(self + 0xd4u, (float)-d21);
        }
    }
L_10046049: ;
    t41 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t42 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t42 + 0xa90u, t41);
    wr32(t41 * 4u + t42 + 0xa10u, loc_8);
    return;
L_10045df6: ;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x74u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0xa0u, self + 0x60u, 0x40490fd8u);
    t11 = rd32(self + 0x188u);
    wr32(self + 0xd0u, t11);
    t12 = rd32(self + 0x18cu);
    wr32(self + 0xd4u, t12);
    t13 = rd32(self + 0x190u);
    wr32(self + 0xd8u, t13);
    eax = t13;
    goto L_10045e2c;
L_10045ef5: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t24 = cow_thiscall(g, COW_IMG(0x10045c50u), self, 0);
    t25 = g->edx;
    t26 = rd32(self + 0x10cu);
    if (!(t26 >> 2u & 1u))
    {
        eax = t26;
        edx = t25;
        ebp = t24;
        loc_4 = t24;
        if (!(eax >> 0x11u & 1u))
        {
            if (eax >> 0xdu & 1u) goto L_10046017;
            if (eax >> 0xeu & 1u) goto L_10046017;
            eax = eax >> 0xeu;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t33 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
            t34 = g->edx;
            if (t33 == 0u) goto L_10046017;
            edx = t34;
            if (rd32(self + 0x100u) == 0u)
            {
                eax = rd32(self + 0xfcu);
            }
            else
            {
                eax = rd32(self + 0x100u);
            }
            if (eax != 0u)
            {
                if (rd32(eax) != 0u)
                {
                    eax = rd32(eax);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    t35 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
                    t36 = g->edx;
                    if (t35 != 0u)
                    {
                        eax = t35;
                        edx = t36;
                        g->eax = eax;
                        g->esp = sp0 - 0x18u;
                        t37 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
                        esi = t37;
                        ecx = 0x10u;
                        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        wr32(loc_8 + 0x30u, 0u);
                        wr32(loc_8 + 0x34u, 0u);
                        wr32(loc_8 + 0x38u, 0u);
                        wr32(loc_8 + 0x3cu, 0x3f800000u);
                        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x20u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0xa0u, self + 0x60u, loc_8);
                    }
                }
            }
            eax = loc_4;
            loc_1c = loc_4;
            loc_20 = self + 0xa0u;
L_10046022: ;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x20u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0xa0u, loc_20, loc_1c);
            t38 = rd32(self + 0x188u);
            wr32(self + 0xd0u, t38);
            t39 = rd32(self + 0x18cu);
            wr32(self + 0xd4u, t39);
            t40 = rd32(self + 0x190u);
            wr32(self + 0xd8u, t40);
        }
        else
        {
            esi = self + 0x60u;
            edi = self + 0xa0u;
            ecx = 0x10u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t30 = rd32(self + 0x188u);
            wr32(self + 0xd0u, t30);
            t31 = rd32(self + 0x18cu);
            wr32(self + 0xd4u, t31);
            t32 = rd32(self + 0x190u);
            wr32(self + 0xd8u, t32);
        }
    }
    else
    {
        ebp = t24;
        esi = self + 0x60u;
        edi = self + 0xa0u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t27 = rd32(self + 0x54u);
        wr32(self + 0xd0u, t27);
        t28 = rd32(self + 0x58u);
        wr32(self + 0xd4u, t28);
        t29 = rd32(self + 0x5cu);
        wr32(self + 0xd8u, t29);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x20u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0xa0u, self + 0xa0u, ebp);
    }
    goto L_10046049;
L_10046017: ;
    eax = self + 0x60u;
    loc_1c = ebp;
    loc_20 = self + 0x60u;
    goto L_10046022;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10045d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10045d40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
