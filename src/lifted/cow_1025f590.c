/* f_0x1025f590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1025f590(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0xc0u) != 0u)
    {
        eax = rd32(self + 0xc0u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(COW_IMG(0x10329404u)), self, 1, eax);
        wr32(self + 0xc0u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025f590(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
