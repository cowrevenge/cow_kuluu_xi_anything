/* f_0x10117ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10117ee0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int8_t)rd8(self + 0x6fu) <= 0)
    {
        eax = in_eax;
    }
    else
    {
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x6fu);
        t1 = rd32(COW_IMG(0x1057876cu));
        wr16(t1 + 0x6au, (uint16_t)(rd16(t1 + 0x6au) - (uint16_t)(uint32_t)(int8_t)edx));
        wr8(self + 0x6fu, 0u);
        eax = t1;
    }
    wr8(self + 0x70u, 0u);
    wr8(self + 0x6eu, 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10117ee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10117ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
