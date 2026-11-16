/* f_0x10038440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10038440(Guest* g)
{
    double d1;
    uint32_t esi;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x1046393cu)) != 0u)
    {
        esi = rd32(COW_IMG(0x1046393cu));
        d1 = (double)rdf32(arg2);
        fpush(g, d1);
        g->esp = sp0 - 8u;
        t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), arg3, g->ecx, g->edx, 1, 0);
        g->esp = sp0 - 4u;
        cow_stdcall(g, COW_IMG(0x10246310u), 3, arg1, t2, arg3);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10038440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10038440(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
