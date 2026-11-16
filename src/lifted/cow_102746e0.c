/* f_0x102746e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_102746e0(Guest* g)
{
    double d2;
    uint32_t t1;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    cow_cdecl(g, COW_IMG(0x102746b0u), 1, arg1);
    t1 = g->edx;
    d2 = cow_take_float(g);
    g->edx = t1;
    fpush(g, fr(g, sqrt(d2)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102746e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102746e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
