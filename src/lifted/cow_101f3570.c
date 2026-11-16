/* f_0x101f3570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101f3570(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 0)
    {
        eax = 0u;
    }
    else
    {
        eax = COW_IMG(0x101f35a0u);
    }
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10157860u), rd32(COW_IMG(0x1057876cu)), 2, eax, arg1);
    wr8(rd32(COW_IMG(0x1057876cu)) + 0x58u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f3570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f3570(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
