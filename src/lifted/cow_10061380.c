/* f_0x10061380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10061380(Guest* g)
{
    double d7;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1032bd30u));
    wr32(self + 0x34u, COW_IMG(0x1032bd14u));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10061370u), self, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x10061370u), self, 0);
        t4 = g->ecx;
        t5 = g->edx;
        g->edx = t5;
        t6 = rd32(t3);
        d7 = (double)rdf32(self + 0x7cu);
        fpush(g, d7);
        t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), t3, g->ecx, g->edx, 1, 0);
        t9 = g->edx;
        g->edx = t9;
        t10 = cow_thiscall(g, rd32(t6 + 0x34u), t3, 1, t8);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t13 = g->edx;
    g->esp = sp0;
    g->edx = t13;
    cow_tailcall(g, COW_IMG(0x100747c0u), t12, self, t13);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10061380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10061380(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
