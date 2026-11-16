/* f_0x10251990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10251990(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    if ((rd8(self + 4u) & 2u) == 0u) goto L_102519b8;
    wr32(sp0 - 8u, sp0 - 4u);
    wr32(sp0 - 0xcu, COW_IMG(0x10669158u));
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10250c20u), 2, COW_IMG(0x10669158u), sp0 - 4u);
    if (t1 != 0u) goto L_102519b8;
    if ((int32_t)rd32(sp0 - 4u) < 0) goto L_102519b8;
    eax = rd32(sp0 - 4u);
    return eax + 1u;
L_102519b8: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10251990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10251990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
