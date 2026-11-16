/* f_0x1027d9a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1027d9a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10315ddfu), 1, rd32(arg1));
    wr32(arg1, 0xffffffffu);
    if (rd32(COW_IMG(0x1099d210u)) == arg1)
    {
        wr32(COW_IMG(0x1099d210u), 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027d9a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027d9a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
