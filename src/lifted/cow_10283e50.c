/* f_0x10283e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10283e50(Guest* g)
{
    double d2;
    double d5;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(COW_IMG(0x1099d200u));
    d2 = (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2b0u);
    fpush(g, d2);
    t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    wr32(arg1, t3);
    g->edx = rd32(COW_IMG(0x1099d200u));
    t4 = rd32(COW_IMG(0x1099d200u));
    d5 = (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2b4u);
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t3, g->ecx, g->edx, 1, 0);
    t7 = g->edx;
    wr32(arg2, t6);
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10283e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10283e50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
