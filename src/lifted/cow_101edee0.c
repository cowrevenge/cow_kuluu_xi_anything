/* f_0x101edee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101edee0(Guest* g)
{
    double d1;
    double d11;
    double d12;
    double d14;
    double d2;
    double d3;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t10;
    uint32_t t13;
    uint32_t t4;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0xd8u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0xd8u);
        d1 = fr(g, fr(g, fr(g, (double)rdf32(self + 0xc8u) - (double)rdf32(self + 0xdcu)) * (double)rdf32(self + 0xe8u)) + (double)rdf32(self + 0xdcu));
        wrf32(self + 0xbcu, (float)d1);
        d2 = fr(g, fr(g, fr(g, (double)rdf32(self + 0xccu) - (double)rdf32(self + 0xe0u)) * (double)rdf32(self + 0xe8u)) + (double)rdf32(self + 0xe0u));
        wrf32(self + 0xc0u, (float)d2);
        d3 = fr(g, fr(g, fr(g, (double)rdf32(self + 0xd0u) - (double)rdf32(self + 0xe4u)) * (double)rdf32(self + 0xe8u)) + (double)rdf32(self + 0xe4u));
        wrf32(self + 0xc4u, (float)d3);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t4 = g->edx;
        d5 = cow_take_float(g);
        if (rd8(self + 0xd8u) == 1u)
        {
            eax = rd8(self + 0xd8u) - 1u;
            edx = t4;
            x0 = fr(g, fr(g, d5 * (double)rdf32(self + 0xd4u)) * (double)rdf32(COW_IMG(0x1032a334u)));
            d7 = fr(g, x0 + (double)rdf32(self + 0xe8u));
            wrf32(self + 0xe8u, (float)d7);
        }
        else
        {
            eax = rd8(self + 0xd8u) - 1u;
            edx = t4;
            x0 = fr(g, fr(g, d5 * (double)rdf32(self + 0xd4u)) * (double)rdf32(COW_IMG(0x1032a334u)));
            if (eax == 1u)
            {
                eax = eax - 1u;
                goto L_101ee01b;
            }
            eax = eax - 1u;
            if (eax != 1u)
            {
                eax = eax - 1u;
                goto L_101edf90;
            }
            eax = eax - 1u;
            x1 = (double)rdf32(self + 0xe8u);
L_101edf7c: ;
            d6 = fr(g, fr(g, fr(g, x1 + (double)rdf32(COW_IMG(0x1032b7b4u))) * x0) + (double)rdf32(self + 0xe8u));
            wrf32(self + 0xe8u, (float)d6);
L_101edf90: ;
        }
        d8 = (double)rdf32(self + 0xe8u);
        if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) == 0u)
        {
            wr32(self + 0xe8u, 0x3f800000u);
        }
    }
    d9 = fr(g, (double)rdf32(self + 0xc4u) * (double)rdf32(self + 0x68u));
    wrf32(self + 0x58u, (float)d9);
    t10 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    d11 = fr(g, (double)rdf32(self + 0xbcu) - fr(g, fr(g, (double)(int32_t)t10 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d9)) * (double)rdf32(COW_IMG(0x10329a08u))));
    d12 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d9);
    wrf32(self + 0x24u, (float)d11);
    t13 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    d14 = fr(g, (double)rdf32(self + 0xc0u) - fr(g, fr(g, (double)(int32_t)t13 * d12) * (double)rdf32(COW_IMG(0x10329a08u))));
    wrf32(self + 0x28u, (float)d14);
    return;
L_101ee01b: ;
    x1 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0xe8u));
    goto L_101edf7c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101edee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101edee0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
