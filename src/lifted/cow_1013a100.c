/* f_0x1013a100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013a100(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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

    if (rd8(self + 0x18u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x18u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 3u);
        t2 = g->edx;
        g->edx = t2;
        cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 3u);
        t3 = g->edx;
        g->eax = rd32(COW_IMG(0x1057847cu));
        g->edx = t3;
        t4 = rd32(COW_IMG(0x1057847cu));
        t5 = cow_thiscall(g, COW_IMG(0x10221680u), t4 + 0xa4u, 0);
        t6 = g->edx;
        g->edx = t6;
        cow_thiscall(g, COW_IMG(0x10221680u), rd32(COW_IMG(0x105781f8u)) + 0x20u, 0);
        t7 = g->edx;
        wr8(self + 0x18u, 0u);
        edx = t7;
    }
    wr32(self + 0xcu, 0x5au);
    wr32(self + 0x10u, 0u);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013a100(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
