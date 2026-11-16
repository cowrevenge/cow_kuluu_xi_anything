/* f_0x10140850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10140850(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    cow_frame(g, sp0, 12u);

    if ((int32_t)rd32(sp0 + 4u) < 0)
    {
        eax = in_eax & 0xffffff00u;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | 5u;
    }
    wr8(sp0 + 5u, (uint8_t)eax);
    wr8(sp0 + 4u, 1u);
    wr8(sp0 + 7u, 1u);
    wr32(sp0 - 4u, 1u);
    wr32(sp0 - 8u, sp0 + 4u);
    t1 = rd32(COW_IMG(0x1057876cu));
    wr8(sp0 + 6u, 0u);
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10157780u), t1, 2, sp0 + 4u, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10140850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10140850(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
