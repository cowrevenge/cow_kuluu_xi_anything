/* f_0x101cc5f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101cc5f0(Guest* g)
{
    uint32_t eax;

    if (rd8(COW_IMG(0x10485689u)) != 0u)
    {
        eax = rd8(COW_IMG(0x10485689u));
        goto L_101cc5fc;
    }
    eax = rd8(COW_IMG(0x10485689u));
    return eax;
L_101cc5fc: ;
    return eax + 0x63u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc5f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc5f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
