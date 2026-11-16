/* f_0x10139eb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10139eb0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = 0u;
    edx = self + 0x16u;
L_10139ebc: ;
    if (rd8(edx) == (uint8_t)arg1) goto L_10139ecf;
    if ((int32_t)(eax + 1u) < 10)
    {
        eax = eax + 1u;
        edx = edx + 4u;
        goto L_10139ebc;
    }
    return 0u;
L_10139ecf: ;
    t1 = rd8(eax * 4u + self + 0x17u);
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139eb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10139eb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
