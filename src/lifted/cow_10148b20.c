/* f_0x10148b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10148b20(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(COW_IMG(0x10485641u)) >= 0x63u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10485641u));
        if (rd8(COW_IMG(0x1048569au)) & 1u)
        {
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 0xcu);
            wr8(self + 0x15u, 1u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10148b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10148b20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
