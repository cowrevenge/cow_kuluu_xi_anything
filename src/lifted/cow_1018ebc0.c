/* f_0x1018ebc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018ebc0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(rd32(self + 0xcu) + 0x60u) == 0u)
    {
        ecx = rd32(self + 0xcu);
        goto L_1018ebd2;
    }
    edx = (in_edx & 0xffffff00u) | rd8(rd32(self + 0xcu) + 0x60u);
    g->edx = edx;
    return 1u;
L_1018ebd2: ;
    if ((int32_t)rd32(self + 8u) <= 0)
    {
        edx = rd32(self + 8u);
        goto L_1018ebe2;
    }
    edx = rd32(self + 8u);
    wr32(self + 0x10u, edx - 1u);
    g->esp = sp0;
    g->edx = edx - 1u;
    return cow_tailcall(g, COW_IMG(0x1018e760u), self, ecx, edx - 1u);
L_1018ebe2: ;
    wr32(self + 0x10u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1018e760u), self, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ebc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018ebc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
