/* f_0x101d8a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d8a40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = arg1;
        edx = in_edx;
    }
    else
    {
        wr16(COW_IMG(0x106633f0u), rd16(arg1 + 2u));
        t1 = rd32(arg1 + 4u);
        wr32(COW_IMG(0x106633f4u), t1);
        t2 = rd16(arg1 + 8u);
        wr32(COW_IMG(0x106633fcu), arg2);
        wr16(COW_IMG(0x106633f8u), (uint16_t)t2);
        eax = (arg1 & 0xffff0000u) | t2;
        edx = t1;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d8a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d8a40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
