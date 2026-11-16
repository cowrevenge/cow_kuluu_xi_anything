/* f_0x101710d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101710d0(Guest* g)
{
    double d2;
    double d3;
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 >= (int32_t)rd8(self + 0x1a9u))
    {
        eax = arg1;
    }
    else
    {
        t1 = rd32(arg1 * 4u + self + 0x198u);
        d2 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(COW_IMG(0x1032961cu)));
        wrf32(t1 + 0xf8u, (float)d2);
        wrf32(t1 + 0x104u, (float)d2);
        wrf32(t1 + 0x110u, (float)d2);
        wrf32(t1 + 0x11cu, (float)d2);
        d3 = fr(g, (double)rdf32(sp0 + 0xcu) + (double)rdf32(COW_IMG(0x1032961cu)));
        wrf32(t1 + 0x128u, (float)d3);
        wrf32(t1 + 0x134u, (float)d3);
        wrf32(t1 + 0x140u, (float)d3);
        wrf32(t1 + 0x14cu, (float)d3);
        eax = t1;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101710d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101710d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
