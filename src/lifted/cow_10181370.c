/* f_0x10181370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10181370(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d7;
    uint32_t eax;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    d1 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(COW_IMG(0x1032a42cu)));
    wrf32(sp0 - 0x24u, (float)d1);
    d2 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(COW_IMG(0x1032a42cu)));
    wrf32(sp0 - 0x18u, (float)d2);
    wr32(sp0 - 0x2cu, sp0 - 0x24u);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    d3 = (double)(float)fr(g, (double)rdf32(sp0 + 0xcu) + (double)rdf32(COW_IMG(0x1032a42cu)));
    wrf32(sp0 - 0x1cu, (float)d3);
    d4 = (double)(float)fr(g, (double)rdf32(sp0 + 0xcu) + (double)rdf32(COW_IMG(0x1032a42cu)));
    wrf32(sp0 - 0x10u, (float)d4);
    d5 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 - 0x20u, (float)d5);
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall(g, COW_IMG(0x1016b1d0u), self + 0x178u, 3, sp0 - 0x18u, sp0 - 0x24u, sp0 - 0xcu);
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        goto L_101813db;
    }
    d7 = (double)rdf32(sp0 - 8u);
    wrf32(arg5, (float)d7);
    return (arg5 & 0xffffff00u) | 1u;
L_101813db: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10181370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10181370(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
