/* f_0x10221e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10221e10(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 >= 0)
    {
        if ((int32_t)arg1 <= (int32_t)rd32(self + 0x3cu))
        {
            wr32(self + 0x38u, arg1);
        }
        else
        {
            eax = rd32(self + 0x3cu);
            wr32(self + 0x38u, eax);
        }
    }
    else
    {
        wr32(self + 0x38u, 0u);
    }
    if (rd32(self + 0x50u) == 0u)
    {
        eax = rd32(self + 0x50u);
        edx = arg1;
    }
    else
    {
        eax = rd32(self + 0x50u);
        t1 = rd32(eax + rd32(self + 0x38u) * 4u);
        t2 = rd32(self + 0x38u);
        wr32(self + 0x48u, t1);
        eax = t1;
        edx = t2;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10221e10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
