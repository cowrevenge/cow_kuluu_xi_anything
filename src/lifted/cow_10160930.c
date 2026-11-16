/* f_0x10160930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10160930(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;

    if (rd32(rd32(COW_IMG(0x10664520u)) + 0x14u) == COW_IMG(0x10160890u))
    {
        eax = rd32(COW_IMG(0x10664520u));
        wr8(eax + 0x3au, 0u);
        wr32(eax + 0x14u, 0u);
        t1 = rd32(eax + 8u);
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10160930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10160930(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
