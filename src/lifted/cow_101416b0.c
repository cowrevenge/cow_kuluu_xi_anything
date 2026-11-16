/* f_0x101416b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101416b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        edx = in_edx;
    }
    else
    {
        if (arg1 == 0u)
        {
            eax = arg1;
            edx = in_edx;
        }
        else
        {
            if (arg2 == 0u)
            {
                eax = arg2;
                edx = in_edx;
            }
            else
            {
                t1 = rd32(arg2 + 4u);
                g->esp = sp0;
                t2 = cow_call_regs(g, COW_IMG(0x101347b0u), t1, self, in_edx, 1, 3, t1, 0u, 0u);
                t3 = g->edx;
                eax = t2;
                edx = t3;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101416b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101416b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
