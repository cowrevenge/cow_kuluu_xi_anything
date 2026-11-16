/* f_0x102d96f7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_102d96f7(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;

    d1 = (double)rdf32(sp0 + 4u);
    if (!(d1 < (double)rdf32(COW_IMG(0x1032ac8cu))))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x1032ac8cu)), 0u);
        d2 = (double)rdf32(sp0 + 4u);
        d3 = (double)rdf32(sp0 + 8u);
        d4 = fr(g, fr(g, fr(g, d3 * d3) - (double)rdf32(COW_IMG(0x1032961cu))) + fr(g, d2 * d2));
        wrf32(sp0 + 8u, (float)fabs(d4));
        d5 = fr(g, sqrt(fabs(d4)));
        d6 = fr(g, fr(g, d5 * (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x10329990u)));
        d7 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 + 8u) - fr(g, fr(g, d5 * (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x10329990u)))) + fr(g, d2 * d2)) / fr(g, fr(g, d6 + (double)rdf32(sp0 + 8u)) + fr(g, d2 * d2)));
        d8 = (double)(float)fr(g, 1.0 - fr(g, d2 * d2));
        d9 = (double)(float)fr(g, 1.0 - fr(g, d2 * d2));
        d10 = fr(g, fr(g, fr(g, fr(g, 1.0 - fr(g, d2 * d2)) / (double)rdf32(sp0 + 4u)) * d5) * (double)rdf32(COW_IMG(0x10329990u)));
        d11 = (double)rdf32(COW_IMG(0x10329990u));
        wrf32(sp0 + 4u, (float)d10);
        d12 = fr(g, fr(g, fr(g, fr(g, fr(g, d8 * d8) * fr(g, 1.0 / fr(g, d2 * d2))) + fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(sp0 + 4u))) * d7) / fr(g, fr(g, fr(g, fr(g, d9 * d9) * fr(g, 1.0 / fr(g, d2 * d2))) + (double)rdf32(sp0 + 4u)) + (double)rdf32(sp0 + 8u)));
        d13 = fr(g, fr(g, d12 + d7) * (double)rdf32(COW_IMG(0x10329a08u)));
        if ((cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032961cu)), 1u) >> 8u & 0x41u) != 0u)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
            x0 = d13;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
            x0 = d13;
            x0 = 1.0;
        }
        if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = 0.0;
        }
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x1032ac8cu)), 0u);
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    fpush(g, x0);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d96f7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d96f7(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
