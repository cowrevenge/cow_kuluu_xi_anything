/* f_0x1006a4c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1006a4c0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0xea4u) != 8u)
    {
        eax = rd32(self + 0xea4u);
        t1 = eax * 0x40u + self + 0x910u;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1006a540u), self, 1, t1);
        wr32(self + 0xea4u, rd32(self + 0xea4u) + 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006a4c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006a4c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
