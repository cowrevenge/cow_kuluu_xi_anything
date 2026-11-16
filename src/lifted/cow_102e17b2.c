/* f_0x102e17b2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e17b2(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    double x0;
    double x1;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) == 1u) goto L_102e19a8;
    eax = rd32(self + 8u) - 1u;
    if (eax == 1u) goto L_102e18bb;
    eax = eax - 1u;
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    if (rd32(self + 0x1048u) == 1u) goto L_102e1843;
    eax = rd32(self + 0x1048u) - 1u;
    if (eax != 1u)
    {
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0x1058u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            eax = arg1 + 8u;
            edx = 0u;
            esi = 0u;
L_102e17f5: ;
            d1 = (double)rdf32(eax - 8u);
            wrf32(edx + rd32(self + 0x104cu), (float)d1);
            d2 = (double)rdf32(eax - 4u);
            wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d2);
            d3 = (double)rdf32(eax);
            wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d3);
            d4 = (double)rdf32(eax + 4u);
            d5 = fr(g, fr(g, d4 + d4) - (double)rdf32(COW_IMG(0x1032961cu)));
            wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d5);
            if (esi + 1u < rd32(self + 0x1058u))
            {
                eax = eax + 0x10u;
                edx = edx + 0x10u;
                esi = esi + 1u;
                goto L_102e17f5;
            }
            edx = edx + 0x10u;
        }
    }
L_102e1a9d: ;
    g->edx = edx;
    return rd32(self + 0x104cu);
L_102e1843: ;
    if (rd32(self + 0x1058u) == 0u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    eax = arg1 + 8u;
    edx = 0u;
    esi = 0u;
    x1 = (double)rdf32(COW_IMG(0x1032961cu));
    x0 = (double)rdf32(COW_IMG(0x10329990u));
L_102e1865: ;
    d6 = fr(g, fr(g, (double)rdf32(eax - 8u) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu), (float)d6);
    d7 = fr(g, fr(g, (double)rdf32(eax - 4u) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d7);
    d8 = fr(g, fr(g, (double)rdf32(eax) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d8);
    d9 = fr(g, fr(g, (double)rdf32(eax + 4u) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d9);
    if (esi + 1u < rd32(self + 0x1058u))
    {
        eax = eax + 0x10u;
        edx = edx + 0x10u;
        esi = esi + 1u;
        goto L_102e1865;
    }
    edx = edx + 0x10u;
L_102e1a99: ;
    goto L_102e1a9d;
L_102e18bb: ;
    if (rd32(self + 0x1048u) == 1u) goto L_102e1934;
    eax = rd32(self + 0x1048u) - 1u;
    if (eax != 2u)
    {
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0x1058u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            eax = arg1 + 8u;
            edx = 0u;
            esi = 0u;
L_102e18e2: ;
            d10 = (double)rdf32(eax - 8u);
            wrf32(edx + rd32(self + 0x104cu), (float)d10);
            d11 = (double)rdf32(eax - 4u);
            wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d11);
            d12 = (double)rdf32(eax);
            wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d12);
            d13 = fr(g, fr(g, (double)rdf32(eax + 4u) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d13);
            if (esi + 1u < rd32(self + 0x1058u))
            {
                eax = eax + 0x10u;
                edx = edx + 0x10u;
                esi = esi + 1u;
                goto L_102e18e2;
            }
            edx = edx + 0x10u;
        }
    }
    goto L_102e1a9d;
L_102e1934: ;
    if (rd32(self + 0x1058u) == 0u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    eax = arg1 + 8u;
    edx = 0u;
    esi = 0u;
    x1 = (double)rdf32(COW_IMG(0x1032961cu));
    x0 = (double)rdf32(COW_IMG(0x10329990u));
L_102e1956: ;
    d14 = fr(g, fr(g, (double)rdf32(eax - 8u) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu), (float)d14);
    d15 = fr(g, fr(g, (double)rdf32(eax - 4u) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d15);
    d16 = fr(g, fr(g, (double)rdf32(eax) * x0) - x1);
    wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d16);
    d17 = (double)rdf32(eax + 4u);
    wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d17);
    if (esi + 1u < rd32(self + 0x1058u))
    {
        eax = eax + 0x10u;
        edx = edx + 0x10u;
        esi = esi + 1u;
        goto L_102e1956;
    }
    edx = edx + 0x10u;
    goto L_102e1a99;
L_102e19a8: ;
    if (rd32(self + 0x1048u) == 2u) goto L_102e1a2e;
    eax = rd32(self + 0x1048u) - 2u;
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    if (rd32(self + 0x1058u) == 0u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    eax = arg1 + 8u;
    edx = 0u;
    esi = 0u;
    x1 = (double)rdf32(COW_IMG(0x10329a08u));
    x0 = (double)rdf32(COW_IMG(0x1032961cu));
L_102e19db: ;
    d18 = fr(g, fr(g, (double)rdf32(eax - 8u) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu), (float)d18);
    d19 = fr(g, fr(g, (double)rdf32(eax - 4u) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d19);
    d20 = fr(g, fr(g, (double)rdf32(eax) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d20);
    d21 = fr(g, fr(g, (double)rdf32(eax + 4u) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d21);
    if (esi + 1u < rd32(self + 0x1058u))
    {
        eax = eax + 0x10u;
        edx = edx + 0x10u;
        esi = esi + 1u;
        goto L_102e19db;
    }
    edx = edx + 0x10u;
    goto L_102e1a99;
L_102e1a2e: ;
    if (rd32(self + 0x1058u) == 0u)
    {
        edx = in_edx;
        goto L_102e1a9d;
    }
    eax = arg1 + 8u;
    edx = 0u;
    esi = 0u;
    x1 = (double)rdf32(COW_IMG(0x10329a08u));
    x0 = (double)rdf32(COW_IMG(0x1032961cu));
L_102e1a4c: ;
    d22 = fr(g, fr(g, (double)rdf32(eax - 8u) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu), (float)d22);
    d23 = fr(g, fr(g, (double)rdf32(eax - 4u) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu) + 4u, (float)d23);
    d24 = fr(g, fr(g, (double)rdf32(eax) + x0) * x1);
    wrf32(edx + rd32(self + 0x104cu) + 8u, (float)d24);
    d25 = (double)rdf32(eax + 4u);
    wrf32(edx + rd32(self + 0x104cu) + 0xcu, (float)d25);
    if (esi + 1u < rd32(self + 0x1058u))
    {
        eax = eax + 0x10u;
        edx = edx + 0x10u;
        esi = esi + 1u;
        goto L_102e1a4c;
    }
    edx = edx + 0x10u;
    goto L_102e1a99;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e17b2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e17b2(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
