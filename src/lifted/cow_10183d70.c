/* f_0x10183d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10183d70(Guest* g)
{
    double d1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)(float)fr(g, atan2((double)rdf32(sp0 + 8u), rdf64(COW_IMG(0x10336790u))));
    g->eax = arg1;
    g->edx = arg4;
    t2 = cow_stdcall(g, COW_IMG(0x102d83e6u), 5, arg1, cow_f2bits(d1), arg4, arg9, arg10);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10183d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10183d70(g);
    g->esp = sp0;
    rt_return(g, r, 40u);
}
/* COW_ADAPTER END */
