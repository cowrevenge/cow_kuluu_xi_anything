/* f_0x1000de20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000de20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self) != rd32(self + 4u))
    {
        eax = rd32(self + 4u);
    }
    else
    {
        eax = rd32(self + 4u);
        ecx = rd32(self);
        wr32(self + 4u, eax * 2u);
        t1 = rd32(self + 8u);
        g->eax = t1;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(COW_IMG(0x103294b0u)), ecx, 2, t1, eax * 2u);
        wr32(self + 8u, t2);
        eax = t2;
    }
    t3 = rd32(self + 8u);
    t4 = rd32(self);
    wr8(t4 + t3, rd8(arg1));
    t5 = rd32(self) + 1u;
    wr32(self, t5);
    t6 = (t3 & 0xffffff00u) | rd8(arg1);
    g->eax = t5;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, rd32(COW_IMG(0x10329170u)), t6, 1, t6);
    t8 = g->ecx;
    if (t7 != 0u)
    {
        ecx = t8;
        wr8(rd32(self) + rd32(self + 8u), rd8(arg1 + 1u));
        t9 = rd32(self) + 1u;
        wr32(self, t9);
    }
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000de20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000de20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
