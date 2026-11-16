/* f_0x1031549c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031549c(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(COW_IMG(0x109b26c0u), 0u);
    if (arg1 != 0xfffffffeu) goto L_103154bc;
    wr32(COW_IMG(0x109b26c0u), 1u);
    g->esp = sp0;
    return cow_tailcall(g, rd32(COW_IMG(0x10329270u)), arg1, self, in_edx);
L_103154bc: ;
    if (arg1 != 0xfffffffdu) goto L_103154d1;
    wr32(COW_IMG(0x109b26c0u), 1u);
    g->esp = sp0;
    return cow_tailcall(g, rd32(COW_IMG(0x10329234u)), arg1, self, in_edx);
L_103154d1: ;
    if (arg1 != 0xfffffffcu)
    {
        eax = arg1;
    }
    else
    {
        t1 = rd32(COW_IMG(0x109b27c8u));
        wr32(COW_IMG(0x109b26c0u), 1u);
        eax = t1;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031549c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031549c(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
