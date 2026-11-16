/* f_0x1028dbd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1028dbd0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_1028dbe7;
    wr32(arg2, 0u);
    wr32(arg2 + 4u, 0u);
    wr32(arg2 + 8u, 0u);
    return;
L_1028dbe7: ;
    d1 = fr(g, fr(g, (double)rdf32(arg1 + 0xcu) + (double)rdf32(arg1)) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(arg2, (float)d1);
    d2 = fr(g, fr(g, (double)rdf32(arg1 + 0x10u) + (double)rdf32(arg1 + 4u)) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(arg2 + 4u, (float)d2);
    d3 = fr(g, fr(g, (double)rdf32(arg1 + 0x14u) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(arg2 + 8u, (float)d3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028dbd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028dbd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
