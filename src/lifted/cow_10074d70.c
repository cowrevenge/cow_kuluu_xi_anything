/* f_0x10074d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10074d70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0xd60u) == 0u)
    {
        edx = in_edx;
        goto L_10074da4;
    }
L_10074d85: ;
    t1 = rd32(rd32(self + 0xd60u) + 0xcu);
    t2 = rd32(self + 0xd60u);
    wr32(self + 0xd60u, t1);
    if (rd32(t2 + 0x18u) != arg1)
    {
        edx = t1;
        goto L_10074da0;
    }
    eax = t2;
    edx = t1;
    if (rd32(eax + 0x1cu) == arg2) goto L_10074da6;
L_10074da0: ;
    if (edx != 0u) goto L_10074d85;
L_10074da4: ;
    eax = 0u;
L_10074da6: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074d70(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
