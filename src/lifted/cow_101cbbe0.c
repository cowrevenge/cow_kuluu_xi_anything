/* f_0x101cbbe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101cbbe0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(sp0 + 4u) == 0u) goto L_101cbc07;
    ecx = rd32(sp0 + 4u);
    if ((int32_t)rd16(ecx) < 513) goto L_101cbc07;
    eax = rd16(ecx);
    if ((int32_t)eax > 515) goto L_101cbc07;
    wr32(sp0 + 4u, ecx + 0x10u);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x101cbb80u), eax, ecx + 0x10u, in_edx);
L_101cbc07: ;
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cbbe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cbbe0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
