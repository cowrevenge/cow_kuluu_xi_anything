/* f_0x100a8000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a8000(Guest* g)
{
    double d17;
    double d25;
    double d26;
    double d27;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x10027530u), 2, t1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)fr(g, sqrt(d5)));
    g->edx = t4;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x100274b0u), t2, g->ecx, g->edx, 1, 1, t1);
    t6 = g->edx;
    if (rd32(self + 0x598u) == 2u)
    {
        edx = t6;
        edi = t1;
        goto L_100a808e;
    }
    eax = rd32(self + 0x598u) - 2u;
    edx = t6;
    edi = t1;
    if (eax == 1u) goto L_100a804c;
    eax = eax - 1u;
    if (eax == 1u) goto L_100a808e;
    eax = eax - 1u;
L_100a802f: ;
    x0 = (double)rdf32(sp0 + 4u);
L_100a8033: ;
    d25 = fr(g, x0 * (double)rdf32(edi));
    wrf32(edi, (float)d25);
    d26 = fr(g, x0 * (double)rdf32(edi + 4u));
    wrf32(edi + 4u, (float)d26);
    d27 = fr(g, x0 * (double)rdf32(edi + 8u));
    wrf32(edi + 8u, (float)d27);
    return eax;
L_100a804c: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(self) + 0x1b0u), self, 0);
    t7 = g->edx;
    d8 = cow_take_float(g);
    d9 = fr(g, d8 * (double)rdf32(COW_IMG(0x1032b160u)));
    wrf32(sp0 + 4u, (float)d9);
    g->edx = t7;
    t10 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t10);
    t13 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        eax = t12;
        goto L_100a8086;
    }
    edx = t13;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t15 = g->edx;
    t16 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t14);
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        goto L_100a802f;
    }
    eax = t16;
L_100a8086: ;
    d17 = (double)rdf32(sp0 + 4u);
    x0 = fr(g, d17 + d17);
    goto L_100a8033;
L_100a808e: ;
    wr32(sp0 + 4u, 0x3d800000u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t18);
    t21 = g->edx;
    if ((uint8_t)t20 != 0u)
    {
        eax = t20;
        goto L_100a80c0;
    }
    edx = t21;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t22 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t23 = g->edx;
    t24 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t22);
    if ((uint8_t)t24 == 0u)
    {
        eax = t24;
        goto L_100a802f;
    }
    eax = t24;
L_100a80c0: ;
    x0 = (double)rdf32(COW_IMG(0x1032a3bcu));
    goto L_100a8033;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a8000(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
