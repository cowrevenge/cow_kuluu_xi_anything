/* f_0x102d8eda - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102d8eda(Guest* g)
{
    double d1;
    double d11;
    double d15;
    double d16;
    double d17;
    double d18;
    double d2;
    double d3;
    double d4;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t5;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(rd32(sp0 + 8u));
    d2 = (double)rdf32(rd32(sp0 + 8u) + 4u);
    d3 = (double)rdf32(rd32(sp0 + 8u) + 8u);
    d4 = (double)rdf32(rd32(sp0 + 8u) + 0xcu);
    t5 = rd32(sp0 + 8u);
    wrf32(sp0 + 8u, (float)fr(g, fr(g, fr(g, fr(g, d1 * d1) + fr(g, d2 * d2)) + fr(g, d3 * d3)) + fr(g, d4 * d4)));
    d6 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10345db8u)), 0u) >> 8u & 0x41u) != 0u)
    {
        edx = t5;
        goto L_102d8f75;
    }
    edx = t5;
    d7 = (double)rdf32(edx);
    wrf32(arg1, (float)-d7);
    d8 = (double)rdf32(edx + 4u);
    wrf32(arg1 + 4u, (float)-d8);
    d9 = (double)rdf32(edx + 8u);
    wrf32(arg1 + 8u, (float)-d9);
    t10 = rd32(edx + 0xcu);
    wr32(arg1 + 0xcu, t10);
    d11 = (double)(float)(double)rdf32(sp0 + 8u);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_call_regs(g, COW_IMG(0x102d6203u), t10, g->ecx, g->edx, 1, 2, cow_f2bits(d11), cow_f2bits((double)(float)1.0));
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        ecx = t13;
        edx = t14;
        goto L_102d8f88;
    }
    ecx = t13;
    edx = t14;
    d15 = fr(g, 1.0 / (double)rdf32(sp0 + 8u));
    d16 = fr(g, d15 * (double)rdf32(ecx));
    wrf32(ecx, (float)d16);
    d17 = fr(g, d15 * (double)rdf32(ecx + 4u));
    wrf32(ecx + 4u, (float)d17);
    d18 = fr(g, d15 * (double)rdf32(ecx + 8u));
    wrf32(ecx + 8u, (float)d18);
    x0 = fr(g, d15 * (double)rdf32(ecx + 0xcu));
L_102d8f85: ;
    wrf32(ecx + 0xcu, (float)x0);
L_102d8f88: ;
    g->edx = edx;
    return ecx;
L_102d8f75: ;
    wrf32(arg1, (float)0.0);
    wrf32(arg1 + 4u, (float)0.0);
    wrf32(arg1 + 8u, (float)0.0);
    ecx = arg1;
    x0 = 0.0;
    goto L_102d8f85;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d8eda(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d8eda(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
