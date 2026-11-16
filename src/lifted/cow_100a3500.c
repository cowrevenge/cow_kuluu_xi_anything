/* f_0x100a3500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a3500(Guest* g)
{
    uint32_t eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)(arg1 * 0x24u) < 0)
    {
        eax = 0u;
    }
    else
    {
        if ((int32_t)(arg1 * 0x24u) >= (int32_t)rd32(COW_IMG(0x10480ab4u)))
        {
            eax = 0u;
        }
        else
        {
            if ((int32_t)(arg1 * 0x24u) >= (int32_t)rd32(COW_IMG(0x10480ab0u)))
            {
                eax = 0u;
            }
            else
            {
                if ((int32_t)(arg1 * 0x24u) >= (int32_t)rd32(COW_IMG(0x10480ab8u)))
                {
                    eax = 0u;
                }
                else
                {
                    if (rd8(arg1 * 0x24u + rd32(COW_IMG(0x10480abcu)) + 0x20u) != 0u)
                    {
                        eax = arg1 * 0x24u + rd32(COW_IMG(0x10480abcu));
                    }
                    else
                    {
                        eax = 0u;
                    }
                }
            }
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a3500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
