/* f_0x1024c2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1024c2d0(Guest* g)
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

    wr32(self, COW_IMG(0x1033cca8u));
    if (rd32(COW_IMG(0x10669144u)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10669144u));
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t1 = g->edx;
        wr32(COW_IMG(0x10669144u), 0u);
        edx = t1;
    }
    if (rd32(self + 0x74u) == 0u)
    {
        eax = rd32(self + 0x74u);
    }
    else
    {
        eax = rd32(self + 0x74u);
        if (rd32(eax) != 0u)
        {
            if (eax != 0u)
            {
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t2 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
                t3 = g->edx;
                g->edx = t3;
                t4 = cow_thiscall(g, COW_IMG(0x10071050u), self + 0x74u, 0);
                t5 = g->edx;
                wr32(self + 0x74u, 0u);
                eax = t4;
                edx = t5;
            }
        }
    }
    wr32(self, COW_IMG(0x10333360u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126330u), eax, self + 4u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024c2d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
