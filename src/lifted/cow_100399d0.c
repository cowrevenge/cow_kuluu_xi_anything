/* f_0x100399d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100399d0(Guest* g)
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1003ab10u), rd32(COW_IMG(0x1047b970u)), 1, self);
    if (t1 != 0u)
    {
        eax = t1;
        t2 = rd32(rd32(eax) + 0x38u);
        t3 = rd32(eax);
        wr32(eax, t2);
        if (rd32(self + 0x40u) == 0u)
        {
            ecx = t3;
            edx = t2;
        }
        else
        {
            eax = rd32(self + 0x40u);
            edx = t2;
            g->edx = edx;
            t4 = rd32(eax);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(t4 + 8u), t4, 1, eax);
            t5 = g->ecx;
            t6 = g->edx;
            wr32(self + 0x40u, 0u);
            ecx = t5;
            edx = t6;
        }
        if (rd32(self + 0x44u) != 0u)
        {
            eax = rd32(self + 0x44u);
            g->edx = rd32(eax);
            t7 = rd32(eax);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(t7 + 8u), ecx, 1, eax);
            t8 = g->edx;
            wr32(self + 0x44u, 0u);
            edx = t8;
        }
        wr32(self + 0x38u, 0u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 1, 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100399d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100399d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
