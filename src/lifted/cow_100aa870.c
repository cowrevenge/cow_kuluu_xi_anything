/* f_0x100aa870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100aa870(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (arg1 != t1)
    {
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x1047d600u), 1, 0u);
        t3 = g->edx;
        edx = t3;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10081600u), COW_IMG(0x10487f58u), 0);
    t5 = g->edx;
    if (arg1 == t4)
    {
        eax = t4;
        edx = t5;
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x10487f58u), 1, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aa870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100aa870(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
