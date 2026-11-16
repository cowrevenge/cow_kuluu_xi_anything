/* f_0x1012ce60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012ce60(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x18u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x18u);
        edx = in_edx;
    }
    else
    {
        g->eax = rd32(self);
        g->edx = in_edx;
        t1 = rd32(self);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1 + 4u), self, 0);
        t3 = g->edx;
        wr8(self + 0x18u, 1u);
        eax = t2;
        edx = t3;
    }
    t4 = (edx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    g->eax = eax;
    g->edx = t4;
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, COW_IMG(0x1012cc20u), 1, t4);
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012ce60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012ce60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
