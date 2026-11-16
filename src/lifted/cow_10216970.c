/* f_0x10216970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10216970(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(self + 0x2eu) != (uint32_t)(int16_t)arg1)
    {
        if (rd32(COW_IMG(0x105781f8u)) != 0u)
        {
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t1 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, (uint32_t)(int16_t)arg1);
            t2 = g->edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t1, 2u);
        }
        wr16(self + 0x2eu, (uint16_t)arg1);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10216970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10216970(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
