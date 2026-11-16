/* f_0x10274910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10274910(Guest* g)
{
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    double x0;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = arg1;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x102746e0u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    if (d4 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        edx = t3;
        x0 = d4;
    }
    else
    {
        ecx = t2;
        edx = t3;
        x0 = d4;
        d5 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
        d6 = fr(g, d5 * (double)rdf32(ecx));
        wrf32(ecx, (float)d6);
        d7 = fr(g, d5 * (double)rdf32(ecx + 4u));
        wrf32(ecx + 4u, (float)d7);
        d8 = fr(g, d5 * (double)rdf32(ecx + 8u));
        wrf32(ecx + 8u, (float)d8);
    }
    g->edx = edx;
    fpush(g, x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10274910(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
