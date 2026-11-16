/* f_0x10316e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10316e30(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const double xin0 = ST(0);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x1031b208u), 2, cow_dlo(xin0), cow_dhi(xin0));
    t2 = g->ecx;
    t3 = g->edx;
    cow_call_regs(g, COW_IMG(0x10316e4du), t1, g->ecx, t3, 1, 2, cow_dlo(xin0), cow_dhi(xin0));
    t4 = g->edx;
    g->edx = t4;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10316e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10316e30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
