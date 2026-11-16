/* f_0x102d9032 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102d9032(Guest* g)
{
    double d1;
    double d15;
    double d16;
    double d17;
    double d18;
    double d5;
    double d6;
    double d7;
    double d9;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_esi);
    d1 = (double)rdf32(rd32(sp0 + 8u));
    t2 = rd32(sp0 + 4u) + 0xcu;
    t3 = rd32(sp0 + 8u);
    t4 = rd32(sp0 + 4u);
    d5 = (double)rdf32(rd32(sp0 + 8u) + 4u);
    d6 = (double)rdf32(rd32(sp0 + 8u) + 8u);
    wr32(sp0 + 4u, t2);
    wr32(sp0 - 0xcu, sp0 + 8u);
    d7 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d1 * d1) + fr(g, d5 * d5)) + fr(g, d6 * d6))));
    wrf32(sp0 - 8u, (float)d7);
    t8 = rd32(sp0 + 4u);
    wrf32(t8, (float)fr(g, cos(d7)));
    wrf32(sp0 + 8u, (float)fr(g, sin(d7)));
    wr32(sp0 - 0x14u, t3);
    wr32(sp0 - 0x18u, t3);
    wrf32(sp0 - 0x14u, (float)(double)(float)0.0);
    d9 = (double)(float)(double)rdf32(sp0 + 8u);
    wrf32(sp0 - 0x18u, (float)d9);
    g->ecx = t3;
    g->edx = t8;
    g->esp = sp0 - 0x10u;
    t10 = cow_call_regs(g, COW_IMG(0x102d6203u), sp0 + 8u, g->ecx, g->edx, 1, 2, cow_f2bits(d9), cow_f2bits((double)(float)0.0));
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        ecx = t11;
        edx = t12;
        esi = t4;
        d15 = fr(g, (double)rdf32(sp0 + 8u) / (double)rdf32(sp0 - 8u));
        d16 = fr(g, d15 * (double)rdf32(ecx));
        wrf32(esi, (float)d16);
        d17 = fr(g, d15 * (double)rdf32(ecx + 4u));
        wrf32(esi + 4u, (float)d17);
        d18 = fr(g, d15 * (double)rdf32(ecx + 8u));
        wrf32(esi + 8u, (float)d18);
    }
    else
    {
        ecx = t11;
        edx = t12;
        esi = t4;
        if (esi != ecx)
        {
            wr32(esi, rd32(ecx));
            t13 = rd32(ecx + 4u);
            wr32(esi + 4u, t13);
            t14 = rd32(ecx + 8u);
            wr32(esi + 8u, t14);
        }
    }
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d9032(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d9032(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
