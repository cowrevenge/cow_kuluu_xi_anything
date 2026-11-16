/* f_0x100e4120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e4120(Guest* g)
{

    return (rd32(COW_IMG(0x104dfd98u)) & 0xffffff00u) | rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd4u) == 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e4120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e4120(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
