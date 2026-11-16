/* f_0x100a2100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a2100(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(COW_IMG(0x104804c0u)) != 0u) goto L_100a210c;
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x104804c0u));
    return eax & 0xffffff00u;
L_100a210c: ;
    t1 = rd32(arg3 + 4u);
    wr8(COW_IMG(0x104804c0u), 0u);
    wr32(COW_IMG(0x10485a28u), t1);
    return (arg3 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2100(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
