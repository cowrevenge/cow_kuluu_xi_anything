/* f_0x1008a750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1008a750(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0xa0u) != 0u)
    {
        ecx = rd32(self + 0xa0u);
        g->esp = sp0 - 4u;
        t1 = cow_fastcall(g, COW_IMG(0x1002c8f0u), ecx, in_edx, 1, COW_IMG(0x10330684u));
        t2 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            edx = t2;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x100c4380u), rd32(self + 0xa0u), 1, (uint16_t)arg1);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008a750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008a750(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
