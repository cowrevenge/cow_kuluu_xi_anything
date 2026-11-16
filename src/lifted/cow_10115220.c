/* f_0x10115220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10115220(Guest* g)
{

    if (rd32(COW_IMG(0x104e1710u)) == 0u) goto L_1011524c;
    if (rd16(COW_IMG(0x104e1716u)) != 0u) goto L_1011524c;
    if (rd32(COW_IMG(0x104e1718u)) != 0u) goto L_1011524c;
    if (rd16(COW_IMG(0x104e1720u)) == 0u) goto L_1011524c;
    return COW_IMG(0x1036c168u);
L_1011524c: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10115220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10115220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
