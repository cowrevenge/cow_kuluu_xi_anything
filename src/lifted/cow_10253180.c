/* f_0x10253180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10253180(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) & 1u)
    {
        if ((int32_t)rd32(arg1 + 0x10u) >= 0)
        {
            wr32(arg1 + 4u, 0u);
            wr32(arg1 + 8u, 0u);
            t1 = rd32(arg1 + 0xcu);
            g->eax = t1;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            t2 = cow_thiscall(g, COW_IMG(0x101c4a30u), rd32(COW_IMG(0x10662dccu)), 1, t1);
            t3 = g->edx;
            if ((uint8_t)t2 == 0u)
            {
                eax = t2;
                edx = t3;
            }
            else
            {
                edx = t3;
                t4 = (rd32(arg1) & 0xffffff00u) | (uint8_t)(rd32(arg1) | 0x10u);
                wr32(arg1, t4);
                eax = t4;
            }
            t5 = rd32(arg1 + 0x10u);
            g->eax = eax;
            g->esp = sp0 - 4u;
            t6 = cow_thiscall(g, COW_IMG(0x101c4a30u), rd32(COW_IMG(0x10662dccu)), 1, t5);
            if ((uint8_t)t6 != 0u)
            {
                t7 = (rd32(arg1) & 0xffffff00u) | (uint8_t)(rd32(arg1) | 0x10u);
                wr32(arg1, t7);
            }
        }
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10253180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
