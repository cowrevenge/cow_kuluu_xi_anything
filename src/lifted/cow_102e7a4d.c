/* f_0x102e7a4d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e7a4d(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0xcu) != 0u)
    {
        t1 = rd32(arg1 + 0x10u);
        t2 = rd32(arg1 + 8u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(rd32(arg1 + 8u)) + 0xd8u), rd32(rd32(arg1 + 8u)), 2, t2, t1);
        t3 = g->edx;
        wr32(arg1 + 0xcu, 0u);
        eax = 0u;
        edx = t3;
    }
    else
    {
        eax = 0x80004005u;
        edx = in_edx;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7a4d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e7a4d(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
