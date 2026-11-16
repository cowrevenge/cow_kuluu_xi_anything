/* f_0x10189c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10189c60(Guest* g)
{
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) == 0u) goto L_10189c85;
    if ((int32_t)rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1c8u) < 0) goto L_10189c85;
    ecx = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1c8u);
    wr32(arg1, ecx);
    return;
L_10189c85: ;
    wr32(arg1, rd32(COW_IMG(0x1065cb18u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10189c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10189c60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
