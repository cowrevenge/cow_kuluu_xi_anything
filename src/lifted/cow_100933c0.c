/* f_0x100933c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100933c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u) goto L_1009342c;
    eax = rd32(self + 0x120u);
    if ((int8_t)eax >= 0) goto L_1009342c;
    if ((rd32(self + 0x1d0u) >> 8u & 2u) != 0u)
    {
        eax = rd32(self + 0x1d0u);
        edx = in_edx;
    }
    else
    {
        t1 = rd32(self + 0x24u);
        wr32(self + 4u, t1);
        t2 = rd32(self + 0x28u);
        wr32(self + 8u, t2);
        t3 = rd32(self + 0x2cu);
        wr32(self + 0xcu, t3);
        g->edx = t3;
        g->esp = sp0 - 4u;
        t4 = cow_call_regs(g, COW_IMG(0x100929d0u), t1, self, g->edx, 1, 0);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    if (!((rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u))) & 1u)) goto L_1009342c;
    if ((rd32(self + 0x1d0u) >> 8u & 2u) == 0u) goto L_1009342c;
    t6 = rd32(self + 0x24u);
    wr32(self + 4u, t6);
    t7 = rd32(self + 0x28u);
    wr32(self + 8u, t7);
    t8 = rd32(self + 0x2cu);
    wr32(self + 0xcu, t8);
    g->esp = sp0;
    g->edx = t7;
    cow_tailcall(g, COW_IMG(0x10092c20u), t8, self, t7);
    return;
L_1009342c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100933c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100933c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
