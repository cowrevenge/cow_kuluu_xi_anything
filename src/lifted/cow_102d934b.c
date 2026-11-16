/* f_0x102d934b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102d934b(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d2;
    double d3;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, self);
    d1 = (double)rdf32(rd32(sp0 + 8u));
    d2 = (double)rdf32(rd32(sp0 + 8u) + 4u);
    d3 = (double)rdf32(rd32(sp0 + 8u) + 8u);
    t4 = rd32(sp0 + 8u);
    wrf32(sp0 + 8u, (float)fr(g, fr(g, fr(g, d1 * d1) + fr(g, d2 * d2)) + fr(g, d3 * d3)));
    wrf32(sp0 - 0xcu, (float)(double)(float)1.0);
    d5 = (double)(float)(double)rdf32(sp0 + 8u);
    wrf32(sp0 - 0x10u, (float)d5);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x102d6203u), in_eax, g->ecx, g->edx, 1, 2, cow_f2bits(d5), cow_f2bits((double)(float)1.0));
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t7;
        esi = t4;
        d8 = (double)rdf32(sp0 + 8u);
        if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032ac8cu)), 0u) >> 8u & 0x41u) != 0u)
        {
            wrf32(arg1, (float)0.0);
            wrf32(arg1 + 4u, (float)0.0);
            wrf32(arg1 + 8u, (float)0.0);
            x0 = 0.0;
        }
        else
        {
            d9 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt((double)rdf32(sp0 + 8u))));
            d10 = fr(g, d9 * (double)rdf32(esi));
            wrf32(arg1, (float)d10);
            d11 = fr(g, d9 * (double)rdf32(esi + 4u));
            wrf32(arg1 + 4u, (float)d11);
            d12 = fr(g, d9 * (double)rdf32(esi + 8u));
            wrf32(arg1 + 8u, (float)d12);
            x0 = fr(g, d9 * (double)rdf32(esi + 0xcu));
        }
        wrf32(arg1 + 0xcu, (float)x0);
    }
    else
    {
        edx = t7;
        esi = t4;
        if (arg1 != esi)
        {
            wr32(sp0 - 0xcu, in_edi);
            edi = arg1;
            wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
            wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
            wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
            wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        }
    }
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d934b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d934b(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
