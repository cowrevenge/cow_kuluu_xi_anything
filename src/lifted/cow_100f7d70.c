/* f_0x100f7d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100f7d70(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < -1) goto L_100f7d7e;
    if ((int32_t)arg1 <= 2)
    {
        eax = arg1;
        goto L_100f7d81;
    }
L_100f7d7e: ;
    eax = 0xffffffffu;
L_100f7d81: ;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100f7bc0u), 4, 5u, eax, 0xffffffffu, 0xffffffffu);
    return (t1 & 0xffffff00u) | t1 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f7d70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
