/* f_0x102efeee - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102efeee(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        eax = 0u;
        edx = in_edx;
    }
    else
    {
        if (arg2 == 0u)
        {
            eax = 0u;
            edx = in_edx;
        }
        else
        {
            if ((rd8(arg2 + 8u) & 0x10u) == 0u)
            {
                eax = 0u;
                edx = in_edx;
            }
            else
            {
                if (rd8(arg2 + 0x19u) != 3u)
                {
                    if (arg5 == 0u)
                    {
                        eax = 0u;
                    }
                    else
                    {
                        wr32(arg5, arg2 + 0x34u);
                        eax = 0x10u;
                    }
                    if (arg3 != 0u)
                    {
                        wr32(arg3, 0u);
                    }
                }
                else
                {
                    if (arg3 == 0u)
                    {
                        eax = 0u;
                    }
                    else
                    {
                        t1 = rd32(arg2 + 0x30u);
                        wr32(arg3, t1);
                        eax = 0x10u;
                    }
                    if (arg5 != 0u)
                    {
                        wr32(arg5, arg2 + 0x34u);
                    }
                }
                if (arg4 == 0u)
                {
                    edx = arg4;
                }
                else
                {
                    t2 = rd16(arg2 + 0x16u);
                    wr32(arg4, t2);
                    eax = eax | 0x10u;
                    edx = arg4;
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102efeee(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102efeee(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
