/* f_0x102f4b1d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f4b1d(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x6cu) != 0u)
    {
        edx = rd32(self + 0x6cu);
        if (rd32(self + 0xa8u) != 0u)
        {
            eax = rd32(self + 0xa8u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(COW_IMG(0x10329064u)), self, 2, edx, eax);
            wr32(self + 0xa8u, 0u);
        }
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f4b1d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f4b1d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
