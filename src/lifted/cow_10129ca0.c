/* f_0x10129ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10129ca0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    g->ecx = self;
    t2 = cow_call_regs(g, COW_IMG(0x10129cd0u), g->eax, g->ecx, in_edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_10129cb7;
    }
    return 0x80808080u;
L_10129cb7: ;
    t5 = (ecx & 0xffff0000u) | rd8(eax + 2u);
    wr32(sp0 + 4u, t5);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10129d00u), eax, t5, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10129ca0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
