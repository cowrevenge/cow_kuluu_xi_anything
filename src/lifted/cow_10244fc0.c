/* f_0x10244fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10244fc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;

    if ((int16_t)rd16(rd32(self + 8u) + 0x4cu) <= 0)
    {
        eax = rd32(self + 8u);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    }
    else
    {
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        t1 = rd8(COW_IMG(0x1033cb57u) + edx + rd32(self + 0x14u) * 5u);
        t2 = rd32(COW_IMG(0x10669078u));
        wr32(t2 + 0x2cu, t1);
        eax = t2;
        edx = t1;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10244fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10244fc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
