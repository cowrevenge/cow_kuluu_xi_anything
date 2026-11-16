/* f_0x100814f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100814f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_1008151c;
    }
    if (rd32(arg1 + 0x70u) == 0u)
    {
        edx = in_edx;
        goto L_1008151c;
    }
    eax = rd32(arg1 + 0x70u);
    if (!(rd32(eax + 0x120u) >> 9u & 1u))
    {
        edx = rd32(eax + 0x120u) >> 9u;
        goto L_1008151c;
    }
    t1 = rd32(eax + 0x74u);
    wr32(self + 4u, t1);
    t2 = rd32(eax + 0x78u);
    wr32(self + 8u, t2);
    g->edx = t1;
    return t2;
L_1008151c: ;
    wr8(self + 0xbu, 4u);
    t3 = rd32(self + 8u) & 0xff000000u;
    wr32(self + 8u, t3);
    g->edx = edx;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100814f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100814f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
