/* f_0x1024b910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1024b910(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(rd32(COW_IMG(0x106690b8u)) + 0x94u) < 0)
    {
        eax = rd32(rd32(COW_IMG(0x106690b8u)) + 0x94u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x106690b8u)) + 0x94u);
        ecx = rd32(COW_IMG(0x106690b8u));
        if ((int32_t)eax >= 1024)
        {
            edx = in_edx;
        }
        else
        {
            t1 = rd32(ecx + 0x98u);
            t2 = rd32(COW_IMG(0x106690bcu));
            wr32(eax * 4u + t2, t1);
            edx = t2;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024b910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024b910(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
