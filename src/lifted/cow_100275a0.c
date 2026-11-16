/* f_0x100275a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_100275a0(Guest* g)
{
    double d1;
    double d2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10027150u), 3, sp0 - 8u, arg1, arg2);
    d1 = (double)rdf32(sp0 - 4u);
    d2 = (double)rdf32(sp0 - 8u);
    fpush(g, fr(g, sqrt(fr(g, fr(g, d1 * d1) + fr(g, d2 * d2)))));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100275a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100275a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
