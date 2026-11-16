/* f_0x10295670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10295670(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(rd32(rd32(sp0 + 4u) + 0x2cu) + 0x1cu) >= 1)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x2cu);
        goto L_102956a1;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x2cu);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb854u), COW_IMG(0x103b379cu));
    return 0u;
L_102956a1: ;
    t4 = rd32(rd32(eax + 0x20u));
    t5 = rd32(eax + 0x20u);
    wr32(sp0 + 4u, t4);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1028d9a0u), t4, t5, in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10295670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10295670(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
