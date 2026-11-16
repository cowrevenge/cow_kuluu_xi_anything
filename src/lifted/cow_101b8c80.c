/* f_0x101b8c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101b8c80(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = cow_thiscall(g, COW_IMG(0x101ad840u), rd32(COW_IMG(0x10662da4u)), 1, arg1);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x101ad830u), rd32(COW_IMG(0x10662da4u)), 0);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b8c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b8c80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
