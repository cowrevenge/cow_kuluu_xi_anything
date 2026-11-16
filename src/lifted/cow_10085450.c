/* f_0x10085450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10085450(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0xa0u) == 0u)
    {
        eax = rd32(self + 0xa0u);
        goto L_10085481;
    }
    eax = rd32(self + 0xa0u);
    t1 = (eax & 0xffff7473u) | 0x7473u;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(self) + 0x298u), self, 3, t1, self, 0u);
    wr32(self + 0xa0u, arg1);
    return arg1;
L_10085481: ;
    wr32(self + 0xa0u, arg1);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10085450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10085450(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
