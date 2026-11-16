/* f_0x10210fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10210fc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x14u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x14u);
        t1 = rd32(sp0 + 4u);
        t2 = rd32(self + 0x18u);
        g->edx = t2;
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, eax, t1, 2, t2, t1);
        t3 = g->edx;
        wr32(self + 0x14u, 0u);
        edx = t3;
    }
    t4 = rd32(self + 8u);
    wr8(self + 0x3au, 0u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x1015e790u), t4, COW_IMG(0x10621838u), g->edx, 0, 2, t4, 1u);
    t6 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x1036f618u));
    g->esp = sp0;
    g->edx = t6;
    return cow_tailcall(g, COW_IMG(0x1015e910u), t5, COW_IMG(0x10621838u), t6);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10210fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10210fc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
