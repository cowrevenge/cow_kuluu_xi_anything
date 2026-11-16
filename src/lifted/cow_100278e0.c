/* f_0x100278e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100278e0(Guest* g)
{
    double d4;
    double d5;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
    t2 = rd32(t1 + 8u) >> 1u;
    t3 = rd32(t1 + 0xcu) >> 1u;
    d4 = fr(g, (double)(int32_t)t2 * fr(g, (double)rdf32(arg1) + (double)rdf32(COW_IMG(0x1032961cu))));
    wrf32(arg1, (float)d4);
    d5 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(arg1 + 4u)) * (double)(int32_t)t3);
    wrf32(arg1 + 4u, (float)d5);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100278e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100278e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
