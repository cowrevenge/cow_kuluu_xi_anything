/* f_0x10039970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10039970(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1032aa68u));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1003ab10u), rd32(COW_IMG(0x1047b970u)), 1, self);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
    }
    else
    {
        eax = t1;
        t3 = rd32(rd32(eax) + 0x38u);
        t4 = rd32(eax);
        wr32(eax, t3);
        if (rd32(self + 0x40u) == 0u)
        {
            ecx = t4;
            edx = t3;
        }
        else
        {
            eax = rd32(self + 0x40u);
            edx = t3;
            g->edx = edx;
            t5 = rd32(eax);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(t5 + 8u), t5, 1, eax);
            t6 = g->ecx;
            t7 = g->edx;
            wr32(self + 0x40u, 0u);
            ecx = t6;
            edx = t7;
        }
        if (rd32(self + 0x44u) != 0u)
        {
            eax = rd32(self + 0x44u);
            g->edx = rd32(eax);
            t8 = rd32(eax);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(t8 + 8u), ecx, 1, eax);
            t9 = g->edx;
            wr32(self + 0x44u, 0u);
            edx = t9;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x1003ac40u), rd32(COW_IMG(0x1047b970u)), 0);
    t11 = g->edx;
    g->esp = sp0;
    g->edx = t11;
    cow_tailcall(g, COW_IMG(0x100398d0u), t10, self, t11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10039970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10039970(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
