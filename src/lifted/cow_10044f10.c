/* f_0x10044f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10044f10(Guest* g)
{
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d26;
    double d27;
    double d28;
    double d29;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd32(self + 0x10cu);
    if (!(t1 >> 2u & 1u))
    {
        eax = t1;
        if (!(eax >> 0x11u & 1u))
        {
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->edx = rd32(COW_IMG(0x1047cf7cu));
            t20 = rd32(COW_IMG(0x1047cf7cu));
            t21 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t22 = rd32(COW_IMG(0x1047bfa8u));
            g->esp = sp0 - 0x1cu;
            t23 = cow_thiscall(g, COW_IMG(0x10044c40u), self, 1, sp0 - 0xcu);
            t24 = g->edx;
            wr32(sp0 - 0x20u, t23);
            wr32(sp0 - 0x24u, t22 + 0xb50u);
            wr32(sp0 - 0x28u, self + 0x188u);
            cow_thiscall(g, rd32(t21 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0x188u, t22 + 0xb50u, t23);
        }
        else
        {
            if (rd32(self + 0xfcu) == 0u) goto L_1004500d;
            eax = rd32(self + 0xfcu);
            if (rd32(eax) == 0u) goto L_1004500d;
            g->edx = in_edx;
            g->esp = sp0 - 0x1cu;
            t7 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
            t8 = g->edx;
            if (t7 == 0u) goto L_1004500d;
            edx = t8;
            g->esp = sp0 - 0x1cu;
            t9 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
            t10 = rd32(t9 + 0x30u);
            wr32(sp0 - 0xcu, t10);
            t11 = rd32(t9 + 0x34u);
            wr32(sp0 - 8u, t11);
            t12 = rd32(t9 + 0x38u);
            wr32(sp0 - 4u, t12);
L_10045025: ;
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            t13 = rd32(COW_IMG(0x1047bfa8u)) + 0xb50u;
            wr32(sp0 - 0x24u, t13);
            wr32(sp0 - 0x28u, self + 0x188u);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0x188u, t13, sp0 - 0xcu);
            if (!(rd8(self + 0x10cu) & 1u)) goto L_10045082;
            if ((rd32(self + 0x10cu) & 0x1c0u) != 0u) goto L_10045082;
            d14 = fr(g, (double)rdf32(self + 0x54u) + (double)rdf32(self + 0x188u));
            wrf32(self + 0x188u, (float)d14);
            d15 = fr(g, (double)rdf32(self + 0x18cu) - (double)rdf32(self + 0x58u));
            wrf32(self + 0x18cu, (float)d15);
            d16 = fr(g, (double)rdf32(self + 0x5cu) + (double)rdf32(self + 0x190u));
            wrf32(self + 0x190u, (float)d16);
        }
    }
    else
    {
        eax = t1;
        if (!(eax >> 3u & 1u))
        {
            wr32(sp0 - 0x20u, self + 0x54u);
            t6 = rd32(COW_IMG(0x1047bfa8u)) + 0xb90u;
            wr32(sp0 - 0x24u, t6);
            wr32(sp0 - 0x28u, self + 0x188u);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0x188u, t6, self + 0x54u);
        }
        else
        {
            t2 = rd32(self + 0x54u);
            wr32(self + 0x188u, t2);
            t3 = rd32(self + 0x58u);
            t4 = rd32(self + 0x5cu);
            wr32(self + 0x18cu, t3);
            wr32(self + 0x190u, t4);
            if (rd32(self + 0xfcu) != 0u)
            {
                eax = rd32(self + 0xfcu);
                if (rd32(eax) != 0u)
                {
                    if (eax == 0u)
                    {
                        eax = 0u;
                    }
                    else
                    {
                        eax = rd32(eax);
                    }
                    if (rd8(eax + 0xdfu) & 1u)
                    {
                        d5 = (double)rdf32(self + 0x190u);
                        if (d5 < (double)rdf32(COW_IMG(0x10329a30u)))
                        {
                            wr32(self + 0x190u, 0x3f19999au);
                        }
                    }
                }
            }
        }
    }
L_100450cf: ;
    t25 = rd32(self + 0x10cu);
    if (!(t25 >> 0x16u & 1u))
    {
        ecx = t25;
        edx = t25 >> 0x16u;
        if (!(ecx >> 2u & 1u)) goto L_10045132;
        eax = ecx >> 2u;
        if (!(ecx >> 3u & 1u))
        {
            edx = ecx >> 3u;
            goto L_10045132;
        }
        edx = ecx >> 3u;
        d26 = (double)rdf32(self + 0x128u);
        if (!(d26 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = (double)rdf32(self + 0x128u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = (double)rdf32(self + 0x128u);
            x0 = -x0;
        }
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032b078u)), 0u) & 0x4100u) != 0u) goto L_10045132;
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0x128u));
L_10045138: ;
        x0 = fr(g, x0 - (double)rdf32(self + 0x190u));
    }
    else
    {
        ecx = t25;
        edx = t25 >> 0x16u;
        x0 = (double)rdf32(self + 0x128u);
    }
    wrf32(self + 0x12cu, (float)x0);
    wr32(self + 0x130u, 0u);
    if (ecx >> 0x1bu & 1u)
    {
        d27 = fr(g, (double)rdf32(self + 0x128u) - (double)rdf32(self + 0x190u));
        wr32(self + 0x130u, 0u);
        d28 = fr(g, d27 + (double)rdf32(COW_IMG(0x1032b074u)));
        wrf32(self + 0x12cu, (float)d28);
    }
    d29 = (double)rdf32(self + 0x190u);
    wrf32(self + 0x13cu, (float)d29);
    g->edx = edx;
    return;
L_1004500d: ;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    loc_10 = in_ebx;
    loc_14 = in_ebp;
    loc_18 = in_esi;
    loc_1c = in_edi;
    goto L_10045025;
L_10045082: ;
    d17 = fr(g, (double)rdf32(self + 0x54u) + (double)rdf32(self + 0x188u));
    wrf32(self + 0x188u, (float)d17);
    d18 = fr(g, (double)rdf32(self + 0x58u) + (double)rdf32(self + 0x18cu));
    wrf32(self + 0x18cu, (float)d18);
    d19 = fr(g, (double)rdf32(self + 0x5cu) + (double)rdf32(self + 0x190u));
    wrf32(self + 0x190u, (float)d19);
    goto L_100450cf;
L_10045132: ;
    x0 = (double)rdf32(self + 0x128u);
    goto L_10045138;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10044f10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
