/* f_0x10251770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10251770(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 >= 0)
    {
        if ((int32_t)arg1 < 5)
        {
            t1 = rd8(self + 4u);
            wr32(self + 0x18u, arg1);
            if ((t1 & 4u) != 0u)
            {
                edx = (in_edx & 0xffffff00u) | t1;
                g->esp = sp0;
                cow_thiscall_cdecl(g, COW_IMG(0x10250820u), self, 2, COW_IMG(0x10669158u), arg1);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10251770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10251770(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
