/* f_0x1022ea70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022ea70(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
        goto L_1022eaa5;
    }
    eax = rd32(self + 0x64u);
    if (rd8(COW_IMG(0x1047fe8fu)) != 1u) goto L_1022eaa5;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10221cb0u), self, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_call_regs(g, COW_IMG(0x1022dcf0u), t1, self, g->edx, 1, 0);
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x105781f8u));
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    g->edx = t3;
    return cow_tailcall(g, COW_IMG(0x10221300u), t4, t4 + 0x20u, t3);
L_1022eaa5: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022ea70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022ea70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
