/* f_0x10210c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10210c70(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((rd8(arg3 + 6u) & 1u) != 1u)
    {
        edx = in_edx;
    }
    else
    {
        if (rd8(rd32(COW_IMG(0x1066450cu)) + 0x24u) == 0u)
        {
            ecx = rd32(COW_IMG(0x1066450cu));
            edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1066450cu)) + 0x24u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x1066450cu));
            edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1066450cu)) + 0x24u);
            wr8(ecx + 0x25u, 1u);
            ecx = rd32(COW_IMG(0x1066450cu));
        }
        wr8(ecx + 0x24u, 1u);
    }
    g->edx = edx;
    return (arg3 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10210c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10210c70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
