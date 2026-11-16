/* f_0x10266840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10266840(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1) != 0u)
    {
        eax = rd32(arg1);
        goto L_10266852;
    }
    return 1u;
L_10266852: ;
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall(g, rd32(COW_IMG(0x10329310u)), self, 1, eax);
    t1 = g->edx;
    g->edx = t1;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10266840(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
