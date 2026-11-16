/* f_0x10062880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10062880(Guest* g)
{
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
    }
    else
    {
        edx = t2;
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
        g->edx = rd32(t3);
        t4 = rd32(t3);
        cow_thiscall(g, rd32(t4 + 0x16cu), t3, 0);
        t5 = g->edx;
        edx = t5;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1003b830u), self + 0x34u, 1, arg1);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
    t8 = g->edx;
    if (t7 == 0u)
    {
        edx = t8;
    }
    else
    {
        edx = t8;
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
        g->edx = rd32(t9);
        t10 = rd32(t9);
        cow_thiscall(g, rd32(t10 + 0x168u), t9, 0);
        t11 = g->edx;
        edx = t11;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10062880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
