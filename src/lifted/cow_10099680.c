/* f_0x10099680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10099680(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;

    t1 = cow_stdcall(g, COW_IMG(0x100fd5b0u), 0);
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_10099698;
    }
    eax = t1;
    t2 = rd8(COW_IMG(0x10485824u));
    wr8(COW_IMG(0x10485824u), t2 & 0xf7u);
    return (eax & 0xffffff00u) | 1u;
L_10099698: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10099680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10099680(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
