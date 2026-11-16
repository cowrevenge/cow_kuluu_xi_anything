/* f_0x10134760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10134760(Guest* g)
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

    if (rd8(self + 0x14fu) == 0xffu)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f898u));
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f854u));
    t6 = g->edx;
    t7 = rd32(COW_IMG(0x10664508u));
    wr32(COW_IMG(0x105781c4u), 0u);
    g->edx = t6;
    cow_tailcall(g, COW_IMG(0x10210840u), t5, t7, t6);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10134760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10134760(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
