/* f_0x100545a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_100545a0(Guest* g)
{
    double d1;
    double d10;
    double d2;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)rdf32(self + 0x34u);
    wr32(self + 0x34u, arg2);
    d2 = (double)rdf32(self + 0x38u);
    d3 = (double)rdf32(sp0 + 4u);
    if (!(d2 < d3))
    {
        eax = (arg2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d3, 1u);
        edx = self + 0x38u;
        esi = self + 0x30u;
        x0 = d1;
        goto L_100545e3;
    }
    eax = (arg2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d3, 1u);
    edx = self + 0x38u;
    x0 = d1;
L_100545be: ;
    if (!((double)rdf32(edx) < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edx), (double)rdf32(COW_IMG(0x1032961cu)), 1u);
        esi = edx;
        edx = 0u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edx), (double)rdf32(COW_IMG(0x1032961cu)), 1u);
        esi = edx;
        edx = edx + 8u;
    }
    d4 = (double)rdf32(sp0 + 4u);
    if ((double)rdf32(edx) < d4)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edx), d4, 1u);
        goto L_100545be;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edx), d4, 1u);
L_100545e3: ;
    d5 = fr(g, fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(esi)) / fr(g, (double)rdf32(edx) - (double)rdf32(esi)));
    if (!(d5 < (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10329a08u)), 2u);
        x1 = d5;
        goto L_1005461f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10329a08u)), 2u);
    x1 = d5;
    d6 = fr(g, x1 * x1);
    d7 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d6 + d6)) * (double)rdf32(esi + 4u)) + fr(g, (double)rdf32(edx + 4u) * fr(g, d6 + d6)));
    wrf32(self + 0x34u, (float)x0);
    g->edx = edx;
    fpush(g, d7);
    return eax;
L_1005461f: ;
    d8 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x1);
    d9 = fr(g, d8 * d8);
    d10 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d9 + d9)) * (double)rdf32(edx + 4u)) + fr(g, (double)rdf32(esi + 4u) * fr(g, d9 + d9)));
    wrf32(self + 0x34u, (float)x0);
    g->edx = edx;
    fpush(g, d10);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100545a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100545a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
