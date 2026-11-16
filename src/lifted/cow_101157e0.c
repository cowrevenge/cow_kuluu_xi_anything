/* f_0x101157e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101157e0(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x4f1a8u) == 0u) goto L_101157f3;
    return 0u;
L_101157f3: ;
    g->eax = arg1 + 0x2f0d4u;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1026cfc0u), 1, arg1 + 0x2f0d4u);
    if ((int32_t)t1 >= 0) goto L_1011580a;
    return 0u;
L_1011580a: ;
    wr32(arg1 + 0x4f1a8u, 8u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101157e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101157e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
