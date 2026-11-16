/* f_0x102fba10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102fba10(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d2;
    double d3;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t4;
    uint32_t t5;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_edi);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_ebx);
    if (!((double)rdf32(COW_IMG(0x109fa27cu)) >= fr(g, fr(g, (double)rdf32(arg2) + (double)rdf32(arg2 + 0x14u)) + (double)rdf32(arg2 + 0x28u))))
    {
        x1 = (double)rdf32(arg2 + 0x28u);
        x0 = fr(g, fr(g, (double)rdf32(arg2) + (double)rdf32(arg2 + 0x14u)) + (double)rdf32(arg2 + 0x28u));
        d10 = fr(g, fr(g, sqrt(fr(g, x0 + (double)rdf32(COW_IMG(0x109fa280u))))) * (double)rdf32(COW_IMG(0x109fa284u)));
        d11 = fr(g, (double)rdf32(COW_IMG(0x109fa288u)) / fr(g, fr(g, sqrt(fr(g, x0 + (double)rdf32(COW_IMG(0x109fa280u))))) * (double)rdf32(COW_IMG(0x109fa284u))));
        wrf32(arg1 + 0xcu, (float)d10);
        d12 = fr(g, fr(g, (double)rdf32(arg2 + 0x18u) - (double)rdf32(arg2 + 0x24u)) * d11);
        wrf32(arg1, (float)d12);
        d13 = fr(g, fr(g, (double)rdf32(arg2 + 0x20u) - (double)rdf32(arg2 + 8u)) * d11);
        wrf32(arg1 + 4u, (float)d13);
        d14 = fr(g, d11 * fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(arg2 + 0x10u)));
        wrf32(arg1 + 8u, (float)d14);
        edx = arg2;
    }
    else
    {
        ebp = rd32(arg2 + 0x28u);
        esi = rd32(arg2 + 0x14u);
        edi = rd32(arg2);
        x1 = (double)rdf32(arg2 + 0x28u);
        x0 = fr(g, fr(g, (double)rdf32(arg2) + (double)rdf32(arg2 + 0x14u)) + (double)rdf32(arg2 + 0x28u));
        wr32(sp0 - 0x1cu, edi);
        wr32(sp0 - 0x18u, esi);
        wr32(sp0 - 0x14u, ebp);
        d1 = fr(g, fr(g, (double)rdf32(COW_IMG(0x109fa290u)) + (double)rdf32(sp0 + ((double)rdf32(sp0 + (cow_bits2f(esi) > cow_bits2f(edi)) * 4u - 0x1cu) >= x1 ? cow_bits2f(esi) > cow_bits2f(edi) : 2u) * 4u - 0x1cu)) - (double)rdf32(sp0 + rd32(COW_IMG(0x109fa270u) + ((double)rdf32(sp0 + (cow_bits2f(esi) > cow_bits2f(edi)) * 4u - 0x1cu) >= x1 ? cow_bits2f(esi) > cow_bits2f(edi) : 2u) * 4u) * 4u - 0x1cu));
        d2 = fr(g, fr(g, sqrt(fr(g, d1 - (double)rdf32(sp0 + rd32(COW_IMG(0x109fa270u) + rd32(COW_IMG(0x109fa270u) + ((double)rdf32(sp0 + (cow_bits2f(esi) > cow_bits2f(edi)) * 4u - 0x1cu) >= x1 ? cow_bits2f(esi) > cow_bits2f(edi) : 2u) * 4u) * 4u) * 4u - 0x1cu)))) * (double)rdf32(COW_IMG(0x109fa294u)));
        d3 = (double)rdf32(sp0 + (cow_bits2f(esi) > cow_bits2f(edi)) * 4u - 0x1cu);
        t4 = rd32(COW_IMG(0x109fa270u) + ((double)rdf32(sp0 + (cow_bits2f(esi) > cow_bits2f(edi)) * 4u - 0x1cu) >= x1 ? cow_bits2f(esi) > cow_bits2f(edi) : 2u) * 4u);
        t5 = rd32(COW_IMG(0x109fa270u) + rd32(COW_IMG(0x109fa270u) + ((double)rdf32(sp0 + (cow_bits2f(esi) > cow_bits2f(edi)) * 4u - 0x1cu) >= x1 ? cow_bits2f(esi) > cow_bits2f(edi) : 2u) * 4u) * 4u);
        d6 = fr(g, (double)rdf32(COW_IMG(0x109fa298u)) / d2);
        wrf32(arg1 + (d3 >= x1 ? cow_bits2f(esi) > cow_bits2f(edi) : 2u) * 4u, (float)d2);
        d7 = fr(g, fr(g, (double)rdf32(arg2 + t4 * 4u + (d3 >= x1 ? cow_bits2f(esi) > cow_bits2f(edi) : 2u) * 0x10u) + (double)rdf32(arg2 + t4 * 0x10u + (d3 >= x1 ? cow_bits2f(esi) > cow_bits2f(edi) : 2u) * 4u)) * d6);
        wrf32(arg1 + t4 * 4u, (float)d7);
        d8 = fr(g, fr(g, (double)rdf32(arg2 + t5 * 0x10u + (d3 >= x1 ? cow_bits2f(esi) > cow_bits2f(edi) : 2u) * 4u) + (double)rdf32(arg2 + t5 * 4u + (d3 >= x1 ? cow_bits2f(esi) > cow_bits2f(edi) : 2u) * 0x10u)) * d6);
        wrf32(arg1 + t5 * 4u, (float)d8);
        d9 = fr(g, d6 * fr(g, (double)rdf32(arg2 + t4 * 0x10u + t5 * 4u) - (double)rdf32(arg2 + t4 * 4u + t5 * 0x10u)));
        wrf32(arg1 + 0xcu, (float)d9);
        edx = arg2 + t4 * 4u;
    }
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102fba10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102fba10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
