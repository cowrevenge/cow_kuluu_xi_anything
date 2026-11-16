/* f_0x102838c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102838c0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    const uint32_t sp0 = g->esp;

    d1 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2dcu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x74cu));
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x74cu, (float)d1);
    d2 = fr(g, (double)rdf32(sp0 + 4u) / (double)rdf32(sp0 + 8u));
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x2dcu, (float)d2);
    d3 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x74cu) / (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2dcu));
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x74cu, (float)d3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102838c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102838c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
