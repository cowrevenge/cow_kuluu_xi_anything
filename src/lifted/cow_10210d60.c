/* f_0x10210d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10210d60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x34u) != 0u)
    {
        if (rd8(rd32(self + 0x1cu) + 1u) != 0u)
        {
            eax = rd32(self + 0x1cu);
            if (rd32(COW_IMG(0x1057847cu)) != 0u)
            {
                ecx = rd32(COW_IMG(0x1057847cu));
                g->esp = sp0 - 8u;
                cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, 0u, 2u);
            }
        }
    }
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x40u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10210d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10210d60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
