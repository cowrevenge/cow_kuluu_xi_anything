/* f_0x100e5290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e5290(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_100e52b9;
    eax = rd32(COW_IMG(0x104dfd98u));
    wr32(eax + 0x19ad4u, 0u);
    t1 = rd32(COW_IMG(0x104dfd98u)) + 0x19a54u;
    t2 = rd32(COW_IMG(0x104dfd98u));
    wr32(t2 + 0x19ad8u, t1);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100e52c0u), t2, t1, in_edx);
L_100e52b9: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e5290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e5290(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
