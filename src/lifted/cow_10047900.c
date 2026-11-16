/* f_0x10047900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10047900(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0x1d5u);
    wr32(self, COW_IMG(0x1032b090u));
    if (t1 == 0u)
    {
        eax = t1;
        edx = in_edx;
    }
    else
    {
        g->eax = rd32(self + 0x104u);
        g->edx = in_edx;
        t2 = rd32(self + 0x104u);
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(t2), 0);
        t4 = g->edx;
        if (rd32(self + 0x1d5u) == 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            ecx = rd32(self + 0x1d5u);
            edx = t4;
            g->eax = rd32(ecx);
            g->edx = edx;
            t5 = rd32(ecx);
            g->esp = sp0 - 4u;
            t6 = cow_thiscall(g, rd32(t5 + 0x18u), ecx, 1, 1u);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10044970u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10047900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10047900(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
