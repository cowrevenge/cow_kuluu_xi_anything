/* f_0x102f21fb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f21fb(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double x0;
    double x1;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    eax = in_eax;
    ecx = self;
    edx = 0x10u;
L_102f21fe: ;
    d1 = (double)rdf32(ecx + 0xcu);
    if (0.0 != d1)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, 0.0, d1, 0u);
        goto L_102f2217;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, 0.0, d1, 0u);
    wrf32(ecx, (float)0.0);
    wrf32(ecx + 4u, (float)0.0);
    x0 = 0.0;
L_102f226d: ;
    wrf32(ecx + 8u, (float)x0);
L_102f2270: ;
    if (edx != 1u)
    {
        ecx = ecx + 0x10u;
        edx = edx - 1u;
        goto L_102f21fe;
    }
    return 0u;
L_102f2217: ;
    d2 = (double)rdf32(ecx + 0xcu);
    if ((cow_fsw(g, 1.0, d2, 0u) >> 8u & 0x41u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, 1.0, d2, 0u);
        goto L_102f2270;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, 1.0, d2, 0u);
    d3 = (double)rdf32(ecx + 0xcu);
    if (!((double)rdf32(ecx) < d3))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d3, 1u);
        x0 = fr(g, 1.0 / (double)rdf32(ecx + 0xcu));
        x1 = 1.0;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d3, 1u);
        x0 = fr(g, 1.0 / (double)rdf32(ecx + 0xcu));
        x1 = fr(g, x0 * (double)rdf32(ecx));
    }
    wrf32(ecx, (float)x1);
    d4 = (double)rdf32(ecx + 4u);
    d5 = (double)rdf32(ecx + 0xcu);
    if (!(d4 < d5))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 1u);
        x1 = 1.0;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 1u);
        x1 = fr(g, x0 * (double)rdf32(ecx + 4u));
    }
    wrf32(ecx + 4u, (float)x1);
    d6 = (double)rdf32(ecx + 8u);
    d7 = (double)rdf32(ecx + 0xcu);
    if (!(d6 < d7))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 1u);
        x0 = 1.0;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 1u);
        x0 = fr(g, x0 * (double)rdf32(ecx + 8u));
    }
    goto L_102f226d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f21fb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f21fb(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
