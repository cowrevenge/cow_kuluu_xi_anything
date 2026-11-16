/* f_0x101632a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101632a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101633d0u), self, 0);
    t1 = g->edx;
    if (rd32(self + 0xcu) == 0u)
    {
        edx = t1;
    }
    else
    {
        ecx = rd32(self + 0xcu);
        edx = t1;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t2 = g->edx;
        wr32(self + 0xcu, 0u);
        edx = t2;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        eax = rd32(self + 0x10u);
        if (rd32(eax) != 0u)
        {
            if (eax != 0u)
            {
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t3 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
                t4 = g->edx;
                cow_thiscall(g, COW_IMG(0x10071050u), self + 0x10u, 0);
                wr32(self + 0x10u, 0u);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101632a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101632a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
