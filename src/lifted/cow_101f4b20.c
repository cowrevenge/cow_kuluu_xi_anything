/* f_0x101f4b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101f4b20(Guest* g)
{
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg1 < 0)
    {
        edx = in_edx;
    }
    else
    {
        if ((int32_t)arg1 >= 8)
        {
            edx = in_edx;
        }
        else
        {
            if ((int8_t)arg2 < 0)
            {
                edx = (in_edx & 0xffffff00u) | (uint8_t)arg2;
            }
            else
            {
                if ((int8_t)arg2 >= 77)
                {
                    edx = (in_edx & 0xffffff00u) | (uint8_t)arg2;
                }
                else
                {
                    wr8(arg1 + self, (uint8_t)arg2);
                    wr32(arg1 * 4u + self + 0x28u, arg3);
                    wr32(arg1 * 4u + self + 8u, arg4);
                    wr8(self + 0x50u, 0u);
                    edx = arg4;
                }
            }
        }
    }
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f4b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f4b20(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
