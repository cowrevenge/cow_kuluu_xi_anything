/* f_0x102f3d1a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102f3d1a(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = cow_call_regs(g, COW_IMG(0x102f35ddu), g->eax, g->ecx, in_edx, 1, 2, arg1, arg2);
    t2 = g->edx;
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->edx = edx;
        g->esp = sp0;
        t3 = cow_call_regs(g, COW_IMG(0x102f21fbu), eax, arg1, g->edx, 1, 0);
        t4 = g->edx;
        if ((int32_t)t3 < 0)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            edx = t4;
            eax = 0u;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f3d1a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f3d1a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
