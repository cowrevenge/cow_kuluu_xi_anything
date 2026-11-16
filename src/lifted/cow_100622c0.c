/* f_0x100622c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100622c0(Guest* g)
{
    double d6;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1032bfb8u));
    wr32(self + 0x34u, COW_IMG(0x1032bf9cu));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        g->edx = rd32(t3);
        t4 = rd32(t3);
        cow_thiscall(g, rd32(t4 + 0x30cu), t3, 1, 0u);
        t5 = g->edx;
        d6 = cow_take_float(g);
        g->edx = t5;
        t7 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        t8 = g->edx;
        g->edx = t8;
        fpush(g, d6);
        t9 = cow_thiscall(g, COW_IMG(0x100ca9b0u), t7, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t12 = g->edx;
    g->esp = sp0;
    g->edx = t12;
    cow_tailcall(g, COW_IMG(0x100747c0u), t11, self, t12);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100622c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100622c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
