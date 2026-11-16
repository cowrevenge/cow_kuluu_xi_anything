/* f_0x101ed590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ed590(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd8(self + 0x10u);
    wr8(self + 0xdu, 0u);
    wr8(self + 0xcu, 0u);
    if ((uint8_t)t1 == 0u)
    {
        eax = 0u;
        edx = (in_edx & 0xffffff00u) | t1;
    }
    else
    {
        edx = (in_edx & 0xffffff00u) | t1;
        t2 = rd8(self + 0x11u);
        g->edx = edx;
        g->esp = sp0;
        t3 = cow_call_regs(g, COW_IMG(0x101f7080u), t2, rd32(COW_IMG(0x10664508u)), g->edx, 0, 2, t2, 0u);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ed590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ed590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
