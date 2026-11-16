/* f_0x1025ee80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_1025ee80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x68u) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edi = rd32(self + 0x68u);
    }
    else
    {
        edi = rd32(self + 0x68u);
        t1 = rd32(self + 0x18u);
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(rd32(t1) + 0x18u), rd32(t1), 2, t1, edi);
        t3 = g->edx;
        t4 = cow_thiscall(g, COW_IMG(0x1025ee70u), self, 0);
        t5 = g->ecx;
        eax = t4;
        ecx = t5;
    }
    t6 = rd32(self + 0x54u);
    g->edx = t6;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(COW_IMG(0x103291fcu)), ecx, 1, t6);
    t7 = g->edx;
    g->edx = t7;
    return edi == 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025ee80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025ee80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
