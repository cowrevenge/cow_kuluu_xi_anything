/* f_0x10101bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10101bc0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;

    t1 = rd32(sp0 + 4u);
    t2 = cow_cdecl(g, COW_IMG(0x10101bf0u), 1, t1);
    wr8(sp0 + 4u, (uint8_t)t2);
    return (t2 & 0xffffff00u) | rd8(COW_IMG(0x1036447cu) + (uint8_t)rd32(sp0 + 4u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10101bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10101bc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
