/* f_0x1019d540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1019d540(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 < 106)
    {
        edx = in_edx;
    }
    else
    {
        if ((int32_t)arg1 > 134)
        {
            edx = in_edx;
        }
        else
        {
            if (rd32(COW_IMG(0x10662774u)) == 0u)
            {
                edx = in_edx;
            }
            else
            {
                ecx = rd32(COW_IMG(0x10662774u));
                wr8(arg1 + ecx - 0x41u, (uint8_t)arg2);
                g->edx = (in_edx & 0xffffff00u) | (uint8_t)arg2;
                g->esp = sp0;
                cow_call_regs(g, COW_IMG(0x1019cfa0u), arg1, rd32(COW_IMG(0x10662774u)), g->edx, 1, 0);
                t1 = g->edx;
                edx = t1;
            }
        }
    }
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019d540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019d540(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
