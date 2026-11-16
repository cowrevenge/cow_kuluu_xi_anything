/* f_0x10221d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10221d60(Guest* g)
{
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x38u) != 0u) goto L_10221d6f;
    return rd32(self + 0x30u);
L_10221d6f: ;
    if ((int32_t)rd32(self + 0x3cu) <= 0)
    {
        edx = in_edx;
        edi = 0u;
        goto L_10221d92;
    }
    edx = in_edx;
    edi = 0u;
L_10221d79: ;
    g->eax = rd32(self);
    g->edx = edx;
    t1 = rd32(self);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1 + 0x44u), self, 1, edi);
    t3 = g->edx;
    if ((int32_t)(edi + t2) >= (int32_t)rd32(self + 0x38u))
    {
        edx = t3;
        goto L_10221d92;
    }
    edx = t3;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x3cu))
    {
        edi = edi + 1u;
        goto L_10221d79;
    }
    edi = edi + 1u;
L_10221d92: ;
    g->edx = edx;
    return rd32(self + 0x38u) - edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10221d60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
