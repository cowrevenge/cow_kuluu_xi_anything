/* f_0x102c3521 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c3521(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 > 8)
    {
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 2, arg1, COW_IMG(0x103c8408u));
    }
    if ((int32_t)arg2 < 0)
    {
        eax = 0u;
    }
    else
    {
        eax = arg2;
    }
    wr8(arg1 + 0x12cu, (uint8_t)eax);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c3521(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c3521(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
