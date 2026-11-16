/* f_0x10221a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10221a30(Guest* g)
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

    t1 = rd32(self + 0x50u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, t1);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(self + 0x20u);
    wr32(self + 0x50u, 0u);
    if (t4 == 0u)
    {
        eax = t4;
        edx = t3;
    }
    else
    {
        eax = t4;
        ecx = t2;
        edx = t3;
        g->eax = eax - 4u;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax - 4u);
        t6 = g->edx;
        wr32(self + 0x20u, 0u);
        eax = t5;
        edx = t6;
    }
    wr32(self + 0x44u, 0u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10221900u), self, 4, 0u, 0u, 0u, 0u);
    t7 = g->edx;
    g->edx = t7;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10221a30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
