/* f_0x1013eb80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013eb80(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr16(self + 0x15cu, 0u);
    wr16(self + 0x15eu, 0xffffu);
    t1 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10578204u));
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t4 = g->edx;
    g->esp = sp0;
    g->edx = t4;
    return cow_tailcall(g, COW_IMG(0x1013bf40u), t3, t2, t4);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013eb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013eb80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
